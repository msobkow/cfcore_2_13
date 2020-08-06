
// Description: C++18 Implementation for an in-memory RAM DbIO for GelExecutable.

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

	const std::string CFGenKbRamGelExecutableTable::CLASS_NAME( "CFGenKbRamGelExecutableTable" );

	CFGenKbRamGelExecutableTable::CFGenKbRamGelExecutableTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelExecutableTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>();
		dictByGenItemIdx = new std::map<cfcore::CFGenKbGelExecutableByGenItemIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelExecutableBuff*>*>();
	}

	CFGenKbRamGelExecutableTable::~CFGenKbRamGelExecutableTable() {
		if( dictByGenItemIdx != NULL ) {
			for( auto iterDict = dictByGenItemIdx->begin(); iterDict != dictByGenItemIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByGenItemIdx;
			dictByGenItemIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::createGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelExecutableBuff* Buff )
	{
		static const std::string S_ProcName( "createGelExecutable" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		cfcore::CFGenKbGelExecutableByGenItemIdxKey keyGenItemIdx;
		keyGenItemIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		keyGenItemIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbGelExecutableBuff* buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelSequence()->createGelSequence( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>* subdictGenItemIdx;
		auto searchDictByGenItemIdx = dictByGenItemIdx->find( keyGenItemIdx );
		if( searchDictByGenItemIdx != dictByGenItemIdx->end() ) {
			subdictGenItemIdx = searchDictByGenItemIdx->second;
		}
		else {
			subdictGenItemIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>();
			dictByGenItemIdx->insert( std::map<cfcore::CFGenKbGelExecutableByGenItemIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelExecutableBuff*>*>::value_type( keyGenItemIdx, subdictGenItemIdx ) );
		}
		subdictGenItemIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelExecutableBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readDerivedByChainIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readDerivedByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		static const std::string S_ProcName( "readDerivedByFirstInstIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = schema->getTableGelSequence()->readDerivedByFirstInstIdx( Authorization,
			FirstInstTenantId,
			FirstInstGelCacheId,
			FirstInstId );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readDerivedByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		static const std::string S_ProcName( "readDerivedByLastInstIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = schema->getTableGelSequence()->readDerivedByLastInstIdx( Authorization,
			LastInstTenantId,
			LastInstGelCacheId,
			LastInstId );
		cfcore::CFGenKbGelSequenceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readDerivedByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGenItemIdx" );
		cfcore::CFGenKbGelExecutableByGenItemIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> recVec;
		cfcore::CFGenKbGelExecutableBuff* clone;
		auto searchDictByGenItemIdx = dictByGenItemIdx->find( key );
		if( searchDictByGenItemIdx != dictByGenItemIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelExecutableBuff*>* subdictGenItemIdx = searchDictByGenItemIdx->second;
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelExecutableBuff*>::iterator iter = subdictGenItemIdx->begin();
			std::map<cfcore::CFGenKbGelInstructionPKey,
				cfcore::CFGenKbGelExecutableBuff*>::iterator end = subdictGenItemIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelExecutableBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelExecutableBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelExecutableBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		static const std::string S_ProcName( "readBuffByFirstInstIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readDerivedByFirstInstIdx( Authorization,
			FirstInstTenantId,
			FirstInstGelCacheId,
			FirstInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		static const std::string S_ProcName( "readBuffByLastInstIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readDerivedByLastInstIdx( Authorization,
			LastInstTenantId,
			LastInstGelCacheId,
			LastInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::readBuffByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGenItemIdx" );
		cfcore::CFGenKbGelExecutableBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = readDerivedByGenItemIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::pageBuffByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByFirstInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::pageBuffByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByLastInstIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> CFGenKbRamGelExecutableTable::pageBuffByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t* priorTenantId,
			const int64_t* priorGelCacheId,
			const int64_t* priorGelInstId )
	{
		static const std::string S_ProcName( "pageBuffByGenItemIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGelExecutableBuff* CFGenKbRamGelExecutableTable::updateGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelExecutableBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelExecutable" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelExecutable for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelExecutableBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGelExecutableByGenItemIdxKey existingKeyGenItemIdx;
		existingKeyGenItemIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		existingKeyGenItemIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		cfcore::CFGenKbGelExecutableByGenItemIdxKey newKeyGenItemIdx;
		newKeyGenItemIdx.setRequiredTenantId( Buff->getRequiredTenantId() );
		newKeyGenItemIdx.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbGelSequenceBuff* chk = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( schema->getTableGelSequence()->readDerivedByPIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredGelCacheId(),
						Buff->getRequiredGelInstId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table GelSequence" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelSequence()->updateGelSequence( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGelInstructionPKey,
			 cfcore::CFGenKbGelExecutableBuff*>* subdictGenItemIdx;
		auto searchDictByGenItemIdx = dictByGenItemIdx->find( existingKeyGenItemIdx );
		if( searchDictByGenItemIdx != dictByGenItemIdx->end() ) {
			subdictGenItemIdx = searchDictByGenItemIdx->second;
			auto searchSubDict = subdictGenItemIdx->find( pkey );
			if( searchSubDict != subdictGenItemIdx->end() ) {
				subdictGenItemIdx->erase( searchSubDict );
			}
			if( subdictGenItemIdx->size() <= 0 ) {
				delete subdictGenItemIdx;
				dictByGenItemIdx->erase( searchDictByGenItemIdx );
			}
			subdictGenItemIdx = NULL;
		}
		auto searchNewKeyDictByGenItemIdx = dictByGenItemIdx->find( newKeyGenItemIdx );
		if( searchNewKeyDictByGenItemIdx != dictByGenItemIdx->end() ) {
			subdictGenItemIdx = searchNewKeyDictByGenItemIdx->second;
		}
		else {
			subdictGenItemIdx = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>();
			dictByGenItemIdx->insert( std::map<cfcore::CFGenKbGelExecutableByGenItemIdxKey,
				std::map<cfcore::CFGenKbGelInstructionPKey,
					cfcore::CFGenKbGelExecutableBuff*>*>::value_type( newKeyGenItemIdx, subdictGenItemIdx ) );
		}
		subdictGenItemIdx->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelExecutableBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutable( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelExecutableBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelExecutable" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbGelExecutableBuff* existing = searchExisting->second;
		cfcore::CFGenKbGelExecutableBuff* editSubobj = NULL;
		cfcore::CFGenKbGelExecutableBuff* subobj = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredGelCacheId(),
			existing->getRequiredGelInstId() );
			subobj->setOptionalFirstInstTenantIdNull();
			subobj->setOptionalFirstInstGelCacheIdNull();
			subobj->setOptionalFirstInstIdNull();
			subobj->setOptionalLastInstTenantIdNull();
			subobj->setOptionalLastInstGelCacheIdNull();
			subobj->setOptionalLastInstIdNull();
		classCode = subobj->getClassCode();
		if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			editSubobj = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->updateGelExecutable( Authorization, subobj ) );
		}
		else {
			delete subobj;
			subobj = NULL;
			std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
			throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
				S_ProcName,
				S_Msg );
		}
		// existing was not deleted by the update, so we won't be deleting that
		// unless we're in the base class.  But we may as well delete editSubobj
		// now because we always have to get rid of it.
		delete editSubobj;
		editSubobj = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> arrCheckGelCalls = schema->getTableGelCall()->readDerivedBySeqIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredGelCacheIdReference(),
			existing->getRequiredGelInstIdReference() );
		if( arrCheckGelCalls.size() > 0 ) {
			schema->getTableGelCall()->deleteGelCallBySeqIdx( Authorization,
			existing->getRequiredTenantIdReference(),
			existing->getRequiredGelCacheIdReference(),
			existing->getRequiredGelInstIdReference() );
		}
		cfcore::CFGenKbGelExecutableByGenItemIdxKey keyGenItemIdx;
		keyGenItemIdx.setRequiredTenantId( existing->getRequiredTenantId() );
		keyGenItemIdx.setRequiredGelCacheId( existing->getRequiredGelCacheId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelExecutableBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByGenItemIdx = dictByGenItemIdx->find( keyGenItemIdx );
		if( searchDictByGenItemIdx != dictByGenItemIdx->end() ) {
			std::map<cfcore::CFGenKbGelInstructionPKey,
				 cfcore::CFGenKbGelExecutableBuff*>* subdictGenItemIdx = searchDictByGenItemIdx->second;
			auto searchSubDict = subdictGenItemIdx->find( pkey );
			if( searchSubDict != subdictGenItemIdx->end() ) {
				subdictGenItemIdx->erase( searchSubDict );
			}
			subdictGenItemIdx = NULL;
		}

		schema->getTableGelSequence()->deleteGelSequence( Authorization,
			Buff );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelExecutableByGenItemIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelExecutableByGenItemIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByGenItemIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelExecutableByGenItemIdxKey* argKey )
	{
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argFirstInstTenantId,
			const int64_t* argFirstInstGelCacheId,
			const int64_t* argFirstInstId )
	{
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey key;
		if( argFirstInstTenantId == NULL ) {
			key.setOptionalFirstInstTenantIdNull();
		}
		else {
			key.setOptionalFirstInstTenantIdValue( *argFirstInstTenantId );
		}
		if( argFirstInstGelCacheId == NULL ) {
			key.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			key.setOptionalFirstInstGelCacheIdValue( *argFirstInstGelCacheId );
		}
		if( argFirstInstId == NULL ) {
			key.setOptionalFirstInstIdNull();
		}
		else {
			key.setOptionalFirstInstIdValue( *argFirstInstId );
		}
		deleteGelExecutableByFirstInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByFirstInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSequenceByFirstInstIdxKey* argKey )
	{
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalFirstInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalFirstInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalFirstInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argLastInstTenantId,
			const int64_t* argLastInstGelCacheId,
			const int64_t* argLastInstId )
	{
		cfcore::CFGenKbGelSequenceByLastInstIdxKey key;
		if( argLastInstTenantId == NULL ) {
			key.setOptionalLastInstTenantIdNull();
		}
		else {
			key.setOptionalLastInstTenantIdValue( *argLastInstTenantId );
		}
		if( argLastInstGelCacheId == NULL ) {
			key.setOptionalLastInstGelCacheIdNull();
		}
		else {
			key.setOptionalLastInstGelCacheIdValue( *argLastInstGelCacheId );
		}
		if( argLastInstId == NULL ) {
			key.setOptionalLastInstIdNull();
		}
		else {
			key.setOptionalLastInstIdValue( *argLastInstId );
		}
		deleteGelExecutableByLastInstIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByLastInstIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelSequenceByLastInstIdxKey* argKey )
	{
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalLastInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalLastInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalLastInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelExecutableByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelExecutableByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelExecutableByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argChainInstTenantId,
			const int64_t* argChainInstGelCacheId,
			const int64_t* argChainInstGelInstId )
	{
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( argChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *argChainInstTenantId );
		}
		if( argChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *argChainInstGelCacheId );
		}
		if( argChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *argChainInstGelInstId );
		}
		deleteGelExecutableByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelExecutableTable::deleteGelExecutableByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		cfcore::CFGenKbGelExecutableBuff* cur = NULL;
		cfcore::CFGenKbGelExecutableBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalChainInstTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalChainInstGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalChainInstGelInstIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelExecutableBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelExecutable( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelExecutableTable::releasePreparedStatements() {
	}

}
