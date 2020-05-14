/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020 Mark Stephen Sobkow
 *
 *	This file is part of MSS Code Factory.
 *
 *	MSS Code Factory is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU Lesser General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	MSS Code Factory is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU Lesser General Public License for more details.
 *
 *	You should have received a copy of the GNU Lesser General Public License
 *	along with MSS Code Factory.  If not, see https://www.gnu.org/licenses/.
 *
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>
#include <msscf/MssCFCounter.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFGenRuleObj.hpp>
#include <msscf/MssCFGenTruncObj.hpp>
#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>
#include <msscf/MssCFGelCompiler.hpp>

namespace cfcore {

	const std::string MssCFGenContext::CLASS_NAME( "MssCFGenContext" );

	/**
	 *	Release an instance properly.  You must never do "delete genContext"; use
	 *	"genContext->release()" instead.
	 *
	 *	Returns the prevContext of this instance before it was deleted, making
	 *	it easy to write a chaining loop that deletes entire segments of the
	 *	GenContext stack managed by an MssCFEngine instance.
	 */
	MssCFGenContext* MssCFGenContext::release() {
		// Save what we need now, because this is about to be deleted under our execution
		MssCFGenContext* retPrevContext = prevContext;
		ICFGenKbGenItemObj* hangOnToOrig = orig;

		// End the edit of this instance, which deletes it
		if( ( hangOnToOrig != NULL ) && ( hangOnToOrig->getEdit() != NULL ) ) {
			endEdit();
		}
		else {
			delete this;
		}

		// Now we need to make sure the orig is deleted, too.
		if( hangOnToOrig != NULL ) {
			delete hangOnToOrig;
			hangOnToOrig = NULL;
		}

		return( retPrevContext );
	}

	const std::string& MssCFGenContext::getGenGenerateOnce() {
		if( genFile != NULL ) {
			if( genFile->getOptionalGenerateOnceReference() != NULL ) {
				genGenerateOnce = genFile->getOptionalGenerateOnceValue();
			}
			else {
				genGenerateOnce.assign( cflib::CFLib::S_FALSE.c_str(), cflib::CFLib::S_FALSE.length() );
			}
		}
		else {
			genGenerateOnce.assign( cflib::CFLib::S_FALSE.c_str(), cflib::CFLib::S_FALSE.length() );
		}
		return( genGenerateOnce );
	}

	const std::string& MssCFGenContext::getGeneratingBuild() {
		return( strGeneratingBuild );
	}

	void MssCFGenContext::setGeneratingBuild( const std::string& value ) {
		strGeneratingBuild = value;
	}

	const std::string MssCFGenContext::getSourceBundle() const {
		return( sourceBundle );
	}

	cflib::ICFLibAnyObj* MssCFGenContext::getGenDef() const {
		return( genDef );
	}

	void MssCFGenContext::setGenDef( cflib::ICFLibAnyObj* value ) {
		static const std::string S_ProcName = "setGenDef";
		genDef = value;
		if( genDef != NULL ) {
			const std::string genDefClassName = genDef->getGenDefName();
			if( genDefClassName.length() <= 0 ) {
				static const std::string S_GenDefDotGenDefName( "genDef.GenDefName" );
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GenDefDotGenDefName );
			}
			ICFGenKbDefClassObj* optionalLookupGenDef = getSchema()->getDefClassTableObj()->readDefClassByNameIdx( genDefClassName );
			if( optionalLookupGenDef == NULL ) {
				static const std::string S_MsgPart1( "Could not resolve optionalLookupGenDef for \"" );
				static const std::string S_MsgPart2( "\"" );
				std::string S_Msg = S_MsgPart1 + genDefClassName + S_MsgPart2;
				throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
			}
			setRequiredLookupGenDef( optionalLookupGenDef );
		}
	}

	cflib::ICFLibAnyObj* MssCFGenContext::getScopeDef() const {
		return( scopeDef );
	}

	MssCFEngine* MssCFGenContext::getGenEngine() const {
		return( genEngine );
	}

	void MssCFGenContext::setGenEngine( MssCFEngine* value ) {
		genEngine = value;
	}

	MssCFGenContext* MssCFGenContext::getGenFileContext() const {
		return( genFileContext );
	}

	const std::string& MssCFGenContext::getGenFileGenerateOnce() const {
		return( outputGenerateOnce );
	}

	const std::string& MssCFGenContext::getGenFileModuleName() const {
		return( outputModuleName );
	}

	const std::string& MssCFGenContext::getGenFileBaseName() const {
		return( outputBaseName );
	}

	const std::string& MssCFGenContext::getGenFileName() const {
		return( outputName );
	}

	const std::string& MssCFGenContext::getGenFileFullName() const {
		return( outputFullName );
	}

	const std::string& MssCFGenContext::getSourcePackage() const {
		return( sourceBundle );
	}

	std::string MssCFGenContext::getGeneratorName() const {
		std::string retval = genEngine->getGeneratorName();
		return( retval );
	}

	std::string MssCFGenContext::getGeneratorVersion() const {
		std::string retval = genEngine->getGeneratorVersion();
		return( retval );
	}

	std::string MssCFGenContext::getGenDate() const {
		std::string retval = genEngine->getGenTimestampString();
		return( retval );
	}

	std::string MssCFGenContext::getGenTime() const {
		std::string retval; // genEngine->getGenTimeString();
		return( retval );
	}

	std::string MssCFGenContext::getGenTimestamp() const {
		std::string retval = genEngine->getGenTimestampString();
		return( retval );
	}

	std::string MssCFGenContext::getGenSerializableUID() {
		std::string retval = genEngine->getNextGenSerializableUIDString();
		return( retval );
	}

	std::string MssCFGenContext::getGenBasePackageName() {
		if( genBasePackageName.length() <= 0 ) {
			if( genBasePackageBin == NULL ) {
				if( genFile != NULL ) {
					std::string execName( genFile->getGenDefName() );
					execName.append( "::" );
					if( genFile->getOptionalLookupScopeDef() != NULL ) {
						execName.append( genFile->getOptionalLookupScopeDef()->getRequiredName() );
						execName.append( "::" );
					}
					else {
						execName.append( "Object::" );
					}
					execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
					execName.append( ".BasePackageName" );
					if( genFile->getOptionalBasePackageNameReference() != NULL ) {
						std::string src = genFile->getOptionalBasePackageNameValue();
						genBasePackageBin = genEngine->getGelCompiler()->compileExecutable( execName, src, genFile );
					}
					else {
						genBasePackageBin = genEngine->getGelCompiler()->compileExecutable( execName, cflib::CFLib::S_EMPTY, genFile );
					}
				}
			}
			if( genBasePackageBin != NULL ) {
				genBasePackageName = genBasePackageBin->expand( this );
				if( isExpansionNull() ) {
					genBasePackageName = "$" + genBasePackageBin->getRequiredSourceText() + "$";
				}
			}
		}
		clearExpansionIsNull();
		return( genBasePackageName );
	}

	std::string MssCFGenContext::getGenModuleName() {
		if( genModuleName.length() <= 0 ) {
			if( genModuleNameBin == NULL ) {
				if( genFile != NULL ) {
					std::string execName( genFile->getGenDefName() );
					execName.append( "::" );
					if( genFile->getOptionalLookupScopeDef() != NULL ) {
						execName.append( genFile->getOptionalLookupScopeDef()->getRequiredName() );
						execName.append( "::" );
					}
					else {
						execName.append( "Object::" );
					}
					execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
					execName.append( ".ModuleName" );
					if( genFile->getOptionalModuleNameReference() != NULL ) {
						std::string src = genFile->getOptionalModuleNameValue();
						genModuleNameBin = genEngine->getGelCompiler()->compileExecutable( execName, src, genFile );
					}
					else {
						genModuleNameBin = genEngine->getGelCompiler()->compileExecutable( execName, cflib::CFLib::S_EMPTY, genFile );
					}
				}
			}
			if( genModuleNameBin != NULL ) {
				genModuleName = genModuleNameBin->expand( this );
				if( isExpansionNull() ) {
					genModuleName = "$" + genModuleNameBin->getRequiredSourceText() + "$";
				}
			}
		}
		clearExpansionIsNull();
		return( genModuleName );
	}

	MssCFGenFileObj* MssCFGenContext::getGenFile() const {
		return( genFile );
	}

	std::string MssCFGenContext::getGenSubPackageName() {
		if( genSubPackageName.length() <= 0 ) {
			if( genFile != NULL ) {
				genSubPackageName = genFile->getSubPackage( this );
			}
		}
		return( genSubPackageName );
	}

	MssCFGenContext* MssCFGenContext::getPrevContext() const {
		return( prevContext );
	}

	const std::string& MssCFGenContext::getRootGenDir() const {
		return( rootGenDir );
	}

	void MssCFGenContext::setExpansionIsNull( bool argValue ) {
		expansionIsNull = argValue;
	}

	void MssCFGenContext::clearExpansionIsNull() {
		expansionIsNull = false;
	}

	bool MssCFGenContext::isExpansionNull() const {
		return( expansionIsNull );
	}

	/**
	 *	Construct an expansion context for the stack that pushes a sub class and definition.
	 */
	MssCFGenContext::MssCFGenContext(
		const std::string& generatingBuild,
		MssCFGenContext* genContext,
		const std::string& subClassGenDefName,
		cflib::ICFLibAnyObj* subObject )
	: CFGenKbGenItemEditObj( new CFGenKbGenItemObj( genContext->getGenEngine()->getCFGenKbSchema() ) )
	{
		static const std::string S_ProcName( "constructor-3-args" );

		setGeneratingBuild( generatingBuild );

		genEngine = genContext->getGenEngine();
		setRequiredLookupToolSet( genContext->getRequiredLookupToolSet() );
		setRequiredName( genContext->getRequiredName() );

		ICFGenKbDefClassObj* requiredLookupGenDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( subClassGenDefName );
		if( requiredLookupGenDef == NULL  ) {
			static const std::string S_MsgPart1( "Could not resolve requiredLookupGenDef for \"" );
			static const std::string S_MsgPart2( "\"" );
			std::string S_Msg = S_MsgPart1 + subClassGenDefName + S_MsgPart2;
			throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
		}
		setRequiredLookupGenDef( requiredLookupGenDef );
		rootGenDir = genContext->rootGenDir;
		prevContext = genContext;

		output = genContext->output;
		outputDirName = genContext->outputDirName;
		outputGenerateOnce = genContext->outputGenerateOnce;
		outputModuleName = genContext->outputModuleName;
		outputBaseName = genContext->outputBaseName;
		outputName = genContext->outputName;
		outputFullName = genContext->outputFullName;
		genFile = genContext->genFile;
		if( genFile != NULL ) {
			if( genFile->getOptionalGenerateOnceReference() != NULL ) {
				outputGenerateOnce = genFile->getOptionalGenerateOnceValue();
				if( outputGenerateOnce.length() <= 0 ) {
					outputGenerateOnce.assign( cflib::CFLib::S_FALSE.c_str(), cflib::CFLib::S_FALSE.length() );
				}
			}
			else {
				outputGenerateOnce.assign( cflib::CFLib::S_FALSE.c_str(), cflib::CFLib::S_FALSE.length() );
			}
		}
		else {
			outputGenerateOnce.assign( cflib::CFLib::S_FALSE.c_str(), cflib::CFLib::S_FALSE.length() );
		}
		genFileContext = genContext->genFileContext;
		genDefClassName = getRequiredLookupGenDef()->getRequiredName();
		genGenerateOnce = genContext->genGenerateOnce;
		genModuleName = genContext->genModuleName;
		genBasePackageName = genContext->genBasePackageName;
		genSubPackageName = genContext->genSubPackageName;
		sourceBundle = genContext->sourceBundle;
		sourcePackage = genContext->sourcePackage;

		counterMap = new std::map<std::string,MssCFCounter*>();

		scopeDef = genContext->getGenDef();
		genDef = subObject;
	}



	/**
	 *	Construct an instance.  Only invoked to create binding entries.
	 */
	MssCFGenContext::MssCFGenContext(
		const std::string& generatingBuild,
		MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	: CFGenKbGenItemEditObj( new CFGenKbGenItemObj( engine->getCFGenKbSchema() ) )
	{
		static const std::string S_ProcName( "constructor-6-args" );
		static const std::string S_Object( "Object" );

		setGeneratingBuild( generatingBuild );
		setGenEngine( engine );

		setRequiredLookupToolSet( genEngine->getCFGenKbSchema()->getToolSetTableObj()->readToolSetByNameIdx(toolset) );
		if( scopeDefClassName.length() > 0 ) {
			ICFGenKbDefClassObj* optionalLookupScopeDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( scopeDefClassName );
			if( optionalLookupScopeDef == NULL ) {
				static const std::string S_MsgPart1( "Could not resolve optionalLookupScopeDef for \"" );
				static const std::string S_MsgPart2( "\"" );
				std::string S_Msg = S_MsgPart1 + scopeDefClassName + S_MsgPart2;
				throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
			}
			setOptionalLookupScopeDef( optionalLookupScopeDef );
		}
		else {
			ICFGenKbDefClassObj* optionalLookupScopeDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( S_Object );
			if( optionalLookupScopeDef == NULL ) {
				static const std::string S_MsgPart1( "Could not resolve optionalLookupScopeDef for \"" );
				static const std::string S_MsgPart2( "\"" );
				std::string S_Msg = S_MsgPart1 + S_Object + S_MsgPart2;
				throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
			}
			setOptionalLookupScopeDef( optionalLookupScopeDef );
		}
		ICFGenKbDefClassObj* requiredLookupGenDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( genDefClassName );
		if( requiredLookupGenDef == NULL ) {
			static const std::string S_MsgPart1( "Could not resolve requiredLookupGenDef for \"" );
			static const std::string S_MsgPart2( "\"" );
			std::string S_Msg = S_MsgPart1 + genDefClassName + S_MsgPart2;
			throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
		}
		setRequiredLookupGenDef( requiredLookupGenDef );

		setRequiredName( itemName );

		rootGenDir = argRootGenDir;
		prevContext = NULL;

		output = NULL;
		outputDirName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputModuleName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputBaseName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputFullName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		genFile = NULL;
		genFileContext = NULL;
		genGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genModuleName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genBasePackageName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genSubPackageName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		// SKIP THIS -- IT IS WRONG this.genDefClassName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		counterMap = new std::map<std::string,MssCFCounter*>();

		sourceBundle.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		sourcePackage.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		genDef = NULL;
		scopeDef = NULL;
	}



	/**
	 *	Construct an expansion context for the stack.
	 */
	MssCFGenContext::MssCFGenContext(
		const std::string& generatingBuild,
		MssCFEngine* engine,
		const std::string& argRootGenDir,
		const std::string& toolset,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		cflib::ICFLibAnyObj* argGenDef,
		cflib::ICFLibAnyObj* argScopeDef )
	: CFGenKbGenItemEditObj(new CFGenKbGenItemObj(engine->getCFGenKbSchema()))
	{
		static const std::string S_ProcName( "constructor-8-args" );
		static const std::string S_Object( "Object" );

		setGeneratingBuild( generatingBuild );
		setGenEngine( engine );

		setRequiredLookupToolSet( genEngine->getCFGenKbSchema()->getToolSetTableObj()->readToolSetByNameIdx(toolset) );
		if( scopeDefClassName.length() > 0 ) {
			ICFGenKbDefClassObj* optionalLookupScopeDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( scopeDefClassName );
			if( optionalLookupScopeDef == NULL  ) {
				static const std::string S_MsgPart1( "Could not resolve optionalLookupScopeDef for \"" );
				static const std::string S_MsgPart2( "\"" );
				std::string S_Msg = S_MsgPart1 + scopeDefClassName + S_MsgPart2;
				throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
			}
			setOptionalLookupScopeDef( optionalLookupScopeDef );
		}
		else {
			ICFGenKbDefClassObj* optionalLookupScopeDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( S_Object );
			if( optionalLookupScopeDef == NULL ) {
				static const std::string S_MsgPart1( "Could not resolve optionalLookupScopeDef for \"" );
				static const std::string S_MsgPart2( "\"" );
				std::string S_Msg = S_MsgPart1 + S_Object + S_MsgPart2;
				throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
			}
			setOptionalLookupScopeDef( optionalLookupScopeDef );
		}
		ICFGenKbDefClassObj* requiredLookupGenDef = genEngine->getCFGenKbSchema()->getDefClassTableObj()->readDefClassByNameIdx( genDefClassName );
		if( requiredLookupGenDef == NULL ) {
			static const std::string S_MsgPart1( "Could not resolve requiredLookupGenDef for \"" );
			static const std::string S_MsgPart2( "\"" );
			std::string S_Msg = S_MsgPart1 + genDefClassName + S_MsgPart2;
			throw cflib::CFLibUnresolvedRelationException( CLASS_NAME, S_ProcName, S_Msg );
		}
		setRequiredLookupGenDef( requiredLookupGenDef );
		setRequiredName( itemName );

		rootGenDir = argRootGenDir;
		prevContext = NULL;

		output = NULL;
		outputDirName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputModuleName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputBaseName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputFullName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		genFile = NULL;
		genFileContext = NULL;
		genGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genModuleName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genBasePackageName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genSubPackageName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		// SKIP THIS, IT IS WRONG genDefClassName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		counterMap = new std::map<std::string,MssCFCounter*>();

		sourceBundle.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		sourcePackage.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		this->genDefClassName = getRequiredLookupGenDef()->getRequiredName();

		genDef = argGenDef;
		scopeDef = argScopeDef;
	}

	MssCFGenContext::~MssCFGenContext() {
		if( genModuleNameBin != NULL ) {
			delete genModuleNameBin;
			genModuleNameBin = NULL;
		}

		if( genBasePackageBin != NULL ) {
			delete genBasePackageBin;
			genBasePackageBin = NULL;
		}

		if( genFileContext != NULL ) {
			// DO NOT delete genFileContext - it has multiple references and deleting it causes exceptions due to double-deletes
			// delete genFileContext;
			genFileContext = NULL;
		}

		genFile = NULL;

		if( counterMap != NULL ) {
			MssCFCounter* curCounter = NULL;
			auto iterCounterMap = counterMap->begin();
			auto endCounterMap = counterMap->end();
			while( iterCounterMap != endCounterMap ) {
				curCounter = iterCounterMap->second;
				if( curCounter != NULL ) {
					iterCounterMap->second = NULL;
					delete curCounter;
					curCounter = NULL;
				}
				iterCounterMap ++;
			}
			delete counterMap;
			counterMap = NULL;
		}
	}

	/**
	 *	Build a reference context
	 */
	MssCFGenContext* MssCFGenContext::buildRefContext( cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_Object( "Object" );
		MssCFGenContext* priorContext = NULL;
		cflib::ICFLibAnyObj* scopeDef = NULL;
		MssCFGenContext* ret = NULL;

	//	If we have more scope available, follow it first

		scopeDef = genDef->getObjScope();
		if( scopeDef != NULL ) {
			priorContext = buildRefContext( scopeDef );
		}

	//	"Call" the current scope from the prior scope.  If we have no
	//	prior context, we have to treat the current artificial context
	//	as being the top.

		if( priorContext != NULL ) {
			ret = priorContext->getGenEngine()->getGenContextFactory()->newGenContext( priorContext->getGeneratingBuild(),
				priorContext,
				genDef->getGenDefName(),
				genDef );
		}
		else {
			ret = getGenEngine()->getGenContextFactory()->newGenContext( (( genEngine->getGenContext() != NULL ) ? genEngine->getGenContext()->getGeneratingBuild() : "1" ),
				genEngine,
				rootGenDir,
				this->getRequiredLookupToolSet()->getRequiredName(),
				S_Object,
				genDef->getGenDefName(),
				genEngine->getTargetRuleName() );

			ret->rootGenDir = rootGenDir;
			ret->prevContext = this;

			ret->output = output;
			ret->outputDirName = outputDirName;
			ret->outputGenerateOnce = outputGenerateOnce;
			ret->outputModuleName = outputModuleName;
			ret->outputBaseName = outputBaseName;
			ret->outputName = outputName;
			ret->outputFullName = outputFullName;
			ret->genFile = genFile;
			if( ret->genFile != NULL ) {
				if( ret->genFile->getOptionalGenerateOnceReference() ) {
					ret->outputGenerateOnce = ret->genFile->getOptionalGenerateOnceValue();
				}
				else {
					ret->outputGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
				}
			}
			ret->genFileContext = genFileContext;
			ret->genSubPackageName = genSubPackageName;
			ret->genDefClassName = genDefClassName;
			ret->sourceBundle = sourceBundle;
			ret->sourcePackage = sourcePackage;
			ret->genDef = genDef;
		}

		return( ret );
	}

	void MssCFGenContext::setRootGenDir( const std::string& value ) {
		rootGenDir = value;
	}

	void MssCFGenContext::setPrevContext( MssCFGenContext* value ) {
		prevContext = value;
	}

	void MssCFGenContext::setOutput( std::ofstream* value ) {
		output = value;
	}

	void MssCFGenContext::setOutputDirName( const std::string& value ) {
		outputDirName = value;
	}

	void MssCFGenContext::setOutputGenerateOnce( const std::string& value ) {
		outputGenerateOnce = value;
	}

	void MssCFGenContext::setOutputModuleName( const std::string& value ) {
		outputModuleName = value;
	}

	void MssCFGenContext::setOutputBaseName( const std::string& value ) {
		outputBaseName = value;
	}

	void MssCFGenContext::setOutputName( const std::string& value ) {
		outputName = value;
	}

	void MssCFGenContext::setOutputFullName( const std::string& value ) {
		outputFullName = value;
	}

	void MssCFGenContext::setGenFile( MssCFGenFileObj* value ) {
		genFile = value;
		if( genFile != NULL ) {
			if( genFile->getOptionalGenerateOnceReference() != NULL ) {
				outputGenerateOnce = genFile->getOptionalGenerateOnceValue();
			}
			else {
				outputGenerateOnce.assign( cflib::CFLib::S_FALSE.c_str(), cflib::CFLib::S_FALSE.length() );
			}
			outputModuleName = genFile->getModuleName( this );
		}
		else {
			outputGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
			outputModuleName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		}
	}

	void MssCFGenContext::setGenFileContext( MssCFGenContext* value ) {
		genFileContext = value;
	}

	void MssCFGenContext::setGenSubPackageName( const std::string& value ) {
		genSubPackageName = value;
	}

	void MssCFGenContext::setGenDefClassName( const std::string& value ) {
		genDefClassName = value;
	}

	void MssCFGenContext::setSourceBundle( const std::string& value ) {
		sourceBundle = value;
	}

	void MssCFGenContext::setSourcePackage( const std::string& value ) {
		sourcePackage = value;
	}

	/**
	 *	Close the source file
	 */
	void MssCFGenContext::closeSourceFile() {
		if( output != NULL ) {
			try {
				output->close();
			}
			catch( ... ) {
			}
			delete output;
			output = NULL;
		}

		outputDirName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputGenerateOnce.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputModuleName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputBaseName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		outputFullName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		genFile = NULL;
		genFileContext = NULL;
		genDefClassName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		genSubPackageName.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );

		sourceBundle.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
		sourcePackage.assign( cflib::CFLib::S_EMPTY.c_str(), cflib::CFLib::S_EMPTY.length() );
	}


	/**
	 *	Expand the body of an item
	 */
	std::string MssCFGenContext::expandItemBody( ICFGenKbGenItemObj* genItem ) {
		std::string ret;
		static const std::string S_ProcName( "expandItemBody" );
		static const std::string S_Expanding( "Expanding " );
		static const std::string S_Ellipses( "..." );
		static const std::string S_ExpandingEmpty( "Expanding ?EMPTY?..." );

		if( getGenEngine()->getDebugMode() ) {
			std::string tbe = genItem->getRequiredName();
			if( tbe.length() > 0 ) {
				std::cerr << S_Expanding << tbe << S_Ellipses;
			}
			else {
				std::cerr << S_ExpandingEmpty;
			}
		}

		setExpansionIsNull();

		const classcode_t genItemClassCode = genItem->getClassCode();
		if( genItemClassCode == CFGenKbGenFileBuff::CLASS_CODE ) {
			ret = dynamic_cast<MssCFGenFileObj*>( genItem )->expandBody( this );
		}
		else if( genItemClassCode == CFGenKbGenRuleBuff::CLASS_CODE ) {
		   	ret = dynamic_cast<MssCFGenRuleObj*>( genItem )->expandBody( this );
		}
		else if ( genItemClassCode == CFGenKbGenTruncBuff::CLASS_CODE ) {
			ret = dynamic_cast<MssCFGenTruncObj*>( genItem )->expandBody(this);
		}
		else if ( genItemClassCode == CFGenKbGenBindBuff::CLASS_CODE ) {
			ret = dynamic_cast<MssCFGenBindObj*>( genItem )->expandBody( this );
		}
		else if( genItemClassCode == CFGenKbGenReferenceBuff::CLASS_CODE ) {
			static const std::string S_CannotExpandReference( "Cannot expand reference " );
			static const std::string S_Directly( " directly" );
			std::string S_Msg = S_CannotExpandReference + genItem->getRequiredName() + S_Directly;
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_Msg );
		}
		else if( genItemClassCode == CFGenKbGenIteratorBuff::CLASS_CODE ) {
		   	ret = dynamic_cast<MssCFGenIteratorObj*>( genItem )->expandBody( this );
		}
		else {
			static const std::string S_UnsupportedGenerationItem( "Unsupported generation item class" );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_UnsupportedGenerationItem );
		}

		return( ret );
	}

	void MssCFGenContext::flush() {
		output->flush();
	}

	void MssCFGenContext::newLine() {
		static const std::string S_Newline( "\n" );
		if( output != NULL ) {
			output->write( S_Newline.c_str(), S_Newline.length() );
		}
	}

	/**
	 *	Wrapper for the BufferedWriter output stream
	 */
	void MssCFGenContext::write( int c ) {
		if( output != NULL ) {
			output->put( c );
		}
	}

	void MssCFGenContext::write( const std::string& s ) {
		if( output != NULL ) {
			output->write( s.c_str(), s.length() );
		}
	}

	MssCFCounter* MssCFGenContext::addCounter( const std::string& name ) {
		static const std::string S_ProcName( "addCounter" );
		static const std::string S_Name( "name" );
		if( name.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_Name );
		}

		auto searchCounterMapByKey = counterMap->find( name );
		if( searchCounterMapByKey != counterMap->end() ) {
			static const std::string S_Counter( "Counter \"" );
			static const std::string S_AlreadyExists( "\" already exists" );
			std::string S_Msg = S_Counter + name + S_AlreadyExists;
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		MssCFCounter* newCounter = new MssCFCounter( name );
		counterMap->insert( std::map<std::string,MssCFCounter*>::value_type( newCounter->getName(), newCounter ) );

		return( newCounter );
	}

	MssCFCounter* MssCFGenContext::getCounter( const std::string& name ) {
		static const std::string S_ProcName( "getCounter" );
		static const std::string S_Name( "name" );

		if( name.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Name );
		}

		MssCFCounter* found = NULL;
		auto searchCounterMapByKey = counterMap->find( name );
		if( searchCounterMapByKey != counterMap->end() ) {
			found = searchCounterMapByKey->second;
		}
		else {
			MssCFGenContext* probe = this;
			while( ( found == NULL ) && ( probe->prevContext != NULL ) ) {
				probe = probe->prevContext;
				found = probe->getCounter( name );
			}
		}

		return( found );
	}

	void MssCFGenContext::openSourceFile(
		MssCFGenFileObj* argGenFile,
		const std::string& argGenDefClassName,
		const std::string& argSourceBundle,
		const std::string& moduleName,
		const std::string& fullPackage,
		const std::string& baseGenDir,
		const std::string& baseWorkDir,
		const std::string& srcFileDir,
		const std::string& fileName,
		const std::string& generateOnce )
	{
		static const std::string fileSep( "/" );
		static const std::string S_ProcName = "openSourceFile";
		static const std::string S_No( "no" );
		static const std::string S_Yes( "yes" );
		static const std::string S_ArgGenFile( "argGenFile" );
		static const std::string S_ArgGenDefClassName( "argGenDefClassName" );
		static const std::string S_ArgSourceBundle( "argSourceBundle" );
		static const std::string S_ModuleName( "moduleName" );
		static const std::string S_FullPackage( "fullPackage" );
		static const std::string S_BaseGenDir( "baseGenDir" );
		static const std::string S_BaseWorkDir( "baseWorkDir" );
		static const std::string S_SrcFileDir( "srcFileDir" );
		static const std::string S_FileName( "fileName" );
		static const std::string S_GenerateOnce( "generateOnce" );

		std::string sysDirName;

		if( argGenFile == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_ArgGenFile );
		}

		if( argGenDefClassName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 2, S_ArgGenDefClassName );
		}

		if( baseGenDir.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 6, S_BaseGenDir );
		}

		if( baseWorkDir.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 7, S_BaseWorkDir );
		}

		// srcFileDir can be empty

		if( fileName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 9, S_FileName );
		}

		if( generateOnce.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 10, S_GenerateOnce );
		}

		if( output != NULL ) {
			static const std::string S_MsgAlreadyWriting( "Generation context is already writing \"" );
			static const std::string S_MsgEndDoubleQuote( "\"" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgAlreadyWriting + outputName + S_MsgEndDoubleQuote );
		}

		//	Save the generation context

		setGenFile( argGenFile );
		genFileContext = this;
		genDefClassName = argGenDefClassName; 

		static const std::string dirSep( "/" );
		static const char dot = '.';
		static const std::string S_Dot( "." );

		std::string outputDirName;
		std::string::size_type lastDot = fileName.find_last_of( '.', fileName.length() );
		if( lastDot != std::string::npos ) {
			outputDirName = fileName.substr( 0, lastDot );
		}
		else {
			outputDirName = fileName;
		}
		std::replace( outputDirName.begin(), outputDirName.end(), dot, dirSep[0] );

		outputName = fileName;
		if( srcFileDir.length() > 0 ) {
			outputDirName = baseGenDir + dirSep + srcFileDir;
		}
		else {
			outputDirName = baseGenDir;
		}
		sourceBundle = argSourceBundle;
		sourcePackage = fullPackage;

		outputModuleName = moduleName;

		/*
		 *	Internally the code always uses forward slashes to separate file names,
		 *	so we need to switch them over to backslashes on DOS derived file systems
		 *	such as DOS, Win95, WinNT, and OS/2.
		 */
		std::string outputWorkName;
		outputWorkName = baseWorkDir + fileSep + srcFileDir + fileSep + outputName;
		outputFullName = outputDirName + fileSep + outputName;
		sysDirName = outputDirName;

		cflib::CFLib::createDirectory(sysDirName);

		std::ifstream test( outputFullName.c_str() );
		if( test.good() ) {
			// Fully validate the value of generateOnce
			if( ( generateOnce == cflib::CFLib::S_EMPTY )
			 	|| ( generateOnce == cflib::CFLib::S_FALSE )
			 	|| ( generateOnce == S_No ) )
			{
				if( output != NULL ) {
					output->close();
					delete output;
					output = NULL;
				}
				output = new std::ofstream();
				output->open( outputFullName, std::ofstream::trunc );
			}
			else if( ( generateOnce == cflib::CFLib::S_TRUE )
				|| ( generateOnce == S_Yes ) )
			{
				if( output != NULL ) {
					output->close();
					delete output;
					output = NULL;
				}
			}
			else {
				if( output != NULL ) {
					output->close();
					delete output;
					output = NULL;
				}
				output = new std::ofstream();
				output->open( outputFullName, std::ofstream::trunc );
			}
		}
		else {
			if( output != NULL ) {
				output->close();
				delete output;
				output = NULL;
			}
			output = new std::ofstream();
			output->open( outputFullName, std::ofstream::trunc );
		}
		if( ( output != NULL ) && ( ! output->good() ) ) {
			static const std::string S_CouldNotResolve( " Could not resolve open file name \"" );
			static const std::string S_Endit( "\" for output\n" );
			std::cerr << CLASS_NAME + cflib::CFLib::S_DOT + S_ProcName + S_CouldNotResolve + outputFullName + S_Endit;
			if( output != NULL ) {
				output->close();
				delete output;
				output = NULL;
			}
		}

		static const std::string S_Manufacturing( "Manufacturing " );
		genEngine->getLog()->message( S_Manufacturing + outputWorkName );
	}
}

