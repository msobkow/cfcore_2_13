
// Description: C++18 Implementation for an in-memory RAM DbIO for GelCache.

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

	const std::string CFGenKbRamGelCacheTable::CLASS_NAME( "CFGenKbRamGelCacheTable" );

	CFGenKbRamGelCacheTable::CFGenKbRamGelCacheTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelCacheTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbGelCacheByTenantIdxKey,
			std::map<cfcore::CFGenKbGelCachePKey,
				cfcore::CFGenKbGelCacheBuff*>*>();
		dictByAltIdx = new std::map<cfcore::CFGenKbGelCacheByAltIdxKey, cfcore::CFGenKbGelCacheBuff*>();
	}

	CFGenKbRamGelCacheTable::~CFGenKbRamGelCacheTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByAltIdx != NULL ) {
			delete dictByAltIdx;
			dictByAltIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbGelCacheBuff* elt;
			std::map<cfcore::CFGenKbGelCachePKey,
				cfcore::CFGenKbGelCacheBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbGelCachePKey,
					cfcore::CFGenKbGelCacheBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::createGelCache( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelCacheBuff* Buff )
	{
		static const std::string S_ProcName( "createGelCache" );
		cfcore::CFGenKbGelCachePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( dynamic_cast<CFGenKbRamTenantTable*>( schema->getTableTenant() )->nextGelCacheIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredGelCacheId( pkey.getRequiredGelCacheId() );
		cfcore::CFGenKbGelCacheByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGelCacheByAltIdxKey keyAltIdx;
		keyAltIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyAltIdx.setRequiredCacheName( Buff->getRequiredCacheName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByAltIdx = dictByAltIdx->find( keyAltIdx );
		if( searchDictByAltIdx != dictByAltIdx->end() ) {
			std::string Msg( "Duplicate key detected for index GelCacheAltIdIdx " + keyAltIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship Tenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbGelCacheBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGelCacheByTenantIdxKey,
				std::map<cfcore::CFGenKbGelCachePKey,
					cfcore::CFGenKbGelCacheBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>::value_type( pkey, buff ) );

		dictByAltIdx->insert( std::map<cfcore::CFGenKbGelCacheByAltIdxKey, cfcore::CFGenKbGelCacheBuff*>::value_type( keyAltIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCachePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelCacheBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCachePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelCacheBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> CFGenKbRamGelCacheTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> retVec;
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelCacheBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> CFGenKbRamGelCacheTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbGelCacheByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> recVec;
		cfcore::CFGenKbGelCacheBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGelCachePKey,
				 cfcore::CFGenKbGelCacheBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbGelCachePKey,
				cfcore::CFGenKbGelCacheBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbGelCachePKey,
				cfcore::CFGenKbGelCacheBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& CacheName )
	{
		static const std::string S_ProcName( "readDerivedByAltIdx" );
		cfcore::CFGenKbGelCacheByAltIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCacheName( CacheName );
		cfcore::CFGenKbGelCacheBuff* buff;
		auto searchDictByAltIdx = dictByAltIdx->find( key );
		if( searchDictByAltIdx != dictByAltIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( searchDictByAltIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbGelCachePKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		cfcore::CFGenKbGelCacheBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCachePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelCacheBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff ) );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCachePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelCacheBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> CFGenKbRamGelCacheTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelCacheBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbGelCacheBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			GelCacheId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> CFGenKbRamGelCacheTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelCacheBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& CacheName )
	{
		static const std::string S_ProcName( "readBuffByAltIdx" );
		cfcore::CFGenKbGelCacheBuff* buff = readDerivedByAltIdx( Authorization,
			TenantId,
			CacheName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbRamGelCacheTable::updateGelCache( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelCacheBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelCache" );
		cfcore::CFGenKbGelCachePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelCache for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelCacheBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for GelCache primary key " );
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
		cfcore::CFGenKbGelCacheByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGelCacheByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGelCacheByAltIdxKey existingKeyAltIdx;
		existingKeyAltIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyAltIdx.setRequiredCacheName( existing->getRequiredCacheName() );
		cfcore::CFGenKbGelCacheByAltIdxKey newKeyAltIdx;
		newKeyAltIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyAltIdx.setRequiredCacheName( Buff->getRequiredCacheName() );
		// Check unique indexes

		if( existingKeyAltIdx != newKeyAltIdx ) {
			auto searchDictByAltIdx = dictByAltIdx->find( newKeyAltIdx );
			if( searchDictByAltIdx != dictByAltIdx->end() ) {
				std::string Msg( "Duplicate key detected for index GelCacheAltIdIdx " + newKeyAltIdx.toString() );
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
					std::string Msg( "Could not resolve Owner relationship Tenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbGelCacheBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelCachePKey,
			 cfcore::CFGenKbGelCacheBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGelCacheByTenantIdxKey,
				std::map<cfcore::CFGenKbGelCachePKey,
					cfcore::CFGenKbGelCacheBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>::value_type( pkey, existing ) );

		auto removalDictByAltIdx = dictByAltIdx->find( existingKeyAltIdx );
		if( removalDictByAltIdx != dictByAltIdx->end() ) {
			dictByAltIdx->erase( removalDictByAltIdx );
		}
		dictByAltIdx->insert( std::map<cfcore::CFGenKbGelCacheByAltIdxKey, cfcore::CFGenKbGelCacheBuff*>::value_type( newKeyAltIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelCacheBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelCacheTable::deleteGelCache( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelCacheBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelCache" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbGelCachePKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbGelCacheBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelCacheByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGelCacheByAltIdxKey keyAltIdx;
		keyAltIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyAltIdx.setRequiredCacheName( existing->getRequiredCacheName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::CFGenKbGelCacheBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGelCachePKey,
				 cfcore::CFGenKbGelCacheBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByAltIdx = dictByAltIdx->find( keyAltIdx );
		if( searchDictByAltIdx != dictByAltIdx->end() ) {
			dictByAltIdx->erase( searchDictByAltIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamGelCacheTable::deleteGelCacheByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelCachePKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelCacheByIdIdx( Authorization, &key );
	}

	void CFGenKbRamGelCacheTable::deleteGelCacheByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCachePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelCacheBuff* cur = NULL;
		cfcore::CFGenKbGelCacheBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> matchSet;
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCache()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId() );
			rereadCur = cur;
			deleteGelCache( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelCacheTable::deleteGelCacheByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelCacheByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelCacheByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelCacheTable::deleteGelCacheByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCacheByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelCacheBuff* cur = NULL;
		cfcore::CFGenKbGelCacheBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> matchSet;
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCache()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId() );
			rereadCur = cur;
			deleteGelCache( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCacheTable::deleteGelCacheByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argCacheName )
	{
		cfcore::CFGenKbGelCacheByAltIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCacheName( argCacheName );
		deleteGelCacheByAltIdx( Authorization, &key );
	}

	void CFGenKbRamGelCacheTable::deleteGelCacheByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelCacheByAltIdxKey* argKey )
	{
		cfcore::CFGenKbGelCacheBuff* cur = NULL;
		cfcore::CFGenKbGelCacheBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> matchSet;
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelCachePKey,
			cfcore::CFGenKbGelCacheBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelCache()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId() );
			rereadCur = cur;
			deleteGelCache( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelCacheTable::releasePreparedStatements() {
	}

}
