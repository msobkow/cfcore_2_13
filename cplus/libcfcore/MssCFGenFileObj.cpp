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

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>

namespace cfcore {

	const std::string MssCFGenFileObj::CLASS_NAME( "MssCFGenFileObj" );
	const std::string MssCFGenFileObj::S_Asterisk( "*" );
	const std::string MssCFGenFileObj::S_GenContext( "genContext" );
	const std::string MssCFGenFileObj::S_GenDef( "genDef" );
	const std::string MssCFGenFileObj::S_Object( "Object" );
	const std::string MssCFGenFileObj::S_BodyBin( "bodyBin" );
	const std::string MssCFGenFileObj::S_SourceBundleBin( "sourceBundleBin" );
	const std::string MssCFGenFileObj::S_ModuleNameBin( "moduleNameBin" );
	const std::string MssCFGenFileObj::S_BasePackageBin( "basePackageBin" );
	const std::string MssCFGenFileObj::S_SubPackageBin( "subPackageBin" );
	const std::string MssCFGenFileObj::S_ExpansionClassNameBin( "expansionClassNameBin" );
	const std::string MssCFGenFileObj::S_ExpansionKeyNameBin( "expansionKeyNameBin" );
	const std::string MssCFGenFileObj::S_ExpansionFileNameBin( "expansionFileNameBin" );
	const std::string MssCFGenFileObj::S_ProjectDirName( "projectDirName" );

	std::string MssCFGenFileObj::evaluateProjectDirName( MssCFGenContext* genContext, cflib::ICFLibAnyObj* genDef ) {
		static const std::string S_ProcName( "evaluateProjectDirName" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		if( genDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				S_GenDef);
		}
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	MssCFGenFileObj::MssCFGenFileObj()
	: CFGenKbGenFileObj()
	{
	}

	MssCFGenFileObj::MssCFGenFileObj( MssCFEngine* engine )
	: CFGenKbGenFileObj( engine )
	{
	}

	MssCFGenFileObj::~MssCFGenFileObj() {
	}

	std::string MssCFGenFileObj::getBody( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getBody" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* bodyBin = CFGenKbGenFileObj::getBodyBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( bodyBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_BodyBin );
		}
		std::string body = bodyBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			body = "$" + bodyBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( body );
	}

	std::string MssCFGenFileObj::getSrcBundle( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getSrcBundle" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* sourceBundleBin = CFGenKbGenFileObj::getSrcBundleBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( sourceBundleBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_SourceBundleBin );
		}
		std::string sourceBundle = sourceBundleBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			sourceBundle = "$" + sourceBundleBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( sourceBundle );
	}

	std::string MssCFGenFileObj::getModuleName( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getModuleName" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* moduleNameBin = CFGenKbGenFileObj::getModuleNameBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( moduleNameBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ModuleNameBin );
		}
		std::string moduleName = moduleNameBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			moduleName = "$" + moduleNameBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( moduleName );
	}

	std::string MssCFGenFileObj::getBasePackage( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getBasePackage" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* basePackageBin = CFGenKbGenFileObj::getBasePackageBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( basePackageBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_BasePackageBin );
		}
		std::string basePackage = basePackageBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			basePackage = "$" + basePackageBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( basePackage );
	}

	std::string MssCFGenFileObj::getSubPackage( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getSubPackage" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* subPackageBin = CFGenKbGenFileObj::getSubPackageBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( subPackageBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_SubPackageBin );
		}
		std::string subPackage = subPackageBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			subPackage = "$" + subPackageBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( subPackage );
	}

	std::string MssCFGenFileObj::getExpansionClassName( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getExpansionClassName" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* expansionClassNameBin = CFGenKbGenFileObj::getExpClassBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( expansionClassNameBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ExpansionClassNameBin );
		}
		std::string expansionClassName = expansionClassNameBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			expansionClassName = "$" + expansionClassNameBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( expansionClassName );
	}

	std::string MssCFGenFileObj::getExpansionKeyName( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getExpansionKeyName" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* expansionKeyNameBin = CFGenKbGenFileObj::getExpKeyNameBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( expansionKeyNameBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ExpansionKeyNameBin );
		}
		std::string expansionKeyName = expansionKeyNameBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			expansionKeyName = "$" + expansionKeyNameBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( expansionKeyName );
	}

	std::string MssCFGenFileObj::getExpansionFileName( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "getExpansionFileName" );
		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}
		ICFGenKbGelInstructionObj* expansionFileNameBin = CFGenKbGenFileObj::getExpFileNameBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( expansionFileNameBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ExpansionFileNameBin );
		}
		std::string expansionFileName = expansionFileNameBin->expand( genContext );
		if( genContext->isExpansionNull() ) {
			expansionFileName = "$" + expansionFileNameBin->getRequiredSourceText() + "$";
		}
		genContext->clearExpansionIsNull();
		return( expansionFileName );
	}

	bool MssCFGenFileObj::stringEndsWith( std::string const &fullString, std::string const &ending ) {
		if( fullString.length() >= ending.length() ) {
			return( 0 == fullString.compare( fullString.length() - ending.length(), ending.length(), ending ) );
		}
		else {
			return( false );
		}
	}

	std::string MssCFGenFileObj::expandBody( MssCFGenContext* genContext )
	{
		static const std::string S_ProcName( "expandBody" );
		static const std::string S_Yes( "yes" );
		static const std::string S_No( "no" );
		CFLIB_EXCEPTION_DECLINFO

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_GenContext );
		}

		genContext->clearExpansionIsNull();

		bool needFile = false;

		std::string generateOnce;
		if( isOptionalGenerateOnceNull() ) {
			generateOnce.append( "no" );
		}
		else {
			generateOnce = getOptionalGenerateOnceValue();
			if( generateOnce.empty() ) {
				generateOnce.append( "no" );
			}
		}

		std::string moduleName = getModuleName( genContext );

		std::string rootGenDir = genContext->getRootGenDir();

		std::string sourceBundle = getSrcBundle( genContext );

		std::string basePackage = getBasePackage( genContext );

		std::string subPackage = getSubPackage( genContext );

		std::string fileClass = getExpansionClassName( genContext );
		if( fileClass.length() <= 0 ) {
			static const std::string S_MsgPart1( "Could not get class name name for generating GenFile( \"" );
			static const std::string S_MsgPart2( "\", \"" );
			static const std::string S_MsgPart3( "\" )" );
			std::string S_Msg = S_MsgPart1
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_MsgPart2
				+ ( ( getOptionalLookupScopeDef() != NULL )
					? getOptionalLookupScopeDef()->getRequiredName()
					: cflib::CFLib::S_EMPTY )
				+ S_MsgPart2
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_MsgPart2
				+ getRequiredName()
				+ S_MsgPart3;
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					S_Msg );
		}

		std::string fileKey = getExpansionKeyName( genContext );
		if( fileKey.length() <= 0 ) {
			static const std::string S_MsgPart1( "Could not get key for generating GenFile( \"" );
			static const std::string S_MsgPart2( "\", \"" );
			static const std::string S_MsgPart3( "\" )" );
			std::string S_Msg = S_MsgPart1
				+ getRequiredLookupToolSet()->getRequiredName()
				+ S_MsgPart2
				+ ( ( getOptionalLookupScopeDef() != NULL )
					? getOptionalLookupScopeDef()->getRequiredName()
					: cflib::CFLib::S_EMPTY )
				+ S_MsgPart2
				+ getRequiredLookupGenDef()->getRequiredName()
				+ S_MsgPart2
				+ getRequiredName()
				+ S_MsgPart3;
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					S_Msg );
		}

		cflib::ICFLibAnyObj* genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_GenDef);
		}

		std::string projectDirName = evaluateProjectDirName( genContext, genDef );
		if( projectDirName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_ProjectDirName );
		}

		static const std::string dirSep( "/" );
		static const std::string dosDirSep( "\\" );
		static const char dot = '.';
		static const std::string S_Dot( "." );
		static const std::string S_DotBat( ".bat" );

		std::string baseWorkDir;
		if( sourceBundle.length() > 0 ) {
			baseWorkDir = projectDirName + dirSep + sourceBundle;
		}
		else {
			baseWorkDir = projectDirName;
		}

		std::string baseGenDir;
		if( stringEndsWith( rootGenDir, dirSep ) || stringEndsWith( rootGenDir, dosDirSep ) ) {
			baseGenDir = rootGenDir + baseWorkDir;
		}
		else {
			baseGenDir = rootGenDir + dirSep + baseWorkDir;
		}

		std::string srcFileDir;
		std::string fullPackage;
		std::string basePackageWithSlashes = basePackage;
		std::replace( basePackageWithSlashes.begin(), basePackageWithSlashes.end(), dot, dirSep[0] );
		std::string subPackageWithSlashes = subPackage;
		std::replace( subPackageWithSlashes.begin(), subPackageWithSlashes.end(), dot, dirSep[0] );
		if( basePackage.length() > 0 ) {
			if( subPackage.length() > 0 ) {
				fullPackage = basePackage + S_Dot + subPackage;
				if( moduleName.length() > 0 ) {
					srcFileDir = basePackageWithSlashes + dirSep + moduleName + dirSep + subPackageWithSlashes;
				}
				else {
					srcFileDir = basePackageWithSlashes + dirSep + subPackageWithSlashes;
				}
			}
			else {
				fullPackage = basePackage;
				if( moduleName.length() > 0 ) {
					srcFileDir = moduleName + dirSep + basePackageWithSlashes;
				}
				else {
					srcFileDir = basePackageWithSlashes;
				}
			}
		}
		else {
			if( subPackage.length() > 0 ) {
				fullPackage = subPackage;
				if( moduleName.length() > 0 ) {
					srcFileDir = moduleName + dirSep + subPackageWithSlashes;
				}
				else {
					srcFileDir = subPackageWithSlashes;
				}
			}
			else {
				fullPackage = cflib::CFLib::S_EMPTY;
				srcFileDir = cflib::CFLib::S_EMPTY;
			}
		}

		std::string srcFileName = getExpansionFileName( genContext );
		if( srcFileName.length() <= 0 ) {
			static const std::string S_MsgPart1( "Could not get the file name for generating " );
			static const std::string S_MsgPart2( " support\n" );
			std::cout << S_ProcName << S_MsgPart1 << fileKey << S_MsgPart2;
			return( cflib::CFLib::S_EMPTY );
		}

		needFile = true;
		if( ! needFile ) {
			return( cflib::CFLib::S_EMPTY );
		}

		// Make sure we have a valid compile before opening the file at all
		ICFGenKbGelInstructionObj* bodyBin = CFGenKbGenFileObj::getBodyBin( genContext->getGenEngine()->getGelCompiler(), this );
		if( bodyBin == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_BodyBin );
		}

		try {
			genContext->openSourceFile( this,
				fileClass,
				sourceBundle,
				moduleName,
				fullPackage,
				baseGenDir,
				baseWorkDir,
				srcFileDir,
				srcFileName,
				generateOnce );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			static const std::string S_MsgPart1( " Could not open " );
			static const std::string S_MsgPart2( " file for generation: " );
			static const std::string S_MsgPart3( "\n" );
			std::cout << S_ProcName << S_MsgPart1 << fileKey << S_MsgPart2 << CFLIB_EXCEPTION_FORMATTEDMESSAGE << S_MsgPart3;
			exceptionInfo.reset();
		}

		std::string fileContents;
		std::string ret = baseGenDir + dirSep + srcFileName;
		try {
			fileContents = bodyBin->expand( genContext );
			if( genContext->isExpansionNull() ) {
				fileContents= "$" + bodyBin->getRequiredSourceText() + "$";
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			static const std::string S_MsgPart1( " exception generating " );
			static const std::string S_MsgPart2( " file \"" );
			static const std::string S_MsgPart3( "\" -- " );
			static const std::string S_MsgPart4( "\n" );
			ret = cflib::CFLib::S_EMPTY;
			fileContents= "$" + bodyBin->getRequiredSourceText() + "$";
			std::cout << S_ProcName << S_MsgPart1 << fileKey << S_MsgPart2 << baseGenDir << dirSep << srcFileName << S_MsgPart3 << CFLIB_EXCEPTION_FORMATTEDMESSAGE << S_MsgPart4;
			exceptionInfo.reset();
		}

		//	If there were no problems expanding, write the contents of the file

		try {
			genContext->write( fileContents );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			ret = cflib::CFLib::S_EMPTY;
			static const std::string S_MsgPart1( " Error writing to " );
			static const std::string S_MsgPart2( " file \"" );
			static const std::string S_MsgPart3( "\" -- " );
			static const std::string S_MsgPart4( "\n" );
			std::cout << S_ProcName << S_MsgPart1 << fileKey << S_MsgPart2 << baseGenDir << dirSep << srcFileName << S_MsgPart3 << CFLIB_EXCEPTION_FORMATTEDMESSAGE << S_MsgPart4;
			exceptionInfo.reset();
		}

		try {
			genContext->closeSourceFile();
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			ret = cflib::CFLib::S_EMPTY;
			static const std::string S_MsgPart1( " Error closing " );
			static const std::string S_MsgPart2( " file \"" );
			static const std::string S_MsgPart3( "\" -- " );
			static const std::string S_MsgPart4( "\n" );
			std::cout << S_ProcName << S_MsgPart1 << fileKey << S_MsgPart2 << baseGenDir << dirSep << srcFileName << S_MsgPart3 << CFLIB_EXCEPTION_FORMATTEDMESSAGE << S_MsgPart4;
			exceptionInfo.reset();
		}

		genContext->clearExpansionIsNull();

		return( ret );
	}
}

