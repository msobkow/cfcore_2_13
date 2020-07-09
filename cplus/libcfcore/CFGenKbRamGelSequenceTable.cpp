
// Description: C++18 Implementation for an in-memory RAM DbIO for GelSequence.

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

	const std::string CFGenKbRamGelSequenceTable::CLASS_NAME( "CFGenKbRamGelSequenceTable" );

	CFGenKbRamGelSequenceTable::CFGenKbRamGelSequenceTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelSequenceTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>();
		dictByFirstInstIdx = new std::map<cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSequenceBuff*>*>();
		dictByLastInstIdx = new std::map<cfcore::CFGenKbGelSequenceByLastInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSequenceBuff*>*>();
	}

	CFGenKbRamGelSequenceTable::~CFGenKbRamGelSequenceTable() {
		if( dictByFirstInstIdx != NULL ) {
			for( auto iterDict = dictByFirstInstIdx->begin(); iterDict != dictByFirstInstIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByFirstInstIdx;
			dictByFirstInstIdx = NULL;
		}
		if( dictByLastInstIdx != NULL ) {
			for( auto iterDict = dictByLastInstIdx->begin(); iterDict != dictByLastInstIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByLastInstIdx;
			dictByLastInstIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::createGelSequence( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSequenceBuff* Buff )
	{
		static const std::string S_ProcName( "createGelSequence" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey keyFirstInstIdx;
		if( Buff->isOptionalFirstInstTenantIdNull() ) {
			keyFirstInstIdx.setOptionalFirstInstTenantIdNull();
		}
		else {
			keyFirstInstIdx.setOptionalFirstInstTenantIdValue( Buff->getOptionalFirstInstTenantIdValue() );
		}
		if( Buff->isOptionalFirstInstGelCacheIdNull() ) {
			keyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			keyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( Buff->getOptionalFirstInstGelCacheIdValue() );
		}
		if( Buff->isOptionalFirstInstIdNull() ) {
			keyFirstInstIdx.setOptionalFirstInstIdNull();
		}
		else {
			keyFirstInstIdx.setOptionalFirstInstIdValue( Buff->getOptionalFirstInstIdValue() );
		}
		cfcore::CFGenKbGelSequenceByLastInstIdxKey keyLastInstIdx;
		if( Buff->isOptionalLastInstTenantIdNull() ) {
			keyLastInstIdx.setOptionalLastInstTenantIdNull();
		}
		else {
			keyLastInstIdx.setOptionalLastInstTenantIdValue( Buff->getOptionalLastInstTenantIdValue() );
		}
		if( Buff->isOptionalLastInstGelCacheIdNull() ) {
			keyLastInstIdx.setOptionalLastInstGelCacheIdNull();
		}
		else {
			keyLastInstIdx.setOptionalLastInstGelCacheIdValue( Buff->getOptionalLastInstGelCacheIdValue() );
		}
		if( Buff->isOptionalLastInstIdNull() ) {
			keyLastInstIdx.setOptionalLastInstIdNull();
		}
		else {
			keyLastInstIdx.setOptionalLastInstIdValue( Buff->getOptionalLastInstIdValue() );
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
		cfcore::CFGenKbGelSequenceBuff* buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( schema->getTableGelInstruction()->createGelInstruction( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>* subdictFirstInstIdx;
		auto searchDictByFirstInstIdx = dictByFirstInstIdx->find( keyFirstInstIdx );
		if( searchDictByFirstInstIdx != dictByFirstInstIdx->end() ) {
			subdictFirstInstIdx = searchDictByFirstInstIdx->second;
		}
		else {
			subdictFirstInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>();
			dictByFirstInstIdx->insert( std::map<cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSequenceBuff*>*>::value_type( keyFirstInstIdx, subdictFirstInstIdx ) );
		}
		subdictFirstInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>* subdictLastInstIdx;
		auto searchDictByLastInstIdx = dictByLastInstIdx->find( keyLastInstIdx );
		if( searchDictByLastInstIdx != dictByLastInstIdx->end() ) {
			subdictLastInstIdx = searchDictByLastInstIdx->second;
		}
		else {
			subdictLastInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>();
			dictByLastInstIdx->insert( std::map<cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSequenceBuff*>*>::value_type( keyLastInstIdx, subdictLastInstIdx ) );
		}
		subdictLastInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelSequenceBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readDerivedByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		static const std::string S_ProcName( "readDerivedByFirstInstIdx" );
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey key;
		if( FirstInstTenantId == NULL ) {
			key.setOptionalFirstInstTenantIdNull();
		}
		else {
			key.setOptionalFirstInstTenantIdValue( *FirstInstTenantId );
		}
		if( FirstInstGelCacheId == NULL ) {
			key.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			key.setOptionalFirstInstGelCacheIdValue( *FirstInstGelCacheId );
		}
		if( FirstInstId == NULL ) {
			key.setOptionalFirstInstIdNull();
		}
		else {
			key.setOptionalFirstInstIdValue( *FirstInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> recVec;
		cfcore::CFGenKbGelSequenceBuff* clone;
		auto searchDictByFirstInstIdx = dictByFirstInstIdx->find( key );
		if( searchDictByFirstInstIdx != dictByFirstInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSequenceBuff*>* subdictFirstInstIdx = searchDictByFirstInstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSequenceBuff*>::iterator iter = subdictFirstInstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSequenceBuff*>::iterator end = subdictFirstInstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readDerivedByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		static const std::string S_ProcName( "readDerivedByLastInstIdx" );
		cfcore::CFGenKbGelSequenceByLastInstIdxKey key;
		if( LastInstTenantId == NULL ) {
			key.setOptionalLastInstTenantIdNull();
		}
		else {
			key.setOptionalLastInstTenantIdValue( *LastInstTenantId );
		}
		if( LastInstGelCacheId == NULL ) {
			key.setOptionalLastInstGelCacheIdNull();
		}
		else {
			key.setOptionalLastInstGelCacheIdValue( *LastInstGelCacheId );
		}
		if( LastInstId == NULL ) {
			key.setOptionalLastInstIdNull();
		}
		else {
			key.setOptionalLastInstIdValue( *LastInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> recVec;
		cfcore::CFGenKbGelSequenceBuff* clone;
		auto searchDictByLastInstIdx = dictByLastInstIdx->find( key );
		if( searchDictByLastInstIdx != dictByLastInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSequenceBuff*>* subdictLastInstIdx = searchDictByLastInstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSequenceBuff*>::iterator iter = subdictLastInstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelSequenceBuff*>::iterator end = subdictLastInstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelSequenceBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelSequenceBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelSequenceBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelSequenceBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		static const std::string S_ProcName( "readBuffByFirstInstIdx" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = readDerivedByFirstInstIdx( Authorization,
			FirstInstTenantId,
			FirstInstGelCacheId,
			FirstInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::readBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		static const std::string S_ProcName( "readBuffByLastInstIdx" );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = readDerivedByLastInstIdx( Authorization,
			LastInstTenantId,
			LastInstGelCacheId,
			LastInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::pageBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByFirstInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> CFGenKbRamGelSequenceTable::pageBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByLastInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGelSequenceBuff* CFGenKbRamGelSequenceTable::updateGelSequence( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSequenceBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelSequence" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelSequence for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelSequenceBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey existingKeyFirstInstIdx;
		if( existing->isOptionalFirstInstTenantIdNull() ) {
			existingKeyFirstInstIdx.setOptionalFirstInstTenantIdNull();
		}
		else {
			existingKeyFirstInstIdx.setOptionalFirstInstTenantIdValue( existing->getOptionalFirstInstTenantIdValue() );
		}
		if( existing->isOptionalFirstInstGelCacheIdNull() ) {
			existingKeyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			existingKeyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( existing->getOptionalFirstInstGelCacheIdValue() );
		}
		if( existing->isOptionalFirstInstIdNull() ) {
			existingKeyFirstInstIdx.setOptionalFirstInstIdNull();
		}
		else {
			existingKeyFirstInstIdx.setOptionalFirstInstIdValue( existing->getOptionalFirstInstIdValue() );
		}
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey newKeyFirstInstIdx;
		if( Buff->isOptionalFirstInstTenantIdNull() ) {
			newKeyFirstInstIdx.setOptionalFirstInstTenantIdNull();
		}
		else {
			newKeyFirstInstIdx.setOptionalFirstInstTenantIdValue( Buff->getOptionalFirstInstTenantIdValue() );
		}
		if( Buff->isOptionalFirstInstGelCacheIdNull() ) {
			newKeyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			newKeyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( Buff->getOptionalFirstInstGelCacheIdValue() );
		}
		if( Buff->isOptionalFirstInstIdNull() ) {
			newKeyFirstInstIdx.setOptionalFirstInstIdNull();
		}
		else {
			newKeyFirstInstIdx.setOptionalFirstInstIdValue( Buff->getOptionalFirstInstIdValue() );
		}
		cfcore::CFGenKbGelSequenceByLastInstIdxKey existingKeyLastInstIdx;
		if( existing->isOptionalLastInstTenantIdNull() ) {
			existingKeyLastInstIdx.setOptionalLastInstTenantIdNull();
		}
		else {
			existingKeyLastInstIdx.setOptionalLastInstTenantIdValue( existing->getOptionalLastInstTenantIdValue() );
		}
		if( existing->isOptionalLastInstGelCacheIdNull() ) {
			existingKeyLastInstIdx.setOptionalLastInstGelCacheIdNull();
		}
		else {
			existingKeyLastInstIdx.setOptionalLastInstGelCacheIdValue( existing->getOptionalLastInstGelCacheIdValue() );
		}
		if( existing->isOptionalLastInstIdNull() ) {
			existingKeyLastInstIdx.setOptionalLastInstIdNull();
		}
		else {
			existingKeyLastInstIdx.setOptionalLastInstIdValue( existing->getOptionalLastInstIdValue() );
		}
		cfcore::CFGenKbGelSequenceByLastInstIdxKey newKeyLastInstIdx;
		if( Buff->isOptionalLastInstTenantIdNull() ) {
			newKeyLastInstIdx.setOptionalLastInstTenantIdNull();
		}
		else {
			newKeyLastInstIdx.setOptionalLastInstTenantIdValue( Buff->getOptionalLastInstTenantIdValue() );
		}
		if( Buff->isOptionalLastInstGelCacheIdNull() ) {
			newKeyLastInstIdx.setOptionalLastInstGelCacheIdNull();
		}
		else {
			newKeyLastInstIdx.setOptionalLastInstGelCacheIdValue( Buff->getOptionalLastInstGelCacheIdValue() );
		}
		if( Buff->isOptionalLastInstIdNull() ) {
			newKeyLastInstIdx.setOptionalLastInstIdNull();
		}
		else {
			newKeyLastInstIdx.setOptionalLastInstIdValue( Buff->getOptionalLastInstIdValue() );
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
		existing = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( schema->getTableGelInstruction()->updateGelInstruction( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSequenceBuff*>* subdictFirstInstIdx;
		auto searchDictByFirstInstIdx = dictByFirstInstIdx->find( existingKeyFirstInstIdx );
		if( searchDictByFirstInstIdx != dictByFirstInstIdx->end() ) {
			subdictFirstInstIdx = searchDictByFirstInstIdx->second;
			auto searchSubDict = subdictFirstInstIdx->find( pkey );
			if( searchSubDict != subdictFirstInstIdx->end() ) {
				subdictFirstInstIdx->erase( searchSubDict );
			}
			if( subdictFirstInstIdx->size() <= 0 ) {
				delete subdictFirstInstIdx;
				dictByFirstInstIdx->erase( searchDictByFirstInstIdx );
			}
			subdictFirstInstIdx = NULL;
		}
		auto searchNewKeyDictByFirstInstIdx = dictByFirstInstIdx->find( newKeyFirstInstIdx );
		if( searchNewKeyDictByFirstInstIdx != dictByFirstInstIdx->end() ) {
			subdictFirstInstIdx = searchNewKeyDictByFirstInstIdx->second;
		}
		else {
			subdictFirstInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>();
			dictByFirstInstIdx->insert( std::map<cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSequenceBuff*>*>::value_type( newKeyFirstInstIdx, subdictFirstInstIdx ) );
		}
		subdictFirstInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelSequenceBuff*>* subdictLastInstIdx;
		auto searchDictByLastInstIdx = dictByLastInstIdx->find( existingKeyLastInstIdx );
		if( searchDictByLastInstIdx != dictByLastInstIdx->end() ) {
			subdictLastInstIdx = searchDictByLastInstIdx->second;
			auto searchSubDict = subdictLastInstIdx->find( pkey );
			if( searchSubDict != subdictLastInstIdx->end() ) {
				subdictLastInstIdx->erase( searchSubDict );
			}
			if( subdictLastInstIdx->size() <= 0 ) {
				delete subdictLastInstIdx;
				dictByLastInstIdx->erase( searchDictByLastInstIdx );
			}
			subdictLastInstIdx = NULL;
		}
		auto searchNewKeyDictByLastInstIdx = dictByLastInstIdx->find( newKeyLastInstIdx );
		if( searchNewKeyDictByLastInstIdx != dictByLastInstIdx->end() ) {
			subdictLastInstIdx = searchNewKeyDictByLastInstIdx->second;
		}
		else {
			subdictLastInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>();
			dictByLastInstIdx->insert( std::map<cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelSequenceBuff*>*>::value_type( newKeyLastInstIdx, subdictLastInstIdx ) );
		}
		subdictLastInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelSequenceBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequence( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSequenceBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelSequence" );
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
		cfcore::CFGenKbGelSequenceBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelSequenceBuff* editSubobj = NULL;
		cfcore::CFGenKbGelSequenceBuff* subobj = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredGelCacheId(),
			existing->getRequiredGelInstId() );
			subobj->setOptionalFirstInstTenantIdNull();
			subobj->setOptionalFirstInstGelCacheIdNull();
			subobj->setOptionalFirstInstIdNull();
			subobj->setOptionalLastInstTenantIdNull();
			subobj->setOptionalLastInstGelCacheIdNull();
			subobj->setOptionalLastInstIdNull();
		classCode = subobj->getClassCode();
		if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			editSubobj = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( schema->getTableGelSequence()->updateGelSequence( Authorization, subobj ) );
		}
		else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			editSubobj = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( schema->getTableGelExecutable()->updateGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( subobj ) ) );
		}
		else {
			delete subobj;
			subobj = NULL;
			std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_Msg );
		}
		// existing was not deleted by the update, so we won't be deleting that
		// unless we're in the base class.  But we may as well delete editSubobj
		// now because we always have to get rid of it.
		delete editSubobj;
		editSubobj = NULL;
		schema->getTableGelCall()->deleteGelCallBySeqIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredGelCacheIdReference(),
			existing->getRequiredGelInstIdReference() );
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey keyFirstInstIdx;
		if( existing->isOptionalFirstInstTenantIdNull() ) {
			keyFirstInstIdx.setOptionalFirstInstTenantIdNull();
		}
		else {
			keyFirstInstIdx.setOptionalFirstInstTenantIdValue( existing->getOptionalFirstInstTenantIdValue() );
		}
		if( existing->isOptionalFirstInstGelCacheIdNull() ) {
			keyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			keyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( existing->getOptionalFirstInstGelCacheIdValue() );
		}
		if( existing->isOptionalFirstInstIdNull() ) {
			keyFirstInstIdx.setOptionalFirstInstIdNull();
		}
		else {
			keyFirstInstIdx.setOptionalFirstInstIdValue( existing->getOptionalFirstInstIdValue() );
		}
		cfcore::CFGenKbGelSequenceByLastInstIdxKey keyLastInstIdx;
		if( existing->isOptionalLastInstTenantIdNull() ) {
			keyLastInstIdx.setOptionalLastInstTenantIdNull();
		}
		else {
			keyLastInstIdx.setOptionalLastInstTenantIdValue( existing->getOptionalLastInstTenantIdValue() );
		}
		if( existing->isOptionalLastInstGelCacheIdNull() ) {
			keyLastInstIdx.setOptionalLastInstGelCacheIdNull();
		}
		else {
			keyLastInstIdx.setOptionalLastInstGelCacheIdValue( existing->getOptionalLastInstGelCacheIdValue() );
		}
		if( existing->isOptionalLastInstIdNull() ) {
			keyLastInstIdx.setOptionalLastInstIdNull();
		}
		else {
			keyLastInstIdx.setOptionalLastInstIdValue( existing->getOptionalLastInstIdValue() );
		}
		// Validate reverse foreign keys

		{
			cfcore::CFGenKbGelExecutableBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelExecutable for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSequenceBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByFirstInstIdx = dictByFirstInstIdx->find( keyFirstInstIdx );
		if( searchDictByFirstInstIdx != dictByFirstInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSequenceBuff*>* subdictFirstInstIdx = searchDictByFirstInstIdx->second;
			auto searchSubDict = subdictFirstInstIdx->find( pkey );
			if( searchSubDict != subdictFirstInstIdx->end() ) {
				subdictFirstInstIdx->erase( searchSubDict );
			}
			subdictFirstInstIdx = NULL;
		}

		auto searchDictByLastInstIdx = dictByLastInstIdx->find( keyLastInstIdx );
		if( searchDictByLastInstIdx != dictByLastInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelSequenceBuff*>* subdictLastInstIdx = searchDictByLastInstIdx->second;
			auto searchSubDict = subdictLastInstIdx->find( pkey );
			if( searchSubDict != subdictLastInstIdx->end() ) {
				subdictLastInstIdx->erase( searchSubDict );
			}
			subdictLastInstIdx = NULL;
		}

		schema->getTableGelInstruction()->deleteGelInstruction( Authorization,
			Buff );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argFirstInstTenantId,
			const int64_t* argFirstInstGelCacheId,
			const int64_t* argFirstInstId )
	{
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey key;
		if( argFirstInstTenantId == NULL ) {
			key.setOptionalFirstInstTenantIdNull();
		}
		else {
			key.setOptionalFirstInstTenantIdValue( *argFirstInstTenantId );
		}
		if( argFirstInstGelCacheId == NULL ) {
			key.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			key.setOptionalFirstInstGelCacheIdValue( *argFirstInstGelCacheId );
		}
		if( argFirstInstId == NULL ) {
			key.setOptionalFirstInstIdNull();
		}
		else {
			key.setOptionalFirstInstIdValue( *argFirstInstId );
		}
		deleteGelSequenceByFirstInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSequenceByFirstInstIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelSequenceByFirstInstIdx" );
		cfcore::CFGenKbGelSequenceBuff* cur = NULL;
		cfcore::CFGenKbGelSequenceBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalFirstInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalFirstInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalFirstInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
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

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argLastInstTenantId,
			const int64_t* argLastInstGelCacheId,
			const int64_t* argLastInstId )
	{
		cfcore::CFGenKbGelSequenceByLastInstIdxKey key;
		if( argLastInstTenantId == NULL ) {
			key.setOptionalLastInstTenantIdNull();
		}
		else {
			key.setOptionalLastInstTenantIdValue( *argLastInstTenantId );
		}
		if( argLastInstGelCacheId == NULL ) {
			key.setOptionalLastInstGelCacheIdNull();
		}
		else {
			key.setOptionalLastInstGelCacheIdValue( *argLastInstGelCacheId );
		}
		if( argLastInstId == NULL ) {
			key.setOptionalLastInstIdNull();
		}
		else {
			key.setOptionalLastInstIdValue( *argLastInstId );
		}
		deleteGelSequenceByLastInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSequenceByLastInstIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelSequenceByLastInstIdx" );
		cfcore::CFGenKbGelSequenceBuff* cur = NULL;
		cfcore::CFGenKbGelSequenceBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalLastInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalLastInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalLastInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
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

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelSequenceByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelSequenceByPIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelSequenceBuff* cur = NULL;
		cfcore::CFGenKbGelSequenceBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
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

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelSequenceByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelSequenceByTenantIdx" );
		cfcore::CFGenKbGelSequenceBuff* cur = NULL;
		cfcore::CFGenKbGelSequenceBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
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

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelSequenceByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelSequenceByGelCacheIdx" );
		cfcore::CFGenKbGelSequenceBuff* cur = NULL;
		cfcore::CFGenKbGelSequenceBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
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

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGelSequenceByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelSequenceTable::deleteGelSequenceByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelSequenceByChainIdx" );
		cfcore::CFGenKbGelSequenceBuff* cur = NULL;
		cfcore::CFGenKbGelSequenceBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSequenceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
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

	void CFGenKbRamGelSequenceTable::releasePreparedStatements() {
	}

}
