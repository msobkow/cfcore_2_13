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

#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFRuleCartridgeParser.hpp>
#include <msscf/MssCFRuleSetParser.hpp>
#include <msscf/MssCFToolSetParser.hpp>

namespace cfcore {

	const std::string MssCFToolSetParser::CLASS_NAME( "MssCFToolSetParser" );
	const std::string MssCFToolSetParser::SCHEMA_XMLNS( "uri://com.github.msobkow/cfgenkb-2.12-toolset" );
	const std::string MssCFToolSetParser::SCHEMA_URI( "/usr/share/msobkow/2.0.12/xsd/cfgenkb-2.12-toolset.xsd" );
	const std::string MssCFToolSetParser::SCHEMA_ROOT_URI( "/xsd/cfgenkb-2.12-toolset.xsd" );
	const std::string MssCFToolSetParser::S_ToolSetXml( "toolset.xml" );
	const std::string MssCFToolSetParser::S_ToolSetDocRoot( "/usr/share/msobkow/2.0.12/xsd/" );
	const std::string MssCFToolSetParser::S_MsgParserMustBeInitializedFirst( "Tool set parser must be initialized first" );
	const std::string MssCFToolSetParser::S_Uri( "uri" );
	const std::string MssCFToolSetParser::S_Root( "Root" );
	const std::string MssCFToolSetParser::S_RuleSet( "RuleSet" );
	const std::string MssCFToolSetParser::S_ToolSet( "ToolSet" );

	bool MssCFToolSetParser::grammarLoaded = false;

	MssCFEngine* MssCFToolSetParser::getGenEngine() {
		return( cfEngine );
	}

	void MssCFToolSetParser::setGenEngine( MssCFEngine* value ) {
		cfEngine = value;
	}

	MssCFRuleSetParser* MssCFToolSetParser::getRuleSetParser() {
		if( ruleSetParser == NULL ) {
			ruleSetParser = new MssCFRuleSetParser( getGenEngine(), getLog() );
		}
		return( ruleSetParser );
	}

	std::string MssCFToolSetParser::getInternalToolSetName( const std::string* extToolSet ) {
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

	const std::string& MssCFToolSetParser::getDocumentRootDir() {
		return( documentRootDir );
	}

	void MssCFToolSetParser::setDocumentRootDir( const std::string& parmDirName ) {
		documentRootDir = parmDirName;
	}

	cflib::ICFLibMessageLog* MssCFToolSetParser::getLog() {
		return( log );
	}

	void MssCFToolSetParser::setLog( cflib::ICFLibMessageLog* msglog ) {
		log = msglog;
		getRootHandler()->setLog( getLog() );
		getRuleSetHandler()->setLog( getLog() );
		getToolSetHandler()->setLog( getLog() );
		getRuleSetParser()->setLog( getLog() );
	}

	MssCFToolSetParser::RuleSetHandler::RuleSetHandler( MssCFToolSetParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}

	MssCFToolSetParser::RuleSetHandler::~RuleSetHandler() {
	}

	cflib::ICFLibMessageLog* MssCFToolSetParser::RuleSetHandler::getLog() {
		return( log );
	}

	void MssCFToolSetParser::RuleSetHandler::setLog( cflib::ICFLibMessageLog* msglog ) {
		log = msglog;
	}

	void MssCFToolSetParser::RuleSetHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		static const std::string S_ProcName( "startElement" );
		static const std::string S_Tool( "Tool" );
		static const std::string S_SpecificallyId( "Id" );
		static const std::string S_Object( "object" );
		static const std::string S_Uri( "uri" );
		static const std::string S_LocalName( "localname" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		static const std::string S_SchemaLocation( "schemaLocation" );
		static const std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
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
		std::string* natName = NULL;
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

			if( cppQName != S_RuleSet ) {
				std::string Msg( "Expected QName to be '" + S_RuleSet + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			MssCFToolSetParser* useParser = dynamic_cast<MssCFToolSetParser*>( getParser() );
			if( useParser == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
			}

			cflib::CFLibXmlCoreContext* curContext = getParser()->getCurContext();
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
			std::string xmlFormattedNearLocation = useParser->getFormattedNearLocation();
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

			useParser->getRuleSetParser()->setLog( getLog() );
			useParser->getRuleSetParser()->setDefaultToolSet( useParser->getCurToolSet() );
			useParser->getRuleSetParser()->loadRuleSet( useParser->getDocumentRootDir(), *natName );
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

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}
	}

	void MssCFToolSetParser::RuleSetHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFToolSetParser::ToolSetHandler::ToolSetHandler( MssCFToolSetParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
		addElementHandler( S_RuleSet, coreParser->getRuleSetHandler() );
	}

	MssCFToolSetParser::ToolSetHandler::~ToolSetHandler() {
	}

	cflib::ICFLibMessageLog* MssCFToolSetParser::ToolSetHandler::getLog() {
		return( log );
	}

	void MssCFToolSetParser::ToolSetHandler::setLog( cflib::ICFLibMessageLog* msglog ) {
		log = msglog;
	}

	void MssCFToolSetParser::ToolSetHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		static const std::string S_ProcName( "startElement" );
		static const std::string S_ToolSet( "ToolSet" );
		static const std::string S_SpecificallyId( "Id" );
		static const std::string S_Object( "object" );
		static const std::string S_Uri( "uri" );
		static const std::string S_LocalName( "localname" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		static const std::string S_SchemaLocation( "schemaLocation" );
		static const std::string S_ToolSetXml( "toolset.xml" );
		static const std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_DefinedToolSet( "\tDefined Tool Set \"" );
		static const std::string S_EnabledToolSet( "\tEnabled Tool Set \"" );
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
		std::string* attrRevision = NULL;
		std::string* attrDescr = NULL;
		std::string* natName = NULL;
		std::string* natRevision = NULL;
		std::string* natDescr = NULL;
		ICFGenKbToolSetObj* toolset = NULL;
		MssCFToolSetParser* useParser = NULL;
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

			useParser = dynamic_cast<MssCFToolSetParser*>( getParser() );
			if( useParser == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GetParser );
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
			if( ( attrRevision == NULL ) || ( attrRevision->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Revision );
			}
			if( ( attrDescr == NULL ) || ( attrDescr->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Descr );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = useParser->getFormattedNearLocation();
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
			if( natRevision == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Revision );
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

			std::string S_ToolSetManifestName( S_ToolSetDocRoot + S_ToolSetXml );

			useParser->getRootHandler();
			useParser->getRuleSetHandler();
			useParser->getToolSetHandler();

			useParser->getRootHandler()->setLog( getLog() );
			useParser->getRuleSetHandler()->setLog( getLog() );
			useParser->getToolSetHandler()->setLog( getLog() );

			static const std::string S_LoadingToolSet( "\tLoading ToolSet \"" );
			static const std::string S_LoadingRevision( "\", Revision = \"" );
			static const std::string S_LoadingDescr( "\", Descr=\"" );
			static const std::string S_LoadingTerminator( "\"\n" );

			std::string S_MsgLoading( S_LoadingToolSet );
			S_MsgLoading.append( *natName );
			S_MsgLoading.append( S_LoadingRevision );
			S_MsgLoading.append( *natRevision );
			S_MsgLoading.append( S_LoadingDescr );
			S_MsgLoading.append( *natDescr );
			S_MsgLoading.append( S_LoadingTerminator );
			getLog()->message( S_MsgLoading );

			std::string useToolSet = getInternalToolSetName( natName );

			dynamic_cast<MssCFToolSetParser*>( getParser() )->setCurToolSet( useToolSet );

			std::string buff;

			toolset = dynamic_cast<MssCFToolSetParser*>( getParser() )->getGenEngine()->getToolSetTableObj()->readToolSetByNameIdx( useToolSet );
			if( toolset != NULL ) {
				buff = S_EnabledToolSet;
			}
			else {
				toolset = dynamic_cast<MssCFToolSetParser*>( getParser() )->getGenEngine()->defineToolSet( useToolSet );
				buff = S_DefinedToolSet;
			}

			buff.append( useToolSet );
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

	void MssCFToolSetParser::ToolSetHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFToolSetParser::RootHandler* MssCFToolSetParser::getRootHandler() {
		if( pRootHandler == NULL ) {
			pRootHandler = new MssCFToolSetParser::RootHandler( this );
		}
		return( pRootHandler );
	}

	MssCFToolSetParser::ToolSetHandler* MssCFToolSetParser::getToolSetHandler() {
		if( pToolSetHandler == NULL ) {
			pToolSetHandler = new MssCFToolSetParser::ToolSetHandler( this );
		}
		return( pToolSetHandler );
	}

	MssCFToolSetParser::RuleSetHandler* MssCFToolSetParser::getRuleSetHandler() {
		if( pRuleSetHandler == NULL ) {
			pRuleSetHandler = new MssCFToolSetParser::RuleSetHandler( this );
		}
		return( pRuleSetHandler );
	}

	MssCFToolSetParser::RootHandler::RootHandler( MssCFToolSetParser* coreParser )
	: CFLibXmlCoreElementHandler( coreParser )
	{
		addElementHandler( S_ToolSet, coreParser->getToolSetHandler() );
	}

	MssCFToolSetParser::RootHandler::~RootHandler() {
	}

	cflib::ICFLibMessageLog* MssCFToolSetParser::RootHandler::getLog() {
		return( log );
	}

	void MssCFToolSetParser::RootHandler::setLog( cflib::ICFLibMessageLog* msglog ) {
		log = msglog;
	}

	void MssCFToolSetParser::RootHandler::startElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
	}

	void MssCFToolSetParser::RootHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	void MssCFToolSetParser::verifyGrammarInstallation() {
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

	MssCFToolSetParser::MssCFToolSetParser( MssCFEngine* engine, cflib::ICFLibMessageLog* jLogger )
	: cflib::CFLibXmlCoreSaxParser( jLogger )
	{
		cfEngine = engine;
		getRuleSetHandler();
		getToolSetHandler();
		getRootHandler();
		setRootElementHandler( pRootHandler );
		verifyGrammarInstallation();
		initParser();
		getRuleSetParser();
	}
	
	MssCFToolSetParser::~MssCFToolSetParser() {
		if( ruleSetParser != NULL ) {
			delete ruleSetParser;
			ruleSetParser = NULL;
		}
		if( pRootHandler != NULL ) {
			delete pRootHandler;
			pRootHandler = NULL;
		}
		if( pToolSetHandler != NULL ) {
			delete pToolSetHandler;
			pToolSetHandler = NULL;
		}
		if( pRuleSetHandler != NULL ) {
			delete pRuleSetHandler;
			pRuleSetHandler = NULL;
		}
		if( curToolSet != NULL ) {
			delete curToolSet;
			curToolSet = NULL;
		}
	}

	const std::string& MssCFToolSetParser::getCurToolSet() const {
		static const std::string S_ProcName( "getCurToolSet" );
		static const std::string S_CurToolSet( "curToolSet" );
		if( curToolSet == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurToolSet );
		}
		return( *curToolSet );
	}

	/**
	 *	Set the current ToolSet name.
	 *
	 *	@param	toolSet	The new current ToolSet name.
	 */
	void MssCFToolSetParser::setCurToolSet( const std::string& toolSet ) {
		const std::string internalName = getInternalToolSetName( &toolSet );
		if( curToolSet != NULL ) {
			if( *curToolSet != internalName ) {
				delete curToolSet;
				curToolSet = new std::string( internalName );
			}
		}
		else {
			curToolSet = new std::string( internalName );
		}
	}

	void MssCFToolSetParser::parseFile( const std::string& url ) {
		size_t lastSlash = url.find_last_of( '/' );
		std::string myDocRoot = url.substr( 0, lastSlash + 1 );
		setDocumentRootDir( myDocRoot );
		parse( url.data() );
	}

	void MssCFToolSetParser::loadToolSet( const std::string& basedir, const std::string& toolsetName ) {
		static const std::string S_ProcName( "loadToolSet" );
		static const std::string S_ToolSetDir( "toolSetDir" );
		static const std::string S_Slash( "/" );
		static const std::string S_ToolSetXml( "toolset.xml" );
		CFLIB_EXCEPTION_DECLINFO

		std::string toolSetFileName;
		std::string toolSetRootDir;
		std::ifstream* toolSetManifestXml = NULL;

		XMLCh* xmlchFileName = NULL;
		const std::string& toolsetDir = basedir;
		std::string::size_type toolsetDirLen = toolsetDir.length();
		if( toolsetDirLen <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_ToolSetDir );
		}
		char toolsetDirTail = toolsetDir[ toolsetDirLen - 1 ];
		if( ( toolsetDirTail == '/' ) || ( toolsetDirTail ==  '\\' ) ) {
			toolSetRootDir = toolsetDir + toolsetName + S_Slash;
		}
		else {
			toolSetRootDir = toolsetDir + S_Slash + toolsetName + S_Slash;
		}

		toolSetFileName = toolSetRootDir + S_ToolSetXml;

		toolSetManifestXml = new std::ifstream();
		toolSetManifestXml->open( toolSetFileName );
		if( ! toolSetManifestXml->good() ) {
			delete toolSetManifestXml;
			toolSetManifestXml = NULL;
		}

		//		Did we find the toolset?

		if( toolSetManifestXml == NULL ) {
			static const std::string S_MsgCouldNotLocateToolSet( "Could not locate Tool Set \"" );
			static const std::string S_Terminator( "\"" );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgCouldNotLocateToolSet + toolsetName + S_Terminator ); 
		}

		//		Parse the toolset

		XMLCh* xmlchSystemId = NULL;
		XMLCh* xmlchContents = NULL;

		try {
			static const std::string S_FileType( "ToolSet::/" );
			std::string systemId( S_FileType + toolSetFileName );
			toolSetManifestXml->seekg( 0, std::ios_base::end );
			size_t filelen = toolSetManifestXml->tellg();
			toolSetManifestXml->seekg( 0 );
			char * rdbuff = new char[ filelen + 1 ];
			toolSetManifestXml->read( rdbuff, filelen );
			if( ! *toolSetManifestXml ) {
				size_t bytesRead = toolSetManifestXml->gcount();
				static const std::string S_MsgOnlyRead( "Could only read " );
				static const std::string S_MsgFrom( " from file " );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_MsgOnlyRead + std::to_string( bytesRead ) + S_MsgFrom );
			}
			rdbuff[ filelen ] = '\000';

			static const std::string S_Utf8( "UTF8" );
			xmlchSystemId = xercesc::XMLString::transcode( systemId.c_str() );
			xercesc::MemBufInputSource memBuff( ((XMLByte*)rdbuff), filelen, xmlchSystemId );
			parse( dynamic_cast<xercesc::InputSource&>( memBuff ) );
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
		if( toolSetManifestXml != NULL ) {
			toolSetManifestXml->close();
			delete toolSetManifestXml;
			toolSetManifestXml = NULL;
		}
		if( xmlchSystemId != NULL ) {
			xercesc::XMLString::release( &xmlchSystemId );
		}
		if( xmlchContents != NULL ) {
			xercesc::XMLString::release( &xmlchContents );
		}
	}
}

