
// Description: C++18 Implementation for an in-memory RAM DbIO for SecGroup.

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

	const std::string CFGenKbRamSecGroupTable::CLASS_NAME( "CFGenKbRamSecGroupTable" );

	CFGenKbRamSecGroupTable::CFGenKbRamSecGroupTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecGroupTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbSecGroupByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>*>();
		dictByClusterVisIdx = new std::map<cfcore::CFGenKbSecGroupByClusterVisIdxKey,
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>*>();
		dictByUNameIdx = new std::map<cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::CFGenKbSecGroupBuff*>();
	}

	CFGenKbRamSecGroupTable::~CFGenKbRamSecGroupTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
		}
		if( dictByClusterVisIdx != NULL ) {
			for( auto iterDict = dictByClusterVisIdx->begin(); iterDict != dictByClusterVisIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterVisIdx;
			dictByClusterVisIdx = NULL;
		}
		if( dictByUNameIdx != NULL ) {
			delete dictByUNameIdx;
			dictByUNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecGroupBuff* elt;
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecGroupPKey,
					cfcore::CFGenKbSecGroupBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::createSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGroupBuff* Buff )
	{
		static const std::string S_ProcName( "createSecGroup" );
		cfcore::CFGenKbSecGroupPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGroupId( dynamic_cast<CFGenKbRamClusterTable*>( schema->getTableCluster() )->nextSecGroupIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredSecGroupId( pkey.getRequiredSecGroupId() );
		cfcore::CFGenKbSecGroupByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupByClusterVisIdxKey keyClusterVisIdx;
		keyClusterVisIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyClusterVisIdx.setRequiredIsVisible( Buff->getRequiredIsVisible() );
		cfcore::CFGenKbSecGroupByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
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
			std::string Msg( "Duplicate key detected for index SecGroupUNameIdx " + keyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship SecGroupCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecGroupBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupByClusterIdxKey,
				std::map<cfcore::CFGenKbSecGroupPKey,
					cfcore::CFGenKbSecGroupBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>* subdictClusterVisIdx;
		auto searchDictByClusterVisIdx = dictByClusterVisIdx->find( keyClusterVisIdx );
		if( searchDictByClusterVisIdx != dictByClusterVisIdx->end() ) {
			subdictClusterVisIdx = searchDictByClusterVisIdx->second;
		}
		else {
			subdictClusterVisIdx = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>();
			dictByClusterVisIdx->insert( std::map<cfcore::CFGenKbSecGroupByClusterVisIdxKey,
				std::map<cfcore::CFGenKbSecGroupPKey,
					cfcore::CFGenKbSecGroupBuff*>*>::value_type( keyClusterVisIdx, subdictClusterVisIdx ) );
		}
		subdictClusterVisIdx->insert( std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>::value_type( pkey, buff ) );

		dictByUNameIdx->insert( std::map<cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::CFGenKbSecGroupBuff*>::value_type( keyUNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecGroupBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecGroupBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> CFGenKbRamSecGroupTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> retVec;
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecGroupBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> CFGenKbRamSecGroupTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbSecGroupByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> recVec;
		cfcore::CFGenKbSecGroupBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupPKey,
				 cfcore::CFGenKbSecGroupBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> CFGenKbRamSecGroupTable::readDerivedByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const bool IsVisible )
	{
		static const std::string S_ProcName( "readDerivedByClusterVisIdx" );
		cfcore::CFGenKbSecGroupByClusterVisIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIsVisible( IsVisible );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> recVec;
		cfcore::CFGenKbSecGroupBuff* clone;
		auto searchDictByClusterVisIdx = dictByClusterVisIdx->find( key );
		if( searchDictByClusterVisIdx != dictByClusterVisIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupPKey,
				 cfcore::CFGenKbSecGroupBuff*>* subdictClusterVisIdx = searchDictByClusterVisIdx->second;
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>::iterator iter = subdictClusterVisIdx->begin();
			std::map<cfcore::CFGenKbSecGroupPKey,
				cfcore::CFGenKbSecGroupBuff*>::iterator end = subdictClusterVisIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readDerivedByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByUNameIdx" );
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredName( Name );
		cfcore::CFGenKbSecGroupBuff* buff;
		auto searchDictByUNameIdx = dictByUNameIdx->find( key );
		if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( searchDictByUNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecGroupPKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		cfcore::CFGenKbSecGroupBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecGroupBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecGroupBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> CFGenKbRamSecGroupTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecGroupBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecGroupBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			SecGroupId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> CFGenKbRamSecGroupTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbSecGroupBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> CFGenKbRamSecGroupTable::readBuffByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const bool IsVisible )
	{
		static const std::string S_ProcName( "readBuffByClusterVisIdx" );
		cfcore::CFGenKbSecGroupBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> buffList = readDerivedByClusterVisIdx( Authorization,
			ClusterId,
			IsVisible );
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readBuffByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByUNameIdx" );
		cfcore::CFGenKbSecGroupBuff* buff = readDerivedByUNameIdx( Authorization,
			ClusterId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readBuffByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupUNameIdx" );
		cfcore::CFGenKbSecGroupBuff* buff = readBuffByUNameIdx( Authorization,
			ClusterId,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::readDerivedByLookupUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupUNameIdx" );
		cfcore::CFGenKbSecGroupBuff* buff = readDerivedByUNameIdx( Authorization,
			ClusterId,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbRamSecGroupTable::updateSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGroupBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecGroup" );
		cfcore::CFGenKbSecGroupPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecGroup for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecGroupBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecGroup primary key " );
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
		cfcore::CFGenKbSecGroupByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupByClusterVisIdxKey existingKeyClusterVisIdx;
		existingKeyClusterVisIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyClusterVisIdx.setRequiredIsVisible( existing->getRequiredIsVisible() );
		cfcore::CFGenKbSecGroupByClusterVisIdxKey newKeyClusterVisIdx;
		newKeyClusterVisIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyClusterVisIdx.setRequiredIsVisible( Buff->getRequiredIsVisible() );
		cfcore::CFGenKbSecGroupByUNameIdxKey existingKeyUNameIdx;
		existingKeyUNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbSecGroupByUNameIdxKey newKeyUNameIdx;
		newKeyUNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyUNameIdx != newKeyUNameIdx ) {
			auto searchDictByUNameIdx = dictByUNameIdx->find( newKeyUNameIdx );
			if( searchDictByUNameIdx != dictByUNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecGroupUNameIdx " + newKeyUNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship SecGroupCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecGroupBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGroupPKey,
			 cfcore::CFGenKbSecGroupBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupByClusterIdxKey,
				std::map<cfcore::CFGenKbSecGroupPKey,
					cfcore::CFGenKbSecGroupBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecGroupPKey,
			 cfcore::CFGenKbSecGroupBuff*>* subdictClusterVisIdx;
		auto searchDictByClusterVisIdx = dictByClusterVisIdx->find( existingKeyClusterVisIdx );
		if( searchDictByClusterVisIdx != dictByClusterVisIdx->end() ) {
			subdictClusterVisIdx = searchDictByClusterVisIdx->second;
			auto searchSubDict = subdictClusterVisIdx->find( pkey );
			if( searchSubDict != subdictClusterVisIdx->end() ) {
				subdictClusterVisIdx->erase( searchSubDict );
			}
			if( subdictClusterVisIdx->size() <= 0 ) {
				delete subdictClusterVisIdx;
				dictByClusterVisIdx->erase( searchDictByClusterVisIdx );
			}
			subdictClusterVisIdx = NULL;
		}
		auto searchNewKeyDictByClusterVisIdx = dictByClusterVisIdx->find( newKeyClusterVisIdx );
		if( searchNewKeyDictByClusterVisIdx != dictByClusterVisIdx->end() ) {
			subdictClusterVisIdx = searchNewKeyDictByClusterVisIdx->second;
		}
		else {
			subdictClusterVisIdx = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>();
			dictByClusterVisIdx->insert( std::map<cfcore::CFGenKbSecGroupByClusterVisIdxKey,
				std::map<cfcore::CFGenKbSecGroupPKey,
					cfcore::CFGenKbSecGroupBuff*>*>::value_type( newKeyClusterVisIdx, subdictClusterVisIdx ) );
		}
		subdictClusterVisIdx->insert( std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>::value_type( pkey, existing ) );

		auto removalDictByUNameIdx = dictByUNameIdx->find( existingKeyUNameIdx );
		if( removalDictByUNameIdx != dictByUNameIdx->end() ) {
			dictByUNameIdx->erase( removalDictByUNameIdx );
		}
		dictByUNameIdx->insert( std::map<cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::CFGenKbSecGroupBuff*>::value_type( newKeyUNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecGroupBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecGroupTable::deleteSecGroup( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecGroupBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecGroup" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecGroupPKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredSecGroupId( Buff->getRequiredSecGroupId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecGroupBuff* existing = searchExisting->second;
		schema->getTableSecGroupForm()->deleteSecGroupFormByGroupIdx( Authorization,
			existing->getRequiredClusterId(),
			existing->getRequiredSecGroupId() );
		schema->getTableSecGrpInc()->deleteSecGrpIncByIncludeIdx( Authorization,
			existing->getRequiredClusterId(),
			existing->getRequiredSecGroupId() );
		schema->getTableSecGrpMemb()->deleteSecGrpMembByGroupIdx( Authorization,
			existing->getRequiredClusterId(),
			existing->getRequiredSecGroupId() );
		schema->getTableSecGrpInc()->deleteSecGrpIncByGroupIdx( Authorization,
			existing->getRequiredClusterId(),
			existing->getRequiredSecGroupId() );
		cfcore::CFGenKbSecGroupByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbSecGroupByClusterVisIdxKey keyClusterVisIdx;
		keyClusterVisIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyClusterVisIdx.setRequiredIsVisible( existing->getRequiredIsVisible() );
		cfcore::CFGenKbSecGroupByUNameIdxKey keyUNameIdx;
		keyUNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::CFGenKbSecGroupBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupPKey,
				 cfcore::CFGenKbSecGroupBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByClusterVisIdx = dictByClusterVisIdx->find( keyClusterVisIdx );
		if( searchDictByClusterVisIdx != dictByClusterVisIdx->end() ) {
			std::map<cfcore::CFGenKbSecGroupPKey,
				 cfcore::CFGenKbSecGroupBuff*>* subdictClusterVisIdx = searchDictByClusterVisIdx->second;
			auto searchSubDict = subdictClusterVisIdx->find( pkey );
			if( searchSubDict != subdictClusterVisIdx->end() ) {
				subdictClusterVisIdx->erase( searchSubDict );
			}
			subdictClusterVisIdx = NULL;
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

	void CFGenKbRamSecGroupTable::deleteSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int32_t argSecGroupId )
	{
		cfcore::CFGenKbSecGroupPKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredSecGroupId( argSecGroupId );
		deleteSecGroupByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecGroupBuff* cur = NULL;
		cfcore::CFGenKbSecGroupBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupId() );
			rereadCur = cur;
			deleteSecGroup( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbSecGroupByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteSecGroupByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupBuff* cur = NULL;
		cfcore::CFGenKbSecGroupBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupId() );
			rereadCur = cur;
			deleteSecGroup( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const bool argIsVisible )
	{
		cfcore::CFGenKbSecGroupByClusterVisIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredIsVisible( argIsVisible );
		deleteSecGroupByClusterVisIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByClusterVisIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupByClusterVisIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupBuff* cur = NULL;
		cfcore::CFGenKbSecGroupBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupId() );
			rereadCur = cur;
			deleteSecGroup( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argName )
	{
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredName( argName );
		deleteSecGroupByUNameIdx( Authorization, &key );
	}

	void CFGenKbRamSecGroupTable::deleteSecGroupByUNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecGroupByUNameIdxKey* argKey )
	{
		cfcore::CFGenKbSecGroupBuff* cur = NULL;
		cfcore::CFGenKbSecGroupBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> matchSet;
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecGroupPKey,
			cfcore::CFGenKbSecGroupBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecGroup()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredSecGroupId() );
			rereadCur = cur;
			deleteSecGroup( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecGroupTable::releasePreparedStatements() {
	}

}
