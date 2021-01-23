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

#include <fstream>
#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFRuleCartridgeParser.hpp>
#include <msscf/MssCFRuleSetParser.hpp>
#include <msscf/MssCFToolSetParser.hpp>

namespace cfcore {

	const std::string MssCFRuleCartridgeParser::CLASS_NAME( "MssCFRuleCartridgeParser" );
	const std::string MssCFRuleCartridgeParser::SCHEMA_XMLNS( "uri://com.github.msobkow/cfgenkb-2.12-cartridge" );
	const std::string MssCFRuleCartridgeParser::SCHEMA_URI( "/usr/share/msobkow/2.0.12/xsd/cfgenkb-2.12-cartridge.xsd" );
	const std::string MssCFRuleCartridgeParser::SCHEMA_ROOT_URI( "/xsd/cfgenkb-2.12-cartridge.xsd" );
	const std::string MssCFRuleCartridgeParser::S_MsgParserMustBeInitializedFirst( "Rule cartridge parser must be initialized first" );
	const std::string MssCFRuleCartridgeParser::S_Uri( "uri" );
	const std::string MssCFRuleCartridgeParser::S_RuleCartridge( "RuleCartridge" );
	const std::string MssCFRuleCartridgeParser::S_Tool( "Tool" );
	const std::string MssCFRuleCartridgeParser::S_ToolSet( "ToolSet" );
	const std::string MssCFRuleCartridgeParser::S_UseCartridge( "UseCartridge" );

	bool MssCFRuleCartridgeParser::grammarLoaded = false;
	std::vector<std::string> MssCFRuleCartridgeParser::ruleCartridgeNames;
	std::vector<std::string> MssCFRuleCartridgeParser::toolSetNames;
	std::vector<std::string> MssCFRuleCartridgeParser::cartridgePath;

	MssCFEngine* MssCFRuleCartridgeParser::getGenEngine() {
		return( cfEngine );
	}

	void MssCFRuleCartridgeParser::setGenEngine( MssCFEngine* value ) {
		cfEngine = value;
	}

	std::string MssCFRuleCartridgeParser::getInternalToolSetName( const std::string* extToolSet ) {
		std::string retval;
		if( ( extToolSet == NULL )
		 || ( extToolSet->length() <= 0 )
		 || ( *extToolSet == "*" )
		 || ( *extToolSet == "Object" )
		 || ( *extToolSet == "object" ) )
		{
			retval = "Object";
		}
		else {
			retval = *extToolSet;
		}
		return( retval );
	}

	const std::string& MssCFRuleCartridgeParser::getDocumentRootDir() {
		return( documentRootDir );
	}

	void MssCFRuleCartridgeParser::setDocumentRootDir( const std::string& parmDirName ) {
		documentRootDir = parmDirName;
	}

	MssCFToolSetParser* MssCFRuleCartridgeParser::getToolSetParser() {
		if( toolSetParser == NULL ) {
			toolSetParser = new MssCFToolSetParser( getGenEngine(), getLog() );
		}
		return( toolSetParser );
	}

	MssCFRuleSetParser* MssCFRuleCartridgeParser::getRuleSetParser() {
		if( ruleSetParser == NULL ) {
			ruleSetParser = new MssCFRuleSetParser( getGenEngine(), getLog() );
		}
		return( ruleSetParser );
	}

	MssCFRuleCartridgeParser::ToolHandler::ToolHandler( MssCFRuleCartridgeParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}
	
	MssCFRuleCartridgeParser::ToolHandler::~ToolHandler()
	{
	}

	void MssCFRuleCartridgeParser::ToolHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_Tool( "Tool" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Object( "object" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Replaces( "Replaces" );
		static const std::string S_DefinedTool( "\tDefined Tool \"" );
		static const std::string S_EnabledTool( "\tEnabled Tool \"" );
		static const std::string S_EndDoubleQuote( "\"" );
		static const std::string S_Newline( "\n" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		std::string* attrId = NULL;
		std::string* attrName = NULL;
		std::string* attrReplaces = NULL;
		std::string* natName = NULL;
		std::string* natReplaces = NULL;
		ICFGenKbToolObj* tool = NULL;
		MssCFRuleCartridgeParser* saxLoader = NULL;
		MssCFEngine* genEngine = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		try {
			if( ( uri == NULL ) || ( *uri == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					1,
					S_Uri );
			}
			if( ( localname == NULL ) || ( *localname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					2,
					S_LocalName );
			}
			if( ( qname == NULL ) || ( *qname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					3,
					S_QName );
			}
			cUri = xercesc::XMLString::transcode( uri );
			cLocalName = xercesc::XMLString::transcode( localname );
			cQName = xercesc::XMLString::transcode( qname );
			std::string cppUri( cUri );
			std::string cppLocalName( cLocalName );
			std::string cppQName( cQName );
			xercesc::XMLString::release( &cUri );
			cUri = NULL;
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
			xercesc::XMLString::release( &cQName );
			cQName = NULL;

			if( cppQName != S_Tool ) {
				std::string Msg( "Expected QName to be '" + S_Tool + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			saxLoader = dynamic_cast<MssCFRuleCartridgeParser*>( getParser() );
			if( saxLoader == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			genEngine = saxLoader->getGenEngine();
			if( genEngine == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParserGetGenEngine );
			}

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}

			if( attrLocalName != NULL ) {
				delete attrLocalName;
				attrLocalName = NULL;
			}
			if( cppValue != NULL ) {
				delete cppValue;
				cppValue = NULL;
			}

			// Extract Attributes
			size_t numAttrs = attrs.getLength();
			size_t idxAttr;
			for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				xmlchLocalName = attrs.getLocalName( idxAttr );
				if( xmlchLocalName == NULL ) {
					continue;
				}
				cLocalName = xercesc::XMLString::transcode( xmlchLocalName );
				attrLocalName = new std::string( cLocalName );
				xercesc::XMLString::release( &cLocalName );
				cLocalName = NULL;
				xmlchValue = attrs.getValue( idxAttr );
				if( xmlchValue == NULL ) {
					cppValue = NULL;
				}
				else {
					cValue = xercesc::XMLString::transcode( xmlchValue );
					cppValue = new std::string( cValue );
					xercesc::XMLString::release( &cValue );
					cValue = NULL;
				}
				if( *attrLocalName == S_SchemaLocation ) {
				}
				else if( *attrLocalName == S_Name ) {
					if( attrName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_Replaces ) {
					if( attrReplaces != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrReplaces = new std::string( *cppValue );
					}
					else {
						attrReplaces = NULL;
					}
				}
				else {
					throw cflib::CFLibUnrecognizedAttributeException( CLASS_NAME,
						S_ProcName,
						getParser()->getLocationInfo(),
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
			}

			// Ensure that required attributes have values
			if( ( attrName == NULL ) || ( attrName->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = saxLoader->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}
			if( attrReplaces != NULL ) {
				curContext->putNamedTag( S_Replaces, *attrReplaces );
			}

			// Convert string attributes to native C++18 types

			cflib::CFLibNullableInt32 natId;
			if( ( attrId != NULL ) && ( attrId->length() > 0 ) ) {
				int32_t* value = cflib::CFLibXmlUtil::parseInt32( *attrId );
				if( value != NULL ) {
					natId.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_SpecificallyId );
				}
			}
			else {
				natId.setNull();
			}
			if( attrName != NULL ) {
				natName = new std::string( *attrName );
			}
			else {
				natName = NULL;
			}
			if( natName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			if( attrReplaces != NULL ) {
				natReplaces = new std::string( *attrReplaces );
			}
			else {
				natReplaces = NULL;
			}

			std::string buff;

			tool = genEngine->getToolTableObj()->readToolByNameIdx( *natName );
			if( tool != NULL ) {
				buff = S_EnabledTool;
			}
			else {
				tool = genEngine->defineTool( *natName );
				buff = S_DefinedTool;
			}

			buff.append( *natName );

			buff.append( S_EndDoubleQuote );

			if( ( attrReplaces != NULL ) && ( attrReplaces->length() > 0 ) ) {
				static const std::string S_Replaces( " replaces \"" );
				buff.append( S_Replaces );
				buff.append( *natReplaces );
				buff.append( S_EndDoubleQuote );
			}

			buff.append( S_Newline );

			getLog()->message( buff ); 
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

cleanup:
		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}

		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}

		if( natName != NULL ) {
			delete natName;
			natName = NULL;
		}

		if( natReplaces != NULL ) {
			delete natReplaces;
			natReplaces = NULL;
		}

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrReplaces != NULL ) {
			delete attrReplaces;
			attrReplaces = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleCartridgeParser::ToolHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFRuleCartridgeParser::ToolSetHandler::ToolSetHandler( MssCFRuleCartridgeParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}
	
	MssCFRuleCartridgeParser::ToolSetHandler::~ToolSetHandler()
	{
	}

	void MssCFRuleCartridgeParser::ToolSetHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_ToolSet( "ToolSet" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Object( "object" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_DefinedToolSet( "\tDefined ToolSet \"" );
		static const std::string S_EnabledToolSet( "\tEnabled ToolSet \"" );
		static const std::string S_EndDoubleQuote( "\"" );
		static const std::string S_Newline( "\n" );
		static const std::string S_Slash( "/" );
		static const std::string S_ToolSetXml( "toolset.xml" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		std::string* attrId = NULL;
		std::string* attrName = NULL;
		std::string* natName = NULL;
		ICFGenKbToolSetObj* toolSet = NULL;
		MssCFRuleCartridgeParser* saxLoader = NULL;
		MssCFEngine* genEngine = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		try {
			if( ( uri == NULL ) || ( *uri == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					1,
					S_Uri );
			}
			if( ( localname == NULL ) || ( *localname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					2,
					S_LocalName );
			}
			if( ( qname == NULL ) || ( *qname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					3,
					S_QName );
			}
			cUri = xercesc::XMLString::transcode( uri );
			cLocalName = xercesc::XMLString::transcode( localname );
			cQName = xercesc::XMLString::transcode( qname );
			std::string cppUri( cUri );
			std::string cppLocalName( cLocalName );
			std::string cppQName( cQName );
			xercesc::XMLString::release( &cUri );
			cUri = NULL;
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
			xercesc::XMLString::release( &cQName );
			cQName = NULL;

			if( cppQName != S_ToolSet ) {
				std::string Msg( "Expected QName to be '" + S_ToolSet + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			saxLoader = dynamic_cast<MssCFRuleCartridgeParser*>( getParser() );
			if( saxLoader == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			genEngine = saxLoader->getGenEngine();
			if( genEngine == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParserGetGenEngine );
			}

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}

			if( attrLocalName != NULL ) {
				delete attrLocalName;
				attrLocalName = NULL;
			}
			if( cppValue != NULL ) {
				delete cppValue;
				cppValue = NULL;
			}

			// Extract Attributes
			size_t numAttrs = attrs.getLength();
			size_t idxAttr;
			for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				xmlchLocalName = attrs.getLocalName( idxAttr );
				if( xmlchLocalName == NULL ) {
					continue;
				}
				cLocalName = xercesc::XMLString::transcode( xmlchLocalName );
				attrLocalName = new std::string( cLocalName );
				xercesc::XMLString::release( &cLocalName );
				cLocalName = NULL;
				xmlchValue = attrs.getValue( idxAttr );
				if( xmlchValue == NULL ) {
					cppValue = NULL;
				}
				else {
					cValue = xercesc::XMLString::transcode( xmlchValue );
					cppValue = new std::string( cValue );
					xercesc::XMLString::release( &cValue );
					cValue = NULL;
				}
				if( *attrLocalName == S_SchemaLocation ) {
				}
				else if( *attrLocalName == S_Name ) {
					if( attrName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrName = new std::string( *cppValue );
					}
				}
				else {
					throw cflib::CFLibUnrecognizedAttributeException( CLASS_NAME,
						S_ProcName,
						getParser()->getLocationInfo(),
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
			}

			// Ensure that required attributes have values
			if( ( attrName == NULL ) || ( attrName->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = saxLoader->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}

			// Convert string attributes to native C++18 types

			cflib::CFLibNullableInt32 natId;
			if( ( attrId != NULL ) && ( attrId->length() > 0 ) ) {
				int32_t* value = cflib::CFLibXmlUtil::parseInt32( *attrId );
				if( value != NULL ) {
					natId.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_SpecificallyId );
				}
			}
			else {
				natId.setNull();
			}

			if( attrName != NULL ) {
				natName = new std::string( *attrName );
			}
			else {
				natName = NULL;
			}
			if( natName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			std::string toolSetManifestName( saxLoader->getDocumentRootDir() + *natName + "/" + S_ToolSetXml );

			std::ifstream* toolSetManifestXml = new std::ifstream();
			toolSetManifestXml->open( toolSetManifestName );
			if( ! toolSetManifestXml->good() ) {
				delete toolSetManifestXml;
				toolSetManifestXml = NULL;
			}

			if( toolSetManifestXml == NULL ) {
				static const std::string S_MsgCouldNotLocateToolSet( "Could not locate Tool Set \"" );
				static const std::string S_AtLocation( "\" at location \"" );
				static const std::string S_Terminator( "\"" );
				std::string S_Msg( S_MsgCouldNotLocateToolSet );
				S_Msg.append( *natName );
				S_Msg.append( S_AtLocation );
				S_Msg.append( toolSetManifestName );
				S_Msg.append( S_Terminator );
				getLog()->message( CLASS_NAME + "." + S_ProcName + " " + S_Msg );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg ); 
			}

			toolSetManifestXml->close();
			delete toolSetManifestXml;
			toolSetManifestXml = NULL;

			try {
				addToolSetName( *natName );
				saxLoader->toolSetParser->setLog( getLog() );
				saxLoader->toolSetParser->parseFile( toolSetManifestName );
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH
			if( ! CFLIB_EXCEPTION_EMPTY ) {
				std::string S_Caught( CLASS_NAME + "." + S_ProcName + "() caught " );
				if( exceptionInfo.isCFLibException() ) {
					S_Caught.append( "cflib::" );
				}
				else if( exceptionInfo.isSystemException() ) {
					S_Caught.append( "std::" );
				}
				else if( exceptionInfo.isXercesException() ) {
					S_Caught.append( "xercesc::" );
				}
				else {
					S_Caught.append( "unknown::" );
				}
				S_Caught.append( exceptionInfo.getExceptionName() );
				S_Caught.append( " - " );
				S_Caught.append( CFLIB_EXCEPTION_FORMATTEDMESSAGE );
				getLog()->message( S_Caught );
			}

			std::string buff;

			toolSet = genEngine->getToolSetTableObj()->readToolSetByNameIdx( *natName );
			if( toolSet != NULL ) {
				buff = S_EnabledToolSet;
			}
			else {
				toolSet = genEngine->defineToolSet( *natName );
				buff = S_DefinedToolSet;
			}

			buff.append( *natName );
			buff.append( S_EndDoubleQuote );
			buff.append( S_Newline );

			getLog()->message( buff ); 
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}

		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}

		if( natName != NULL ) {
			delete natName;
			natName = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleCartridgeParser::ToolSetHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFRuleCartridgeParser::UseCartridgeHandler::UseCartridgeHandler( MssCFRuleCartridgeParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}
	
	MssCFRuleCartridgeParser::UseCartridgeHandler::~UseCartridgeHandler()
	{
	}

	void MssCFRuleCartridgeParser::UseCartridgeHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_UseCartridge( "UseCartridge" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Object( "object" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_DefinedUseCartridge( "\tDefined UseCartridge \"" );
		static const std::string S_EnabledUseCartridge( "\tEnabled UseCartridge \"" );
		static const std::string S_EndDoubleQuote( "\"" );
		static const std::string S_Newline( "\n" );
		static const std::string S_Slash( "/" );
		static const std::string S_UseCartridgeXml( "cartridge.xml" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		std::string* attrId = NULL;
		std::string* attrName = NULL;
		std::string* natName = NULL;
		MssCFRuleCartridgeParser* saxLoader = NULL;
		MssCFEngine* genEngine = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		MssCFRuleCartridgeParser* subParser = NULL;
		try {
			if( ( uri == NULL ) || ( *uri == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					1,
					S_Uri );
			}
			if( ( localname == NULL ) || ( *localname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					2,
					S_LocalName );
			}
			if( ( qname == NULL ) || ( *qname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					3,
					S_QName );
			}
			cUri = xercesc::XMLString::transcode( uri );
			cLocalName = xercesc::XMLString::transcode( localname );
			cQName = xercesc::XMLString::transcode( qname );
			std::string cppUri( cUri );
			std::string cppLocalName( cLocalName );
			std::string cppQName( cQName );
			xercesc::XMLString::release( &cUri );
			cUri = NULL;
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
			xercesc::XMLString::release( &cQName );
			cQName = NULL;

			if( cppQName != S_UseCartridge ) {
				std::string Msg( "Expected QName to be '" + S_UseCartridge + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			saxLoader = dynamic_cast<MssCFRuleCartridgeParser*>( getParser() );
			if( saxLoader == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			genEngine = saxLoader->getGenEngine();
			if( genEngine == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParserGetGenEngine );
			}

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}

			if( attrLocalName != NULL ) {
				delete attrLocalName;
				attrLocalName = NULL;
			}

			if( cppValue != NULL ) {
				delete cppValue;
				cppValue = NULL;
			}

			// Extract Attributes
			size_t numAttrs = attrs.getLength();
			size_t idxAttr;
			for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				xmlchLocalName = attrs.getLocalName( idxAttr );
				if( xmlchLocalName == NULL ) {
					continue;
				}
				cLocalName = xercesc::XMLString::transcode( xmlchLocalName );
				attrLocalName = new std::string( cLocalName );
				xercesc::XMLString::release( &cLocalName );
				cLocalName = NULL;
				xmlchValue = attrs.getValue( idxAttr );
				if( xmlchValue == NULL ) {
					cppValue = NULL;
				}
				else {
					cValue = xercesc::XMLString::transcode( xmlchValue );
					cppValue = new std::string( cValue );
					xercesc::XMLString::release( &cValue );
					cValue = NULL;
				}
				if( *attrLocalName == S_SchemaLocation ) {
				}
				else if( *attrLocalName == S_Name ) {
					if( attrName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrName = new std::string( *cppValue );
					}
				}
				else {
					throw cflib::CFLibUnrecognizedAttributeException( CLASS_NAME,
						S_ProcName,
						getParser()->getLocationInfo(),
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
			}

			// Ensure that required attributes have values
			if( ( attrName == NULL ) || ( attrName->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = saxLoader->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}

			// Convert string attributes to native C++18 types

			cflib::CFLibNullableInt32 natId;
			if( ( attrId != NULL ) && ( attrId->length() > 0 ) ) {
				int32_t* value = cflib::CFLibXmlUtil::parseInt32( *attrId );
				if( value != NULL ) {
					natId.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_SpecificallyId );
				}
			}
			else {
				natId.setNull();
			}

			if( attrName != NULL ) {
				natName = new std::string( *attrName );
			}
			else {
				natName = NULL;
			}
			if( natName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			if( ! MssCFRuleCartridgeParser::isRuleCartridgeNameLoaded( *attrName ) ) {
				subParser = new MssCFRuleCartridgeParser( genEngine, getLog() );
				subParser->loadRuleCartridge( *natName );
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}

		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}

		if( natName != NULL ) {
			delete natName;
			natName = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( subParser != NULL ) {
			delete subParser;
			subParser = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleCartridgeParser::UseCartridgeHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFRuleCartridgeParser::RuleCartridgeHandler::RuleCartridgeHandler( MssCFRuleCartridgeParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
		addElementHandler( S_UseCartridge, coreParser->getUseCartridgeHandler() );
		addElementHandler( S_Tool, coreParser->getToolHandler() );
		addElementHandler( S_ToolSet, coreParser->getToolSetHandler() );
	}
	
	MssCFRuleCartridgeParser::RuleCartridgeHandler::~RuleCartridgeHandler()
	{
	}

	void MssCFRuleCartridgeParser::RuleCartridgeHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		const static std::string S_ProcName( "startElement" );
		const static std::string S_SpecificallyId( "Id" );
		const static std::string S_Object( "object" );
		const static std::string S_Uri( "uri" );
		const static std::string S_LocalName( "localname" );
		const static std::string S_GetParser( "getParser()" );
		const static std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		const static std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		const static std::string S_SchemaLocation( "schemaLocation" );
		const static std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_DefinedRuleCartridge( "\tDefined RuleCartridge \"" );
		static const std::string S_EnabledRuleCartridge( "\tEnabled RuleCartridge \"" );
		static const std::string S_EndDoubleQuote( "\"" );
		static const std::string S_Newline( "\n" );
		static const std::string S_Slash( "/" );
		static const std::string S_RuleCartridgeXml( "rulecartridge.xml" );
		CFLIB_EXCEPTION_DECLINFO
		const XMLCh* xmlchLocalName = NULL;
		char* cLocalName = NULL;
		std::string* attrLocalName = NULL;
		const XMLCh* xmlchValue = NULL;
		char* cValue = NULL;
		std::string* cppValue = NULL;
		char* cUri = NULL;
		char* cQName = NULL;
		std::string* attrId = NULL;
		std::string* attrName = NULL;
		std::string* attrRevision = NULL;
		std::string* attrDescr = NULL;
		std::string* natName = NULL;
		std::string* natRevision = NULL;
		std::string* natDescr = NULL;
		MssCFRuleCartridgeParser* saxLoader = NULL;
		MssCFEngine* genEngine = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		try {
			if( ( uri == NULL ) || ( *uri == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					1,
					S_Uri );
			}
			if( ( localname == NULL ) || ( *localname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					2,
					S_LocalName );
			}
			if( ( qname == NULL ) || ( *qname == 0 ) ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
					S_ProcName,
					3,
					S_QName );
			}
			cUri = xercesc::XMLString::transcode( uri );
			cLocalName = xercesc::XMLString::transcode( localname );
			cQName = xercesc::XMLString::transcode( qname );
			std::string cppUri( cUri );
			std::string cppLocalName( cLocalName );
			std::string cppQName( cQName );
			xercesc::XMLString::release( &cUri );
			cUri = NULL;
			xercesc::XMLString::release( &cLocalName );
			cLocalName = NULL;
			xercesc::XMLString::release( &cQName );
			cQName = NULL;

			if( cppQName != S_RuleCartridge ) {
				std::string S_Msg( "Expected QName to be '" + S_RuleCartridge + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}

			saxLoader = dynamic_cast<MssCFRuleCartridgeParser*>( getParser() );
			if( saxLoader == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			genEngine = saxLoader->getGenEngine();
			if( genEngine == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParserGetGenEngine );
			}

			curContext = getParser()->getCurContext();
			if( curContext == NULL ) {
				static const std::string S_CurContext( "getParser()->getCurContext" );
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_CurContext );
			}

			if( attrLocalName != NULL ) {
				delete attrLocalName;
				attrLocalName = NULL;
			}

			if( cppValue != NULL ) {
				delete cppValue;
				cppValue = NULL;
			}

			// Extract Attributes
			size_t numAttrs = attrs.getLength();
			size_t idxAttr;
			for( idxAttr = 0; idxAttr < numAttrs; idxAttr++ ) {
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				xmlchLocalName = attrs.getLocalName( idxAttr );
				if( xmlchLocalName == NULL ) {
					continue;
				}
				cLocalName = xercesc::XMLString::transcode( xmlchLocalName );
				attrLocalName = new std::string( cLocalName );
				xercesc::XMLString::release( &cLocalName );
				cLocalName = NULL;
				xmlchValue = attrs.getValue( idxAttr );
				if( xmlchValue == NULL ) {
					cppValue = NULL;
				}
				else {
					cValue = xercesc::XMLString::transcode( xmlchValue );
					cppValue = new std::string( cValue );
					xercesc::XMLString::release( &cValue );
					cValue = NULL;
				}
				if( *attrLocalName == S_SchemaLocation ) {
				}
				else if( *attrLocalName == S_Name ) {
					if( attrName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_Revision ) {
					if( attrRevision != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrRevision = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_Descr ) {
					if( attrDescr != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrDescr = new std::string( *cppValue );
					}
				}
				else {
					throw cflib::CFLibUnrecognizedAttributeException( CLASS_NAME,
						S_ProcName,
						getParser()->getLocationInfo(),
						*attrLocalName );
				}
				if( cppValue != NULL ) {
					delete cppValue;
					cppValue = NULL;
				}
				if( attrLocalName != NULL ) {
					delete attrLocalName;
					attrLocalName = NULL;
				}
			}

			// Ensure that required attributes have values
			if( ( attrName == NULL ) || ( attrName->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}
			if( ( attrDescr == NULL ) || ( attrDescr->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Descr );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = saxLoader->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}
			if( attrRevision != NULL ) {
				curContext->putNamedTag( S_Revision, *attrRevision );
			}
			if( attrDescr != NULL ) {
				curContext->putNamedTag( S_Descr, *attrDescr );
			}

			// Convert string attributes to native C++18 types

			cflib::CFLibNullableInt32 natId;
			if( ( attrId != NULL ) && ( attrId->length() > 0 ) ) {
				int32_t* value = cflib::CFLibXmlUtil::parseInt32( *attrId );
				if( value != NULL ) {
					natId.setValue( *value );
					delete value;
					value = NULL;
				}
				else {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_SpecificallyId );
				}
			}
			else {
				natId.setNull();
			}

			if( attrName != NULL ) {
				natName = new std::string( *attrName );
			}
			else {
				natName = NULL;
			}
			if( natName == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Name );
			}

			if( attrRevision != NULL ) {
				natRevision = new std::string( *attrRevision );
			}
			else {
				natRevision = NULL;
			}

			if( attrDescr != NULL ) {
				natDescr = new std::string( *attrDescr );
			}
			else {
				natDescr = NULL;
			}
			if( natDescr == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Descr );
			}

			static const std::string S_MsgLoadingRuleCartridge( "Loading RuleCartridge Name=\"" );
			static const std::string S_LoadingRevision( "\", Revision = \"" );
			static const std::string S_LoadingDescr( "\", Descr=\"" );
			static const std::string S_LoadingTerminator( "\"\n" );

			std::string S_Msg( S_MsgLoadingRuleCartridge );
			S_Msg.append( *natName );
			if( natRevision != NULL ) {
				S_Msg.append( S_LoadingRevision );
				S_Msg.append( *natRevision );
			}
			S_Msg.append( S_LoadingDescr );
			S_Msg.append( *natDescr );
			S_Msg.append( S_LoadingTerminator ); 
			getLog()->message( S_Msg );

			saxLoader->addRuleCartridgeName( *natName );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( attrLocalName != NULL ) {
			delete attrLocalName;
			attrLocalName = NULL;
		}

		if( cppValue != NULL ) {
			delete cppValue;
			cppValue = NULL;
		}

		if( natName != NULL ) {
			delete natName;
			natName = NULL;
		}

		if( natRevision != NULL ) {
			delete natRevision;
			natRevision = NULL;
		}

		if( natDescr != NULL ) {
			delete natDescr;
			natDescr = NULL;
		}

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrRevision != NULL ) {
			delete attrRevision;
			attrRevision = NULL;
		}

		if( attrDescr != NULL ) {
			delete attrDescr;
			attrDescr = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleCartridgeParser::RuleCartridgeHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFRuleCartridgeParser::RootHandler::RootHandler( MssCFRuleCartridgeParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
		addElementHandler( S_RuleCartridge, coreParser->getRuleCartridgeHandler() );
	}
	
	MssCFRuleCartridgeParser::RootHandler::~RootHandler()
	{
	}

	void MssCFRuleCartridgeParser::RootHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
	}

	void MssCFRuleCartridgeParser::RootHandler::endElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFRuleCartridgeParser::MssCFRuleCartridgeParser( MssCFEngine* engine, cflib::ICFLibMessageLog* log )
	: cflib::CFLibXmlCoreSaxParser( log )
	{
		cfEngine = engine;
		rootHandler = NULL;
		ruleCartridgeHandler = NULL;
		useCartridgeHandler = NULL;
		toolHandler = NULL;
		toolSetHandler = NULL;
		getToolHandler();
		getToolSetHandler();
		getUseCartridgeHandler();
		getRuleCartridgeHandler();
		getRootHandler();
		setRootElementHandler( getRootHandler() );
		parentParser = NULL;
		verifyGrammarInstallation();
		initParser();
		toolSetParser = new MssCFToolSetParser( engine, getLog() );
	}

	MssCFRuleCartridgeParser::MssCFRuleCartridgeParser( MssCFRuleCartridgeParser* parser )
	: cflib::CFLibXmlCoreSaxParser( parser->getLog() )
	{
		cfEngine = parser->getGenEngine();
		rootHandler = NULL;
		ruleCartridgeHandler = NULL;
		useCartridgeHandler = NULL;
		toolHandler = NULL;
		toolSetHandler = NULL;

		setRootElementHandler( getRootHandler() );
		parentParser = parser;
		verifyGrammarInstallation();
		initParser();

		toolSetParser = new MssCFToolSetParser( getGenEngine(), getLog() );
	}

	MssCFRuleCartridgeParser::~MssCFRuleCartridgeParser() {
		if( toolSetParser != NULL ) {
			delete toolSetParser;
			toolSetParser = NULL;
		}
		if( rootHandler != NULL ) {
			delete rootHandler;
			rootHandler = NULL;
		}
		if( ruleCartridgeHandler != NULL ) {
			delete ruleCartridgeHandler;
			ruleCartridgeHandler = NULL;
		}
		if( useCartridgeHandler != NULL ) {
			delete useCartridgeHandler;
			useCartridgeHandler = NULL;
		}
		if( toolSetHandler != NULL ) {
			delete toolSetHandler;
			toolSetHandler = NULL;
		}
		if( toolHandler != NULL ) {
			delete toolHandler;
			toolHandler = NULL;
		}
	}

	MssCFRuleCartridgeParser::RootHandler* MssCFRuleCartridgeParser::getRootHandler() {
		if( rootHandler == NULL ) {
			rootHandler = new MssCFRuleCartridgeParser::RootHandler( this );
		}
		return( rootHandler );
	}

	MssCFRuleCartridgeParser::UseCartridgeHandler* MssCFRuleCartridgeParser::getUseCartridgeHandler() {
		if( useCartridgeHandler == NULL ) {
			useCartridgeHandler = new MssCFRuleCartridgeParser::UseCartridgeHandler( this );
		}
		return( useCartridgeHandler );
	}

	MssCFRuleCartridgeParser::ToolHandler* MssCFRuleCartridgeParser::getToolHandler() {
		if( toolHandler == NULL ) {
			toolHandler = new MssCFRuleCartridgeParser::ToolHandler( this );
		}
		return( toolHandler );
	}

	MssCFRuleCartridgeParser::ToolSetHandler* MssCFRuleCartridgeParser::getToolSetHandler() {
		if( toolSetHandler == NULL ) {
			toolSetHandler = new MssCFRuleCartridgeParser::ToolSetHandler( this );
		}
		return( toolSetHandler );
	}

	MssCFRuleCartridgeParser::RuleCartridgeHandler* MssCFRuleCartridgeParser::getRuleCartridgeHandler() {
		if( ruleCartridgeHandler == NULL ) {
			ruleCartridgeHandler = new MssCFRuleCartridgeParser::RuleCartridgeHandler( this );
		}
		return( ruleCartridgeHandler );
	}

	void MssCFRuleCartridgeParser::verifyGrammarInstallation() {
		static const std::string S_ProcName( "verifyGrammarInstallation" );
		static const std::string S_MsgMustInstallXsdFirst( "The XSD file " + SCHEMA_URI + " must be installed first" );
		if( grammarLoaded ) {
			return;
		}
		std::ifstream xsdfile( SCHEMA_URI );
		if( ! xsdfile.good() ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				S_ProcName,
				S_MsgMustInstallXsdFirst );
		}
		grammarLoaded = true;
	}

	void MssCFRuleCartridgeParser::addCartridgePath( const std::string& dirname ) {
		static const std::string S_ProcName( "addCartridgePath" );
		static const std::string S_Dirname( "dirname" );
		if( dirname.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Dirname );
		}
		auto cartridgePathIter = cartridgePath.begin();
		while( cartridgePathIter != cartridgePath.end() ) {
			if( dirname == *cartridgePathIter ) {
				return;
			}
			cartridgePathIter ++;
		}
		cartridgePath.push_back( dirname );
	}

	std::vector<std::string>& MssCFRuleCartridgeParser::getCartridgePath() {
		return( cartridgePath );
	}

	void MssCFRuleCartridgeParser::loadRuleCartridge( const std::string& cartridgeName ) {
		static const std::string S_ProcName( "loadRuleCartridge" );
		static const std::string S_CartridgeDir( "cartridgeDir" );
		static const std::string S_Slash( "/" );
		static const std::string S_RuleCartridgeXml( "rulecartridge.xml" );
		CFLIB_EXCEPTION_DECLINFO

		//		Get the cartridge path to be searched

		std::string ruleCartridgeFileName;
		std::string ruleCartridgeRootDir;
		std::ifstream* ruleCartridgeManifestXml = NULL;

		auto cartridgePathIter = cartridgePath.begin();
		while( ( ruleCartridgeManifestXml == NULL ) && ( cartridgePathIter != cartridgePath.end() ) ) {	
			const std::string& cartridgeDir = *cartridgePathIter;
			std::string::size_type cartridgeDirLen = cartridgeDir.length();
			if( cartridgeDirLen <= 0 ) {
				throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_CartridgeDir );
			}
			char cartridgeDirTail = cartridgeDir[ cartridgeDirLen - 1 ];
			if( ( cartridgeDirTail == '/' ) || ( cartridgeDirTail ==  '\\' ) ) {
				ruleCartridgeRootDir = cartridgeDir + cartridgeName + S_Slash;
			}
			else {
				ruleCartridgeRootDir = cartridgeDir + S_Slash + cartridgeName + S_Slash;
			}

			ruleCartridgeFileName = ruleCartridgeRootDir + S_RuleCartridgeXml;

			ruleCartridgeManifestXml = new std::ifstream();
			ruleCartridgeManifestXml->open( ruleCartridgeFileName );
			if( ! ruleCartridgeManifestXml->good() ) {
				delete ruleCartridgeManifestXml;
				ruleCartridgeManifestXml = NULL;
			}

			cartridgePathIter ++;
		}

		//		Did we find the cartridge?

		if( ruleCartridgeManifestXml == NULL ) {
			static const std::string S_MsgCouldNotLocateRuleCartridge( "Could not locate Rule Cartridge \"" );
			static const std::string S_Terminator( "\"" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCouldNotLocateRuleCartridge + cartridgeName + S_Terminator ); 
		}

		ruleCartridgeManifestXml->close();
		delete ruleCartridgeManifestXml;
		ruleCartridgeManifestXml = NULL;

		setDocumentRootDir( ruleCartridgeRootDir );

		try {
			parseFile( ruleCartridgeFileName );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			std::string S_Caught( CLASS_NAME + "." + S_ProcName + "() caught " );
			if( exceptionInfo.isCFLibException() ) {
				S_Caught.append( "cflib::" );
			}
			else if( exceptionInfo.isSystemException() ) {
				S_Caught.append( "std::" );
			}
			else if( exceptionInfo.isXercesException() ) {
				S_Caught.append( "xercesc::" );
			}
			else {
				S_Caught.append( "unknown::" );
			}
			S_Caught.append( exceptionInfo.getExceptionName() );
			S_Caught.append( " - " );
			S_Caught.append( CFLIB_EXCEPTION_FORMATTEDMESSAGE );
			getLog()->message( S_Caught );
		}
	}

	const std::vector<std::string>& MssCFRuleCartridgeParser::getToolSetNames() {
		return( toolSetNames );
	}

	void MssCFRuleCartridgeParser::resetToolSetNames() {
		toolSetNames.erase( toolSetNames.begin(), toolSetNames.end() );
	}

	const std::string& MssCFRuleCartridgeParser::addToolSetName( const std::string& name ) {
		static const std::string S_ProcName( "addToolSetName" );
		static const std::string S_Name( "name" );
		if( name.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Name );
		}
		auto toolSetNamesIter = toolSetNames.begin();
		while( toolSetNamesIter != toolSetNames.end() ) {
			if( name == *toolSetNamesIter ) {
				return( *toolSetNamesIter );
			}
			toolSetNamesIter ++;
		}
		toolSetNames.push_back( name );
		auto tail = toolSetNames.end();
		tail --;
		return( *tail );
	}

	const std::vector<std::string>& MssCFRuleCartridgeParser::getRuleCartridgeNames() {
		return( ruleCartridgeNames );
	}

	void MssCFRuleCartridgeParser::resetRuleCartridgeNames() {
		ruleCartridgeNames.erase( ruleCartridgeNames.begin(), ruleCartridgeNames.end() );
	}

	const std::string& MssCFRuleCartridgeParser::addRuleCartridgeName( const std::string& name ) {
		static const std::string S_ProcName( "addRuleCartridgeName" );
		static const std::string S_Name( "name" );
		if( name.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Name );
		}
		auto ruleCartridgeNamesIter = ruleCartridgeNames.begin();
		while( ruleCartridgeNamesIter != ruleCartridgeNames.end() ) {
			if( name == *ruleCartridgeNamesIter ) {
				return( *ruleCartridgeNamesIter );
			}
			ruleCartridgeNamesIter ++;
		}
		ruleCartridgeNames.push_back( name );
		auto tail = ruleCartridgeNames.end();
		tail --;
		return( *tail );
	}

	bool MssCFRuleCartridgeParser::isRuleCartridgeNameLoaded( const std::string& name ) {
		static const std::string S_ProcName( "isRuleCartridgeNameLoaded" );
		static const std::string S_Name( "name" );
		if( name.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_Name );
		}
		auto ruleCartridgeNamesIter = ruleCartridgeNames.begin();
		while( ruleCartridgeNamesIter != ruleCartridgeNames.end() ) {
			if( name == *ruleCartridgeNamesIter ) {
				return( true );
			}
			ruleCartridgeNamesIter ++;
		}
		return( false );
	}

	void MssCFRuleCartridgeParser::parseFile( const std::string& url ) {
		parse( url.data() );
	}
}

