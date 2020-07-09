
// Description: C++18 Implementation for an in-memory RAM DbIO for GelSpread.

/*
 *	org.msscf.msscf.CFCore
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

	const std::string CFGenKbRamGelSpreadTable::CLASS_NAME( "CFGenKbRamGelSpreadTable" );

	CFGenKbRamGelSpreadTable::CFGenKbRamGelSpreadTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelSpreadTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
		dictByBetweenIdx = new std::map<cfcore::CFGenKbGelSpreadByBetweenIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
		dictByBeforeIdx = new std::map<cfcore::CFGenKbGelSpreadByBeforeIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
		dictByFirstIdx = new std::map<cfcore::CFGenKbGelSpreadByFirstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
		dictByEachIdx = new std::map<cfcore::CFGenKbGelSpreadByEachIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
		dictByLastIdx = new std::map<cfcore::CFGenKbGelSpreadByLastIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
		dictByLoneIdx = new std::map<cfcore::CFGenKbGelSpreadByLoneIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
		dictByEmptyIdx = new std::map<cfcore::CFGenKbGelSpreadByEmptyIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>*>();
	}

	CFGenKbRamGelSpreadTable::~CFGenKbRamGelSpreadTable() {
		if( dictByBetweenIdx != NULL ) {
			for( auto iterDict = dictByBetweenIdx->begin(); iterDict != dictByBetweenIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByBetweenIdx;
			dictByBetweenIdx = NULL;
		}
		if( dictByBeforeIdx != NULL ) {
			for( auto iterDict = dictByBeforeIdx->begin(); iterDict != dictByBeforeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByBeforeIdx;
			dictByBeforeIdx = NULL;
		}
		if( dictByFirstIdx != NULL ) {
			for( auto iterDict = dictByFirstIdx->begin(); iterDict != dictByFirstIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByFirstIdx;
			dictByFirstIdx = NULL;
		}
		if( dictByEachIdx != NULL ) {
			for( auto iterDict = dictByEachIdx->begin(); iterDict != dictByEachIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByEachIdx;
			dictByEachIdx = NULL;
		}
		if( dictByLastIdx != NULL ) {
			for( auto iterDict = dictByLastIdx->begin(); iterDict != dictByLastIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByLastIdx;
			dictByLastIdx = NULL;
		}
		if( dictByLoneIdx != NULL ) {
			for( auto iterDict = dictByLoneIdx->begin(); iterDict != dictByLoneIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByLoneIdx;
			dictByLoneIdx = NULL;
		}
		if( dictByEmptyIdx != NULL ) {
			for( auto iterDict = dictByEmptyIdx->begin(); iterDict != dictByEmptyIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByEmptyIdx;
			dictByEmptyIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::createGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSpreadBuff* Buff )
	{
		static const std::string S_ProcName( "createGelSpread" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		cfcore::CFGenKbGelSpreadByBetweenIdxKey keyBetweenIdx;
		if( Buff->isOptionalExpandBetweenNull() ) {
			keyBetweenIdx.setOptionalExpandBetweenNull();
		}
		else {
			keyBetweenIdx.setOptionalExpandBetweenValue( Buff->getOptionalExpandBetweenValue() );
		}
		cfcore::CFGenKbGelSpreadByBeforeIdxKey keyBeforeIdx;
		if( Buff->isOptionalExpandBeforeNull() ) {
			keyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			keyBeforeIdx.setOptionalExpandBeforeValue( Buff->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelSpreadByFirstIdxKey keyFirstIdx;
		if( Buff->isOptionalExpandFirstNull() ) {
			keyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			keyFirstIdx.setOptionalExpandFirstValue( Buff->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelSpreadByEachIdxKey keyEachIdx;
		keyEachIdx.setRequiredExpandEach( Buff->getRequiredExpandEach() );
		cfcore::CFGenKbGelSpreadByLastIdxKey keyLastIdx;
		if( Buff->isOptionalExpandLastNull() ) {
			keyLastIdx.setOptionalExpandLastNull();
		}
		else {
			keyLastIdx.setOptionalExpandLastValue( Buff->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelSpreadByLoneIdxKey keyLoneIdx;
		if( Buff->isOptionalExpandLoneNull() ) {
			keyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			keyLoneIdx.setOptionalExpandLoneValue( Buff->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelSpreadByEmptyIdxKey keyEmptyIdx;
		if( Buff->isOptionalExpandEmptyNull() ) {
			keyEmptyIdx.setOptionalExpandEmptyNull();
		}
		else {
			keyEmptyIdx.setOptionalExpandEmptyValue( Buff->getOptionalExpandEmptyValue() );
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
		cfcore::CFGenKbGelSpreadBuff* buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( schema->getTableGelInstruction()->createGelInstruction( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictBetweenIdx;
		auto searchDictByBetweenIdx = dictByBetweenIdx->find( keyBetweenIdx );
		if( searchDictByBetweenIdx != dictByBetweenIdx->end() ) {
			subdictBetweenIdx = searchDictByBetweenIdx->second;
		}
		else {
			subdictBetweenIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByBetweenIdx->insert( std::map<cfcore::CFGenKbGelSpreadByBetweenIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyBetweenIdx, subdictBetweenIdx ) );
		}
		subdictBetweenIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictBeforeIdx;
		auto searchDictByBeforeIdx = dictByBeforeIdx->find( keyBeforeIdx );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			subdictBeforeIdx = searchDictByBeforeIdx->second;
		}
		else {
			subdictBeforeIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByBeforeIdx->insert( std::map<cfcore::CFGenKbGelSpreadByBeforeIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyBeforeIdx, subdictBeforeIdx ) );
		}
		subdictBeforeIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictFirstIdx;
		auto searchDictByFirstIdx = dictByFirstIdx->find( keyFirstIdx );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			subdictFirstIdx = searchDictByFirstIdx->second;
		}
		else {
			subdictFirstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByFirstIdx->insert( std::map<cfcore::CFGenKbGelSpreadByFirstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyFirstIdx, subdictFirstIdx ) );
		}
		subdictFirstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictEachIdx;
		auto searchDictByEachIdx = dictByEachIdx->find( keyEachIdx );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			subdictEachIdx = searchDictByEachIdx->second;
		}
		else {
			subdictEachIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByEachIdx->insert( std::map<cfcore::CFGenKbGelSpreadByEachIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyEachIdx, subdictEachIdx ) );
		}
		subdictEachIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictLastIdx;
		auto searchDictByLastIdx = dictByLastIdx->find( keyLastIdx );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			subdictLastIdx = searchDictByLastIdx->second;
		}
		else {
			subdictLastIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByLastIdx->insert( std::map<cfcore::CFGenKbGelSpreadByLastIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyLastIdx, subdictLastIdx ) );
		}
		subdictLastIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictLoneIdx;
		auto searchDictByLoneIdx = dictByLoneIdx->find( keyLoneIdx );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			subdictLoneIdx = searchDictByLoneIdx->second;
		}
		else {
			subdictLoneIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByLoneIdx->insert( std::map<cfcore::CFGenKbGelSpreadByLoneIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyLoneIdx, subdictLoneIdx ) );
		}
		subdictLoneIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdictEmptyIdx;
		auto searchDictByEmptyIdx = dictByEmptyIdx->find( keyEmptyIdx );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			subdictEmptyIdx = searchDictByEmptyIdx->second;
		}
		else {
			subdictEmptyIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByEmptyIdx->insert( std::map<cfcore::CFGenKbGelSpreadByEmptyIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( keyEmptyIdx, subdictEmptyIdx ) );
		}
		subdictEmptyIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelSpreadBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readDerivedByChainIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween )
	{
		static const std::string S_ProcName( "readDerivedByBetweenIdx" );
		cfcore::CFGenKbGelSpreadByBetweenIdxKey key;
		if( ExpandBetween == NULL ) {
			key.setOptionalExpandBetweenNull();
		}
		else {
			key.setOptionalExpandBetweenValue( *ExpandBetween );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByBetweenIdx = dictByBetweenIdx->find( key );
		if( searchDictByBetweenIdx != dictByBetweenIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictBetweenIdx = searchDictByBetweenIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictBetweenIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictBetweenIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore )
	{
		static const std::string S_ProcName( "readDerivedByBeforeIdx" );
		cfcore::CFGenKbGelSpreadByBeforeIdxKey key;
		if( ExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *ExpandBefore );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByBeforeIdx = dictByBeforeIdx->find( key );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictBeforeIdx = searchDictByBeforeIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictBeforeIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictBeforeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst )
	{
		static const std::string S_ProcName( "readDerivedByFirstIdx" );
		cfcore::CFGenKbGelSpreadByFirstIdxKey key;
		if( ExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *ExpandFirst );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByFirstIdx = dictByFirstIdx->find( key );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictFirstIdx = searchDictByFirstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictFirstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictFirstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach )
	{
		static const std::string S_ProcName( "readDerivedByEachIdx" );
		cfcore::CFGenKbGelSpreadByEachIdxKey key;
		key.setRequiredExpandEach( ExpandEach );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByEachIdx = dictByEachIdx->find( key );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictEachIdx = searchDictByEachIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictEachIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictEachIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast )
	{
		static const std::string S_ProcName( "readDerivedByLastIdx" );
		cfcore::CFGenKbGelSpreadByLastIdxKey key;
		if( ExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *ExpandLast );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByLastIdx = dictByLastIdx->find( key );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictLastIdx = searchDictByLastIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictLastIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictLastIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone )
	{
		static const std::string S_ProcName( "readDerivedByLoneIdx" );
		cfcore::CFGenKbGelSpreadByLoneIdxKey key;
		if( ExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *ExpandLone );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByLoneIdx = dictByLoneIdx->find( key );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictLoneIdx = searchDictByLoneIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictLoneIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictLoneIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readDerivedByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty )
	{
		static const std::string S_ProcName( "readDerivedByEmptyIdx" );
		cfcore::CFGenKbGelSpreadByEmptyIdxKey key;
		if( ExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *ExpandEmpty );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> recVec;
		cfcore::CFGenKbGelSpreadBuff* clone;
		auto searchDictByEmptyIdx = dictByEmptyIdx->find( key );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictEmptyIdx = searchDictByEmptyIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator iter = subdictEmptyIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSpreadBuff*>::iterator end = subdictEmptyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelSpreadBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelSpreadBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff ) );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelSpreadBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween )
	{
		static const std::string S_ProcName( "readBuffByBetweenIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByBetweenIdx( Authorization,
			ExpandBetween );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore )
	{
		static const std::string S_ProcName( "readBuffByBeforeIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByBeforeIdx( Authorization,
			ExpandBefore );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst )
	{
		static const std::string S_ProcName( "readBuffByFirstIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByFirstIdx( Authorization,
			ExpandFirst );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach )
	{
		static const std::string S_ProcName( "readBuffByEachIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByEachIdx( Authorization,
			ExpandEach );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast )
	{
		static const std::string S_ProcName( "readBuffByLastIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByLastIdx( Authorization,
			ExpandLast );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone )
	{
		static const std::string S_ProcName( "readBuffByLoneIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByLoneIdx( Authorization,
			ExpandLone );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::readBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty )
	{
		static const std::string S_ProcName( "readBuffByEmptyIdx" );
		cfcore::CFGenKbGelSpreadBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = readDerivedByEmptyIdx( Authorization,
			ExpandEmpty );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBetween,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByBetweenIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByBeforeIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByFirstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByEachIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByLastIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByLoneIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> CFGenKbRamGelSpreadTable::pageBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByEmptyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGelSpreadBuff* CFGenKbRamGelSpreadTable::updateGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSpreadBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelSpread" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelSpread for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelSpreadBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGelSpreadByBetweenIdxKey existingKeyBetweenIdx;
		if( existing->isOptionalExpandBetweenNull() ) {
			existingKeyBetweenIdx.setOptionalExpandBetweenNull();
		}
		else {
			existingKeyBetweenIdx.setOptionalExpandBetweenValue( existing->getOptionalExpandBetweenValue() );
		}
		cfcore::CFGenKbGelSpreadByBetweenIdxKey newKeyBetweenIdx;
		if( Buff->isOptionalExpandBetweenNull() ) {
			newKeyBetweenIdx.setOptionalExpandBetweenNull();
		}
		else {
			newKeyBetweenIdx.setOptionalExpandBetweenValue( Buff->getOptionalExpandBetweenValue() );
		}
		cfcore::CFGenKbGelSpreadByBeforeIdxKey existingKeyBeforeIdx;
		if( existing->isOptionalExpandBeforeNull() ) {
			existingKeyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			existingKeyBeforeIdx.setOptionalExpandBeforeValue( existing->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelSpreadByBeforeIdxKey newKeyBeforeIdx;
		if( Buff->isOptionalExpandBeforeNull() ) {
			newKeyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			newKeyBeforeIdx.setOptionalExpandBeforeValue( Buff->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelSpreadByFirstIdxKey existingKeyFirstIdx;
		if( existing->isOptionalExpandFirstNull() ) {
			existingKeyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			existingKeyFirstIdx.setOptionalExpandFirstValue( existing->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelSpreadByFirstIdxKey newKeyFirstIdx;
		if( Buff->isOptionalExpandFirstNull() ) {
			newKeyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			newKeyFirstIdx.setOptionalExpandFirstValue( Buff->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelSpreadByEachIdxKey existingKeyEachIdx;
		existingKeyEachIdx.setRequiredExpandEach( existing->getRequiredExpandEach() );
		cfcore::CFGenKbGelSpreadByEachIdxKey newKeyEachIdx;
		newKeyEachIdx.setRequiredExpandEach( Buff->getRequiredExpandEach() );
		cfcore::CFGenKbGelSpreadByLastIdxKey existingKeyLastIdx;
		if( existing->isOptionalExpandLastNull() ) {
			existingKeyLastIdx.setOptionalExpandLastNull();
		}
		else {
			existingKeyLastIdx.setOptionalExpandLastValue( existing->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelSpreadByLastIdxKey newKeyLastIdx;
		if( Buff->isOptionalExpandLastNull() ) {
			newKeyLastIdx.setOptionalExpandLastNull();
		}
		else {
			newKeyLastIdx.setOptionalExpandLastValue( Buff->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelSpreadByLoneIdxKey existingKeyLoneIdx;
		if( existing->isOptionalExpandLoneNull() ) {
			existingKeyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			existingKeyLoneIdx.setOptionalExpandLoneValue( existing->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelSpreadByLoneIdxKey newKeyLoneIdx;
		if( Buff->isOptionalExpandLoneNull() ) {
			newKeyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			newKeyLoneIdx.setOptionalExpandLoneValue( Buff->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelSpreadByEmptyIdxKey existingKeyEmptyIdx;
		if( existing->isOptionalExpandEmptyNull() ) {
			existingKeyEmptyIdx.setOptionalExpandEmptyNull();
		}
		else {
			existingKeyEmptyIdx.setOptionalExpandEmptyValue( existing->getOptionalExpandEmptyValue() );
		}
		cfcore::CFGenKbGelSpreadByEmptyIdxKey newKeyEmptyIdx;
		if( Buff->isOptionalExpandEmptyNull() ) {
			newKeyEmptyIdx.setOptionalExpandEmptyNull();
		}
		else {
			newKeyEmptyIdx.setOptionalExpandEmptyValue( Buff->getOptionalExpandEmptyValue() );
		}
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbGelInstructionBuff* chk = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( schema->getTableGelInstruction()->readDerivedByPIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredGelCacheId(),
						Buff->getRequiredGelInstId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table GelInstruction" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( schema->getTableGelInstruction()->updateGelInstruction( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictBetweenIdx;
		auto searchDictByBetweenIdx = dictByBetweenIdx->find( existingKeyBetweenIdx );
		if( searchDictByBetweenIdx != dictByBetweenIdx->end() ) {
			subdictBetweenIdx = searchDictByBetweenIdx->second;
			auto searchSubDict = subdictBetweenIdx->find( pkey );
			if( searchSubDict != subdictBetweenIdx->end() ) {
				subdictBetweenIdx->erase( searchSubDict );
			}
			if( subdictBetweenIdx->size() <= 0 ) {
				delete subdictBetweenIdx;
				dictByBetweenIdx->erase( searchDictByBetweenIdx );
			}
			subdictBetweenIdx = NULL;
		}
		auto searchNewKeyDictByBetweenIdx = dictByBetweenIdx->find( newKeyBetweenIdx );
		if( searchNewKeyDictByBetweenIdx != dictByBetweenIdx->end() ) {
			subdictBetweenIdx = searchNewKeyDictByBetweenIdx->second;
		}
		else {
			subdictBetweenIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByBetweenIdx->insert( std::map<cfcore::CFGenKbGelSpreadByBetweenIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyBetweenIdx, subdictBetweenIdx ) );
		}
		subdictBetweenIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictBeforeIdx;
		auto searchDictByBeforeIdx = dictByBeforeIdx->find( existingKeyBeforeIdx );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			subdictBeforeIdx = searchDictByBeforeIdx->second;
			auto searchSubDict = subdictBeforeIdx->find( pkey );
			if( searchSubDict != subdictBeforeIdx->end() ) {
				subdictBeforeIdx->erase( searchSubDict );
			}
			if( subdictBeforeIdx->size() <= 0 ) {
				delete subdictBeforeIdx;
				dictByBeforeIdx->erase( searchDictByBeforeIdx );
			}
			subdictBeforeIdx = NULL;
		}
		auto searchNewKeyDictByBeforeIdx = dictByBeforeIdx->find( newKeyBeforeIdx );
		if( searchNewKeyDictByBeforeIdx != dictByBeforeIdx->end() ) {
			subdictBeforeIdx = searchNewKeyDictByBeforeIdx->second;
		}
		else {
			subdictBeforeIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByBeforeIdx->insert( std::map<cfcore::CFGenKbGelSpreadByBeforeIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyBeforeIdx, subdictBeforeIdx ) );
		}
		subdictBeforeIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictFirstIdx;
		auto searchDictByFirstIdx = dictByFirstIdx->find( existingKeyFirstIdx );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			subdictFirstIdx = searchDictByFirstIdx->second;
			auto searchSubDict = subdictFirstIdx->find( pkey );
			if( searchSubDict != subdictFirstIdx->end() ) {
				subdictFirstIdx->erase( searchSubDict );
			}
			if( subdictFirstIdx->size() <= 0 ) {
				delete subdictFirstIdx;
				dictByFirstIdx->erase( searchDictByFirstIdx );
			}
			subdictFirstIdx = NULL;
		}
		auto searchNewKeyDictByFirstIdx = dictByFirstIdx->find( newKeyFirstIdx );
		if( searchNewKeyDictByFirstIdx != dictByFirstIdx->end() ) {
			subdictFirstIdx = searchNewKeyDictByFirstIdx->second;
		}
		else {
			subdictFirstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByFirstIdx->insert( std::map<cfcore::CFGenKbGelSpreadByFirstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyFirstIdx, subdictFirstIdx ) );
		}
		subdictFirstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictEachIdx;
		auto searchDictByEachIdx = dictByEachIdx->find( existingKeyEachIdx );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			subdictEachIdx = searchDictByEachIdx->second;
			auto searchSubDict = subdictEachIdx->find( pkey );
			if( searchSubDict != subdictEachIdx->end() ) {
				subdictEachIdx->erase( searchSubDict );
			}
			if( subdictEachIdx->size() <= 0 ) {
				delete subdictEachIdx;
				dictByEachIdx->erase( searchDictByEachIdx );
			}
			subdictEachIdx = NULL;
		}
		auto searchNewKeyDictByEachIdx = dictByEachIdx->find( newKeyEachIdx );
		if( searchNewKeyDictByEachIdx != dictByEachIdx->end() ) {
			subdictEachIdx = searchNewKeyDictByEachIdx->second;
		}
		else {
			subdictEachIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByEachIdx->insert( std::map<cfcore::CFGenKbGelSpreadByEachIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyEachIdx, subdictEachIdx ) );
		}
		subdictEachIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictLastIdx;
		auto searchDictByLastIdx = dictByLastIdx->find( existingKeyLastIdx );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			subdictLastIdx = searchDictByLastIdx->second;
			auto searchSubDict = subdictLastIdx->find( pkey );
			if( searchSubDict != subdictLastIdx->end() ) {
				subdictLastIdx->erase( searchSubDict );
			}
			if( subdictLastIdx->size() <= 0 ) {
				delete subdictLastIdx;
				dictByLastIdx->erase( searchDictByLastIdx );
			}
			subdictLastIdx = NULL;
		}
		auto searchNewKeyDictByLastIdx = dictByLastIdx->find( newKeyLastIdx );
		if( searchNewKeyDictByLastIdx != dictByLastIdx->end() ) {
			subdictLastIdx = searchNewKeyDictByLastIdx->second;
		}
		else {
			subdictLastIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByLastIdx->insert( std::map<cfcore::CFGenKbGelSpreadByLastIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyLastIdx, subdictLastIdx ) );
		}
		subdictLastIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictLoneIdx;
		auto searchDictByLoneIdx = dictByLoneIdx->find( existingKeyLoneIdx );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			subdictLoneIdx = searchDictByLoneIdx->second;
			auto searchSubDict = subdictLoneIdx->find( pkey );
			if( searchSubDict != subdictLoneIdx->end() ) {
				subdictLoneIdx->erase( searchSubDict );
			}
			if( subdictLoneIdx->size() <= 0 ) {
				delete subdictLoneIdx;
				dictByLoneIdx->erase( searchDictByLoneIdx );
			}
			subdictLoneIdx = NULL;
		}
		auto searchNewKeyDictByLoneIdx = dictByLoneIdx->find( newKeyLoneIdx );
		if( searchNewKeyDictByLoneIdx != dictByLoneIdx->end() ) {
			subdictLoneIdx = searchNewKeyDictByLoneIdx->second;
		}
		else {
			subdictLoneIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByLoneIdx->insert( std::map<cfcore::CFGenKbGelSpreadByLoneIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyLoneIdx, subdictLoneIdx ) );
		}
		subdictLoneIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSpreadBuff*>* subdictEmptyIdx;
		auto searchDictByEmptyIdx = dictByEmptyIdx->find( existingKeyEmptyIdx );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			subdictEmptyIdx = searchDictByEmptyIdx->second;
			auto searchSubDict = subdictEmptyIdx->find( pkey );
			if( searchSubDict != subdictEmptyIdx->end() ) {
				subdictEmptyIdx->erase( searchSubDict );
			}
			if( subdictEmptyIdx->size() <= 0 ) {
				delete subdictEmptyIdx;
				dictByEmptyIdx->erase( searchDictByEmptyIdx );
			}
			subdictEmptyIdx = NULL;
		}
		auto searchNewKeyDictByEmptyIdx = dictByEmptyIdx->find( newKeyEmptyIdx );
		if( searchNewKeyDictByEmptyIdx != dictByEmptyIdx->end() ) {
			subdictEmptyIdx = searchNewKeyDictByEmptyIdx->second;
		}
		else {
			subdictEmptyIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>();
			dictByEmptyIdx->insert( std::map<cfcore::CFGenKbGelSpreadByEmptyIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSpreadBuff*>*>::value_type( newKeyEmptyIdx, subdictEmptyIdx ) );
		}
		subdictEmptyIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelSpreadBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpread( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSpreadBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelSpread" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbGelSpreadBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelSpreadByBetweenIdxKey keyBetweenIdx;
		if( existing->isOptionalExpandBetweenNull() ) {
			keyBetweenIdx.setOptionalExpandBetweenNull();
		}
		else {
			keyBetweenIdx.setOptionalExpandBetweenValue( existing->getOptionalExpandBetweenValue() );
		}
		cfcore::CFGenKbGelSpreadByBeforeIdxKey keyBeforeIdx;
		if( existing->isOptionalExpandBeforeNull() ) {
			keyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			keyBeforeIdx.setOptionalExpandBeforeValue( existing->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelSpreadByFirstIdxKey keyFirstIdx;
		if( existing->isOptionalExpandFirstNull() ) {
			keyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			keyFirstIdx.setOptionalExpandFirstValue( existing->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelSpreadByEachIdxKey keyEachIdx;
		keyEachIdx.setRequiredExpandEach( existing->getRequiredExpandEach() );
		cfcore::CFGenKbGelSpreadByLastIdxKey keyLastIdx;
		if( existing->isOptionalExpandLastNull() ) {
			keyLastIdx.setOptionalExpandLastNull();
		}
		else {
			keyLastIdx.setOptionalExpandLastValue( existing->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelSpreadByLoneIdxKey keyLoneIdx;
		if( existing->isOptionalExpandLoneNull() ) {
			keyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			keyLoneIdx.setOptionalExpandLoneValue( existing->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelSpreadByEmptyIdxKey keyEmptyIdx;
		if( existing->isOptionalExpandEmptyNull() ) {
			keyEmptyIdx.setOptionalExpandEmptyNull();
		}
		else {
			keyEmptyIdx.setOptionalExpandEmptyValue( existing->getOptionalExpandEmptyValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSpreadBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByBetweenIdx = dictByBetweenIdx->find( keyBetweenIdx );
		if( searchDictByBetweenIdx != dictByBetweenIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictBetweenIdx = searchDictByBetweenIdx->second;
			auto searchSubDict = subdictBetweenIdx->find( pkey );
			if( searchSubDict != subdictBetweenIdx->end() ) {
				subdictBetweenIdx->erase( searchSubDict );
			}
			subdictBetweenIdx = NULL;
		}

		auto searchDictByBeforeIdx = dictByBeforeIdx->find( keyBeforeIdx );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictBeforeIdx = searchDictByBeforeIdx->second;
			auto searchSubDict = subdictBeforeIdx->find( pkey );
			if( searchSubDict != subdictBeforeIdx->end() ) {
				subdictBeforeIdx->erase( searchSubDict );
			}
			subdictBeforeIdx = NULL;
		}

		auto searchDictByFirstIdx = dictByFirstIdx->find( keyFirstIdx );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictFirstIdx = searchDictByFirstIdx->second;
			auto searchSubDict = subdictFirstIdx->find( pkey );
			if( searchSubDict != subdictFirstIdx->end() ) {
				subdictFirstIdx->erase( searchSubDict );
			}
			subdictFirstIdx = NULL;
		}

		auto searchDictByEachIdx = dictByEachIdx->find( keyEachIdx );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictEachIdx = searchDictByEachIdx->second;
			auto searchSubDict = subdictEachIdx->find( pkey );
			if( searchSubDict != subdictEachIdx->end() ) {
				subdictEachIdx->erase( searchSubDict );
			}
			subdictEachIdx = NULL;
		}

		auto searchDictByLastIdx = dictByLastIdx->find( keyLastIdx );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictLastIdx = searchDictByLastIdx->second;
			auto searchSubDict = subdictLastIdx->find( pkey );
			if( searchSubDict != subdictLastIdx->end() ) {
				subdictLastIdx->erase( searchSubDict );
			}
			subdictLastIdx = NULL;
		}

		auto searchDictByLoneIdx = dictByLoneIdx->find( keyLoneIdx );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictLoneIdx = searchDictByLoneIdx->second;
			auto searchSubDict = subdictLoneIdx->find( pkey );
			if( searchSubDict != subdictLoneIdx->end() ) {
				subdictLoneIdx->erase( searchSubDict );
			}
			subdictLoneIdx = NULL;
		}

		auto searchDictByEmptyIdx = dictByEmptyIdx->find( keyEmptyIdx );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSpreadBuff*>* subdictEmptyIdx = searchDictByEmptyIdx->second;
			auto searchSubDict = subdictEmptyIdx->find( pkey );
			if( searchSubDict != subdictEmptyIdx->end() ) {
				subdictEmptyIdx->erase( searchSubDict );
			}
			subdictEmptyIdx = NULL;
		}

		schema->getTableGelInstruction()->deleteGelInstruction( Authorization,
			Buff );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBetween )
	{
		cfcore::CFGenKbGelSpreadByBetweenIdxKey key;
		if( argExpandBetween == NULL ) {
			key.setOptionalExpandBetweenNull();
		}
		else {
			key.setOptionalExpandBetweenValue( *argExpandBetween );
		}
		deleteGelSpreadByBetweenIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByBetweenIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByBetweenIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandBetweenNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBefore )
	{
		cfcore::CFGenKbGelSpreadByBeforeIdxKey key;
		if( argExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *argExpandBefore );
		}
		deleteGelSpreadByBeforeIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByBeforeIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandBeforeNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandFirst )
	{
		cfcore::CFGenKbGelSpreadByFirstIdxKey key;
		if( argExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *argExpandFirst );
		}
		deleteGelSpreadByFirstIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByFirstIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandFirstNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argExpandEach )
	{
		cfcore::CFGenKbGelSpreadByEachIdxKey key;
		key.setRequiredExpandEach( argExpandEach );
		deleteGelSpreadByEachIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByEachIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLast )
	{
		cfcore::CFGenKbGelSpreadByLastIdxKey key;
		if( argExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *argExpandLast );
		}
		deleteGelSpreadByLastIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByLastIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandLastNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLone )
	{
		cfcore::CFGenKbGelSpreadByLoneIdxKey key;
		if( argExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *argExpandLone );
		}
		deleteGelSpreadByLoneIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByLoneIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandLoneNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandEmpty )
	{
		cfcore::CFGenKbGelSpreadByEmptyIdxKey key;
		if( argExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *argExpandEmpty );
		}
		deleteGelSpreadByEmptyIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSpreadByEmptyIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandEmptyNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelSpreadByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelSpreadByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelSpreadByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId )
	{
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( argChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *argChainInstTenantId );
		}
		if( argChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *argChainInstGelCacheId );
		}
		if( argChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *argChainInstGelInstId );
		}
		deleteGelSpreadByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelSpreadTable::deleteGelSpreadByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		cfcore::CFGenKbGelSpreadBuff* cur = NULL;
		cfcore::CFGenKbGelSpreadBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalChainInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalChainInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalChainInstGelInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSpreadBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSpread( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSpreadTable::releasePreparedStatements() {
	}

}
