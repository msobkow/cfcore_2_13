
// Description: C++18 Implementation for an in-memory RAM DbIO for TSecGrpInc.

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

	const std::string CFGenKbRamTSecGrpIncTable::CLASS_NAME( "CFGenKbRamTSecGrpIncTable" );

	CFGenKbRamTSecGrpIncTable::CFGenKbRamTSecGrpIncTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbTSecGrpIncTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>*>();
		dictByGroupIdx = new std::map<cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>*>();
		dictByIncludeIdx = new std::map<cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>*>();
		dictByUIncludeIdx = new std::map<cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey, cfcore::CFGenKbTSecGrpIncBuff*>();
	}

	CFGenKbRamTSecGrpIncTable::~CFGenKbRamTSecGrpIncTable() {
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
		if( dictByIncludeIdx != NULL ) {
			for( auto iterDict = dictByIncludeIdx->begin(); iterDict != dictByIncludeIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByIncludeIdx;
			dictByIncludeIdx = NULL;
		}
		if( dictByUIncludeIdx != NULL ) {
			delete dictByUIncludeIdx;
			dictByUIncludeIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbTSecGrpIncBuff* elt;
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::createTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "createTSecGrpInc" );
		cfcore::CFGenKbTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpIncId( dynamic_cast<CFGenKbRamTenantTable*>( schema->getTableTenant() )->nextTSecGrpIncIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredTSecGrpIncId( pkey.getRequiredTSecGrpIncId() );
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey keyIncludeIdx;
		keyIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
		keyUIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUIncludeIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		keyUIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( keyUIncludeIdx );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TSecGrpIncUIncludeIdx " + keyUIncludeIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship TSecGrpIncTenant to table Tenant" );
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
					std::string Msg( "Could not resolve Container relationship TSecGrpIncGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbTSecGrpIncBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
				std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
				std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>* subdictIncludeIdx;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( keyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchDictByIncludeIdx->second;
		}
		else {
			subdictIncludeIdx = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
			dictByIncludeIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
				std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>*>::value_type( keyIncludeIdx, subdictIncludeIdx ) );
		}
		subdictIncludeIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, buff ) );

		dictByUIncludeIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( keyUIncludeIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> retVec;
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbTSecGrpIncBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> recVec;
		cfcore::CFGenKbTSecGrpIncBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				 cfcore::CFGenKbTSecGrpIncBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> recVec;
		cfcore::CFGenKbTSecGrpIncBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				 cfcore::CFGenKbTSecGrpIncBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readDerivedByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readDerivedByIncludeIdx" );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> recVec;
		cfcore::CFGenKbTSecGrpIncBuff* clone;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( key );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				 cfcore::CFGenKbTSecGrpIncBuff*>* subdictIncludeIdx = searchDictByIncludeIdx->second;
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = subdictIncludeIdx->begin();
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = subdictIncludeIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::readDerivedByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readDerivedByUIncludeIdx" );
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( key );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( searchDictByUIncludeIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpIncId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbTSecGrpIncPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGrpIncId( TSecGrpIncId );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbTSecGrpIncBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff ) );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbTSecGrpIncBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t TSecGrpIncId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbTSecGrpIncBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			TSecGrpIncId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = readDerivedByGroupIdx( Authorization,
			TenantId,
			TSecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::readBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readBuffByIncludeIdx" );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = readDerivedByIncludeIdx( Authorization,
			TenantId,
			IncludeGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::readBuffByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readBuffByUIncludeIdx" );
		cfcore::CFGenKbTSecGrpIncBuff* buff = readDerivedByUIncludeIdx( Authorization,
			TenantId,
			TSecGroupId,
			IncludeGroupId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::pageBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByTenantIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> CFGenKbRamTSecGrpIncTable::pageBuffByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t IncludeGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageBuffByIncludeIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbRamTSecGrpIncTable::updateTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "updateTSecGrpInc" );
		cfcore::CFGenKbTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpIncId( Buff->getRequiredTSecGrpIncId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in TSecGrpInc for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbTSecGrpIncBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for TSecGrpInc primary key " );
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
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyGroupIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey existingKeyIncludeIdx;
		existingKeyIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey newKeyIncludeIdx;
		newKeyIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey existingKeyUIncludeIdx;
		existingKeyUIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUIncludeIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		existingKeyUIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey newKeyUIncludeIdx;
		newKeyUIncludeIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUIncludeIdx.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		newKeyUIncludeIdx.setRequiredIncludeGroupId( Buff->getRequiredIncludeGroupId() );
		// Check unique indexes

		if( existingKeyUIncludeIdx != newKeyUIncludeIdx ) {
			auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( newKeyUIncludeIdx );
			if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TSecGrpIncUIncludeIdx " + newKeyUIncludeIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship TSecGrpIncTenant to table Tenant" );
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
					std::string Msg( "Could not resolve Container relationship TSecGrpIncGroup to table TSecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbTSecGrpIncBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			 cfcore::CFGenKbTSecGrpIncBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
				std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			 cfcore::CFGenKbTSecGrpIncBuff*>* subdictGroupIdx;
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
			subdictGroupIdx = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
				std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			 cfcore::CFGenKbTSecGrpIncBuff*>* subdictIncludeIdx;
		auto searchDictByIncludeIdx = dictByIncludeIdx->find( existingKeyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchDictByIncludeIdx->second;
			auto searchSubDict = subdictIncludeIdx->find( pkey );
			if( searchSubDict != subdictIncludeIdx->end() ) {
				subdictIncludeIdx->erase( searchSubDict );
			}
			if( subdictIncludeIdx->size() <= 0 ) {
				delete subdictIncludeIdx;
				dictByIncludeIdx->erase( searchDictByIncludeIdx );
			}
			subdictIncludeIdx = NULL;
		}
		auto searchNewKeyDictByIncludeIdx = dictByIncludeIdx->find( newKeyIncludeIdx );
		if( searchNewKeyDictByIncludeIdx != dictByIncludeIdx->end() ) {
			subdictIncludeIdx = searchNewKeyDictByIncludeIdx->second;
		}
		else {
			subdictIncludeIdx = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>();
			dictByIncludeIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
				std::map<cfcore::CFGenKbTSecGrpIncPKey,
					cfcore::CFGenKbTSecGrpIncBuff*>*>::value_type( newKeyIncludeIdx, subdictIncludeIdx ) );
		}
		subdictIncludeIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( pkey, existing ) );

		auto removalDictByUIncludeIdx = dictByUIncludeIdx->find( existingKeyUIncludeIdx );
		if( removalDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			dictByUIncludeIdx->erase( removalDictByUIncludeIdx );
		}
		dictByUIncludeIdx->insert( std::map<cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey, cfcore::CFGenKbTSecGrpIncBuff*>::value_type( newKeyUIncludeIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbTSecGrpIncBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpInc( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGrpIncBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTSecGrpInc" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGrpIncId( Buff->getRequiredTSecGrpIncId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbTSecGrpIncBuff* existing = searchExisting->second;
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyGroupIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey keyIncludeIdx;
		keyIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
		keyUIncludeIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUIncludeIdx.setRequiredTSecGroupId( existing->getRequiredTSecGroupId() );
		keyUIncludeIdx.setRequiredIncludeGroupId( existing->getRequiredIncludeGroupId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::CFGenKbTSecGrpIncBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				 cfcore::CFGenKbTSecGrpIncBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				 cfcore::CFGenKbTSecGrpIncBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByIncludeIdx = dictByIncludeIdx->find( keyIncludeIdx );
		if( searchDictByIncludeIdx != dictByIncludeIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey,
				 cfcore::CFGenKbTSecGrpIncBuff*>* subdictIncludeIdx = searchDictByIncludeIdx->second;
			auto searchSubDict = subdictIncludeIdx->find( pkey );
			if( searchSubDict != subdictIncludeIdx->end() ) {
				subdictIncludeIdx->erase( searchSubDict );
			}
			subdictIncludeIdx = NULL;
		}

		auto searchDictByUIncludeIdx = dictByUIncludeIdx->find( keyUIncludeIdx );
		if( searchDictByUIncludeIdx != dictByUIncludeIdx->end() ) {
			dictByUIncludeIdx->erase( searchDictByUIncludeIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argTSecGrpIncId )
	{
		cfcore::CFGenKbTSecGrpIncPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGrpIncId( argTSecGrpIncId );
		deleteTSecGrpIncByIdIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbTSecGrpIncBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTSecGrpIncByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpIncBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId )
	{
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		deleteTSecGrpIncByGroupIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncByGroupIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpIncBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argIncludeGroupId )
	{
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIncludeGroupId( argIncludeGroupId );
		deleteTSecGrpIncByIncludeIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncByIncludeIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpIncBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId,
			const int32_t argIncludeGroupId )
	{
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		key.setRequiredIncludeGroupId( argIncludeGroupId );
		deleteTSecGrpIncByUIncludeIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGrpIncTable::deleteTSecGrpIncByUIncludeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGrpIncBuff* cur = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGrpIncPKey,
			cfcore::CFGenKbTSecGrpIncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGrpInc()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGrpIncId() );
			rereadCur = cur;
			deleteTSecGrpInc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGrpIncTable::releasePreparedStatements() {
	}

}
