
// Description: C++18 Implementation for an in-memory RAM DbIO for SecGroupForm.

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

	const std::string CFGenKbRamSecGroupFormTable::CLASS_NAME( "CFGenKbRamSecGroupFormTable" );

	CFGenKbRamSecGroupFormTable::CFGenKbRamSecGroupFormTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecGroupFormTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbSecGroupFormByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>();
		dictByGroupIdx = new std::map<cfcore::CFGenKbSecGroupFormByGroupIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>();
		dictByAppIdx = new std::map<cfcore::CFGenKbSecGroupFormByAppIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>();
		dictByFormIdx = new std::map<cfcore::CFGenKbSecGroupFormByFormIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>*>();
		dictByUFormIdx = new std::map<cfcore::CFGenKbSecGroupFormByUFormIdxKey, cfcore::CFGenKbSecGroupFormBuff*>();
	}

	CFGenKbRamSecGroupFormTable::~CFGenKbRamSecGroupFormTable() {
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
		if( dictByAppIdx != NULL ) {
			for( auto iterDict = dictByAppIdx->begin(); iterDict != dictByAppIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByAppIdx;
			dictByAppIdx = NULL;
		}
		if( dictByFormIdx != NULL ) {
			for( auto iterDict = dictByFormIdx->begin(); iterDict != dictByFormIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByFormIdx;
			dictByFormIdx = NULL;
		}
		if( dictByUFormIdx != NULL ) {
			delete dictByUFormIdx;
			dictByUFormIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecGroupFormBuff* elt;
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::createSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGroupFormBuff* Buff )
	{
		static const std::string S_ProcName( "createSecGroupForm" );
		cfcore::CFGenKbSecGroupFormPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGroupFormId( dynamic_cast<CFGenKbRamClusterTable*>( schema->getTableCluster() )->nextSecGroupFormIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredSecGroupFormId( pkey.getRequiredSecGroupFormId() );
		cfcore::CFGenKbSecGroupFormByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyGroupIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGroupFormByAppIdxKey keyAppIdx;
		keyAppIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyAppIdx.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		cfcore::CFGenKbSecGroupFormByFormIdxKey keyFormIdx;
		keyFormIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyFormIdx.setRequiredSecFormId( Buff->getRequiredSecFormId() );
		cfcore::CFGenKbSecGroupFormByUFormIdxKey keyUFormIdx;
		keyUFormIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUFormIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		keyUFormIdx.setRequiredSecFormId( Buff->getRequiredSecFormId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUFormIdx = dictByUFormIdx->find( keyUFormIdx );
		if( searchDictByUFormIdx != dictByUFormIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SecGroupFormUFormIdx " + keyUFormIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship SecGroupFormCluster to table Cluster" );
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
					std::string Msg( "Could not resolve Container relationship SecGroupFormGroup to table SecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecGroupFormBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByClusterIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>* subdictGroupIdx;
		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			subdictGroupIdx = searchDictByGroupIdx->second;
		}
		else {
			subdictGroupIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByGroupIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( keyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>* subdictAppIdx;
		auto searchDictByAppIdx = dictByAppIdx->find( keyAppIdx );
		if( searchDictByAppIdx != dictByAppIdx->end() ) {
			subdictAppIdx = searchDictByAppIdx->second;
		}
		else {
			subdictAppIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByAppIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByAppIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( keyAppIdx, subdictAppIdx ) );
		}
		subdictAppIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>* subdictFormIdx;
		auto searchDictByFormIdx = dictByFormIdx->find( keyFormIdx );
		if( searchDictByFormIdx != dictByFormIdx->end() ) {
			subdictFormIdx = searchDictByFormIdx->second;
		}
		else {
			subdictFormIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByFormIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByFormIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( keyFormIdx, subdictFormIdx ) );
		}
		subdictFormIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, buff ) );

		dictByUFormIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByUFormIdxKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( keyUFormIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> retVec;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecGroupFormBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbSecGroupFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> recVec;
		cfcore::CFGenKbSecGroupFormBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readDerivedByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByGroupIdx" );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> recVec;
		cfcore::CFGenKbSecGroupFormBuff* clone;
		auto searchDictByGroupIdx = dictByGroupIdx->find( key );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = subdictGroupIdx->begin();
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator end = subdictGroupIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readDerivedByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readDerivedByAppIdx" );
		cfcore::CFGenKbSecGroupFormByAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> recVec;
		cfcore::CFGenKbSecGroupFormBuff* clone;
		auto searchDictByAppIdx = dictByAppIdx->find( key );
		if( searchDictByAppIdx != dictByAppIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictAppIdx = searchDictByAppIdx->second;
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = subdictAppIdx->begin();
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator end = subdictAppIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readDerivedByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readDerivedByFormIdx" );
		cfcore::CFGenKbSecGroupFormByFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecFormId( SecFormId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> recVec;
		cfcore::CFGenKbSecGroupFormBuff* clone;
		auto searchDictByFormIdx = dictByFormIdx->find( key );
		if( searchDictByFormIdx != dictByFormIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictFormIdx = searchDictByFormIdx->second;
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = subdictFormIdx->begin();
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				cfcore::CFGenKbSecGroupFormBuff*>::iterator end = subdictFormIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::readDerivedByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readDerivedByUFormIdx" );
		cfcore::CFGenKbSecGroupFormByUFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecFormId( SecFormId );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		auto searchDictByUFormIdx = dictByUFormIdx->find( key );
		if( searchDictByUFormIdx != dictByUFormIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( searchDictByUFormIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGroupFormId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecGroupFormPKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupFormId( SecGroupFormId );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecGroupFormBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff ) );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecGroupFormBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t SecGroupFormId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecGroupFormBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			SecGroupFormId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readBuffByGroupIdx" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = readDerivedByGroupIdx( Authorization,
			ClusterId,
			SecGroupId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readBuffByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readBuffByAppIdx" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = readDerivedByAppIdx( Authorization,
			ClusterId,
			SecAppId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::readBuffByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readBuffByFormIdx" );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = readDerivedByFormIdx( Authorization,
			ClusterId,
			SecFormId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::readBuffByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readBuffByUFormIdx" );
		cfcore::CFGenKbSecGroupFormBuff* buff = readDerivedByUFormIdx( Authorization,
			ClusterId,
			SecGroupId,
			SecFormId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::pageBuffByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageBuffByGroupIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::pageBuffByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageBuffByAppIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> CFGenKbRamSecGroupFormTable::pageBuffByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageBuffByFormIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbRamSecGroupFormTable::updateSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGroupFormBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecGroupForm" );
		cfcore::CFGenKbSecGroupFormPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGroupFormId( Buff->getRequiredSecGroupFormId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecGroupForm for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecGroupFormBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecGroupForm primary key " );
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
		cfcore::CFGenKbSecGroupFormByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupFormByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey existingKeyGroupIdx;
		existingKeyGroupIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyGroupIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey newKeyGroupIdx;
		newKeyGroupIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyGroupIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGroupFormByAppIdxKey existingKeyAppIdx;
		existingKeyAppIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyAppIdx.setRequiredSecAppId( existing->getRequiredSecAppId() );
		cfcore::CFGenKbSecGroupFormByAppIdxKey newKeyAppIdx;
		newKeyAppIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyAppIdx.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		cfcore::CFGenKbSecGroupFormByFormIdxKey existingKeyFormIdx;
		existingKeyFormIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyFormIdx.setRequiredSecFormId( existing->getRequiredSecFormId() );
		cfcore::CFGenKbSecGroupFormByFormIdxKey newKeyFormIdx;
		newKeyFormIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyFormIdx.setRequiredSecFormId( Buff->getRequiredSecFormId() );
		cfcore::CFGenKbSecGroupFormByUFormIdxKey existingKeyUFormIdx;
		existingKeyUFormIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUFormIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		existingKeyUFormIdx.setRequiredSecFormId( existing->getRequiredSecFormId() );
		cfcore::CFGenKbSecGroupFormByUFormIdxKey newKeyUFormIdx;
		newKeyUFormIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUFormIdx.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		newKeyUFormIdx.setRequiredSecFormId( Buff->getRequiredSecFormId() );
		// Check unique indexes

		if( existingKeyUFormIdx != newKeyUFormIdx ) {
			auto searchDictByUFormIdx = dictByUFormIdx->find( newKeyUFormIdx );
			if( searchDictByUFormIdx != dictByUFormIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecGroupFormUFormIdx " + newKeyUFormIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship SecGroupFormCluster to table Cluster" );
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
					std::string Msg( "Could not resolve Container relationship SecGroupFormGroup to table SecGroup" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecGroupFormBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey,
			 cfcore::CFGenKbSecGroupFormBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByClusterIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey,
			 cfcore::CFGenKbSecGroupFormBuff*>* subdictGroupIdx;
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
			subdictGroupIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByGroupIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByGroupIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( newKeyGroupIdx, subdictGroupIdx ) );
		}
		subdictGroupIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey,
			 cfcore::CFGenKbSecGroupFormBuff*>* subdictAppIdx;
		auto searchDictByAppIdx = dictByAppIdx->find( existingKeyAppIdx );
		if( searchDictByAppIdx != dictByAppIdx->end() ) {
			subdictAppIdx = searchDictByAppIdx->second;
			auto searchSubDict = subdictAppIdx->find( pkey );
			if( searchSubDict != subdictAppIdx->end() ) {
				subdictAppIdx->erase( searchSubDict );
			}
			if( subdictAppIdx->size() <= 0 ) {
				delete subdictAppIdx;
				dictByAppIdx->erase( searchDictByAppIdx );
			}
			subdictAppIdx = NULL;
		}
		auto searchNewKeyDictByAppIdx = dictByAppIdx->find( newKeyAppIdx );
		if( searchNewKeyDictByAppIdx != dictByAppIdx->end() ) {
			subdictAppIdx = searchNewKeyDictByAppIdx->second;
		}
		else {
			subdictAppIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByAppIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByAppIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( newKeyAppIdx, subdictAppIdx ) );
		}
		subdictAppIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGroupFormPKey,
			 cfcore::CFGenKbSecGroupFormBuff*>* subdictFormIdx;
		auto searchDictByFormIdx = dictByFormIdx->find( existingKeyFormIdx );
		if( searchDictByFormIdx != dictByFormIdx->end() ) {
			subdictFormIdx = searchDictByFormIdx->second;
			auto searchSubDict = subdictFormIdx->find( pkey );
			if( searchSubDict != subdictFormIdx->end() ) {
				subdictFormIdx->erase( searchSubDict );
			}
			if( subdictFormIdx->size() <= 0 ) {
				delete subdictFormIdx;
				dictByFormIdx->erase( searchDictByFormIdx );
			}
			subdictFormIdx = NULL;
		}
		auto searchNewKeyDictByFormIdx = dictByFormIdx->find( newKeyFormIdx );
		if( searchNewKeyDictByFormIdx != dictByFormIdx->end() ) {
			subdictFormIdx = searchNewKeyDictByFormIdx->second;
		}
		else {
			subdictFormIdx = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>();
			dictByFormIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByFormIdxKey,
				std::map<cfcore::CFGenKbSecGroupFormPKey,
					cfcore::CFGenKbSecGroupFormBuff*>*>::value_type( newKeyFormIdx, subdictFormIdx ) );
		}
		subdictFormIdx->insert( std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( pkey, existing ) );

		auto removalDictByUFormIdx = dictByUFormIdx->find( existingKeyUFormIdx );
		if( removalDictByUFormIdx != dictByUFormIdx->end() ) {
			dictByUFormIdx->erase( removalDictByUFormIdx );
		}
		dictByUFormIdx->insert( std::map<cfcore::CFGenKbSecGroupFormByUFormIdxKey, cfcore::CFGenKbSecGroupFormBuff*>::value_type( newKeyUFormIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecGroupFormBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupForm( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGroupFormBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecGroupForm" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecGroupFormPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGroupFormId( Buff->getRequiredSecGroupFormId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecGroupFormBuff* existing = searchExisting->second;
		cfcore::CFGenKbSecGroupFormByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey keyGroupIdx;
		keyGroupIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyGroupIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGroupFormByAppIdxKey keyAppIdx;
		keyAppIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyAppIdx.setRequiredSecAppId( existing->getRequiredSecAppId() );
		cfcore::CFGenKbSecGroupFormByFormIdxKey keyFormIdx;
		keyFormIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyFormIdx.setRequiredSecFormId( existing->getRequiredSecFormId() );
		cfcore::CFGenKbSecGroupFormByUFormIdxKey keyUFormIdx;
		keyUFormIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUFormIdx.setRequiredSecGroupId( existing->getRequiredSecGroupId() );
		keyUFormIdx.setRequiredSecFormId( existing->getRequiredSecFormId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::CFGenKbSecGroupFormBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByGroupIdx = dictByGroupIdx->find( keyGroupIdx );
		if( searchDictByGroupIdx != dictByGroupIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictGroupIdx = searchDictByGroupIdx->second;
			auto searchSubDict = subdictGroupIdx->find( pkey );
			if( searchSubDict != subdictGroupIdx->end() ) {
				subdictGroupIdx->erase( searchSubDict );
			}
			subdictGroupIdx = NULL;
		}

		auto searchDictByAppIdx = dictByAppIdx->find( keyAppIdx );
		if( searchDictByAppIdx != dictByAppIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictAppIdx = searchDictByAppIdx->second;
			auto searchSubDict = subdictAppIdx->find( pkey );
			if( searchSubDict != subdictAppIdx->end() ) {
				subdictAppIdx->erase( searchSubDict );
			}
			subdictAppIdx = NULL;
		}

		auto searchDictByFormIdx = dictByFormIdx->find( keyFormIdx );
		if( searchDictByFormIdx != dictByFormIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey,
				 cfcore::CFGenKbSecGroupFormBuff*>* subdictFormIdx = searchDictByFormIdx->second;
			auto searchSubDict = subdictFormIdx->find( pkey );
			if( searchSubDict != subdictFormIdx->end() ) {
				subdictFormIdx->erase( searchSubDict );
			}
			subdictFormIdx = NULL;
		}

		auto searchDictByUFormIdx = dictByUFormIdx->find( keyUFormIdx );
		if( searchDictByUFormIdx != dictByUFormIdx->end() ) {
			dictByUFormIdx->erase( searchDictByUFormIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argSecGroupFormId )
	{
		cfcore::CFGenKbSecGroupFormPKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupFormId( argSecGroupFormId );
		deleteSecGroupFormByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecGroupFormBuff* cur = NULL;
		cfcore::CFGenKbSecGroupFormBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroupForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupFormId() );
			rereadCur = cur;
			deleteSecGroupForm( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbSecGroupFormByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteSecGroupFormByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupFormBuff* cur = NULL;
		cfcore::CFGenKbSecGroupFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroupForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupFormId() );
			rereadCur = cur;
			deleteSecGroupForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId )
	{
		cfcore::CFGenKbSecGroupFormByGroupIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		deleteSecGroupFormByGroupIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByGroupIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormByGroupIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupFormBuff* cur = NULL;
		cfcore::CFGenKbSecGroupFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroupForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupFormId() );
			rereadCur = cur;
			deleteSecGroupForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId )
	{
		cfcore::CFGenKbSecGroupFormByAppIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecAppId( argSecAppId );
		deleteSecGroupFormByAppIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormByAppIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupFormBuff* cur = NULL;
		cfcore::CFGenKbSecGroupFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroupForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupFormId() );
			rereadCur = cur;
			deleteSecGroupForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecFormId )
	{
		cfcore::CFGenKbSecGroupFormByFormIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecFormId( argSecFormId );
		deleteSecGroupFormByFormIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormByFormIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupFormBuff* cur = NULL;
		cfcore::CFGenKbSecGroupFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroupForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupFormId() );
			rereadCur = cur;
			deleteSecGroupForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId,
			const int32_t argSecFormId )
	{
		cfcore::CFGenKbSecGroupFormByUFormIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		key.setRequiredSecFormId( argSecFormId );
		deleteSecGroupFormByUFormIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupFormTable::deleteSecGroupFormByUFormIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupFormByUFormIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupFormBuff* cur = NULL;
		cfcore::CFGenKbSecGroupFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupFormPKey,
			cfcore::CFGenKbSecGroupFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroupForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupFormId() );
			rereadCur = cur;
			deleteSecGroupForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupFormTable::releasePreparedStatements() {
	}

}
