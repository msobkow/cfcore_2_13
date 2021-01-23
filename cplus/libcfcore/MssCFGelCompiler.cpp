/*
 *  MSS Code Factory CFCore 2.13 MssCF
 *
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 */

#define TRACE_COMPILER 0

#include <iostream>
#include <fstream>

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFCounter.hpp>
#include <msscf/MssCFGelCompiler.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>
#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>
#include <msscf/MssCFGenRuleObj.hpp>
#include <msscf/MssCFGenTruncObj.hpp>

#include <cfgenkbobj/CFGenKbGelErrorObj.hpp>
#include <cfgenkbobj/CFGenKbGelBoilerplateObj.hpp>
#include <cfgenkbobj/CFGenKbGelReferenceObj.hpp>
#include <cfgenkbobj/CFGenKbGelPrefixLineObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchLimbObj.hpp>

namespace cfcore {

	const std::string MssCFGelCompiler::CLASS_NAME( "MssCFGelCompiler" );
	const std::string MssCFGelCompiler::S_Asterisk( "*" );
	const std::string MssCFGelCompiler::S_Backslash( "\\" );
	const std::string MssCFGelCompiler::S_Object( "Object" );
	const std::string MssCFGelCompiler::_DOLLAR( "$" );
	const std::string MssCFGelCompiler::_EMPTY( "empty" );
	const std::string MssCFGelCompiler::_EMPTY_STRING( "" );
	const std::string MssCFGelCompiler::_STRIPLEADINGZEROES( "stripLeadingZeroes" );
	const std::string MssCFGelCompiler::_ITERATE( "iterate " );
	const std::string MssCFGelCompiler::_ITERATOR_BEFORE( "before" );
	const std::string MssCFGelCompiler::_ITERATOR_FIRST( "first" );
	const std::string MssCFGelCompiler::_ITERATOR_EACH( "each" );
	const std::string MssCFGelCompiler::_ITERATOR_LAST( "last" );
	const std::string MssCFGelCompiler::_ITERATOR_AFTER( "after" );
	const std::string MssCFGelCompiler::_ITERATOR_LONE( "lone" );
	const std::string MssCFGelCompiler::_ITERATOR_EMPTY( "empty" );
	const std::string MssCFGelCompiler::_SPREAD( "spread " );
	const std::string MssCFGelCompiler::_SPREAD_BETWEEN( "between" );
	const std::string MssCFGelCompiler::_POP( "pop" );
	const std::string MssCFGelCompiler::_POPTO( "popto " );
	const std::string MssCFGelCompiler::_POPTOP( "poptop " );
	const std::string MssCFGelCompiler::_POPONEFROMTOP( "poponefromtop " );
	const std::string MssCFGelCompiler::_REFERENCE( "reference " );
	const std::string MssCFGelCompiler::_SWITCH( "switch " );
	const std::string MssCFGelCompiler::_SWITCH_NIL( "nil" );
	const std::string MssCFGelCompiler::_SWITCH_EMPTY( "empty" );
	const std::string MssCFGelCompiler::_SWITCH_DEFAULT( "default" );
	const std::string MssCFGelCompiler::_COERCE_UPPER( "upper" );
	const std::string MssCFGelCompiler::_COERCE_LOWER( "lower" );
	const std::string MssCFGelCompiler::_COERCE_LEADLOWER( "leadlower" );
	const std::string MssCFGelCompiler::_COERCE_MIXED( "mixed" );
	const std::string MssCFGelCompiler::_PREFIX_LINE( "prefixline" );
	const std::string MssCFGelCompiler::_COUNTER( "counter " );
	const std::string MssCFGelCompiler::_COUNTER_OP_NEW( "new" );
	const std::string MssCFGelCompiler::_COUNTER_OP_INCR( "increment" );
	const std::string MssCFGelCompiler::_COUNTER_OP_DECR( "decrement" );
	const std::string MssCFGelCompiler::_COUNTER_OP_VALUE( "value" );
	const std::string MssCFGelCompiler::_BUILTIN_GENERATORNAME( "GeneratorName" );
	const std::string MssCFGelCompiler::_BUILTIN_GENERATORVERSION( "GeneratorVersion" );
	const std::string MssCFGelCompiler::_BUILTIN_GENDATE( "GenDate" );
	const std::string MssCFGelCompiler::_BUILTIN_GENTIME( "GenTime" );
	const std::string MssCFGelCompiler::_BUILTIN_GENTIMESTAMP( "GenTimestamp" );
	const std::string MssCFGelCompiler::_BUILTIN_GENSERIALIZABLEUID( "GenSerializableUID" );
	const std::string MssCFGelCompiler::_BUILTIN_GENERATINGCLASS( "GeneratingClass" );
	const std::string MssCFGelCompiler::_BUILTIN_GENFILEFULLNAME( "GenFileFullName" );
	const std::string MssCFGelCompiler::_BUILTIN_GENFILEBASENAME( "GenFileBaseName" );
	const std::string MssCFGelCompiler::_BUILTIN_GENFILENAME( "GenFileName" );
	const std::string MssCFGelCompiler::_BUILTIN_GENFILEGENERATEONCE( "GenFileGenerateOnce" );
	const std::string MssCFGelCompiler::_BUILTIN_GENFILEMODULENAME( "GenFileModuleName" );
	const std::string MssCFGelCompiler::_BUILTIN_GENSUBPACKAGE( "GenSubPackage" );
	const std::string MssCFGelCompiler::_BUILTIN_SOURCEBUNDLE( "SourceBundle" );
	const std::string MssCFGelCompiler::_BUILTIN_SOURCEPACKAGE( "SourcePackage" );
	const std::string MssCFGelCompiler::_CONSTRAIN_MAX( "constrainMax " );
	const std::string MssCFGelCompiler::_CONSTRAIN_MIN( "constrainMin " );
	const std::string MssCFGelCompiler::S_MsgConstrainingValueExpansionNonNumeric( "Expansion of Constraining value produced a non-numeric result, \"" );
	const std::string MssCFGelCompiler::S_MsgIsNotNumeric( "\" is not a numeric string" );
	const std::string MssCFGelCompiler::S_MsgEmptyNotAllowedForMacro( "Empty value not allowed for macro" );
	const std::string MssCFGelCompiler::S_MsgRemainderOfMacroNotCompiledToConstrainedValue( "Remainder of macro was not compiled to produce a constrained value" );
	const std::string MssCFGelCompiler::S_MsgCounter( "Counter \"" );
	const std::string MssCFGelCompiler::S_MsgDoesNotExistInGenContext( "\" does not exist in the genContext" );
	const std::string MssCFGelCompiler::S_MsgBuildRefContextFailed( "buildRefContext() failed" );

	MssCFEngine* MssCFGelCompiler::getGenEngine() {
		return( genEngine );
	}

	ICFGenKbGelCacheObj* MssCFGelCompiler::getGelCache() {
		if( myGelCache == NULL ) {
			myGelCache = genEngine->getGelCache();
		}
		return( myGelCache );
	}

	void MssCFGelCompiler::setGenEngine( MssCFEngine* value ) {
		genEngine = value;
		setLog( genEngine->getLog() );
	}

	cflib::ICFLibMessageLog* MssCFGelCompiler::getLog() {
		return( log );
	}

	void MssCFGelCompiler::setLog( cflib::ICFLibMessageLog* newlog ) {
		log = newlog;
	}

	cflib::ICFLibMessageLog* MssCFGelCompiler::getCompileLog() {
		return( &msglog );
	}

	bool MssCFGelCompiler::hasCompileError() const {
		return( compileError );
	}

	const std::string& MssCFGelCompiler::getErrorText() const {
		return( msglog.getCacheContents() );
	}

	void MssCFGelCompiler::setCompileError() {
		compileError = true;
	}

	void MssCFGelCompiler::clearCompileError() {
		compileError = false;
	}

	std::string MssCFGelCompiler::getGenGenerateOnce( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenGenerateOnce();
		genContext->clearExpansionIsNull();
		return( retval );
	}

	std::string MssCFGelCompiler::getGenModuleName( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenModuleName();
		genContext->clearExpansionIsNull();
		return( retval );
	}

	std::string MssCFGelCompiler::getGenBasePackageName( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenBasePackageName();
		genContext->clearExpansionIsNull();
		return( retval );
	}

	std::string MssCFGelCompiler::getGenSubPackageName( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenSubPackageName();
		genContext->clearExpansionIsNull();
		return( retval );
	}

	/**
	 *	Construct an instance.  Only invoked to create binding entries.
	 */
	MssCFGelCompiler::MssCFGelCompiler( MssCFEngine* engine ) {
		genEngine = engine;
	}

	MssCFGelCompiler::~MssCFGelCompiler() {
	}

	MssCFGelCompiler::MssCFBuiltinEmpty::MssCFBuiltinEmpty( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( cflib::CFLib::S_EMPTY );
	}

	MssCFGelCompiler::MssCFBuiltinEmpty::~MssCFBuiltinEmpty() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinEmpty::expand( MssCFGenContext* genContext ) {
		std::string retval = cflib::CFLib::S_EMPTY;
		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFBuiltinGeneratingClass::MssCFBuiltinGeneratingClass( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENERATINGCLASS );
	}

	MssCFGelCompiler::MssCFBuiltinGeneratingClass::~MssCFBuiltinGeneratingClass() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGeneratingClass::expand( MssCFGenContext* genContext ) {
		std::string retval;
		MssCFGenContext* useFileContext = genContext->getGenFileContext();
		if( useFileContext != NULL ) {
			cfcore::MssCFGenFileObj* genFile = dynamic_cast<cfcore::MssCFGenFileObj*>( useFileContext->getGenDef() );
			if( genFile != NULL ) {
				retval = genFile->getExpansionClassName( useFileContext );
				if( useFileContext->isExpansionNull() ) {
					genContext->setExpansionIsNull();
				}
				else {
					genContext->clearExpansionIsNull();
				}
			}
			else {
				retval = cflib::CFLib::S_EMPTY;
				genContext->setExpansionIsNull();
			}
		}
		else {
			retval = cflib::CFLib::S_EMPTY;
			genContext->setExpansionIsNull();
		}
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenFileBaseName::MssCFBuiltinGenFileBaseName( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENFILEBASENAME );
	}

	MssCFGelCompiler::MssCFBuiltinGenFileBaseName::~MssCFBuiltinGenFileBaseName() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenFileBaseName::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenFileBaseName();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenFileGenerateOnce::MssCFBuiltinGenFileGenerateOnce( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENFILEGENERATEONCE );
	}

	MssCFGelCompiler::MssCFBuiltinGenFileGenerateOnce::~MssCFBuiltinGenFileGenerateOnce() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenFileGenerateOnce::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenFileGenerateOnce();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenFileModuleName::MssCFBuiltinGenFileModuleName( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENFILEMODULENAME );
	}

	MssCFGelCompiler::MssCFBuiltinGenFileModuleName::~MssCFBuiltinGenFileModuleName() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenFileModuleName::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenFileModuleName();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenFileName::MssCFBuiltinGenFileName( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENFILENAME );
	}

	MssCFGelCompiler::MssCFBuiltinGenFileName::~MssCFBuiltinGenFileName() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenFileName::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenFileName();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenFileFullName::MssCFBuiltinGenFileFullName( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENFILEFULLNAME );
	}

	MssCFGelCompiler::MssCFBuiltinGenFileFullName::~MssCFBuiltinGenFileFullName() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenFileFullName::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenFileFullName();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenSubPackageName::MssCFBuiltinGenSubPackageName( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENSUBPACKAGE );
	}

	MssCFGelCompiler::MssCFBuiltinGenSubPackageName::~MssCFBuiltinGenSubPackageName() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenSubPackageName::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenSubPackageName();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinSourceBundle::MssCFBuiltinSourceBundle( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_SOURCEBUNDLE );
	}

	MssCFGelCompiler::MssCFBuiltinSourceBundle::~MssCFBuiltinSourceBundle() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinSourceBundle::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getSourceBundle();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinSourcePackage::MssCFBuiltinSourcePackage( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_SOURCEPACKAGE );
	}

	MssCFGelCompiler::MssCFBuiltinSourcePackage::~MssCFBuiltinSourcePackage() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinSourcePackage::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getSourcePackage();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGeneratorName::MssCFBuiltinGeneratorName( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENERATORNAME );
	}

	MssCFGelCompiler::MssCFBuiltinGeneratorName::~MssCFBuiltinGeneratorName() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGeneratorName::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGeneratorName();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGeneratorVersion::MssCFBuiltinGeneratorVersion( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENERATORVERSION );
	}

	MssCFGelCompiler::MssCFBuiltinGeneratorVersion::~MssCFBuiltinGeneratorVersion() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGeneratorVersion::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGeneratorVersion();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenDate::MssCFBuiltinGenDate( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENDATE );
	}

	MssCFGelCompiler::MssCFBuiltinGenDate::~MssCFBuiltinGenDate() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenDate::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenDate();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenTime::MssCFBuiltinGenTime( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENTIME );
	}

	MssCFGelCompiler::MssCFBuiltinGenTime::~MssCFBuiltinGenTime() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenTime::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenTime();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenTimestamp::MssCFBuiltinGenTimestamp( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENTIMESTAMP );
	}

	MssCFGelCompiler::MssCFBuiltinGenTimestamp::~MssCFBuiltinGenTimestamp() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenTimestamp::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenTimestamp();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFBuiltinGenSerializableUID::MssCFBuiltinGenSerializableUID( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelBuiltinObj( argSchema )
	{
		getBuff()->setRequiredSourceText( _BUILTIN_GENSERIALIZABLEUID );
	}

	MssCFGelCompiler::MssCFBuiltinGenSerializableUID::~MssCFBuiltinGenSerializableUID() {
	}

	std::string MssCFGelCompiler::MssCFBuiltinGenSerializableUID::expand( MssCFGenContext* genContext ) {
		std::string retval = genContext->getGenSerializableUID();
		genContext->clearExpansionIsNull();
		return retval;
	}

	MssCFGelCompiler::MssCFConstrainMax::MssCFConstrainMax( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelConstrainObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFConstrainMax::~MssCFConstrainMax() {
	}

	std::string MssCFGelCompiler::MssCFConstrainMax::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFConstrainMax::expand" );
		int64_t actualConstraint;
		if( getOptionalHardConstraintReference() != NULL ) {
			actualConstraint = getOptionalHardConstraintValue();
		}
		else {
			const std::string* constrainingName = getOptionalConstrainingNameReference();
			if( ( constrainingName == NULL ) || ( constrainingName->length() == 0 ) ) {
				static const std::string S_Msg( "Neither a HardConstraint nor a ConstrainingName were specified" );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
			}

			std::string constraintStrValue;
			ICFGenKbGenItemObj* constraintItem = genContext->getGenEngine()->findContextItem( genContext, *constrainingName );
			if( constraintItem != NULL ) {
				classcode_t constraintClassCode = constraintItem->getClassCode();
				if( constraintClassCode == CFGenKbGenFileBuff::CLASS_CODE ) {
					constraintStrValue = dynamic_cast<MssCFGenFileObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenRuleBuff::CLASS_CODE ) {
					constraintStrValue = dynamic_cast<MssCFGenRuleObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenTruncBuff::CLASS_CODE )
				{
					constraintStrValue = dynamic_cast<MssCFGenTruncObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenBindBuff::CLASS_CODE )
				{
					constraintStrValue = dynamic_cast<MssCFGenBindObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenReferenceBuff::CLASS_CODE ) {
					static const std::string S_MsgCannotExpandReference( "Cannot expand reference " );
					static const std::string S_MsgDirectly( " directly" );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCannotExpandReference + constraintItem->getRequiredName() + S_MsgDirectly );
				}
				else if( constraintClassCode == CFGenKbGenIteratorBuff::CLASS_CODE ) {
					constraintStrValue = dynamic_cast<MssCFGenIteratorObj*>( constraintItem )->expandBody( genContext );
				}
				else {
					static const std::string S_Msg( "Unsupported generation item class code " );
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg + cflib::CFLib::formatClassCode( constraintClassCode ) );
				}

				bool isDigitString = true;
				int limitLen = constraintStrValue.length();
				for (int idxLimit = 0; isDigitString && (idxLimit < limitLen); idxLimit++)
				{
					unsigned char c = constraintStrValue[ idxLimit ];
					if ((c != '0')
					 && (c != '1')
					 && (c != '2')
					 && (c != '3')
					 && (c != '4')
					 && (c != '5')
					 && (c != '6')
					 && (c != '7')
					 && (c != '8')
					 && (c != '9')
					 && (c != '+')
					 && (c != '-'))
					{
						isDigitString = false;
					}
				}

				if( ! isDigitString ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgConstrainingValueExpansionNonNumeric + constraintStrValue + S_MsgIsNotNumeric );
				}

				actualConstraint = *cflib::CFLibXmlUtil::parseInt64( constraintStrValue );
			}
			else {
				genContext->clearExpansionIsNull();
				return( "$" + getRequiredSourceText() + "$" );
			}
		}

		ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
		if( remainder == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
		}

		std::string constrainedStrValue = remainder->expand( genContext );
		if( constrainedStrValue.length() <= 0  ) {
			static const std::string S_Msg( "Expansion of constrained value produced an empty result, not a numeric string" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		bool isDigitString = true;
		int limitLen = constrainedStrValue.length();
		for (int idxLimit = 0; isDigitString && (idxLimit < limitLen); idxLimit++)
		{
			unsigned char c = constrainedStrValue[ idxLimit ];
			if ((c != '0')
			 && (c != '1')
			 && (c != '2')
			 && (c != '3')
			 && (c != '4')
			 && (c != '5')
			 && (c != '6')
			 && (c != '7')
			 && (c != '8')
			 && (c != '9')
			 && (c != '+')
			 && (c != '-'))
			{
				isDigitString = false;
			}
		}

		if( ! isDigitString ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgConstrainingValueExpansionNonNumeric + constrainedStrValue + S_MsgIsNotNumeric );
		}

		int64_t constrainedValue = *cflib::CFLibXmlUtil::parseInt64( constrainedStrValue );

		int64_t effectiveValue;
		if( constrainedValue > actualConstraint ) {
			effectiveValue = actualConstraint;
		}
		else {
			effectiveValue = constrainedValue;
		}

		std::string retval = cflib::CFLibXmlUtil::formatInt64( effectiveValue );
		genContext->clearExpansionIsNull();

		return( retval );
	}

	MssCFGelCompiler::MssCFConstrainMin::MssCFConstrainMin( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelConstrainObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFConstrainMin::~MssCFConstrainMin() {
	}

	std::string MssCFGelCompiler::MssCFConstrainMin::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFConstrainMin::expand" );
		int64_t actualConstraint;
		if( getOptionalHardConstraintReference() != NULL ) {
			actualConstraint = getOptionalHardConstraintValue();
		}
		else {
			const std::string* constrainingName = getOptionalConstrainingNameReference();
			if( ( constrainingName == NULL ) || ( constrainingName->length() == 0 ) ) {
				static const std::string S_Msg( "Neither a HardConstraint nor a ConstrainingName were specified" );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
			}

			std::string constraintStrValue;
			ICFGenKbGenItemObj* constraintItem = genContext->getGenEngine()->findContextItem( genContext, *constrainingName );
			if( constraintItem != NULL ) {
				classcode_t constraintClassCode = constraintItem->getClassCode();
				if( constraintClassCode == CFGenKbGenFileBuff::CLASS_CODE ) {
					constraintStrValue = dynamic_cast<MssCFGenFileObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenRuleBuff::CLASS_CODE ) {
					constraintStrValue = dynamic_cast<MssCFGenRuleObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenTruncBuff::CLASS_CODE )
				{
					constraintStrValue = dynamic_cast<MssCFGenTruncObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenBindBuff::CLASS_CODE )
				{
					constraintStrValue = dynamic_cast<MssCFGenBindObj*>( constraintItem )->expandBody( genContext );
				}
				else if( constraintClassCode == CFGenKbGenReferenceBuff::CLASS_CODE ) {
					static const std::string S_MsgCannotExpandReference( "Cannot expand reference " );
					static const std::string S_MsgDirectly( " directly" );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCannotExpandReference + constraintItem->getRequiredName() + S_MsgDirectly );
				}
				else if( constraintClassCode == CFGenKbGenIteratorBuff::CLASS_CODE ) {
					constraintStrValue = dynamic_cast<MssCFGenIteratorObj*>( constraintItem )->expandBody( genContext );
				}
				else {
					static const std::string S_Msg( "Unsupported generation item class code " );
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg + cflib::CFLib::formatClassCode( constraintClassCode ) );
				}

				bool isDigitString = true;
				int limitLen = constraintStrValue.length();
				for (int idxLimit = 0; isDigitString && (idxLimit < limitLen); idxLimit++)
				{
					unsigned char c = constraintStrValue[ idxLimit ];
					if ((c != '0')
					 && (c != '1')
					 && (c != '2')
					 && (c != '3')
					 && (c != '4')
					 && (c != '5')
					 && (c != '6')
					 && (c != '7')
					 && (c != '8')
					 && (c != '9')
					 && (c != '+')
					 && (c != '-'))
					{
						isDigitString = false;
					}
				}

				if( ! isDigitString ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgConstrainingValueExpansionNonNumeric + constraintStrValue + S_MsgIsNotNumeric );
				}

				actualConstraint = *cflib::CFLibXmlUtil::parseInt64( constraintStrValue );
			}
			else {
				genContext->clearExpansionIsNull();
				return( "$" + getRequiredSourceText() + "$" );
			}
		}

		ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
		if( remainder == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
		}

		std::string constrainedStrValue = remainder->expand( genContext );
		if( constrainedStrValue.length() <= 0 ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, "Expansion of constrained value produced an empty result, not a numeric string" );
		}

		bool isDigitString = true;
		std::string::size_type limitLen = constrainedStrValue.length();
		for (std::string::size_type idxLimit = 0; isDigitString && (idxLimit < limitLen); idxLimit++)
		{
			unsigned char c = constrainedStrValue[ idxLimit ];
			if ((c != '0')
			 && (c != '1')
			 && (c != '2')
			 && (c != '3')
			 && (c != '4')
			 && (c != '5')
			 && (c != '6')
			 && (c != '7')
			 && (c != '8')
			 && (c != '9')
			 && (c != '+')
			 && (c != '-'))
			{
				isDigitString = false;
			}
		}

		if( ! isDigitString ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgConstrainingValueExpansionNonNumeric + constrainedStrValue + S_MsgIsNotNumeric );
		}

		int64_t constrainedValue = *cflib::CFLibXmlUtil::parseInt64( constrainedStrValue );

		int64_t effectiveValue;
		if( constrainedValue < actualConstraint ) {
			effectiveValue = actualConstraint;
		}
		else {
			effectiveValue = constrainedValue;
		}

		std::string retval = cflib::CFLibXmlUtil::formatInt64( effectiveValue );

		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFCounterNew::MssCFCounterNew( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelCounterObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFCounterNew::~MssCFCounterNew() {
	}

	std::string MssCFGelCompiler::MssCFCounterNew::expand( MssCFGenContext* genContext ) {
		genContext->addCounter( getRequiredCounterName() );
		genContext->clearExpansionIsNull();
		return( cflib::CFLib::S_EMPTY );
	}

	MssCFGelCompiler::MssCFCounterIncrement::MssCFCounterIncrement( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelCounterObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFCounterIncrement::~MssCFCounterIncrement() {
	}

	std::string MssCFGelCompiler::MssCFCounterIncrement::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFCounterIncrement::expand" );
		MssCFCounter* counter = genContext->getCounter( getRequiredCounterName() );
		if( counter == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCounter + getRequiredCounterName() + S_MsgDoesNotExistInGenContext );
		}
		counter->increment();
		genContext->clearExpansionIsNull();
		return( cflib::CFLib::S_EMPTY );
	}

	MssCFGelCompiler::MssCFCounterDecrement::MssCFCounterDecrement( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelCounterObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFCounterDecrement::~MssCFCounterDecrement() {
	}

	std::string MssCFGelCompiler::MssCFCounterDecrement::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFCounterDecrement::expand" );
		MssCFCounter* counter = genContext->getCounter( getRequiredCounterName() );
		if( counter == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCounter + getRequiredCounterName() + S_MsgDoesNotExistInGenContext );
		}
		counter->decrement();
		genContext->clearExpansionIsNull();
		return( cflib::CFLib::S_EMPTY );
	}

	MssCFGelCompiler::MssCFCounterValue::MssCFCounterValue( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelCounterObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFCounterValue::~MssCFCounterValue() {
	}

	std::string MssCFGelCompiler::MssCFCounterValue::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFCounterValue::expand" );
		MssCFCounter* counter = genContext->getCounter( getRequiredCounterName() );
		if( counter == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCounter + getRequiredCounterName() + S_MsgDoesNotExistInGenContext );
		}
		int value = counter->getCounter();
		std::string retval = cflib::CFLibXmlUtil::formatInt32( value );
		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFModifierStripLeadingZeroes::MssCFModifierStripLeadingZeroes( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelModifierObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFModifierStripLeadingZeroes::~MssCFModifierStripLeadingZeroes() {
	}

	std::string MssCFGelCompiler::MssCFModifierStripLeadingZeroes::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFModifierStripLeadingZeroes::expand" );
		std::string retval;
		std::string  raw;
		if( getOptionalLookupRemainder() != NULL ) {
			raw = getOptionalLookupRemainder()->expand( genContext );
		}
		else {
			throw cflib::CFLibRuntimeException( "MssCFModifierStripLeadingZeroes", "expand", "Modifiers must have a remainder to evaluate" );
		}
		if( raw.length() > 0 ) {
			std::string::size_type start = 0;
			std::string::size_type len = raw.length() - 1;
			while( ( start < len ) && ( raw[ start ] == '0' ) ) {
				start ++;
			}
			retval = raw.substr( start, raw.length() - start );
		}
		else {
			retval = cflib::CFLib::S_EMPTY;
		}
		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFModifierCoerceUpper::MssCFModifierCoerceUpper( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelModifierObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFModifierCoerceUpper::~MssCFModifierCoerceUpper() {
	}

	std::string MssCFGelCompiler::MssCFModifierCoerceUpper::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFModifierCoerceUpper::expand" );
		std::string retval;
		std::string  raw;
		if( getOptionalLookupRemainder() != NULL ) {
			raw = getOptionalLookupRemainder()->expand( genContext );
		}
		else {
			throw cflib::CFLibRuntimeException( "MssCFModifierCoerceUpper", "expand", "Modifiers must have a remainder to evaluate" );
		}
		if( raw.length() > 0  ) {
			struct feedmeseymour1 {
				void operator()( char& c ) { c = toupper( (unsigned char)c ); };
			};
			retval.assign( raw );
			for_each( retval.begin(), retval.end(), feedmeseymour1() );
		}
		else {
			retval = cflib::CFLib::S_EMPTY;
		}
		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFModifierCoerceLower::MssCFModifierCoerceLower( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelModifierObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFModifierCoerceLower::~MssCFModifierCoerceLower() {
	}

	std::string MssCFGelCompiler::MssCFModifierCoerceLower::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFModifierCoerceLower::expand" );
		std::string retval;
		std::string  raw;
		if( getOptionalLookupRemainder() != NULL ) {
			raw = getOptionalLookupRemainder()->expand( genContext );
		}
		else {
			throw cflib::CFLibRuntimeException( "MssCFModifierCoerceLower", "expand", "Modifiers must have a remainder to evaluate" );
		}
		if( raw.length() > 0  ) {
			struct feedmeseymour2 {
				void operator()( char& c ) { c = tolower( (unsigned char)c ); };
			};
			retval.assign( raw );
			for_each( retval.begin(), retval.end(), feedmeseymour2() );
		}
		else {
			retval = cflib::CFLib::S_EMPTY;
		}
		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFModifierCoerceMixed::MssCFModifierCoerceMixed( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelModifierObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFModifierCoerceMixed::~MssCFModifierCoerceMixed() {
	}

	std::string MssCFGelCompiler::MssCFModifierCoerceMixed::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFModifierCoerceMixed::expand" );
		std::string retval;
		std::string  raw;
		if( getOptionalLookupRemainder() != NULL ) {
			raw = getOptionalLookupRemainder()->expand( genContext );
		}
		else {
			throw cflib::CFLibRuntimeException( "MssCFModifierCoerceMixed", "expand", "Modifiers must have a remainder to evaluate" );
		}
		if( raw.length() > 0 ) {
			retval = raw;  // coerceMixed effectively does nothing.
		}
		else {
			retval = cflib::CFLib::S_EMPTY;
		}
		genContext->clearExpansionIsNull();
		return( retval );
	}

	MssCFGelCompiler::MssCFModifierCoerceLeadLower::MssCFModifierCoerceLeadLower( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelModifierObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFModifierCoerceLeadLower::~MssCFModifierCoerceLeadLower() {
	}

	std::string MssCFGelCompiler::MssCFModifierCoerceLeadLower::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFModifierCoerceLeadLower::expand" );
		std::string  raw;
		if( getOptionalLookupRemainder() != NULL ) {
			raw = getOptionalLookupRemainder()->expand( genContext );
		}
		else {
			throw cflib::CFLibRuntimeException( "MssCFModifierCoerceLeadLower", "expand", "Modifiers must have a remainder to evaluate" );
		}
		struct feedmeseymour3 {
			void operator()( char& c ) { c = tolower( (unsigned char)c ); };
		};
		if( raw.length() > 0 ) {
			for_each( raw.begin(), raw.begin() + 1, feedmeseymour3() );
		}
		genContext->clearExpansionIsNull();
		return( raw );
	}

	MssCFGelCompiler::MssCFPop::MssCFPop( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelPopObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFPop::~MssCFPop() {
	}

	std::string MssCFGelCompiler::MssCFPop::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFPop::expand" );
		CFLIB_EXCEPTION_DECLINFO
		std::string goalTypeName = this->getRequiredGoalTypeName();
		int numToPop = cflib::CFLibXmlUtil::evalInt32( goalTypeName );
		MssCFGenContext* goalContext = genContext;
		while( ( numToPop > 0 ) && ( goalContext != NULL ) ) {
			goalContext = goalContext->getPrevContext();
			numToPop --;
		}

		if( goalContext == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Already at the top of the context stack. \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" could not be expanded" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFLibAnyObj* refDef = goalContext->getGenDef();
		if( refDef == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "GenDef of popped context is null! \""
					+ "$" + getRequiredSourceText() + "$"
					+ "\" could not be expanded" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		std::string ret;
		MssCFGenContext* subContext = NULL;
		try {
			subContext = genContext->getGenEngine()->getGenContextFactory()->newGenContext( genContext->getGeneratingBuild(), genContext, refDef->getGenDefName(), refDef );

			ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
			if( remainder == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
			}

			ret = remainder->expand( subContext );

			genContext->setExpansionIsNull( subContext->isExpansionNull() );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		while( ( subContext != NULL ) && ( subContext != genContext ) ) {
			subContext = subContext->release();
		}
		subContext = NULL;

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( ret );
	}

	MssCFGelCompiler::MssCFPopTo::MssCFPopTo( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelPopObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFPopTo::~MssCFPopTo() {
	}

	std::string MssCFGelCompiler::MssCFPopTo::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFPopTo::expand" );
		std::string goalTypeName = this->getRequiredGoalTypeName();
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbDefClassObj* goalType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(goalTypeName);
		if( goalType == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find goal class \"" + goalTypeName + "\". \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" is invalid" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFGenKbDefClassObj* objectDefType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx( S_Object );
		if( objectDefType == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find object type \"Object\". \""
					+ "$" + getRequiredSourceText() + "$"
					+ "\" is invalid" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		MssCFGenContext* goalContext = genContext;

		std::string searchTypeName = goalContext->getRequiredLookupGenDef()->getRequiredName();
		ICFGenKbDefClassObj* searchType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(searchTypeName);
		if( searchType == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find search class \"" + searchTypeName + "\". \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" is invalid" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFLibAnyObj* refDef = NULL;

		if( ( goalType == NULL )
		 || ( goalType == objectDefType )
		 || ( goalType->getRequiredName() == S_Object )
		 || ( goalType->getRequiredName() == S_Asterisk ) )
		{
			refDef = goalContext->getGenDef();
			if( refDef != NULL ) {
				refDef = refDef->getObjScope();
			}
			goalContext = NULL;
		}
		else {
			while( searchType != NULL
				&& searchType != goalType
				&& goalContext != NULL )
			{
				if( searchType != objectDefType ) {
					searchType = searchType->getOptionalParentBaseDefClass();
				}
				else {
					searchType = NULL;
				}
				if( searchType == NULL ) {
					if( goalContext->getPrevContext() != goalContext ) {
						goalContext = goalContext->getPrevContext();
						if( goalContext != NULL ) {
							searchTypeName = goalContext->getRequiredLookupGenDef()->getRequiredName();
							searchType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(searchTypeName);
							if( searchType == NULL ) {
								std::string msg( "Could not find search class \"" + searchTypeName + "\". \"$" );
								msg.append( getRequiredSourceText() + "$\" is invalid" );
								throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, msg );
							}
						}
						refDef = goalContext->getGenDef();
					}
					else {
						goalContext = NULL;
						refDef = NULL;
					}
				}
			}
		}

		if( goalContext == NULL ) {
			if( refDef == NULL ) {
				genContext->clearExpansionIsNull();
				return( cflib::CFLib::S_EMPTY );
			}
		}
		else {
			refDef = goalContext->getGenDef();
		}

		std::string ret;

		if( refDef != NULL ) {

			MssCFGenContext* subContext = NULL;
			try {
				subContext = genContext->getGenEngine()->getGenContextFactory()->newGenContext( genContext->getGeneratingBuild(), genContext, refDef->getGenDefName(), refDef );

				ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
				if( remainder == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
				}

				ret = remainder->expand( subContext );

				genContext->setExpansionIsNull( subContext->isExpansionNull() );
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH

			while( ( subContext != NULL ) && ( subContext != genContext ) ) {
				subContext = subContext->release();
			}
			subContext = NULL;

			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
		}
		else {
			genContext->clearExpansionIsNull();
			ret = cflib::CFLib::S_EMPTY;
		}

		return( ret );
	}

	MssCFGelCompiler::MssCFPopTop::MssCFPopTop( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelPopObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFPopTop::~MssCFPopTop() {
	}

	std::string MssCFGelCompiler::MssCFPopTop::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFPopTop::expand" );
		CFLIB_EXCEPTION_DECLINFO
		std::string goalTypeName = this->getRequiredGoalTypeName();
		ICFGenKbDefClassObj* goalType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(goalTypeName);
		if( goalType == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find goal class \"" + goalTypeName + "\". \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" is invalid" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFGenKbDefClassObj* objectDefType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx( S_Object );
		if( objectDefType == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find object type \"Object\". \""
					+ "$" + getRequiredSourceText() + "$"
					+ "\" is invalid" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		MssCFGenContext* goalContext = genContext;
		MssCFGenContext* topContext = NULL;
		std::string searchTypeName;
		ICFGenKbDefClassObj* searchType;

		while ( goalContext != NULL) {
			searchTypeName = goalContext->getRequiredLookupGenDef()->getRequiredName();
			searchType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(searchTypeName);
			if( searchType == NULL ) {
				std::string msg( "Could not find search class \"" + searchTypeName + "\". \"$" );
				msg.append( getRequiredSourceText() + "$\" is invalid" );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, msg );
			}

			while ( (searchType != NULL ) && ( searchType != goalType )) {
				if( searchType != objectDefType ) {
					searchType = searchType->getOptionalParentBaseDefClass();
				}
				else {
					searchType = NULL;
				}
			}

			if (searchType != NULL) {
				// The goal context definition derives from the target type
				topContext = goalContext;
			}

			if (goalContext->getPrevContext() != goalContext) {
				goalContext = goalContext->getPrevContext();
			}
			else {
				goalContext = NULL;
			}
		}

		if (topContext == NULL) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find top context with a definition derived from \"" + goalTypeName + "\". \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" could not be expanded");
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFLibAnyObj* refDef = topContext->getGenDef();
		if( refDef == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "GenDef of popped context is null! \""
					+ "$" + getRequiredSourceText() + "$"
					+ "\" could not be expanded" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		std::string ret;
		MssCFGenContext* subContext = NULL;
		try {
			subContext = genContext->getGenEngine()->getGenContextFactory()->newGenContext( genContext->getGeneratingBuild(), genContext, refDef->getGenDefName(), refDef );

			ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
			if( remainder == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
			}

			ret = remainder->expand( subContext );

			genContext->setExpansionIsNull( subContext->isExpansionNull() );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		while( ( subContext != NULL ) && ( subContext != genContext ) ) {
			subContext = subContext->release();
		}
		subContext = NULL;

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( ret );
	}

	MssCFGelCompiler::MssCFPopOneFromTop::MssCFPopOneFromTop( cfcore::ICFGenKbSchemaObj* argSchema )
	: CFGenKbGelPopObj( argSchema )
	{
	}

	MssCFGelCompiler::MssCFPopOneFromTop::~MssCFPopOneFromTop() {
	}

	std::string MssCFGelCompiler::MssCFPopOneFromTop::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "MssCFPopOneFromTop::expand" );
		CFLIB_EXCEPTION_DECLINFO
		std::string goalTypeName = this->getRequiredGoalTypeName();
		ICFGenKbDefClassObj* goalType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(goalTypeName);
		if( goalType == NULL ) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find goal class \"" + goalTypeName + "\". \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" is invalid" );
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFGenKbDefClassObj* objectDefType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx( S_Object );
		if( objectDefType == NULL ) {
			std::string msg( "Could not find object type \"Object\". \"$" );
			msg.append( getRequiredSourceText() + "$\" is invalid" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, msg );
		}

		MssCFGenContext* topContext = NULL;
		MssCFGenContext* oneFromTopContext = NULL;
		MssCFGenContext* goalContext = genContext;
		std::string searchTypeName;
		ICFGenKbDefClassObj* searchType;

		while (goalContext != NULL) {
			searchTypeName = goalContext->getRequiredLookupGenDef()->getRequiredName();
			searchType = genContext->getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx(searchTypeName);
			if( searchType == NULL ) {
				genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find search class \"" + searchTypeName + "\". \""
					+ "$" + getRequiredSourceText() + "$"
					+ "\" is invalid" );
				genContext->setExpansionIsNull();
				return( cflib::CFLib::S_EMPTY );
			}

			while ( searchType != NULL && searchType != goalType ) {
				if( searchType != objectDefType ) {
					searchType = searchType->getOptionalParentBaseDefClass();
				}
				else {
					searchType = NULL;
				}
			}

			if (searchType != NULL) {
				// The goal context definition derives from the target type
				oneFromTopContext = topContext;
				topContext = goalContext;
			}

			if (goalContext->getPrevContext() != goalContext) {
				goalContext = goalContext->getPrevContext();
			}
			else {
				goalContext = NULL;
			}
		}

		if (oneFromTopContext == NULL) {
			genContext->getGenEngine()->getLog()->message( S_ProcName + "Could not find one from top context with a definition derived from \"" + goalTypeName + "\". \""
				+ "$" + getRequiredSourceText() + "$"
				+ "\" could not be expanded");
			genContext->setExpansionIsNull();
			return( cflib::CFLib::S_EMPTY );
		}

		ICFLibAnyObj* refDef = topContext->getGenDef();

		std::string ret;
		MssCFGenContext* subContext = NULL;
		try {
			subContext = genContext->getGenEngine()->getGenContextFactory()->newGenContext( genContext->getGeneratingBuild(), genContext, refDef->getGenDefName(), refDef );

			ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
			if( remainder == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
			}

			ret = remainder->expand( subContext );

			genContext->setExpansionIsNull( subContext->isExpansionNull() );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		while( ( subContext != NULL ) && ( subContext != genContext ) ) {
			subContext = subContext->release();
		}
		subContext = NULL;

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( ret );
	}

	/**
	 *	A normalized macro is one where there is exactly one space between each
	 *	token to be parsed, and no other text except the printable strings which
	 *	comprise the symbols of the parse.  Any leading or trailing spaces and
	 *	dollar signs are eliminated from the returned string.
	 */
	std::string MssCFGelCompiler::normalizeMacro( const std::string& rawMacro ) {
		std::string normalized;
		std::string::size_type len = rawMacro.length();
		std::string::size_type idx = 0;
		// Skip the leading whitespace
		std::string::value_type ch = rawMacro[idx];
		while( ( ch == ' ' ) || ( ch == '\t' ) || ( ch == '\n' ) || ( ch == '\r' ) || ( ch == '\f' ) ) {
			idx ++;
			ch = rawMacro[idx];
		}
		// We have not emitted any whitespace yet; we skipped it
		bool emittedSpace = false;
		while( idx < len ) {
			ch = rawMacro[idx];
			if( ( ch == ' ' )
			 || ( ch == '\t' )
			 || ( ch == '\n' )
			 || ( ch == '\r' )
			 || ( ch == '\f' ) )
			{
				if( ! emittedSpace ) {
					normalized.push_back( ' ' );
					emittedSpace = true;
				}
			}
			else if( ( ch == '(' ) || ( ch == ')' ) ) {
				if( ! emittedSpace ) {
					normalized.push_back( ' ' );
				}
				normalized.push_back( ch );
				if( ch == '(' ) {
					normalized.push_back( ' ' );
					emittedSpace = true;
				}
				else {
					emittedSpace = false;
				}
			}
			else {
				emittedSpace = false;
				normalized.push_back( ch );
			}
			idx ++;
		}
		// Trim any trailing space
		if( ( normalized.length() > 0 ) && emittedSpace ) {
			normalized.pop_back();
		}
		return( normalized );
	}

	/**
	 *	compileExecutable() Compiles an expansion body into a GEL executable.
	 *	<p>
	 *	This method never returns NULL.  If the compile fails, it will produce
	 *	a GelError as the executable implementation.
	 */
	ICFGenKbGelExecutableObj* MssCFGelCompiler::compileExecutable( const std::string& keyExecutableName, const std::string& body, ICFGenKbGenItemObj* optGenItem ) {
		static const std::string S_ProcName( "compileExecutable" );
		static const std::string S_Dot( "." );
		static const std::string S_Caught( "() Caught " );
		static const std::string S_Space( " " );
		static const std::string S_Newline( "\n" );

		// Establish value of myGelCache
		getGelCache();

		msglog.clearCache();
		clearCompileError();

		ICFGenKbGelExecutableObj* foundExec = myGelCache->lookupExecutable( keyExecutableName );
		if( foundExec != NULL ) {
#			if TRACE_COMPILER
				std::cout << "GEL Executable cache found executable for " << keyExecutableName << " in cache with pkey " << foundExec->getPKey()->toString() << "\n";
#			endif
			return( foundExec );
		}
		else {
#			if TRACE_COMPILER
				std::cout << "GEL Executable cache has no executable for " << keyExecutableName << ", compiling source:\n" << body << "\n";
#			endif
		}

		// Establish the encompassing GelExecutable that is the result of our compiling efforts
		ICFGenKbGelExecutableObj* executableObj = genEngine->getGelExecutableTableObj()->newInstance();
		ICFGenKbGelExecutableEditObj* executableEdit = dynamic_cast<ICFGenKbGelExecutableEditObj*>( executableObj->beginEdit() );
		executableEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		executableEdit->setRequiredContainerGelCache( myGelCache );
		executableEdit->setRequiredSourceText( body );
		executableObj = dynamic_cast<ICFGenKbGelExecutableObj*>( executableEdit->create() );

		bool anyErrors = false;

		ICFGenKbGelInstructionObj* instruction;
		if( body.length() <= 0 ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinEmpty( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( cflib::CFLib::S_EMPTY );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
#			if TRACE_COMPILER
				std::cout << "Adding " << builtinObj->getClassName() << " pkey " << builtinObj->getPKey()->toString() << " to executable sequence\n";
#			endif
			try {
				executableObj->addCalledInstruction( myGelCache, builtinObj );
			}
			catch( ... ) {
				std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
			}
		}
		else {
			std::string boilerplate = cflib::CFLib::S_EMPTY;
			std::string macro = cflib::CFLib::S_EMPTY;
			std::string normalizedMacro = cflib::CFLib::S_EMPTY;

			std::string::value_type ch;
			bool macroStarted = false;
#			if TRACE_COMPILER
				std::cout << "macroStarted initially " << std::to_string( macroStarted ) << "\n";
#			endif
			bool haveBackslash = false;

			for( auto cur = body.begin(); cur != body.end(); cur ++ ) {

				ch = *cur;

				if( macroStarted ) {
					if( ch == '$' ) {
						// Reached the end of a macro -- need to compile it
						macroStarted = false;
#						if TRACE_COMPILER
							std::cout << "Reached end of macro text, macroStarted cleared to " << std::to_string( macroStarted ) << "\n";
#						endif

						// Only clear the compile error flag, not the compile log
						clearCompileError();

						if( macro.length() <= 0 ) {
							// Two dollar signs in a row means to embed a single dollar sign
							ICFGenKbGelBoilerplateObj* boilerplateObj = genEngine->getGelBoilerplateTableObj()->newInstance();
							ICFGenKbGelBoilerplateEditObj* boilerplateEdit = dynamic_cast<ICFGenKbGelBoilerplateEditObj*>( boilerplateObj->beginEdit() );
							boilerplateEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
							boilerplateEdit->setRequiredContainerGelCache( myGelCache );
							boilerplateEdit->setRequiredSourceText( "$" );
							try {
								boilerplateObj = dynamic_cast<ICFGenKbGelBoilerplateObj*>( boilerplateEdit->create() );
							}
							catch ( ... ) {
#								if TRACE_COMPILER
									std::cout << "Create of boilerplate $ threw an exception\n";
#								endif
								boilerplateObj = NULL;
							}
#							if TRACE_COMPILER
								std::cout << "Adding $ " << boilerplateObj->getClassName() << " pkey " << boilerplateObj->getPKey()->toString() << " to executable\n";
#							endif
							try {
								executableObj->addCalledInstruction( myGelCache, boilerplateObj );
							}
							catch( ... ) {
								std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
							}
						}
						else {
							normalizedMacro = normalizeMacro( macro );
							if( normalizedMacro.length() > 0 ) {
								ICFGenKbGelInstructionObj* compiledMacro = NULL;
#								if TRACE_COMPILER
									std::cout << "DEBUG: Compiling macro $" << normalizedMacro << "$\n";
#								endif
								compiledMacro = compileMacro( normalizedMacro );
								if( compiledMacro == NULL ) {
									setCompileError();
									ICFGenKbGelErrorObj* errorObj = genEngine->getGelErrorTableObj()->newInstance();
									ICFGenKbGelErrorEditObj* errorEdit = dynamic_cast<ICFGenKbGelErrorEditObj*>( errorObj->beginEdit() );
									errorEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
									errorEdit->setRequiredContainerGelCache( myGelCache );
									std::string errorExpansion( "$" );
									errorExpansion.append( normalizedMacro );
									errorExpansion.append( "$" );
									errorEdit->setRequiredSourceText( errorExpansion );
									try {
										errorObj = dynamic_cast<ICFGenKbGelErrorObj*>( errorEdit->create() );
										errorObj = dynamic_cast<ICFGenKbGelErrorObj*>( myGelCache->rememberMacro( normalizedMacro, errorObj ) );
									}
									catch ( ... ) {
#										if TRACE_COMPILER
											std::cout << "Create of error or remembering error macro threw an exception\n";
#										endif
										errorObj = NULL;
									}
#									if TRACE_COMPILER
										std::cout << "Adding " << errorObj->getClassName() << " pkey " << errorObj->getPKey()->toString() << " to executable\n";
#									endif
									try {
										executableObj->addCalledInstruction( myGelCache, errorObj );
									}
									catch( ... ) {
										std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
									}
									std::string msg( CLASS_NAME );
									msg.append( S_Dot );
									msg.append( S_ProcName );
									msg.append( " compileMacro() returned NULL, indicating a failed compile of $" );
									msg.append( normalizedMacro );
									msg.append( "$\n" );
									getCompileLog()->message( msg );
#									if TRACE_COMPILER
										std::cout << "Compiler error detected: " + msg;
#									endif
								}
								else {
#									if TRACE_COMPILER
										std::cout << "Adding " << compiledMacro->getClassName() << " pkey " << compiledMacro->getPKey()->toString() << " to executable\n";
#									endif
									try {
										executableObj->addCalledInstruction( myGelCache, compiledMacro );
									}
									catch( ... ) {
										std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
									}
								}
							}
							else {
								// Empty normalized macro bodies are illegal

								setCompileError();

								ICFGenKbGelErrorObj* errorObj = genEngine->getGelErrorTableObj()->newInstance();
								ICFGenKbGelErrorEditObj* errorEdit = dynamic_cast<ICFGenKbGelErrorEditObj*>( errorObj->beginEdit() );
								errorEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
								errorEdit->setRequiredContainerGelCache( myGelCache );
								std::string srctext( "$" );
								srctext.append( macro );
								srctext.push_back( '$' );
								errorEdit->setRequiredSourceText( srctext );
								try {
									errorObj = dynamic_cast<ICFGenKbGelErrorObj*>( errorEdit->create() );
								}
								catch ( ... ) {
#									if TRACE_COMPILER
										std::cout << "Create of error threw an exception\n";
#									endif
									errorObj = NULL;
								}
#								if TRACE_COMPILER
									std::cout << "Adding " << errorObj->getClassName() << " pkey " << errorObj->getPKey()->toString() << " to executable\n";
#								endif
								try {
									executableObj->addCalledInstruction( myGelCache, errorObj );
								}
								catch( ... ) {
									std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
								}

								std::string msg( CLASS_NAME );
								msg.append( S_Dot );
								msg.append( S_ProcName );
								msg.append( " Normalized macro is empty and invalid, nothing to compile\n" );
								getCompileLog()->message( msg );
#								if TRACE_COMPILER
									std::cout << "Compiler error detected: " + msg;
#								endif
							}
							if( hasCompileError() ) {
								anyErrors = true;
							}
							clearCompileError();
						}
					}
					else {
						macro.push_back( ch );
					}
				}
				else {
					if( haveBackslash ) {
						haveBackslash = false;
						if( ch == '\\' ) {
							boilerplate.append( "\\" );
						}
						else if( ch == '$' ) {
							boilerplate.append( "$" );
						}
						else {
							boilerplate.append( "\\" );
							boilerplate.push_back( ch );
						}
					}
					else if( ch == '\\' ) {
						haveBackslash = true;
					}
					else if( ch == '$' ) {
#						if TRACE_COMPILER
							std::cout << "Found a dollar sign.  Boilerplate is " << boilerplate << "\n";
#						endif

						if( boilerplate.length() > 0 ) {
							ICFGenKbGelBoilerplateObj* boilerplateObj = genEngine->getGelBoilerplateTableObj()->newInstance();
							ICFGenKbGelBoilerplateEditObj* boilerplateEdit = dynamic_cast<ICFGenKbGelBoilerplateEditObj*>( boilerplateObj->beginEdit() );
							boilerplateEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
							boilerplateEdit->setRequiredContainerGelCache( myGelCache );
							boilerplateEdit->setRequiredSourceText( boilerplate );
							try {
								boilerplateObj = dynamic_cast<ICFGenKbGelBoilerplateObj*>( boilerplateEdit->create() );
							}
							catch ( ... ) {
#								if TRACE_COMPILER
									std::cout << "Create of boilerplate threw an exception\n";
#								endif
								boilerplateObj = NULL;
							}
#							if TRACE_COMPILER
								std::cout << "Adding " << boilerplateObj->getClassName() << " pkey " << boilerplateObj->getPKey()->toString() << " to executable\n";
#							endif
							try {
								executableObj->addCalledInstruction( myGelCache, boilerplateObj );
							}
							catch( ... ) {
								std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
							}
						}
						boilerplate = cflib::CFLib::S_EMPTY;
						macro = cflib::CFLib::S_EMPTY;
						macroStarted = true;
#						if TRACE_COMPILER
							std::cout << "Found a $, macroStarted set to " << std::to_string( macroStarted ) << "\n";
#						endif
					}
					else {
						boilerplate.push_back( ch );
					}
				}
			}

		//	If we had a trailing macro, append it

			if( macroStarted ) {
				setCompileError();

				ICFGenKbGelErrorObj* errorObj = genEngine->getGelErrorTableObj()->newInstance();
				ICFGenKbGelErrorEditObj* errorEdit = dynamic_cast<ICFGenKbGelErrorEditObj*>( errorObj->beginEdit() );
				errorEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
				errorEdit->setRequiredContainerGelCache( myGelCache );
				std::string myText( "$" );
				myText.append( macro );
				errorEdit->setRequiredSourceText( myText );
				try {
					errorObj = dynamic_cast<ICFGenKbGelErrorObj*>( errorEdit->create() );
				}
				catch ( ... ) {
#					if TRACE_COMPILER
						std::cout << "Create of error threw an exception\n";
#					endif
					errorObj = NULL;
				}
#				if TRACE_COMPILER
					std::cout << "Adding unterminated macro " << errorObj->getClassName() << " pkey " << errorObj->getPKey()->toString() << " to executable\n";
#				endif
				try {
					executableObj->addCalledInstruction( myGelCache, errorObj );
				}
				catch( ... ) {
					std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
				}

				std::string msg( CLASS_NAME );
				msg.append( S_Dot );
				msg.append( S_ProcName );
				msg.append( "() Unterminated macro detected -- Source is invalid " );
				msg.append( body );
				msg.append( S_Newline );
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
			}
#			if TRACE_COMPILER
			else {
				std::cout << "DEBUG: No unterminated macros found\n";
			}
#			endif

		//	If we had a trailing backslash, append it

			if( haveBackslash ) {
				boilerplate.append( "\\" );
			}

		//	Don't forget any trailing boilerplate

			if( boilerplate.length() > 0 ) {
				ICFGenKbGelBoilerplateObj* boilerplateObj = genEngine->getGelBoilerplateTableObj()->newInstance();
				ICFGenKbGelBoilerplateEditObj* boilerplateEdit = dynamic_cast<ICFGenKbGelBoilerplateEditObj*>( boilerplateObj->beginEdit() );
				boilerplateEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
				boilerplateEdit->setRequiredContainerGelCache( myGelCache );
				boilerplateEdit->setRequiredSourceText( boilerplate );
				try {
					boilerplateObj = dynamic_cast<ICFGenKbGelBoilerplateObj*>( boilerplateEdit->create() );
				}
				catch ( ... ) {
#					if TRACE_COMPILER
						std::cout << "Create of boilerplate threw an exception\n";
#					endif
					boilerplateObj = NULL;
				}
#				if TRACE_COMPILER
					std::cout << "Adding " << boilerplateObj->getClassName() << " pkey " << boilerplateObj->getPKey()->toString() << " to executable\n";
#				endif
				try {
					executableObj->addCalledInstruction( myGelCache, boilerplateObj );
				}
				catch( ... ) {
					std::cout << "MAJOR ERROR: Could not executableObj->addCalledInstruction(), threw undefined exception\n";
				}
			}
			else {
#				if TRACE_COMPILER
					std::cout << "No trailing boilerplate to process\n";
#				endif
			}

			if( anyErrors || hasCompileError() ) {
				setCompileError();
				anyErrors = true;
				if( msglog.getCacheContents().length() <= 0 ) {
					std::string msg( CLASS_NAME );
					msg.append( S_Dot );
					msg.append( S_ProcName );
					msg.append( "() GEL compile FAILED\n" );
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
				}
			}
		}

#		if TRACE_COMPILER
			std::cout << "msglog.CacheContents is " << msglog.getCacheContents() << "\n";
#		endif

		const std::string& errorText = msglog.getCacheContents();
		if( anyErrors || ( errorText.length() > 0 ) ) {
			std::string msg( CLASS_NAME );
			msg.append( "." );
			msg.append( S_ProcName );
			msg.append( "() Could not compile GEL executable " + keyExecutableName );
			if( optGenItem != NULL ) {
				ICFGenKbGenRuleObj* genRule = dynamic_cast<ICFGenKbGenRuleObj*>( optGenItem );
				ICFGenKbGenTruncObj* genTrunc = dynamic_cast<ICFGenKbGenTruncObj*>( optGenItem );
				ICFGenKbGenFileObj* genFile = dynamic_cast<ICFGenKbGenFileObj*>( optGenItem );
				std::string definedNear;
				if( genFile != NULL ) {
					definedNear = genFile->getRequiredDefinedNear();
				}
				else if( genTrunc != NULL ) {
					definedNear = genTrunc->getRequiredDefinedNear();
				}
				else if( genRule != NULL ) {
					definedNear = genRule->getRequiredDefinedNear();
				}
				if( definedNear.length() > 0 ) {
					msg.append( " defined" );
					msg.append( definedNear );
				}
			}
			msg.append( " - " );
			msg.append( errorText );
			getLog()->message( msg );
		}

		foundExec = myGelCache->rememberExecutable( keyExecutableName, executableObj );
#		if TRACE_COMPILER
			std::cout << "\t\tGEL Executable Cache now remembers $" << keyExecutableName << "$ as pkey " << foundExec->getPKey()->toString() << "\n";
#		endif

		return( foundExec );
	}

	/**
	 *	When macros are found we need to compile them.  Note that the macro does not include the
	 *	enclosing dollar signs from the GEL source.  This code now presumes the macro is a
	 *	normalized macro, where exactly one space separates the symbols from each other.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileMacro( const std::string& macro )
	{
		unsigned char ch;
		std::string::size_type start;
		std::string::size_type lenMacro;
		std::string remainingMacro;
		std::string subExpansion;
		ICFGenKbGelInstructionObj* ret = NULL;
		ICFGenKbGenItemObj* genItem = NULL;

		static const std::string S_ProcName( "compileMacro" );

	//	If the macro is empty, return NULL

		lenMacro = macro.length();
		if( lenMacro == 0 ) {
			return( NULL );
		}

	//	Look up the macro in the GEL cache, and if it exists, just return the shared instance

		ret = myGelCache->lookupMacro( macro );
		if( ret != NULL ) {
#			if TRACE_COMPILER
				std::cout << "\t\tMacro found $" << macro << "$ in GEL cache as a " << ret->getClassName() << " pkey " << ret->getPKey()->toString() << "\n";
#			endif
			return( ret );
		}

	//	If the macro starts with "iterate ", return an evaluation
	//	 of the iteration.

		else if( cflib::CFLib::startsWith( macro, _ITERATE ) ) {
			ret = compileIteration( macro );
		}

	//	If the macro starts with "spread ", return an evaluation
	//	 of the spread.

		else if( cflib::CFLib::startsWith( macro, _SPREAD ) ) {
			ret = compileSpread( macro );
		}

	//	If the macro starts with "switch ", return an evaluation
	//	 of the switch.

		else if( cflib::CFLib::startsWith( macro, _SWITCH ) ) {
			ret = compileSwitch( macro );
		}

	//  If the macro is a constraint, return an evaluation of
	//  the constraint.

		else if( cflib::CFLib::startsWith( macro, _CONSTRAIN_MAX ) ) {
			ret = compileConstrainMax( macro );
		}
		else if( cflib::CFLib::startsWith( macro, _CONSTRAIN_MIN ) ) {
			ret = compileConstrainMin( macro );
		}

	//	If the macro starts with a coercion, return a coercion of
	//	the evaluation of the rest of the macro

		else if( cflib::CFLib::startsWith( macro, _STRIPLEADINGZEROES ) ) {
			start = _STRIPLEADINGZEROES.length();
			if( ' ' == ( ch = macro[ start ] ) ) {
				start ++;
			}
			remainingMacro = macro.substr( start, lenMacro - start );
			ICFGenKbGelModifierObj* modifierObj = new MssCFModifierStripLeadingZeroes( genEngine ); 
			ICFGenKbGelModifierEditObj* modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
			modifierEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			modifierEdit->setRequiredContainerGelCache( myGelCache );
			modifierEdit->setRequiredSourceText( macro );
			try {
				modifierObj = dynamic_cast<ICFGenKbGelModifierObj*>( modifierEdit->create() );
			}
			catch ( ... ) {
				modifierObj = NULL;
			}

			ICFGenKbGelInstructionObj* remainderInstruction = compileMacro( remainingMacro );
			if( remainderInstruction == NULL ) {
				ret = NULL;
				setCompileError();
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Modifiers must always be followed by macro specifications whose results are to be modified\n" );
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
			}
			else {
				modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
				modifierEdit->setOptionalLookupRemainder( remainderInstruction );
				try {
					modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierEdit->update() );
					ret = modifierObj;
				}
				catch ( ... ) {
					ret = NULL;
				}
			}
		}
		else if( cflib::CFLib::startsWith( macro, _COERCE_UPPER ) ) {
			start = _COERCE_UPPER.length();
			if( ' ' == ( ch = macro[ start ] ) ) {
				start ++;
			}
			remainingMacro = macro.substr( start, lenMacro - start );

			ICFGenKbGelModifierObj* modifierObj = new MssCFModifierCoerceUpper( genEngine ); 
			ICFGenKbGelModifierEditObj* modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
			modifierEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			modifierEdit->setRequiredContainerGelCache( myGelCache );
			modifierEdit->setRequiredSourceText( macro );
			try {
				modifierObj = dynamic_cast<ICFGenKbGelModifierObj*>( modifierEdit->create() );
			}
			catch ( ... ) {
				modifierObj = NULL;
			}

			ICFGenKbGelInstructionObj* remainderInstruction = compileMacro( remainingMacro );
			if( remainderInstruction == NULL ) {
				ret = NULL;
				setCompileError();
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Modifiers must always be followed by macro specifications whose results are to be modified\n" );
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
			}
			else {
				modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
				modifierEdit->setOptionalLookupRemainder( remainderInstruction );
				try {
					modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierEdit->update() );
					ret = modifierObj;
				}
				catch ( ... ) {
					ret = NULL;
				}
			}
		}
		else if( cflib::CFLib::startsWith( macro, _COERCE_LOWER ) ) {
			start = _COERCE_LOWER.length();
			if( ' ' == ( ch = macro[ start ] ) ) {
				start ++;
			}
			remainingMacro = macro.substr( start, lenMacro - start );

			ICFGenKbGelModifierObj* modifierObj = new MssCFModifierCoerceLower( genEngine ); 
			ICFGenKbGelModifierEditObj* modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
			modifierEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			modifierEdit->setRequiredContainerGelCache( myGelCache );
			modifierEdit->setRequiredSourceText( macro );
			try {
				modifierObj = dynamic_cast<ICFGenKbGelModifierObj*>( modifierEdit->create() );
			}
			catch ( ... ) {
				modifierObj = NULL;
			}

			ICFGenKbGelInstructionObj* remainderInstruction = compileMacro( remainingMacro );
			if( remainderInstruction == NULL ) {
				ret = NULL;
				setCompileError();
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Modifiers must always be followed by macro specifications whose results are to be modified\n" );
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
			}
			else {
				modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
				modifierEdit->setOptionalLookupRemainder( remainderInstruction );
				try {
					modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierEdit->update() );
					ret = modifierObj;
				}
				catch ( ... ) {
					ret = NULL;
				}
			}
		}
		else if( cflib::CFLib::startsWith( macro, _COERCE_MIXED ) ) {
			start = _COERCE_MIXED.length();
			if( ' ' == ( ch = macro[ start ] ) ) {
				start ++;
			}
			remainingMacro = macro.substr( start, lenMacro - start );

			ICFGenKbGelModifierObj* modifierObj = new MssCFModifierCoerceMixed( genEngine ); 
			ICFGenKbGelModifierEditObj* modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
			modifierEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			modifierEdit->setRequiredContainerGelCache( myGelCache );
			modifierEdit->setRequiredSourceText( macro );
			try {
				modifierObj = dynamic_cast<ICFGenKbGelModifierObj*>( modifierEdit->create() );
			}
			catch ( ... ) {
				modifierObj = NULL;
			}

			ICFGenKbGelInstructionObj* remainderInstruction = compileMacro( remainingMacro );
			if( remainderInstruction == NULL ) {
				ret = NULL;
				setCompileError();
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Modifiers must always be followed by macro specifications whose results are to be modified\n" );
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
			}
			else {
				modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
				modifierEdit->setOptionalLookupRemainder( remainderInstruction );
				try {
					modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierEdit->update() );
					ret = modifierObj;
				}
				catch ( ... ) {
					ret = NULL;
				}
			}
		}
		else if( cflib::CFLib::startsWith( macro, _COERCE_LEADLOWER ) ) {
			start = _COERCE_LEADLOWER.length();
			if( ' ' == ( ch = macro[ start ] ) ) {
				start ++;
			}
			remainingMacro = macro.substr( start, lenMacro - start );
			ICFGenKbGelModifierObj* modifierObj = new MssCFModifierCoerceLeadLower( genEngine ); 
			ICFGenKbGelModifierEditObj* modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
			modifierEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			modifierEdit->setRequiredContainerGelCache( myGelCache );
			modifierEdit->setRequiredSourceText( macro );
			try {
				modifierObj = dynamic_cast<ICFGenKbGelModifierObj*>( modifierEdit->create() );
			}
			catch ( ... ) {
				modifierObj = NULL;
			}

			ICFGenKbGelInstructionObj* remainderInstruction = compileMacro( remainingMacro );
			if( remainderInstruction == NULL ) {
				ret = NULL;
				setCompileError();
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Modifiers must always be followed by macro specifications whose results are to be modified\n" );
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
			}
			else {
				modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierObj->beginEdit() );
				modifierEdit->setOptionalLookupRemainder( remainderInstruction );
				try {
					modifierEdit = dynamic_cast<ICFGenKbGelModifierEditObj*>( modifierEdit->update() );
					ret = modifierObj;
				}
				catch ( ... ) {
					ret = NULL;
				}
			}
		}

		//	If the macro starts with a prefixline directive, return a coercion of
		//	the evaluation of the rest of the macro

		else if( cflib::CFLib::startsWith( macro, _PREFIX_LINE ) ) {
			ret = compilePrefixLine( macro );
		}

	//	If the macro starts with a popto directive the body
	//	of the macro is to be compiled by temporarily
	//	unwinding the context stack until the generation
	//	definition is an instance of the parameter class.
	//	If no such definition is found, a warning is logged
	//	and the macro is considered to be in error.

		else if( cflib::CFLib::startsWith( macro, _POPONEFROMTOP ) ) {
			ret = compilePopOneFromTop( macro );
		}

		else if( cflib::CFLib::startsWith( macro, _POPTOP ) ) {
			ret = compilePopTop( macro );
		}

		else if( cflib::CFLib::startsWith( macro, _POPTO ) ) {
			ret = compilePopTo( macro );
		}

		else if( cflib::CFLib::startsWith( macro, _POP ) ) {
			ret = compilePop( macro );
		}

	//	If the macro starts with a reference directive the body
	//	of the macro is compiled by calling the bound reference
	//	method using the current context.  The definition item
	//	returned will be the leaf of an artificially generated
	//	context stack that traces the scope of the referenced item
	//	up to the package which owns the item.

		else if( cflib::CFLib::startsWith( macro, _REFERENCE ) ) {
			ret = compileReference( macro );
		}

	//	Counters are up next

		else if( cflib::CFLib::startsWith( macro, _COUNTER ) ) {
			ret = compileCounter( macro );
		}

	//	Next are some built-in macros that deal with the current context
	//	and current file.

		else if( macro == _EMPTY ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinEmpty( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENERATINGCLASS ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGeneratingClass( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENFILEBASENAME ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenFileBaseName( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENFILENAME ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenFileName( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENFILEGENERATEONCE ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenFileGenerateOnce( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENFILEMODULENAME ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenFileModuleName( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENFILEFULLNAME ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenFileFullName( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENSUBPACKAGE ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenSubPackageName( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_SOURCEBUNDLE ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinSourceBundle( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_SOURCEPACKAGE ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinSourcePackage( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}

	//	More built-ins get information about the generation itself

		else if( macro == _BUILTIN_GENERATORNAME ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGeneratorName( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENERATORVERSION ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGeneratorVersion( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENDATE ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenDate( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENTIME ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenTime( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENTIMESTAMP ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenTimestamp( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}
		else if( macro == _BUILTIN_GENSERIALIZABLEUID ) {
			ICFGenKbGelBuiltinObj* builtinObj = new MssCFBuiltinGenSerializableUID( genEngine ); 
			ICFGenKbGelBuiltinEditObj* builtinEdit = dynamic_cast<ICFGenKbGelBuiltinEditObj*>( builtinObj->beginEdit() );
			builtinEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			builtinEdit->setRequiredContainerGelCache( myGelCache );
			builtinEdit->setRequiredSourceText( macro );
			builtinObj = dynamic_cast<ICFGenKbGelBuiltinObj*>( builtinEdit->create() );
			ret = builtinObj;
		}

	//	Otherwise assume we just have the name of a normal macro
	//	and need to expand it's body

		else {
			ICFGenKbGelExpansionObj* expansionObj = getGenEngine()->getGelExpansionTableObj()->newInstance(); 
			ICFGenKbGelExpansionEditObj* expansionEdit = dynamic_cast<ICFGenKbGelExpansionEditObj*>( expansionObj->beginEdit() );
			expansionEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			expansionEdit->setRequiredContainerGelCache( myGelCache );
			if( macro.length() > 127 )  {
				expansionEdit->setRequiredMacroName( macro.substr( 0, 127 ) );
			}
			else {
				expansionEdit->setRequiredMacroName( macro );
			}
			expansionEdit->setRequiredSourceText( macro );
			expansionObj = dynamic_cast<ICFGenKbGelExpansionObj*>( expansionEdit->create() );
			ret = expansionObj;
		}

		if( ret != NULL ) {
			ret = myGelCache->rememberMacro( macro, ret );
#			if TRACE_COMPILER
				std::cout << "\t\tGEL Cache now remembers " << ret->getClassName() << " pkey " << ret->getPKey()->toString() << "\n";
#			endif
		}
		else {
#			if TRACE_COMPILER
				std::cout << "\t\tMacro $" << macro << "$ compiled to NULL\n";
#			endif
		}

		return( ret );
	}

	/**
	 *	Macros that start with "iterate " are special macros
	 *	used to iterate through a list of detail items.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileIteration( const std::string& macro )
	{
		std::string::size_type start;
		std::string::size_type lparen;
		std::string::size_type lenMacro = 0;
		unsigned char ch;
		bool gotIType = false;
		bool gotRParen = false;
		std::string strItemType;
		std::string itype;
		std::string itemname;
		std::string iteratorName;
		ICFGenKbGenItemObj* genItem = NULL;
		MssCFGenIteratorObj* iterator = NULL;

		std::string bodyBefore;
		std::string bodyFirst;
		std::string bodyEach;
		std::string bodyLast;
		std::string bodyAfter;
		std::string bodyLone;
		std::string bodyEmpty;

		static const std::string S_ProcName( "MssCFGelCompiler::compileIteration" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _ITERATE ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _ITERATE );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "iterate"

		start = _ITERATE.length();

	//  Skip whitespace

		if( macro[ start ] == ' ' ) {
			start ++;
		}

	//	Everything from start to the intervening white space or '('
	//	is the iterator name. If there is no '(' the macro is invalid

		while( (macro[ start ] != '(' )
			&& (macro[ start ] != ' ')
			&& (macro[ start ] != '\t')
			&& (macro[ start ] != '\r')
			&& (macro[ start ] != '\n')
			&& (macro[ start ] != '\f'))
		{
			iteratorName.push_back( macro[ start ] );
			start ++;
		}

	//  Skip whitespace

		if( macro[ start ] == ' ' ) {
			start ++;
		}

	//	Expect lparen

		if( macro[ start ] != '(' ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Iteration macro must specify iteration parameters. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}
		else {
			start = start + 1;
		}

	//	An empty iterator name is invalid

		if( iteratorName.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Iteration must specify an iterator. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Parse the iteration limbs, which take the form "itype itemname"
	//	separated by commas and terminated by a closing ')'

		itype = cflib::CFLib::S_EMPTY;
		itemname = cflib::CFLib::S_EMPTY;

		while( ! gotRParen ) {

			if( start >= lenMacro ) {
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Malformed iterator invocation has no closing paren. \"" );
				msg.append( macro + "\" is invalid" );
				setCompileError();
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
				return( NULL );
			}

			// Skip leading whitespace

			ch = macro[  start  ];
			if( ch ==  ' ' ) {
				start ++;
				continue;
			}

			// Check for the terminating RParen

			if( ch == ')' ) {
				start ++;
				gotRParen = true;
				continue;
			}

			// Reset the item type

			gotIType = false;
			itype = cflib::CFLib::S_EMPTY;

			// Scan the itype

			while( true ) {

				if( start >= lenMacro ) {
					break;
				}

				ch = macro[  start  ];
				if( ch == ' ' ) {
					if( itype.length() > 0 ) {
						gotIType = true;
					}
					break;
				}
				else if( ch == ',' || ch == ')' )
				{
					if( itype.length() > 0 ) {
						gotIType = true;
					}
					break;
				}
				else {
					itype.push_back( ch );
					start ++;
				}
			}

			// We must have an iterator type

			if( ! gotIType ) {
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Missing iterator type argument. \"" );
				msg.append( macro + "\" is invalid" );
				setCompileError();
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
				return( NULL );
			}

			// Skip intervening whitespace

			while( start < lenMacro ) {
				ch = macro[  start  ];
				if( ch == ' '
					|| ch == '\n'
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\f' )
				{
					start ++;
				}
				else {
					break;
				}
			}

			// Reset the itemname

			itemname = cflib::CFLib::S_EMPTY;

			// Scan the itemname

			while( start < lenMacro ) {

				if( start >= lenMacro ) {
					break;
				}

				ch = macro[  start  ];

				if( ch == ' '
					|| ch == '\n'
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\f' )
				{
					break;
				}

				if( ch == ',' || ch == ')' ) {
					break;
				}

				itemname.push_back( ch );
				start ++;
			}

	//		Check for recognized iterators

			strItemType = itype;

			if( strItemType == _ITERATOR_EACH ) {
				if( bodyEach.length() <= 0 ) {
					bodyEach = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_EMPTY ) {
				if( bodyEmpty.length() <= 0 ) {
					bodyEmpty = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_LAST ) {
				if( bodyLast.length() <= 0 ) {
					bodyLast = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_FIRST ) {
				if( bodyFirst.length() <= 0 ) {
					bodyFirst = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_BEFORE ) {
				if( bodyBefore.length() <= 0 ) {
					bodyBefore = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_AFTER ) {
				if( bodyAfter.length() <= 0 ) {
					bodyAfter = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_LONE ) {
				if( bodyLone.length() <= 0 ) {
					bodyLone = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Iterator type \"" );
					msg.append( strItemType );
					msg.append( "\" is already defined. \"" );
					msg.append( macro + "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else {
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Unrecognized iterator type \"" );
				msg.append( strItemType );
				msg.append( "\". \"" );
				msg.append( macro + "\" is invalid" );
				setCompileError();
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
				return( NULL );
			}

	//		Break the loop if we've reached the end of the macro

			if( start >= lenMacro ) {
				continue;
			}

	//		If our next character is a ',' its a separator to be skipped

			ch = macro[  start  ];
			if( ch == ',' ) {
				start ++;
				continue;
			}

	//		If our next character is a ')', we should be done

			if( ch == ')' ) {
				gotRParen = true;
				start ++;
				continue;
			}
		}

		if( ! gotRParen ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Iterator invocation is missing a terminating ')'. \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	At a minimum we must have an "each" limb

		if( bodyEach.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Iterator invocation must specify an \"" );
			msg.append( _ITERATOR_EACH );
			msg.append( " limb. \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	The body macros we got for expansion and the number of items in the iteration
	//	determine exactly what we do for any given case.

		ICFGenKbGelIteratorObj* iteratorObj = genEngine->getGelIteratorTableObj()->newInstance();
		ICFGenKbGelIteratorEditObj* iteratorEdit = dynamic_cast<ICFGenKbGelIteratorEditObj*>( iteratorObj->beginEdit() );
		iteratorEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		iteratorEdit->setRequiredContainerGelCache( myGelCache );
		iteratorEdit->setRequiredSourceText( macro );
		iteratorEdit->setRequiredIteratorName( iteratorName );
		if( bodyBefore.length() > 0 ) {
			iteratorEdit->setOptionalExpandBeforeValue( bodyBefore );
		}
		else {
			iteratorEdit->setOptionalExpandBeforeNull();
		}
		if( bodyFirst.length() > 0 ) {
			iteratorEdit->setOptionalExpandFirstValue( bodyFirst );
		}
		else {
			iteratorEdit->setOptionalExpandFirstNull();
		}
		iteratorEdit->setRequiredExpandEach( bodyEach );
		if( bodyLast.length() > 0 ) {
			iteratorEdit->setOptionalExpandLastValue( bodyLast );
		}
		else {
			iteratorEdit->setOptionalExpandLastNull();
		}
		if( bodyAfter.length() > 0 ) {
			iteratorEdit->setOptionalExpandAfterValue( bodyAfter );
		}
		else {
			iteratorEdit->setOptionalExpandAfterNull();
		}
		if( bodyLone.length() > 0 ) {
			iteratorEdit->setOptionalExpandLoneValue( bodyLone );
		}
		else {
			iteratorEdit->setOptionalExpandLoneNull();
		}
		if( bodyEmpty.length() > 0 ) {
			iteratorEdit->setOptionalExpandEmptyValue( bodyEmpty );
		}
		else {
			iteratorEdit->setOptionalExpandEmptyNull();
		}

		try {
			iteratorObj = dynamic_cast<ICFGenKbGelIteratorObj*>( iteratorEdit->create() );
		}
		catch ( ... ) {
#			if TRACE_COMPILER
				std::cout << "Create of iterator threw an exception\n";
#			endif
			iteratorObj = NULL;
		}

		return( iteratorObj );
	}

	/**
	 *	Macros that start with "spread " are special macros
	 *	used to spread an iteration of detail items.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileSpread( const std::string& macro )
	{
		int					start;
		int					lparen;
		int					lenMacro = 0;
		char				ch;
		bool				gotIType = false;
		bool				gotRParen = false;
		std::string			strItemType;
		std::string	  		itype;
		std::string		  	itemname;
		std::string			iteratorName;
		ICFGenKbGelInstructionObj* ret = NULL;
		ICFGenKbGenItemObj* genItem = NULL;
		MssCFGenIteratorObj* iterator = NULL;

		std::string			bodyBetween;
		std::string			bodyBefore;
		std::string			bodyFirst;
		std::string			bodyEach;
		std::string			bodyLast;
		std::string			bodyAfter;
		std::string			bodyLone;
		std::string			bodyEmpty;

		static const std::string S_ProcName( "compileSpread" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _SPREAD ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _SPREAD );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "spread"

		start = _SPREAD.length();

	//  Skip whitespace

		while ((macro[ start ] == ' ')
			|| (macro[ start ] == '\t')
			|| (macro[ start ] == '\r')
			|| (macro[ start ] == '\n')
			|| (macro[ start ] == '\f'))
		{
			start = start + 1;
		}

	//	Everything from start to the intervening white space or '('
	//	is the iterator name. If there is no '(' the macro is invalid

		while( (macro[ start ] != '(' )
			&& (macro[ start ] != ' ')
			&& (macro[ start ] != '\t')
			&& (macro[ start ] != '\r')
			&& (macro[ start ] != '\n')
			&& (macro[ start ] != '\f'))
		{
			iteratorName.push_back( macro[ start ] );
			start = start + 1;
		}

	//  Skip whitespace

		if( macro[ start ] == ' ' ) {
			start ++;
		}

	//	Expect lparen

		if( macro[ start ] != '(' ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Spread macro must specify spread parameters. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}
		else {
			start = start + 1;
		}

	//	An empty iterator name is invalid

		if( iteratorName.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Spread must specify an iterator. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Parse the spread limbs, which take the form "itype itemname"
	//	separated by commas and terminated by a closing ')'

		itype = cflib::CFLib::S_EMPTY;
		itemname = cflib::CFLib::S_EMPTY;

		while( ! gotRParen ) {

			if( start >= lenMacro ) {
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Malformed spread invocation. \"" );
				msg.append( macro );
				msg.append( "\" is invalid" );
				setCompileError();
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
				return( NULL );
			}

			// Skip leading whitespace

			ch = macro[  start  ];
			if( ( ch ==  ' ' )
				|| ( ch == '\n' )
				|| ( ch == '\t' )
				|| ( ch == '\f' )
				|| ( ch == '\r' ) )
			{
				start ++;
				continue;
			}

			// Check for the terminating RParen

			if( ch == ')' ) {
				start ++;
				gotRParen = true;
				continue;
			}

			// Reset the item type

			gotIType = false;
			itype = cflib::CFLib::S_EMPTY;

			// Scan the itype

			while( true ) {

				if( start >= lenMacro ) {
					break;
				}

				ch = macro[  start  ];
				if( ( ch == ' ' )
					|| ( ch == '\n' )
					|| ( ch == '\t' )
					|| ( ch == '\r' )
					|| ( ch == '\f' ) )
				{
					if( itype.length() > 0 ) {
						gotIType = true;
					}
					break;
				}
				else if( ch == ',' || ch == ')' )
				{
					if( itype.length() > 0 ) {
						gotIType = true;
					}
					break;
				}
				else {
					itype.push_back( ch );
					start ++;
				}
			}

			// We must have an iterator type

			if( ! gotIType ) {
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Missing spread type argument. \"" );
				msg.append( macro );
				msg.append( "\" is invalid" );
				setCompileError();
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
				return( NULL );
			}

			// Skip intervening whitespace

			while( start < lenMacro ) {
				ch = macro[  start  ];
				if( ch == ' '
					|| ch == '\n'
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\f' )
				{
					start ++;
				}
				else {
					break;
				}
			}

			// Reset the itemname

			itemname = cflib::CFLib::S_EMPTY;

			// Scan the itemname

			while( start < lenMacro ) {

				if( start >= lenMacro ) {
					break;
				}

				ch = macro[  start  ];

				if( ch == ' '
					|| ch == '\n'
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\f' )
				{
					break;
				}

				if( ch == ',' || ch == ')' ) {
					break;
				}

				itemname.push_back( ch );
				start ++;
			}

	//		Check for recognized spreads

			strItemType = itype;

			if( strItemType == _SPREAD_BETWEEN ) {
				if( bodyBetween.length() <= 0 ) {
					bodyBetween = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _SPREAD_BETWEEN );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_EACH ) {
				if( bodyEach.length() <= 0 ) {
					bodyEach = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_EACH );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_EMPTY ) {
				if( bodyEmpty.length() <= 0 ) {
					bodyEmpty = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_EMPTY );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_LAST ) {
				if( bodyLast.length() <= 0 ) {
					bodyLast = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_LAST );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_FIRST ) {
				if( bodyFirst.length() <= 0 ) {
					bodyFirst = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_FIRST );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_BEFORE ) {
				if( bodyBefore.length() <= 0 ) {
					bodyBefore = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_BEFORE );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_AFTER ) {
				if( bodyAfter.length() <= 0 ) {
					bodyAfter = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_AFTER );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else if( strItemType == _ITERATOR_LONE ) {
				if( bodyLone.length() <= 0 ) {
					bodyLone = itemname;
				}
				else {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Spread type \"" );
					msg.append( _ITERATOR_LONE );
					msg.append( "\" is already defined. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}
			else {
				std::string msg( CLASS_NAME );
				msg.push_back( '.' );
				msg.append( S_ProcName );
				msg.append( "() Unrecognized spread type \"" );
				msg.append( strItemType );
				msg.append( "\". \"" );
				msg.append( macro );
				msg.append( "\" is invalid" );
				setCompileError();
				getCompileLog()->message( msg );
#				if TRACE_COMPILER
					std::cout << "Compiler error detected: " + msg;
#				endif
				return( NULL );
			}

	//		Break the loop if we've reached the end of the macro

			if( start >= lenMacro ) {
				continue;
			}

	//		If our next character is a ',' its a separator to be skipped

			ch = macro[  start  ];
			if( ch == ',' ) {
				start ++;
				continue;
			}

	//		If our next character is a ')', we should be done

			if( ch == ')' ) {
				gotRParen = true;
				start ++;
				continue;
			}
		}

		if( ! gotRParen ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Spread invocation is missing a terminating ')'. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	At a minimum we must have an "each" limb

		if( bodyEach.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Spread must specit an \"" );
			msg.append( _ITERATOR_EACH );
			msg.append( "\" limb. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	The body macros we got for expansion and the number of items in the iteration
	//	determine exactly what we do for any given case.

		ICFGenKbGelSpreadObj* spreadObj = getGenEngine()->getGelSpreadTableObj()->newInstance(); 
		ICFGenKbGelSpreadEditObj* spreadEdit = dynamic_cast<ICFGenKbGelSpreadEditObj*>( spreadObj->beginEdit() );
		spreadEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		spreadEdit->setRequiredContainerGelCache( myGelCache );
		spreadEdit->setRequiredSourceText( macro );
		spreadEdit->setRequiredIteratorName( iteratorName );
		if( bodyBetween.length() > 0 ) {
			spreadEdit->setOptionalExpandBetweenValue( bodyBetween );
		}
		else {
			spreadEdit->setOptionalExpandBetweenNull();
		}
		if( bodyBefore.length() > 0 ) {
			spreadEdit->setOptionalExpandBeforeValue( bodyBefore );
		}
		else {
			spreadEdit->setOptionalExpandBeforeNull();
		}
		if( bodyFirst.length() > 0 ) {
			spreadEdit->setOptionalExpandFirstValue( bodyFirst );
		}
		else {
			spreadEdit->setOptionalExpandFirstNull();
		}
		spreadEdit->setRequiredExpandEach( bodyEach );
		if( bodyLast.length() > 0 ) {
			spreadEdit->setOptionalExpandLastValue( bodyLast );
		}
		else {
			spreadEdit->setOptionalExpandLastNull();
		}
		if( bodyAfter.length() > 0 ) {
			spreadEdit->setOptionalExpandAfterValue( bodyAfter );
		}
		else {
			spreadEdit->setOptionalExpandAfterNull();
		}
		if( bodyLone.length() > 0 ) {
			spreadEdit->setOptionalExpandLoneValue( bodyLone );
		}
		else {
			spreadEdit->setOptionalExpandLoneNull();
		}
		if( bodyEmpty.length() > 0 ) {
			spreadEdit->setOptionalExpandEmptyValue( bodyEmpty );
		}
		else {
			spreadEdit->setOptionalExpandEmptyNull();
		}
		spreadObj = dynamic_cast<ICFGenKbGelSpreadObj*>( spreadEdit->create() );
		ret = spreadObj;

		return( ret );
	}

	/**
	 *	Macros that start with "counter " are special directives
	 *	which manipulate index counters.
	 *	<p>
	 *	Counters are a bit limited, but useful for positional parameter bindings.
	 *	Remember that new counters are initialized to 0, not 1.
	 *	<p>
	 *	Syntax is:
	 *	<UL>
	 *		<LI>counter name new</LI>
	 *		<LI>counter name increment</LI>
	 *		<LI>counter name decrement</LI>
	 *		<LI>counter name value</LI>
	 *	</UL>
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileCounter( const std::string& macro )
	{
		int					start;
		int					lenMacro = 0;
		char				ch;
		std::string				counterName;
		std::string				counterOp;
		std::string				counterOpName;
		ICFGenKbGelInstructionObj* ret = NULL;
		static const std::string S_ProcName( "MssCFGelCompiler::compileCounter" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _COUNTER ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _COUNTER );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	WORKING TODO Make all the fragments look like this
	//	Set the cursor past "counter "

		start = _COUNTER.length();
		while ( ( start < lenMacro )
			&&	(	(( ch = macro[ start ]) == ' ')
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Everything to the next whitespace is part of the counter name

		counterName = cflib::CFLib::S_EMPTY;
		while( start < lenMacro
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			counterName.push_back( ch );
			start ++;
		}

		if( counterName.length() == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed counter directive must specify a counterName. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Skip any intervening whitespace

		if( start < lenMacro ) {
			ch = macro[  start  ];
			while ( ( start < lenMacro )
				&&	(	(( ch = macro[ start ]) == ' ')
						|| ch == '\t'
						|| ch == '\r'
						|| ch == '\n'
						|| ch == '\f' ) ) 
			{
				start = start + 1;
			}
		}

	//	Next is the counter operation: new, increment, decrement, or value

		counterOp = cflib::CFLib::S_EMPTY;
		while( start < lenMacro
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			counterOp.push_back( ch );
			start ++;
		}

		if( counterOp.length() == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed counter directive must specify a counterOp. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	The macro should be fully consumed

		if( start < lenMacro ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed counter directive cannot be followed by additional macro expansions. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Locate the appropriate counter and compile the operation.  All return emtpy strings
	//	except for value.

		counterOpName = counterOp;

		if( _COUNTER_OP_NEW == counterOpName ) {
			ICFGenKbGelCounterObj* counterObj = new MssCFCounterNew( genEngine );
			ICFGenKbGelCounterEditObj* counterEdit = dynamic_cast<ICFGenKbGelCounterEditObj*>( counterObj->beginEdit() );
			counterEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			counterEdit->setRequiredContainerGelCache( myGelCache );
			counterEdit->setRequiredCounterName( counterName );
			counterEdit->setRequiredSourceText( macro );
			counterObj = dynamic_cast<ICFGenKbGelCounterObj*>( counterEdit->create() );
			ret = counterObj;
		}
		else if( _COUNTER_OP_INCR == counterOpName ) {
			ICFGenKbGelCounterObj* counterObj = new MssCFCounterIncrement( genEngine );
			ICFGenKbGelCounterEditObj* counterEdit = dynamic_cast<ICFGenKbGelCounterEditObj*>( counterObj->beginEdit() );
			counterEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			counterEdit->setRequiredContainerGelCache( myGelCache );
			counterEdit->setRequiredCounterName( counterName );
			counterEdit->setRequiredSourceText( macro );
			counterObj = dynamic_cast<ICFGenKbGelCounterObj*>( counterEdit->create() );
			ret = counterObj;
		}
		else if( _COUNTER_OP_DECR == counterOpName ) {
			ICFGenKbGelCounterObj* counterObj = new MssCFCounterDecrement( genEngine );
			ICFGenKbGelCounterEditObj* counterEdit = dynamic_cast<ICFGenKbGelCounterEditObj*>( counterObj->beginEdit() );
			counterEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			counterEdit->setRequiredContainerGelCache( myGelCache );
			counterEdit->setRequiredSourceText( macro );
			counterEdit->setRequiredCounterName( counterName );
			counterObj = dynamic_cast<ICFGenKbGelCounterObj*>( counterEdit->create() );
			ret = counterObj;
		}
		else if( _COUNTER_OP_VALUE == counterOpName ) {
			ICFGenKbGelCounterObj* counterObj = new MssCFCounterValue( genEngine );
			ICFGenKbGelCounterEditObj* counterEdit = dynamic_cast<ICFGenKbGelCounterEditObj*>( counterObj->beginEdit() );
			counterEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
			counterEdit->setRequiredContainerGelCache( myGelCache );
			counterEdit->setRequiredSourceText( macro );
			counterEdit->setRequiredCounterName( counterName );
			counterObj = dynamic_cast<ICFGenKbGelCounterObj*>( counterEdit->create() );
			ret = counterObj;
		}
		else {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed counter operation \"" );
			msg.append( counterOpName );
			msg.append( "\" must be one of new, increment, decrement, or value. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		return( ret );
	}

	/**
	 *	The constraint macros enforce minimum and maximum evaluation constraints
	 *	over the value of their detail instructions.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileConstrainMax( const std::string& macro )
	{
		std::string::size_type start;
		std::string::size_type lenMacro = 0;
		unsigned char ch;
		std::string constrainLimit;
		std::string constrainedValue;
		static const std::string S_ProcName( "compileConstrainMax" );

		//	Validate parameters

		lenMacro = macro.length();
		if (lenMacro <= 0) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _CONSTRAIN_MAX ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _CONSTRAIN_MAX );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Set the cursor past "constraintMax "

		start = _CONSTRAIN_MAX.length();
		while ( ( start < lenMacro )
			&&	(	(( ch = macro[ start ]) == ' ')
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	(	(( ch = macro[ start ]) == ' ')
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Everything to the next whitespace is part of the constraint limit

		constrainLimit = cflib::CFLib::S_EMPTY;
		while( start < lenMacro
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			constrainLimit.push_back( ch );
			start++;
		}

		if (constrainLimit.length() == 0) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed constranMax directive must specify a constrainLimit. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	(	(( ch = macro[ start ]) == ' ')
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		std::string remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelConstrainObj* constrainObj = new MssCFConstrainMax( genEngine );
		ICFGenKbGelConstrainEditObj* constrainEdit = dynamic_cast<ICFGenKbGelConstrainEditObj*>( constrainObj->beginEdit() );
		constrainEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		constrainEdit->setRequiredContainerGelCache( myGelCache );
		constrainEdit->setRequiredSourceText( macro );
		constrainObj = dynamic_cast<ICFGenKbGelConstrainObj*>( constrainEdit->create() );

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro );
		if( remainder == NULL ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
			msg.append( ". \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		bool isDigitString = true;
		std::string::size_type limitLen = constrainLimit.length();
		for (std::string::size_type idxLimit = 0; isDigitString && (idxLimit < limitLen); idxLimit++)
		{
			unsigned char c = constrainLimit[ idxLimit ];
			if ((c != '0')
			 && (c != '1')
			 && (c != '2')
			 && (c != '3')
			 && (c != '4')
			 && (c != '5')
			 && (c != '6')
			 && (c != '7')
			 && (c != '8')
			 && (c != '9')
			 && (c != '+')
			 && (c != '-'))
			{
				isDigitString = false;
			}
		}

		constrainEdit = dynamic_cast<ICFGenKbGelConstrainEditObj*>( constrainObj->beginEdit() );
		constrainEdit->setOptionalLookupRemainder( remainder );
		if( isDigitString ) {
			constrainEdit->setOptionalHardConstraintValue( *cflib::CFLibXmlUtil::parseInt64( constrainLimit ) );
			constrainEdit->setOptionalConstrainingNameNull();
		}
		else {
			constrainEdit->setOptionalHardConstraintNull();
			constrainEdit->setOptionalConstrainingNameValue( constrainLimit );
		}
		constrainEdit = dynamic_cast<ICFGenKbGelConstrainEditObj*>( constrainEdit->update() );

		return( constrainObj );
	}

	/**
	 *	The constraint macros enforce minimum and maximum evaluation constraints
	 *	over the value of their detail instructions.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileConstrainMin( const std::string& macro )
	{
		std::string::size_type start;
		std::string::size_type lenMacro = 0;
		unsigned char ch;
		std::string constrainLimit;
		static const std::string S_ProcName( "compileConstrainMin" );

		//	Validate parameters

		lenMacro = macro.length();
		if (lenMacro == 0) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _CONSTRAIN_MIN ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _CONSTRAIN_MIN );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Set the cursor past "constraintMin "

		start = _CONSTRAIN_MIN.length();

		while ( ( start < lenMacro )
			&&	(	(( ch = macro[ start ]) == ' ')
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Everything to the next whitespace is part of the counter name

		constrainLimit = cflib::CFLib::S_EMPTY;
		while( start < lenMacro
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			constrainLimit.push_back( ch );
			start++;
		}

		if (constrainLimit.length() == 0) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed constrainMin directive must specify a constrainLimit. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	(	(( ch = macro[ start ]) == ' ')
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		std::string remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelConstrainObj* constrainObj = new MssCFConstrainMin( genEngine );
		ICFGenKbGelConstrainEditObj* constrainEdit = dynamic_cast<ICFGenKbGelConstrainEditObj*>( constrainObj->beginEdit() );
		constrainEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		constrainEdit->setRequiredContainerGelCache( myGelCache );
		constrainEdit->setRequiredSourceText( macro );
		constrainObj = dynamic_cast<ICFGenKbGelConstrainObj*>( constrainEdit->create() );

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro );
		if( remainder == NULL ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
			msg.append( ". \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		bool isDigitString = true;
		std::string::size_type limitLen = constrainLimit.length();
		for (std::string::size_type idxLimit = 0; isDigitString && (idxLimit < limitLen); idxLimit++)
		{
			unsigned char c = constrainLimit[ idxLimit ];
			if ((c != '0')
			 && (c != '1')
			 && (c != '2')
			 && (c != '3')
			 && (c != '4')
			 && (c != '5')
			 && (c != '6')
			 && (c != '7')
			 && (c != '8')
			 && (c != '9')
			 && (c != '+')
			 && (c != '-'))
			{
				isDigitString = false;
			}
		}

		constrainEdit = dynamic_cast<ICFGenKbGelConstrainEditObj*>( constrainObj->beginEdit() );
		constrainEdit->setOptionalLookupRemainder( remainder );
		if( isDigitString ) {
			constrainEdit->setOptionalHardConstraintValue( *cflib::CFLibXmlUtil::parseInt64( constrainLimit ) );
			constrainEdit->setOptionalConstrainingNameNull();
		}
		else {
			constrainEdit->setOptionalHardConstraintNull();
			constrainEdit->setOptionalConstrainingNameValue( constrainLimit );
		}
		constrainEdit = dynamic_cast<ICFGenKbGelConstrainEditObj*>( constrainEdit->update() );

		return( constrainObj );
	}


	/**
	 *	Macros that start with "pop " are special directives
	 *	which temporarily unwind the expansion context n levels.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compilePop( const std::string& macro )
	{
		int					start;
		int					lenMacro = 0;
		char				ch;
		std::string			goalTypeName;
		std::string			remainingMacro;
		ICFGenKbGelInstructionObj* ret = NULL;
		static const std::string S_ProcName( "MssCFGelCompiler::compilePop" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _POP ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _POP );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "popto "

		start = _POP.length();

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Everything to the next whitespace is part of the goal class name

		goalTypeName = cflib::CFLib::S_EMPTY;
		if( start < lenMacro ) {
			while( start < lenMacro 
				&& ( ch = macro[ start ] ) != ' '
				&& ch != '\t'
				&& ch != '\n'
				&& ch != '\f'
				&& ch != '\r' )
			{
				goalTypeName.push_back( ch );
				start ++;
			}
		}

		if( goalTypeName.length() == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed pop directive must specify number of contexts to pop. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Whatever remains of the macro will be passed on to the goal context

		if( start >= lenMacro ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed popto directive must specify a macro body to be expanded. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelPopObj* popObj = new MssCFPop( genEngine ); 
		ICFGenKbGelPopEditObj* popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
		popEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		popEdit->setRequiredContainerGelCache( myGelCache );
		popEdit->setRequiredGoalTypeName( goalTypeName );
		popEdit->setRequiredSourceText( macro );
		try {
			popObj = dynamic_cast<ICFGenKbGelPopObj*>( popEdit->create() );
		}
		catch ( ... ) {
#			if TRACE_COMPILER
				std::cout << "Create of pop threw an exception\n";
#			endif
			popObj = NULL;
		}

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro);
		if( remainder != NULL ) {
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
			popEdit->setOptionalLookupRemainder( remainder );
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popEdit->update() );
		}

		ret = popObj;

		return( ret );
	}

	/**
	 *	Macros that start with "popto " are special directives
	 *	which temporarily unwind the expansion context until
	 *	the generation definition is an instance of the
	 *	parameter class.  If no such definition is found in
	 *	the stack, a warning is logged and the macro is
	 *	considered to be in error.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compilePopTo( const std::string& macro )
	{
		int start;
		int lenMacro = 0;
		char ch;
		std::string goalTypeName;
		std::string remainingMacro;
		ICFGenKbGelInstructionObj* ret = NULL;
		static const std::string S_ProcName( "compilePopTo" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _POPTO ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _POPTO );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "popto "

		start = _POPTO.length();

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Everything to the next whitespace is part of the goal class name

		goalTypeName = cflib::CFLib::S_EMPTY;
		if( start < lenMacro ) {
			while( start < lenMacro 
				&& ( ch = macro[ start ] ) != ' '
				&& ch != '\t'
				&& ch != '\n'
				&& ch != '\f'
				&& ch != '\r' )
			{
				goalTypeName.push_back( ch );
				start ++;
			}
		}

		if( goalTypeName.length() == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( "Malformed popto directive must specify a goalTypeName. \"" );
			msg.append( ". \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		goalTypeName = getGenEngine()->fixGenDefName( goalTypeName );

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Whatever remains of the macro will be passed on to the goal context

		if( start >= lenMacro ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed popto directive must specify a macro body to be expanded. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelPopObj* popObj = new MssCFPopTo( genEngine ); 
		ICFGenKbGelPopEditObj* popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
		popEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		popEdit->setRequiredContainerGelCache( myGelCache );
		popEdit->setRequiredGoalTypeName( goalTypeName );
		popEdit->setRequiredSourceText( macro );
		try {
			popObj = dynamic_cast<ICFGenKbGelPopObj*>( popEdit->create() );
		}
		catch ( ... ) {
#			if TRACE_COMPILER
				std::cout << "Create of pop threw an exception\n";
#			endif
			popObj = NULL;
		}

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro);
		if( remainder != NULL ) {
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
			popEdit->setOptionalLookupRemainder( remainder );
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popEdit->update() );
		}

		ret = popObj;

		return( ret );
	}

	/**
	 *	Macros that start with "poptop " are special directives
	 *	which temporarily unwind the expansion context until
	 *	the highest instance of the parameter class is found.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compilePopTop( const std::string& macro )
	{
		std::string::size_type start;
		std::string::size_type lenMacro = 0;
		unsigned char ch;
		ICFGenKbDefClassObj* searchType;
		MssCFGelCompiler goalContext = NULL;
		MssCFGelCompiler topContext = NULL;
		ICFGenKbDefClassObj* goalType = NULL;
		std::string goalTypeName;
		std::string remainingMacro;
		ICFGenKbGelInstructionObj* ret = NULL;
		ICFGenKbDefClassObj* objectDefType = getGenEngine()->getDefClassTableObj()->readDefClassByNameIdx( S_Object );
		static const std::string S_ProcName( "compilePopTop" );

		//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _POPTOP ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _POPTOP );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Set the cursor past "poptop "

		start = _POPTOP.length();

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Everything to the next whitespace is part of the goal class name

		goalTypeName = cflib::CFLib::S_EMPTY;
		while( start < lenMacro 
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			goalTypeName.push_back( ch );
			start++;
			if (start >= lenMacro) {
				break;
			}
		}

		if (goalTypeName.length() <= 0) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed poptop directive must specify a goalTypeName. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		goalTypeName = getGenEngine()->fixGenDefName( goalTypeName );

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Whatever remains of the macro will be passed on to the goal context

		if (start >= lenMacro) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed poptop directive must specify a macro body to be expanded. \"" );
			msg.append( S_MsgRemainderOfMacroNotCompiledToConstrainedValue );
			msg.append( ". \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelPopObj* popObj = new MssCFPopTop( genEngine ); 
		ICFGenKbGelPopEditObj* popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
		popEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		popEdit->setRequiredContainerGelCache( myGelCache );
		popEdit->setRequiredGoalTypeName( goalTypeName );
		popEdit->setRequiredSourceText( macro );
		try {
			popObj = dynamic_cast<ICFGenKbGelPopObj*>( popEdit->create() );
		}
		catch ( ... ) {
#			if TRACE_COMPILER
				std::cout << "Create of pop threw an exception\n";
#			endif
			popObj = NULL;
		}

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro);
		if( remainder != NULL ) {
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
			popEdit->setOptionalLookupRemainder( remainder );
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popEdit->update() );
		}

		ret = popObj;

		return( ret );
	}

	/**
	 *	Macros that start with "poponefromtop " are special directives
	 *	which temporarily unwind the expansion context until
	 *	the second-highest instance of the parameter class is found.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compilePopOneFromTop( const std::string& macro )
	{
		std::string::size_type start;
		std::string::size_type lenMacro = 0;
		unsigned char ch;
		std::string goalTypeName;
		std::string remainingMacro;
		ICFGenKbGelInstructionObj* ret = NULL;
		static const std::string S_ProcName( "compilePopOneFromTop" );

		//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _POPONEFROMTOP ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _POPONEFROMTOP );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Set the cursor past "poponefromtop "

		start = _POPONEFROMTOP.length();

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Everything to the next whitespace is part of the goal class name

		goalTypeName = cflib::CFLib::S_EMPTY;
		while( start < lenMacro 
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			goalTypeName.push_back( ch );
			start++;
		}

		if (goalTypeName.length() <= 0) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed poptop directive must specify a goalTypeName. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		goalTypeName = getGenEngine()->fixGenDefName( goalTypeName );

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		//	Whatever remains of the macro will be passed on to the goal context

		if (start >= lenMacro) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed poptop directive must specify a macro body to be expanded. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelPopObj* popObj = new MssCFPopOneFromTop( genEngine ); 
		ICFGenKbGelPopEditObj* popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
		popEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		popEdit->setRequiredContainerGelCache( myGelCache );
		popEdit->setRequiredGoalTypeName( goalTypeName );
		popEdit->setRequiredSourceText( macro );
		try {
			popObj = dynamic_cast<ICFGenKbGelPopObj*>( popEdit->create() );
		}
		catch ( ... ) {
#			if TRACE_COMPILER
				std::cout << "Create of pop threw an exception\n";
#			endif
			popObj = NULL;
		}

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro);
		if( remainder != NULL ) {
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popObj->beginEdit() );
			popEdit->setOptionalLookupRemainder( remainder );
			popEdit = dynamic_cast<ICFGenKbGelPopEditObj*>( popEdit->update() );
		}

		ret = popObj;

		return( ret );
	}


	/**
	 *	Macros that start with "reference " are special directives
	 *	which create a temporary call stack for expanding item
	 *	returned by the reference.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileReference( const std::string& macro )
	{
		int							start;
		int							lenMacro = 0;
		char						ch;
		std::string					refName;
		std::string					remainingMacro;
		ICFGenKbGelInstructionObj*	ret = NULL;

		static const std::string S_ProcName( "compileReference" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _REFERENCE ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _REFERENCE );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "reference "

		start = _REFERENCE.length();

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Everything to the next whitespace is part of the name of the
	//	reference method to be invoked.

		refName = cflib::CFLib::S_EMPTY;
		while( start < lenMacro 
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			refName.push_back( ch );
			start ++;
		}

		if( refName.length() == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed reference directive must sepcify a refName. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Whatever remains of the macro will be passed on to the injected expansion stack

		if( start >= lenMacro ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed reference directive must specify a macro body to be expanded. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		remainingMacro = macro.substr( start, lenMacro - start );

		ICFGenKbGelReferenceObj* referenceObj = new CFGenKbGelReferenceObj( genEngine );
		ICFGenKbGelReferenceEditObj* referenceEdit = dynamic_cast<ICFGenKbGelReferenceEditObj*>( referenceObj->beginEdit() );
		referenceEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		referenceEdit->setRequiredContainerGelCache( myGelCache );
		referenceEdit->setRequiredReferenceName( refName );
		referenceEdit->setRequiredSourceText( macro );
		referenceObj = dynamic_cast<ICFGenKbGelReferenceObj*>( referenceEdit->create() );

		ICFGenKbGelInstructionObj* remainder = compileMacro( remainingMacro);
		if( remainder != NULL ) {
			referenceEdit = dynamic_cast<ICFGenKbGelReferenceEditObj*>( referenceObj->beginEdit() );
			referenceEdit->setOptionalLookupRemainder( remainder );
			referenceEdit = dynamic_cast<ICFGenKbGelReferenceEditObj*>( referenceEdit->update() );
		}

		ret = referenceObj;

		return( ret );
	}

	/**
	 *	The GEL macro language supports a prefixline directive.
	 *	<p>
	 *	The syntax is:
	 *	<blockquote>
	 *		prefixline PrefixMacro BodyMacro
	 *	</blockquote>
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compilePrefixLine( const std::string& macro )
	{
		std::string::size_type start;
		std::string::size_type lenMacro = 0;
		unsigned char ch;

		std::string prefix;
		std::string prefixMacro;
		std::string body;
		std::string bodyMacro;
		ICFGenKbGelInstructionObj* ret = NULL;

		static const std::string S_ProcName( "compilePrefixLine" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _PREFIX_LINE ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _PREFIX_LINE );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "prefixline "

		start = _PREFIX_LINE.length();

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Everything to the next whitespace is part of the valueMacro name

		prefixMacro = cflib::CFLib::S_EMPTY;
		while( start < lenMacro 
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			prefixMacro.push_back( ch );
			start ++;
		}

		if( prefixMacro.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed prefixline directive must specify a prefixMacro. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

		// Everything to the next whitespace or $ is bodyMacro name

		bodyMacro = macro.substr( start, lenMacro - start );
		if( bodyMacro.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed prefixline directive must specify a remainder to expand. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		ICFGenKbGelPrefixLineObj* prefixLineObj = new CFGenKbGelPrefixLineObj( genEngine );
		ICFGenKbGelPrefixLineEditObj* prefixLineEdit = dynamic_cast<ICFGenKbGelPrefixLineEditObj*>( prefixLineObj->beginEdit() );
		prefixLineEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		prefixLineEdit->setRequiredContainerGelCache( myGelCache );
		prefixLineEdit->setRequiredSourceText( macro );
		prefixLineEdit->setRequiredPrefixName( prefixMacro );
		prefixLineObj = dynamic_cast<ICFGenKbGelPrefixLineObj*>( prefixLineEdit->create() );

		ICFGenKbGelInstructionObj* gelBody = compileMacro( bodyMacro);

		prefixLineEdit = dynamic_cast<ICFGenKbGelPrefixLineEditObj*>( prefixLineObj->beginEdit() );
		prefixLineEdit->setOptionalLookupRemainder( gelBody );
		prefixLineEdit = dynamic_cast<ICFGenKbGelPrefixLineEditObj*>( prefixLineEdit->update() );

		return( prefixLineObj );
	}

	/**
	 *	The GEL macro language supports branching through a switch directive.
	 *	<p>
	 *	The syntax is:
	 *	<blockquote>
	 *		switch ValMacro Key1 Macro1, Key2 Macro2, default MacroDefault
	 *	</blockquote>
	 *	<p>
	 *	There are two special keys as well:
	 *	<ul>
	 *		<li>nil</li>
	 *		<li>empty</li>
	 *	</ul>
	 *	<p>
	 *	The ValMacro expansion instruction is invoked by the compiled
	 *	switch instruction to produce a result, which will either be a
	 *	nil (NULL) value, an empty value, or a text to be used for looking
	 *	up instructions by key, and resorting to the default instructions if
	 *	no match is found.
	 *	<p>
	 *	If the expansion is NULL, as indicated by MssCFGenContext.isExpansionNull(),
	 *	then the special nil instructions are executed if available, and the default
	 *	instructions if not.
	 *	<p>
	 *  If the expansion is a non-NULL empty string, then the special case
	 *	empty instructions are evaluated, if available, and the default
	 *	instructions if not.
	 *	<p>
	 *	This method returns NULL in case of a compile error,
	 *	logging the error to the compile log.
	 */
	ICFGenKbGelInstructionObj* MssCFGelCompiler::compileSwitch( const std::string& macro )
	{
		int								start;
		int								lenMacro = 0;
		char							ch;
		std::string						value;
		std::string						valueMacro;
		std::string						keyValue;
		std::string						keyMacro;
		std::string						nilMacro;
		std::string						emptyMacro;
		std::string						defaultMacro;
		ICFGenKbGelInstructionObj* 		ret = NULL;

		static const std::string S_ProcName( "compileSwitch" );

	//	Validate parameters

		lenMacro = macro.length();
		if( lenMacro == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() " );
			msg.append( S_MsgEmptyNotAllowedForMacro );
			msg.append( " \"" );
			msg.append( macro + "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		if( ! cflib::CFLib::startsWith( macro, _SWITCH ) ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Method should only be invoked for " );
			msg.append( _SWITCH );
			msg.append( " macros. \"" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

	//	Set the cursor past "switch "

		start = _SWITCH.length();

	//	Skip any intervening whitespace

		while ( ( start < lenMacro )
			&&	( ( ( ch = macro[ start ]) == ' ' )
					|| ch == '\t'
					|| ch == '\r'
					|| ch == '\n'
					|| ch == '\f' ) ) 
		{
			start = start + 1;
		}

	//	Everything to the next whitespace is part of the valueMacro name

		valueMacro = cflib::CFLib::S_EMPTY;
		while( ( start < lenMacro )
			&& ( ch = macro[ start ] ) != ' '
			&& ch != '\t'
			&& ch != '\n'
			&& ch != '\f'
			&& ch != '\r' )
		{
			valueMacro.push_back( ch );
			start ++;
		}

		if( valueMacro.length() == 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed " );
			msg.append( _SWITCH );
			msg.append( " directive must specify a valueMacro. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		ICFGenKbGelSwitchObj* switchObj = new CFGenKbGelSwitchObj( genEngine ); 
		ICFGenKbGelSwitchEditObj* switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchObj->beginEdit() );
		switchEdit->setRequiredOwnerTenant( myGelCache->getRequiredOwnerTenant() );
		switchEdit->setRequiredContainerGelCache( myGelCache );
		switchEdit->setRequiredSourceText( macro );
		switchEdit->setRequiredValueExpansion( valueMacro );
		switchEdit->setRequiredDefaultExpansion( "PlaceHolder" );
		switchObj = dynamic_cast<ICFGenKbGelSwitchObj*>( switchEdit->create() );

	//	LOOP until done parsing switch limbs

		keyValue = cflib::CFLib::S_EMPTY;
		keyMacro = cflib::CFLib::S_EMPTY;

		while( start < lenMacro ) {

	//		Skip whitespace

			if( macro[ start ] == ' ' ) {
				start ++;
			}

	//		Check for trailing whitespace

			if( start >= lenMacro ) {
				break;
			}

	//		Reset keyValue and keyMacro

			keyValue = cflib::CFLib::S_EMPTY;
			keyMacro = cflib::CFLib::S_EMPTY;

	//		Next word is the keyValue

			while( ( start < lenMacro )
				&& ( ch = macro[ start ] ) != ' '
				&& ch != '\t'
				&& ch != '\n'
				&& ch != '\f'
				&& ch != '\r' )
			{
				keyValue.push_back( ch );
				start ++;
				if( start >= lenMacro ) {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Malformed " );
					msg.append( _SWITCH );
					msg.append( " directive must specify a keyValue for each case limb. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}

	//		Skip whitespace

			if( macro[ start ] == ' ' ) {
				start ++;
				if( start >= lenMacro ) {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Malformed switch directive must specify a keyMacro for case limb key \"" );
					msg.append( keyValue );
					msg.append( "\". \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
			}

	//		Next word is the keyMacro

			keyMacro = cflib::CFLib::S_EMPTY;
			while( start < lenMacro
				&& ( ch = macro[ start ] ) != ' '
				&& ch != '\t'
				&& ch != '\n'
				&& ch != '\f'
				&& ch != '\r' )
			{
				keyMacro.push_back( ch );
				start ++;
			}

	//		Check for the special case-limb keys nil, empty, and default

			if( _SWITCH_NIL == keyValue ) {
				if( nilMacro.length() > 0 ) {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Malformed switch directive specifies more than one \"" );
					msg.append( _SWITCH_NIL );
					msg.append( "\" limb. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}

				nilMacro = keyMacro;

				switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchObj->beginEdit() );
				switchEdit->setOptionalNilExpansionValue( nilMacro );
				switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchEdit->update() );
			}
			else if( _SWITCH_EMPTY == keyValue ) {
				if( emptyMacro.length() > 0 ) {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Malformed switch directive specifies more than one \"" );
					msg.append( _SWITCH_EMPTY );
					msg.append( "\" limb. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
				emptyMacro = keyMacro;

				switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchObj->beginEdit() );
				switchEdit->setOptionalEmptyExpansionValue( emptyMacro );
				switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchEdit->update() );
			}
			else if( _SWITCH_DEFAULT == keyValue ) {
				if( defaultMacro.length() > 0 ) {
					std::string msg( CLASS_NAME );
					msg.push_back( '.' );
					msg.append( S_ProcName );
					msg.append( "() Malformed switch directive specifies more than one \"" );
					msg.append( _SWITCH_DEFAULT );
					msg.append( "\" limb. \"" );
					msg.append( macro );
					msg.append( "\" is invalid" );
					setCompileError();
					getCompileLog()->message( msg );
#					if TRACE_COMPILER
						std::cout << "Compiler error detected: " + msg;
#					endif
					return( NULL );
				}
				defaultMacro = keyMacro;

				switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchObj->beginEdit() );
				switchEdit->setRequiredDefaultExpansion( defaultMacro );
				switchEdit = dynamic_cast<ICFGenKbGelSwitchEditObj*>( switchEdit->update() );
			}
			else {
				ICFGenKbGelSwitchLimbObj* switchLimbObj = genEngine->getGelSwitchLimbTableObj()->newInstance();
				ICFGenKbGelSwitchLimbEditObj* switchLimbEdit = dynamic_cast<ICFGenKbGelSwitchLimbEditObj*>( switchLimbObj->beginEdit() );
				switchLimbEdit->setRequiredOwnerTenant( switchObj->getRequiredOwnerTenant() );
				switchLimbEdit->setRequiredParentSwitch( switchObj );
				switchLimbEdit->getBuff()->setRequiredLimbName( keyValue );
				switchLimbEdit->setRequiredLimbExpansion( keyMacro );
				switchLimbObj = dynamic_cast<ICFGenKbGelSwitchLimbObj*>( switchLimbEdit->create() );
			}
		}

	//	The default limb is mandatory

		if( defaultMacro.length() <= 0 ) {
			std::string msg( CLASS_NAME );
			msg.push_back( '.' );
			msg.append( S_ProcName );
			msg.append( "() Malformed switch directive must specify a \"" );
			msg.append( _SWITCH_DEFAULT );
			msg.append( "\" limb. \"" );
			msg.append( macro );
			msg.append( "\" is invalid" );
			setCompileError();
			getCompileLog()->message( msg );
#			if TRACE_COMPILER
				std::cout << "Compiler error detected: " + msg;
#			endif
			return( NULL );
		}

		return( switchObj );
	}
}

