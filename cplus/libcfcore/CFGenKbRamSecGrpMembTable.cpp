
// Description: C++18 Implementation for an in-memory RAM DbIO for SecGrpMemb.

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

	const std::string CFGenKbRamSecGrpMembTable::CLASS_NAME( "CFGenKbRamSecGrpMembTable" );

	CFGenKbRamSecGrpMembTable::CFGenKbRamSecGrpMembTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecGrpMembTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbSecGrpMembByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>*>();
		dictByGroupIdx = new std::map<cfcore::CFGenKbSecGrpMembByGroupIdxKey,
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>*>();
		dictByUserIdx = new std::map<cfcore::CFGenKbSecGrpMembByUserIdxKey,
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>*>();
		dictByUUserIdx = new std::map<cfcore::CFGenKbSecGrpMembByUUserIdxKey, cfcore::CFGenKbSecGrpMembBuff*>();
	}

	CFGenKbRamSecGrpMembTable::~CFGenKbRamSecGrpMembTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
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
			cfcore::CFGenKbSecGrpMembBuff* elt;
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::createSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "createSecGrpMemb" );
		cfcore::CFGenKbSecGrpMembPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGrpMembId( dynamic_cast<CFGenKbRamClusterTable*>( schema->getTableCluster() )->nextSecGrpMembIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredSecGrpMembId( pkey.getRequiredSecGrpMembId() );
		cfcore::CFGenKbSecGrpMembByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyGroupIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGrpMembByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfcore::CFGenKbSecGrpMembByUUserIdxKey keyUUserIdx;
		keyUUserIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUUserIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
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
			std::string Msg( "Duplicate key detected for index SecGrpMembUUserIdx " + keyUUserIdx.toString() );
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
				cfcore::CFGenKbClusterBuff* chk = dynamic_cast<cfcore::CFGenKbClusterBuff*>( schema->getTableCluster()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship SecGrpMembCluster to table Cluster" );
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
				cfcore::CFGenKbSecGroupBuff* chk = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId(),
						Buff->getRequiredSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecGrpMembGroup to table SecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecGrpMembBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByClusterIdxKey,
				std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByGroupIdxKey,
				std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
			dictByUserIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByUserIdxKey,
				std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>*>::value_type( keyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, buff ) );

		dictByUUserIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByUUserIdxKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( keyUUserIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> retVec;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecGrpMembBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbSecGrpMembByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> recVec;
		cfcore::CFGenKbSecGrpMembBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				 cfcore::CFGenKbSecGrpMembBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> recVec;
		cfcore::CFGenKbSecGrpMembBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				 cfcore::CFGenKbSecGrpMembBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUserIdx" );
		cfcore::CFGenKbSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> recVec;
		cfcore::CFGenKbSecGrpMembBuff* clone;
		auto searchDictByUserIdx = dictByUserIdx->find( key );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				 cfcore::CFGenKbSecGrpMembBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = subdictUserIdx->begin();
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				cfcore::CFGenKbSecGrpMembBuff*>::iterator end = subdictUserIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::readDerivedByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUUserIdx" );
		cfcore::CFGenKbSecGrpMembByUUserIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecUserId( SecUserId );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		auto searchDictByUUserIdx = dictByUUserIdx->find( key );
		if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( searchDictByUUserIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpMembId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecGrpMembPKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGrpMembId( SecGrpMembId );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecGrpMembBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff ) );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecGrpMembBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGrpMembId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecGrpMembBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			SecGrpMembId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = readDerivedByGroupIdx( Authorization,
			ClusterId,
			SecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUserIdx" );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = readDerivedByUserIdx( Authorization,
			SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::readBuffByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUUserIdx" );
		cfcore::CFGenKbSecGrpMembBuff* buff = readDerivedByUUserIdx( Authorization,
			ClusterId,
			SecGroupId,
			SecUserId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> CFGenKbRamSecGrpMembTable::pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageBuffByUserIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbRamSecGrpMembTable::updateSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecGrpMemb" );
		cfcore::CFGenKbSecGrpMembPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGrpMembId( Buff->getRequiredSecGrpMembId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecGrpMemb for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecGrpMembBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecGrpMemb primary key " );
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
		cfcore::CFGenKbSecGrpMembByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecGrpMembByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyGroupIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyGroupIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGrpMembByUserIdxKey existingKeyUserIdx;
		existingKeyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecGrpMembByUserIdxKey newKeyUserIdx;
		newKeyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfcore::CFGenKbSecGrpMembByUUserIdxKey existingKeyUUserIdx;
		existingKeyUUserIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUUserIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		existingKeyUUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecGrpMembByUUserIdxKey newKeyUUserIdx;
		newKeyUUserIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUUserIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		newKeyUUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Check unique indexes

		if( existingKeyUUserIdx != newKeyUUserIdx ) {
			auto searchDictByUUserIdx = dictByUUserIdx->find( newKeyUUserIdx );
			if( searchDictByUUserIdx != dictByUUserIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecGrpMembUUserIdx " + newKeyUUserIdx.toString() );
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
				cfcore::CFGenKbClusterBuff* chk = dynamic_cast<cfcore::CFGenKbClusterBuff*>( schema->getTableCluster()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Owner relationship SecGrpMembCluster to table Cluster" );
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
				cfcore::CFGenKbSecGroupBuff* chk = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId(),
						Buff->getRequiredSecGroupId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecGrpMembGroup to table SecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecGrpMembBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGrpMembPKey,
			 cfcore::CFGenKbSecGrpMembBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( existingKeyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			if( subdictClusterIdx->size() <= 0 ) {
				delete subdictClusterIdx;
				dictByClusterIdx->erase( searchDictByClusterIdx );
			}
			subdictClusterIdx = NULL;
		}
		auto searchNewKeyDictByClusterIdx = dictByClusterIdx->find( newKeyClusterIdx );
		if( searchNewKeyDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchNewKeyDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByClusterIdxKey,
				std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGrpMembPKey,
			 cfcore::CFGenKbSecGrpMembBuff*>* subdictGroupIdx;
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
			subdictGroupIdx = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByGroupIdxKey,
				std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGrpMembPKey,
			 cfcore::CFGenKbSecGrpMembBuff*>* subdictUserIdx;
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
			subdictUserIdx = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>();
			dictByUserIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByUserIdxKey,
				std::map<cfcore::CFGenKbSecGrpMembPKey,
					cfcore::CFGenKbSecGrpMembBuff*>*>::value_type( newKeyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( pkey, existing ) );

		auto removalDictByUUserIdx = dictByUUserIdx->find( existingKeyUUserIdx );
		if( removalDictByUUserIdx != dictByUUserIdx->end() ) {
			dictByUUserIdx->erase( removalDictByUUserIdx );
		}
		dictByUUserIdx->insert( std::map<cfcore::CFGenKbSecGrpMembByUUserIdxKey, cfcore::CFGenKbSecGrpMembBuff*>::value_type( newKeyUUserIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecGrpMembBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMemb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGrpMembBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecGrpMemb" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecGrpMembPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGrpMembId( Buff->getRequiredSecGrpMembId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecGrpMembBuff* existing = searchExisting->second;
		cfcore::CFGenKbSecGrpMembByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyGroupIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGrpMembByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecGrpMembByUUserIdxKey keyUUserIdx;
		keyUUserIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUUserIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		keyUUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::CFGenKbSecGrpMembBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				 cfcore::CFGenKbSecGrpMembBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				 cfcore::CFGenKbSecGrpMembBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey,
				 cfcore::CFGenKbSecGrpMembBuff*>* subdictUserIdx = searchDictByUserIdx->second;
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

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGrpMembId )
	{
		cfcore::CFGenKbSecGrpMembPKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGrpMembId( argSecGrpMembId );
		deleteSecGrpMembByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbSecGrpMembBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpMembId() );
			rereadCur = cur;
			deleteSecGrpMemb( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbSecGrpMembByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteSecGrpMembByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpMembId() );
			rereadCur = cur;
			deleteSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId )
	{
		cfcore::CFGenKbSecGrpMembByGroupIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		deleteSecGrpMembByGroupIdx( Authorization, &key );
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembByGroupIdxKey* argKey )
	{
		cfcore::CFGenKbSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpMembId() );
			rereadCur = cur;
			deleteSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		deleteSecGrpMembByUserIdx( Authorization, &key );
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembByUserIdxKey* argKey )
	{
		cfcore::CFGenKbSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpMembId() );
			rereadCur = cur;
			deleteSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbSecGrpMembByUUserIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		key.setRequiredSecUserId( argSecUserId );
		deleteSecGrpMembByUUserIdx( Authorization, &key );
	}

	void CFGenKbRamSecGrpMembTable::deleteSecGrpMembByUUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGrpMembByUUserIdxKey* argKey )
	{
		cfcore::CFGenKbSecGrpMembBuff* cur = NULL;
		cfcore::CFGenKbSecGrpMembBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGrpMembPKey,
			cfcore::CFGenKbSecGrpMembBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGrpMemb()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGrpMembId() );
			rereadCur = cur;
			deleteSecGrpMemb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGrpMembTable::releasePreparedStatements() {
	}

}
