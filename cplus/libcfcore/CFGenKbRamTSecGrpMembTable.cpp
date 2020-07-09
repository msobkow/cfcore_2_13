
// Description: C++18 Implementation for an in-memory RAM DbIO for TSecGrpMemb.

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

	const std::string CFGenKbRamTSecGrpMembTable::CLASS_NAME( "CFGenKbRamTSecGrpMembTable" );

	CFGenKbRamTSecGrpMembTable::CFGenKbRamTSecGrpMembTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbTSecGrpMembTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbTSecGrpMembByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>*>();
		dictByGroupIdx = new std::map<cfcore::CFGenKbTSecGrpMembByGroupIdxKey,
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>*>();
		dictByUserIdx = new std::map<cfcore::CFGenKbTSecGrpMembByUserIdxKey,
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>*>();
		dictByUUserIdx = new std::map<cfcore::CFGenKbTSecGrpMembByUUserIdxKey, cfcore::CFGenKbTSecGrpMembBuff*>();
	}

	CFGenKbRamTSecGrpMembTable::~CFGenKbRamTSecGrpMembTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByGroupIdx != NULL ) {
			for( auto iterDict = dictByGroupIdx->begin(); iterDict != dictByGroupIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByGroupIdx;
			dictByGroupIdx = NULL;
		}
		if( dictByUserIdx != NULL ) {
			for( auto iterDict = dictByUserIdx->begin(); iterDict != dictByUserIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByUserIdx;
			dictByUserIdx = NULL;
		}
		if( dictByUUserIdx != NULL ) {
			delete dictByUUserIdx;
			dictByUUserIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbTSecGrpMembBuff* elt;
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::createTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "createTSecGrpMemb" );
		cfcore::CFGenKbTSecGrpMembPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpMembId( dynamic_cast<CFGenKbRamTenantTable*>( schema->getTableTenant() )->nextTSecGrpMembIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredTSecGrpMembId( pkey.getRequiredTSecGrpMembId() );
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpMembByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpMembByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfcore::CFGenKbTSecGrpMembByUUserIdxKey keyUUserIdx;
		keyUUserIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUUserIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		keyUUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUUserIdx = dictByUUserIdx->find( keyUUserIdx );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TSecGrpMembUUserIdx " + keyUUserIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship TSecGrpMembTenant to table Tenant" );
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
				cfcore::CFGenKbTSecGroupBuff* chk = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship TSecGrpMembGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbTSecGrpMembBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByTenantIdxKey,
				std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByGroupIdxKey,
				std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
			dictByUserIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByUserIdxKey,
				std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>*>::value_type( keyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, buff ) );

		dictByUUserIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByUUserIdxKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( keyUUserIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> retVec;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbTSecGrpMembBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> recVec;
		cfcore::CFGenKbTSecGrpMembBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				 cfcore::CFGenKbTSecGrpMembBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfcore::CFGenKbTSecGrpMembByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> recVec;
		cfcore::CFGenKbTSecGrpMembBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				 cfcore::CFGenKbTSecGrpMembBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUserIdx" );
		cfcore::CFGenKbTSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> recVec;
		cfcore::CFGenKbTSecGrpMembBuff* clone;
		auto searchDictByUserIdx = dictByUserIdx->find( key );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				 cfcore::CFGenKbTSecGrpMembBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = subdictUserIdx->begin();
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = subdictUserIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::readDerivedByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUUserIdx" );
		cfcore::CFGenKbTSecGrpMembByUUserIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredSecUserId( SecUserId );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		auto searchDictByUUserIdx = dictByUUserIdx->find( key );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( searchDictByUUserIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbTSecGrpMembPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGrpMembId( TSecGrpMembId );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbTSecGrpMembBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff ) );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbTSecGrpMembBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpMembId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbTSecGrpMembBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			TSecGrpMembId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> buffList = readDerivedByGroupIdx( Authorization,
			TenantId,
			TSecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUserIdx" );
		cfcore::CFGenKbTSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> buffList = readDerivedByUserIdx( Authorization,
			SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::readBuffByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUUserIdx" );
		cfcore::CFGenKbTSecGrpMembBuff* buff = readDerivedByUUserIdx( Authorization,
			TenantId,
			TSecGroupId,
			SecUserId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::pageBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> CFGenKbRamTSecGrpMembTable::pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByUserIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbRamTSecGrpMembTable::updateTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "updateTSecGrpMemb" );
		cfcore::CFGenKbTSecGrpMembPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpMembId( Buff->getRequiredTSecGrpMembId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in TSecGrpMemb for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbTSecGrpMembBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for TSecGrpMemb primary key " );
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
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpMembByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpMembByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpMembByUserIdxKey existingKeyUserIdx;
		existingKeyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbTSecGrpMembByUserIdxKey newKeyUserIdx;
		newKeyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfcore::CFGenKbTSecGrpMembByUUserIdxKey existingKeyUUserIdx;
		existingKeyUUserIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUUserIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		existingKeyUUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbTSecGrpMembByUUserIdxKey newKeyUUserIdx;
		newKeyUUserIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUUserIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		newKeyUUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Check unique indexes

		if( existingKeyUUserIdx != newKeyUUserIdx ) {
			auto searchDictByUUserIdx = dictByUUserIdx->find( newKeyUUserIdx );
			if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TSecGrpMembUUserIdx " + newKeyUUserIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship TSecGrpMembTenant to table Tenant" );
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
				cfcore::CFGenKbTSecGroupBuff* chk = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredTSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship TSecGrpMembGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbTSecGrpMembBuff" );
			std::string Msg( "Unsupported buffer class " );
			Msg.append( cflib::CFLib::formatClassCode( Buff->getClassCode() ) );
			Msg.append( S_IsNotA );
			delete Buff;
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				Msg );
		}
		*existing = *Buff;
		existing->setRequiredRevision( existing->getRequiredRevision() + 1 );

		dictByPKey->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			 cfcore::CFGenKbTSecGrpMembBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByTenantIdxKey,
				std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			 cfcore::CFGenKbTSecGrpMembBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( existingKeyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			if( subdictGroupIdx->size() <= 0 ) {
				delete subdictGroupIdx;
				dictByGroupIdx->erase( searchDictByGroupIdx );
			}
			subdictGroupIdx = NULL;
		}
		auto searchNewKeyDictByGroupIdx = dictByGroupIdx->find( newKeyGroupIdx );
		if( searchNewKeyDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchNewKeyDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByGroupIdxKey,
				std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			 cfcore::CFGenKbTSecGrpMembBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( existingKeyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
			auto searchSubDict = subdictUserIdx->find( pkey );
			if( searchSubDict != subdictUserIdx->end() ) {
				subdictUserIdx->erase( searchSubDict );
			}
			if( subdictUserIdx->size() <= 0 ) {
				delete subdictUserIdx;
				dictByUserIdx->erase( searchDictByUserIdx );
			}
			subdictUserIdx = NULL;
		}
		auto searchNewKeyDictByUserIdx = dictByUserIdx->find( newKeyUserIdx );
		if( searchNewKeyDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchNewKeyDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>();
			dictByUserIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByUserIdxKey,
				std::map<cfcore::CFGenKbTSecGrpMembPKey,
					cfcore::CFGenKbTSecGrpMembBuff*>*>::value_type( newKeyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( pkey, existing ) );

		auto removalDictByUUserIdx = dictByUUserIdx->find( existingKeyUUserIdx );
		if( removalDictByUUserIdx != dictByUUserIdx->end() ) {
			dictByUUserIdx->erase( removalDictByUUserIdx );
		}
		dictByUUserIdx->insert( std::map<cfcore::CFGenKbTSecGrpMembByUUserIdxKey, cfcore::CFGenKbTSecGrpMembBuff*>::value_type( newKeyUUserIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbTSecGrpMembBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTSecGrpMemb" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbTSecGrpMembPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpMembId( Buff->getRequiredTSecGrpMembId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbTSecGrpMembBuff* existing = searchExisting->second;
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpMembByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpMembByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbTSecGrpMembByUUserIdxKey keyUUserIdx;
		keyUUserIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUUserIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		keyUUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbTSecGrpMembPKey, cfcore::CFGenKbTSecGrpMembBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				 cfcore::CFGenKbTSecGrpMembBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				 cfcore::CFGenKbTSecGrpMembBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpMembPKey,
				 cfcore::CFGenKbTSecGrpMembBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			auto searchSubDict = subdictUserIdx->find( pkey );
			if( searchSubDict != subdictUserIdx->end() ) {
				subdictUserIdx->erase( searchSubDict );
			}
			subdictUserIdx = NULL;
		}

		auto searchDictByUUserIdx = dictByUUserIdx->find( keyUUserIdx );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			dictByUUserIdx->erase( searchDictByUUserIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpMembId )
	{
		cfcore::CFGenKbTSecGrpMembPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGrpMembId( argTSecGrpMembId );
		deleteTSecGrpMembByIdIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbTSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpMembBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbTSecGrpMembByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTSecGrpMembByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId )
	{
		cfcore::CFGenKbTSecGrpMembByGroupIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		deleteTSecGrpMembByGroupIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembByGroupIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbTSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		deleteTSecGrpMembByUserIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembByUserIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbTSecGrpMembByUUserIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		key.setRequiredSecUserId( argSecUserId );
		deleteTSecGrpMembByUUserIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpMembTable::deleteTSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpMembByUUserIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpMembPKey,
			cfcore::CFGenKbTSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpMembId() );
			rereadCur = cur;
			deleteTSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpMembTable::releasePreparedStatements() {
	}

}
