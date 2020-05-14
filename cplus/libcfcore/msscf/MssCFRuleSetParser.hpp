#pragma once

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

#include <iostream>
#include <fstream>

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <xercesc/sax2/Attributes.hpp>

namespace cfcore {

	class MssCFEngine;
	class MssCFToolSetParser;

	/**
	 *	A RuleSetParser is a JAXP 1.3 Validating XML parser
	 *	for documents conforming to the MSS Generator Knowledge Base
	 *	RuleSet schema.
	 *
	 *	@see	http://generator.msobkow.com/xsd/genkb-1.0.6-ruleset.
	 */
	class MssCFRuleSetParser : public cflib::CFLibXmlCoreSaxParser {
		public:
			static const std::string CLASS_NAME;
			static const std::string SCHEMA_XMLNS;
			static const std::string SCHEMA_URI;
			static const std::string SCHEMA_ROOT_URI;
			static const std::string S_MsgParserMustBeInitializedFirst;
			static const std::string S_Uri;
			static const std::string S_Root;
			static const std::string S_RuleSet;
			static const std::string S_GenRule;
			static const std::string S_GenTrunc;
			static const std::string S_GenFile;
			static const std::string S_RuleSetDocRoot;
			static const std::string S_RuleSetXml;

		protected:

			MssCFEngine* cfEngine = NULL;

			MssCFEngine* getGenEngine();
			void setGenEngine( MssCFEngine* value );

		private:
			std::string documentRootDir;

		public:

			static std::string getInternalToolSetName( const std::string* extToolSet );

			const std::string& getDocumentRootDir();

		protected:

			void setDocumentRootDir( const std::string& parmDirName );

		protected:
			static bool grammarLoaded;
			ICFGenKbClusterObj* useCluster = NULL;
			ICFGenKbTenantObj* useTenant = NULL;
			std::string* defaultToolSet = NULL;
			std::string* curToolSet = NULL;

		public:

			MssCFRuleSetParser( MssCFEngine* engine, cflib::ICFLibMessageLog* jLogger );
			virtual ~MssCFRuleSetParser();

			virtual void verifyGrammarInstallation();

			virtual const std::string& getDefaultToolSet() const;
			virtual void setDefaultToolSet( const std::string& toolSet );

			virtual const std::string& getCurToolSet() const;
			virtual void setCurToolSet( const std::string& toolSet );

			//	ContentHandler Interface

			class GenRuleHandler : public cflib::CFLibXmlCoreElementHandler {

				public:

					GenRuleHandler( MssCFRuleSetParser* coreParser );
					virtual ~GenRuleHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement(
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class GenTruncHandler : public cflib::CFLibXmlCoreElementHandler {

				public:

					GenTruncHandler( MssCFRuleSetParser* coreParser );
					virtual ~GenTruncHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement(
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class GenFileHandler : public cflib::CFLibXmlCoreElementHandler {

				public:

					GenFileHandler( MssCFRuleSetParser* coreParser );
					virtual ~GenFileHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement(
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class RuleSetHandler : public cflib::CFLibXmlCoreElementHandler {

				public:

					RuleSetHandler( MssCFRuleSetParser* coreParser );
					virtual ~RuleSetHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement(
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class RootHandler : public cflib::CFLibXmlCoreElementHandler {

				public:

					RootHandler( MssCFRuleSetParser* coreParser );
					virtual ~RootHandler();

					virtual void startElement(
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement(
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

		protected:

			MssCFRuleSetParser::RootHandler* pRootHandler = NULL;
			MssCFRuleSetParser::RuleSetHandler* pRuleSetHandler = NULL;
			MssCFRuleSetParser::GenRuleHandler* pGenRuleHandler = NULL;
			MssCFRuleSetParser::GenTruncHandler* pGenTruncHandler = NULL;
			MssCFRuleSetParser::GenFileHandler* pGenFileHandler = NULL;

		public:
			virtual MssCFRuleSetParser::RootHandler* getRootHandler();
			virtual MssCFRuleSetParser::RuleSetHandler* getRuleSetHandler();
			virtual MssCFRuleSetParser::GenFileHandler* getGenFileHandler();
			virtual MssCFRuleSetParser::GenRuleHandler* getGenRuleHandler();
			virtual MssCFRuleSetParser::GenTruncHandler* getGenTruncHandler();

			virtual void loadRuleSet( const std::string& basedir, const std::string& rulesetName );
	};
}
