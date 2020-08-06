
// Description: C++18 Implementation for an in-memory RAM DbIO for GelInstruction.

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

	const std::string CFGenKbRamGelInstructionTable::CLASS_NAME( "CFGenKbRamGelInstructionTable" );

	CFGenKbRamGelInstructionTable::CFGenKbRamGelInstructionTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelInstructionTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>*>();
		dictByGelCacheIdx = new std::map<cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>*>();
		dictByChainIdx = new std::map<cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>*>();
	}

	CFGenKbRamGelInstructionTable::~CFGenKbRamGelInstructionTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByGelCacheIdx != NULL ) {
			for( auto iterDict = dictByGelCacheIdx->begin(); iterDict != dictByGelCacheIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByGelCacheIdx;
			dictByGelCacheIdx = NULL;
		}
		if( dictByChainIdx != NULL ) {
			for( auto iterDict = dictByChainIdx->begin(); iterDict != dictByChainIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByChainIdx;
			dictByChainIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbGelInstructionBuff* elt;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::createGelInstruction( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelInstructionBuff* Buff )
	{
		static const std::string S_ProcName( "createGelInstruction" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( dynamic_cast<CFGenKbRamTenantTable*>( schema->getTableTenant() )->nextGelInstructionIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredGelCacheId( pkey.getRequiredGelCacheId() );
		Buff->setRequiredGelInstId( pkey.getRequiredGelInstId() );
		cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
		keyGelCacheIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyGelCacheIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
		if( Buff->isOptionalChainInstTenantIdNull() ) {
			keyChainIdx.setOptionalChainInstTenantIdNull();
		}
		else {
			keyChainIdx.setOptionalChainInstTenantIdValue( Buff->getOptionalChainInstTenantIdValue() );
		}
		if( Buff->isOptionalChainInstGelCacheIdNull() ) {
			keyChainIdx.setOptionalChainInstGelCacheIdNull();
		}
		else {
			keyChainIdx.setOptionalChainInstGelCacheIdValue( Buff->getOptionalChainInstGelCacheIdValue() );
		}
		if( Buff->isOptionalChainInstGelInstIdNull() ) {
			keyChainIdx.setOptionalChainInstGelInstIdNull();
		}
		else {
			keyChainIdx.setOptionalChainInstGelInstIdValue( Buff->getOptionalChainInstGelInstIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
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
				cfcore::CFGenKbGelCacheBuff* chk = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( schema->getTableGelCache()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredGelCacheId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship GelCache to table GelCache" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbGelInstructionBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>* subdictGelCacheIdx;
		auto searchDictByGelCacheIdx = dictByGelCacheIdx->find( keyGelCacheIdx );
		if( searchDictByGelCacheIdx != dictByGelCacheIdx->end() ) {
			subdictGelCacheIdx = searchDictByGelCacheIdx->second;
		}
		else {
			subdictGelCacheIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
			dictByGelCacheIdx->insert( std::map<cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>*>::value_type( keyGelCacheIdx, subdictGelCacheIdx ) );
		}
		subdictGelCacheIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>* subdictChainIdx;
		auto searchDictByChainIdx = dictByChainIdx->find( keyChainIdx );
		if( searchDictByChainIdx != dictByChainIdx->end() ) {
			subdictChainIdx = searchDictByChainIdx->second;
		}
		else {
			subdictChainIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
			dictByChainIdx->insert( std::map<cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>*>::value_type( keyChainIdx, subdictChainIdx ) );
		}
		subdictChainIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelInstructionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelInstructionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelInstructionBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> recVec;
		cfcore::CFGenKbGelInstructionBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelInstructionBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> recVec;
		cfcore::CFGenKbGelInstructionBuff* clone;
		auto searchDictByGelCacheIdx = dictByGelCacheIdx->find( key );
		if( searchDictByGelCacheIdx != dictByGelCacheIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelInstructionBuff*>* subdictGelCacheIdx = searchDictByGelCacheIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator iter = subdictGelCacheIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator end = subdictGelCacheIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readDerivedByChainIdx" );
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( ChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *ChainInstTenantId );
		}
		if( ChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *ChainInstGelCacheId );
		}
		if( ChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *ChainInstGelInstId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> recVec;
		cfcore::CFGenKbGelInstructionBuff* clone;
		auto searchDictByChainIdx = dictByChainIdx->find( key );
		if( searchDictByChainIdx != dictByChainIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelInstructionBuff*>* subdictChainIdx = searchDictByChainIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator iter = subdictChainIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelInstructionBuff*>::iterator end = subdictChainIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelInstructionBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelInstructionBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelInstructionBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> CFGenKbRamGelInstructionTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbRamGelInstructionTable::updateGelInstruction( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelInstructionBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelInstruction" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelInstruction for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelInstructionBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for GelInstruction primary key " );
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
		cfcore::CFGenKbGelInstructionByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGelInstructionByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey existingKeyGelCacheIdx;
		existingKeyGelCacheIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyGelCacheIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey newKeyGelCacheIdx;
		newKeyGelCacheIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyGelCacheIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		cfcore::CFGenKbGelInstructionByChainIdxKey existingKeyChainIdx;
		if( existing->isOptionalChainInstTenantIdNull() ) {
			existingKeyChainIdx.setOptionalChainInstTenantIdNull();
		}
		else {
			existingKeyChainIdx.setOptionalChainInstTenantIdValue( existing->getOptionalChainInstTenantIdValue() );
		}
		if( existing->isOptionalChainInstGelCacheIdNull() ) {
			existingKeyChainIdx.setOptionalChainInstGelCacheIdNull();
		}
		else {
			existingKeyChainIdx.setOptionalChainInstGelCacheIdValue( existing->getOptionalChainInstGelCacheIdValue() );
		}
		if( existing->isOptionalChainInstGelInstIdNull() ) {
			existingKeyChainIdx.setOptionalChainInstGelInstIdNull();
		}
		else {
			existingKeyChainIdx.setOptionalChainInstGelInstIdValue( existing->getOptionalChainInstGelInstIdValue() );
		}
		cfcore::CFGenKbGelInstructionByChainIdxKey newKeyChainIdx;
		if( Buff->isOptionalChainInstTenantIdNull() ) {
			newKeyChainIdx.setOptionalChainInstTenantIdNull();
		}
		else {
			newKeyChainIdx.setOptionalChainInstTenantIdValue( Buff->getOptionalChainInstTenantIdValue() );
		}
		if( Buff->isOptionalChainInstGelCacheIdNull() ) {
			newKeyChainIdx.setOptionalChainInstGelCacheIdNull();
		}
		else {
			newKeyChainIdx.setOptionalChainInstGelCacheIdValue( Buff->getOptionalChainInstGelCacheIdValue() );
		}
		if( Buff->isOptionalChainInstGelInstIdNull() ) {
			newKeyChainIdx.setOptionalChainInstGelInstIdNull();
		}
		else {
			newKeyChainIdx.setOptionalChainInstGelInstIdValue( Buff->getOptionalChainInstGelInstIdValue() );
		}
		// Check unique indexes

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
				cfcore::CFGenKbGelCacheBuff* chk = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( schema->getTableGelCache()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredGelCacheId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship GelCache to table GelCache" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		const classcode_t hasClassCode = existing->getClassCode();
		if( hasClassCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			*existing = *Buff;
		}
		else if( hasClassCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelPopBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelPopBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelCallBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelCallBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelErrorBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelErrorBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( Buff );
		}
		else if( hasClassCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
			*dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( existing ) = *dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( Buff );
		}
		else {
			const static std::string S_DoesNotDerive( " does not derive from cfcore::CFGenKbGelInstructionBuff" );
			std::string Msg( "Unsupported buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( hasClassCode ) );
			Msg.append( S_DoesNotDerive );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		existing->setRequiredRevision( existing->getRequiredRevision() + 1 );

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelInstructionBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelInstructionBuff*>* subdictGelCacheIdx;
		auto searchDictByGelCacheIdx = dictByGelCacheIdx->find( existingKeyGelCacheIdx );
		if( searchDictByGelCacheIdx != dictByGelCacheIdx->end() ) {
			subdictGelCacheIdx = searchDictByGelCacheIdx->second;
			auto searchSubDict = subdictGelCacheIdx->find( pkey );
			if( searchSubDict != subdictGelCacheIdx->end() ) {
				subdictGelCacheIdx->erase( searchSubDict );
			}
			if( subdictGelCacheIdx->size() <= 0 ) {
				delete subdictGelCacheIdx;
				dictByGelCacheIdx->erase( searchDictByGelCacheIdx );
			}
			subdictGelCacheIdx = NULL;
		}
		auto searchNewKeyDictByGelCacheIdx = dictByGelCacheIdx->find( newKeyGelCacheIdx );
		if( searchNewKeyDictByGelCacheIdx != dictByGelCacheIdx->end() ) {
			subdictGelCacheIdx = searchNewKeyDictByGelCacheIdx->second;
		}
		else {
			subdictGelCacheIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
			dictByGelCacheIdx->insert( std::map<cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>*>::value_type( newKeyGelCacheIdx, subdictGelCacheIdx ) );
		}
		subdictGelCacheIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelInstructionBuff*>* subdictChainIdx;
		auto searchDictByChainIdx = dictByChainIdx->find( existingKeyChainIdx );
		if( searchDictByChainIdx != dictByChainIdx->end() ) {
			subdictChainIdx = searchDictByChainIdx->second;
			auto searchSubDict = subdictChainIdx->find( pkey );
			if( searchSubDict != subdictChainIdx->end() ) {
				subdictChainIdx->erase( searchSubDict );
			}
			if( subdictChainIdx->size() <= 0 ) {
				delete subdictChainIdx;
				dictByChainIdx->erase( searchDictByChainIdx );
			}
			subdictChainIdx = NULL;
		}
		auto searchNewKeyDictByChainIdx = dictByChainIdx->find( newKeyChainIdx );
		if( searchNewKeyDictByChainIdx != dictByChainIdx->end() ) {
			subdictChainIdx = searchNewKeyDictByChainIdx->second;
		}
		else {
			subdictChainIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>();
			dictByChainIdx->insert( std::map<cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelInstructionBuff*>*>::value_type( newKeyChainIdx, subdictChainIdx ) );
		}
		subdictChainIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelInstructionBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelInstructionTable::deleteGelInstruction( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelInstructionBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelInstruction" );
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
		cfcore::CFGenKbGelInstructionBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
		keyGelCacheIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyGelCacheIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
		if( existing->isOptionalChainInstTenantIdNull() ) {
			keyChainIdx.setOptionalChainInstTenantIdNull();
		}
		else {
			keyChainIdx.setOptionalChainInstTenantIdValue( existing->getOptionalChainInstTenantIdValue() );
		}
		if( existing->isOptionalChainInstGelCacheIdNull() ) {
			keyChainIdx.setOptionalChainInstGelCacheIdNull();
		}
		else {
			keyChainIdx.setOptionalChainInstGelCacheIdValue( existing->getOptionalChainInstGelCacheIdValue() );
		}
		if( existing->isOptionalChainInstGelInstIdNull() ) {
			keyChainIdx.setOptionalChainInstGelInstIdNull();
		}
		else {
			keyChainIdx.setOptionalChainInstGelInstIdValue( existing->getOptionalChainInstGelInstIdValue() );
		}
		// Validate reverse foreign keys

		{
			cfcore::CFGenKbGelIteratorBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( schema->getTableGelIterator()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelIterator for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelSpreadBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( schema->getTableGelSpread()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelSpread for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelPopBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelPopBuff*>( schema->getTableGelPop()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelPop for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelPrefixLineBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( schema->getTableGelPrefixLine()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelPrefixLine for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelReferenceBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( schema->getTableGelReference()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelReference for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelCallBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( schema->getTableGelCall()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelCall for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelSequenceBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelSequence for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelSwitchBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( schema->getTableGelSwitch()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelSwitch for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelBoilerplateBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( schema->getTableGelBoilerplate()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelBoilerplate for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelBuiltinBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( schema->getTableGelBuiltin()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelBuiltin for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelConstrainBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( schema->getTableGelConstrain()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelConstrain for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelCounterBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( schema->getTableGelCounter()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelCounter for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelExpansionBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( schema->getTableGelExpansion()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelExpansion for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		{
			cfcore::CFGenKbGelModifierBuff* refPIdx = dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( schema->getTableGelModifier()->readDerivedByPIdx( Authorization,
						existing->getRequiredTenantId(),
						existing->getRequiredGelCacheId(),
						existing->getRequiredGelInstId() ) );
			if( refPIdx != NULL ) {
				delete refPIdx;
				refPIdx = NULL;
				std::string Msg( "Dependents detected for Superclass relationship SuperClass from table GelModifier for primary key " + pkey.toString() );
				throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelInstructionBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelInstructionBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByGelCacheIdx = dictByGelCacheIdx->find( keyGelCacheIdx );
		if( searchDictByGelCacheIdx != dictByGelCacheIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelInstructionBuff*>* subdictGelCacheIdx = searchDictByGelCacheIdx->second;
			auto searchSubDict = subdictGelCacheIdx->find( pkey );
			if( searchSubDict != subdictGelCacheIdx->end() ) {
				subdictGelCacheIdx->erase( searchSubDict );
			}
			subdictGelCacheIdx = NULL;
		}

		auto searchDictByChainIdx = dictByChainIdx->find( keyChainIdx );
		if( searchDictByChainIdx != dictByChainIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelInstructionBuff*>* subdictChainIdx = searchDictByChainIdx->second;
			auto searchSubDict = subdictChainIdx->find( pkey );
			if( searchSubDict != subdictChainIdx->end() ) {
				subdictChainIdx->erase( searchSubDict );
			}
			subdictChainIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelInstructionByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelInstructionByPIdx" );
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelInstructionBuff* cur = NULL;
		cfcore::CFGenKbGelInstructionBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelInstruction()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
				schema->getTableGelInstruction()->deleteGelInstruction( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
				schema->getTableGelIterator()->deleteGelIterator( Authorization, dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
				schema->getTableGelSpread()->deleteGelSpread( Authorization, dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
				schema->getTableGelPop()->deleteGelPop( Authorization, dynamic_cast<cfcore::CFGenKbGelPopBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
				schema->getTableGelPrefixLine()->deleteGelPrefixLine( Authorization, dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
				schema->getTableGelReference()->deleteGelReference( Authorization, dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
				schema->getTableGelCall()->deleteGelCall( Authorization, dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
				schema->getTableGelSwitch()->deleteGelSwitch( Authorization, dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
				schema->getTableGelBoilerplate()->deleteGelBoilerplate( Authorization, dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
				schema->getTableGelError()->deleteGelError( Authorization, dynamic_cast<cfcore::CFGenKbGelErrorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
				schema->getTableGelBuiltin()->deleteGelBuiltin( Authorization, dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
				schema->getTableGelConstrain()->deleteGelConstrain( Authorization, dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
				schema->getTableGelCounter()->deleteGelCounter( Authorization, dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
				schema->getTableGelExpansion()->deleteGelExpansion( Authorization, dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
				schema->getTableGelModifier()->deleteGelModifier( Authorization, dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( cur ) );
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

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelInstructionByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelInstructionByTenantIdx" );
		cfcore::CFGenKbGelInstructionBuff* cur = NULL;
		cfcore::CFGenKbGelInstructionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelInstruction()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
				schema->getTableGelInstruction()->deleteGelInstruction( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
				schema->getTableGelIterator()->deleteGelIterator( Authorization, dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
				schema->getTableGelSpread()->deleteGelSpread( Authorization, dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
				schema->getTableGelPop()->deleteGelPop( Authorization, dynamic_cast<cfcore::CFGenKbGelPopBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
				schema->getTableGelPrefixLine()->deleteGelPrefixLine( Authorization, dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
				schema->getTableGelReference()->deleteGelReference( Authorization, dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
				schema->getTableGelCall()->deleteGelCall( Authorization, dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
				schema->getTableGelSwitch()->deleteGelSwitch( Authorization, dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
				schema->getTableGelBoilerplate()->deleteGelBoilerplate( Authorization, dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
				schema->getTableGelError()->deleteGelError( Authorization, dynamic_cast<cfcore::CFGenKbGelErrorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
				schema->getTableGelBuiltin()->deleteGelBuiltin( Authorization, dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
				schema->getTableGelConstrain()->deleteGelConstrain( Authorization, dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
				schema->getTableGelCounter()->deleteGelCounter( Authorization, dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
				schema->getTableGelExpansion()->deleteGelExpansion( Authorization, dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
				schema->getTableGelModifier()->deleteGelModifier( Authorization, dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( cur ) );
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

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelInstructionByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelInstructionByGelCacheIdx" );
		cfcore::CFGenKbGelInstructionBuff* cur = NULL;
		cfcore::CFGenKbGelInstructionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelInstruction()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
				schema->getTableGelInstruction()->deleteGelInstruction( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
				schema->getTableGelIterator()->deleteGelIterator( Authorization, dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
				schema->getTableGelSpread()->deleteGelSpread( Authorization, dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
				schema->getTableGelPop()->deleteGelPop( Authorization, dynamic_cast<cfcore::CFGenKbGelPopBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
				schema->getTableGelPrefixLine()->deleteGelPrefixLine( Authorization, dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
				schema->getTableGelReference()->deleteGelReference( Authorization, dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
				schema->getTableGelCall()->deleteGelCall( Authorization, dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
				schema->getTableGelSwitch()->deleteGelSwitch( Authorization, dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
				schema->getTableGelBoilerplate()->deleteGelBoilerplate( Authorization, dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
				schema->getTableGelError()->deleteGelError( Authorization, dynamic_cast<cfcore::CFGenKbGelErrorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
				schema->getTableGelBuiltin()->deleteGelBuiltin( Authorization, dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
				schema->getTableGelConstrain()->deleteGelConstrain( Authorization, dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
				schema->getTableGelCounter()->deleteGelCounter( Authorization, dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
				schema->getTableGelExpansion()->deleteGelExpansion( Authorization, dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
				schema->getTableGelModifier()->deleteGelModifier( Authorization, dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( cur ) );
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

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGelInstructionByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelInstructionTable::deleteGelInstructionByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		static const std::string S_ProcName( "deleteGelInstructionByChainIdx" );
		cfcore::CFGenKbGelInstructionBuff* cur = NULL;
		cfcore::CFGenKbGelInstructionBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelInstructionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelInstruction()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			classcode_t subClassCode = cur->getClassCode();
			if( subClassCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
				schema->getTableGelInstruction()->deleteGelInstruction( Authorization, cur );
			}
			else if( subClassCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
				schema->getTableGelIterator()->deleteGelIterator( Authorization, dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
				schema->getTableGelSpread()->deleteGelSpread( Authorization, dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
				schema->getTableGelPop()->deleteGelPop( Authorization, dynamic_cast<cfcore::CFGenKbGelPopBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
				schema->getTableGelPrefixLine()->deleteGelPrefixLine( Authorization, dynamic_cast<cfcore::CFGenKbGelPrefixLineBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
				schema->getTableGelReference()->deleteGelReference( Authorization, dynamic_cast<cfcore::CFGenKbGelReferenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
				schema->getTableGelCall()->deleteGelCall( Authorization, dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
				schema->getTableGelSequence()->deleteGelSequence( Authorization, dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				schema->getTableGelExecutable()->deleteGelExecutable( Authorization, dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
				schema->getTableGelSwitch()->deleteGelSwitch( Authorization, dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
				schema->getTableGelBoilerplate()->deleteGelBoilerplate( Authorization, dynamic_cast<cfcore::CFGenKbGelBoilerplateBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
				schema->getTableGelError()->deleteGelError( Authorization, dynamic_cast<cfcore::CFGenKbGelErrorBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
				schema->getTableGelBuiltin()->deleteGelBuiltin( Authorization, dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
				schema->getTableGelConstrain()->deleteGelConstrain( Authorization, dynamic_cast<cfcore::CFGenKbGelConstrainBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
				schema->getTableGelCounter()->deleteGelCounter( Authorization, dynamic_cast<cfcore::CFGenKbGelCounterBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
				schema->getTableGelExpansion()->deleteGelExpansion( Authorization, dynamic_cast<cfcore::CFGenKbGelExpansionBuff*>( cur ) );
			}
			else if( subClassCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
				schema->getTableGelModifier()->deleteGelModifier( Authorization, dynamic_cast<cfcore::CFGenKbGelModifierBuff*>( cur ) );
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

	void CFGenKbRamGelInstructionTable::releasePreparedStatements() {
	}

}
