
// Description: C++18 Implementation for an in-memory RAM DbIO for GelPrefixLine.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
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

	const std::string CFGenKbRamGelPrefixLineTable::CLASS_NAME( "CFGenKbRamGelPrefixLineTable" );

	CFGenKbRamGelPrefixLineTable::CFGenKbRamGelPrefixLineTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelPrefixLineTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>();
		dictByRemainderIdx = new std::map<cfcore::CFGenKbGelPrefixLineByRemainderIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelPrefixLineBuff*>*>();
	}

	CFGenKbRamGelPrefixLineTable::~CFGenKbRamGelPrefixLineTable() {
		if( dictByRemainderIdx != NULL ) {
			for( auto iterDict = dictByRemainderIdx->begin(); iterDict != dictByRemainderIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByRemainderIdx;
			dictByRemainderIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::createGelPrefixLine( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelPrefixLineBuff* Buff )
	{
		static const std::string S_ProcName( "createGelPrefixLine" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey keyRemainderIdx;
		if( Buff->isOptionalRemainderTenantIdNull() ) {
			keyRemainderIdx.setOptionalRemainderTenantIdNull();
		}
		else {
			keyRemainderIdx.setOptionalRemainderTenantIdValue( Buff->getOptionalRemainderTenantIdValue() );
		}
		keyRemainderIdx.setRequiredRemainderGelCacheId( Buff->getRequiredRemainderGelCacheId() );
		if( Buff->isOptionalRemainderInstIdNull() ) {
			keyRemainderIdx.setOptionalRemainderInstIdNull();
		}
		else {
			keyRemainderIdx.setOptionalRemainderInstIdValue( Buff->getOptionalRemainderInstIdValue() );
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
		cfcore::CFGenKbGelPrefixLineBuff* buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( schema->getTableGelInstruction()->createGelInstruction( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>* subdictRemainderIdx;
		auto searchDictByRemainderIdx = dictByRemainderIdx->find( keyRemainderIdx );
		if( searchDictByRemainderIdx != dictByRemainderIdx->end() ) {
			subdictRemainderIdx = searchDictByRemainderIdx->second;
		}
		else {
			subdictRemainderIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>();
			dictByRemainderIdx->insert( std::map<cfcore::CFGenKbGelPrefixLineByRemainderIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelPrefixLineBuff*>*>::value_type( keyRemainderIdx, subdictRemainderIdx ) );
		}
		subdictRemainderIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelPrefixLineBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readDerivedByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* RemainderTenantId,
			const int64_t RemainderGelCacheId,
			const int64_t* RemainderInstId )
	{
		static const std::string S_ProcName( "readDerivedByRemainderIdx" );
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey key;
		if( RemainderTenantId == NULL ) {
			key.setOptionalRemainderTenantIdNull();
		}
		else {
			key.setOptionalRemainderTenantIdValue( *RemainderTenantId );
		}
		key.setRequiredRemainderGelCacheId( RemainderGelCacheId );
		if( RemainderInstId == NULL ) {
			key.setOptionalRemainderInstIdNull();
		}
		else {
			key.setOptionalRemainderInstIdValue( *RemainderInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> recVec;
		cfcore::CFGenKbGelPrefixLineBuff* clone;
		auto searchDictByRemainderIdx = dictByRemainderIdx->find( key );
		if( searchDictByRemainderIdx != dictByRemainderIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelPrefixLineBuff*>* subdictRemainderIdx = searchDictByRemainderIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = subdictRemainderIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = subdictRemainderIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelPrefixLineBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelPrefixLineBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelPrefixLineBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::readBuffByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* RemainderTenantId,
			const int64_t RemainderGelCacheId,
			const int64_t* RemainderInstId )
	{
		static const std::string S_ProcName( "readBuffByRemainderIdx" );
		cfcore::CFGenKbGelPrefixLineBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> buffList = readDerivedByRemainderIdx( Authorization,
			RemainderTenantId,
			RemainderGelCacheId,
			RemainderInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> CFGenKbRamGelPrefixLineTable::pageBuffByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* RemainderTenantId,
			const int64_t RemainderGelCacheId,
			const int64_t* RemainderInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByRemainderIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGelPrefixLineBuff* CFGenKbRamGelPrefixLineTable::updateGelPrefixLine( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelPrefixLineBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelPrefixLine" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelPrefixLine for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelPrefixLineBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey existingKeyRemainderIdx;
		if( existing->isOptionalRemainderTenantIdNull() ) {
			existingKeyRemainderIdx.setOptionalRemainderTenantIdNull();
		}
		else {
			existingKeyRemainderIdx.setOptionalRemainderTenantIdValue( existing->getOptionalRemainderTenantIdValue() );
		}
		existingKeyRemainderIdx.setRequiredRemainderGelCacheId( existing->getRequiredRemainderGelCacheId() );
		if( existing->isOptionalRemainderInstIdNull() ) {
			existingKeyRemainderIdx.setOptionalRemainderInstIdNull();
		}
		else {
			existingKeyRemainderIdx.setOptionalRemainderInstIdValue( existing->getOptionalRemainderInstIdValue() );
		}
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey newKeyRemainderIdx;
		if( Buff->isOptionalRemainderTenantIdNull() ) {
			newKeyRemainderIdx.setOptionalRemainderTenantIdNull();
		}
		else {
			newKeyRemainderIdx.setOptionalRemainderTenantIdValue( Buff->getOptionalRemainderTenantIdValue() );
		}
		newKeyRemainderIdx.setRequiredRemainderGelCacheId( Buff->getRequiredRemainderGelCacheId() );
		if( Buff->isOptionalRemainderInstIdNull() ) {
			newKeyRemainderIdx.setOptionalRemainderInstIdNull();
		}
		else {
			newKeyRemainderIdx.setOptionalRemainderInstIdValue( Buff->getOptionalRemainderInstIdValue() );
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
		existing = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( schema->getTableGelInstruction()->updateGelInstruction( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelPrefixLineBuff*>* subdictRemainderIdx;
		auto searchDictByRemainderIdx = dictByRemainderIdx->find( existingKeyRemainderIdx );
		if( searchDictByRemainderIdx != dictByRemainderIdx->end() ) {
			subdictRemainderIdx = searchDictByRemainderIdx->second;
			auto searchSubDict = subdictRemainderIdx->find( pkey );
			if( searchSubDict != subdictRemainderIdx->end() ) {
				subdictRemainderIdx->erase( searchSubDict );
			}
			if( subdictRemainderIdx->size() <= 0 ) {
				delete subdictRemainderIdx;
				dictByRemainderIdx->erase( searchDictByRemainderIdx );
			}
			subdictRemainderIdx = NULL;
		}
		auto searchNewKeyDictByRemainderIdx = dictByRemainderIdx->find( newKeyRemainderIdx );
		if( searchNewKeyDictByRemainderIdx != dictByRemainderIdx->end() ) {
			subdictRemainderIdx = searchNewKeyDictByRemainderIdx->second;
		}
		else {
			subdictRemainderIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>();
			dictByRemainderIdx->insert( std::map<cfcore::CFGenKbGelPrefixLineByRemainderIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelPrefixLineBuff*>*>::value_type( newKeyRemainderIdx, subdictRemainderIdx ) );
		}
		subdictRemainderIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelPrefixLineBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLine( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelPrefixLineBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelPrefixLine" );
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
		cfcore::CFGenKbGelPrefixLineBuff* existing = searchExisting->second;
		schema->getTableGelInstruction()->deleteGelInstructionByPIdx( Authorization,
			existing->getOptionalRemainderTenantIdValue(),
			existing->getRequiredRemainderGelCacheId(),
			existing->getOptionalRemainderInstIdValue() );
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey keyRemainderIdx;
		if( existing->isOptionalRemainderTenantIdNull() ) {
			keyRemainderIdx.setOptionalRemainderTenantIdNull();
		}
		else {
			keyRemainderIdx.setOptionalRemainderTenantIdValue( existing->getOptionalRemainderTenantIdValue() );
		}
		keyRemainderIdx.setRequiredRemainderGelCacheId( existing->getRequiredRemainderGelCacheId() );
		if( existing->isOptionalRemainderInstIdNull() ) {
			keyRemainderIdx.setOptionalRemainderInstIdNull();
		}
		else {
			keyRemainderIdx.setOptionalRemainderInstIdValue( existing->getOptionalRemainderInstIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelPrefixLineBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByRemainderIdx = dictByRemainderIdx->find( keyRemainderIdx );
		if( searchDictByRemainderIdx != dictByRemainderIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelPrefixLineBuff*>* subdictRemainderIdx = searchDictByRemainderIdx->second;
			auto searchSubDict = subdictRemainderIdx->find( pkey );
			if( searchSubDict != subdictRemainderIdx->end() ) {
				subdictRemainderIdx->erase( searchSubDict );
			}
			subdictRemainderIdx = NULL;
		}

		schema->getTableGelInstruction()->deleteGelInstruction( Authorization,
			Buff );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argRemainderTenantId,
			const int64_t argRemainderGelCacheId,
			const int64_t* argRemainderInstId )
	{
		cfcore::CFGenKbGelPrefixLineByRemainderIdxKey key;
		if( argRemainderTenantId == NULL ) {
			key.setOptionalRemainderTenantIdNull();
		}
		else {
			key.setOptionalRemainderTenantIdValue( *argRemainderTenantId );
		}
		key.setRequiredRemainderGelCacheId( argRemainderGelCacheId );
		if( argRemainderInstId == NULL ) {
			key.setOptionalRemainderInstIdNull();
		}
		else {
			key.setOptionalRemainderInstIdValue( *argRemainderInstId );
		}
		deleteGelPrefixLineByRemainderIdx( Authorization, &key );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByRemainderIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelPrefixLineByRemainderIdxKey* argKey )
	{
		cfcore::CFGenKbGelPrefixLineBuff* cur = NULL;
		cfcore::CFGenKbGelPrefixLineBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalRemainderTenantIdNull() ) {
			anyNotNull = true;
		}
		anyNotNull = true;
		if( argKey->isOptionalRemainderInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelPrefixLine()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelPrefixLine( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelPrefixLineByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelPrefixLineBuff* cur = NULL;
		cfcore::CFGenKbGelPrefixLineBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelPrefixLine()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelPrefixLine( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelPrefixLineByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelPrefixLineBuff* cur = NULL;
		cfcore::CFGenKbGelPrefixLineBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelPrefixLine()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelPrefixLine( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelPrefixLineByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelPrefixLineBuff* cur = NULL;
		cfcore::CFGenKbGelPrefixLineBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelPrefixLine()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelPrefixLine( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGelPrefixLineByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelPrefixLineTable::deleteGelPrefixLineByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		cfcore::CFGenKbGelPrefixLineBuff* cur = NULL;
		cfcore::CFGenKbGelPrefixLineBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelPrefixLineBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelPrefixLineBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelPrefixLine()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelPrefixLine( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelPrefixLineTable::releasePreparedStatements() {
	}

}
