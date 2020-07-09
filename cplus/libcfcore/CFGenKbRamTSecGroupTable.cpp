
// Description: C++18 Implementation for an in-memory RAM DbIO for TSecGroup.

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

	const std::string CFGenKbRamTSecGroupTable::CLASS_NAME( "CFGenKbRamTSecGroupTable" );

	CFGenKbRamTSecGroupTable::CFGenKbRamTSecGroupTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbTSecGroupTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>();
		dictByTenantIdx = new std::map<cfcore::CFGenKbTSecGroupByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>*>();
		dictByTenantVisIdx = new std::map<cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>*>();
		dictByUNameIdx = new std::map<cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::CFGenKbTSecGroupBuff*>();
	}

	CFGenKbRamTSecGroupTable::~CFGenKbRamTSecGroupTable() {
		if( dictByTenantIdx != NULL ) {
			for( auto iterDict = dictByTenantIdx->begin(); iterDict != dictByTenantIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantIdx;
			dictByTenantIdx = NULL;
		}
		if( dictByTenantVisIdx != NULL ) {
			for( auto iterDict = dictByTenantVisIdx->begin(); iterDict != dictByTenantVisIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTenantVisIdx;
			dictByTenantVisIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbTSecGroupBuff* elt;
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbTSecGroupPKey,
					cfcore::CFGenKbTSecGroupBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::createTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGroupBuff* Buff )
	{
		static const std::string S_ProcName( "createTSecGroup" );
		cfcore::CFGenKbTSecGroupPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGroupId( dynamic_cast<CFGenKbRamTenantTable*>( schema->getTableTenant() )->nextTSecGroupIdGen( Authorization,
			Buff->getRequiredTenantId() ) );
		Buff->setRequiredTenantId( pkey.getRequiredTenantId() );
		Buff->setRequiredTSecGroupId( pkey.getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGroupByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey keyTenantVisIdx;
		keyTenantVisIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyTenantVisIdx.setRequiredIsVisible( Buff->getRequiredIsVisible() );
		cfcore::CFGenKbTSecGroupByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUNameIdx = dictByUNameIdx->find( keyUNameIdx );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index TSecGroupUNameIdx " + keyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship TSecGroupTenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbTSecGroupBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>* subdictTenantIdx;
		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			subdictTenantIdx = searchDictByTenantIdx->second;
		}
		else {
			subdictTenantIdx = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbTSecGroupByTenantIdxKey,
				std::map<cfcore::CFGenKbTSecGroupPKey,
					cfcore::CFGenKbTSecGroupBuff*>*>::value_type( keyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>* subdictTenantVisIdx;
		auto searchDictByTenantVisIdx = dictByTenantVisIdx->find( keyTenantVisIdx );
		if( searchDictByTenantVisIdx != dictByTenantVisIdx->end() ) {
			subdictTenantVisIdx = searchDictByTenantVisIdx->second;
		}
		else {
			subdictTenantVisIdx = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>();
			dictByTenantVisIdx->insert( std::map<cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
				std::map<cfcore::CFGenKbTSecGroupPKey,
					cfcore::CFGenKbTSecGroupBuff*>*>::value_type( keyTenantVisIdx, subdictTenantVisIdx ) );
		}
		subdictTenantVisIdx->insert( std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbTSecGroupBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbTSecGroupBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> CFGenKbRamTSecGroupTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> retVec;
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbTSecGroupBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> CFGenKbRamTSecGroupTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		cfcore::CFGenKbTSecGroupByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> recVec;
		cfcore::CFGenKbTSecGroupBuff* clone;
		auto searchDictByTenantIdx = dictByTenantIdx->find( key );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGroupPKey,
				 cfcore::CFGenKbTSecGroupBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>::iterator iter = subdictTenantIdx->begin();
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>::iterator end = subdictTenantIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> CFGenKbRamTSecGroupTable::readDerivedByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const bool IsVisible )
	{
		static const std::string S_ProcName( "readDerivedByTenantVisIdx" );
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIsVisible( IsVisible );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> recVec;
		cfcore::CFGenKbTSecGroupBuff* clone;
		auto searchDictByTenantVisIdx = dictByTenantVisIdx->find( key );
		if( searchDictByTenantVisIdx != dictByTenantVisIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGroupPKey,
				 cfcore::CFGenKbTSecGroupBuff*>* subdictTenantVisIdx = searchDictByTenantVisIdx->second;
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>::iterator iter = subdictTenantVisIdx->begin();
			std::map<cfcore::CFGenKbTSecGroupPKey,
				cfcore::CFGenKbTSecGroupBuff*>::iterator end = subdictTenantVisIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::CFGenKbTSecGroupBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbTSecGroupPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		cfcore::CFGenKbTSecGroupBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbTSecGroupBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbTSecGroupBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> CFGenKbRamTSecGroupTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbTSecGroupBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbTSecGroupBuff* buff = readDerivedByIdIdx( Authorization,
			TenantId,
			TSecGroupId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> CFGenKbRamTSecGroupTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbTSecGroupBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> CFGenKbRamTSecGroupTable::readBuffByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const bool IsVisible )
	{
		static const std::string S_ProcName( "readBuffByTenantVisIdx" );
		cfcore::CFGenKbTSecGroupBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> buffList = readDerivedByTenantVisIdx( Authorization,
			TenantId,
			IsVisible );
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfcore::CFGenKbTSecGroupBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfcore::CFGenKbTSecGroupBuff* buff = readBuffByUNameIdx( Authorization,
			TenantId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfcore::CFGenKbTSecGroupBuff* buff = readDerivedByUNameIdx( Authorization,
			TenantId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbRamTSecGroupTable::updateTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGroupBuff* Buff )
	{
		static const std::string S_ProcName( "updateTSecGroup" );
		cfcore::CFGenKbTSecGroupPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in TSecGroup for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbTSecGroupBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for TSecGroup primary key " );
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
		cfcore::CFGenKbTSecGroupByTenantIdxKey existingKeyTenantIdx;
		existingKeyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbTSecGroupByTenantIdxKey newKeyTenantIdx;
		newKeyTenantIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey existingKeyTenantVisIdx;
		existingKeyTenantVisIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyTenantVisIdx.setRequiredIsVisible( existing->getRequiredIsVisible() );
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey newKeyTenantVisIdx;
		newKeyTenantVisIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyTenantVisIdx.setRequiredIsVisible( Buff->getRequiredIsVisible() );
		cfcore::CFGenKbTSecGroupByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbTSecGroupByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index TSecGroupUNameIdx " + newKeyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship TSecGroupTenant to table Tenant" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbTSecGroupBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGroupPKey,
			 cfcore::CFGenKbTSecGroupBuff*>* subdictTenantIdx;
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
			subdictTenantIdx = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>();
			dictByTenantIdx->insert( std::map<cfcore::CFGenKbTSecGroupByTenantIdxKey,
				std::map<cfcore::CFGenKbTSecGroupPKey,
					cfcore::CFGenKbTSecGroupBuff*>*>::value_type( newKeyTenantIdx, subdictTenantIdx ) );
		}
		subdictTenantIdx->insert( std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbTSecGroupPKey,
			 cfcore::CFGenKbTSecGroupBuff*>* subdictTenantVisIdx;
		auto searchDictByTenantVisIdx = dictByTenantVisIdx->find( existingKeyTenantVisIdx );
		if( searchDictByTenantVisIdx != dictByTenantVisIdx->end() ) {
			subdictTenantVisIdx = searchDictByTenantVisIdx->second;
			auto searchSubDict = subdictTenantVisIdx->find( pkey );
			if( searchSubDict != subdictTenantVisIdx->end() ) {
				subdictTenantVisIdx->erase( searchSubDict );
			}
			if( subdictTenantVisIdx->size() <= 0 ) {
				delete subdictTenantVisIdx;
				dictByTenantVisIdx->erase( searchDictByTenantVisIdx );
			}
			subdictTenantVisIdx = NULL;
		}
		auto searchNewKeyDictByTenantVisIdx = dictByTenantVisIdx->find( newKeyTenantVisIdx );
		if( searchNewKeyDictByTenantVisIdx != dictByTenantVisIdx->end() ) {
			subdictTenantVisIdx = searchNewKeyDictByTenantVisIdx->second;
		}
		else {
			subdictTenantVisIdx = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>();
			dictByTenantVisIdx->insert( std::map<cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
				std::map<cfcore::CFGenKbTSecGroupPKey,
					cfcore::CFGenKbTSecGroupBuff*>*>::value_type( newKeyTenantVisIdx, subdictTenantVisIdx ) );
		}
		subdictTenantVisIdx->insert( std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::CFGenKbTSecGroupBuff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbTSecGroupBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbTSecGroupBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTSecGroup" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbTSecGroupPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredTSecGroupId( Buff->getRequiredTSecGroupId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbTSecGroupBuff* existing = searchExisting->second;
		schema->getTableTSecGrpInc()->deleteTSecGrpIncByIncludeIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredTSecGroupId() );
		schema->getTableTSecGrpMemb()->deleteTSecGrpMembByGroupIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredTSecGroupId() );
		schema->getTableTSecGrpInc()->deleteTSecGrpIncByGroupIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredTSecGroupId() );
		cfcore::CFGenKbTSecGroupByTenantIdxKey keyTenantIdx;
		keyTenantIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey keyTenantVisIdx;
		keyTenantVisIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyTenantVisIdx.setRequiredIsVisible( existing->getRequiredIsVisible() );
		cfcore::CFGenKbTSecGroupByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::CFGenKbTSecGroupBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByTenantIdx = dictByTenantIdx->find( keyTenantIdx );
		if( searchDictByTenantIdx != dictByTenantIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGroupPKey,
				 cfcore::CFGenKbTSecGroupBuff*>* subdictTenantIdx = searchDictByTenantIdx->second;
			auto searchSubDict = subdictTenantIdx->find( pkey );
			if( searchSubDict != subdictTenantIdx->end() ) {
				subdictTenantIdx->erase( searchSubDict );
			}
			subdictTenantIdx = NULL;
		}

		auto searchDictByTenantVisIdx = dictByTenantVisIdx->find( keyTenantVisIdx );
		if( searchDictByTenantVisIdx != dictByTenantVisIdx->end() ) {
			std::map<cfcore::CFGenKbTSecGroupPKey,
				 cfcore::CFGenKbTSecGroupBuff*>* subdictTenantVisIdx = searchDictByTenantVisIdx->second;
			auto searchSubDict = subdictTenantVisIdx->find( pkey );
			if( searchSubDict != subdictTenantVisIdx->end() ) {
				subdictTenantVisIdx->erase( searchSubDict );
			}
			subdictTenantVisIdx = NULL;
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

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int32_t argTSecGroupId )
	{
		cfcore::CFGenKbTSecGroupPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredTSecGroupId( argTSecGroupId );
		deleteTSecGroupByIdIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbTSecGroupBuff* cur = NULL;
		cfcore::CFGenKbTSecGroupBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGroupId() );
			rereadCur = cur;
			deleteTSecGroup( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbTSecGroupByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteTSecGroupByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGroupBuff* cur = NULL;
		cfcore::CFGenKbTSecGroupBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGroupId() );
			rereadCur = cur;
			deleteTSecGroup( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const bool argIsVisible )
	{
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredIsVisible( argIsVisible );
		deleteTSecGroupByTenantVisIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByTenantVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupByTenantVisIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGroupBuff* cur = NULL;
		cfcore::CFGenKbTSecGroupBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGroupId() );
			rereadCur = cur;
			deleteTSecGroup( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const std::string& argName )
	{
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredName( argName );
		deleteTSecGroupByUNameIdx( Authorization, &key );
	}

	void CFGenKbRamTSecGroupTable::deleteTSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbTSecGroupByUNameIdxKey* argKey )
	{
		cfcore::CFGenKbTSecGroupBuff* cur = NULL;
		cfcore::CFGenKbTSecGroupBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbTSecGroupPKey,
			cfcore::CFGenKbTSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredTSecGroupId() );
			rereadCur = cur;
			deleteTSecGroup( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamTSecGroupTable::releasePreparedStatements() {
	}

}
