
// Description: C++18 Implementation for an in-memory RAM DbIO for HostNode.

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

	const std::string CFGenKbRamHostNodeTable::CLASS_NAME( "CFGenKbRamHostNodeTable" );

	CFGenKbRamHostNodeTable::CFGenKbRamHostNodeTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbHostNodeTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>();
		dictByClusterIdx = new std::map<cfcore::CFGenKbHostNodeByClusterIdxKey,
			std::map<cfcore::CFGenKbHostNodePKey,
				cfcore::CFGenKbHostNodeBuff*>*>();
		dictByUDescrIdx = new std::map<cfcore::CFGenKbHostNodeByUDescrIdxKey, cfcore::CFGenKbHostNodeBuff*>();
		dictByHostNameIdx = new std::map<cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::CFGenKbHostNodeBuff*>();
	}

	CFGenKbRamHostNodeTable::~CFGenKbRamHostNodeTable() {
		if( dictByClusterIdx != NULL ) {
			for( auto iterDict = dictByClusterIdx->begin(); iterDict != dictByClusterIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByClusterIdx;
			dictByClusterIdx = NULL;
		}
		if( dictByUDescrIdx != NULL ) {
			delete dictByUDescrIdx;
			dictByUDescrIdx = NULL;
		}
		if( dictByHostNameIdx != NULL ) {
			delete dictByHostNameIdx;
			dictByHostNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbHostNodeBuff* elt;
			std::map<cfcore::CFGenKbHostNodePKey,
				cfcore::CFGenKbHostNodeBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbHostNodePKey,
					cfcore::CFGenKbHostNodeBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::createHostNode( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbHostNodeBuff* Buff )
	{
		static const std::string S_ProcName( "createHostNode" );
		cfcore::CFGenKbHostNodePKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredHostNodeId( dynamic_cast<CFGenKbRamClusterTable*>( schema->getTableCluster() )->nextHostNodeIdGen( Authorization,
			Buff->getRequiredClusterId() ) );
		Buff->setRequiredClusterId( pkey.getRequiredClusterId() );
		Buff->setRequiredHostNodeId( pkey.getRequiredHostNodeId() );
		cfcore::CFGenKbHostNodeByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbHostNodeByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		cfcore::CFGenKbHostNodeByHostNameIdxKey keyHostNameIdx;
		keyHostNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		keyHostNameIdx.setRequiredHostName( Buff->getRequiredHostName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			std::string Msg( "Duplicate key detected for index HostNodeUDescrIdx " + keyUDescrIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		auto searchDictByHostNameIdx = dictByHostNameIdx->find( keyHostNameIdx );
		if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index HostNodeUHostNameIdx " + keyHostNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship HostNodeCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbHostNodeBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>* subdictClusterIdx;
		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			subdictClusterIdx = searchDictByClusterIdx->second;
		}
		else {
			subdictClusterIdx = new std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbHostNodeByClusterIdxKey,
				std::map<cfcore::CFGenKbHostNodePKey,
					cfcore::CFGenKbHostNodeBuff*>*>::value_type( keyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>::value_type( pkey, buff ) );

		dictByUDescrIdx->insert( std::map<cfcore::CFGenKbHostNodeByUDescrIdxKey, cfcore::CFGenKbHostNodeBuff*>::value_type( keyUDescrIdx, buff ) );

		dictByHostNameIdx->insert( std::map<cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::CFGenKbHostNodeBuff*>::value_type( keyHostNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbHostNodeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbHostNodeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> CFGenKbRamHostNodeTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> retVec;
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbHostNodeBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> CFGenKbRamHostNodeTable::readDerivedByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readDerivedByClusterIdx" );
		cfcore::CFGenKbHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> recVec;
		cfcore::CFGenKbHostNodeBuff* clone;
		auto searchDictByClusterIdx = dictByClusterIdx->find( key );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbHostNodePKey,
				 cfcore::CFGenKbHostNodeBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			std::map<cfcore::CFGenKbHostNodePKey,
				cfcore::CFGenKbHostNodeBuff*>::iterator iter = subdictClusterIdx->begin();
			std::map<cfcore::CFGenKbHostNodePKey,
				cfcore::CFGenKbHostNodeBuff*>::iterator end = subdictClusterIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readDerivedByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readDerivedByUDescrIdx" );
		cfcore::CFGenKbHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredDescription( Description );
		cfcore::CFGenKbHostNodeBuff* buff;
		auto searchDictByUDescrIdx = dictByUDescrIdx->find( key );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( searchDictByUDescrIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readDerivedByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName )
	{
		static const std::string S_ProcName( "readDerivedByHostNameIdx" );
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfcore::CFGenKbHostNodeBuff* buff;
		auto searchDictByHostNameIdx = dictByHostNameIdx->find( key );
		if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( searchDictByHostNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbHostNodePKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostNodeId( HostNodeId );
		cfcore::CFGenKbHostNodeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbHostNodeBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff ) );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbHostNodeBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> CFGenKbRamHostNodeTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbHostNodeBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> CFGenKbRamHostNodeTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t HostNodeId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbHostNodeBuff* buff = readDerivedByIdIdx( Authorization,
			ClusterId,
			HostNodeId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> CFGenKbRamHostNodeTable::readBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readBuffByClusterIdx" );
		cfcore::CFGenKbHostNodeBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> buffList = readDerivedByClusterIdx( Authorization,
			ClusterId );
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readBuffByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readBuffByUDescrIdx" );
		cfcore::CFGenKbHostNodeBuff* buff = readDerivedByUDescrIdx( Authorization,
			ClusterId,
			Description );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readBuffByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const std::string& HostName )
	{
		static const std::string S_ProcName( "readBuffByHostNameIdx" );
		cfcore::CFGenKbHostNodeBuff* buff = readDerivedByHostNameIdx( Authorization,
			ClusterId,
			HostName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readBuffByLookupHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupHostNameIdx" );
		cfcore::CFGenKbHostNodeBuff* buff = readBuffByHostNameIdx( Authorization,
			ClusterId,
			HostName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::readDerivedByLookupHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId, const std::string& HostName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupHostNameIdx" );
		cfcore::CFGenKbHostNodeBuff* buff = readDerivedByHostNameIdx( Authorization,
			ClusterId,
			HostName );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> CFGenKbRamHostNodeTable::pageBuffByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId )
	{
		static const std::string S_ProcName( "pageBuffByClusterIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbRamHostNodeTable::updateHostNode( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbHostNodeBuff* Buff )
	{
		static const std::string S_ProcName( "updateHostNode" );
		cfcore::CFGenKbHostNodePKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredHostNodeId( Buff->getRequiredHostNodeId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in HostNode for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbHostNodeBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for HostNode primary key " );
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
		cfcore::CFGenKbHostNodeByClusterIdxKey existingKeyClusterIdx;
		existingKeyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbHostNodeByClusterIdxKey newKeyClusterIdx;
		newKeyClusterIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		cfcore::CFGenKbHostNodeByUDescrIdxKey existingKeyUDescrIdx;
		existingKeyUDescrIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		cfcore::CFGenKbHostNodeByUDescrIdxKey newKeyUDescrIdx;
		newKeyUDescrIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyUDescrIdx.setRequiredDescription( Buff->getRequiredDescription() );
		cfcore::CFGenKbHostNodeByHostNameIdxKey existingKeyHostNameIdx;
		existingKeyHostNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		existingKeyHostNameIdx.setRequiredHostName( existing->getRequiredHostName() );
		cfcore::CFGenKbHostNodeByHostNameIdxKey newKeyHostNameIdx;
		newKeyHostNameIdx.setRequiredClusterId( Buff->getRequiredClusterId() );
		newKeyHostNameIdx.setRequiredHostName( Buff->getRequiredHostName() );
		// Check unique indexes

		if( existingKeyUDescrIdx != newKeyUDescrIdx ) {
			auto searchDictByUDescrIdx = dictByUDescrIdx->find( newKeyUDescrIdx );
			if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
				std::string Msg( "Duplicate key detected for index HostNodeUDescrIdx " + newKeyUDescrIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		if( existingKeyHostNameIdx != newKeyHostNameIdx ) {
			auto searchDictByHostNameIdx = dictByHostNameIdx->find( newKeyHostNameIdx );
			if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index HostNodeUHostNameIdx " + newKeyHostNameIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship HostNodeCluster to table Cluster" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbHostNodeBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbHostNodePKey,
			 cfcore::CFGenKbHostNodeBuff*>* subdictClusterIdx;
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
			subdictClusterIdx = new std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>();
			dictByClusterIdx->insert( std::map<cfcore::CFGenKbHostNodeByClusterIdxKey,
				std::map<cfcore::CFGenKbHostNodePKey,
					cfcore::CFGenKbHostNodeBuff*>*>::value_type( newKeyClusterIdx, subdictClusterIdx ) );
		}
		subdictClusterIdx->insert( std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>::value_type( pkey, existing ) );

		auto removalDictByUDescrIdx = dictByUDescrIdx->find( existingKeyUDescrIdx );
		if( removalDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( removalDictByUDescrIdx );
		}
		dictByUDescrIdx->insert( std::map<cfcore::CFGenKbHostNodeByUDescrIdxKey, cfcore::CFGenKbHostNodeBuff*>::value_type( newKeyUDescrIdx, existing ) );

		auto removalDictByHostNameIdx = dictByHostNameIdx->find( existingKeyHostNameIdx );
		if( removalDictByHostNameIdx != dictByHostNameIdx->end() ) {
			dictByHostNameIdx->erase( removalDictByHostNameIdx );
		}
		dictByHostNameIdx->insert( std::map<cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::CFGenKbHostNodeBuff*>::value_type( newKeyHostNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbHostNodeBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamHostNodeTable::deleteHostNode( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbHostNodeBuff* Buff )
	{
		static const std::string S_ProcName( "deleteHostNode" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbHostNodePKey pkey;
		pkey.setRequiredClusterId( Buff->getRequiredClusterId() );
		pkey.setRequiredHostNodeId( Buff->getRequiredHostNodeId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbHostNodeBuff* existing = searchExisting->second;
		cfcore::CFGenKbHostNodeByClusterIdxKey keyClusterIdx;
		keyClusterIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		cfcore::CFGenKbHostNodeByUDescrIdxKey keyUDescrIdx;
		keyUDescrIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyUDescrIdx.setRequiredDescription( existing->getRequiredDescription() );
		cfcore::CFGenKbHostNodeByHostNameIdxKey keyHostNameIdx;
		keyHostNameIdx.setRequiredClusterId( existing->getRequiredClusterId() );
		keyHostNameIdx.setRequiredHostName( existing->getRequiredHostName() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::CFGenKbHostNodeBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByClusterIdx = dictByClusterIdx->find( keyClusterIdx );
		if( searchDictByClusterIdx != dictByClusterIdx->end() ) {
			std::map<cfcore::CFGenKbHostNodePKey,
				 cfcore::CFGenKbHostNodeBuff*>* subdictClusterIdx = searchDictByClusterIdx->second;
			auto searchSubDict = subdictClusterIdx->find( pkey );
			if( searchSubDict != subdictClusterIdx->end() ) {
				subdictClusterIdx->erase( searchSubDict );
			}
			subdictClusterIdx = NULL;
		}

		auto searchDictByUDescrIdx = dictByUDescrIdx->find( keyUDescrIdx );
		if( searchDictByUDescrIdx != dictByUDescrIdx->end() ) {
			dictByUDescrIdx->erase( searchDictByUDescrIdx );
		}

		auto searchDictByHostNameIdx = dictByHostNameIdx->find( keyHostNameIdx );
		if( searchDictByHostNameIdx != dictByHostNameIdx->end() ) {
			dictByHostNameIdx->erase( searchDictByHostNameIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const int64_t argHostNodeId )
	{
		cfcore::CFGenKbHostNodePKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredHostNodeId( argHostNodeId );
		deleteHostNodeByIdIdx( Authorization, &key );
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbHostNodeBuff* cur = NULL;
		cfcore::CFGenKbHostNodeBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> matchSet;
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId )
	{
		cfcore::CFGenKbHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( argClusterId );
		deleteHostNodeByClusterIdx( Authorization, &key );
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByClusterIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodeByClusterIdxKey* argKey )
	{
		cfcore::CFGenKbHostNodeBuff* cur = NULL;
		cfcore::CFGenKbHostNodeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> matchSet;
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argDescription )
	{
		cfcore::CFGenKbHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredDescription( argDescription );
		deleteHostNodeByUDescrIdx( Authorization, &key );
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByUDescrIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodeByUDescrIdxKey* argKey )
	{
		cfcore::CFGenKbHostNodeBuff* cur = NULL;
		cfcore::CFGenKbHostNodeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> matchSet;
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argClusterId,
			const std::string& argHostName )
	{
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( argClusterId );
		key.setRequiredHostName( argHostName );
		deleteHostNodeByHostNameIdx( Authorization, &key );
	}

	void CFGenKbRamHostNodeTable::deleteHostNodeByHostNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbHostNodeByHostNameIdxKey* argKey )
	{
		cfcore::CFGenKbHostNodeBuff* cur = NULL;
		cfcore::CFGenKbHostNodeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> matchSet;
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbHostNodePKey,
			cfcore::CFGenKbHostNodeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableHostNode()->readDerivedByIdIdx( Authorization,
				cur->getRequiredClusterId(),
				cur->getRequiredHostNodeId() );
			rereadCur = cur;
			deleteHostNode( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamHostNodeTable::releasePreparedStatements() {
	}

}
