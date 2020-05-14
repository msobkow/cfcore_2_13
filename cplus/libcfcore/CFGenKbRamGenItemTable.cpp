
// Description: C++18 Implementation for an in-memory RAM DbIO for GenItem.

/*
 *	com.github.msobkow.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
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
 *	Contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbram/CFGenKbRamClusterTable.hpp>
#include <cfgenkbram/CFGenKbRamDefClassTable.hpp>
#include <cfgenkbram/CFGenKbRamGelBoilerplateTable.hpp>
#include <cfgenkbram/CFGenKbRamGelBuiltinTable.hpp>
#include <cfgenkbram/CFGenKbRamGelCacheTable.hpp>
#include <cfgenkbram/CFGenKbRamGelCallTable.hpp>
#include <cfgenkbram/CFGenKbRamGelConstrainTable.hpp>
#include <cfgenkbram/CFGenKbRamGelCounterTable.hpp>
#include <cfgenkbram/CFGenKbRamGelErrorTable.hpp>
#include <cfgenkbram/CFGenKbRamGelExecutableTable.hpp>
#include <cfgenkbram/CFGenKbRamGelExpansionTable.hpp>
#include <cfgenkbram/CFGenKbRamGelInstructionTable.hpp>
#include <cfgenkbram/CFGenKbRamGelIteratorTable.hpp>
#include <cfgenkbram/CFGenKbRamGelModifierTable.hpp>
#include <cfgenkbram/CFGenKbRamGelPopTable.hpp>
#include <cfgenkbram/CFGenKbRamGelPrefixLineTable.hpp>
#include <cfgenkbram/CFGenKbRamGelReferenceTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSequenceTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSpreadTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSwitchTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSwitchLimbTable.hpp>
#include <cfgenkbram/CFGenKbRamGenBindTable.hpp>
#include <cfgenkbram/CFGenKbRamGenFileTable.hpp>
#include <cfgenkbram/CFGenKbRamGenItemTable.hpp>
#include <cfgenkbram/CFGenKbRamGenIteratorTable.hpp>
#include <cfgenkbram/CFGenKbRamGenReferenceTable.hpp>
#include <cfgenkbram/CFGenKbRamGenRuleTable.hpp>
#include <cfgenkbram/CFGenKbRamGenTruncTable.hpp>
#include <cfgenkbram/CFGenKbRamHostNodeTable.hpp>
#include <cfgenkbram/CFGenKbRamRuleCartTable.hpp>
#include <cfgenkbram/CFGenKbRamRuleTypeTable.hpp>
#include <cfgenkbram/CFGenKbRamSecAppTable.hpp>
#include <cfgenkbram/CFGenKbRamSecDeviceTable.hpp>
#include <cfgenkbram/CFGenKbRamSecFormTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGroupTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGroupFormTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGrpIncTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGrpMembTable.hpp>
#include <cfgenkbram/CFGenKbRamSecSessionTable.hpp>
#include <cfgenkbram/CFGenKbRamSecUserTable.hpp>
#include <cfgenkbram/CFGenKbRamSysClusterTable.hpp>
#include <cfgenkbram/CFGenKbRamTSecGroupTable.hpp>
#include <cfgenkbram/CFGenKbRamTSecGrpIncTable.hpp>
#include <cfgenkbram/CFGenKbRamTSecGrpMembTable.hpp>
#include <cfgenkbram/CFGenKbRamTenantTable.hpp>
#include <cfgenkbram/CFGenKbRamToolTable.hpp>
#include <cfgenkbram/CFGenKbRamToolSetTable.hpp>

using namespace std;

namespace cfcore {

	const std::string CFGenKbRamGenItemTable::CLASS_NAME( "CFGenKbRamGenItemTable" );

	CFGenKbRamGenItemTable::CFGenKbRamGenItemTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGenItemTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByCartIdx = new std::map<cfcore::CFGenKbGenItemByCartIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByRuleTypeIdx = new std::map<cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByToolSetIdx = new std::map<cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByScopeIdx = new std::map<cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByGenDefIdx = new std::map<cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByAltIdx = new std::map<cfcore::CFGenKbGenItemByAltIdxKey, cfcore::CFGenKbGenItemBuff*>();
		dictByGelExecIdx = new std::map<cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
		dictByProbeIdx = new std::map<cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>*>();
	}

	CFGenKbRamGenItemTable::~CFGenKbRamGenItemTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByCartIdx != NULL ) {
			for( auto iterDict = dictByCartIdx->begin(); iterDict != dictByCartIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCartIdx;
			dictByCartIdx = NULL;
		}
		if( dictByRuleTypeIdx != NULL ) {
			for( auto iterDict = dictByRuleTypeIdx->begin(); iterDict != dictByRuleTypeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRuleTypeIdx;
			dictByRuleTypeIdx = NULL;
		}
		if( dictByToolSetIdx != NULL ) {
			for( auto iterDict = dictByToolSetIdx->begin(); iterDict != dictByToolSetIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByToolSetIdx;
			dictByToolSetIdx = NULL;
		}
		if( dictByScopeIdx != NULL ) {
			for( auto iterDict = dictByScopeIdx->begin(); iterDict != dictByScopeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByScopeIdx;
			dictByScopeIdx = NULL;
		}
		if( dictByGenDefIdx != NULL ) {
			for( auto iterDict = dictByGenDefIdx->begin(); iterDict != dictByGenDefIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByGenDefIdx;
			dictByGenDefIdx = NULL;
		}
		if( dictByAltIdx != NULL ) {
			delete dictByAltIdx;
			dictByAltIdx = NULL;
		}
		if( dictByGelExecIdx != NULL ) {
			for( auto iterDict = dictByGelExecIdx->begin(); iterDict != dictByGelExecIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByGelExecIdx;
			dictByGelExecIdx = NULL;
		}
		if( dictByProbeIdx != NULL ) {
			for( auto iterDict = dictByProbeIdx->begin(); iterDict != dictByProbeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByProbeIdx;
			dictByProbeIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbGenItemBuff* elt;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>::iterator cur = dictByPKey->begin();
				cur != end;
				cur ++ )
			{
				elt = cur->second;
				if( elt != NULL ) {
					delete elt;
					elt = NULL;
					cur->second = NULL;
				}
			}
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::createGenItem( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenItemBuff* Buff )
	{
		static const std::string S_ProcName( "createGenItem" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( dynamic_cast<CFGenKbRamTenantTable*>( schema->getTableTenant() )->nextGenItemIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredCartridgeId( pkey.getRequiredCartridgeId() );
		Buff->setRequiredItemId( pkey.getRequiredItemId() );
		cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
		keyCartIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyCartIdx.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
		keyRuleTypeIdx.setRequiredRuleTypeId( Buff->getRequiredRuleTypeId() );
		cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
		keyToolSetIdx.setRequiredToolSetId( Buff->getRequiredToolSetId() );
		cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
		if( Buff->isOptionalScopeDefIdNull() ) {
			keyScopeIdx.setOptionalScopeDefIdNull();
		}
		else {
			keyScopeIdx.setOptionalScopeDefIdValue( Buff->getOptionalScopeDefIdValue() );
		}
		cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
		keyGenDefIdx.setRequiredGenDefId( Buff->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
		keyAltIdx.setRequiredName( Buff->getRequiredName() );
		keyAltIdx.setRequiredToolSetId( Buff->getRequiredToolSetId() );
		if( Buff->isOptionalScopeDefIdNull() ) {
			keyAltIdx.setOptionalScopeDefIdNull();
		}
		else {
			keyAltIdx.setOptionalScopeDefIdValue( Buff->getOptionalScopeDefIdValue() );
		}
		keyAltIdx.setRequiredGenDefId( Buff->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
		if( Buff->isOptionalGelExecutableTenantIdNull() ) {
			keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
		}
		else {
			keyGelExecIdx.setOptionalGelExecutableTenantIdValue( Buff->getOptionalGelExecutableTenantIdValue() );
		}
		if( Buff->isOptionalGelExecutableGelCacheIdNull() ) {
			keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( Buff->getOptionalGelExecutableGelCacheIdValue() );
		}
		if( Buff->isOptionalGelExecutableIdNull() ) {
			keyGelExecIdx.setOptionalGelExecutableIdNull();
		}
		else {
			keyGelExecIdx.setOptionalGelExecutableIdValue( Buff->getOptionalGelExecutableIdValue() );
		}
		cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
		if( Buff->isOptionalProbeTenantIdNull() ) {
			keyProbeIdx.setOptionalProbeTenantIdNull();
		}
		else {
			keyProbeIdx.setOptionalProbeTenantIdValue( Buff->getOptionalProbeTenantIdValue() );
		}
		if( Buff->isOptionalProbeCartridgeIdNull() ) {
			keyProbeIdx.setOptionalProbeCartridgeIdNull();
		}
		else {
			keyProbeIdx.setOptionalProbeCartridgeIdValue( Buff->getOptionalProbeCartridgeIdValue() );
		}
		if( Buff->isOptionalProbeGenItemIdNull() ) {
			keyProbeIdx.setOptionalProbeGenItemIdNull();
		}
		else {
			keyProbeIdx.setOptionalProbeGenItemIdValue( Buff->getOptionalProbeGenItemIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByAltIdx = dictByAltIdx->find( keyAltIdx );
		if( searchDictByAltIdx != dictByAltIdx->end() ) {
			std::string Msg( "Duplicate key detected for index GenItemAlt " + keyAltIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		{
			bool allNull = true;
			allNull = false;
			if( ! allNull ) {
				cfcore::CFGenKbTenantBuff* chk = dynamic_cast<cfcore::CFGenKbTenantBuff*>( schema->getTableTenant()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship Tenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;
			allNull = false;
			allNull = false;
			if( ! allNull ) {
				cfcore::CFGenKbRuleCartBuff* chk = dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( schema->getTableRuleCart()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredCartridgeId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Cartridge to table RuleCart" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;
			allNull = false;
			if( ! allNull ) {
				cfcore::CFGenKbRuleTypeBuff* chk = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( schema->getTableRuleType()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredRuleTypeId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship RuleType to table RuleType" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;
			allNull = false;
			if( ! allNull ) {
				cfcore::CFGenKbToolSetBuff* chk = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredToolSetId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship ToolSet to table ToolSet" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;
			allNull = false;
			if( ! allNull ) {
				cfcore::CFGenKbDefClassBuff* chk = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( schema->getTableDefClass()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredGenDefId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship GenDef to table DefClass" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbGenItemBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictCartIdx;
		auto searchDictByCartIdx = dictByCartIdx->find( keyCartIdx );
		if( searchDictByCartIdx != dictByCartIdx->end() ) {
			subdictCartIdx = searchDictByCartIdx->second;
		}
		else {
			subdictCartIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByCartIdx->insert( std::map<cfcore::CFGenKbGenItemByCartIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyCartIdx, subdictCartIdx ) );
		}
		subdictCartIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictRuleTypeIdx;
		auto searchDictByRuleTypeIdx = dictByRuleTypeIdx->find( keyRuleTypeIdx );
		if( searchDictByRuleTypeIdx != dictByRuleTypeIdx->end() ) {
			subdictRuleTypeIdx = searchDictByRuleTypeIdx->second;
		}
		else {
			subdictRuleTypeIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByRuleTypeIdx->insert( std::map<cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyRuleTypeIdx, subdictRuleTypeIdx ) );
		}
		subdictRuleTypeIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictToolSetIdx;
		auto searchDictByToolSetIdx = dictByToolSetIdx->find( keyToolSetIdx );
		if( searchDictByToolSetIdx != dictByToolSetIdx->end() ) {
			subdictToolSetIdx = searchDictByToolSetIdx->second;
		}
		else {
			subdictToolSetIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByToolSetIdx->insert( std::map<cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyToolSetIdx, subdictToolSetIdx ) );
		}
		subdictToolSetIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictScopeIdx;
		auto searchDictByScopeIdx = dictByScopeIdx->find( keyScopeIdx );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			subdictScopeIdx = searchDictByScopeIdx->second;
		}
		else {
			subdictScopeIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByScopeIdx->insert( std::map<cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyScopeIdx, subdictScopeIdx ) );
		}
		subdictScopeIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictGenDefIdx;
		auto searchDictByGenDefIdx = dictByGenDefIdx->find( keyGenDefIdx );
		if( searchDictByGenDefIdx != dictByGenDefIdx->end() ) {
			subdictGenDefIdx = searchDictByGenDefIdx->second;
		}
		else {
			subdictGenDefIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByGenDefIdx->insert( std::map<cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyGenDefIdx, subdictGenDefIdx ) );
		}
		subdictGenDefIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		dictByAltIdx->insert( std::map<cfcore::CFGenKbGenItemByAltIdxKey, cfcore::CFGenKbGenItemBuff*>::value_type( keyAltIdx, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictGelExecIdx;
		auto searchDictByGelExecIdx = dictByGelExecIdx->find( keyGelExecIdx );
		if( searchDictByGelExecIdx != dictByGelExecIdx->end() ) {
			subdictGelExecIdx = searchDictByGelExecIdx->second;
		}
		else {
			subdictGelExecIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByGelExecIdx->insert( std::map<cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyGelExecIdx, subdictGelExecIdx ) );
		}
		subdictGelExecIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdictProbeIdx;
		auto searchDictByProbeIdx = dictByProbeIdx->find( keyProbeIdx );
		if( searchDictByProbeIdx != dictByProbeIdx->end() ) {
			subdictProbeIdx = searchDictByProbeIdx->second;
		}
		else {
			subdictProbeIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByProbeIdx->insert( std::map<cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( keyProbeIdx, subdictProbeIdx ) );
		}
		subdictProbeIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGenItemBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGenItemBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() );
			}
			else {
				dictByPKey->erase( searchDictByPKey );
				buff = NULL;
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> retVec;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGenItemBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readDerivedByCartIdx" );
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByCartIdx = dictByCartIdx->find( key );
		if( searchDictByCartIdx != dictByCartIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictCartIdx = searchDictByCartIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictCartIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictCartIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readDerivedByRuleTypeIdx" );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByRuleTypeIdx = dictByRuleTypeIdx->find( key );
		if( searchDictByRuleTypeIdx != dictByRuleTypeIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictRuleTypeIdx = searchDictByRuleTypeIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictRuleTypeIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictRuleTypeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readDerivedByToolSetIdx" );
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByToolSetIdx = dictByToolSetIdx->find( key );
		if( searchDictByToolSetIdx != dictByToolSetIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictToolSetIdx = searchDictByToolSetIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictToolSetIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictToolSetIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByScopeIdx = dictByScopeIdx->find( key );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictScopeIdx = searchDictByScopeIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictScopeIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictScopeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByGenDefIdx" );
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByGenDefIdx = dictByGenDefIdx->find( key );
		if( searchDictByGenDefIdx != dictByGenDefIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictGenDefIdx = searchDictByGenDefIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictGenDefIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictGenDefIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByAltIdx" );
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		auto searchDictByAltIdx = dictByAltIdx->find( key );
		if( searchDictByAltIdx != dictByAltIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( searchDictByAltIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readDerivedByGelExecIdx" );
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( GelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *GelExecutableTenantId );
		}
		if( GelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *GelExecutableGelCacheId );
		}
		if( GelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *GelExecutableId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByGelExecIdx = dictByGelExecIdx->find( key );
		if( searchDictByGelExecIdx != dictByGelExecIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictGelExecIdx = searchDictByGelExecIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictGelExecIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictGelExecIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readDerivedByProbeIdx" );
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( ProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *ProbeTenantId );
		}
		if( ProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *ProbeCartridgeId );
		}
		if( ProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *ProbeGenItemId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> recVec;
		cfcore::CFGenKbGenItemBuff* clone;
		auto searchDictByProbeIdx = dictByProbeIdx->find( key );
		if( searchDictByProbeIdx != dictByProbeIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictProbeIdx = searchDictByProbeIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator iter = subdictProbeIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenItemBuff*>::iterator end = subdictProbeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readDerivedByItemIdIdx" );
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		key.setRequiredItemId( ItemId );
		cfcore::CFGenKbGenItemBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGenItemBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff ) );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGenItemBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readBuffByItemIdIdx" );
		cfcore::CFGenKbGenItemBuff* buff = readDerivedByItemIdIdx( Authorization,
			TenantId,
			CartridgeId,
			ItemId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readBuffByCartIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readBuffByRuleTypeIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readBuffByToolSetIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByGenDefIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByGenDefIdx( Authorization,
			GenDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByAltIdx" );
		cfcore::CFGenKbGenItemBuff* buff = readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readBuffByGelExecIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> CFGenKbRamGenItemTable::readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readBuffByProbeIdx" );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbRamGenItemTable::updateGenItem( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenItemBuff* Buff )
	{
		static const std::string S_ProcName( "updateGenItem" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GenItem for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGenItemBuff* existing = searchExisting->second;

		if( existing == NULL ) {
			delete Buff;
			static const std::string S_Existing( "existing" );
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Existing );
		}

		// Make sure the buffer classes match

		if( existing->getClassCode() != Buff->getClassCode() ) {
			static const std::string S_DoesNotMatchExisting( " does not match existing " );
			std::string Msg( "Buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( Buff->getClassCode() ) );
			Msg.append( S_DoesNotMatchExisting );
			Msg.append( cflib::CFLib::formatClassCode( existing->getClassCode() ) );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		if( existing->getRequiredRevision() != Buff->getRequiredRevision() ) {
			std::string Msg( "Collision detected for GenItem primary key " );
			Msg.append( pkey.toString() );
			Msg.append( " existing revision " );
			Msg.append( std::to_string( existing->getRequiredRevision() ) );
			Msg.append( " argument buffer revision " );
			Msg.append( std::to_string( Buff->getRequiredRevision() ) );
			delete Buff;
			throw cflib::CFLibCollisionDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		cfcore::CFGenKbGenItemByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGenItemByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGenItemByCartIdxKey existingKeyCartIdx;
		existingKeyCartIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyCartIdx.setRequiredCartridgeId( existing->getRequiredCartridgeId() );
		cfcore::CFGenKbGenItemByCartIdxKey newKeyCartIdx;
		newKeyCartIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyCartIdx.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey existingKeyRuleTypeIdx;
		existingKeyRuleTypeIdx.setRequiredRuleTypeId( existing->getRequiredRuleTypeId() );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey newKeyRuleTypeIdx;
		newKeyRuleTypeIdx.setRequiredRuleTypeId( Buff->getRequiredRuleTypeId() );
		cfcore::CFGenKbGenItemByToolSetIdxKey existingKeyToolSetIdx;
		existingKeyToolSetIdx.setRequiredToolSetId( existing->getRequiredToolSetId() );
		cfcore::CFGenKbGenItemByToolSetIdxKey newKeyToolSetIdx;
		newKeyToolSetIdx.setRequiredToolSetId( Buff->getRequiredToolSetId() );
		cfcore::CFGenKbGenItemByScopeIdxKey existingKeyScopeIdx;
		if( existing->isOptionalScopeDefIdNull() ) {
			existingKeyScopeIdx.setOptionalScopeDefIdNull();
		}
		else {
			existingKeyScopeIdx.setOptionalScopeDefIdValue( existing->getOptionalScopeDefIdValue() );
		}
		cfcore::CFGenKbGenItemByScopeIdxKey newKeyScopeIdx;
		if( Buff->isOptionalScopeDefIdNull() ) {
			newKeyScopeIdx.setOptionalScopeDefIdNull();
		}
		else {
			newKeyScopeIdx.setOptionalScopeDefIdValue( Buff->getOptionalScopeDefIdValue() );
		}
		cfcore::CFGenKbGenItemByGenDefIdxKey existingKeyGenDefIdx;
		existingKeyGenDefIdx.setRequiredGenDefId( existing->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByGenDefIdxKey newKeyGenDefIdx;
		newKeyGenDefIdx.setRequiredGenDefId( Buff->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByAltIdxKey existingKeyAltIdx;
		existingKeyAltIdx.setRequiredName( existing->getRequiredName() );
		existingKeyAltIdx.setRequiredToolSetId( existing->getRequiredToolSetId() );
		if( existing->isOptionalScopeDefIdNull() ) {
			existingKeyAltIdx.setOptionalScopeDefIdNull();
		}
		else {
			existingKeyAltIdx.setOptionalScopeDefIdValue( existing->getOptionalScopeDefIdValue() );
		}
		existingKeyAltIdx.setRequiredGenDefId( existing->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByAltIdxKey newKeyAltIdx;
		newKeyAltIdx.setRequiredName( Buff->getRequiredName() );
		newKeyAltIdx.setRequiredToolSetId( Buff->getRequiredToolSetId() );
		if( Buff->isOptionalScopeDefIdNull() ) {
			newKeyAltIdx.setOptionalScopeDefIdNull();
		}
		else {
			newKeyAltIdx.setOptionalScopeDefIdValue( Buff->getOptionalScopeDefIdValue() );
		}
		newKeyAltIdx.setRequiredGenDefId( Buff->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByGelExecIdxKey existingKeyGelExecIdx;
		if( existing->isOptionalGelExecutableTenantIdNull() ) {
			existingKeyGelExecIdx.setOptionalGelExecutableTenantIdNull();
		}
		else {
			existingKeyGelExecIdx.setOptionalGelExecutableTenantIdValue( existing->getOptionalGelExecutableTenantIdValue() );
		}
		if( existing->isOptionalGelExecutableGelCacheIdNull() ) {
			existingKeyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			existingKeyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( existing->getOptionalGelExecutableGelCacheIdValue() );
		}
		if( existing->isOptionalGelExecutableIdNull() ) {
			existingKeyGelExecIdx.setOptionalGelExecutableIdNull();
		}
		else {
			existingKeyGelExecIdx.setOptionalGelExecutableIdValue( existing->getOptionalGelExecutableIdValue() );
		}
		cfcore::CFGenKbGenItemByGelExecIdxKey newKeyGelExecIdx;
		if( Buff->isOptionalGelExecutableTenantIdNull() ) {
			newKeyGelExecIdx.setOptionalGelExecutableTenantIdNull();
		}
		else {
			newKeyGelExecIdx.setOptionalGelExecutableTenantIdValue( Buff->getOptionalGelExecutableTenantIdValue() );
		}
		if( Buff->isOptionalGelExecutableGelCacheIdNull() ) {
			newKeyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			newKeyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( Buff->getOptionalGelExecutableGelCacheIdValue() );
		}
		if( Buff->isOptionalGelExecutableIdNull() ) {
			newKeyGelExecIdx.setOptionalGelExecutableIdNull();
		}
		else {
			newKeyGelExecIdx.setOptionalGelExecutableIdValue( Buff->getOptionalGelExecutableIdValue() );
		}
		cfcore::CFGenKbGenItemByProbeIdxKey existingKeyProbeIdx;
		if( existing->isOptionalProbeTenantIdNull() ) {
			existingKeyProbeIdx.setOptionalProbeTenantIdNull();
		}
		else {
			existingKeyProbeIdx.setOptionalProbeTenantIdValue( existing->getOptionalProbeTenantIdValue() );
		}
		if( existing->isOptionalProbeCartridgeIdNull() ) {
			existingKeyProbeIdx.setOptionalProbeCartridgeIdNull();
		}
		else {
			existingKeyProbeIdx.setOptionalProbeCartridgeIdValue( existing->getOptionalProbeCartridgeIdValue() );
		}
		if( existing->isOptionalProbeGenItemIdNull() ) {
			existingKeyProbeIdx.setOptionalProbeGenItemIdNull();
		}
		else {
			existingKeyProbeIdx.setOptionalProbeGenItemIdValue( existing->getOptionalProbeGenItemIdValue() );
		}
		cfcore::CFGenKbGenItemByProbeIdxKey newKeyProbeIdx;
		if( Buff->isOptionalProbeTenantIdNull() ) {
			newKeyProbeIdx.setOptionalProbeTenantIdNull();
		}
		else {
			newKeyProbeIdx.setOptionalProbeTenantIdValue( Buff->getOptionalProbeTenantIdValue() );
		}
		if( Buff->isOptionalProbeCartridgeIdNull() ) {
			newKeyProbeIdx.setOptionalProbeCartridgeIdNull();
		}
		else {
			newKeyProbeIdx.setOptionalProbeCartridgeIdValue( Buff->getOptionalProbeCartridgeIdValue() );
		}
		if( Buff->isOptionalProbeGenItemIdNull() ) {
			newKeyProbeIdx.setOptionalProbeGenItemIdNull();
		}
		else {
			newKeyProbeIdx.setOptionalProbeGenItemIdValue( Buff->getOptionalProbeGenItemIdValue() );
		}
		// Check unique indexes

		if( existingKeyAltIdx != newKeyAltIdx ) {
			auto searchDictByAltIdx = dictByAltIdx->find( newKeyAltIdx );
			if( searchDictByAltIdx != dictByAltIdx->end() ) {
				std::string Msg( "Duplicate key detected for index GenItemAlt " + newKeyAltIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbTenantBuff* chk = dynamic_cast<cfcore::CFGenKbTenantBuff*>( schema->getTableTenant()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship Tenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbRuleCartBuff* chk = dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( schema->getTableRuleCart()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredCartridgeId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship Cartridge to table RuleCart" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbRuleTypeBuff* chk = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( schema->getTableRuleType()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredRuleTypeId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship RuleType to table RuleType" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbToolSetBuff* chk = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredToolSetId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship ToolSet to table ToolSet" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbDefClassBuff* chk = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( schema->getTableDefClass()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredGenDefId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship GenDef to table DefClass" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		const classcode_t hasClassCode = existing->getClassCode();
		if( hasClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			*existing = *Buff;
		}
		else if( hasClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGenFileBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGenBindBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGenBindBuff*>( Buff );
		}
		else {
			const static std::string S_DoesNotDerive( " does not derive from cfcore::CFGenKbGenItemBuff" );
			std::string Msg( "Unsupported buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( hasClassCode ) );
			Msg.append( S_DoesNotDerive );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		existing->setRequiredRevision( existing->getRequiredRevision() + 1 );

		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( existingKeyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			if( subdictTenantIdx->size() <= 0 ) {
				delete subdictTenantIdx;
				dictByTenantIdx->erase( searchDictByTenantIdx );
			}
			subdictTenantIdx = NULL;
		}
		auto searchNewKeyDictByTenantIdx = dictByTenantIdx->find( newKeyTenantIdx );
		if( searchNewKeyDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchNewKeyDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictCartIdx;
		auto searchDictByCartIdx = dictByCartIdx->find( existingKeyCartIdx );
		if( searchDictByCartIdx != dictByCartIdx->end() ) {
			subdictCartIdx = searchDictByCartIdx->second;
			auto searchSubDict = subdictCartIdx->find( pkey );
			if( searchSubDict != subdictCartIdx->end() ) {
				subdictCartIdx->erase( searchSubDict );
			}
			if( subdictCartIdx->size() <= 0 ) {
				delete subdictCartIdx;
				dictByCartIdx->erase( searchDictByCartIdx );
			}
			subdictCartIdx = NULL;
		}
		auto searchNewKeyDictByCartIdx = dictByCartIdx->find( newKeyCartIdx );
		if( searchNewKeyDictByCartIdx != dictByCartIdx->end() ) {
			subdictCartIdx = searchNewKeyDictByCartIdx->second;
		}
		else {
			subdictCartIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByCartIdx->insert( std::map<cfcore::CFGenKbGenItemByCartIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyCartIdx, subdictCartIdx ) );
		}
		subdictCartIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictRuleTypeIdx;
		auto searchDictByRuleTypeIdx = dictByRuleTypeIdx->find( existingKeyRuleTypeIdx );
		if( searchDictByRuleTypeIdx != dictByRuleTypeIdx->end() ) {
			subdictRuleTypeIdx = searchDictByRuleTypeIdx->second;
			auto searchSubDict = subdictRuleTypeIdx->find( pkey );
			if( searchSubDict != subdictRuleTypeIdx->end() ) {
				subdictRuleTypeIdx->erase( searchSubDict );
			}
			if( subdictRuleTypeIdx->size() <= 0 ) {
				delete subdictRuleTypeIdx;
				dictByRuleTypeIdx->erase( searchDictByRuleTypeIdx );
			}
			subdictRuleTypeIdx = NULL;
		}
		auto searchNewKeyDictByRuleTypeIdx = dictByRuleTypeIdx->find( newKeyRuleTypeIdx );
		if( searchNewKeyDictByRuleTypeIdx != dictByRuleTypeIdx->end() ) {
			subdictRuleTypeIdx = searchNewKeyDictByRuleTypeIdx->second;
		}
		else {
			subdictRuleTypeIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByRuleTypeIdx->insert( std::map<cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyRuleTypeIdx, subdictRuleTypeIdx ) );
		}
		subdictRuleTypeIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictToolSetIdx;
		auto searchDictByToolSetIdx = dictByToolSetIdx->find( existingKeyToolSetIdx );
		if( searchDictByToolSetIdx != dictByToolSetIdx->end() ) {
			subdictToolSetIdx = searchDictByToolSetIdx->second;
			auto searchSubDict = subdictToolSetIdx->find( pkey );
			if( searchSubDict != subdictToolSetIdx->end() ) {
				subdictToolSetIdx->erase( searchSubDict );
			}
			if( subdictToolSetIdx->size() <= 0 ) {
				delete subdictToolSetIdx;
				dictByToolSetIdx->erase( searchDictByToolSetIdx );
			}
			subdictToolSetIdx = NULL;
		}
		auto searchNewKeyDictByToolSetIdx = dictByToolSetIdx->find( newKeyToolSetIdx );
		if( searchNewKeyDictByToolSetIdx != dictByToolSetIdx->end() ) {
			subdictToolSetIdx = searchNewKeyDictByToolSetIdx->second;
		}
		else {
			subdictToolSetIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByToolSetIdx->insert( std::map<cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyToolSetIdx, subdictToolSetIdx ) );
		}
		subdictToolSetIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictScopeIdx;
		auto searchDictByScopeIdx = dictByScopeIdx->find( existingKeyScopeIdx );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			subdictScopeIdx = searchDictByScopeIdx->second;
			auto searchSubDict = subdictScopeIdx->find( pkey );
			if( searchSubDict != subdictScopeIdx->end() ) {
				subdictScopeIdx->erase( searchSubDict );
			}
			if( subdictScopeIdx->size() <= 0 ) {
				delete subdictScopeIdx;
				dictByScopeIdx->erase( searchDictByScopeIdx );
			}
			subdictScopeIdx = NULL;
		}
		auto searchNewKeyDictByScopeIdx = dictByScopeIdx->find( newKeyScopeIdx );
		if( searchNewKeyDictByScopeIdx != dictByScopeIdx->end() ) {
			subdictScopeIdx = searchNewKeyDictByScopeIdx->second;
		}
		else {
			subdictScopeIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByScopeIdx->insert( std::map<cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyScopeIdx, subdictScopeIdx ) );
		}
		subdictScopeIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictGenDefIdx;
		auto searchDictByGenDefIdx = dictByGenDefIdx->find( existingKeyGenDefIdx );
		if( searchDictByGenDefIdx != dictByGenDefIdx->end() ) {
			subdictGenDefIdx = searchDictByGenDefIdx->second;
			auto searchSubDict = subdictGenDefIdx->find( pkey );
			if( searchSubDict != subdictGenDefIdx->end() ) {
				subdictGenDefIdx->erase( searchSubDict );
			}
			if( subdictGenDefIdx->size() <= 0 ) {
				delete subdictGenDefIdx;
				dictByGenDefIdx->erase( searchDictByGenDefIdx );
			}
			subdictGenDefIdx = NULL;
		}
		auto searchNewKeyDictByGenDefIdx = dictByGenDefIdx->find( newKeyGenDefIdx );
		if( searchNewKeyDictByGenDefIdx != dictByGenDefIdx->end() ) {
			subdictGenDefIdx = searchNewKeyDictByGenDefIdx->second;
		}
		else {
			subdictGenDefIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByGenDefIdx->insert( std::map<cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyGenDefIdx, subdictGenDefIdx ) );
		}
		subdictGenDefIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		auto removalDictByAltIdx = dictByAltIdx->find( existingKeyAltIdx );
		if( removalDictByAltIdx != dictByAltIdx->end() ) {
			dictByAltIdx->erase( removalDictByAltIdx );
		}
		dictByAltIdx->insert( std::map<cfcore::CFGenKbGenItemByAltIdxKey, cfcore::CFGenKbGenItemBuff*>::value_type( newKeyAltIdx, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictGelExecIdx;
		auto searchDictByGelExecIdx = dictByGelExecIdx->find( existingKeyGelExecIdx );
		if( searchDictByGelExecIdx != dictByGelExecIdx->end() ) {
			subdictGelExecIdx = searchDictByGelExecIdx->second;
			auto searchSubDict = subdictGelExecIdx->find( pkey );
			if( searchSubDict != subdictGelExecIdx->end() ) {
				subdictGelExecIdx->erase( searchSubDict );
			}
			if( subdictGelExecIdx->size() <= 0 ) {
				delete subdictGelExecIdx;
				dictByGelExecIdx->erase( searchDictByGelExecIdx );
			}
			subdictGelExecIdx = NULL;
		}
		auto searchNewKeyDictByGelExecIdx = dictByGelExecIdx->find( newKeyGelExecIdx );
		if( searchNewKeyDictByGelExecIdx != dictByGelExecIdx->end() ) {
			subdictGelExecIdx = searchNewKeyDictByGelExecIdx->second;
		}
		else {
			subdictGelExecIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByGelExecIdx->insert( std::map<cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyGelExecIdx, subdictGelExecIdx ) );
		}
		subdictGelExecIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenItemBuff*>* subdictProbeIdx;
		auto searchDictByProbeIdx = dictByProbeIdx->find( existingKeyProbeIdx );
		if( searchDictByProbeIdx != dictByProbeIdx->end() ) {
			subdictProbeIdx = searchDictByProbeIdx->second;
			auto searchSubDict = subdictProbeIdx->find( pkey );
			if( searchSubDict != subdictProbeIdx->end() ) {
				subdictProbeIdx->erase( searchSubDict );
			}
			if( subdictProbeIdx->size() <= 0 ) {
				delete subdictProbeIdx;
				dictByProbeIdx->erase( searchDictByProbeIdx );
			}
			subdictProbeIdx = NULL;
		}
		auto searchNewKeyDictByProbeIdx = dictByProbeIdx->find( newKeyProbeIdx );
		if( searchNewKeyDictByProbeIdx != dictByProbeIdx->end() ) {
			subdictProbeIdx = searchNewKeyDictByProbeIdx->second;
		}
		else {
			subdictProbeIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>();
			dictByProbeIdx->insert( std::map<cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenItemBuff*>*>::value_type( newKeyProbeIdx, subdictProbeIdx ) );
		}
		subdictProbeIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGenItemBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGenItemTable::deleteGenItem( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenItemBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGenItem" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbGenItemBuff* existing = searchExisting->second;
		schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalGelExecutableTenantIdValue(),
			existing->getOptionalGelExecutableGelCacheIdValue(),
			existing->getOptionalGelExecutableIdValue() );
		cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
		keyCartIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyCartIdx.setRequiredCartridgeId( existing->getRequiredCartridgeId() );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
		keyRuleTypeIdx.setRequiredRuleTypeId( existing->getRequiredRuleTypeId() );
		cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
		keyToolSetIdx.setRequiredToolSetId( existing->getRequiredToolSetId() );
		cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
		if( existing->isOptionalScopeDefIdNull() ) {
			keyScopeIdx.setOptionalScopeDefIdNull();
		}
		else {
			keyScopeIdx.setOptionalScopeDefIdValue( existing->getOptionalScopeDefIdValue() );
		}
		cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
		keyGenDefIdx.setRequiredGenDefId( existing->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
		keyAltIdx.setRequiredName( existing->getRequiredName() );
		keyAltIdx.setRequiredToolSetId( existing->getRequiredToolSetId() );
		if( existing->isOptionalScopeDefIdNull() ) {
			keyAltIdx.setOptionalScopeDefIdNull();
		}
		else {
			keyAltIdx.setOptionalScopeDefIdValue( existing->getOptionalScopeDefIdValue() );
		}
		keyAltIdx.setRequiredGenDefId( existing->getRequiredGenDefId() );
		cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
		if( existing->isOptionalGelExecutableTenantIdNull() ) {
			keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
		}
		else {
			keyGelExecIdx.setOptionalGelExecutableTenantIdValue( existing->getOptionalGelExecutableTenantIdValue() );
		}
		if( existing->isOptionalGelExecutableGelCacheIdNull() ) {
			keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( existing->getOptionalGelExecutableGelCacheIdValue() );
		}
		if( existing->isOptionalGelExecutableIdNull() ) {
			keyGelExecIdx.setOptionalGelExecutableIdNull();
		}
		else {
			keyGelExecIdx.setOptionalGelExecutableIdValue( existing->getOptionalGelExecutableIdValue() );
		}
		cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
		if( existing->isOptionalProbeTenantIdNull() ) {
			keyProbeIdx.setOptionalProbeTenantIdNull();
		}
		else {
			keyProbeIdx.setOptionalProbeTenantIdValue( existing->getOptionalProbeTenantIdValue() );
		}
		if( existing->isOptionalProbeCartridgeIdNull() ) {
			keyProbeIdx.setOptionalProbeCartridgeIdNull();
		}
		else {
			keyProbeIdx.setOptionalProbeCartridgeIdValue( existing->getOptionalProbeCartridgeIdValue() );
		}
		if( existing->isOptionalProbeGenItemIdNull() ) {
			keyProbeIdx.setOptionalProbeGenItemIdNull();
		}
		else {
			keyProbeIdx.setOptionalProbeGenItemIdValue( existing->getOptionalProbeGenItemIdValue() );
		}
		// Validate reverse foreign keys

		{
			cfcore::CFGenKbGenIteratorBuff* refItemIdIdx = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredCartridgeId(),
						existing->getRequiredItemId() ) );
			if( refItemIdIdx != NULL ) {
				delete refItemIdIdx;
				refItemIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GenIterator for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGenReferenceBuff* refItemIdIdx = dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( schema->getTableGenReference()->readDerivedByItemIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredCartridgeId(),
						existing->getRequiredItemId() ) );
			if( refItemIdIdx != NULL ) {
				delete refItemIdIdx;
				refItemIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GenReference for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGenRuleBuff* refItemIdIdx = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredCartridgeId(),
						existing->getRequiredItemId() ) );
			if( refItemIdIdx != NULL ) {
				delete refItemIdIdx;
				refItemIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GenRule for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGenBindBuff* refItemIdIdx = dynamic_cast<cfcore::CFGenKbGenBindBuff*>( schema->getTableGenBind()->readDerivedByItemIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredCartridgeId(),
						existing->getRequiredItemId() ) );
			if( refItemIdIdx != NULL ) {
				delete refItemIdIdx;
				refItemIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GenBind for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenItemBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByCartIdx = dictByCartIdx->find( keyCartIdx );
		if( searchDictByCartIdx != dictByCartIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictCartIdx = searchDictByCartIdx->second;
			auto searchSubDict = subdictCartIdx->find( pkey );
			if( searchSubDict != subdictCartIdx->end() ) {
				subdictCartIdx->erase( searchSubDict );
			}
			subdictCartIdx = NULL;
		}

		auto searchDictByRuleTypeIdx = dictByRuleTypeIdx->find( keyRuleTypeIdx );
		if( searchDictByRuleTypeIdx != dictByRuleTypeIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictRuleTypeIdx = searchDictByRuleTypeIdx->second;
			auto searchSubDict = subdictRuleTypeIdx->find( pkey );
			if( searchSubDict != subdictRuleTypeIdx->end() ) {
				subdictRuleTypeIdx->erase( searchSubDict );
			}
			subdictRuleTypeIdx = NULL;
		}

		auto searchDictByToolSetIdx = dictByToolSetIdx->find( keyToolSetIdx );
		if( searchDictByToolSetIdx != dictByToolSetIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictToolSetIdx = searchDictByToolSetIdx->second;
			auto searchSubDict = subdictToolSetIdx->find( pkey );
			if( searchSubDict != subdictToolSetIdx->end() ) {
				subdictToolSetIdx->erase( searchSubDict );
			}
			subdictToolSetIdx = NULL;
		}

		auto searchDictByScopeIdx = dictByScopeIdx->find( keyScopeIdx );
		if( searchDictByScopeIdx != dictByScopeIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictScopeIdx = searchDictByScopeIdx->second;
			auto searchSubDict = subdictScopeIdx->find( pkey );
			if( searchSubDict != subdictScopeIdx->end() ) {
				subdictScopeIdx->erase( searchSubDict );
			}
			subdictScopeIdx = NULL;
		}

		auto searchDictByGenDefIdx = dictByGenDefIdx->find( keyGenDefIdx );
		if( searchDictByGenDefIdx != dictByGenDefIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictGenDefIdx = searchDictByGenDefIdx->second;
			auto searchSubDict = subdictGenDefIdx->find( pkey );
			if( searchSubDict != subdictGenDefIdx->end() ) {
				subdictGenDefIdx->erase( searchSubDict );
			}
			subdictGenDefIdx = NULL;
		}

		auto searchDictByAltIdx = dictByAltIdx->find( keyAltIdx );
		if( searchDictByAltIdx != dictByAltIdx->end() ) {
			dictByAltIdx->erase( searchDictByAltIdx );
		}

		auto searchDictByGelExecIdx = dictByGelExecIdx->find( keyGelExecIdx );
		if( searchDictByGelExecIdx != dictByGelExecIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictGelExecIdx = searchDictByGelExecIdx->second;
			auto searchSubDict = subdictGelExecIdx->find( pkey );
			if( searchSubDict != subdictGelExecIdx->end() ) {
				subdictGelExecIdx->erase( searchSubDict );
			}
			subdictGelExecIdx = NULL;
		}

		auto searchDictByProbeIdx = dictByProbeIdx->find( keyProbeIdx );
		if( searchDictByProbeIdx != dictByProbeIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenItemBuff*>* subdictProbeIdx = searchDictByProbeIdx->second;
			auto searchSubDict = subdictProbeIdx->find( pkey );
			if( searchSubDict != subdictProbeIdx->end() ) {
				subdictProbeIdx->erase( searchSubDict );
			}
			subdictProbeIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId )
	{
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		key.setRequiredItemId( argItemId );
		deleteGenItemByItemIdIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByItemIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGenItemByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByTenantIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId )
	{
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		deleteGenItemByCartIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByCartIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByCartIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId )
	{
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( argRuleTypeId );
		deleteGenItemByRuleTypeIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByRuleTypeIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId )
	{
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( argToolSetId );
		deleteGenItemByToolSetIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByToolSetIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId )
	{
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		deleteGenItemByScopeIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByScopeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByScopeIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( argGenDefId );
		deleteGenItemByGenDefIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByGenDefIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( argName );
		key.setRequiredToolSetId( argToolSetId );
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		key.setRequiredGenDefId( argGenDefId );
		deleteGenItemByAltIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByAltIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByAltIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId )
	{
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( argGelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *argGelExecutableTenantId );
		}
		if( argGelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *argGelExecutableGelCacheId );
		}
		if( argGelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *argGelExecutableId );
		}
		deleteGenItemByGelExecIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByGelExecIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalGelExecutableTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalGelExecutableGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalGelExecutableIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::deleteGenItemByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId )
	{
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( argProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *argProbeTenantId );
		}
		if( argProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *argProbeCartridgeId );
		}
		if( argProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *argProbeGenItemId );
		}
		deleteGenItemByProbeIdx( Authorization, &key );
	}

	void CFGenKbRamGenItemTable::deleteGenItemByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByProbeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenItemByProbeIdx" );
		cfcore::CFGenKbGenItemBuff* cur = NULL;
		cfcore::CFGenKbGenItemBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalProbeTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalProbeCartridgeIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalProbeGenItemIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenItemBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
				schema->getTableGenItem()->deleteGenItem( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				schema->getTableGenIterator()->deleteGenIterator( Authorization, dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
				schema->getTableGenReference()->deleteGenReference( Authorization, dynamic_cast<cfcore::CFGenKbGenReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
				schema->getTableGenBind()->deleteGenBind( Authorization, dynamic_cast<cfcore::CFGenKbGenBindBuff*>( cur ) );
			}
			else {
				std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( subClassCode ) + "\"" );
				throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
					S_ProcName,
					S_Msg );
			}
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenItemTable::releasePreparedStatements() {
	}

}
