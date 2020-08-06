
// Description: C++18 Implementation for an in-memory RAM DbIO for GelIterator.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
 *	
 *		This file is part of MSS Code Factory.
 *	
 *		MSS Code Factory is available under dual commercial license from Mark Stephen
 *		Sobkow, or under the terms of the GNU Lesser General Public License, Version 3
 *		or later.
 *	
 *	    MSS Code Factory is free software: you can redistribute it and/or modify
 *	    it under the terms of the GNU Lesser General Public License as published by
 *	    the Free Software Foundation, either version 3 of the License, or
 *	    (at your option) any later version.
 *	
 *	    MSS Code Factory is distributed in the hope that it will be useful,
 *	    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	    GNU Lesser General Public License for more details.
 *	
 *	    You should have received a copy of the GNU Lesser General Public License
 *	    along with MSS Code Factory.  If not, see <https://www.gnu.org/licenses/>.
 *	
 *	Donations to support MSS Code Factory can be made at
 *	https://www.paypal.com/paypalme2/MarkSobkow
 *	
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
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

	const std::string CFGenKbRamGelIteratorTable::CLASS_NAME( "CFGenKbRamGelIteratorTable" );

	CFGenKbRamGelIteratorTable::CFGenKbRamGelIteratorTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelIteratorTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
		dictByBeforeIdx = new std::map<cfcore::CFGenKbGelIteratorByBeforeIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>();
		dictByFirstIdx = new std::map<cfcore::CFGenKbGelIteratorByFirstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>();
		dictByEachIdx = new std::map<cfcore::CFGenKbGelIteratorByEachIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>();
		dictByLastIdx = new std::map<cfcore::CFGenKbGelIteratorByLastIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>();
		dictByLoneIdx = new std::map<cfcore::CFGenKbGelIteratorByLoneIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>();
		dictByEmptyIdx = new std::map<cfcore::CFGenKbGelIteratorByEmptyIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>*>();
	}

	CFGenKbRamGelIteratorTable::~CFGenKbRamGelIteratorTable() {
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

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::createGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelIteratorBuff* Buff )
	{
		static const std::string S_ProcName( "createGelIterator" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		cfcore::CFGenKbGelIteratorByBeforeIdxKey keyBeforeIdx;
		if( Buff->isOptionalExpandBeforeNull() ) {
			keyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			keyBeforeIdx.setOptionalExpandBeforeValue( Buff->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelIteratorByFirstIdxKey keyFirstIdx;
		if( Buff->isOptionalExpandFirstNull() ) {
			keyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			keyFirstIdx.setOptionalExpandFirstValue( Buff->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelIteratorByEachIdxKey keyEachIdx;
		keyEachIdx.setRequiredExpandEach( Buff->getRequiredExpandEach() );
		cfcore::CFGenKbGelIteratorByLastIdxKey keyLastIdx;
		if( Buff->isOptionalExpandLastNull() ) {
			keyLastIdx.setOptionalExpandLastNull();
		}
		else {
			keyLastIdx.setOptionalExpandLastValue( Buff->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelIteratorByLoneIdxKey keyLoneIdx;
		if( Buff->isOptionalExpandLoneNull() ) {
			keyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			keyLoneIdx.setOptionalExpandLoneValue( Buff->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelIteratorByEmptyIdxKey keyEmptyIdx;
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
		cfcore::CFGenKbGelIteratorBuff* buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( schema->getTableGelInstruction()->createGelInstruction( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdictBeforeIdx;
		auto searchDictByBeforeIdx = dictByBeforeIdx->find( keyBeforeIdx );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			subdictBeforeIdx = searchDictByBeforeIdx->second;
		}
		else {
			subdictBeforeIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByBeforeIdx->insert( std::map<cfcore::CFGenKbGelIteratorByBeforeIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( keyBeforeIdx, subdictBeforeIdx ) );
		}
		subdictBeforeIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdictFirstIdx;
		auto searchDictByFirstIdx = dictByFirstIdx->find( keyFirstIdx );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			subdictFirstIdx = searchDictByFirstIdx->second;
		}
		else {
			subdictFirstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByFirstIdx->insert( std::map<cfcore::CFGenKbGelIteratorByFirstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( keyFirstIdx, subdictFirstIdx ) );
		}
		subdictFirstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdictEachIdx;
		auto searchDictByEachIdx = dictByEachIdx->find( keyEachIdx );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			subdictEachIdx = searchDictByEachIdx->second;
		}
		else {
			subdictEachIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByEachIdx->insert( std::map<cfcore::CFGenKbGelIteratorByEachIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( keyEachIdx, subdictEachIdx ) );
		}
		subdictEachIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdictLastIdx;
		auto searchDictByLastIdx = dictByLastIdx->find( keyLastIdx );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			subdictLastIdx = searchDictByLastIdx->second;
		}
		else {
			subdictLastIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByLastIdx->insert( std::map<cfcore::CFGenKbGelIteratorByLastIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( keyLastIdx, subdictLastIdx ) );
		}
		subdictLastIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdictLoneIdx;
		auto searchDictByLoneIdx = dictByLoneIdx->find( keyLoneIdx );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			subdictLoneIdx = searchDictByLoneIdx->second;
		}
		else {
			subdictLoneIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByLoneIdx->insert( std::map<cfcore::CFGenKbGelIteratorByLoneIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( keyLoneIdx, subdictLoneIdx ) );
		}
		subdictLoneIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdictEmptyIdx;
		auto searchDictByEmptyIdx = dictByEmptyIdx->find( keyEmptyIdx );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			subdictEmptyIdx = searchDictByEmptyIdx->second;
		}
		else {
			subdictEmptyIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByEmptyIdx->insert( std::map<cfcore::CFGenKbGelIteratorByEmptyIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( keyEmptyIdx, subdictEmptyIdx ) );
		}
		subdictEmptyIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelIteratorBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore )
	{
		static const std::string S_ProcName( "readDerivedByBeforeIdx" );
		cfcore::CFGenKbGelIteratorByBeforeIdxKey key;
		if( ExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *ExpandBefore );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> recVec;
		cfcore::CFGenKbGelIteratorBuff* clone;
		auto searchDictByBeforeIdx = dictByBeforeIdx->find( key );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictBeforeIdx = searchDictByBeforeIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator iter = subdictBeforeIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator end = subdictBeforeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst )
	{
		static const std::string S_ProcName( "readDerivedByFirstIdx" );
		cfcore::CFGenKbGelIteratorByFirstIdxKey key;
		if( ExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *ExpandFirst );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> recVec;
		cfcore::CFGenKbGelIteratorBuff* clone;
		auto searchDictByFirstIdx = dictByFirstIdx->find( key );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictFirstIdx = searchDictByFirstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator iter = subdictFirstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator end = subdictFirstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach )
	{
		static const std::string S_ProcName( "readDerivedByEachIdx" );
		cfcore::CFGenKbGelIteratorByEachIdxKey key;
		key.setRequiredExpandEach( ExpandEach );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> recVec;
		cfcore::CFGenKbGelIteratorBuff* clone;
		auto searchDictByEachIdx = dictByEachIdx->find( key );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictEachIdx = searchDictByEachIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator iter = subdictEachIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator end = subdictEachIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast )
	{
		static const std::string S_ProcName( "readDerivedByLastIdx" );
		cfcore::CFGenKbGelIteratorByLastIdxKey key;
		if( ExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *ExpandLast );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> recVec;
		cfcore::CFGenKbGelIteratorBuff* clone;
		auto searchDictByLastIdx = dictByLastIdx->find( key );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictLastIdx = searchDictByLastIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator iter = subdictLastIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator end = subdictLastIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone )
	{
		static const std::string S_ProcName( "readDerivedByLoneIdx" );
		cfcore::CFGenKbGelIteratorByLoneIdxKey key;
		if( ExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *ExpandLone );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> recVec;
		cfcore::CFGenKbGelIteratorBuff* clone;
		auto searchDictByLoneIdx = dictByLoneIdx->find( key );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictLoneIdx = searchDictByLoneIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator iter = subdictLoneIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator end = subdictLoneIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readDerivedByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty )
	{
		static const std::string S_ProcName( "readDerivedByEmptyIdx" );
		cfcore::CFGenKbGelIteratorByEmptyIdxKey key;
		if( ExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *ExpandEmpty );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> recVec;
		cfcore::CFGenKbGelIteratorBuff* clone;
		auto searchDictByEmptyIdx = dictByEmptyIdx->find( key );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictEmptyIdx = searchDictByEmptyIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator iter = subdictEmptyIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelIteratorBuff*>::iterator end = subdictEmptyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelIteratorBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelIteratorBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelIteratorBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore )
	{
		static const std::string S_ProcName( "readBuffByBeforeIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByBeforeIdx( Authorization,
			ExpandBefore );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst )
	{
		static const std::string S_ProcName( "readBuffByFirstIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByFirstIdx( Authorization,
			ExpandFirst );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach )
	{
		static const std::string S_ProcName( "readBuffByEachIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByEachIdx( Authorization,
			ExpandEach );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast )
	{
		static const std::string S_ProcName( "readBuffByLastIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByLastIdx( Authorization,
			ExpandLast );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone )
	{
		static const std::string S_ProcName( "readBuffByLoneIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByLoneIdx( Authorization,
			ExpandLone );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::readBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty )
	{
		static const std::string S_ProcName( "readBuffByEmptyIdx" );
		cfcore::CFGenKbGelIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = readDerivedByEmptyIdx( Authorization,
			ExpandEmpty );
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::pageBuffByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandBefore,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByBeforeIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::pageBuffByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandFirst,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByFirstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::pageBuffByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& ExpandEach,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByEachIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::pageBuffByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLast,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByLastIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::pageBuffByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandLone,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByLoneIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> CFGenKbRamGelIteratorTable::pageBuffByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* ExpandEmpty,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByEmptyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGelIteratorBuff* CFGenKbRamGelIteratorTable::updateGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelIteratorBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelIterator" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelIterator for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelIteratorBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGelIteratorByBeforeIdxKey existingKeyBeforeIdx;
		if( existing->isOptionalExpandBeforeNull() ) {
			existingKeyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			existingKeyBeforeIdx.setOptionalExpandBeforeValue( existing->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelIteratorByBeforeIdxKey newKeyBeforeIdx;
		if( Buff->isOptionalExpandBeforeNull() ) {
			newKeyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			newKeyBeforeIdx.setOptionalExpandBeforeValue( Buff->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelIteratorByFirstIdxKey existingKeyFirstIdx;
		if( existing->isOptionalExpandFirstNull() ) {
			existingKeyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			existingKeyFirstIdx.setOptionalExpandFirstValue( existing->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelIteratorByFirstIdxKey newKeyFirstIdx;
		if( Buff->isOptionalExpandFirstNull() ) {
			newKeyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			newKeyFirstIdx.setOptionalExpandFirstValue( Buff->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelIteratorByEachIdxKey existingKeyEachIdx;
		existingKeyEachIdx.setRequiredExpandEach( existing->getRequiredExpandEach() );
		cfcore::CFGenKbGelIteratorByEachIdxKey newKeyEachIdx;
		newKeyEachIdx.setRequiredExpandEach( Buff->getRequiredExpandEach() );
		cfcore::CFGenKbGelIteratorByLastIdxKey existingKeyLastIdx;
		if( existing->isOptionalExpandLastNull() ) {
			existingKeyLastIdx.setOptionalExpandLastNull();
		}
		else {
			existingKeyLastIdx.setOptionalExpandLastValue( existing->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelIteratorByLastIdxKey newKeyLastIdx;
		if( Buff->isOptionalExpandLastNull() ) {
			newKeyLastIdx.setOptionalExpandLastNull();
		}
		else {
			newKeyLastIdx.setOptionalExpandLastValue( Buff->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelIteratorByLoneIdxKey existingKeyLoneIdx;
		if( existing->isOptionalExpandLoneNull() ) {
			existingKeyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			existingKeyLoneIdx.setOptionalExpandLoneValue( existing->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelIteratorByLoneIdxKey newKeyLoneIdx;
		if( Buff->isOptionalExpandLoneNull() ) {
			newKeyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			newKeyLoneIdx.setOptionalExpandLoneValue( Buff->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelIteratorByEmptyIdxKey existingKeyEmptyIdx;
		if( existing->isOptionalExpandEmptyNull() ) {
			existingKeyEmptyIdx.setOptionalExpandEmptyNull();
		}
		else {
			existingKeyEmptyIdx.setOptionalExpandEmptyValue( existing->getOptionalExpandEmptyValue() );
		}
		cfcore::CFGenKbGelIteratorByEmptyIdxKey newKeyEmptyIdx;
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
		existing = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( schema->getTableGelInstruction()->updateGelInstruction( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelIteratorBuff*>* subdictBeforeIdx;
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
			subdictBeforeIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByBeforeIdx->insert( std::map<cfcore::CFGenKbGelIteratorByBeforeIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( newKeyBeforeIdx, subdictBeforeIdx ) );
		}
		subdictBeforeIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelIteratorBuff*>* subdictFirstIdx;
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
			subdictFirstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByFirstIdx->insert( std::map<cfcore::CFGenKbGelIteratorByFirstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( newKeyFirstIdx, subdictFirstIdx ) );
		}
		subdictFirstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelIteratorBuff*>* subdictEachIdx;
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
			subdictEachIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByEachIdx->insert( std::map<cfcore::CFGenKbGelIteratorByEachIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( newKeyEachIdx, subdictEachIdx ) );
		}
		subdictEachIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelIteratorBuff*>* subdictLastIdx;
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
			subdictLastIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByLastIdx->insert( std::map<cfcore::CFGenKbGelIteratorByLastIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( newKeyLastIdx, subdictLastIdx ) );
		}
		subdictLastIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelIteratorBuff*>* subdictLoneIdx;
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
			subdictLoneIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByLoneIdx->insert( std::map<cfcore::CFGenKbGelIteratorByLoneIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( newKeyLoneIdx, subdictLoneIdx ) );
		}
		subdictLoneIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelIteratorBuff*>* subdictEmptyIdx;
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
			subdictEmptyIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>();
			dictByEmptyIdx->insert( std::map<cfcore::CFGenKbGelIteratorByEmptyIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelIteratorBuff*>*>::value_type( newKeyEmptyIdx, subdictEmptyIdx ) );
		}
		subdictEmptyIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelIteratorBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIterator( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelIteratorBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelIterator" );
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
		cfcore::CFGenKbGelIteratorBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelIteratorByBeforeIdxKey keyBeforeIdx;
		if( existing->isOptionalExpandBeforeNull() ) {
			keyBeforeIdx.setOptionalExpandBeforeNull();
		}
		else {
			keyBeforeIdx.setOptionalExpandBeforeValue( existing->getOptionalExpandBeforeValue() );
		}
		cfcore::CFGenKbGelIteratorByFirstIdxKey keyFirstIdx;
		if( existing->isOptionalExpandFirstNull() ) {
			keyFirstIdx.setOptionalExpandFirstNull();
		}
		else {
			keyFirstIdx.setOptionalExpandFirstValue( existing->getOptionalExpandFirstValue() );
		}
		cfcore::CFGenKbGelIteratorByEachIdxKey keyEachIdx;
		keyEachIdx.setRequiredExpandEach( existing->getRequiredExpandEach() );
		cfcore::CFGenKbGelIteratorByLastIdxKey keyLastIdx;
		if( existing->isOptionalExpandLastNull() ) {
			keyLastIdx.setOptionalExpandLastNull();
		}
		else {
			keyLastIdx.setOptionalExpandLastValue( existing->getOptionalExpandLastValue() );
		}
		cfcore::CFGenKbGelIteratorByLoneIdxKey keyLoneIdx;
		if( existing->isOptionalExpandLoneNull() ) {
			keyLoneIdx.setOptionalExpandLoneNull();
		}
		else {
			keyLoneIdx.setOptionalExpandLoneValue( existing->getOptionalExpandLoneValue() );
		}
		cfcore::CFGenKbGelIteratorByEmptyIdxKey keyEmptyIdx;
		if( existing->isOptionalExpandEmptyNull() ) {
			keyEmptyIdx.setOptionalExpandEmptyNull();
		}
		else {
			keyEmptyIdx.setOptionalExpandEmptyValue( existing->getOptionalExpandEmptyValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelIteratorBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByBeforeIdx = dictByBeforeIdx->find( keyBeforeIdx );
		if( searchDictByBeforeIdx != dictByBeforeIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictBeforeIdx = searchDictByBeforeIdx->second;
			auto searchSubDict = subdictBeforeIdx->find( pkey );
			if( searchSubDict != subdictBeforeIdx->end() ) {
				subdictBeforeIdx->erase( searchSubDict );
			}
			subdictBeforeIdx = NULL;
		}

		auto searchDictByFirstIdx = dictByFirstIdx->find( keyFirstIdx );
		if( searchDictByFirstIdx != dictByFirstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictFirstIdx = searchDictByFirstIdx->second;
			auto searchSubDict = subdictFirstIdx->find( pkey );
			if( searchSubDict != subdictFirstIdx->end() ) {
				subdictFirstIdx->erase( searchSubDict );
			}
			subdictFirstIdx = NULL;
		}

		auto searchDictByEachIdx = dictByEachIdx->find( keyEachIdx );
		if( searchDictByEachIdx != dictByEachIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictEachIdx = searchDictByEachIdx->second;
			auto searchSubDict = subdictEachIdx->find( pkey );
			if( searchSubDict != subdictEachIdx->end() ) {
				subdictEachIdx->erase( searchSubDict );
			}
			subdictEachIdx = NULL;
		}

		auto searchDictByLastIdx = dictByLastIdx->find( keyLastIdx );
		if( searchDictByLastIdx != dictByLastIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictLastIdx = searchDictByLastIdx->second;
			auto searchSubDict = subdictLastIdx->find( pkey );
			if( searchSubDict != subdictLastIdx->end() ) {
				subdictLastIdx->erase( searchSubDict );
			}
			subdictLastIdx = NULL;
		}

		auto searchDictByLoneIdx = dictByLoneIdx->find( keyLoneIdx );
		if( searchDictByLoneIdx != dictByLoneIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictLoneIdx = searchDictByLoneIdx->second;
			auto searchSubDict = subdictLoneIdx->find( pkey );
			if( searchSubDict != subdictLoneIdx->end() ) {
				subdictLoneIdx->erase( searchSubDict );
			}
			subdictLoneIdx = NULL;
		}

		auto searchDictByEmptyIdx = dictByEmptyIdx->find( keyEmptyIdx );
		if( searchDictByEmptyIdx != dictByEmptyIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelIteratorBuff*>* subdictEmptyIdx = searchDictByEmptyIdx->second;
			auto searchSubDict = subdictEmptyIdx->find( pkey );
			if( searchSubDict != subdictEmptyIdx->end() ) {
				subdictEmptyIdx->erase( searchSubDict );
			}
			subdictEmptyIdx = NULL;
		}

		schema->getTableGelInstruction()->deleteGelInstruction( Authorization,
			Buff );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandBefore )
	{
		cfcore::CFGenKbGelIteratorByBeforeIdxKey key;
		if( argExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *argExpandBefore );
		}
		deleteGelIteratorByBeforeIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByBeforeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelIteratorByBeforeIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandBeforeNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandFirst )
	{
		cfcore::CFGenKbGelIteratorByFirstIdxKey key;
		if( argExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *argExpandFirst );
		}
		deleteGelIteratorByFirstIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByFirstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelIteratorByFirstIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandFirstNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argExpandEach )
	{
		cfcore::CFGenKbGelIteratorByEachIdxKey key;
		key.setRequiredExpandEach( argExpandEach );
		deleteGelIteratorByEachIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByEachIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelIteratorByEachIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLast )
	{
		cfcore::CFGenKbGelIteratorByLastIdxKey key;
		if( argExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *argExpandLast );
		}
		deleteGelIteratorByLastIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByLastIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelIteratorByLastIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandLastNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandLone )
	{
		cfcore::CFGenKbGelIteratorByLoneIdxKey key;
		if( argExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *argExpandLone );
		}
		deleteGelIteratorByLoneIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByLoneIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelIteratorByLoneIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandLoneNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string* argExpandEmpty )
	{
		cfcore::CFGenKbGelIteratorByEmptyIdxKey key;
		if( argExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *argExpandEmpty );
		}
		deleteGelIteratorByEmptyIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByEmptyIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelIteratorByEmptyIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpandEmptyNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelIteratorByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelIteratorByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelIteratorByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGelIteratorByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelIteratorTable::deleteGelIteratorByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		cfcore::CFGenKbGelIteratorBuff* cur = NULL;
		cfcore::CFGenKbGelIteratorBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelIteratorTable::releasePreparedStatements() {
	}

}
