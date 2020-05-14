
// Description: C++18 Implementation for an in-memory RAM DbIO for GenRule.

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

	const std::string CFGenKbRamGenRuleTable::CLASS_NAME( "CFGenKbRamGenRuleTable" );

	CFGenKbRamGenRuleTable::CFGenKbRamGenRuleTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGenRuleTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>();
		dictByBodyIdx = new std::map<cfcore::CFGenKbGenRuleByBodyIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenRuleBuff*>*>();
	}

	CFGenKbRamGenRuleTable::~CFGenKbRamGenRuleTable() {
		if( dictByBodyIdx != NULL ) {
			for( auto iterDict = dictByBodyIdx->begin(); iterDict != dictByBodyIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByBodyIdx;
			dictByBodyIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::createGenRule( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenRuleBuff* Buff )
	{
		static const std::string S_ProcName( "createGenRule" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );
		cfcore::CFGenKbGenRuleByBodyIdxKey keyBodyIdx;
		if( Buff->isOptionalBodyTenantIdNull() ) {
			keyBodyIdx.setOptionalBodyTenantIdNull();
		}
		else {
			keyBodyIdx.setOptionalBodyTenantIdValue( Buff->getOptionalBodyTenantIdValue() );
		}
		if( Buff->isOptionalBodyGelCacheIdNull() ) {
			keyBodyIdx.setOptionalBodyGelCacheIdNull();
		}
		else {
			keyBodyIdx.setOptionalBodyGelCacheIdValue( Buff->getOptionalBodyGelCacheIdValue() );
		}
		if( Buff->isOptionalBodyGelIdNull() ) {
			keyBodyIdx.setOptionalBodyGelIdNull();
		}
		else {
			keyBodyIdx.setOptionalBodyGelIdValue( Buff->getOptionalBodyGelIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbGenRuleBuff* buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( schema->getTableGenItem()->createGenItem( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( buff->getRequiredItemId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>* subdictBodyIdx;
		auto searchDictByBodyIdx = dictByBodyIdx->find( keyBodyIdx );
		if( searchDictByBodyIdx != dictByBodyIdx->end() ) {
			subdictBodyIdx = searchDictByBodyIdx->second;
		}
		else {
			subdictBodyIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>();
			dictByBodyIdx->insert( std::map<cfcore::CFGenKbGenRuleByBodyIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenRuleBuff*>*>::value_type( keyBodyIdx, subdictBodyIdx ) );
		}
		subdictBodyIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGenRuleBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGenRuleBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> retVec;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGenRuleBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readDerivedByCartIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readDerivedByRuleTypeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readDerivedByToolSetIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByGenDefIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByGenDefIdx( Authorization,
			GenDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByAltIdx" );
		cfcore::CFGenKbGenItemBuff* buff = schema->getTableGenItem()->readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readDerivedByGelExecIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readDerivedByProbeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readDerivedByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		static const std::string S_ProcName( "readDerivedByBodyIdx" );
		cfcore::CFGenKbGenRuleByBodyIdxKey key;
		if( BodyTenantId == NULL ) {
			key.setOptionalBodyTenantIdNull();
		}
		else {
			key.setOptionalBodyTenantIdValue( *BodyTenantId );
		}
		if( BodyGelCacheId == NULL ) {
			key.setOptionalBodyGelCacheIdNull();
		}
		else {
			key.setOptionalBodyGelCacheIdValue( *BodyGelCacheId );
		}
		if( BodyGelId == NULL ) {
			key.setOptionalBodyGelIdNull();
		}
		else {
			key.setOptionalBodyGelIdValue( *BodyGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> recVec;
		cfcore::CFGenKbGenRuleBuff* clone;
		auto searchDictByBodyIdx = dictByBodyIdx->find( key );
		if( searchDictByBodyIdx != dictByBodyIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenRuleBuff*>* subdictBodyIdx = searchDictByBodyIdx->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenRuleBuff*>::iterator iter = subdictBodyIdx->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenRuleBuff*>::iterator end = subdictBodyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readDerivedByItemIdIdx" );
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		key.setRequiredItemId( ItemId );
		cfcore::CFGenKbGenRuleBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGenRuleBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGenRuleBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readBuffByItemIdIdx" );
		cfcore::CFGenKbGenRuleBuff* buff = readDerivedByItemIdIdx( Authorization,
			TenantId,
			CartridgeId,
			ItemId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readBuffByCartIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readBuffByRuleTypeIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readBuffByToolSetIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByGenDefIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByGenDefIdx( Authorization,
			GenDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByAltIdx" );
		cfcore::CFGenKbGenRuleBuff* buff = readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readBuffByGelExecIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readBuffByProbeIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::readBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		static const std::string S_ProcName( "readBuffByBodyIdx" );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = readDerivedByBodyIdx( Authorization,
			BodyTenantId,
			BodyGelCacheId,
			BodyGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> CFGenKbRamGenRuleTable::pageBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByBodyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGenRuleBuff* CFGenKbRamGenRuleTable::updateGenRule( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenRuleBuff* Buff )
	{
		static const std::string S_ProcName( "updateGenRule" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GenRule for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGenRuleBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGenRuleByBodyIdxKey existingKeyBodyIdx;
		if( existing->isOptionalBodyTenantIdNull() ) {
			existingKeyBodyIdx.setOptionalBodyTenantIdNull();
		}
		else {
			existingKeyBodyIdx.setOptionalBodyTenantIdValue( existing->getOptionalBodyTenantIdValue() );
		}
		if( existing->isOptionalBodyGelCacheIdNull() ) {
			existingKeyBodyIdx.setOptionalBodyGelCacheIdNull();
		}
		else {
			existingKeyBodyIdx.setOptionalBodyGelCacheIdValue( existing->getOptionalBodyGelCacheIdValue() );
		}
		if( existing->isOptionalBodyGelIdNull() ) {
			existingKeyBodyIdx.setOptionalBodyGelIdNull();
		}
		else {
			existingKeyBodyIdx.setOptionalBodyGelIdValue( existing->getOptionalBodyGelIdValue() );
		}
		cfcore::CFGenKbGenRuleByBodyIdxKey newKeyBodyIdx;
		if( Buff->isOptionalBodyTenantIdNull() ) {
			newKeyBodyIdx.setOptionalBodyTenantIdNull();
		}
		else {
			newKeyBodyIdx.setOptionalBodyTenantIdValue( Buff->getOptionalBodyTenantIdValue() );
		}
		if( Buff->isOptionalBodyGelCacheIdNull() ) {
			newKeyBodyIdx.setOptionalBodyGelCacheIdNull();
		}
		else {
			newKeyBodyIdx.setOptionalBodyGelCacheIdValue( Buff->getOptionalBodyGelCacheIdValue() );
		}
		if( Buff->isOptionalBodyGelIdNull() ) {
			newKeyBodyIdx.setOptionalBodyGelIdNull();
		}
		else {
			newKeyBodyIdx.setOptionalBodyGelIdValue( Buff->getOptionalBodyGelIdValue() );
		}
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbGenItemBuff* chk = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredCartridgeId(),
						Buff->getRequiredItemId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table GenItem" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( schema->getTableGenItem()->updateGenItem( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenRuleBuff*>* subdictBodyIdx;
		auto searchDictByBodyIdx = dictByBodyIdx->find( existingKeyBodyIdx );
		if( searchDictByBodyIdx != dictByBodyIdx->end() ) {
			subdictBodyIdx = searchDictByBodyIdx->second;
			auto searchSubDict = subdictBodyIdx->find( pkey );
			if( searchSubDict != subdictBodyIdx->end() ) {
				subdictBodyIdx->erase( searchSubDict );
			}
			if( subdictBodyIdx->size() <= 0 ) {
				delete subdictBodyIdx;
				dictByBodyIdx->erase( searchDictByBodyIdx );
			}
			subdictBodyIdx = NULL;
		}
		auto searchNewKeyDictByBodyIdx = dictByBodyIdx->find( newKeyBodyIdx );
		if( searchNewKeyDictByBodyIdx != dictByBodyIdx->end() ) {
			subdictBodyIdx = searchNewKeyDictByBodyIdx->second;
		}
		else {
			subdictBodyIdx = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>();
			dictByBodyIdx->insert( std::map<cfcore::CFGenKbGenRuleByBodyIdxKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenRuleBuff*>*>::value_type( newKeyBodyIdx, subdictBodyIdx ) );
		}
		subdictBodyIdx->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGenRuleBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGenRuleTable::deleteGenRule( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenRuleBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGenRule" );
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
		cfcore::CFGenKbGenRuleBuff* existing = searchExisting->second;
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalBodyTenantIdValue(),
			existing->getOptionalBodyGelCacheIdValue(),
			existing->getOptionalBodyGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalBodyTenantIdValue(),
			existing->getOptionalBodyGelCacheIdValue(),
			existing->getOptionalBodyGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalGelExecutableTenantIdValue(),
			existing->getOptionalGelExecutableGelCacheIdValue(),
			existing->getOptionalGelExecutableIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalGelExecutableTenantIdValue(),
			existing->getOptionalGelExecutableGelCacheIdValue(),
			existing->getOptionalGelExecutableIdValue() );
			}
		}
		cfcore::CFGenKbGenRuleByBodyIdxKey keyBodyIdx;
		if( existing->isOptionalBodyTenantIdNull() ) {
			keyBodyIdx.setOptionalBodyTenantIdNull();
		}
		else {
			keyBodyIdx.setOptionalBodyTenantIdValue( existing->getOptionalBodyTenantIdValue() );
		}
		if( existing->isOptionalBodyGelCacheIdNull() ) {
			keyBodyIdx.setOptionalBodyGelCacheIdNull();
		}
		else {
			keyBodyIdx.setOptionalBodyGelCacheIdValue( existing->getOptionalBodyGelCacheIdValue() );
		}
		if( existing->isOptionalBodyGelIdNull() ) {
			keyBodyIdx.setOptionalBodyGelIdNull();
		}
		else {
			keyBodyIdx.setOptionalBodyGelIdValue( existing->getOptionalBodyGelIdValue() );
		}
		// Validate reverse foreign keys

		{
			cfcore::CFGenKbGenTruncBuff* refItemIdIdx = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredCartridgeId(),
						existing->getRequiredItemId() ) );
			if( refItemIdIdx != NULL ) {
				delete refItemIdIdx;
				refItemIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GenTrunc for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGenFileBuff* refItemIdIdx = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredCartridgeId(),
						existing->getRequiredItemId() ) );
			if( refItemIdIdx != NULL ) {
				delete refItemIdIdx;
				refItemIdIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GenFile for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenRuleBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByBodyIdx = dictByBodyIdx->find( keyBodyIdx );
		if( searchDictByBodyIdx != dictByBodyIdx->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenRuleBuff*>* subdictBodyIdx = searchDictByBodyIdx->second;
			auto searchSubDict = subdictBodyIdx->find( pkey );
			if( searchSubDict != subdictBodyIdx->end() ) {
				subdictBodyIdx->erase( searchSubDict );
			}
			subdictBodyIdx = NULL;
		}

		schema->getTableGenItem()->deleteGenItem( Authorization,
			Buff );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBodyTenantId,
			const int64_t* argBodyGelCacheId,
			const int64_t* argBodyGelId )
	{
		cfcore::CFGenKbGenRuleByBodyIdxKey key;
		if( argBodyTenantId == NULL ) {
			key.setOptionalBodyTenantIdNull();
		}
		else {
			key.setOptionalBodyTenantIdValue( *argBodyTenantId );
		}
		if( argBodyGelCacheId == NULL ) {
			key.setOptionalBodyGelCacheIdNull();
		}
		else {
			key.setOptionalBodyGelCacheIdValue( *argBodyGelCacheId );
		}
		if( argBodyGelId == NULL ) {
			key.setOptionalBodyGelIdNull();
		}
		else {
			key.setOptionalBodyGelIdValue( *argBodyGelId );
		}
		deleteGenRuleByBodyIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenRuleByBodyIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByBodyIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalBodyTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalBodyGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalBodyGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId )
	{
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		key.setRequiredItemId( argItemId );
		deleteGenRuleByItemIdIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByItemIdIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGenRuleByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByTenantIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId )
	{
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		deleteGenRuleByCartIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByCartIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByCartIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId )
	{
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( argRuleTypeId );
		deleteGenRuleByRuleTypeIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByRuleTypeIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId )
	{
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( argToolSetId );
		deleteGenRuleByToolSetIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByToolSetIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId )
	{
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		deleteGenRuleByScopeIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByScopeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByScopeIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( argGenDefId );
		deleteGenRuleByGenDefIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByGenDefIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenRuleByAltIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByAltIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByAltIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenRuleByGelExecIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByGelExecIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::deleteGenRuleByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenRuleByProbeIdx( Authorization, &key );
	}

	void CFGenKbRamGenRuleTable::deleteGenRuleByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByProbeIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGenRuleByProbeIdx" );
		cfcore::CFGenKbGenRuleBuff* cur = NULL;
		cfcore::CFGenKbGenRuleBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenRuleBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
				schema->getTableGenRule()->deleteGenRule( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				schema->getTableGenTrunc()->deleteGenTrunc( Authorization, dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				schema->getTableGenFile()->deleteGenFile( Authorization, dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) );
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

	void CFGenKbRamGenRuleTable::releasePreparedStatements() {
	}

}
