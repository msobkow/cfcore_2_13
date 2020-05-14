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
	class MssCFRuleSetParser;

	class MssCFRuleCartridgeParser : public cflib::CFLibXmlCoreSaxParser
	{
		public:
			static const std::string CLASS_NAME;
			static const std::string SCHEMA_XMLNS;
			static const std::string SCHEMA_URI;
			static const std::string SCHEMA_ROOT_URI;
			static const std::string S_MsgParserMustBeInitializedFirst;
			static const std::string S_Uri;
			static const std::string S_RuleCartridge;
			static const std::string S_Tool;
			static const std::string S_ToolSet;
			static const std::string S_UseCartridge;

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
			static std::vector<std::string> cartridgePath;

		private:
			static std::vector<std::string> ruleCartridgeNames;
			static std::vector<std::string> toolSetNames;
			MssCFToolSetParser* toolSetParser = NULL;
			MssCFRuleSetParser* ruleSetParser = NULL;
			MssCFRuleCartridgeParser* parentParser = NULL;

		protected:
			static bool grammarLoaded;
			ICFGenKbClusterObj* useCluster = NULL;
			ICFGenKbTenantObj* useTenant = NULL;

		public:

			class ToolHandler : public cflib::CFLibXmlCoreElementHandler {
				public:
					ToolHandler( MssCFRuleCartridgeParser* coreParser );
					virtual ~ToolHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class ToolSetHandler : public cflib::CFLibXmlCoreElementHandler {
				public:
					ToolSetHandler( MssCFRuleCartridgeParser* coreParser );
					virtual ~ToolSetHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class UseCartridgeHandler : public cflib::CFLibXmlCoreElementHandler {
				public:
					UseCartridgeHandler( MssCFRuleCartridgeParser* coreParser );
					virtual ~UseCartridgeHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class RuleCartridgeHandler : public cflib::CFLibXmlCoreElementHandler {
				public:
					RuleCartridgeHandler( MssCFRuleCartridgeParser* coreParser );
					virtual ~RuleCartridgeHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

			class RootHandler : public cflib::CFLibXmlCoreElementHandler {

				public:

					RootHandler( MssCFRuleCartridgeParser* coreParser );
					virtual ~RootHandler();

					virtual void startElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname,
						const xercesc::Attributes& attrs );

					virtual void endElement (
						const XMLCh* const uri,
						const XMLCh* const localname,
						const XMLCh* const qname );
			};

		protected:

			RootHandler* rootHandler = NULL;
			RuleCartridgeHandler* ruleCartridgeHandler = NULL;
			UseCartridgeHandler* useCartridgeHandler = NULL;
			MssCFRuleCartridgeParser::ToolHandler* toolHandler = NULL;
			MssCFRuleCartridgeParser::ToolSetHandler* toolSetHandler = NULL;

		public:

			MssCFRuleCartridgeParser::RootHandler* getRootHandler();
			MssCFRuleCartridgeParser::UseCartridgeHandler* getUseCartridgeHandler();
			MssCFRuleCartridgeParser::RuleCartridgeHandler* getRuleCartridgeHandler();
			MssCFRuleCartridgeParser::ToolHandler* getToolHandler();
			MssCFRuleCartridgeParser::ToolSetHandler* getToolSetHandler();

			MssCFRuleCartridgeParser( MssCFEngine* engine, cflib::ICFLibMessageLog* log );
			MssCFRuleCartridgeParser( MssCFRuleCartridgeParser* parser );
			virtual ~MssCFRuleCartridgeParser();

			virtual MssCFToolSetParser* getToolSetParser();
			virtual MssCFRuleSetParser* getRuleSetParser();

			virtual void verifyGrammarInstallation();

		//	JVM Config: CartridgePath

			/**
			 *	Add an XML rule cartridge directory the cartridge path.
			 */
			static void addCartridgePath( const std::string& dirname );
			static std::vector<std::string>& getCartridgePath();

		//	Runtime: Load a RuleCartridge

			/**
			 *	Load a RuleCartridge.
			 *
			 *	@param	cartridgeName	The name of the cartridge to be loaded
			 */
			void loadRuleCartridge( const std::string& cartridgeName );

		//	Accessors: ToolSetNames

			/**
			 *	Get the list of ToolSet names for the cartridge.
			 *
			 *	@return	String array of ToolSet names
			 */
			static const std::vector<std::string>& getToolSetNames();

			/**
			 *	Reset the list of ToolSet names.
			 */
			static void resetToolSetNames();

			/**
			 *	Add a ToolSet name.
			 *
			 *	@param	name	The name of the ToolSet to add to the list.
			 */
			static const std::string& addToolSetName( const std::string& name );

		//	Accessors: RuleCartridgeNames

			/**
			 *	Get the list of RuleCartridge names for the cartridge.
			 *
			 *	@return	String array of RuleCartridge names
			 */
			static const std::vector<std::string>& getRuleCartridgeNames();

			/**
			 *	Reset the list of RuleCartridge names.
			 */
			static void resetRuleCartridgeNames();

			/**
			 *	Add a RuleCartridge name.
			 *
			 *	@param	name	The name of the RuleCartridge to add to the list.
			 */
			static const std::string& addRuleCartridgeName( const std::string& name );

			/**
			 *	Was the specified RuleCartridge name loaded?
			 *
			 *	@param	name	The name of the RuleCartridge to check for
			 *
			 *	@return	True if the specified name was previously loaded.
			 */
			static bool isRuleCartridgeNameLoaded( const std::string& name );

			virtual void parseFile( const std::string& url );
	};
}
