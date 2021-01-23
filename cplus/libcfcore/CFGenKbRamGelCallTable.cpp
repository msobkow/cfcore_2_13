
// Description: C++18 Implementation for an in-memory RAM DbIO for GelCall.

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

	const std::string CFGenKbRamGelCallTable::CLASS_NAME( "CFGenKbRamGelCallTable" );

	CFGenKbRamGelCallTable::CFGenKbRamGelCallTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelCallTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
		dictByCacheIdx = new std::map<cfcore::CFGenKbGelCallByCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>();
		dictBySeqIdx = new std::map<cfcore::CFGenKbGelCallBySeqIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>();
		dictByCallInstIdx = new std::map<cfcore::CFGenKbGelCallByCallInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>();
		dictByPrevInstIdx = new std::map<cfcore::CFGenKbGelCallByPrevInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>();
		dictByNextInstIdx = new std::map<cfcore::CFGenKbGelCallByNextInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>*>();
	}

	CFGenKbRamGelCallTable::~CFGenKbRamGelCallTable() {
		if( dictByCacheIdx != NULL ) {
			for( auto iterDict = dictByCacheIdx->begin(); iterDict != dictByCacheIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCacheIdx;
			dictByCacheIdx = NULL;
		}
		if( dictBySeqIdx != NULL ) {
			for( auto iterDict = dictBySeqIdx->begin(); iterDict != dictBySeqIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySeqIdx;
			dictBySeqIdx = NULL;
		}
		if( dictByCallInstIdx != NULL ) {
			for( auto iterDict = dictByCallInstIdx->begin(); iterDict != dictByCallInstIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByCallInstIdx;
			dictByCallInstIdx = NULL;
		}
		if( dictByPrevInstIdx != NULL ) {
			for( auto iterDict = dictByPrevInstIdx->begin(); iterDict != dictByPrevInstIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPrevInstIdx;
			dictByPrevInstIdx = NULL;
		}
		if( dictByNextInstIdx != NULL ) {
			for( auto iterDict = dictByNextInstIdx->begin(); iterDict != dictByNextInstIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByNextInstIdx;
			dictByNextInstIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::createGelCall( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelCallBuff* Buff )
	{
		static const std::string S_ProcName( "createGelCall" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		cfcore::CFGenKbGelCallByCacheIdxKey keyCacheIdx;
		keyCacheIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyCacheIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		cfcore::CFGenKbGelCallBySeqIdxKey keySeqIdx;
		if( Buff->isOptionalSeqInstTenantIdNull() ) {
			keySeqIdx.setOptionalSeqInstTenantIdNull();
		}
		else {
			keySeqIdx.setOptionalSeqInstTenantIdValue( Buff->getOptionalSeqInstTenantIdValue() );
		}
		if( Buff->isOptionalSeqInstGelCacheIdNull() ) {
			keySeqIdx.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			keySeqIdx.setOptionalSeqInstGelCacheIdValue( Buff->getOptionalSeqInstGelCacheIdValue() );
		}
		if( Buff->isOptionalSeqInstIdNull() ) {
			keySeqIdx.setOptionalSeqInstIdNull();
		}
		else {
			keySeqIdx.setOptionalSeqInstIdValue( Buff->getOptionalSeqInstIdValue() );
		}
		cfcore::CFGenKbGelCallByCallInstIdxKey keyCallInstIdx;
		if( Buff->isOptionalCallInstTenantIdNull() ) {
			keyCallInstIdx.setOptionalCallInstTenantIdNull();
		}
		else {
			keyCallInstIdx.setOptionalCallInstTenantIdValue( Buff->getOptionalCallInstTenantIdValue() );
		}
		if( Buff->isOptionalCallInstGelCacheIdNull() ) {
			keyCallInstIdx.setOptionalCallInstGelCacheIdNull();
		}
		else {
			keyCallInstIdx.setOptionalCallInstGelCacheIdValue( Buff->getOptionalCallInstGelCacheIdValue() );
		}
		if( Buff->isOptionalCallInstIdNull() ) {
			keyCallInstIdx.setOptionalCallInstIdNull();
		}
		else {
			keyCallInstIdx.setOptionalCallInstIdValue( Buff->getOptionalCallInstIdValue() );
		}
		cfcore::CFGenKbGelCallByPrevInstIdxKey keyPrevInstIdx;
		if( Buff->isOptionalPrevInstTenantIdNull() ) {
			keyPrevInstIdx.setOptionalPrevInstTenantIdNull();
		}
		else {
			keyPrevInstIdx.setOptionalPrevInstTenantIdValue( Buff->getOptionalPrevInstTenantIdValue() );
		}
		if( Buff->isOptionalPrevInstGelCacheIdNull() ) {
			keyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			keyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( Buff->getOptionalPrevInstGelCacheIdValue() );
		}
		if( Buff->isOptionalPrevInstGelInstIdNull() ) {
			keyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
		}
		else {
			keyPrevInstIdx.setOptionalPrevInstGelInstIdValue( Buff->getOptionalPrevInstGelInstIdValue() );
		}
		cfcore::CFGenKbGelCallByNextInstIdxKey keyNextInstIdx;
		if( Buff->isOptionalNextInstTenantIdNull() ) {
			keyNextInstIdx.setOptionalNextInstTenantIdNull();
		}
		else {
			keyNextInstIdx.setOptionalNextInstTenantIdValue( Buff->getOptionalNextInstTenantIdValue() );
		}
		if( Buff->isOptionalNextInstGelCacheIdNull() ) {
			keyNextInstIdx.setOptionalNextInstGelCacheIdNull();
		}
		else {
			keyNextInstIdx.setOptionalNextInstGelCacheIdValue( Buff->getOptionalNextInstGelCacheIdValue() );
		}
		if( Buff->isOptionalNextInstGelInstIdNull() ) {
			keyNextInstIdx.setOptionalNextInstGelInstIdNull();
		}
		else {
			keyNextInstIdx.setOptionalNextInstGelInstIdValue( Buff->getOptionalNextInstGelInstIdValue() );
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
		cfcore::CFGenKbGelCallBuff* buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( schema->getTableGelInstruction()->createGelInstruction( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdictCacheIdx;
		auto searchDictByCacheIdx = dictByCacheIdx->find( keyCacheIdx );
		if( searchDictByCacheIdx != dictByCacheIdx->end() ) {
			subdictCacheIdx = searchDictByCacheIdx->second;
		}
		else {
			subdictCacheIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByCacheIdx->insert( std::map<cfcore::CFGenKbGelCallByCacheIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( keyCacheIdx, subdictCacheIdx ) );
		}
		subdictCacheIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdictSeqIdx;
		auto searchDictBySeqIdx = dictBySeqIdx->find( keySeqIdx );
		if( searchDictBySeqIdx != dictBySeqIdx->end() ) {
			subdictSeqIdx = searchDictBySeqIdx->second;
		}
		else {
			subdictSeqIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictBySeqIdx->insert( std::map<cfcore::CFGenKbGelCallBySeqIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( keySeqIdx, subdictSeqIdx ) );
		}
		subdictSeqIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdictCallInstIdx;
		auto searchDictByCallInstIdx = dictByCallInstIdx->find( keyCallInstIdx );
		if( searchDictByCallInstIdx != dictByCallInstIdx->end() ) {
			subdictCallInstIdx = searchDictByCallInstIdx->second;
		}
		else {
			subdictCallInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByCallInstIdx->insert( std::map<cfcore::CFGenKbGelCallByCallInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( keyCallInstIdx, subdictCallInstIdx ) );
		}
		subdictCallInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdictPrevInstIdx;
		auto searchDictByPrevInstIdx = dictByPrevInstIdx->find( keyPrevInstIdx );
		if( searchDictByPrevInstIdx != dictByPrevInstIdx->end() ) {
			subdictPrevInstIdx = searchDictByPrevInstIdx->second;
		}
		else {
			subdictPrevInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByPrevInstIdx->insert( std::map<cfcore::CFGenKbGelCallByPrevInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( keyPrevInstIdx, subdictPrevInstIdx ) );
		}
		subdictPrevInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdictNextInstIdx;
		auto searchDictByNextInstIdx = dictByNextInstIdx->find( keyNextInstIdx );
		if( searchDictByNextInstIdx != dictByNextInstIdx->end() ) {
			subdictNextInstIdx = searchDictByNextInstIdx->second;
		}
		else {
			subdictNextInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByNextInstIdx->insert( std::map<cfcore::CFGenKbGelCallByNextInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( keyNextInstIdx, subdictNextInstIdx ) );
		}
		subdictNextInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelCallBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelCallBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelCallBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByCacheIdx" );
		cfcore::CFGenKbGelCallByCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> recVec;
		cfcore::CFGenKbGelCallBuff* clone;
		auto searchDictByCacheIdx = dictByCacheIdx->find( key );
		if( searchDictByCacheIdx != dictByCacheIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictCacheIdx = searchDictByCacheIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator iter = subdictCacheIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator end = subdictCacheIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId )
	{
		static const std::string S_ProcName( "readDerivedBySeqIdx" );
		cfcore::CFGenKbGelCallBySeqIdxKey key;
		if( SeqInstTenantId == NULL ) {
			key.setOptionalSeqInstTenantIdNull();
		}
		else {
			key.setOptionalSeqInstTenantIdValue( *SeqInstTenantId );
		}
		if( SeqInstGelCacheId == NULL ) {
			key.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			key.setOptionalSeqInstGelCacheIdValue( *SeqInstGelCacheId );
		}
		if( SeqInstId == NULL ) {
			key.setOptionalSeqInstIdNull();
		}
		else {
			key.setOptionalSeqInstIdValue( *SeqInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> recVec;
		cfcore::CFGenKbGelCallBuff* clone;
		auto searchDictBySeqIdx = dictBySeqIdx->find( key );
		if( searchDictBySeqIdx != dictBySeqIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictSeqIdx = searchDictBySeqIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator iter = subdictSeqIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator end = subdictSeqIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId )
	{
		static const std::string S_ProcName( "readDerivedByCallInstIdx" );
		cfcore::CFGenKbGelCallByCallInstIdxKey key;
		if( CallInstTenantId == NULL ) {
			key.setOptionalCallInstTenantIdNull();
		}
		else {
			key.setOptionalCallInstTenantIdValue( *CallInstTenantId );
		}
		if( CallInstGelCacheId == NULL ) {
			key.setOptionalCallInstGelCacheIdNull();
		}
		else {
			key.setOptionalCallInstGelCacheIdValue( *CallInstGelCacheId );
		}
		if( CallInstId == NULL ) {
			key.setOptionalCallInstIdNull();
		}
		else {
			key.setOptionalCallInstIdValue( *CallInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> recVec;
		cfcore::CFGenKbGelCallBuff* clone;
		auto searchDictByCallInstIdx = dictByCallInstIdx->find( key );
		if( searchDictByCallInstIdx != dictByCallInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictCallInstIdx = searchDictByCallInstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator iter = subdictCallInstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator end = subdictCallInstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPrevInstIdx" );
		cfcore::CFGenKbGelCallByPrevInstIdxKey key;
		if( PrevInstTenantId == NULL ) {
			key.setOptionalPrevInstTenantIdNull();
		}
		else {
			key.setOptionalPrevInstTenantIdValue( *PrevInstTenantId );
		}
		if( PrevInstGelCacheId == NULL ) {
			key.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			key.setOptionalPrevInstGelCacheIdValue( *PrevInstGelCacheId );
		}
		if( PrevInstGelInstId == NULL ) {
			key.setOptionalPrevInstGelInstIdNull();
		}
		else {
			key.setOptionalPrevInstGelInstIdValue( *PrevInstGelInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> recVec;
		cfcore::CFGenKbGelCallBuff* clone;
		auto searchDictByPrevInstIdx = dictByPrevInstIdx->find( key );
		if( searchDictByPrevInstIdx != dictByPrevInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictPrevInstIdx = searchDictByPrevInstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator iter = subdictPrevInstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator end = subdictPrevInstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readDerivedByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId )
	{
		static const std::string S_ProcName( "readDerivedByNextInstIdx" );
		cfcore::CFGenKbGelCallByNextInstIdxKey key;
		if( NextInstTenantId == NULL ) {
			key.setOptionalNextInstTenantIdNull();
		}
		else {
			key.setOptionalNextInstTenantIdValue( *NextInstTenantId );
		}
		if( NextInstGelCacheId == NULL ) {
			key.setOptionalNextInstGelCacheIdNull();
		}
		else {
			key.setOptionalNextInstGelCacheIdValue( *NextInstGelCacheId );
		}
		if( NextInstGelInstId == NULL ) {
			key.setOptionalNextInstGelInstIdNull();
		}
		else {
			key.setOptionalNextInstGelInstIdValue( *NextInstGelInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> recVec;
		cfcore::CFGenKbGelCallBuff* clone;
		auto searchDictByNextInstIdx = dictByNextInstIdx->find( key );
		if( searchDictByNextInstIdx != dictByNextInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictNextInstIdx = searchDictByNextInstIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator iter = subdictNextInstIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelCallBuff*>::iterator end = subdictNextInstIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelCallBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelCallBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelCallBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelCallBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByCacheIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId )
	{
		static const std::string S_ProcName( "readBuffBySeqIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedBySeqIdx( Authorization,
			SeqInstTenantId,
			SeqInstGelCacheId,
			SeqInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId )
	{
		static const std::string S_ProcName( "readBuffByCallInstIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByCallInstIdx( Authorization,
			CallInstTenantId,
			CallInstGelCacheId,
			CallInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByPrevInstIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByPrevInstIdx( Authorization,
			PrevInstTenantId,
			PrevInstGelCacheId,
			PrevInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::readBuffByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByNextInstIdx" );
		cfcore::CFGenKbGelCallBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = readDerivedByNextInstIdx( Authorization,
			NextInstTenantId,
			NextInstGelCacheId,
			NextInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::pageBuffByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByCacheIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::pageBuffBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffBySeqIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::pageBuffByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByCallInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::pageBuffByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByPrevInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> CFGenKbRamGelCallTable::pageBuffByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByNextInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGelCallBuff* CFGenKbRamGelCallTable::updateGelCall( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelCallBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelCall" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelCall for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelCallBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGelCallByCacheIdxKey existingKeyCacheIdx;
		existingKeyCacheIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyCacheIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		cfcore::CFGenKbGelCallByCacheIdxKey newKeyCacheIdx;
		newKeyCacheIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyCacheIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		cfcore::CFGenKbGelCallBySeqIdxKey existingKeySeqIdx;
		if( existing->isOptionalSeqInstTenantIdNull() ) {
			existingKeySeqIdx.setOptionalSeqInstTenantIdNull();
		}
		else {
			existingKeySeqIdx.setOptionalSeqInstTenantIdValue( existing->getOptionalSeqInstTenantIdValue() );
		}
		if( existing->isOptionalSeqInstGelCacheIdNull() ) {
			existingKeySeqIdx.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			existingKeySeqIdx.setOptionalSeqInstGelCacheIdValue( existing->getOptionalSeqInstGelCacheIdValue() );
		}
		if( existing->isOptionalSeqInstIdNull() ) {
			existingKeySeqIdx.setOptionalSeqInstIdNull();
		}
		else {
			existingKeySeqIdx.setOptionalSeqInstIdValue( existing->getOptionalSeqInstIdValue() );
		}
		cfcore::CFGenKbGelCallBySeqIdxKey newKeySeqIdx;
		if( Buff->isOptionalSeqInstTenantIdNull() ) {
			newKeySeqIdx.setOptionalSeqInstTenantIdNull();
		}
		else {
			newKeySeqIdx.setOptionalSeqInstTenantIdValue( Buff->getOptionalSeqInstTenantIdValue() );
		}
		if( Buff->isOptionalSeqInstGelCacheIdNull() ) {
			newKeySeqIdx.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			newKeySeqIdx.setOptionalSeqInstGelCacheIdValue( Buff->getOptionalSeqInstGelCacheIdValue() );
		}
		if( Buff->isOptionalSeqInstIdNull() ) {
			newKeySeqIdx.setOptionalSeqInstIdNull();
		}
		else {
			newKeySeqIdx.setOptionalSeqInstIdValue( Buff->getOptionalSeqInstIdValue() );
		}
		cfcore::CFGenKbGelCallByCallInstIdxKey existingKeyCallInstIdx;
		if( existing->isOptionalCallInstTenantIdNull() ) {
			existingKeyCallInstIdx.setOptionalCallInstTenantIdNull();
		}
		else {
			existingKeyCallInstIdx.setOptionalCallInstTenantIdValue( existing->getOptionalCallInstTenantIdValue() );
		}
		if( existing->isOptionalCallInstGelCacheIdNull() ) {
			existingKeyCallInstIdx.setOptionalCallInstGelCacheIdNull();
		}
		else {
			existingKeyCallInstIdx.setOptionalCallInstGelCacheIdValue( existing->getOptionalCallInstGelCacheIdValue() );
		}
		if( existing->isOptionalCallInstIdNull() ) {
			existingKeyCallInstIdx.setOptionalCallInstIdNull();
		}
		else {
			existingKeyCallInstIdx.setOptionalCallInstIdValue( existing->getOptionalCallInstIdValue() );
		}
		cfcore::CFGenKbGelCallByCallInstIdxKey newKeyCallInstIdx;
		if( Buff->isOptionalCallInstTenantIdNull() ) {
			newKeyCallInstIdx.setOptionalCallInstTenantIdNull();
		}
		else {
			newKeyCallInstIdx.setOptionalCallInstTenantIdValue( Buff->getOptionalCallInstTenantIdValue() );
		}
		if( Buff->isOptionalCallInstGelCacheIdNull() ) {
			newKeyCallInstIdx.setOptionalCallInstGelCacheIdNull();
		}
		else {
			newKeyCallInstIdx.setOptionalCallInstGelCacheIdValue( Buff->getOptionalCallInstGelCacheIdValue() );
		}
		if( Buff->isOptionalCallInstIdNull() ) {
			newKeyCallInstIdx.setOptionalCallInstIdNull();
		}
		else {
			newKeyCallInstIdx.setOptionalCallInstIdValue( Buff->getOptionalCallInstIdValue() );
		}
		cfcore::CFGenKbGelCallByPrevInstIdxKey existingKeyPrevInstIdx;
		if( existing->isOptionalPrevInstTenantIdNull() ) {
			existingKeyPrevInstIdx.setOptionalPrevInstTenantIdNull();
		}
		else {
			existingKeyPrevInstIdx.setOptionalPrevInstTenantIdValue( existing->getOptionalPrevInstTenantIdValue() );
		}
		if( existing->isOptionalPrevInstGelCacheIdNull() ) {
			existingKeyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			existingKeyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( existing->getOptionalPrevInstGelCacheIdValue() );
		}
		if( existing->isOptionalPrevInstGelInstIdNull() ) {
			existingKeyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
		}
		else {
			existingKeyPrevInstIdx.setOptionalPrevInstGelInstIdValue( existing->getOptionalPrevInstGelInstIdValue() );
		}
		cfcore::CFGenKbGelCallByPrevInstIdxKey newKeyPrevInstIdx;
		if( Buff->isOptionalPrevInstTenantIdNull() ) {
			newKeyPrevInstIdx.setOptionalPrevInstTenantIdNull();
		}
		else {
			newKeyPrevInstIdx.setOptionalPrevInstTenantIdValue( Buff->getOptionalPrevInstTenantIdValue() );
		}
		if( Buff->isOptionalPrevInstGelCacheIdNull() ) {
			newKeyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			newKeyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( Buff->getOptionalPrevInstGelCacheIdValue() );
		}
		if( Buff->isOptionalPrevInstGelInstIdNull() ) {
			newKeyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
		}
		else {
			newKeyPrevInstIdx.setOptionalPrevInstGelInstIdValue( Buff->getOptionalPrevInstGelInstIdValue() );
		}
		cfcore::CFGenKbGelCallByNextInstIdxKey existingKeyNextInstIdx;
		if( existing->isOptionalNextInstTenantIdNull() ) {
			existingKeyNextInstIdx.setOptionalNextInstTenantIdNull();
		}
		else {
			existingKeyNextInstIdx.setOptionalNextInstTenantIdValue( existing->getOptionalNextInstTenantIdValue() );
		}
		if( existing->isOptionalNextInstGelCacheIdNull() ) {
			existingKeyNextInstIdx.setOptionalNextInstGelCacheIdNull();
		}
		else {
			existingKeyNextInstIdx.setOptionalNextInstGelCacheIdValue( existing->getOptionalNextInstGelCacheIdValue() );
		}
		if( existing->isOptionalNextInstGelInstIdNull() ) {
			existingKeyNextInstIdx.setOptionalNextInstGelInstIdNull();
		}
		else {
			existingKeyNextInstIdx.setOptionalNextInstGelInstIdValue( existing->getOptionalNextInstGelInstIdValue() );
		}
		cfcore::CFGenKbGelCallByNextInstIdxKey newKeyNextInstIdx;
		if( Buff->isOptionalNextInstTenantIdNull() ) {
			newKeyNextInstIdx.setOptionalNextInstTenantIdNull();
		}
		else {
			newKeyNextInstIdx.setOptionalNextInstTenantIdValue( Buff->getOptionalNextInstTenantIdValue() );
		}
		if( Buff->isOptionalNextInstGelCacheIdNull() ) {
			newKeyNextInstIdx.setOptionalNextInstGelCacheIdNull();
		}
		else {
			newKeyNextInstIdx.setOptionalNextInstGelCacheIdValue( Buff->getOptionalNextInstGelCacheIdValue() );
		}
		if( Buff->isOptionalNextInstGelInstIdNull() ) {
			newKeyNextInstIdx.setOptionalNextInstGelInstIdNull();
		}
		else {
			newKeyNextInstIdx.setOptionalNextInstGelInstIdValue( Buff->getOptionalNextInstGelInstIdValue() );
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
		existing = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( schema->getTableGelInstruction()->updateGelInstruction( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelCallBuff*>* subdictCacheIdx;
		auto searchDictByCacheIdx = dictByCacheIdx->find( existingKeyCacheIdx );
		if( searchDictByCacheIdx != dictByCacheIdx->end() ) {
			subdictCacheIdx = searchDictByCacheIdx->second;
			auto searchSubDict = subdictCacheIdx->find( pkey );
			if( searchSubDict != subdictCacheIdx->end() ) {
				subdictCacheIdx->erase( searchSubDict );
			}
			if( subdictCacheIdx->size() <= 0 ) {
				delete subdictCacheIdx;
				dictByCacheIdx->erase( searchDictByCacheIdx );
			}
			subdictCacheIdx = NULL;
		}
		auto searchNewKeyDictByCacheIdx = dictByCacheIdx->find( newKeyCacheIdx );
		if( searchNewKeyDictByCacheIdx != dictByCacheIdx->end() ) {
			subdictCacheIdx = searchNewKeyDictByCacheIdx->second;
		}
		else {
			subdictCacheIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByCacheIdx->insert( std::map<cfcore::CFGenKbGelCallByCacheIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( newKeyCacheIdx, subdictCacheIdx ) );
		}
		subdictCacheIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelCallBuff*>* subdictSeqIdx;
		auto searchDictBySeqIdx = dictBySeqIdx->find( existingKeySeqIdx );
		if( searchDictBySeqIdx != dictBySeqIdx->end() ) {
			subdictSeqIdx = searchDictBySeqIdx->second;
			auto searchSubDict = subdictSeqIdx->find( pkey );
			if( searchSubDict != subdictSeqIdx->end() ) {
				subdictSeqIdx->erase( searchSubDict );
			}
			if( subdictSeqIdx->size() <= 0 ) {
				delete subdictSeqIdx;
				dictBySeqIdx->erase( searchDictBySeqIdx );
			}
			subdictSeqIdx = NULL;
		}
		auto searchNewKeyDictBySeqIdx = dictBySeqIdx->find( newKeySeqIdx );
		if( searchNewKeyDictBySeqIdx != dictBySeqIdx->end() ) {
			subdictSeqIdx = searchNewKeyDictBySeqIdx->second;
		}
		else {
			subdictSeqIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictBySeqIdx->insert( std::map<cfcore::CFGenKbGelCallBySeqIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( newKeySeqIdx, subdictSeqIdx ) );
		}
		subdictSeqIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelCallBuff*>* subdictCallInstIdx;
		auto searchDictByCallInstIdx = dictByCallInstIdx->find( existingKeyCallInstIdx );
		if( searchDictByCallInstIdx != dictByCallInstIdx->end() ) {
			subdictCallInstIdx = searchDictByCallInstIdx->second;
			auto searchSubDict = subdictCallInstIdx->find( pkey );
			if( searchSubDict != subdictCallInstIdx->end() ) {
				subdictCallInstIdx->erase( searchSubDict );
			}
			if( subdictCallInstIdx->size() <= 0 ) {
				delete subdictCallInstIdx;
				dictByCallInstIdx->erase( searchDictByCallInstIdx );
			}
			subdictCallInstIdx = NULL;
		}
		auto searchNewKeyDictByCallInstIdx = dictByCallInstIdx->find( newKeyCallInstIdx );
		if( searchNewKeyDictByCallInstIdx != dictByCallInstIdx->end() ) {
			subdictCallInstIdx = searchNewKeyDictByCallInstIdx->second;
		}
		else {
			subdictCallInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByCallInstIdx->insert( std::map<cfcore::CFGenKbGelCallByCallInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( newKeyCallInstIdx, subdictCallInstIdx ) );
		}
		subdictCallInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelCallBuff*>* subdictPrevInstIdx;
		auto searchDictByPrevInstIdx = dictByPrevInstIdx->find( existingKeyPrevInstIdx );
		if( searchDictByPrevInstIdx != dictByPrevInstIdx->end() ) {
			subdictPrevInstIdx = searchDictByPrevInstIdx->second;
			auto searchSubDict = subdictPrevInstIdx->find( pkey );
			if( searchSubDict != subdictPrevInstIdx->end() ) {
				subdictPrevInstIdx->erase( searchSubDict );
			}
			if( subdictPrevInstIdx->size() <= 0 ) {
				delete subdictPrevInstIdx;
				dictByPrevInstIdx->erase( searchDictByPrevInstIdx );
			}
			subdictPrevInstIdx = NULL;
		}
		auto searchNewKeyDictByPrevInstIdx = dictByPrevInstIdx->find( newKeyPrevInstIdx );
		if( searchNewKeyDictByPrevInstIdx != dictByPrevInstIdx->end() ) {
			subdictPrevInstIdx = searchNewKeyDictByPrevInstIdx->second;
		}
		else {
			subdictPrevInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByPrevInstIdx->insert( std::map<cfcore::CFGenKbGelCallByPrevInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( newKeyPrevInstIdx, subdictPrevInstIdx ) );
		}
		subdictPrevInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelCallBuff*>* subdictNextInstIdx;
		auto searchDictByNextInstIdx = dictByNextInstIdx->find( existingKeyNextInstIdx );
		if( searchDictByNextInstIdx != dictByNextInstIdx->end() ) {
			subdictNextInstIdx = searchDictByNextInstIdx->second;
			auto searchSubDict = subdictNextInstIdx->find( pkey );
			if( searchSubDict != subdictNextInstIdx->end() ) {
				subdictNextInstIdx->erase( searchSubDict );
			}
			if( subdictNextInstIdx->size() <= 0 ) {
				delete subdictNextInstIdx;
				dictByNextInstIdx->erase( searchDictByNextInstIdx );
			}
			subdictNextInstIdx = NULL;
		}
		auto searchNewKeyDictByNextInstIdx = dictByNextInstIdx->find( newKeyNextInstIdx );
		if( searchNewKeyDictByNextInstIdx != dictByNextInstIdx->end() ) {
			subdictNextInstIdx = searchNewKeyDictByNextInstIdx->second;
		}
		else {
			subdictNextInstIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>();
			dictByNextInstIdx->insert( std::map<cfcore::CFGenKbGelCallByNextInstIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelCallBuff*>*>::value_type( newKeyNextInstIdx, subdictNextInstIdx ) );
		}
		subdictNextInstIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelCallBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelCallTable::deleteGelCall( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelCallBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelCall" );
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
		cfcore::CFGenKbGelCallBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelCallByCacheIdxKey keyCacheIdx;
		keyCacheIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyCacheIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		cfcore::CFGenKbGelCallBySeqIdxKey keySeqIdx;
		if( existing->isOptionalSeqInstTenantIdNull() ) {
			keySeqIdx.setOptionalSeqInstTenantIdNull();
		}
		else {
			keySeqIdx.setOptionalSeqInstTenantIdValue( existing->getOptionalSeqInstTenantIdValue() );
		}
		if( existing->isOptionalSeqInstGelCacheIdNull() ) {
			keySeqIdx.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			keySeqIdx.setOptionalSeqInstGelCacheIdValue( existing->getOptionalSeqInstGelCacheIdValue() );
		}
		if( existing->isOptionalSeqInstIdNull() ) {
			keySeqIdx.setOptionalSeqInstIdNull();
		}
		else {
			keySeqIdx.setOptionalSeqInstIdValue( existing->getOptionalSeqInstIdValue() );
		}
		cfcore::CFGenKbGelCallByCallInstIdxKey keyCallInstIdx;
		if( existing->isOptionalCallInstTenantIdNull() ) {
			keyCallInstIdx.setOptionalCallInstTenantIdNull();
		}
		else {
			keyCallInstIdx.setOptionalCallInstTenantIdValue( existing->getOptionalCallInstTenantIdValue() );
		}
		if( existing->isOptionalCallInstGelCacheIdNull() ) {
			keyCallInstIdx.setOptionalCallInstGelCacheIdNull();
		}
		else {
			keyCallInstIdx.setOptionalCallInstGelCacheIdValue( existing->getOptionalCallInstGelCacheIdValue() );
		}
		if( existing->isOptionalCallInstIdNull() ) {
			keyCallInstIdx.setOptionalCallInstIdNull();
		}
		else {
			keyCallInstIdx.setOptionalCallInstIdValue( existing->getOptionalCallInstIdValue() );
		}
		cfcore::CFGenKbGelCallByPrevInstIdxKey keyPrevInstIdx;
		if( existing->isOptionalPrevInstTenantIdNull() ) {
			keyPrevInstIdx.setOptionalPrevInstTenantIdNull();
		}
		else {
			keyPrevInstIdx.setOptionalPrevInstTenantIdValue( existing->getOptionalPrevInstTenantIdValue() );
		}
		if( existing->isOptionalPrevInstGelCacheIdNull() ) {
			keyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			keyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( existing->getOptionalPrevInstGelCacheIdValue() );
		}
		if( existing->isOptionalPrevInstGelInstIdNull() ) {
			keyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
		}
		else {
			keyPrevInstIdx.setOptionalPrevInstGelInstIdValue( existing->getOptionalPrevInstGelInstIdValue() );
		}
		cfcore::CFGenKbGelCallByNextInstIdxKey keyNextInstIdx;
		if( existing->isOptionalNextInstTenantIdNull() ) {
			keyNextInstIdx.setOptionalNextInstTenantIdNull();
		}
		else {
			keyNextInstIdx.setOptionalNextInstTenantIdValue( existing->getOptionalNextInstTenantIdValue() );
		}
		if( existing->isOptionalNextInstGelCacheIdNull() ) {
			keyNextInstIdx.setOptionalNextInstGelCacheIdNull();
		}
		else {
			keyNextInstIdx.setOptionalNextInstGelCacheIdValue( existing->getOptionalNextInstGelCacheIdValue() );
		}
		if( existing->isOptionalNextInstGelInstIdNull() ) {
			keyNextInstIdx.setOptionalNextInstGelInstIdNull();
		}
		else {
			keyNextInstIdx.setOptionalNextInstGelInstIdValue( existing->getOptionalNextInstGelInstIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelCallBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByCacheIdx = dictByCacheIdx->find( keyCacheIdx );
		if( searchDictByCacheIdx != dictByCacheIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictCacheIdx = searchDictByCacheIdx->second;
			auto searchSubDict = subdictCacheIdx->find( pkey );
			if( searchSubDict != subdictCacheIdx->end() ) {
				subdictCacheIdx->erase( searchSubDict );
			}
			subdictCacheIdx = NULL;
		}

		auto searchDictBySeqIdx = dictBySeqIdx->find( keySeqIdx );
		if( searchDictBySeqIdx != dictBySeqIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictSeqIdx = searchDictBySeqIdx->second;
			auto searchSubDict = subdictSeqIdx->find( pkey );
			if( searchSubDict != subdictSeqIdx->end() ) {
				subdictSeqIdx->erase( searchSubDict );
			}
			subdictSeqIdx = NULL;
		}

		auto searchDictByCallInstIdx = dictByCallInstIdx->find( keyCallInstIdx );
		if( searchDictByCallInstIdx != dictByCallInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictCallInstIdx = searchDictByCallInstIdx->second;
			auto searchSubDict = subdictCallInstIdx->find( pkey );
			if( searchSubDict != subdictCallInstIdx->end() ) {
				subdictCallInstIdx->erase( searchSubDict );
			}
			subdictCallInstIdx = NULL;
		}

		auto searchDictByPrevInstIdx = dictByPrevInstIdx->find( keyPrevInstIdx );
		if( searchDictByPrevInstIdx != dictByPrevInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictPrevInstIdx = searchDictByPrevInstIdx->second;
			auto searchSubDict = subdictPrevInstIdx->find( pkey );
			if( searchSubDict != subdictPrevInstIdx->end() ) {
				subdictPrevInstIdx->erase( searchSubDict );
			}
			subdictPrevInstIdx = NULL;
		}

		auto searchDictByNextInstIdx = dictByNextInstIdx->find( keyNextInstIdx );
		if( searchDictByNextInstIdx != dictByNextInstIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelCallBuff*>* subdictNextInstIdx = searchDictByNextInstIdx->second;
			auto searchSubDict = subdictNextInstIdx->find( pkey );
			if( searchSubDict != subdictNextInstIdx->end() ) {
				subdictNextInstIdx->erase( searchSubDict );
			}
			subdictNextInstIdx = NULL;
		}

		schema->getTableGelInstruction()->deleteGelInstruction( Authorization,
			Buff );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelCallByCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelCallByCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCallByCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSeqInstTenantId,
			const int64_t* argSeqInstGelCacheId,
			const int64_t* argSeqInstId )
	{
		cfcore::CFGenKbGelCallBySeqIdxKey key;
		if( argSeqInstTenantId == NULL ) {
			key.setOptionalSeqInstTenantIdNull();
		}
		else {
			key.setOptionalSeqInstTenantIdValue( *argSeqInstTenantId );
		}
		if( argSeqInstGelCacheId == NULL ) {
			key.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			key.setOptionalSeqInstGelCacheIdValue( *argSeqInstGelCacheId );
		}
		if( argSeqInstId == NULL ) {
			key.setOptionalSeqInstIdNull();
		}
		else {
			key.setOptionalSeqInstIdValue( *argSeqInstId );
		}
		deleteGelCallBySeqIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallBySeqIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCallBySeqIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalSeqInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalSeqInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalSeqInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argCallInstTenantId,
			const int64_t* argCallInstGelCacheId,
			const int64_t* argCallInstId )
	{
		cfcore::CFGenKbGelCallByCallInstIdxKey key;
		if( argCallInstTenantId == NULL ) {
			key.setOptionalCallInstTenantIdNull();
		}
		else {
			key.setOptionalCallInstTenantIdValue( *argCallInstTenantId );
		}
		if( argCallInstGelCacheId == NULL ) {
			key.setOptionalCallInstGelCacheIdNull();
		}
		else {
			key.setOptionalCallInstGelCacheIdValue( *argCallInstGelCacheId );
		}
		if( argCallInstId == NULL ) {
			key.setOptionalCallInstIdNull();
		}
		else {
			key.setOptionalCallInstIdValue( *argCallInstId );
		}
		deleteGelCallByCallInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByCallInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCallByCallInstIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalCallInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalCallInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalCallInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argPrevInstTenantId,
			const int64_t* argPrevInstGelCacheId,
			const int64_t* argPrevInstGelInstId )
	{
		cfcore::CFGenKbGelCallByPrevInstIdxKey key;
		if( argPrevInstTenantId == NULL ) {
			key.setOptionalPrevInstTenantIdNull();
		}
		else {
			key.setOptionalPrevInstTenantIdValue( *argPrevInstTenantId );
		}
		if( argPrevInstGelCacheId == NULL ) {
			key.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			key.setOptionalPrevInstGelCacheIdValue( *argPrevInstGelCacheId );
		}
		if( argPrevInstGelInstId == NULL ) {
			key.setOptionalPrevInstGelInstIdNull();
		}
		else {
			key.setOptionalPrevInstGelInstIdValue( *argPrevInstGelInstId );
		}
		deleteGelCallByPrevInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByPrevInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCallByPrevInstIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalPrevInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalPrevInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalPrevInstGelInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argNextInstTenantId,
			const int64_t* argNextInstGelCacheId,
			const int64_t* argNextInstGelInstId )
	{
		cfcore::CFGenKbGelCallByNextInstIdxKey key;
		if( argNextInstTenantId == NULL ) {
			key.setOptionalNextInstTenantIdNull();
		}
		else {
			key.setOptionalNextInstTenantIdValue( *argNextInstTenantId );
		}
		if( argNextInstGelCacheId == NULL ) {
			key.setOptionalNextInstGelCacheIdNull();
		}
		else {
			key.setOptionalNextInstGelCacheIdValue( *argNextInstGelCacheId );
		}
		if( argNextInstGelInstId == NULL ) {
			key.setOptionalNextInstGelInstIdNull();
		}
		else {
			key.setOptionalNextInstGelInstIdValue( *argNextInstGelInstId );
		}
		deleteGelCallByNextInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByNextInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCallByNextInstIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalNextInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalNextInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalNextInstGelInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelCallByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelCallByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelCallByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::deleteGelCallByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGelCallByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelCallTable::deleteGelCallByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		cfcore::CFGenKbGelCallBuff* cur = NULL;
		cfcore::CFGenKbGelCallBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelCallBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCall()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelCall( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCallTable::releasePreparedStatements() {
	}

}
