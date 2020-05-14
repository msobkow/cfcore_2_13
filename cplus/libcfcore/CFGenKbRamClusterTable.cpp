
// Description: C++18 Implementation for an in-memory RAM DbIO for Cluster.

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

	const std::string CFGenKbRamClusterTable::CLASS_NAME( "CFGenKbRamClusterTable" );

	CFGenKbRamClusterTable::CFGenKbRamClusterTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbClusterTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbClusterPKey, cfcore::CFGenKbClusterBuff*>();
		id32Generator = new std::map<CFGenKbRamClusterId32Gen, CFGenKbRamClusterId32Gen*>();
		id64Generator = new std::map<CFGenKbRamClusterId64Gen, CFGenKbRamClusterId64Gen*>();
		dictByUDomNameIdx = new std::map<cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::CFGenKbClusterBuff*>();
		dictByUDescrIdx = new std::map<cfcore::CFGenKbClusterByUDescrIdxKey, cfcore::CFGenKbClusterBuff*>();
	}

	CFGenKbRamClusterTable::~CFGenKbRamClusterTable() {
		if( dictByUDomNameIdx != NULL ) {
			delete dictByUDomNameIdx;
			dictByUDomNameIdx = NULL;
		}
		if( dictByUDescrIdx != NULL ) {
			delete dictByUDescrIdx;
			dictByUDescrIdx = NULL;
		}
		if( id32Generator != NULL ) {
			cfcore::CFGenKbRamClusterId32Gen* elt;
			std::map<CFGenKbRamClusterId32Gen,
				CFGenKbRamClusterId32Gen*>::iterator end = id32Generator->end();
			for( std::map<CFGenKbRamClusterId32Gen,
					CFGenKbRamClusterId32Gen*>::iterator cur = id32Generator->begin();
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
			cfcore::CFGenKbRamClusterId64Gen* elt;
			std::map<CFGenKbRamClusterId64Gen,
				CFGenKbRamClusterId64Gen*>::iterator end = id64Generator->end();
			for( std::map<CFGenKbRamClusterId64Gen,
					CFGenKbRamClusterId64Gen*>::iterator cur = id64Generator->begin();
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
			cfcore::CFGenKbClusterBuff* elt;
			std::map<cfcore::CFGenKbClusterPKey,
				cfcore::CFGenKbClusterBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbClusterPKey,
					cfcore::CFGenKbClusterBuff*>::iterator cur = dictByPKey->begin();
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

	int32_t CFGenKbRamClusterTable::generateNextId32( int64_t argId,
		int16_t argSliceId )
	{
		cfcore::CFGenKbRamClusterId32Gen* key = new cfcore::CFGenKbRamClusterId32Gen();
		key->setRequiredId( argId );
		key->setRequiredSliceId( argSliceId );

		cfcore::CFGenKbRamClusterId32Gen* useGen;
		auto genSearch = id32Generator->find( *key );
		if( genSearch != id32Generator->end() ) {
			useGen = genSearch->second;
			delete key;
			key = NULL;
		}
		else {
			id32Generator->insert( std::map<CFGenKbRamClusterId32Gen, CFGenKbRamClusterId32Gen*>::value_type( *key, key ) );
			useGen = key;
			key = NULL;
		}

		int32_t retNext = useGen->getNextId();

		return( retNext );
	}

	int64_t CFGenKbRamClusterTable::generateNextId64( int64_t argId,
		int16_t argSliceId )
	{
		cfcore::CFGenKbRamClusterId64Gen* key = new cfcore::CFGenKbRamClusterId64Gen();
		key->setRequiredId( argId );
		key->setRequiredSliceId( argSliceId );

		cfcore::CFGenKbRamClusterId64Gen* useGen;
		auto genSearch = id64Generator->find( *key );
		if( genSearch != id64Generator->end() ) {
			useGen = genSearch->second;
			delete key;
			key = NULL;
		}
		else {
			id64Generator->insert( std::map<CFGenKbRamClusterId64Gen, CFGenKbRamClusterId64Gen*>::value_type( *key, key ) );
			useGen = key;
			key = NULL;
		}

		int64_t retNext = useGen->getNextId();

		return( retNext );
	}

	int32_t CFGenKbRamClusterTable::nextSecAppIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int32_t retval = nextSecAppIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFGenKbRamClusterTable::nextSecAppIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)1011 );
		return( retNext );
	}

	int32_t CFGenKbRamClusterTable::nextSecFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int32_t retval = nextSecFormIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFGenKbRamClusterTable::nextSecFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)1012 );
		return( retNext );
	}

	int32_t CFGenKbRamClusterTable::nextSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int32_t retval = nextSecGroupIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int32_t CFGenKbRamClusterTable::nextSecGroupIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int32_t retNext = generateNextId32( argId,
			(int16_t)1014 );
		return( retNext );
	}

	int64_t CFGenKbRamClusterTable::nextHostNodeIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int64_t retval = nextHostNodeIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamClusterTable::nextHostNodeIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1010 );
		return( retNext );
	}

	int64_t CFGenKbRamClusterTable::nextSecGroupFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int64_t retval = nextSecGroupFormIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamClusterTable::nextSecGroupFormIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1013 );
		return( retNext );
	}

	int64_t CFGenKbRamClusterTable::nextSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int64_t retval = nextSecGrpIncIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamClusterTable::nextSecGrpIncIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1015 );
		return( retNext );
	}

	int64_t CFGenKbRamClusterTable::nextSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* pkey )
	{
		int64_t retval = nextSecGrpMembIdGen( Authorization,
			pkey->getRequiredId() );
		return( retval );
	}

	int64_t CFGenKbRamClusterTable::nextSecGrpMembIdGen( const cfcore::CFGenKbAuthorization* Authorization,
		int64_t argId )
	{
		int64_t retNext = generateNextId64( argId,
			(int16_t)1016 );
		return( retNext );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::createCluster( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbClusterBuff* Buff )
	{
		static const std::string S_ProcName( "createCluster" );
		cfcore::CFGenKbClusterPKey pkey;
		pkey.setRequiredId( schema->nextClusterIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfcore::CFGenKbClusterByUDomNameIdxKey keyUDomNameIdx;
		keyUDomNameIdx.setRequiredFullDomName( Buff->getRequiredFullDomName() );
		cfcore::CFGenKbClusterByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( keyUDomNameIdx );
		if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ClusterUDomNameIdx " + keyUDomNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			std::string Msg( "Duplicate key detected for index ClusterUDescrNameIdx " + keyUDescrIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbClusterBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbClusterPKey, cfcore::CFGenKbClusterBuff*>::value_type( pkey, buff ) );

		dictByUDomNameIdx->insert( std::map<cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::CFGenKbClusterBuff*>::value_type( keyUDomNameIdx, buff ) );

		dictByUDescrIdx->insert( std::map<cfcore::CFGenKbClusterByUDescrIdxKey, cfcore::CFGenKbClusterBuff*>::value_type( keyUDescrIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbClusterBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbClusterBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> CFGenKbRamClusterTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> retVec;
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbClusterBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbClusterBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readDerivedByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& FullDomName )
	{
		static const std::string S_ProcName( "readDerivedByUDomNameIdx" );
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfcore::CFGenKbClusterBuff* buff;
		auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( key );
		if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( searchDictByUDomNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readDerivedByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readDerivedByUDescrIdx" );
		cfcore::CFGenKbClusterByUDescrIdxKey key;
		key.setRequiredDescription( Description );
		cfcore::CFGenKbClusterBuff* buff;
		auto searchDictByUDescrIdx = dictByUDescrIdx->find( key );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( searchDictByUDescrIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbClusterPKey key;
		key.setRequiredId( Id );
		cfcore::CFGenKbClusterBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbClusterBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff ) );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbClusterBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> CFGenKbRamClusterTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbClusterBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> CFGenKbRamClusterTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbClusterBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readBuffByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& FullDomName )
	{
		static const std::string S_ProcName( "readBuffByUDomNameIdx" );
		cfcore::CFGenKbClusterBuff* buff = readDerivedByUDomNameIdx( Authorization,
			FullDomName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readBuffByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readBuffByUDescrIdx" );
		cfcore::CFGenKbClusterBuff* buff = readDerivedByUDescrIdx( Authorization,
			Description );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readBuffByLookupUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& FullDomName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUDomNameIdx" );
		cfcore::CFGenKbClusterBuff* buff = readBuffByUDomNameIdx( Authorization,
			FullDomName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::readDerivedByLookupUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& FullDomName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUDomNameIdx" );
		cfcore::CFGenKbClusterBuff* buff = readDerivedByUDomNameIdx( Authorization,
			FullDomName );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbClusterBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbClusterBuff* CFGenKbRamClusterTable::updateCluster( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbClusterBuff* Buff )
	{
		static const std::string S_ProcName( "updateCluster" );
		cfcore::CFGenKbClusterPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Cluster for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbClusterBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Cluster primary key " );
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
		cfcore::CFGenKbClusterByUDomNameIdxKey existingKeyUDomNameIdx;
		existingKeyUDomNameIdx.setRequiredFullDomName( existing->getRequiredFullDomName() );
		cfcore::CFGenKbClusterByUDomNameIdxKey newKeyUDomNameIdx;
		newKeyUDomNameIdx.setRequiredFullDomName( Buff->getRequiredFullDomName() );
		cfcore::CFGenKbClusterByUDescrIdxKey existingKeyUDescrIdx;
		existingKeyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		cfcore::CFGenKbClusterByUDescrIdxKey newKeyUDescrIdx;
		newKeyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		// Check unique indexes

		if( existingKeyUDomNameIdx != newKeyUDomNameIdx ) {
			auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( newKeyUDomNameIdx );
			if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClusterUDomNameIdx " + newKeyUDomNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyUDescrIdx != newKeyUDescrIdx ) {
			auto searchDictByUDescrIdx = dictByUDescrIdx->find( newKeyUDescrIdx );
			if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ClusterUDescrNameIdx " + newKeyUDescrIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfcore::CFGenKbClusterPKey, cfcore::CFGenKbClusterBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbClusterBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbClusterPKey, cfcore::CFGenKbClusterBuff*>::value_type( pkey, existing ) );

		auto removalDictByUDomNameIdx = dictByUDomNameIdx->find( existingKeyUDomNameIdx );
		if( removalDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			dictByUDomNameIdx->erase( removalDictByUDomNameIdx );
		}
		dictByUDomNameIdx->insert( std::map<cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::CFGenKbClusterBuff*>::value_type( newKeyUDomNameIdx, existing ) );

		auto removalDictByUDescrIdx = dictByUDescrIdx->find( existingKeyUDescrIdx );
		if( removalDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( removalDictByUDescrIdx );
		}
		dictByUDescrIdx->insert( std::map<cfcore::CFGenKbClusterByUDescrIdxKey, cfcore::CFGenKbClusterBuff*>::value_type( newKeyUDescrIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbClusterBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamClusterTable::deleteCluster( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbClusterBuff* Buff )
	{
		static const std::string S_ProcName( "deleteCluster" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbClusterPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbClusterBuff* existing = searchExisting->second;
		cfcore::CFGenKbSecGroupBuff* buffDelSecGroupForms;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> arrDelSecGroupForms = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterArrDelSecGroupForms = arrDelSecGroupForms.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endArrDelSecGroupForms = arrDelSecGroupForms.end();
		while( iterArrDelSecGroupForms != endArrDelSecGroupForms ) {
			buffDelSecGroupForms = *iterArrDelSecGroupForms;
			iterArrDelSecGroupForms ++;
			schema->getTableSecGroupForm()->deleteSecGroupFormByGroupIdx( Authorization,
				buffDelSecGroupForms->getRequiredClusterId(),
				buffDelSecGroupForms->getRequiredSecGroupId() );
		}
		cfcore::CFGenKbSecGroupBuff* buffDelSecGrpIncByGroup;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> arrDelSecGrpIncByGroup = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterArrDelSecGrpIncByGroup = arrDelSecGrpIncByGroup.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endArrDelSecGrpIncByGroup = arrDelSecGrpIncByGroup.end();
		while( iterArrDelSecGrpIncByGroup != endArrDelSecGrpIncByGroup ) {
			buffDelSecGrpIncByGroup = *iterArrDelSecGrpIncByGroup;
			iterArrDelSecGrpIncByGroup ++;
			schema->getTableSecGrpInc()->deleteSecGrpIncByIncludeIdx( Authorization,
				buffDelSecGrpIncByGroup->getRequiredClusterId(),
				buffDelSecGrpIncByGroup->getRequiredSecGroupId() );
		}
		cfcore::CFGenKbSecGroupBuff* buffDelSecGrpMembs;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> arrDelSecGrpMembs = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterArrDelSecGrpMembs = arrDelSecGrpMembs.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endArrDelSecGrpMembs = arrDelSecGrpMembs.end();
		while( iterArrDelSecGrpMembs != endArrDelSecGrpMembs ) {
			buffDelSecGrpMembs = *iterArrDelSecGrpMembs;
			iterArrDelSecGrpMembs ++;
			schema->getTableSecGrpMemb()->deleteSecGrpMembByGroupIdx( Authorization,
				buffDelSecGrpMembs->getRequiredClusterId(),
				buffDelSecGrpMembs->getRequiredSecGroupId() );
		}
		cfcore::CFGenKbSecGroupBuff* buffDelSecGrpIncs;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> arrDelSecGrpIncs = schema->getTableSecGroup()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterArrDelSecGrpIncs = arrDelSecGrpIncs.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endArrDelSecGrpIncs = arrDelSecGrpIncs.end();
		while( iterArrDelSecGrpIncs != endArrDelSecGrpIncs ) {
			buffDelSecGrpIncs = *iterArrDelSecGrpIncs;
			iterArrDelSecGrpIncs ++;
			schema->getTableSecGrpInc()->deleteSecGrpIncByGroupIdx( Authorization,
				buffDelSecGrpIncs->getRequiredClusterId(),
				buffDelSecGrpIncs->getRequiredSecGroupId() );
		}
		schema->getTableSecGroup()->deleteSecGroupByClusterIdx( Authorization,
			existing->getRequiredId() );
		cfcore::CFGenKbSecAppBuff* buffDelSecAppForms;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> arrDelSecAppForms = schema->getTableSecApp()->readDerivedByClusterIdx( Authorization,
			existing->getRequiredId() );
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator iterArrDelSecAppForms = arrDelSecAppForms.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*>::iterator endArrDelSecAppForms = arrDelSecAppForms.end();
		while( iterArrDelSecAppForms != endArrDelSecAppForms ) {
			buffDelSecAppForms = *iterArrDelSecAppForms;
			iterArrDelSecAppForms ++;
			schema->getTableSecForm()->deleteSecFormBySecAppIdx( Authorization,
				buffDelSecAppForms->getRequiredClusterId(),
				buffDelSecAppForms->getRequiredSecAppId() );
		}
		schema->getTableSecApp()->deleteSecAppByClusterIdx( Authorization,
			existing->getRequiredId() );
		schema->getTableTenant()->deleteTenantByClusterIdx( Authorization,
			existing->getRequiredId() );
		schema->getTableHostNode()->deleteHostNodeByClusterIdx( Authorization,
			existing->getRequiredId() );
		cfcore::CFGenKbClusterByUDomNameIdxKey keyUDomNameIdx;
		keyUDomNameIdx.setRequiredFullDomName( existing->getRequiredFullDomName() );
		cfcore::CFGenKbClusterByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbClusterPKey, cfcore::CFGenKbClusterBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByUDomNameIdx = dictByUDomNameIdx->find( keyUDomNameIdx );
		if( searchDictByUDomNameIdx != dictByUDomNameIdx->end() ) {
			dictByUDomNameIdx->erase( searchDictByUDomNameIdx );
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( searchDictByUDescrIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamClusterTable::deleteClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argId )
	{
		cfcore::CFGenKbClusterPKey key;
		key.setRequiredId( argId );
		deleteClusterByIdIdx( Authorization, &key );
	}

	void CFGenKbRamClusterTable::deleteClusterByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbClusterBuff* cur = NULL;
		cfcore::CFGenKbClusterBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> matchSet;
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbClusterBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbClusterBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableCluster()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteCluster( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamClusterTable::deleteClusterByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argFullDomName )
	{
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( argFullDomName );
		deleteClusterByUDomNameIdx( Authorization, &key );
	}

	void CFGenKbRamClusterTable::deleteClusterByUDomNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterByUDomNameIdxKey* argKey )
	{
		cfcore::CFGenKbClusterBuff* cur = NULL;
		cfcore::CFGenKbClusterBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> matchSet;
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbClusterBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbClusterBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableCluster()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteCluster( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamClusterTable::deleteClusterByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argDescription )
	{
		cfcore::CFGenKbClusterByUDescrIdxKey key;
		key.setRequiredDescription( argDescription );
		deleteClusterByUDescrIdx( Authorization, &key );
	}

	void CFGenKbRamClusterTable::deleteClusterByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbClusterByUDescrIdxKey* argKey )
	{
		cfcore::CFGenKbClusterBuff* cur = NULL;
		cfcore::CFGenKbClusterBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> matchSet;
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbClusterPKey,
			cfcore::CFGenKbClusterBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbClusterBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbClusterBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableCluster()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteCluster( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamClusterTable::releasePreparedStatements() {
	}

}
