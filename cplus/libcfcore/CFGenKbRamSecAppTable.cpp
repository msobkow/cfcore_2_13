
// Description: C++18 Implementation for an in-memory RAM DbIO for SecApp.

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

	const std::string CFGenKbRamSecAppTable::CLASS_NAME( "CFGenKbRamSecAppTable" );

	CFGenKbRamSecAppTable::CFGenKbRamSecAppTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecAppTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbSecAppByClusterIdxKey,
			std::map<cfcore::CFGenKbSecAppPKey,
				cfcore::CFGenKbSecAppBuff*>*>();
		dictByUJEEMountIdx = new std::map<cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::CFGenKbSecAppBuff*>();
	}

	CFGenKbRamSecAppTable::~CFGenKbRamSecAppTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
		}
		if( dictByUJEEMountIdx != NULL ) {
			delete dictByUJEEMountIdx;
			dictByUJEEMountIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecAppBuff* elt;
			std::map<cfcore::CFGenKbSecAppPKey,
				cfcore::CFGenKbSecAppBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecAppPKey,
					cfcore::CFGenKbSecAppBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::createSecApp( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecAppBuff* Buff )
	{
		static const std::string S_ProcName( "createSecApp" );
		cfcore::CFGenKbSecAppPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecAppId( dynamic_cast<CFGenKbRamClusterTable*>( schema->getTableCluster() )->nextSecAppIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredSecAppId( pkey.getRequiredSecAppId() );
		cfcore::CFGenKbSecAppByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecAppByUJEEMountIdxKey keyUJEEMountIdx;
		keyUJEEMountIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUJEEMountIdx.setRequiredJEEMountName( Buff->getRequiredJEEMountName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUJEEMountIdx = dictByUJEEMountIdx->find( keyUJEEMountIdx );
		if( searchDictByUJEEMountIdx != dictByUJEEMountIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SecAppUJEEMountIdx " + keyUJEEMountIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship SecAppCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecAppBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecAppByClusterIdxKey,
				std::map<cfcore::CFGenKbSecAppPKey,
					cfcore::CFGenKbSecAppBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>::value_type( pkey, buff ) );

		dictByUJEEMountIdx->insert( std::map<cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::CFGenKbSecAppBuff*>::value_type( keyUJEEMountIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecAppBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecAppBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> CFGenKbRamSecAppTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> retVec;
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecAppBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> CFGenKbRamSecAppTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbSecAppByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> recVec;
		cfcore::CFGenKbSecAppBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecAppPKey,
				 cfcore::CFGenKbSecAppBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbSecAppPKey,
				cfcore::CFGenKbSecAppBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbSecAppPKey,
				cfcore::CFGenKbSecAppBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readDerivedByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& JEEMountName )
	{
		static const std::string S_ProcName( "readDerivedByUJEEMountIdx" );
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredJEEMountName( JEEMountName );
		cfcore::CFGenKbSecAppBuff* buff;
		auto searchDictByUJEEMountIdx = dictByUJEEMountIdx->find( key );
		if( searchDictByUJEEMountIdx != dictByUJEEMountIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( searchDictByUJEEMountIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecAppPKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		cfcore::CFGenKbSecAppBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecAppBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecAppBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> CFGenKbRamSecAppTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecAppBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> CFGenKbRamSecAppTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecAppBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			SecAppId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> CFGenKbRamSecAppTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbSecAppBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readBuffByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& JEEMountName )
	{
		static const std::string S_ProcName( "readBuffByUJEEMountIdx" );
		cfcore::CFGenKbSecAppBuff* buff = readDerivedByUJEEMountIdx( Authorization,
			ClusterId,
			JEEMountName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readBuffByLookupUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& JEEMountName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUJEEMountIdx" );
		cfcore::CFGenKbSecAppBuff* buff = readBuffByUJEEMountIdx( Authorization,
			ClusterId,
			JEEMountName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::readDerivedByLookupUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& JEEMountName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUJEEMountIdx" );
		cfcore::CFGenKbSecAppBuff* buff = readDerivedByUJEEMountIdx( Authorization,
			ClusterId,
			JEEMountName );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> CFGenKbRamSecAppTable::pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbRamSecAppTable::updateSecApp( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecAppBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecApp" );
		cfcore::CFGenKbSecAppPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecAppId( Buff->getRequiredSecAppId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecApp for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecAppBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecApp primary key " );
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
		cfcore::CFGenKbSecAppByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecAppByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecAppByUJEEMountIdxKey existingKeyUJEEMountIdx;
		existingKeyUJEEMountIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUJEEMountIdx.setRequiredJEEMountName( existing->getRequiredJEEMountName() );
		cfcore::CFGenKbSecAppByUJEEMountIdxKey newKeyUJEEMountIdx;
		newKeyUJEEMountIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUJEEMountIdx.setRequiredJEEMountName( Buff->getRequiredJEEMountName() );
		// Check unique indexes

		if( existingKeyUJEEMountIdx != newKeyUJEEMountIdx ) {
			auto searchDictByUJEEMountIdx = dictByUJEEMountIdx->find( newKeyUJEEMountIdx );
			if( searchDictByUJEEMountIdx != dictByUJEEMountIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecAppUJEEMountIdx " + newKeyUJEEMountIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship SecAppCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecAppBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecAppPKey,
			 cfcore::CFGenKbSecAppBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecAppByClusterIdxKey,
				std::map<cfcore::CFGenKbSecAppPKey,
					cfcore::CFGenKbSecAppBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>::value_type( pkey, existing ) );

		auto removalDictByUJEEMountIdx = dictByUJEEMountIdx->find( existingKeyUJEEMountIdx );
		if( removalDictByUJEEMountIdx != dictByUJEEMountIdx->end() ) {
			dictByUJEEMountIdx->erase( removalDictByUJEEMountIdx );
		}
		dictByUJEEMountIdx->insert( std::map<cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::CFGenKbSecAppBuff*>::value_type( newKeyUJEEMountIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecAppBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecAppTable::deleteSecApp( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecAppBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecApp" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecAppPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecAppId( Buff->getRequiredSecAppId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecAppBuff* existing = searchExisting->second;
		schema->getTableSecForm()->deleteSecFormBySecAppIdx( Authorization,
			existing->getRequiredClusterId(),
			existing->getRequiredSecAppId() );
		cfcore::CFGenKbSecAppByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecAppByUJEEMountIdxKey keyUJEEMountIdx;
		keyUJEEMountIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUJEEMountIdx.setRequiredJEEMountName( existing->getRequiredJEEMountName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecAppPKey, cfcore::CFGenKbSecAppBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecAppPKey,
				 cfcore::CFGenKbSecAppBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByUJEEMountIdx = dictByUJEEMountIdx->find( keyUJEEMountIdx );
		if( searchDictByUJEEMountIdx != dictByUJEEMountIdx->end() ) {
			dictByUJEEMountIdx->erase( searchDictByUJEEMountIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamSecAppTable::deleteSecAppByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecAppId )
	{
		cfcore::CFGenKbSecAppPKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecAppId( argSecAppId );
		deleteSecAppByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecAppTable::deleteSecAppByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecAppBuff* cur = NULL;
		cfcore::CFGenKbSecAppBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> matchSet;
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecApp()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecAppId() );
			rereadCur = cur;
			deleteSecApp( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecAppTable::deleteSecAppByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbSecAppByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteSecAppByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamSecAppTable::deleteSecAppByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbSecAppBuff* cur = NULL;
		cfcore::CFGenKbSecAppBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> matchSet;
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecApp()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecAppId() );
			rereadCur = cur;
			deleteSecApp( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecAppTable::deleteSecAppByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argJEEMountName )
	{
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredJEEMountName( argJEEMountName );
		deleteSecAppByUJEEMountIdx( Authorization, &key );
	}

	void CFGenKbRamSecAppTable::deleteSecAppByUJEEMountIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecAppByUJEEMountIdxKey* argKey )
	{
		cfcore::CFGenKbSecAppBuff* cur = NULL;
		cfcore::CFGenKbSecAppBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> matchSet;
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecAppPKey,
			cfcore::CFGenKbSecAppBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecApp()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecAppId() );
			rereadCur = cur;
			deleteSecApp( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecAppTable::releasePreparedStatements() {
	}

}
