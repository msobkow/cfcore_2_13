
// Description: C++18 Implementation for an in-memory RAM DbIO for SecForm.

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

	const std::string CFGenKbRamSecFormTable::CLASS_NAME( "CFGenKbRamSecFormTable" );

	CFGenKbRamSecFormTable::CFGenKbRamSecFormTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecFormTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbSecFormByClusterIdxKey,
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>*>();
		dictBySecAppIdx = new std::map<cfcore::CFGenKbSecFormBySecAppIdxKey,
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>*>();
		dictByUJEEServletIdx = new std::map<cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::CFGenKbSecFormBuff*>();
	}

	CFGenKbRamSecFormTable::~CFGenKbRamSecFormTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
		}
		if( dictBySecAppIdx != NULL ) {
			for( auto iterDict = dictBySecAppIdx->begin(); iterDict != dictBySecAppIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySecAppIdx;
			dictBySecAppIdx = NULL;
		}
		if( dictByUJEEServletIdx != NULL ) {
			delete dictByUJEEServletIdx;
			dictByUJEEServletIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecFormBuff* elt;
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecFormPKey,
					cfcore::CFGenKbSecFormBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::createSecForm( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecFormBuff* Buff )
	{
		static const std::string S_ProcName( "createSecForm" );
		cfcore::CFGenKbSecFormPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecFormId( dynamic_cast<CFGenKbRamClusterTable*>( schema->getTableCluster() )->nextSecFormIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredSecFormId( pkey.getRequiredSecFormId() );
		cfcore::CFGenKbSecFormByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecFormBySecAppIdxKey keySecAppIdx;
		keySecAppIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keySecAppIdx.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		cfcore::CFGenKbSecFormByUJEEServletIdxKey keyUJEEServletIdx;
		keyUJEEServletIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUJEEServletIdx.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		keyUJEEServletIdx.setRequiredJEEServletMapName( Buff->getRequiredJEEServletMapName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUJEEServletIdx = dictByUJEEServletIdx->find( keyUJEEServletIdx );
		if( searchDictByUJEEServletIdx != dictByUJEEServletIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SecFormUJEEServletIdx " + keyUJEEServletIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship SecFormCluster to table Cluster" );
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
				cfcore::CFGenKbSecAppBuff* chk = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( schema->getTableSecApp()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId(),
						Buff->getRequiredSecAppId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecFormApplication to table SecApp" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecFormBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecFormByClusterIdxKey,
				std::map<cfcore::CFGenKbSecFormPKey,
					cfcore::CFGenKbSecFormBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>* subdictSecAppIdx;
		auto searchDictBySecAppIdx = dictBySecAppIdx->find( keySecAppIdx );
		if( searchDictBySecAppIdx != dictBySecAppIdx->end() ) {
			subdictSecAppIdx = searchDictBySecAppIdx->second;
		}
		else {
			subdictSecAppIdx = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>();
			dictBySecAppIdx->insert( std::map<cfcore::CFGenKbSecFormBySecAppIdxKey,
				std::map<cfcore::CFGenKbSecFormPKey,
					cfcore::CFGenKbSecFormBuff*>*>::value_type( keySecAppIdx, subdictSecAppIdx ) );
		}
		subdictSecAppIdx->insert( std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>::value_type( pkey, buff ) );

		dictByUJEEServletIdx->insert( std::map<cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::CFGenKbSecFormBuff*>::value_type( keyUJEEServletIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecFormBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecFormBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> retVec;
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecFormBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> recVec;
		cfcore::CFGenKbSecFormBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecFormPKey,
				 cfcore::CFGenKbSecFormBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::readDerivedBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readDerivedBySecAppIdx" );
		cfcore::CFGenKbSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> recVec;
		cfcore::CFGenKbSecFormBuff* clone;
		auto searchDictBySecAppIdx = dictBySecAppIdx->find( key );
		if( searchDictBySecAppIdx != dictBySecAppIdx->end() ) {
			std::map<cfcore::CFGenKbSecFormPKey,
				 cfcore::CFGenKbSecFormBuff*>* subdictSecAppIdx = searchDictBySecAppIdx->second;
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>::iterator iter = subdictSecAppIdx->begin();
			std::map<cfcore::CFGenKbSecFormPKey,
				cfcore::CFGenKbSecFormBuff*>::iterator end = subdictSecAppIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readDerivedByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		static const std::string S_ProcName( "readDerivedByUJEEServletIdx" );
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfcore::CFGenKbSecFormBuff* buff;
		auto searchDictByUJEEServletIdx = dictByUJEEServletIdx->find( key );
		if( searchDictByUJEEServletIdx != dictByUJEEServletIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( searchDictByUJEEServletIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecFormPKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecFormId( SecFormId );
		cfcore::CFGenKbSecFormBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecFormBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecFormBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecFormBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			SecFormId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbSecFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::readBuffBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readBuffBySecAppIdx" );
		cfcore::CFGenKbSecFormBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = readDerivedBySecAppIdx( Authorization,
			ClusterId,
			SecAppId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readBuffByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		static const std::string S_ProcName( "readBuffByUJEEServletIdx" );
		cfcore::CFGenKbSecFormBuff* buff = readDerivedByUJEEServletIdx( Authorization,
			ClusterId,
			SecAppId,
			JEEServletMapName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readBuffByLookupUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId, const std::string& JEEServletMapName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUJEEServletIdx" );
		cfcore::CFGenKbSecFormBuff* buff = readBuffByUJEEServletIdx( Authorization,
			ClusterId,
			SecAppId,
			JEEServletMapName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::readDerivedByLookupUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId, const std::string& JEEServletMapName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUJEEServletIdx" );
		cfcore::CFGenKbSecFormBuff* buff = readDerivedByUJEEServletIdx( Authorization,
			ClusterId,
			SecAppId,
			JEEServletMapName );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> CFGenKbRamSecFormTable::pageBuffBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageBuffBySecAppIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecFormBuff* CFGenKbRamSecFormTable::updateSecForm( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecFormBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecForm" );
		cfcore::CFGenKbSecFormPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecFormId( Buff->getRequiredSecFormId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecForm for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecFormBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecForm primary key " );
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
		cfcore::CFGenKbSecFormByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecFormByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecFormBySecAppIdxKey existingKeySecAppIdx;
		existingKeySecAppIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeySecAppIdx.setRequiredSecAppId( existing->getRequiredSecAppId() );
		cfcore::CFGenKbSecFormBySecAppIdxKey newKeySecAppIdx;
		newKeySecAppIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeySecAppIdx.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		cfcore::CFGenKbSecFormByUJEEServletIdxKey existingKeyUJEEServletIdx;
		existingKeyUJEEServletIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUJEEServletIdx.setRequiredSecAppId( existing->getRequiredSecAppId() );
		existingKeyUJEEServletIdx.setRequiredJEEServletMapName( existing->getRequiredJEEServletMapName() );
		cfcore::CFGenKbSecFormByUJEEServletIdxKey newKeyUJEEServletIdx;
		newKeyUJEEServletIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUJEEServletIdx.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		newKeyUJEEServletIdx.setRequiredJEEServletMapName( Buff->getRequiredJEEServletMapName() );
		// Check unique indexes

		if( existingKeyUJEEServletIdx != newKeyUJEEServletIdx ) {
			auto searchDictByUJEEServletIdx = dictByUJEEServletIdx->find( newKeyUJEEServletIdx );
			if( searchDictByUJEEServletIdx != dictByUJEEServletIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecFormUJEEServletIdx " + newKeyUJEEServletIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship SecFormCluster to table Cluster" );
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
				cfcore::CFGenKbSecAppBuff* chk = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( schema->getTableSecApp()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredClusterId(),
						Buff->getRequiredSecAppId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecFormApplication to table SecApp" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecFormBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecFormPKey,
			 cfcore::CFGenKbSecFormBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecFormByClusterIdxKey,
				std::map<cfcore::CFGenKbSecFormPKey,
					cfcore::CFGenKbSecFormBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecFormPKey,
			 cfcore::CFGenKbSecFormBuff*>* subdictSecAppIdx;
		auto searchDictBySecAppIdx = dictBySecAppIdx->find( existingKeySecAppIdx );
		if( searchDictBySecAppIdx != dictBySecAppIdx->end() ) {
			subdictSecAppIdx = searchDictBySecAppIdx->second;
			auto searchSubDict = subdictSecAppIdx->find( pkey );
			if( searchSubDict != subdictSecAppIdx->end() ) {
				subdictSecAppIdx->erase( searchSubDict );
			}
			if( subdictSecAppIdx->size() <= 0 ) {
				delete subdictSecAppIdx;
				dictBySecAppIdx->erase( searchDictBySecAppIdx );
			}
			subdictSecAppIdx = NULL;
		}
		auto searchNewKeyDictBySecAppIdx = dictBySecAppIdx->find( newKeySecAppIdx );
		if( searchNewKeyDictBySecAppIdx != dictBySecAppIdx->end() ) {
			subdictSecAppIdx = searchNewKeyDictBySecAppIdx->second;
		}
		else {
			subdictSecAppIdx = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>();
			dictBySecAppIdx->insert( std::map<cfcore::CFGenKbSecFormBySecAppIdxKey,
				std::map<cfcore::CFGenKbSecFormPKey,
					cfcore::CFGenKbSecFormBuff*>*>::value_type( newKeySecAppIdx, subdictSecAppIdx ) );
		}
		subdictSecAppIdx->insert( std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>::value_type( pkey, existing ) );

		auto removalDictByUJEEServletIdx = dictByUJEEServletIdx->find( existingKeyUJEEServletIdx );
		if( removalDictByUJEEServletIdx != dictByUJEEServletIdx->end() ) {
			dictByUJEEServletIdx->erase( removalDictByUJEEServletIdx );
		}
		dictByUJEEServletIdx->insert( std::map<cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::CFGenKbSecFormBuff*>::value_type( newKeyUJEEServletIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecFormBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecFormTable::deleteSecForm( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecFormBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecForm" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecFormPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecFormId( Buff->getRequiredSecFormId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecFormBuff* existing = searchExisting->second;
		cfcore::CFGenKbSecFormByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecFormBySecAppIdxKey keySecAppIdx;
		keySecAppIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keySecAppIdx.setRequiredSecAppId( existing->getRequiredSecAppId() );
		cfcore::CFGenKbSecFormByUJEEServletIdxKey keyUJEEServletIdx;
		keyUJEEServletIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUJEEServletIdx.setRequiredSecAppId( existing->getRequiredSecAppId() );
		keyUJEEServletIdx.setRequiredJEEServletMapName( existing->getRequiredJEEServletMapName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::CFGenKbSecFormBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecFormPKey,
				 cfcore::CFGenKbSecFormBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictBySecAppIdx = dictBySecAppIdx->find( keySecAppIdx );
		if( searchDictBySecAppIdx != dictBySecAppIdx->end() ) {
			std::map<cfcore::CFGenKbSecFormPKey,
				 cfcore::CFGenKbSecFormBuff*>* subdictSecAppIdx = searchDictBySecAppIdx->second;
			auto searchSubDict = subdictSecAppIdx->find( pkey );
			if( searchSubDict != subdictSecAppIdx->end() ) {
				subdictSecAppIdx->erase( searchSubDict );
			}
			subdictSecAppIdx = NULL;
		}

		auto searchDictByUJEEServletIdx = dictByUJEEServletIdx->find( keyUJEEServletIdx );
		if( searchDictByUJEEServletIdx != dictByUJEEServletIdx->end() ) {
			dictByUJEEServletIdx->erase( searchDictByUJEEServletIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamSecFormTable::deleteSecFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecFormId )
	{
		cfcore::CFGenKbSecFormPKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecFormId( argSecFormId );
		deleteSecFormByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecFormTable::deleteSecFormByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecFormBuff* cur = NULL;
		cfcore::CFGenKbSecFormBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecFormId() );
			rereadCur = cur;
			deleteSecForm( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecFormTable::deleteSecFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbSecFormByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteSecFormByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamSecFormTable::deleteSecFormByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbSecFormBuff* cur = NULL;
		cfcore::CFGenKbSecFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecFormId() );
			rereadCur = cur;
			deleteSecForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecFormTable::deleteSecFormBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId )
	{
		cfcore::CFGenKbSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecAppId( argSecAppId );
		deleteSecFormBySecAppIdx( Authorization, &key );
	}

	void CFGenKbRamSecFormTable::deleteSecFormBySecAppIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormBySecAppIdxKey* argKey )
	{
		cfcore::CFGenKbSecFormBuff* cur = NULL;
		cfcore::CFGenKbSecFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecFormId() );
			rereadCur = cur;
			deleteSecForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecFormTable::deleteSecFormByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId,
			const std::string& argJEEServletMapName )
	{
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecAppId( argSecAppId );
		key.setRequiredJEEServletMapName( argJEEServletMapName );
		deleteSecFormByUJEEServletIdx( Authorization, &key );
	}

	void CFGenKbRamSecFormTable::deleteSecFormByUJEEServletIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecFormByUJEEServletIdxKey* argKey )
	{
		cfcore::CFGenKbSecFormBuff* cur = NULL;
		cfcore::CFGenKbSecFormBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> matchSet;
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecFormPKey,
			cfcore::CFGenKbSecFormBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecForm()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecFormId() );
			rereadCur = cur;
			deleteSecForm( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecFormTable::releasePreparedStatements() {
	}

}
