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

#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>

#include <msscf/MssCFGelCompiler.hpp>
#include <msscf/MssCFDefClassObj.hpp>
#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>
#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>
#include <msscf/MssCFGenRuleObj.hpp>
#include <msscf/MssCFGenTruncObj.hpp>
#include <msscf/MssCFRuleCartObj.hpp>
#include <msscf/MssCFRuleTypeObj.hpp>
#include <msscf/MssCFToolObj.hpp>
#include <msscf/MssCFToolSetObj.hpp>

#include <msscf/MssCFDefClassTableObj.hpp>
#include <msscf/MssCFGenBindTableObj.hpp>
#include <msscf/MssCFGenItemTableObj.hpp>
#include <msscf/MssCFGenIteratorTableObj.hpp>
#include <msscf/MssCFGenFileTableObj.hpp>
#include <msscf/MssCFGenReferenceTableObj.hpp>
#include <msscf/MssCFGenRuleTableObj.hpp>
#include <msscf/MssCFGenTruncTableObj.hpp>
#include <msscf/MssCFRuleCartTableObj.hpp>
#include <msscf/MssCFRuleTypeTableObj.hpp>
#include <msscf/MssCFToolTableObj.hpp>
#include <msscf/MssCFToolSetTableObj.hpp>

namespace std {

	bool MssCFEngine_compareProbeOrder( cfcore::ICFGenKbGenItemObj* lhs, cfcore::ICFGenKbGenItemObj* rhs ) {
		cfcore::ICFGenKbDefClassObj* lhsScope = lhs->getOptionalLookupScopeDef();
		cfcore::ICFGenKbDefClassObj* rhsScope = rhs->getOptionalLookupScopeDef();
		cfcore::ICFGenKbDefClassObj* lhsGenDef;
		cfcore::ICFGenKbDefClassObj* rhsGenDef;
		if( lhsScope == rhsScope ) {
			lhsGenDef = lhs->getRequiredLookupGenDef();
			rhsGenDef = rhs->getRequiredLookupGenDef();
			if( lhsGenDef == rhsGenDef ) {
				return( true );
			}
			else if( cfcore::MssCFEngine::derivesFrom( lhsGenDef, rhsGenDef ) ) {
				return( true );
			}
			else if( cfcore::MssCFEngine::derivesFrom( rhsGenDef, lhsGenDef ) ) {
				return( false );
			}
			else {
				return( true );
			}
		}
		else if( lhsScope == NULL ) {
			return( true );
		}
		else if( rhsScope == NULL ) {
			return( false );
		}
		else {
			if( cfcore::MssCFEngine::derivesFrom( lhsScope, rhsScope ) ) {
				return( true );
			}
			else if( cfcore::MssCFEngine::derivesFrom( rhsScope, lhsScope ) ) {
				return( false );
			}
			else {
				lhsGenDef = lhs->getRequiredLookupGenDef();
				rhsGenDef = rhs->getRequiredLookupGenDef();
				if( lhsGenDef == rhsGenDef ) {
					return( true );
				}
				else if( cfcore::MssCFEngine::derivesFrom( lhsGenDef, rhsGenDef ) ) {
					return( true );
				}
				else if( cfcore::MssCFEngine::derivesFrom( rhsGenDef, lhsGenDef ) ) {
					return( false );
				}
				else {
					return( true );
				}
			}
		}
	}
}

namespace cfcore {

	const std::string MssCFEngine::LinkName( "MssCFEngine" );
	const std::string MssCFEngine::LinkVersion( "2.13.11189" );

	const std::string MssCFEngine::GeneratorName( "MssCFEngine" );
	const std::string MssCFEngine::GeneratorVersion( LinkVersion );

	const std::string MssCFEngine::S_Any( "any" );
	const std::string MssCFEngine::S_Object( "Object" );
	const std::string MssCFEngine::S_Asterisk( "*" );
	const std::string MssCFEngine::S_GenContext( "genContext" );
	const std::string MssCFEngine::S_ScopeClass( "scopeClass" );

	bool MssCFEngine::debugMode = false;

	long MssCFEngine::GenNextSerializableUID = 0L;

	std::map< CFGenKbDefClassPKey, std::map< CFGenKbDefClassPKey,bool>* >* MssCFEngine::derivationMap = NULL;

	ICFGenKbGelCacheObj* MssCFEngine::getGelCache() {
		static const std::string S_ProcName( "getGelCache" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbGelCacheObj* cacheObj = NULL;
		ICFGenKbGelCacheEditObj* cacheEdit = NULL;
		try {
			if( gelCache == NULL ) {
				cacheObj = getGelCacheTableObj()->newInstance();
				cacheEdit = dynamic_cast<ICFGenKbGelCacheEditObj*>( cacheObj->beginEdit() );
				cacheEdit->setRequiredOwnerTenant( getSecTenant() );
				gelCache = dynamic_cast<ICFGenKbGelCacheObj*>( cacheEdit->create() );
				cacheEdit = NULL;
				cacheObj = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( cacheEdit != NULL ) {
			cacheEdit->endEdit();
			cacheEdit = NULL;
		}

		if( cacheObj != NULL ) {
			if( cacheObj->getIsNew() ) {
				delete cacheObj;
			}
			cacheObj = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( gelCache );
	}

	void MssCFEngine::setGelCache( ICFGenKbGelCacheObj* value ) {
		if( gelCache != value ) {
			if( gelCache != NULL ) {
				delete gelCache;
				gelCache = NULL;
			}
			gelCache = value;
		}
	}

	bool MssCFEngine::getDebugMode() {
		return( debugMode );
	}

	void MssCFEngine::enableDebugMode() {
		debugMode = true;
	}

	void MssCFEngine::disableDebugMode() {
		debugMode = false;
	}

	MssCFGelCompiler* MssCFEngine::getGelCompiler() {
		if( gelCompiler == NULL ) {
			gelCompiler = new MssCFGelCompiler( this );
		}
		return( gelCompiler );
	}

	const std::string& MssCFEngine::getAnyClassName() const {
		return( S_Object );
	}

	ICFGenKbDefClassObj* MssCFEngine::bootstrapDefClass( const std::string& name, ICFGenKbDefClassObj* baseDefClass ) {
		static const std::string S_ProcName( "bootstrapDefClass" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbDefClassTableObj* tblDefClass = getDefClassTableObj();
		ICFGenKbDefClassObj* defClass = NULL;
		ICFGenKbDefClassEditObj* editDefClass = NULL;
		try {
			defClass = tblDefClass->readDefClassByNameIdx( name );
			if( defClass == NULL ) {
				defClass = tblDefClass->newInstance();
				editDefClass = defClass->beginEdit();
				editDefClass->setRequiredName( name );
				editDefClass->setOptionalParentBaseDefClass( baseDefClass );
				defClass = editDefClass->create();
				editDefClass = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editDefClass != NULL ) {
			editDefClass->endEdit();
			editDefClass = NULL;
		}

		if( ( defClass != NULL ) && defClass->getIsNew() ) {
			delete defClass;
			defClass = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( defClass );
	}

	const std::string& MssCFEngine::getGeneratorName() {
		return( GeneratorName );
	}

	void MssCFEngine::libInitTools() {
		defineTool( S_Any );
	}

	void MssCFEngine::libInitToolSets() {
		defineToolSet( S_Any );
	}

	void MssCFEngine::libInitDerivationMap() {
		if( derivationMap != NULL ) {
			return;
		}

		derivationMap = new std::map< CFGenKbDefClassPKey, std::map< CFGenKbDefClassPKey,bool>* >();

		ICFGenKbDefClassObj* defClass = NULL;
		ICFGenKbDefClassObj* inhClass = NULL;
		std::map<CFGenKbDefClassPKey,bool>* subMap = NULL;
		std::vector<ICFGenKbDefClassObj*> defClassList = getDefClassTableObj()->readAllDefClass();
		for( auto defClassIter = defClassList.begin(); defClassIter != defClassList.end(); defClassIter ++ ) {
			defClass = *defClassIter;
			subMap = new std::map<CFGenKbDefClassPKey,bool>();
			derivationMap->insert( std::map< CFGenKbDefClassPKey, std::map< CFGenKbDefClassPKey, bool >* >::value_type( *(defClass->getPKey()), subMap ) );
			inhClass = defClass;
			while( inhClass != NULL ) {
				subMap->insert( std::map< CFGenKbDefClassPKey, bool >::value_type( *(inhClass->getPKey()), true ) );
				inhClass = inhClass->getOptionalParentBaseDefClass();
			}
		}
	}

	bool MssCFEngine::derivesFrom( ICFGenKbDefClassObj* obj, ICFGenKbDefClassObj* target ) {
		// AnyObj is always inherited
		if( ( target == NULL ) || ( target->getRequiredName() == "Object" ) ) {
			return( true );
		}

		// If obj and target match, then derivation is obvious
		if( obj == target ) {
			return( true );
		}

		bool entry;
		std::map< CFGenKbDefClassPKey, bool>* subMap = NULL;
		auto foundSubMap = derivationMap->find( *(obj->getPKey()) );
		if( foundSubMap == derivationMap->end() ) {
			static const std::string S_Msg( "MssCFEngine.derivesFrom() Could not find subMap for DefClass" );
			throw new cflib::CFLibRuntimeException( S_Msg + obj->getRequiredName() );
		}
		subMap = foundSubMap->second;

		auto match = subMap->find( *(target->getPKey()) );
		if( match != subMap->end() ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	void MssCFEngine::initToolSetRuleMap() {
		if( toolSetRuleMap != NULL ) {
			return;
		}

		libInitDerivationMap();

		getLog()->message( "Initializing tool set rule map" );

		toolSetRuleMap = new std::map< CFGenKbToolSetPKey, std::map< std::string, ICFGenKbGenItemObj*>* >();

		ICFGenKbToolSetObj* toolSet;
		std::vector<ICFGenKbToolSetObj*> tools = getToolSetTableObj()->readAllToolSet();
		auto iterTools = tools.begin();
		while( iterTools != tools.end() ) {
			toolSet = *iterTools;
			initRuleMap( toolSet );
			iterTools ++;
		}

		getLog()->message( "Tool set rule map initialized" );
	}

	void MssCFEngine::initRuleMap( ICFGenKbToolSetObj* toolSet ) {
		static const std::string S_Initializing( "Initializing rule map for tool set " );

		auto matchSubMap = toolSetRuleMap->find( *( toolSet->getPKey() ) );
		if( matchSubMap != toolSetRuleMap->end() ) {
			return;
		}

		getLog()->message( S_Initializing + toolSet->getRequiredName() );

		// Build a list of the rules in the set grouped by name
		ICFGenKbGenItemObj* genItem;
		std::map<std::string,std::vector<ICFGenKbGenItemObj*>*>* rulesByName = new std::map<std::string,std::vector<ICFGenKbGenItemObj*>*>();
		std::vector<ICFGenKbGenItemObj*>* cltn = NULL;
		std::vector<ICFGenKbGenItemObj*> genItemsByToolSet = getGenItemTableObj()->readGenItemByToolSetIdx( toolSet->getRequiredId() );
		std::vector<ICFGenKbGenItemObj*>::iterator genItemIter = genItemsByToolSet.begin();
		while( genItemIter != genItemsByToolSet.end() ) {
			genItem = *genItemIter;
			auto searchRulesByName = rulesByName->find( genItem->getRequiredName() );
			if( searchRulesByName == rulesByName->end() ) {
				cltn = new std::vector<ICFGenKbGenItemObj*>();
				rulesByName->insert( std::map<std::string,std::vector<ICFGenKbGenItemObj*>*>::value_type( genItem->getRequiredName(), cltn ) );
			}
			else {
				cltn = searchRulesByName->second;
			}
			cltn->push_back( genItem );
			genItemIter ++;
		}

		// Instantiate a subMap by name to hold the head entries of the sorted lists below
		std::map<std::string,ICFGenKbGenItemObj*>* subMap = new std::map<std::string,ICFGenKbGenItemObj*>();

		// Register the subMap with the tool set's rule map
		toolSetRuleMap->insert( std::map< CFGenKbToolSetPKey, std::map< std::string,ICFGenKbGenItemObj*>* >::value_type( *(toolSet->getPKey()), subMap ) );

		// For each name, build an array of the entries and sort based on probe sequence
		// Iterate through the probe-sequenced array and establish the linkages
		// Add the head of the linkage list to the subMap
		size_t idx;
		ICFGenKbGenItemObj* probeNext;
		ICFGenKbGenItemEditObj* edit;
		std::map<std::string,std::vector<ICFGenKbGenItemObj*>*>::iterator cltnIter = rulesByName->begin();
		while( cltnIter != rulesByName->end() ) {

			cltn = cltnIter->second;

			std::stable_sort( cltn->begin(), cltn->end(), std::MssCFEngine_compareProbeOrder );

			genItemIter = cltn->begin();
			while( genItemIter != cltn->end() ) {
				genItem = *genItemIter;
				genItemIter ++;
				if( genItemIter != cltn->end() ) {
					probeNext = *genItemIter;
				}
				else {
					probeNext = NULL;
				}
				genItemIter --;
				edit = genItem->beginEdit();
				edit->setOptionalLookupProbe( probeNext );
				edit = edit->update();
				genItemIter ++;
			}

			genItem = *( cltn->begin() );

			subMap->insert( std::map<std::string,ICFGenKbGenItemObj*>::value_type( genItem->getRequiredName(), genItem ) );

			cltnIter ++;
		}

		if( rulesByName != NULL ) {
			for( auto iterRulesByName = rulesByName->begin(); iterRulesByName != rulesByName->end(); iterRulesByName ++ ) {
				if( iterRulesByName->second != NULL ) {
					delete iterRulesByName->second;
					iterRulesByName->second = NULL;
				}
			}
			delete rulesByName;
			rulesByName = NULL;
		}
	}

	void MssCFEngine::init( const std::string& generatingBuild, ICFGenKbSchemaObj* argCFGenKbSchema, ICFGenKbTenantObj* argInternalTenant, const std::string& strRootGenDir ) {
		genkbSchema = argCFGenKbSchema;
		setBackingStore( genkbSchema->getBackingStore() );
		internalTenant = argInternalTenant;

		if( rootGenDir != NULL ) {
			if( *rootGenDir != strRootGenDir ) {
				delete rootGenDir;
				rootGenDir = new std::string( strRootGenDir );
			}
		}
		else {
			rootGenDir = new std::string( strRootGenDir );
		}

	//	Construct the initial contents of the knowledge base,
	//	including the tools, toolsets, and definition class names.

		bootstrapDefClasses();
		libInitRuleTypes();
		libInitTools();
		libInitToolSets();
		genContext = NULL;

	//	Bootstrap the engine internals first

		bootstrapFirst();
		bootstrapBindings();
		bootstrapIterators();
		bootstrapReferences();
	}

	ICFGenKbDefClassTableObj* MssCFEngine::getDefClassTableObj() {
		if( defClassTableObj == NULL ) {
			defClassTableObj = new MssCFDefClassTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( defClassTableObj );
	}

	ICFGenKbGenBindTableObj* MssCFEngine::getGenBindTableObj() {
		if( genBindTableObj == NULL ) {
			genBindTableObj = new MssCFGenBindTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genBindTableObj );
	}

	ICFGenKbGenFileTableObj* MssCFEngine::getGenFileTableObj() {
		if( genFileTableObj == NULL ) {
			genFileTableObj = new MssCFGenFileTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genFileTableObj );
	}

	ICFGenKbGenItemTableObj* MssCFEngine::getGenItemTableObj() {
		if( genItemTableObj == NULL ) {
			genItemTableObj = new MssCFGenItemTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genItemTableObj );
	}

	ICFGenKbGenIteratorTableObj* MssCFEngine::getGenIteratorTableObj() {
		if( genIteratorTableObj == NULL ) {
			genIteratorTableObj = new MssCFGenIteratorTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genIteratorTableObj );
	}

	ICFGenKbGenReferenceTableObj* MssCFEngine::getGenReferenceTableObj() {
		if( genReferenceTableObj == NULL ) {
			genReferenceTableObj = new MssCFGenReferenceTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genReferenceTableObj );
	}

	ICFGenKbGenRuleTableObj* MssCFEngine::getGenRuleTableObj() {
		if( genRuleTableObj == NULL ) {
			genRuleTableObj = new MssCFGenRuleTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genRuleTableObj );
	}

	ICFGenKbGenTruncTableObj* MssCFEngine::getGenTruncTableObj() {
		if( genTruncTableObj == NULL ) {
			genTruncTableObj = new MssCFGenTruncTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( genTruncTableObj );
	}

	ICFGenKbRuleCartTableObj* MssCFEngine::getRuleCartTableObj() {
		if( ruleCartTableObj == NULL ) {
			ruleCartTableObj = new MssCFRuleCartTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( ruleCartTableObj );
	}

	ICFGenKbRuleTypeTableObj* MssCFEngine::getRuleTypeTableObj() {
		if( ruleTypeTableObj == NULL ) {
			ruleTypeTableObj = new MssCFRuleTypeTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( ruleTypeTableObj );
	}

	ICFGenKbToolTableObj* MssCFEngine::getToolTableObj() {
		if( toolTableObj == NULL ) {
			toolTableObj = new MssCFToolTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( toolTableObj );
	}

	ICFGenKbToolSetTableObj* MssCFEngine::getToolSetTableObj() {
		if( toolSetTableObj == NULL ) {
			toolSetTableObj = new MssCFToolSetTableObj( dynamic_cast<MssCFEngine*>( this ) );
		}
		return( toolSetTableObj );
	}

	cflib::ICFLibMessageLog* MssCFEngine::getLog() {
		return( log );
	}

	void MssCFEngine::setLog( cflib::ICFLibMessageLog* value ) {
		log = value;
		getGelCompiler()->setLog( value );
	}

	MssCFGenContext* MssCFEngine::getGenContext() {
		return( genContext );
	}

	void MssCFEngine::setGenContext( MssCFGenContext* value ) {
		if( genContext == value ) {
			return;
		}
		while( genContext != NULL ) {
			genContext = genContext->release();
		}
		genContext = value;
	}

	const std::string& MssCFEngine::getRootGenDir() {
		static const std::string S_ProcName( "getRootGenDir" );
		static const std::string S_RootGenDir( "rootGenDir" );
		if( rootGenDir == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_RootGenDir );
		}
		return( *rootGenDir );
	}

	ICFGenKbSchemaObj* MssCFEngine::getCFGenKbSchema() {
		return( genkbSchema );
	}

	MssCFEngine::MssCFEngine()
	: CFGenKbSchemaObj()
	{
		if( defClassTableObj != NULL ) {
			delete defClassTableObj;
			defClassTableObj = NULL;
		}
		if( genBindTableObj != NULL ) {
			delete genBindTableObj;
			genBindTableObj = NULL;
		}
		if( genFileTableObj != NULL ) {
			delete genFileTableObj;
			genFileTableObj = NULL;
		}
		if( genItemTableObj != NULL ) {
			delete genItemTableObj;
			genItemTableObj = NULL;
		}
		if( genIteratorTableObj != NULL ) {
			delete genIteratorTableObj;
			genIteratorTableObj = NULL;
		}
		if( genReferenceTableObj != NULL ) {
			delete genReferenceTableObj;
			genReferenceTableObj = NULL;
		}
		if( genRuleTableObj != NULL ) {
			delete genRuleTableObj;
			genRuleTableObj = NULL;
		}
		if( genTruncTableObj != NULL ) {
			delete genTruncTableObj;
			genTruncTableObj = NULL;
		}
		if( ruleCartTableObj != NULL ) {
			delete ruleCartTableObj;
			ruleCartTableObj = NULL;
		}
		if( ruleTypeTableObj != NULL ) {
			delete ruleTypeTableObj;
			ruleTypeTableObj = NULL;
		}
		if( toolTableObj != NULL ) {
			delete toolTableObj;
			toolTableObj = NULL;
		}
		if( toolSetTableObj != NULL ) {
			delete toolSetTableObj;
			toolSetTableObj = NULL;
		}
	}

	MssCFEngine::~MssCFEngine() {
		while( genContext != NULL ) {
			genContext = genContext->release();
		}

		if( gelCompiler != NULL ) {
			delete gelCompiler;
			gelCompiler = NULL;
		}

		if( genContextFactory != NULL ) {
			delete genContextFactory;
			genContextFactory = NULL;
		}

		if( derivationMap != NULL ) {
			std::map<CFGenKbDefClassPKey,bool>* submap = NULL;
			auto iterDerivationMap = derivationMap->begin();
			auto endDerivationMap = derivationMap->end();
			while( iterDerivationMap != endDerivationMap ) {
				submap = iterDerivationMap->second;
				if( submap != NULL ) {
					iterDerivationMap->second = NULL;
					delete submap;
					submap = NULL;
				}
				iterDerivationMap ++;
			}
			delete derivationMap;
			derivationMap = NULL;
		}

		if( toolSetRuleMap != NULL ) {
			std::map< std::string,ICFGenKbGenItemObj*>* submap = NULL;
			auto iterToolSetRuleMap = toolSetRuleMap->begin();
			auto endToolSetRuleMap = toolSetRuleMap->end();
			while( iterToolSetRuleMap != endToolSetRuleMap ) {
				submap = iterToolSetRuleMap->second;
				if( submap != NULL ) {
					iterToolSetRuleMap->second = NULL;
					delete submap;
					submap = NULL;
				}
				iterToolSetRuleMap ++;
			}
			delete toolSetRuleMap;
			toolSetRuleMap = NULL;
		}

		if( GenTimestamp != NULL ) {
			delete GenTimestamp;
			GenTimestamp = NULL;
		}

		if( GenTimestampString != NULL ) {
			delete GenTimestampString;
			GenTimestampString = NULL;
		}

		if( targetRuleName != NULL ) {
			delete targetRuleName;
			targetRuleName = NULL;
		}

		if( rootGenDir != NULL ) {
			delete rootGenDir;
			rootGenDir = NULL;
		}
	}

	MssCFGenContextFactory* MssCFEngine::getGenContextFactory() {
		if( genContextFactory == NULL ) {
			genContextFactory = new MssCFGenContextFactory();
		}
		return( genContextFactory );
	}

	void MssCFEngine::setGenContextFactory( MssCFGenContextFactory* value ) {
		genContextFactory = value;
	}

	const std::string& MssCFEngine::getTargetRuleName() {
		static const std::string S_ProcName( "getTargetRuleName" );
		static const std::string S_TargetRuleName( "targetRuleName" );
		if( targetRuleName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_TargetRuleName );
		}
		return( *targetRuleName );
	}

	void MssCFEngine::setTargetRuleName( const std::string& value ) {
		if( targetRuleName != NULL ) {
			if( *targetRuleName != value ) {
				delete targetRuleName;
				targetRuleName = new std::string( value );
			}
		}
		else {
			targetRuleName = new std::string( value );
		}
	}

	ICFGenKbRuleCartObj* MssCFEngine::getInternalRuleCart() {
		if( internalRuleCart == NULL ) {
			internalRuleCart = getRuleCartTableObj()->newInstance();
			ICFGenKbRuleCartEditObj* editRuleCart = internalRuleCart->beginEdit();
			editRuleCart->setRequiredContainerTenant( internalTenant );
			editRuleCart->setRequiredName( "Internal" );
			internalRuleCart = editRuleCart->create();
		}
		return( internalRuleCart );
	}

	ICFGenKbGenFileObj* MssCFEngine::defineFile(
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
		const std::string& expansionFileName )
	{
		static const std::string S_ProcName( "defineFile" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbRuleCartObj* ruleCart = NULL;
		ICFGenKbGenFileObj* genFile = NULL;
		ICFGenKbGenFileEditObj* editFile = NULL;
		ICFGenKbDefClassObj* scopeDef = NULL;
		ICFGenKbDefClassObj* genDef = NULL;
		ICFGenKbGenFileObj* created = NULL;
		MssCFGelCompiler* compiler = NULL;

		try {
			ruleCart = getInternalRuleCart();
			genFile = getGenFileTableObj()->newInstance();
			editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
			editFile->setRequiredLookupToolSet( getToolSetTableObj()->readToolSetByNameIdx( toolsetName ) );
			editFile->setRequiredDefinedNear( definedNear );
			if( scopeDefClassName.length() > 0 ) {
				std::string useName;
				if( scopeDefClassName == S_Asterisk ) {
					useName = getAnyClassName();
				}
				else {
					useName = fixGenDefName( scopeDefClassName );
				}
				scopeDef = getDefClassTableObj()->readDefClassByNameIdx( useName );
				if( scopeDef == NULL ) {
					static const std::string S_Msg( "Could not resolve ScopeDef " );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useName );
				}
				editFile->setOptionalLookupScopeDef( scopeDef );
			}
			else {
				editFile->setOptionalLookupScopeDef( NULL );
			}
			editFile->setRequiredContainerCartridge( ruleCart );
			editFile->setRequiredLookupRuleType( getRuleTypeTableObj()->readRuleTypeByNameIdx( "File" ) );

			std::string useGenDefClassName;
			if( genDefClassName == S_Asterisk ) {
				useGenDefClassName = getAnyClassName();
			}
			else {
				useGenDefClassName = fixGenDefName( genDefClassName );
			}
			genDef = getDefClassTableObj()->readDefClassByNameIdx( useGenDefClassName );
			if( genDef == NULL ) {
				static const std::string S_Msg( "Could not resolve GenDef " );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useGenDefClassName );
			}
			editFile->setRequiredLookupGenDef( genDef );
			editFile->setRequiredName( itemName );
			editFile->setRequiredBody( expansionBody );
			if( generateOnce.length() > 0 ) {
				editFile->setOptionalGenerateOnceValue( generateOnce );
			}
			else {
				editFile->setOptionalGenerateOnceValue( cflib::CFLib::S_FALSE );
			}
			if( sourceBundle.length() > 0 ) {
				editFile->setOptionalSourceBundleValue( sourceBundle );
			}
			else {
				editFile->setOptionalSourceBundleNull();
			}
			if( moduleName.length() > 0 ) {
				editFile->setOptionalModuleNameValue( moduleName );
			}
			else {
				editFile->setOptionalModuleNameNull();
			}
			if( basePackageName.length() > 0 ) {
				editFile->setOptionalBasePackageNameValue( basePackageName );
			}
			else {
				editFile->setOptionalBasePackageNameNull();
			}
			if( subPackageName.length() > 0 ) {
				editFile->setOptionalSubPackageNameValue( subPackageName );
			}
			else {
				editFile->setOptionalSubPackageNameNull();
			}
			if( expansionClassName.length() > 0 ) {
				editFile->setOptionalExpansionClassNameValue( expansionClassName );
			}
			else {
				editFile->setOptionalExpansionClassNameNull();
			}
			if( expansionKeyName.length() > 0 ) {
				editFile->setOptionalExpansionKeyNameValue( expansionKeyName );
			}
			else {
				editFile->setOptionalExpansionKeyNameNull();
			}
			if( expansionFileName.length() > 0 ) {
				editFile->setOptionalExpansionFileNameValue( expansionFileName );
			}
			else {
				editFile->setOptionalExpansionFileNameNull();
			}
			created = dynamic_cast<ICFGenKbGenFileObj*>( editFile->create() );
			editFile = NULL;
			genFile = NULL;

			compiler = getGelCompiler();
			CFGenKbGenFileObj::getBodyBin( compiler, created );
			CFGenKbGenFileObj::getSrcBundleBin( compiler, created );
			CFGenKbGenFileObj::getModuleNameBin( compiler, created );
			CFGenKbGenFileObj::getBasePackageBin( compiler, created );
			CFGenKbGenFileObj::getSubPackageBin( compiler, created );
			CFGenKbGenFileObj::getExpClassBin( compiler, created );
			CFGenKbGenFileObj::getExpKeyNameBin( compiler, created );
			CFGenKbGenFileObj::getExpFileNameBin( compiler, created );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editFile != NULL ) {
			editFile->endEdit();
			editFile = NULL;
		}

		if( genFile != NULL ) {
			if( genFile->getIsNew() ) {
				delete genFile;
			}
			genFile = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( created );
	}

	ICFGenKbGenRuleObj* MssCFEngine::defineRule(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody )
	{
		static const std::string S_ProcName( "defineRule" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbRuleCartObj* ruleCart = NULL;
		ICFGenKbGenRuleObj* genRule = NULL;
		ICFGenKbGenRuleEditObj* editRule = NULL;
		ICFGenKbDefClassObj* scopeDef = NULL;
		ICFGenKbDefClassObj* genDef = NULL;
		ICFGenKbGenRuleObj* created = NULL;
		MssCFGelCompiler* compiler = NULL;
		try {
			ruleCart = getInternalRuleCart();
			genRule = getGenRuleTableObj()->newInstance();
			editRule = dynamic_cast<ICFGenKbGenRuleEditObj*>( genRule->beginEdit() );
			editRule->setRequiredDefinedNear( definedNear );
			editRule->setRequiredLookupToolSet( getToolSetTableObj()->readToolSetByNameIdx( toolsetName ) );
			if( scopeDefClassName.length() > 0 ) {
				std::string useName;
				if( scopeDefClassName == S_Asterisk ) {
					useName = getAnyClassName();
				}
				else {
					useName = fixGenDefName( scopeDefClassName );
				}
				scopeDef = getDefClassTableObj()->readDefClassByNameIdx( useName );
				if( scopeDef == NULL ) {
					static const std::string S_Msg( "Could not resolve ScopeDef " );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useName );
				}
				editRule->setOptionalLookupScopeDef( scopeDef );
			}
			else {
				editRule->setOptionalLookupScopeDef( NULL );
			}
			editRule->setRequiredContainerCartridge( ruleCart );
			editRule->setRequiredLookupRuleType( getRuleTypeTableObj()->readRuleTypeByNameIdx("Rule") );
			std::string useGenDefClassName;
			if( genDefClassName == S_Asterisk ) {
				useGenDefClassName = getAnyClassName();
			}
			else {
				useGenDefClassName = fixGenDefName( genDefClassName );
			}
			genDef = getDefClassTableObj()->readDefClassByNameIdx( useGenDefClassName );
			if( genDef == NULL ) {
				static const std::string S_Msg( "Could not resolve GenDef " );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useGenDefClassName );
			}
			editRule->setRequiredLookupGenDef( genDef );
			editRule->setRequiredName( itemName );
			editRule->setRequiredBody( expansionBody );
			created = dynamic_cast<ICFGenKbGenRuleObj*>( editRule->create() );
			editRule = NULL;
			genRule = NULL;

			compiler = getGelCompiler();
			CFGenKbGenRuleObj::getBodyBin( compiler, created );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editRule != NULL ) {
			editRule->endEdit();
			editRule = NULL;
		}

		if( genRule != NULL ) {
			if( genRule->getIsNew() ) {
				delete genRule;
			}
			genRule = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( created );
	}

	ICFGenKbGenTruncObj* MssCFEngine::defineTrunc(
		const std::string& definedNear,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName,
		const std::string& expansionBody,
		int truncAt )
	{
		static const std::string S_ProcName( "defineTrunc" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbRuleCartObj* ruleCart = NULL;
		ICFGenKbGenTruncObj* genTrunc = NULL;
		ICFGenKbGenTruncEditObj* editTrunc = NULL;
		ICFGenKbDefClassObj* scopeDef = NULL;
		ICFGenKbDefClassObj* genDef = NULL;
		ICFGenKbGenTruncObj* created = NULL;
		MssCFGelCompiler* compiler = NULL;

		try {
			ruleCart = getInternalRuleCart();
			genTrunc = getGenTruncTableObj()->newInstance();
			editTrunc = dynamic_cast<ICFGenKbGenTruncEditObj*>( genTrunc->beginEdit() );
			editTrunc->setRequiredDefinedNear( definedNear );
			editTrunc->setRequiredLookupToolSet( getToolSetTableObj()->readToolSetByNameIdx(toolsetName) );
			if( scopeDefClassName.length() > 0 ) {
				std::string useName;
				if( scopeDefClassName == S_Asterisk ) {
					useName = getAnyClassName();
				}
				else {
					useName = fixGenDefName( scopeDefClassName );
				}
				scopeDef = getDefClassTableObj()->readDefClassByNameIdx( useName );
				if( scopeDef == NULL ) {
					static const std::string S_Msg( "Could not resolve ScopeDef " );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useName );
				}
				editTrunc->setOptionalLookupScopeDef( scopeDef );
			}
			else {
				editTrunc->setOptionalLookupScopeDef( NULL );
			}
			editTrunc->setRequiredContainerCartridge( ruleCart );
			editTrunc->setRequiredLookupRuleType( getRuleTypeTableObj()->readRuleTypeByNameIdx( "Trunc" ) );
			std::string useGenDefClassName;
			if( genDefClassName == S_Asterisk ) {
				useGenDefClassName = getAnyClassName();
			}
			else {
				useGenDefClassName = fixGenDefName( genDefClassName );
			}
			genDef = getDefClassTableObj()->readDefClassByNameIdx( useGenDefClassName );
			if( genDef == NULL ) {
				static const std::string S_Msg( "Could not resolve GenDef " );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useGenDefClassName );
			}
			editTrunc->setRequiredLookupGenDef( genDef );
			editTrunc->setRequiredName( itemName );
			editTrunc->setRequiredBody( expansionBody );
			editTrunc->setRequiredTruncateAt( truncAt );
			created = dynamic_cast<ICFGenKbGenTruncObj*>( editTrunc->create() );

			compiler = getGelCompiler();
			CFGenKbGenTruncObj::getBodyBin( compiler, created );
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editTrunc != NULL ) {
			editTrunc->endEdit();
			editTrunc = NULL;
		}

		if( genTrunc != NULL ) {
			if( genTrunc->getIsNew() ) {
				delete genTrunc;
			}
			genTrunc = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( created );
	}

	const std::string& MssCFEngine::getGeneratorVersion() {
		return( GeneratorVersion );
	}

	long MssCFEngine::getNextGenSerializableUID() {
		if( GenNextSerializableUID <= 0L ) {
			getGenTimestampString();
		}
		long uid = GenNextSerializableUID++;
		return( uid );
	}

	std::string MssCFEngine::getNextGenSerializableUIDString() {
		long uid = getNextGenSerializableUID();
		std::string str = std::to_string( uid );
		return( str );
	}

	std::string& MssCFEngine::getGenTimestampString() {
		if( GenTimestamp == NULL ) {
			GenTimestamp = cflib::CFLib::getUTCTimestamp();
			if( GenTimestampString != NULL ) {
				delete GenTimestampString;
				GenTimestampString = NULL;
			}
			std::time_t time = std::chrono::system_clock::to_time_t( *GenTimestamp );
			std::tm utc = *std::localtime( &time );
			GenNextSerializableUID = // YYYYMMDDHHMI11063
				  ( ( utc.tm_year + 1900 ) * 11063110630000L)
				+ ( ( utc.tm_mon + 1) * 110631106300L)
				+ ( utc.tm_mday * 1106311063L)
				+ ( utc.tm_hour * 11063000L)
				+ ( utc.tm_sec * 110630L)
				+ 1L;
		}

		if( GenTimestampString == NULL ) {
			std::time_t time = std::chrono::system_clock::to_time_t( *GenTimestamp );
			std::tm utc = *std::localtime( &time );
			char strbuff[20] = {0};
			strftime( &strbuff[0], sizeof(strbuff), "%Y-%m-%dT%H:%M:%S", &utc );
			GenTimestampString = new std::string( strbuff );
		}

		return( *GenTimestampString );
	}

	const std::string& MssCFEngine::getLinkName() {
		return( LinkName );
	}

	const std::string& MssCFEngine::getLinkVersion() {
		return( LinkVersion );
	}

	void MssCFEngine::logMessage( const std::string& msg ) {
		static const std::string S_Newline( "\n" );
		std::cout << msg << S_Newline;
	}

	void MssCFEngine::logMessage( const std::string& msg, std::exception& e ) {
		const std::string S_ColonSpace( ": " );
		const std::string S_Newline( "\n" );
		std::string buff = msg + S_ColonSpace + e.what() + S_Newline;
		std::cout << buff;
	}

	void MssCFEngine::libInitRuleTypes() {
		ICFGenKbRuleTypeObj* ruleTypeBind = getRuleTypeTableObj()->newInstance();
		ICFGenKbRuleTypeEditObj* editRuleType = ruleTypeBind->beginEdit();
		editRuleType->setRequiredName( "Bind" );
		ruleTypeBind = editRuleType->create();

		ICFGenKbRuleTypeObj* ruleTypeIterator = getRuleTypeTableObj()->newInstance();
		editRuleType = ruleTypeIterator->beginEdit();
		editRuleType->setRequiredName( "Iterator" );
		ruleTypeIterator = editRuleType->create();

		ICFGenKbRuleTypeObj* ruleTypeReference = getRuleTypeTableObj()->newInstance();
		editRuleType = ruleTypeReference->beginEdit();
		editRuleType->setRequiredName( "Reference" );
		ruleTypeReference = editRuleType->create();

		ICFGenKbRuleTypeObj* ruleTypeRule = getRuleTypeTableObj()->newInstance();
		editRuleType = ruleTypeRule->beginEdit();
		editRuleType->setRequiredName( "Rule" );
		ruleTypeRule = editRuleType->create();

		ICFGenKbRuleTypeObj* ruleTypeFile = getRuleTypeTableObj()->newInstance();
		editRuleType = ruleTypeFile->beginEdit();
		editRuleType->setRequiredName( "File" );
		ruleTypeFile = editRuleType->create();

		ICFGenKbRuleTypeObj* ruleTypeTrunc = getRuleTypeTableObj()->newInstance();
		editRuleType = ruleTypeTrunc->beginEdit();
		editRuleType->setRequiredName( "Trunc" );
		ruleTypeTrunc = editRuleType->create();
	}

	void MssCFEngine::initGenItem(
		CFGenKbGenItemEditObj* genItem,
		MssCFRuleTypeObj* ruleType,
		const std::string& toolsetName,
		const std::string& scopeDefClassName,
		const std::string& genDefClassName,
		const std::string& itemName )
	{
		static const std::string S_ProcName( "initGenItem" );

		MssCFToolSetObj* toolset = NULL;
		MssCFDefClassObj* defclassScope = NULL;
		MssCFDefClassObj* defclassGenDef = NULL;

		toolset = dynamic_cast<MssCFToolSetObj*>( getToolSetTableObj()->readToolSetByNameIdx( toolsetName ) );
		if( toolset == NULL ) {
			static const std::string S_Msg( "Could not resolve toolset " );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + toolsetName );
		}

		ICFGenKbDefClassObj* scopeDef;
		if( scopeDefClassName.length() > 0 ) {
			std::string useName;
			if( scopeDefClassName == S_Asterisk ) {
				useName = getAnyClassName();
			}
			else {
				useName = fixGenDefName( scopeDefClassName );
			}
			ICFGenKbDefClassObj* scopeDef = getDefClassTableObj()->readDefClassByNameIdx( useName );
			if( scopeDef == NULL ) {
				static const std::string S_Msg( "Could not resolve ScopeDef " );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useName );
			}
		}
		else {
			scopeDef = NULL;
		}

		std::string useGenDefClassName;
		if( genDefClassName == S_Asterisk ) {
			useGenDefClassName = getAnyClassName();
		}
		else {
			useGenDefClassName = fixGenDefName( genDefClassName );
		}
		ICFGenKbDefClassObj* genDef = getDefClassTableObj()->readDefClassByNameIdx( useGenDefClassName );
		if( genDef == NULL ) {
			static const std::string S_Msg( "Could not resolve GenDef " );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + useGenDefClassName );
		}

		genItem->setRequiredLookupRuleType( dynamic_cast<ICFGenKbRuleTypeObj*>( ruleType ) );
		genItem->setRequiredLookupToolSet( dynamic_cast<ICFGenKbToolSetObj*>( toolset ) );
		genItem->setOptionalLookupScopeDef( scopeDef );
		genItem->setRequiredLookupGenDef( genDef );
		genItem->setRequiredName( itemName );
	}

	ICFGenKbToolObj* MssCFEngine::defineTool( const std::string& toolName ) {
		static const std::string S_ProcName( "defineTool" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbToolObj* tool = NULL;
		ICFGenKbToolEditObj* editTool = NULL;
		try {
			tool = getToolTableObj()->readToolByNameIdx( toolName );
			if( tool == NULL ) {
				tool = getToolTableObj()->newInstance();
				editTool = tool->beginEdit();
				editTool->setRequiredName( toolName );
				tool = editTool->create();
				editTool = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editTool != NULL ) {
			editTool->endEdit();
			editTool = NULL;
			if( tool != NULL ) {
				if( tool->getIsNew() ) {
					delete tool;
					tool = NULL;
				}
			}
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( tool );
	}

	ICFGenKbToolSetObj* MssCFEngine::defineToolSet( const std::string& toolSetName ) {
		static const std::string S_ProcName( "defineToolSet" );
		CFLIB_EXCEPTION_DECLINFO
		ICFGenKbToolSetObj* toolSet = NULL;
		ICFGenKbToolSetEditObj* editToolSet = NULL;
		try {
			toolSet = getToolSetTableObj()->readToolSetByNameIdx( toolSetName );
			if( toolSet == NULL ) {
				toolSet = getToolSetTableObj()->newInstance();
				editToolSet = toolSet->beginEdit();
				editToolSet->setRequiredName( toolSetName );

	            std::string remainder;
	            std::string toolname;
	            std::string::size_type idxPlus = toolSetName.find('+');
	            if( idxPlus > 0 ) {
	                toolname = toolSetName.substr(0, idxPlus);
	                remainder = toolSetName.substr(idxPlus + 1);
	            }
	            else {
	                toolname = toolSetName;
	                remainder = "";
	            }
	            editToolSet->setRequiredLookupTool0( defineTool(toolname) );
		
	            if( remainder.length() > 0 ) {
	                idxPlus = remainder.find('+');
	                if( idxPlus > 0 ) {
	                    toolname = remainder.substr(0, idxPlus);
	                    remainder = remainder.substr(idxPlus + 1);
	                }
	                else {
	                    toolname = remainder;
	                    remainder = "";
	                }
	                editToolSet->setOptionalLookupTool1( defineTool(toolname) );
		
	                if( remainder.length() > 0 ) {
	                    idxPlus = remainder.find('+');
	                    if( idxPlus != std::string::npos ) {
	                        toolname = remainder.substr(0, idxPlus);
	                        remainder = remainder.substr(idxPlus + 1);
	                    }
	                    else {
	                        toolname = remainder;
	                        remainder = "";
	                    }
	                    editToolSet->setOptionalLookupTool2( defineTool(toolname) );
		
	                    if( remainder.length() > 0 ) {
	                        idxPlus = remainder.find('+');
	                        if( idxPlus != std::string::npos ) {
	                            toolname = remainder.substr(0, idxPlus);
	                            remainder = remainder.substr(idxPlus + 1);
	                        }
	                        else {
	                            toolname = remainder;
	                            remainder = "";
	                        }
	                        editToolSet->setOptionalLookupTool3( defineTool(toolname) );
		
	                        if( remainder.length() > 0 ) {
	                            idxPlus = remainder.find('+');
	                            if( idxPlus != std::string::npos ) {
	                                toolname = remainder.substr(0, idxPlus);
	                                remainder = remainder.substr(idxPlus + 1);
	                            }
	                            else {
	                                toolname = remainder;
	                                remainder = "";
	                            }
	                            editToolSet->setOptionalLookupTool4( defineTool(toolname) );
		
	                            if( remainder.length() > 0 ) {
	                                idxPlus = remainder.find('+');
	                                if( idxPlus != std::string::npos ) {
	                                    toolname = remainder.substr(0, idxPlus);
	                                    remainder = remainder.substr(idxPlus + 1);
	                                }
	                                else {
	                                    toolname = remainder;
	                                    remainder = "";
	                                }
	                                editToolSet->setOptionalLookupTool5( defineTool(toolname) );
		
	                                if( remainder.length() > 0 ) {
	                                    idxPlus = remainder.find('+');
	                                    if( idxPlus != std::string::npos ) {
	                                        toolname = remainder.substr(0, idxPlus);
	                                        remainder = remainder.substr(idxPlus + 1);
	                                    }
	                                    else {
	                                        toolname = remainder;
	                                        remainder = "";
	                                    }
	                                    editToolSet->setOptionalLookupTool6( defineTool(toolname) );
		
	                                    if( remainder.length() > 0 ) {
	                                        idxPlus = remainder.find('+');
	                                        if( idxPlus != std::string::npos ) {
	                                            toolname = remainder.substr(0, idxPlus);
	                                            remainder = remainder.substr(idxPlus + 1);
	                                        }
	                                        else {
	                                            toolname = remainder;
	                                            remainder = "";
	                                        }
	                                        editToolSet->setOptionalLookupTool7( defineTool(toolname) );
	                                    }
	                                }
	                            }
	                        }
	                    }
	                }
	            }
	            toolSet = editToolSet->create();
				editToolSet = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( editToolSet != NULL ) {
			editToolSet->endEdit();
			editToolSet = NULL;
			if( toolSet != NULL ) {
				if( toolSet->getIsNew() ) {
					delete toolSet;
					toolSet = NULL;
				}
			}
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( toolSet );
	}

	/**
	 *	Find an expansion item in the engine based on the generation context
	 *	and an item name.
	 *	<p>
	 *	Finding the proper expansion item can be CPU intensive as I have
	 *	not tuned it by implementing any form of hashing or BTree keys.
	 *	When I have time...
	 *	<p>
	 *	Generally, the approach is to start with the classes of the scope
	 *	and generation definitions of the current context as the search
	 *	keys.  The initial toolset is that of the context.
	 *	<p>
	 *	We gradually search using the superclasses of the generation object,
	 *	the superclasses of the scope object, and by reducing the detail
	 *	level of the toolset.  If no match is found, $itemName$ is
	 *	eventually returned.
	 *
	 *	@param		genContext		MssCFGenContext
	 *	@param		itemName		std::string
	 *	@return	std::string				Either the string returned by
	 *								expanding the match item or $itemName$
	 */
	ICFGenKbGenItemObj* MssCFEngine::findContextItem( MssCFGenContext* genContext, const std::string& itemName ) {
		static const std::string S_ProcName( "findContextItem" );
		static const std::string S_ItemName( "itemName" );
		static const std::string S_SubMap( "subMap" );

		//	Validate parameters

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		if( itemName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 2, S_ItemName );
		}

		cflib::ICFLibAnyObj* genDef = genContext->getGenDef();
		if( genDef == NULL ) {
			return( NULL );
		}

		MssCFDefClassObj* objectDefClass = dynamic_cast<MssCFDefClassObj*>( getDefClassTableObj()->readDefClassByNameIdx( S_Object ) );

		std::string genDefGenDefName = genDef->getGenDefName();
		if( genDefGenDefName.length() == 0 ) {
			genDefGenDefName = S_Object;
		}
		else if( genDefGenDefName == "*" ) {
			genDefGenDefName = S_Object;
		}
		MssCFDefClassObj* genClass = dynamic_cast<MssCFDefClassObj*>( getDefClassTableObj()->readDefClassByNameIdx( genDefGenDefName ) );

		cflib::ICFLibAnyObj* scopeDef = genContext->getScopeDef();
		MssCFDefClassObj* scopeClass;
		if( scopeDef != NULL ) {
			scopeClass = dynamic_cast<MssCFDefClassObj*>( getDefClassTableObj()->readDefClassByNameIdx( scopeDef->getGenDefName() ) );
			if( scopeClass == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_ScopeClass );
			}
		}
		else {
			scopeClass = objectDefClass;
		}

		std::map<std::string,ICFGenKbGenItemObj*>* subMap;
		auto foundSubMap = this->toolSetRuleMap->find( *( genContext->getRequiredLookupToolSet()->getPKey() ) );
		if( foundSubMap == this->toolSetRuleMap->end() ) {
			subMap = NULL;
		}
		else {
			subMap = foundSubMap->second;
		}
		if( subMap == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_SubMap );
		}

		ICFGenKbGenItemObj* genItem;
		auto foundGenItem = subMap->find( itemName );
		if( foundGenItem != subMap->end() ) {
			genItem = foundGenItem->second;
		}
		else {
			genItem = NULL;
		}

		MssCFDefClassObj* genItemClass;
		MssCFDefClassObj* genItemScope;
		while( genItem != NULL ) {
			genItemClass = dynamic_cast<MssCFDefClassObj*>( genItem->getRequiredLookupGenDef() );
			if( genItemClass == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, "genItemClass for genItem " + genItem->getRequiredName() + " is NULL" );
			}
			genItemScope = dynamic_cast<MssCFDefClassObj*>( genItem->getOptionalLookupScopeDef() );
			if( genItemScope == NULL ) {
				genItemScope = objectDefClass;
			}
			if( derivesFrom( scopeClass, genItemScope ) ) {
				if( derivesFrom( genClass, genItemClass ) ) {
					return( genItem );
				}
				else {
					genItem = genItem->getOptionalLookupProbe();
				}
			}
			else {
				genItem = genItem->getOptionalLookupProbe();
			}
		}

		// The exact probe didn't work, so try pruning the toolset until there is no more to prune

		std::string toolsetName = genContext->getRequiredLookupToolSet()->getRequiredName();
		std::string::size_type lastPlus = toolsetName.rfind( '+' );

		std::string inheritsFromName;
		std::string inheritsFromFirst;
		ICFGenKbToolSetObj* toolset;

		while( lastPlus != std::string::npos ) {

			inheritsFromName = toolsetName.substr( 0, lastPlus );
			inheritsFromFirst = toolsetName.substr( ( lastPlus + 1 ), ( toolsetName.length() - ( lastPlus + 1 ) ) );

			// First we probe the rules for the tool that is being trimmed from the search

			toolset = getToolSetTableObj()->readToolSetByNameIdx( inheritsFromFirst );

			auto foundSubMap = this->toolSetRuleMap->find( *(toolset->getPKey()) );
			if( foundSubMap == this->toolSetRuleMap->end() ) {
				subMap = NULL;
			}
			else {
				subMap = foundSubMap->second;
			}
			if( subMap == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_SubMap );
			}

			auto foundGenItem = subMap->find( itemName );
			if( foundGenItem != subMap->end() ) {
				genItem = foundGenItem->second;
			}
			else {
				genItem = NULL;
			}

			while( genItem != NULL ) {
				genItemClass = dynamic_cast<MssCFDefClassObj*>( genItem->getRequiredLookupGenDef() );
				genItemScope = dynamic_cast<MssCFDefClassObj*>( genItem->getOptionalLookupScopeDef() );
				if( genItemScope == NULL ) {
					genItemScope = objectDefClass;
				}
				if( derivesFrom( scopeClass, genItemScope ) ) {
					if( derivesFrom( genClass, genItemClass ) ) {
						return( genItem );
					}
					else {
						genItem = genItem->getOptionalLookupProbe();
					}
				}
				else {
					genItem = genItem->getOptionalLookupProbe();
				}
			}

			// Next we probe the rules for the remaining toolset after trimming a tool

			toolset = getToolSetTableObj()->readToolSetByNameIdx( inheritsFromName );

			foundSubMap = this->toolSetRuleMap->find( *(toolset->getPKey()) );
			if( foundSubMap == this->toolSetRuleMap->end() ) {
				subMap = NULL;
			}
			else {
				subMap = foundSubMap->second;
			}
			if( subMap == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_SubMap );
			}

			auto foundAnotherGenItem = subMap->find( itemName );
			if( foundAnotherGenItem != subMap->end() ) {
				genItem = foundAnotherGenItem->second;
			}
			else {
				genItem == NULL;
			}

			while( genItem != NULL ) {
				genItemClass = dynamic_cast<MssCFDefClassObj*>( genItem->getRequiredLookupGenDef() );
				if( genItemClass == NULL ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, "genItemClass for genItem " + genItem->getRequiredName() + " is NULL" );
				}
				genItemScope = dynamic_cast<MssCFDefClassObj*>( genItem->getOptionalLookupScopeDef() );
				if( genItemScope == NULL ) {
					genItemScope = objectDefClass;
				}
				if( derivesFrom( scopeClass, genItemScope ) ) {
					if( derivesFrom( genClass, genItemClass ) ) {
						return( genItem );
					}
					else {
						genItem = genItem->getOptionalLookupProbe();
					}
				}
				else {
					genItem = genItem->getOptionalLookupProbe();
				}
			}

			// If we still didn't find a match, we try to prune another toolset
			toolsetName = inheritsFromName;
			lastPlus = toolsetName.rfind( '+' );
		}

		// Finally we probe the "any" rules

		toolset = getToolSetTableObj()->readToolSetByNameIdx( S_Any );
		foundSubMap = this->toolSetRuleMap->find( *(toolset->getPKey()) );
		if( foundSubMap == this->toolSetRuleMap->end() ) {
			subMap = NULL;
		}
		else {
			subMap = foundSubMap->second;
		}
		if( subMap == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 0, S_SubMap );
		}

		auto foundYetAnotherGenItem = subMap->find( itemName );
		if( foundYetAnotherGenItem != subMap->end() ) {
			genItem = foundYetAnotherGenItem->second;
		}
		else {
			genItem == NULL;
		}

		while( genItem != NULL ) {
			genItemClass = dynamic_cast<MssCFDefClassObj*>( genItem->getRequiredLookupGenDef() );
			if( genItemClass == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, "genItemClass for genItem " + genItem->getRequiredName() + " is NULL" );
			}
			genItemScope = dynamic_cast<MssCFDefClassObj*>( genItem->getOptionalLookupScopeDef() );
			if( genItemScope == NULL ) {
				genItemScope = objectDefClass;
			}
			if( derivesFrom( scopeClass, genItemScope ) ) {
				if( derivesFrom( genClass, genItemClass ) ) {
					return( genItem );
				}
				else {
					genItem = genItem->getOptionalLookupProbe();
				}
			}
			else {
				genItem = genItem->getOptionalLookupProbe();
			}
		}

		return( NULL );
	}

	/**
	 *	Generate all source code for the definition.
	 */
	void MssCFEngine::generate(
		const std::string& generatingBuild,
		const std::string& rootGenDir,
		cflib::ICFLibAnyObj* anyDef,
		const std::vector<std::string>& toolsDesired,
		const std::string& initialRuleName )
	{
		static const std::string S_ProcName( "generate" );
		static const std::string S_RootGenDir( "rootGenDir" );
		static const std::string S_AnyDef( "anyDef" );
		static const std::string S_ToolsDesired( "toolsDesired" );
		static const std::string S_InitialRuleName( "initialRuleName" );
		CFLIB_EXCEPTION_DECLINFO
		std::vector<std::string>::size_type idx;
		std::vector<std::string>::size_type num;
		std::string toolsetName;
		ICFGenKbGenItemObj* matchItem = NULL;
		classcode_t matchItemClass;
		MssCFGenContext* genContext = NULL;
		std::string generated;
		MssCFToolSetObj* toolset = NULL;
		MssCFDefClassObj* genDefClass = NULL;
		std::string genDefClassName;
		MssCFDefClassObj* scopeDefClass = NULL;
		std::string scopeDefClassName;

		//	Validate

		if( rootGenDir.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 1, S_RootGenDir );
		}

		if( anyDef == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 2, S_AnyDef );
		}

		if( initialRuleName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 4, S_InitialRuleName );
		}

		initToolSetRuleMap();

		//	Initialize

		GenNextSerializableUID = 0L;
		if( GenTimestamp != NULL ) {
			delete GenTimestamp;
			GenTimestamp = NULL;
		}
		if( GenTimestampString != NULL ) {
			delete GenTimestampString;
			GenTimestampString = NULL;
		}
		getGenTimestampString();

		try {
			//	LOOP each supported toolset

			for( auto iterToolsDesired = toolsDesired.begin(); iterToolsDesired != toolsDesired.end(); iterToolsDesired ++ ) {

			//	Try to find an item for expanding the item.  This is the
			//	only case where the search does NOT broaden the scope of
			//	it's search until a match is found.  Such scoping is
			//	instead implemented by the expansion of the top level
			//	items which can then rely on scope broadening to complete
			//	their expansion.

				if( toolsetName != *iterToolsDesired ) {
					toolsetName.assign( *iterToolsDesired );
				}

				toolset = NULL;
				genDefClass = NULL;
				genDefClassName = cflib::CFLib::S_EMPTY;
				matchItem = NULL;

			//	Resolve the toolset

				toolset = dynamic_cast<MssCFToolSetObj*>( getToolSetTableObj()->readToolSetByNameIdx( toolsetName ) );
				if( toolset == NULL ) {
					static const std::string S_Msg( "Could not resolve toolset " );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + toolsetName );
				}

			//	Resolve the scope class "Object"

				scopeDefClassName = S_Object;
				scopeDefClass = dynamic_cast<MssCFDefClassObj*>( getDefClassTableObj()->readDefClassByNameIdx( scopeDefClassName ) );
				if( scopeDefClass == NULL ) {
					static const std::string S_Msg( "Could not resolve scope DefClass " );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + scopeDefClassName );
				}

			//	Resolve the generation class

				genDefClassName = anyDef->getGenDefName();
				genDefClass = dynamic_cast<MssCFDefClassObj*>( getDefClassTableObj()->readDefClassByNameIdx( genDefClassName ) );
				if( genDefClass == NULL ) {
					static const std::string S_Msg( "Could not resolve gen DefClass " );
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg + genDefClassName );
				}

			//  Probe knowledge base

				int16_t scopeDefId = scopeDefClass->getRequiredId();
				matchItem = getGenItemTableObj()->readGenItemByAltIdx(initialRuleName, toolset->getRequiredId(), &scopeDefId, genDefClass->getRequiredId());
				if( matchItem == NULL ) {
					continue;
				}

			//	If we found an item, create a generation context for
			//	expanding the body of the item based on the definition
			//	being generated.

				genContext = getGenContextFactory()->newGenContext( generatingBuild, this, rootGenDir, toolsetName, scopeDefClassName, anyDef->getGenDefName(), rootGenDir, anyDef, NULL );

			//	Generate the expansion of the item.  If the expansion
			//	returns a single-line string, we log it.

				matchItemClass = matchItem->getClassCode();
				if( matchItemClass == CFGenKbGenFileBuff::CLASS_CODE ) {
					generated = dynamic_cast<MssCFGenFileObj*>( matchItem )->expandBody( genContext );
				}
				else if (matchItemClass == CFGenKbGenTruncBuff::CLASS_CODE ) {
					generated = dynamic_cast<MssCFGenTruncObj*>( matchItem )->expandBody( genContext );
				}
				else if (matchItemClass == CFGenKbGenBindBuff::CLASS_CODE ) {
					generated = dynamic_cast<MssCFGenBindObj*>( matchItem )->expandBody( genContext );
				}
				else if (matchItemClass == CFGenKbGenIteratorBuff::CLASS_CODE ) {
					generated = dynamic_cast<MssCFGenIteratorObj*>( matchItem )->expandBody( genContext );
				}
				else if (matchItemClass == CFGenKbGenReferenceBuff::CLASS_CODE ) {
					generated = ""; // dynamic_cast<CFGenReferenceObj*>( matchItem )->expandBody( genContext );
				}
				else if (matchItemClass == CFGenKbGenRuleBuff::CLASS_CODE ) {
					generated = dynamic_cast<MssCFGenRuleObj*>( matchItem )->expandBody( genContext );
				}
				else {
					if( genContext != NULL ) {
						genContext->release();
						genContext = NULL;
					}
					static const std::string S_Msg( "Unsupported knowledge class " );
					throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
						S_ProcName,
						S_Msg + cflib::CFLib::formatClassCode( matchItemClass ) );
				}
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( genContext != NULL ) {
			genContext->release();
			genContext = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
	}
}

