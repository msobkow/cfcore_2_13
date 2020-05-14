
// Description: C++18 Implementation for an in-memory RAM DbIO for GelSwitchLimb.

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

	const std::string CFGenKbRamGelSwitchLimbTable::CLASS_NAME( "CFGenKbRamGelSwitchLimbTable" );

	CFGenKbRamGelSwitchLimbTable::CFGenKbRamGelSwitchLimbTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelSwitchLimbTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>*>();
		dictBySwitchIdx = new std::map<cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>*>();
	}

	CFGenKbRamGelSwitchLimbTable::~CFGenKbRamGelSwitchLimbTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictBySwitchIdx != NULL ) {
			for( auto iterDict = dictBySwitchIdx->begin(); iterDict != dictBySwitchIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySwitchIdx;
			dictBySwitchIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbGelSwitchLimbBuff* elt;
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbGelSwitchLimbPKey,
					cfcore::CFGenKbGelSwitchLimbBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::createGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSwitchLimbBuff* Buff )
	{
		static const std::string S_ProcName( "createGelSwitchLimb" );
		cfcore::CFGenKbGelSwitchLimbPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		pkey.setRequiredLimbName( Buff->getRequiredLimbName() );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredGelCacheId( pkey.getRequiredGelCacheId() );
		Buff->setRequiredGelInstId( pkey.getRequiredGelInstId() );
		Buff->setRequiredLimbName( pkey.getRequiredLimbName() );
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey keySwitchIdx;
		keySwitchIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keySwitchIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		keySwitchIdx.setRequiredGelInstId( Buff->getRequiredGelInstId() );
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

		// Proceed with adding the new record
		cfcore::CFGenKbGelSwitchLimbBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
				std::map<cfcore::CFGenKbGelSwitchLimbPKey,
					cfcore::CFGenKbGelSwitchLimbBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>* subdictSwitchIdx;
		auto searchDictBySwitchIdx = dictBySwitchIdx->find( keySwitchIdx );
		if( searchDictBySwitchIdx != dictBySwitchIdx->end() ) {
			subdictSwitchIdx = searchDictBySwitchIdx->second;
		}
		else {
			subdictSwitchIdx = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>();
			dictBySwitchIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
				std::map<cfcore::CFGenKbGelSwitchLimbPKey,
					cfcore::CFGenKbGelSwitchLimbBuff*>*>::value_type( keySwitchIdx, subdictSwitchIdx ) );
		}
		subdictSwitchIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> CFGenKbRamGelSwitchLimbTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> retVec;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelSwitchLimbBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> CFGenKbRamGelSwitchLimbTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> recVec;
		cfcore::CFGenKbGelSwitchLimbBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				 cfcore::CFGenKbGelSwitchLimbBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> CFGenKbRamGelSwitchLimbTable::readDerivedBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedBySwitchIdx" );
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> recVec;
		cfcore::CFGenKbGelSwitchLimbBuff* clone;
		auto searchDictBySwitchIdx = dictBySwitchIdx->find( key );
		if( searchDictBySwitchIdx != dictBySwitchIdx->end() ) {
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				 cfcore::CFGenKbGelSwitchLimbBuff*>* subdictSwitchIdx = searchDictBySwitchIdx->second;
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iter = subdictSwitchIdx->begin();
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = subdictSwitchIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelSwitchLimbPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		key.setRequiredLimbName( LimbName );
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff ) );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> CFGenKbRamGelSwitchLimbTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId,
			LimbName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> CFGenKbRamGelSwitchLimbTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> CFGenKbRamGelSwitchLimbTable::readBuffBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffBySwitchIdx" );
		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> buffList = readDerivedBySwitchIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbRamGelSwitchLimbTable::updateGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSwitchLimbBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelSwitchLimb" );
		cfcore::CFGenKbGelSwitchLimbPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		pkey.setRequiredLimbName( Buff->getRequiredLimbName() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelSwitchLimb for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelSwitchLimbBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for GelSwitchLimb primary key " );
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
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey existingKeySwitchIdx;
		existingKeySwitchIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeySwitchIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		existingKeySwitchIdx.setRequiredGelInstId( existing->getRequiredGelInstId() );
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey newKeySwitchIdx;
		newKeySwitchIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeySwitchIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		newKeySwitchIdx.setRequiredGelInstId( Buff->getRequiredGelInstId() );
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

		// Update is valid
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbGelSwitchLimbBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			 cfcore::CFGenKbGelSwitchLimbBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
				std::map<cfcore::CFGenKbGelSwitchLimbPKey,
					cfcore::CFGenKbGelSwitchLimbBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			 cfcore::CFGenKbGelSwitchLimbBuff*>* subdictSwitchIdx;
		auto searchDictBySwitchIdx = dictBySwitchIdx->find( existingKeySwitchIdx );
		if( searchDictBySwitchIdx != dictBySwitchIdx->end() ) {
			subdictSwitchIdx = searchDictBySwitchIdx->second;
			auto searchSubDict = subdictSwitchIdx->find( pkey );
			if( searchSubDict != subdictSwitchIdx->end() ) {
				subdictSwitchIdx->erase( searchSubDict );
			}
			if( subdictSwitchIdx->size() <= 0 ) {
				delete subdictSwitchIdx;
				dictBySwitchIdx->erase( searchDictBySwitchIdx );
			}
			subdictSwitchIdx = NULL;
		}
		auto searchNewKeyDictBySwitchIdx = dictBySwitchIdx->find( newKeySwitchIdx );
		if( searchNewKeyDictBySwitchIdx != dictBySwitchIdx->end() ) {
			subdictSwitchIdx = searchNewKeyDictBySwitchIdx->second;
		}
		else {
			subdictSwitchIdx = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>();
			dictBySwitchIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
				std::map<cfcore::CFGenKbGelSwitchLimbPKey,
					cfcore::CFGenKbGelSwitchLimbBuff*>*>::value_type( newKeySwitchIdx, subdictSwitchIdx ) );
		}
		subdictSwitchIdx->insert( std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelSwitchLimbBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimb( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSwitchLimbBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelSwitchLimb" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbGelSwitchLimbPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		pkey.setRequiredLimbName( Buff->getRequiredLimbName() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbGelSwitchLimbBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey keySwitchIdx;
		keySwitchIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keySwitchIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		keySwitchIdx.setRequiredGelInstId( existing->getRequiredGelInstId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::CFGenKbGelSwitchLimbBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				 cfcore::CFGenKbGelSwitchLimbBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictBySwitchIdx = dictBySwitchIdx->find( keySwitchIdx );
		if( searchDictBySwitchIdx != dictBySwitchIdx->end() ) {
			std::map<cfcore::CFGenKbGelSwitchLimbPKey,
				 cfcore::CFGenKbGelSwitchLimbBuff*>* subdictSwitchIdx = searchDictBySwitchIdx->second;
			auto searchSubDict = subdictSwitchIdx->find( pkey );
			if( searchSubDict != subdictSwitchIdx->end() ) {
				subdictSwitchIdx->erase( searchSubDict );
			}
			subdictSwitchIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimbByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId,
			const std::string& argLimbName )
	{
		cfcore::CFGenKbGelSwitchLimbPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		key.setRequiredLimbName( argLimbName );
		deleteGelSwitchLimbByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimbByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelSwitchLimbBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchLimbBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> matchSet;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitchLimb()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId(),
				cur->getRequiredLimbName() );
			rereadCur = cur;
			deleteGelSwitchLimb( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimbByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelSwitchLimbByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimbByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelSwitchLimbBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchLimbBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> matchSet;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitchLimb()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId(),
				cur->getRequiredLimbName() );
			rereadCur = cur;
			deleteGelSwitchLimb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimbBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelSwitchLimbBySwitchIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchLimbTable::deleteGelSwitchLimbBySwitchIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey* argKey )
	{
		cfcore::CFGenKbGelSwitchLimbBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchLimbBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> matchSet;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelSwitchLimbPKey,
			cfcore::CFGenKbGelSwitchLimbBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitchLimb()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId(),
				cur->getRequiredLimbName() );
			rereadCur = cur;
			deleteGelSwitchLimb( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSwitchLimbTable::releasePreparedStatements() {
	}

}
