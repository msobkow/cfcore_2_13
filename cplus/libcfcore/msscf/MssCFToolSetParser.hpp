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
	class MssCFRuleSetParser;

	class MssCFToolSetParser : public cflib::CFLibXmlCoreSaxParser
	{
		public:
			static const std::string CLASS_NAME;
			static const std::string SCHEMA_XMLNS;
			static const std::string SCHEMA_URI;
			static const std::string SCHEMA_ROOT_URI;
			static const std::string S_ToolSetDocRoot;
			static const std::string S_ToolSetXml;
			static const std::string S_MsgParserMustBeInitializedFirst;
			static const std::string S_Uri;
			static const std::string S_Root;
			static const std::string S_RuleSet;
			static const std::string S_ToolSet;

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
			MssCFRuleSetParser* ruleSetParser = NULL;
			std::string* curToolSet = NULL;
			cflib::ICFLibMessageLog* log = NULL;

		public:

			MssCFRuleSetParser* getRuleSetParser();

			class RuleSetHandler : public cflib::CFLibXmlCoreElementHandler {

				protected:
					cflib::ICFLibMessageLog* log = NULL;

				public:

					RuleSetHandler( MssCFToolSetParser* coreParser );
					virtual ~RuleSetHandler();

					virtual cflib::ICFLibMessageLog* getLog();
					virtual void setLog( cflib::ICFLibMessageLog* msglog );

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

			class ToolSetHandler : public cflib::CFLibXmlCoreElementHandler
			{
				protected:
					cflib::ICFLibMessageLog* log = NULL;

				public:

					ToolSetHandler( MssCFToolSetParser* coreParser );
					virtual ~ToolSetHandler();

					virtual cflib::ICFLibMessageLog* getLog();
					virtual void setLog( cflib::ICFLibMessageLog* msglog );

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

			class RootHandler : public cflib::CFLibXmlCoreElementHandler {

				protected:
					cflib::ICFLibMessageLog* log = NULL;

				public:

					RootHandler( MssCFToolSetParser* coreParser );
					virtual ~RootHandler();

					virtual cflib::ICFLibMessageLog* getLog();
					virtual void setLog( cflib::ICFLibMessageLog* msglog );

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

			MssCFToolSetParser::RootHandler* pRootHandler = NULL;
			MssCFToolSetParser::RuleSetHandler* pRuleSetHandler = NULL;
			MssCFToolSetParser::ToolSetHandler* pToolSetHandler = NULL;

		public:

			virtual void verifyGrammarInstallation();

			MssCFToolSetParser( MssCFEngine* engine, cflib::ICFLibMessageLog* jLogger );
			virtual ~MssCFToolSetParser();

			virtual cflib::ICFLibMessageLog* getLog();
			virtual void setLog( cflib::ICFLibMessageLog* msglog );

			virtual const std::string& getCurToolSet() const;

			virtual MssCFToolSetParser::RuleSetHandler* getRuleSetHandler();
			virtual MssCFToolSetParser::ToolSetHandler* getToolSetHandler();
			virtual MssCFToolSetParser::RootHandler* getRootHandler();

		protected:

			/**
			 *	Set the current ToolSet name.
			 *
			 *	@param	toolSet	The new current ToolSet name.
			 */
			virtual void setCurToolSet( const std::string& toolSet );

		public:

			virtual void parseFile( const std::string& url );
			virtual void loadToolSet( const std::string& basedir, const std::string& toolsetName );
		};
}
