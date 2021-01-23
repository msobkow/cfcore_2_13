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

namespace cfcore {

	const std::string MssCFRuleSetParser::CLASS_NAME( "MssCFRuleSetParser" );
	const std::string MssCFRuleSetParser::SCHEMA_XMLNS( "uri://com.github.msobkow/cfgenkb-2.12-ruleset" );
	const std::string MssCFRuleSetParser::SCHEMA_URI( "/usr/share/msobkow/2.0.12/xsd/cfgenkb-2.12-ruleset.xsd" );
	const std::string MssCFRuleSetParser::SCHEMA_ROOT_URI( "/xsd/cfgenkb-2.12-ruleset.xsd" );
	const std::string MssCFRuleSetParser::S_MsgParserMustBeInitializedFirst( "Rule set parser must be initialized first" );
	const std::string MssCFRuleSetParser::S_Uri( "uri" );
	const std::string MssCFRuleSetParser::S_Root( "Root" );
	const std::string MssCFRuleSetParser::S_RuleSet( "RuleSet" );
	const std::string MssCFRuleSetParser::S_GenRule( "GenRule" );
	const std::string MssCFRuleSetParser::S_GenTrunc( "GenTrunc" );
	const std::string MssCFRuleSetParser::S_GenFile( "GenFile" );
	const std::string MssCFRuleSetParser::S_RuleSetDocRoot( "/usr/share/xsd/" );
	const std::string MssCFRuleSetParser::S_RuleSetXml( "ruleset.xml" );

	bool MssCFRuleSetParser::grammarLoaded = false;

	MssCFEngine* MssCFRuleSetParser::getGenEngine() {
		return( cfEngine );
	}

	void MssCFRuleSetParser::setGenEngine( MssCFEngine* value ) {
		cfEngine = value;
	}

	std::string MssCFRuleSetParser::getInternalToolSetName( const std::string* extToolSet ) {
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

	const std::string& MssCFRuleSetParser::getDocumentRootDir() {
		return( documentRootDir );
	}

	void MssCFRuleSetParser::setDocumentRootDir( const std::string& parmDirName ) {
		documentRootDir = parmDirName;
	}

	MssCFRuleSetParser::MssCFRuleSetParser( MssCFEngine* engine, cflib::ICFLibMessageLog* jLogger )
	: cflib::CFLibXmlCoreSaxParser( jLogger )
	{
		cfEngine = engine;
		getGenRuleHandler();
		getGenTruncHandler();
		getGenFileHandler();
		getRuleSetHandler();
		getRootHandler();
		setRootElementHandler( getRootHandler() );
		verifyGrammarInstallation();
		initParser();
	}

	MssCFRuleSetParser::~MssCFRuleSetParser() {
		if( pGenFileHandler != NULL ) {
			delete pGenFileHandler;
			pGenFileHandler = NULL;
		}
		if( pGenTruncHandler != NULL ) {
			delete pGenTruncHandler;
			pGenTruncHandler = NULL;
		}
		if( pGenRuleHandler != NULL ) {
			delete pGenRuleHandler;
			pGenRuleHandler = NULL;
		}
		if( pRuleSetHandler != NULL ) {
			delete pRuleSetHandler;
			pRuleSetHandler = NULL;
		}
		if( pRootHandler != NULL ) {
			delete pRootHandler;
			pRootHandler = NULL;
		}
		if( defaultToolSet != NULL ) {
			delete defaultToolSet;
			defaultToolSet = NULL;
		}
	}

	MssCFRuleSetParser::RootHandler* MssCFRuleSetParser::getRootHandler() {
		if( pRootHandler == NULL ) {
			pRootHandler = new MssCFRuleSetParser::RootHandler( this );
		}
		return( pRootHandler );
	}

	MssCFRuleSetParser::RuleSetHandler* MssCFRuleSetParser::getRuleSetHandler() {
		if( pRuleSetHandler == NULL ) {
			pRuleSetHandler = new MssCFRuleSetParser::RuleSetHandler( this );
		}
		return( pRuleSetHandler );
	}

	MssCFRuleSetParser::GenFileHandler* MssCFRuleSetParser::getGenFileHandler() {
		if( pGenFileHandler == NULL ) {
			pGenFileHandler = new MssCFRuleSetParser::GenFileHandler( this );
		}
		return( pGenFileHandler );
	}

	MssCFRuleSetParser::GenRuleHandler* MssCFRuleSetParser::getGenRuleHandler() {
		if( pGenRuleHandler == NULL ) {
			pGenRuleHandler = new MssCFRuleSetParser::GenRuleHandler( this );
		}
		return( pGenRuleHandler );
	}

	MssCFRuleSetParser::GenTruncHandler* MssCFRuleSetParser::getGenTruncHandler() {
		if( pGenTruncHandler == NULL ) {
			pGenTruncHandler = new MssCFRuleSetParser::GenTruncHandler( this );
		}
		return( pGenTruncHandler );
	}

	void MssCFRuleSetParser::loadRuleSet( const std::string& basedir, const std::string& rulesetName ) {
		static const std::string S_ProcName( "loadRuleSet" );
		static const std::string S_RuleSetDir( "ruleSetDir" );
		static const std::string S_Slash( "/" );
		CFLIB_EXCEPTION_DECLINFO

		XMLCh* xmlchFileName = NULL;

		std::string ruleSetFileName = basedir + "/" + rulesetName + ".xml";

		std::ifstream* ruleSetManifestXml = new std::ifstream();
		ruleSetManifestXml->open( ruleSetFileName );
		if( ! ruleSetManifestXml->good() ) {
			delete ruleSetManifestXml;
			ruleSetManifestXml = NULL;
		}

		//		Did we find the ruleset?

		if( ruleSetManifestXml == NULL ) {
			static const std::string S_MsgCouldNotLocateRuleSet( "Could not locate Rule Set \"" );
			static const std::string S_File( "\" file \"" );
			static const std::string S_Terminator( "\"" );
			std::string S_Msg( S_MsgCouldNotLocateRuleSet + rulesetName + S_File + ruleSetFileName + S_Terminator ); 
			getLog()->message( CLASS_NAME + "." + S_ProcName + "() " + S_Msg );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg ); 
		}

		ruleSetManifestXml->close();
		delete ruleSetManifestXml;
		ruleSetManifestXml = NULL;

		try {
			size_t lastSlash = ruleSetFileName.find_last_of( '/' );
			std::string myDocRoot = ruleSetFileName.substr( 0, lastSlash + 1 );
			setDocumentRootDir( myDocRoot );
			parse( ruleSetFileName.data() );
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

	const std::string& MssCFRuleSetParser::getDefaultToolSet() const {
		static const std::string S_ProcName( "getDefaultToolSet" );
		static const std::string S_DefaultToolSet( "defaultToolSet" );
		if( defaultToolSet == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_DefaultToolSet );
		}
		return( *defaultToolSet );
	}

	void MssCFRuleSetParser::setDefaultToolSet( const std::string& toolSet ) {
		if( defaultToolSet != NULL ) {
			if( *defaultToolSet == toolSet ) {
				return;
			}
			delete defaultToolSet;
			defaultToolSet = NULL;
		}
		defaultToolSet = new std::string( getInternalToolSetName( &toolSet ) );
	}

	const std::string& MssCFRuleSetParser::getCurToolSet() const {
		static const std::string S_ProcName( "getCurToolSet" );
		static const std::string S_CurToolSet( "curToolSet" );
		if( curToolSet == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_CurToolSet );
		}
		return( *curToolSet );
	}

	void MssCFRuleSetParser::setCurToolSet( const std::string& toolSet ) {
		if( curToolSet != NULL ) {
			if( *curToolSet == toolSet ) {
				return;
			}
			delete curToolSet;
			curToolSet = NULL;
		}
		curToolSet = new std::string( getInternalToolSetName( &toolSet ) );
	}

	MssCFRuleSetParser::RuleSetHandler::RuleSetHandler( MssCFRuleSetParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
		addElementHandler( S_GenRule, coreParser->getGenRuleHandler() );
		addElementHandler( S_GenTrunc, coreParser->getGenTruncHandler() );
		addElementHandler( S_GenFile, coreParser->getGenFileHandler() );
	}

	MssCFRuleSetParser::RuleSetHandler::~RuleSetHandler() {
	}

	void MssCFRuleSetParser::RuleSetHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		static const std::string S_ProcName( "startElement" );
		static const std::string S_Tool( "Tool" );
		static const std::string S_SpecificallyId( "Id" );
		static const std::string S_Object( "Object" );
		static const std::string S_Uri( "uri" );
		static const std::string S_LocalName( "localname" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		static const std::string S_SchemaLocation( "schemaLocation" );
		static const std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_ToolSet( "ToolSet" );
		static const std::string S_Name( "Name" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Descr( "Descr" );
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
		std::string* attrToolSet = NULL;
		std::string* attrName = NULL;
		std::string* attrRevision = NULL;
		std::string* attrDescr = NULL;
		std::string* natToolSet = NULL;
		std::string* natName = NULL;
		std::string* natRevision = NULL;
		std::string* natDescr = NULL;
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
				std::string Msg( "Expected QName to be '" + S_RuleSet + "', not '" + cppQName + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			MssCFRuleSetParser* useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				else if( *attrLocalName == S_ToolSet ) {
					if( attrToolSet != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToolSet = new std::string( *cppValue );
					}
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
			if( ( attrToolSet == NULL ) || ( attrToolSet->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ToolSet );
			}
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
			std::string xmlFormattedNearLocation = useParser->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			if( attrToolSet != NULL ) {
				curContext->putNamedTag( S_ToolSet, *attrToolSet );
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

			if( attrToolSet != NULL ) {
				natToolSet = new std::string( *attrToolSet );
			}
			else {
				natToolSet = NULL;
			}
			if( natToolSet == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ToolSet );
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

			std::string defaultToolSet = (dynamic_cast<MssCFRuleSetParser*>( getParser() ))->getDefaultToolSet();
			std::string useToolSet;

			if( natToolSet == NULL ) {
				useToolSet = defaultToolSet;
			}
			else {
				useToolSet = getInternalToolSetName( natToolSet );
			}

			if( useToolSet != defaultToolSet ) {
				useParser->setDefaultToolSet( useToolSet );
			}

			static const std::string S_LoadingRuleSet( "\tLoading RuleSet \"" );
			static const std::string S_LoadingRevision( "\", Revision = \"" );
			static const std::string S_LoadingDescr( "\", Descr=\"" );
			static const std::string S_LoadingTerminator( "\"\n" );

			std::string S_MsgLoading( S_LoadingRuleSet );
			S_MsgLoading.append( *natName );
			S_MsgLoading.append( S_LoadingRevision );
			S_MsgLoading.append( *natRevision );
			S_MsgLoading.append( S_LoadingDescr );
			S_MsgLoading.append( *natDescr );
			S_MsgLoading.append( S_LoadingTerminator );
			getLog()->message( S_MsgLoading );
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

		if( natToolSet != NULL ) {
			delete natToolSet;
			natToolSet = NULL;
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

		if( attrToolSet != NULL ) {
			delete attrToolSet;
			attrToolSet = NULL;
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

	void MssCFRuleSetParser::RuleSetHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	MssCFRuleSetParser::RootHandler::RootHandler( MssCFRuleSetParser* coreParser )
	: CFLibXmlCoreElementHandler( coreParser )
	{
		addElementHandler( S_RuleSet, coreParser->getRuleSetHandler() );
	}

	MssCFRuleSetParser::RootHandler::~RootHandler() {
	}

	void MssCFRuleSetParser::RootHandler::startElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
	}

	void MssCFRuleSetParser::RootHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
	}

	void MssCFRuleSetParser::verifyGrammarInstallation() {
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

	MssCFRuleSetParser::GenRuleHandler::GenRuleHandler( MssCFRuleSetParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}

	MssCFRuleSetParser::GenRuleHandler::~GenRuleHandler() {
	}

	void MssCFRuleSetParser::GenRuleHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		static const std::string S_ProcName( "startElement" );
		static const std::string S_Tool( "Tool" );
		static const std::string S_SpecificallyId( "Id" );
		static const std::string S_Object( "Object" );
		static const std::string S_Uri( "uri" );
		static const std::string S_LocalName( "localname" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		static const std::string S_SchemaLocation( "schemaLocation" );
		static const std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_ToolSet( "ToolSet" );
		static const std::string S_Name( "Name" );
		static const std::string S_ScopeDef( "ScopeDef" );
		static const std::string S_GenDef( "GenDef" );
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
		std::string* attrToolSet = NULL;
		std::string* attrName = NULL;
		std::string* attrScopeDef = NULL;
		std::string* attrGenDef = NULL;
		MssCFRuleSetParser* useParser = NULL;
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

			if( cppQName != S_GenRule ) {
				std::string Msg( "Expected QName to be '" + S_GenRule + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				else if( *attrLocalName == S_ToolSet ) {
					if( attrToolSet != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToolSet = new std::string( *cppValue );
					}
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
				else if( *attrLocalName == S_ScopeDef ) {
					if( attrScopeDef != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrScopeDef = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_GenDef ) {
					if( attrGenDef != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrGenDef = new std::string( *cppValue );
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

			if( ( attrGenDef == NULL ) || ( attrGenDef->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GenDef );
			}

			std::string defaultToolSet = useParser->getDefaultToolSet();

			std::string useToolSet;
			if( attrToolSet == NULL ) {
				useToolSet = defaultToolSet;
			}
			else {
				useToolSet = getInternalToolSetName( attrToolSet );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = useParser->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			curContext->putNamedTag( S_ToolSet, useToolSet );
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}
			if( attrScopeDef != NULL ) {
				if( *attrScopeDef == "*" ) {
					curContext->putNamedTag( S_ScopeDef, "Object" );
				}
				else if( *attrScopeDef == "any" ) {
					curContext->putNamedTag( S_ScopeDef, "Object" );
				}
				else {
					curContext->putNamedTag( S_ScopeDef, *attrScopeDef );
				}
			}
			else {
				curContext->putNamedTag( S_ScopeDef, "Object" );
			}
			if( attrGenDef != NULL ) {
				curContext->putNamedTag( S_GenDef, *attrGenDef );
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

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrToolSet != NULL ) {
			delete attrToolSet;
			attrToolSet = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrScopeDef != NULL ) {
			delete attrScopeDef;
			attrScopeDef = NULL;
		}

		if( attrGenDef != NULL ) {
			delete attrGenDef;
			attrGenDef = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleSetParser::GenRuleHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetCurContext( "getParser().getCurContext()" );
		MssCFRuleSetParser* useParser = NULL;
		cflib::CFLibXmlCoreContext* curContext = NULL;
		useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				S_GetParserGetCurContext );
		}

		static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
		std::string xmlFormattedNearLocation = curContext->getNamedTag( S_XmlFormattedNearLocation );

		std::string attrName = curContext->getNamedTag( "Name" );
		std::string useToolSet = curContext->getNamedTag( "ToolSet" );
		std::string attrScopeDef = curContext->getNamedTag( "ScopeDef" );
		std::string attrGenDef = curContext->getNamedTag( "GenDef" );
		std::string attrText = curContext->getElementText();

		if( attrScopeDef.length() <= 0 ) {
			attrScopeDef.append( "Object" );
		}

		useParser->getGenEngine()->defineRule( xmlFormattedNearLocation,
			useToolSet,
			attrScopeDef,
			attrGenDef,
			attrName,
			attrText );

		return;
	}

	MssCFRuleSetParser::GenTruncHandler::GenTruncHandler( MssCFRuleSetParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}

	MssCFRuleSetParser::GenTruncHandler::~GenTruncHandler() {
	}

	void MssCFRuleSetParser::GenTruncHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		static const std::string S_ProcName( "startElement" );
		static const std::string S_Tool( "Tool" );
		static const std::string S_SpecificallyId( "Id" );
		static const std::string S_Object( "Object" );
		static const std::string S_Uri( "uri" );
		static const std::string S_LocalName( "localname" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		static const std::string S_SchemaLocation( "schemaLocation" );
		static const std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_ToolSet( "ToolSet" );
		static const std::string S_Name( "Name" );
		static const std::string S_ScopeDef( "ScopeDef" );
		static const std::string S_GenDef( "GenDef" );
		static const std::string S_TruncateAt( "TruncateAt" );
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
		std::string* attrToolSet = NULL;
		std::string* attrName = NULL;
		std::string* attrScopeDef = NULL;
		std::string* attrGenDef = NULL;
		std::string* attrTruncateAt = NULL;
		MssCFRuleSetParser* useParser = NULL;
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

			if( cppQName != S_GenTrunc ) {
				std::string Msg( "Expected QName to be '" + S_GenTrunc + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				else if( *attrLocalName == S_ToolSet ) {
					if( attrToolSet != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToolSet = new std::string( *cppValue );
					}
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
				else if( *attrLocalName == S_ScopeDef ) {
					if( attrScopeDef != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrScopeDef = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_GenDef ) {
					if( attrGenDef != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrGenDef = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_TruncateAt ) {
					if( attrTruncateAt != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrTruncateAt = new std::string( *cppValue );
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
			if( ( attrGenDef == NULL ) || ( attrGenDef->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GenDef );
			}
			if( ( attrTruncateAt == NULL ) || ( attrTruncateAt->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_TruncateAt );
			}

			std::string defaultToolSet = useParser->getDefaultToolSet();

			std::string useToolSet;
			if( attrToolSet == NULL ) {
				useToolSet = defaultToolSet;
			}
			else {
				useToolSet = getInternalToolSetName( attrToolSet );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = useParser->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			curContext->putNamedTag( S_ToolSet, useToolSet );
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}
			if( attrScopeDef != NULL ) {
				if( *attrScopeDef == "*" ) {
					curContext->putNamedTag( S_ScopeDef, "Object" );
				}
				else if( *attrScopeDef == "any" ) {
					curContext->putNamedTag( S_ScopeDef, "Object" );
				}
				else {
					curContext->putNamedTag( S_ScopeDef, *attrScopeDef );
				}
			}
			else {
				curContext->putNamedTag( S_ScopeDef, "Object" );
			}
			if( attrGenDef != NULL ) {
				curContext->putNamedTag( S_GenDef, *attrGenDef );
			}
			if( attrTruncateAt != NULL ) {
				curContext->putNamedTag( S_TruncateAt, *attrTruncateAt );
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

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrToolSet != NULL ) {
			delete attrToolSet;
			attrToolSet = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrScopeDef != NULL ) {
			delete attrScopeDef;
			attrScopeDef = NULL;
		}

		if( attrGenDef != NULL ) {
			delete attrGenDef;
			attrGenDef = NULL;
		}

		if( attrTruncateAt != NULL ) {
			delete attrTruncateAt;
			attrTruncateAt = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleSetParser::GenTruncHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetCurContext( "getParser().getCurContext()" );
		MssCFRuleSetParser* useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				S_GetParserGetCurContext );
		}

		static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
		std::string xmlFormattedNearLocation = curContext->getNamedTag( S_XmlFormattedNearLocation );

		std::string attrName = curContext->getNamedTag( "Name" );
		std::string useToolSet = curContext->getNamedTag( "ToolSet" );
		std::string attrScopeDef = curContext->getNamedTag( "ScopeDef" );
		std::string attrGenDef = curContext->getNamedTag( "GenDef" );
		std::string attrTruncateAt = curContext->getNamedTag( "TruncateAt" );
		std::string attrText = curContext->getElementText();
		int32_t* truncateAt = cflib::CFLibXmlUtil::parseInt32( attrTruncateAt );
		
		if( attrScopeDef.length() <= 0 ) {
			attrScopeDef.append( "Object" );
		}

		useParser->getGenEngine()->defineTrunc( xmlFormattedNearLocation,
			useToolSet,
			attrScopeDef,
			attrGenDef,
			attrName,
			attrText,
			*truncateAt );

		return;
	}

	MssCFRuleSetParser::GenFileHandler::GenFileHandler( MssCFRuleSetParser* coreParser )
	: cflib::CFLibXmlCoreElementHandler( coreParser )
	{
	}

	MssCFRuleSetParser::GenFileHandler::~GenFileHandler() {
	}

	void MssCFRuleSetParser::GenFileHandler::startElement (
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname,
		const xercesc::Attributes& attrs )
	{
		static const std::string S_ProcName( "startElement" );
		static const std::string S_Tool( "Tool" );
		static const std::string S_SpecificallyId( "Id" );
		static const std::string S_Object( "Object" );
		static const std::string S_Uri( "uri" );
		static const std::string S_LocalName( "localname" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetSchemaObj( "getParser()->getSchemaObj()" );
		static const std::string S_GetParserGetGenEngine( "getParser()->getGenEngine()" );
		static const std::string S_SchemaLocation( "schemaLocation" );
		static const std::string S_QName( "qname" );
		static const std::string S_Id( "Id" );
		static const std::string S_ToolSet( "ToolSet" );
		static const std::string S_Name( "Name" );
		static const std::string S_ScopeDef( "ScopeDef" );
		static const std::string S_GenDef( "GenDef" );
		static const std::string S_SourceBundle( "SourceBundle" );
		static const std::string S_GenerateOnce( "GenerateOnce" );
		static const std::string S_ModuleName( "ModuleName" );
		static const std::string S_BasePackageName( "BasePackageName" );
		static const std::string S_SubPackageName( "SubPackageName" );
		static const std::string S_ExpansionClassName( "ExpansionClassName" );
		static const std::string S_ExpansionKeyName( "ExpansionKeyName" );
		static const std::string S_ExpansionFileName( "ExpansionFileName" );
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
		std::string* attrToolSet = NULL;
		std::string* attrName = NULL;
		std::string* attrScopeDef = NULL;
		std::string* attrGenDef = NULL;
		std::string* attrSourceBundle = NULL;
		std::string* attrGenerateOnce = NULL;
		std::string* attrModuleName = NULL;
		std::string* attrBasePackageName = NULL;
		std::string* attrSubPackageName = NULL;
		std::string* attrExpansionClassName = NULL;
		std::string* attrExpansionKeyName = NULL;
		std::string* attrExpansionFileName = NULL;
		MssCFRuleSetParser* useParser = NULL;
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

			if( cppQName != S_GenFile ) {
				std::string Msg( "Expected QName to be '" + S_GenFile + "'" );
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					Msg );
			}

			useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				else if( *attrLocalName == S_ToolSet ) {
					if( attrToolSet != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrToolSet = new std::string( *cppValue );
					}
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
				else if( *attrLocalName == S_ScopeDef ) {
					if( attrScopeDef != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrScopeDef = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_GenDef ) {
					if( attrGenDef != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrGenDef = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_SourceBundle ) {
					if( attrSourceBundle != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrSourceBundle = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_GenerateOnce ) {
					if( attrGenerateOnce != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrGenerateOnce = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_ModuleName ) {
					if( attrModuleName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrModuleName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_BasePackageName ) {
					if( attrBasePackageName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrBasePackageName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_SubPackageName ) {
					if( attrSubPackageName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrSubPackageName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_ExpansionClassName ) {
					if( attrExpansionClassName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrExpansionClassName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_ExpansionKeyName ) {
					if( attrExpansionKeyName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrExpansionKeyName = new std::string( *cppValue );
					}
				}
				else if( *attrLocalName == S_ExpansionFileName ) {
					if( attrExpansionFileName != NULL ) {
						throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
							S_ProcName,
							*attrLocalName );
					}
					if( cppValue != NULL ) {
						attrExpansionFileName = new std::string( *cppValue );
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
			if( ( attrGenDef == NULL ) || ( attrGenDef->length() <= 0 ) ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_GenDef );
			}

			std::string defaultToolSet = useParser->getDefaultToolSet();

			std::string useToolSet;
			if( attrToolSet == NULL ) {
				useToolSet = defaultToolSet;
			}
			else {
				useToolSet = getInternalToolSetName( attrToolSet );
			}

			// Save named attributes to context
			static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
			std::string xmlFormattedNearLocation = useParser->getFormattedNearLocation();
			curContext->putNamedTag( S_XmlFormattedNearLocation, xmlFormattedNearLocation );

			if( attrId != NULL ) {
				curContext->putNamedTag( S_SpecificallyId, *attrId );
			}
			curContext->putNamedTag( S_ToolSet, useToolSet );
			if( attrName != NULL ) {
				curContext->putNamedTag( S_Name, *attrName );
			}
			if( attrScopeDef != NULL ) {
				if( *attrScopeDef == "*" ) {
					curContext->putNamedTag( S_ScopeDef, "Object" );
				}
				else if( *attrScopeDef == "any" ) {
					curContext->putNamedTag( S_ScopeDef, "Object" );
				}
				else {
					curContext->putNamedTag( S_ScopeDef, *attrScopeDef );
				}
			}
			else {
				curContext->putNamedTag( S_ScopeDef, "Object" );
			}
			if( attrGenDef != NULL ) {
				curContext->putNamedTag( S_GenDef, *attrGenDef );
			}
			if( attrSourceBundle != NULL ) {
				curContext->putNamedTag( S_SourceBundle, *attrSourceBundle );
			}
			else {
				curContext->putNamedTag( S_SourceBundle, "" );
			}
			if( attrGenerateOnce != NULL ) {
				curContext->putNamedTag( S_GenerateOnce, *attrGenerateOnce );
			}
			else {
				curContext->putNamedTag( S_GenerateOnce, "" );
			}
			if( attrModuleName != NULL ) {
				curContext->putNamedTag( S_ModuleName, *attrModuleName );
			}
			else {
				curContext->putNamedTag( S_ModuleName, "" );
			}
			if( attrBasePackageName != NULL ) {
				curContext->putNamedTag( S_BasePackageName, *attrBasePackageName );
			}
			else {
				curContext->putNamedTag( S_BasePackageName, "" );
			}
			if( attrSubPackageName != NULL ) {
				curContext->putNamedTag( S_SubPackageName, *attrSubPackageName );
			}
			else {
				curContext->putNamedTag( S_SubPackageName, "" );
			}
			if( attrExpansionClassName != NULL ) {
				curContext->putNamedTag( S_ExpansionClassName, *attrExpansionClassName );
			}
			else {
				curContext->putNamedTag( S_ExpansionClassName, "" );
			}
			if( attrExpansionKeyName != NULL ) {
				curContext->putNamedTag( S_ExpansionKeyName, *attrExpansionKeyName );
			}
			else {
				curContext->putNamedTag( S_ExpansionKeyName, "" );
			}
			if( attrExpansionFileName != NULL ) {
				curContext->putNamedTag( S_ExpansionFileName, *attrExpansionFileName );
			}
			else {
				curContext->putNamedTag( S_ExpansionFileName, "" );
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

		if( attrId != NULL ) {
			delete attrId;
			attrId = NULL;
		}

		if( attrToolSet != NULL ) {
			delete attrToolSet;
			attrToolSet = NULL;
		}

		if( attrName != NULL ) {
			delete attrName;
			attrName = NULL;
		}

		if( attrScopeDef != NULL ) {
			delete attrScopeDef;
			attrScopeDef = NULL;
		}

		if( attrGenDef != NULL ) {
			delete attrGenDef;
			attrGenDef = NULL;
		}

		if( attrSourceBundle != NULL ) {
			delete attrSourceBundle;
			attrSourceBundle = NULL;
		}

		if( attrGenerateOnce != NULL ) {
			delete attrGenerateOnce;
			attrGenerateOnce = NULL;
		}

		if( attrModuleName != NULL ) {
			delete attrModuleName;
			attrModuleName = NULL;
		}

		if( attrBasePackageName != NULL ) {
			delete attrBasePackageName;
			attrBasePackageName = NULL;
		}

		if( attrSubPackageName != NULL ) {
			delete attrSubPackageName;
			attrSubPackageName = NULL;
		}

		if( attrExpansionClassName != NULL ) {
			delete attrExpansionClassName;
			attrExpansionClassName = NULL;
		}

		if( attrExpansionKeyName != NULL ) {
			delete attrExpansionKeyName;
			attrExpansionKeyName = NULL;
		}

		if( attrExpansionFileName != NULL ) {
			delete attrExpansionFileName;
			attrExpansionFileName = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_SAXEXCEPTION
	}

	void MssCFRuleSetParser::GenFileHandler::endElement(
		const XMLCh* const uri,
		const XMLCh* const localname,
		const XMLCh* const qname )
	{
		static const std::string S_ProcName( "endElement" );
		static const std::string S_GetParser( "getParser()" );
		static const std::string S_GetParserGetCurContext( "getParser().getCurContext()" );
		MssCFRuleSetParser* useParser = dynamic_cast<MssCFRuleSetParser*>( getParser() );
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
				S_GetParserGetCurContext );
		}

		static const std::string S_XmlFormattedNearLocation( "XmlFormattedNearLocation" );
		std::string xmlFormattedNearLocation = curContext->getNamedTag( S_XmlFormattedNearLocation );

		std::string attrName = curContext->getNamedTag( "Name" );
		std::string useToolSet = curContext->getNamedTag( "ToolSet" );
		std::string attrScopeDef = curContext->getNamedTag( "ScopeDef" );
		std::string attrGenDef = curContext->getNamedTag( "GenDef" );
		std::string attrSourceBundle = curContext->getNamedTag( "SourceBundle" );
		std::string attrGenerateOnce = curContext->getNamedTag( "GenerateOnce" );
		std::string attrModuleName = curContext->getNamedTag( "ModuleName" );
		std::string attrBasePackageName = curContext->getNamedTag( "BasePackageName" );
		std::string attrSubPackageName = curContext->getNamedTag( "SubPackageName" );
		std::string attrExpansionClassName = curContext->getNamedTag( "ExpansionClassName" );
		std::string attrExpansionKeyName = curContext->getNamedTag( "ExpansionKeyName" );
		std::string attrExpansionFileName = curContext->getNamedTag( "ExpansionFileName" );
		std::string attrText = curContext->getElementText();

		if( attrScopeDef.length() <= 0 ) {
			attrScopeDef.append( "*" );
		}

		useParser->getGenEngine()->defineFile( xmlFormattedNearLocation,
			useToolSet,
			attrScopeDef,
			attrGenDef,
			attrName,
			attrText,
			attrGenerateOnce,
			attrSourceBundle,
			attrModuleName,
			attrBasePackageName,
			attrSubPackageName,
			attrExpansionClassName,
			attrExpansionKeyName,
			attrExpansionFileName );

		return;
	}
}

