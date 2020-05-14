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

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <cfgenkbobj/CFGenKbSchemaObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenFileObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenTruncObj.hpp>

namespace std {
	bool MssCFEngine_compareProbeOrder( cfcore::ICFGenKbGenItemObj* lhs, cfcore::ICFGenKbGenItemObj* rhs );
}

namespace cfcore {

	class MssCFGenContext;
	class MssCFGenContextFactory;
	class MssCFGelCompiler;
	class MssCFRuleTypeObj;
	class MssCFToolSetObj;
	class MssCFDefClassObj;
	class MssCFGenBindObj;
	class MssCFGenIteratorObj;
	class MssCFGenReferenceObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;

	class MssCFEngine : public CFGenKbSchemaObj
	{
		public:
			static const std::string LinkName;
			static const std::string LinkVersion;

			static const std::string GeneratorName;
			static const std::string GeneratorVersion;

			static const std::string S_Any;
			static const std::string S_Object;
			static const std::string S_Asterisk;
			static const std::string S_GenContext;
			static const std::string S_ScopeClass;

		protected:
			static bool debugMode;

			cflib::ICFLibMessageLog* log = NULL;
			ICFGenKbTenantObj* internalTenant = NULL;
			ICFGenKbGelCacheObj* gelCache = NULL;
			MssCFGelCompiler* gelCompiler = NULL;
			static std::map< CFGenKbDefClassPKey, std::map< CFGenKbDefClassPKey,bool>* >* derivationMap;
			std::map< CFGenKbToolSetPKey, std::map< std::string,ICFGenKbGenItemObj*>* >* toolSetRuleMap = NULL;
			const std::string* rootGenDir = NULL;
			ICFGenKbSchemaObj* genkbSchema = NULL;
			MssCFGenContextFactory* genContextFactory = NULL;
			const std::string* targetRuleName = NULL;
			MssCFGenContext* genContext = NULL;
			ICFGenKbRuleCartObj* internalRuleCart = NULL;

		public:
			static bool getDebugMode();
			static void enableDebugMode();
			static void disableDebugMode();
			virtual ICFGenKbGelCacheObj* getGelCache();
			virtual void setGelCache( ICFGenKbGelCacheObj* value );
			virtual std::string fixGenDefName( const std::string& rawName ) = 0;
			virtual void bootstrapDefClasses() = 0;
			virtual void bootstrapFirst() = 0;
			virtual void bootstrapBindings() = 0;
			virtual void bootstrapIterators() = 0;
			virtual void bootstrapReferences() = 0;
			virtual MssCFGelCompiler* getGelCompiler();
			virtual const std::string& getAnyClassName() const;
			virtual ICFGenKbDefClassObj* bootstrapDefClass( const std::string& name, ICFGenKbDefClassObj* baseDefClass );
			virtual const std::string& getGeneratorName();
			virtual void libInitTools();
			virtual void libInitToolSets();
			virtual void libInitDerivationMap();
			static bool derivesFrom( ICFGenKbDefClassObj* obj, ICFGenKbDefClassObj* target );
			virtual void initToolSetRuleMap();
			virtual void initRuleMap( ICFGenKbToolSetObj* toolSet );
			virtual void init( const std::string& generatingBuild, ICFGenKbSchemaObj* argCFGenKbSchema, ICFGenKbTenantObj* argInternalTenant, const std::string& strRootGenDir );
			ICFGenKbDefClassTableObj* getDefClassTableObj();
			ICFGenKbGenBindTableObj* getGenBindTableObj();
			ICFGenKbGenFileTableObj* getGenFileTableObj();
			ICFGenKbGenItemTableObj* getGenItemTableObj();
			ICFGenKbGenIteratorTableObj* getGenIteratorTableObj();
			ICFGenKbGenReferenceTableObj* getGenReferenceTableObj();
			ICFGenKbGenRuleTableObj* getGenRuleTableObj();
			ICFGenKbGenTruncTableObj* getGenTruncTableObj();
			ICFGenKbRuleCartTableObj* getRuleCartTableObj();
			ICFGenKbRuleTypeTableObj* getRuleTypeTableObj();
			ICFGenKbToolTableObj* getToolTableObj();
			ICFGenKbToolSetTableObj* getToolSetTableObj();

			std::chrono::system_clock::time_point* GenTimestamp = NULL;
			std::string* GenTimestampString = NULL;

			static long GenNextSerializableUID;

			virtual cflib::ICFLibMessageLog* getLog();
			virtual void setLog( cflib::ICFLibMessageLog* value );
			virtual MssCFGenContext* getGenContext();
			virtual void setGenContext( MssCFGenContext* value );
			virtual const std::string& getRootGenDir();
			virtual ICFGenKbSchemaObj* getCFGenKbSchema();

			MssCFEngine();
			virtual ~MssCFEngine();

			virtual MssCFGenContextFactory* getGenContextFactory();
			virtual void setGenContextFactory( MssCFGenContextFactory* value );
			virtual const std::string& getTargetRuleName();
			virtual void setTargetRuleName( const std::string& value );
			virtual ICFGenKbRuleCartObj* getInternalRuleCart();

			virtual ICFGenKbGenFileObj* defineFile(
				const std::string& definedNear,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				const std::string& expansionBody,
				const std::string& generateOnce,
				const std::string& sourceBundle,
				const std::string& moduleName,
				const std::string& basePackageName,
				const std::string& subPackageName,
				const std::string& expansionClassName,
				const std::string& expansionKeyName,
				const std::string& expansionFileName );

			virtual ICFGenKbGenRuleObj* defineRule(
				const std::string& definedNear,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				const std::string& expansionBody );

			virtual ICFGenKbGenTruncObj* defineTrunc(
				const std::string& definedNear,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName,
				const std::string& expansionBody,
				int truncAt );

			virtual const std::string& getGeneratorVersion();
			virtual long getNextGenSerializableUID();
			virtual std::string getNextGenSerializableUIDString();
			virtual std::string& getGenTimestampString();
			virtual const std::string& getLinkName();
			virtual const std::string& getLinkVersion();

			virtual void logMessage( const std::string& msg );
			virtual void logMessage( const std::string& msg, std::exception& e );

		private:

			virtual void libInitRuleTypes();

			/**
			 *	Initialize the rule type, toolset, scope class, genclass, and item name
			 *	of a generation item.
			 */
		protected:

			virtual void initGenItem(
				CFGenKbGenItemEditObj* genItem,
				MssCFRuleTypeObj* ruleType,
				const std::string& toolsetName,
				const std::string& scopeDefClassName,
				const std::string& genDefClassName,
				const std::string& itemName );

		public:

			virtual ICFGenKbToolObj* defineTool( const std::string& toolName );
			virtual ICFGenKbToolSetObj* defineToolSet( const std::string& toolSetName );

			/**
			 *	Find an expansion item in the engine based on the generation context
			 *	and an item name.
			 *
			 *	Finding the proper expansion item can be CPU intensive as I have
			 *	not tuned it by implementing any form of hashing or BTree keys.
			 *	When I have time...
			 *
			 *	Generally, the approach is to start with the classes of the scope
			 *	and generation definitions of the current context as the search
			 *	keys.  The initial toolset is that of the context.
			 *
			 *	We gradually search using the superclasses of the generation object,
			 *	the superclasses of the scope object, and by reducing the detail
			 *	level of the toolset.  If no match is found, $itemName$ is
			 *	eventually returned.
			 */
			virtual ICFGenKbGenItemObj* findContextItem( MssCFGenContext* genContext, const std::string& itemName );

			/**
			 *	Generate all source code for the definition.
			 */
			virtual void generate(
				const std::string& generatingBuild,
				const std::string& rootGenDir,
				cflib::ICFLibAnyObj* anyDef,
				const std::vector<std::string>& toolsDesired,
				const std::string& initialRuleName );
	};
}
