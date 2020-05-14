
// Description: C++18 Implementation for an in-memory RAM DbIO for Tenant.

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

	const std::string CFGenKbRamTenantTable::CLASS_NAME( "CFGenKbRamTenantTable" );

	CFGenKbRamTenantTable::CFGenKbRamTenantTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbTenantTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>();
		id32Generator = new std::map<CFGenKbRamTenantId32Gen, CFGenKbRamTenantId32Gen*>();
		id64Generator = new std::map<CFGenKbRamTenantId64Gen, CFGenKbRamTenantId64Gen*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbTenantByClusterIdxKey,
			std::map<cfcore::CFGenKbTenantPKey,
				cfcore::CFGenKbTenantBuff*>*>();
		dictByUNameIdx = new std::map<cfcore::CFGenKbTenantByUNameIdxKey, cfcore::CFGenKbTenantBuff*>();
	}

	CFGenKbRamTenantTable::~CFGenKbRamTenantTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( id32Generator != NULL ) {
			cfcore::CFGenKbRamTenantId32Gen* elt;
			std::map<CFGenKbRamTenantId32Gen,
				CFGenKbRamTenantId32Gen*>::iterator end = id32Generator->end();
			for( std::map<CFGenKbRamTenantId32Gen,
					CFGenKbRamTenantId32Gen*>::iterator cur = id32Generator->begin();
				cur != end;
				cur ++ )
			{
				if( cur->second != NULL ) {
					delete cur->second;
					cur->second = NULL;
				}
			}
			delete id32Generator;
			id32Generator = NULL;
		}
		if( id64Generator != NULL ) {
			cfcore::CFGenKbRamTenantId64Gen* elt;
			std::map<CFGenKbRamTenantId64Gen,
				CFGenKbRamTenantId64Gen*>::iterator end = id64Generator->end();
			for( std::map<CFGenKbRamTenantId64Gen,
					CFGenKbRamTenantId64Gen*>::iterator cur = id64Generator->begin();
				cur != end;
				cur ++ )
			{
				if( cur->second != NULL ) {
					delete cur->second;
					cur->second = NULL;
				}
			}
			delete id64Generator;
			id64Generator = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbTenantBuff* elt;
			std::map<cfcore::CFGenKbTenantPKey,
				cfcore::CFGenKbTenantBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbTenantPKey,
					cfcore::CFGenKbTenantBuff*>::iterator cur = dictByPKey->begin();
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

	int32_t CFGenKbRamTenantTable::generateNextId32( int64_t argId,
		int16_t argSliceId )
	{
		cfcore::CFGenKbRamTenantId32Gen* key = new cfcore::CFGenKbRamTenantId32Gen();
		key->setRequiredId( argId );
		key->setRequiredSliceId( argSliceId );

		cfcore::CFGenKbRamTenantId32Gen* useGen;
		auto genSearch = id32Generator->find( *key );
		if( genSearch != id32Generator->end() ) {
			useGen = genSearch->second;
			delete key;
			key = NULL;
		}
		else {
			id32Generator->insert( std::map<CFGenKbRamTenantId32Gen, CFGenKbRamTenantId32Gen*>::value_type( *key, key ) );
			useGen = key;
			key = NULL;
		}

		int32_t retNext = useGen->getNextId();

		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::generateNextId64( int64_t argId,
		int16_t argSliceId )
	{
		cfcore::CFGenKbRamTenantId64Gen* key = new cfcore::CFGenKbRamTenantId64Gen();
		key->setRequiredId( argId );
		key->setRequiredSliceId( argSliceId );

		cfcore::CFGenKbRamTenantId64Gen* useGen;
		auto genSearch = id64Generator->find( *key );
		if( genSearch != id64Generator->end() ) {
			useGen = genSearch->second;
			delete key;
			key = NULL;
		}
		else {
			id64Generator->insert( std::map<CFGenKbRamTenantId64Gen, CFGenKbRamTenantId64Gen*>::value_type( *key, key ) );
			useGen = key;
			key = NULL;
		}

		int64_t retNext = useGen->getNextId();

		return( retNext );
	}

	int32_t CFGenKbRamTenantTable::nextTSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int32_t retval = nextTSecGroupIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFGenKbRamTenantTable::nextTSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)1018 );
		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::nextTSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int64_t retval = nextTSecGrpIncIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamTenantTable::nextTSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1019 );
		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::nextTSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int64_t retval = nextTSecGrpMembIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamTenantTable::nextTSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1020 );
		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::nextGelCacheIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int64_t retval = nextGelCacheIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamTenantTable::nextGelCacheIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1022 );
		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::nextGelInstructionIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int64_t retval = nextGelInstructionIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamTenantTable::nextGelInstructionIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1023 );
		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::nextGenItemIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int64_t retval = nextGenItemIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamTenantTable::nextGenItemIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1024 );
		return( retNext );
	}

	int64_t CFGenKbRamTenantTable::nextRuleCartIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* pkey )
	{
		int64_t retval = nextRuleCartIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamTenantTable::nextRuleCartIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1025 );
		return( retNext );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::createTenant( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTenantBuff* Buff )
	{
		static const std::string S_ProcName( "createTenant" );
		cfcore::CFGenKbTenantPKey pkey;
		pkey.setRequiredId( schema->nextTenantIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfcore::CFGenKbTenantByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbTenantByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUNameIdx.setRequiredTenantName( Buff->getRequiredTenantName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TenantUNameIdx " + keyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship TenantCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbTenantBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbTenantByClusterIdxKey,
				std::map<cfcore::CFGenKbTenantPKey,
					cfcore::CFGenKbTenantBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfcore::CFGenKbTenantByUNameIdxKey, cfcore::CFGenKbTenantBuff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbTenantBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbTenantBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> CFGenKbRamTenantTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> retVec;
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbTenantBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbTenantBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> CFGenKbRamTenantTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> recVec;
		cfcore::CFGenKbTenantBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbTenantPKey,
				 cfcore::CFGenKbTenantBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbTenantPKey,
				cfcore::CFGenKbTenantBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbTenantPKey,
				cfcore::CFGenKbTenantBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTenantBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& TenantName )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfcore::CFGenKbTenantBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbTenantPKey key;
		key.setRequiredId( Id );
		cfcore::CFGenKbTenantBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbTenantBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff ) );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbTenantBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> CFGenKbRamTenantTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbTenantBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> CFGenKbRamTenantTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbTenantBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> CFGenKbRamTenantTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbTenantBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& TenantName )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfcore::CFGenKbTenantBuff* buff = readDerivedByUNameIdx( Authorization,
			ClusterId,
			TenantName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& TenantName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfcore::CFGenKbTenantBuff* buff = readBuffByUNameIdx( Authorization,
			ClusterId,
			TenantName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& TenantName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfcore::CFGenKbTenantBuff* buff = readDerivedByUNameIdx( Authorization,
			ClusterId,
			TenantName );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbTenantBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> CFGenKbRamTenantTable::pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbRamTenantTable::updateTenant( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTenantBuff* Buff )
	{
		static const std::string S_ProcName( "updateTenant" );
		cfcore::CFGenKbTenantPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Tenant for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbTenantBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Tenant primary key " );
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
		cfcore::CFGenKbTenantByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbTenantByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbTenantByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUNameIdx.setRequiredTenantName( existing->getRequiredTenantName() );
		cfcore::CFGenKbTenantByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUNameIdx.setRequiredTenantName( Buff->getRequiredTenantName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TenantUNameIdx " + newKeyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship TenantCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbTenantBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTenantPKey,
			 cfcore::CFGenKbTenantBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbTenantByClusterIdxKey,
				std::map<cfcore::CFGenKbTenantPKey,
					cfcore::CFGenKbTenantBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfcore::CFGenKbTenantByUNameIdxKey, cfcore::CFGenKbTenantBuff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbTenantBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamTenantTable::deleteTenant( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTenantBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTenant" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbTenantPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbTenantBuff* existing = searchExisting->second;
		schema->getTableRuleCart()->deleteRuleCartByTenantIdx( Authorization,
			existing->getRequiredId() );
		cfcore::CFGenKbTSecGroupBuff* buffDelIncludedByGroup;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> arrDelIncludedByGroup = schema->getTableTSecGroup()->readDerivedByTenantIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterArrDelIncludedByGroup = arrDelIncludedByGroup.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator endArrDelIncludedByGroup = arrDelIncludedByGroup.end();
		while( iterArrDelIncludedByGroup != endArrDelIncludedByGroup ) {
			buffDelIncludedByGroup = *iterArrDelIncludedByGroup;
			iterArrDelIncludedByGroup ++;
			schema->getTableTSecGrpInc()->deleteTSecGrpIncByIncludeIdx( Authorization,
				buffDelIncludedByGroup->getRequiredTenantId(),
				buffDelIncludedByGroup->getRequiredTSecGroupId() );
		}
		cfcore::CFGenKbTSecGroupBuff* buffDelGrpMembs;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> arrDelGrpMembs = schema->getTableTSecGroup()->readDerivedByTenantIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterArrDelGrpMembs = arrDelGrpMembs.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator endArrDelGrpMembs = arrDelGrpMembs.end();
		while( iterArrDelGrpMembs != endArrDelGrpMembs ) {
			buffDelGrpMembs = *iterArrDelGrpMembs;
			iterArrDelGrpMembs ++;
			schema->getTableTSecGrpMemb()->deleteTSecGrpMembByGroupIdx( Authorization,
				buffDelGrpMembs->getRequiredTenantId(),
				buffDelGrpMembs->getRequiredTSecGroupId() );
		}
		cfcore::CFGenKbTSecGroupBuff* buffDelGrpIncs;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> arrDelGrpIncs = schema->getTableTSecGroup()->readDerivedByTenantIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterArrDelGrpIncs = arrDelGrpIncs.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator endArrDelGrpIncs = arrDelGrpIncs.end();
		while( iterArrDelGrpIncs != endArrDelGrpIncs ) {
			buffDelGrpIncs = *iterArrDelGrpIncs;
			iterArrDelGrpIncs ++;
			schema->getTableTSecGrpInc()->deleteTSecGrpIncByGroupIdx( Authorization,
				buffDelGrpIncs->getRequiredTenantId(),
				buffDelGrpIncs->getRequiredTSecGroupId() );
		}
		schema->getTableTSecGroup()->deleteTSecGroupByTenantIdx( Authorization,
			existing->getRequiredId() );
		cfcore::CFGenKbTenantByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbTenantByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUNameIdx.setRequiredTenantName( existing->getRequiredTenantName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbTenantPKey, cfcore::CFGenKbTenantBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbTenantPKey,
				 cfcore::CFGenKbTenantBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( searchDictByUNameIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamTenantTable::deleteTenantByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId )
	{
		cfcore::CFGenKbTenantPKey key;
		key.setRequiredId( argId );
		deleteTenantByIdIdx( Authorization, &key );
	}

	void CFGenKbRamTenantTable::deleteTenantByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbTenantBuff* cur = NULL;
		cfcore::CFGenKbTenantBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> matchSet;
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTenantBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTenantBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTenant()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTenant( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamTenantTable::deleteTenantByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbTenantByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteTenantByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamTenantTable::deleteTenantByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbTenantBuff* cur = NULL;
		cfcore::CFGenKbTenantBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> matchSet;
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTenantBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTenantBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTenant()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTenant( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTenantTable::deleteTenantByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argTenantName )
	{
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredTenantName( argTenantName );
		deleteTenantByUNameIdx( Authorization, &key );
	}

	void CFGenKbRamTenantTable::deleteTenantByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTenantByUNameIdxKey* argKey )
	{
		cfcore::CFGenKbTenantBuff* cur = NULL;
		cfcore::CFGenKbTenantBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> matchSet;
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTenantPKey,
			cfcore::CFGenKbTenantBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTenantBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTenantBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTenant()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTenant( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTenantTable::releasePreparedStatements() {
	}

}
