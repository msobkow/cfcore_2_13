
// Description: C++18 Implementation for an in-memory RAM DbIO for GenIterator.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
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

	const std::string CFGenKbRamGenIteratorTable::CLASS_NAME( "CFGenKbRamGenIteratorTable" );

	CFGenKbRamGenIteratorTable::CFGenKbRamGenIteratorTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGenIteratorTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenIteratorBuff*>();
	}

	CFGenKbRamGenIteratorTable::~CFGenKbRamGenIteratorTable() {
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::createGenIterator( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenIteratorBuff* Buff )
	{
		static const std::string S_ProcName( "createGenIterator" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbGenIteratorBuff* buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( schema->getTableGenItem()->createGenItem( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( buff->getRequiredItemId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenIteratorBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> retVec;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGenIteratorBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readDerivedByCartIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readDerivedByRuleTypeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readDerivedByToolSetIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByGenDefIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByGenDefIdx( Authorization,
			GenDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByAltIdx" );
		cfcore::CFGenKbGenItemBuff* buff = schema->getTableGenItem()->readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readDerivedByGelExecIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readDerivedByProbeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readDerivedByItemIdIdx" );
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		key.setRequiredItemId( ItemId );
		cfcore::CFGenKbGenIteratorBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGenIteratorBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGenIteratorBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readBuffByItemIdIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff = readDerivedByItemIdIdx( Authorization,
			TenantId,
			CartridgeId,
			ItemId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readBuffByCartIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readBuffByRuleTypeIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readBuffByToolSetIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByGenDefIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByGenDefIdx( Authorization,
			GenDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByAltIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff = readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readBuffByGelExecIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> CFGenKbRamGenIteratorTable::readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readBuffByProbeIdx" );
		cfcore::CFGenKbGenIteratorBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenIteratorBuff* CFGenKbRamGenIteratorTable::updateGenIterator( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenIteratorBuff* Buff )
	{
		static const std::string S_ProcName( "updateGenIterator" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GenIterator for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGenIteratorBuff* existing = searchExisting->second;

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
		// Check unique indexes

		// Validate foreign keys

		{
			bool allNull = true;

			if( allNull ) {
				cfcore::CFGenKbGenItemBuff* chk = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( schema->getTableGenItem()->readDerivedByItemIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredCartridgeId(),
						Buff->getRequiredItemId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table GenItem" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( schema->getTableGenItem()->updateGenItem( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenIteratorBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenIteratorBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGenIteratorBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIterator( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenIteratorBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGenIterator" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbGenIteratorBuff* existing = searchExisting->second;
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalGelExecutableTenantIdValue(),
			existing->getOptionalGelExecutableGelCacheIdValue(),
			existing->getOptionalGelExecutableIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalGelExecutableTenantIdValue(),
			existing->getOptionalGelExecutableGelCacheIdValue(),
			existing->getOptionalGelExecutableIdValue() );
			}
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenIteratorBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		schema->getTableGenItem()->deleteGenItem( Authorization,
			Buff );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId )
	{
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		key.setRequiredItemId( argItemId );
		deleteGenIteratorByItemIdIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGenIteratorByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId )
	{
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		deleteGenIteratorByCartIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByCartIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId )
	{
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( argRuleTypeId );
		deleteGenIteratorByRuleTypeIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId )
	{
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( argToolSetId );
		deleteGenIteratorByToolSetIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId )
	{
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		deleteGenIteratorByScopeIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByScopeIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( argGenDefId );
		deleteGenIteratorByGenDefIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( argName );
		key.setRequiredToolSetId( argToolSetId );
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		key.setRequiredGenDefId( argGenDefId );
		deleteGenIteratorByAltIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByAltIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId )
	{
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( argGelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *argGelExecutableTenantId );
		}
		if( argGelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *argGelExecutableGelCacheId );
		}
		if( argGelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *argGelExecutableId );
		}
		deleteGenIteratorByGelExecIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalGelExecutableTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalGelExecutableGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalGelExecutableIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId )
	{
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( argProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *argProbeTenantId );
		}
		if( argProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *argProbeCartridgeId );
		}
		if( argProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *argProbeGenItemId );
		}
		deleteGenIteratorByProbeIdx( Authorization, &key );
	}

	void CFGenKbRamGenIteratorTable::deleteGenIteratorByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByProbeIdxKey* argKey )
	{
		cfcore::CFGenKbGenIteratorBuff* cur = NULL;
		cfcore::CFGenKbGenIteratorBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalProbeTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalProbeCartridgeIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalProbeGenItemIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenIteratorBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenIterator()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenIterator( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenIteratorTable::releasePreparedStatements() {
	}

}
