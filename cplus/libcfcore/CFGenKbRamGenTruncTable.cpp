
// Description: C++18 Implementation for an in-memory RAM DbIO for GenTrunc.

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

	const std::string CFGenKbRamGenTruncTable::CLASS_NAME( "CFGenKbRamGenTruncTable" );

	CFGenKbRamGenTruncTable::CFGenKbRamGenTruncTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGenTruncTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenTruncBuff*>();
	}

	CFGenKbRamGenTruncTable::~CFGenKbRamGenTruncTable() {
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::createGenTrunc( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenTruncBuff* Buff )
	{
		static const std::string S_ProcName( "createGenTrunc" );
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
		cfcore::CFGenKbGenTruncBuff* buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( schema->getTableGenRule()->createGenRule( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( buff->getRequiredItemId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenTruncBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGenTruncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGenTruncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> retVec;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGenTruncBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readDerivedByCartIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readDerivedByRuleTypeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readDerivedByToolSetIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByGenDefIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByGenDefIdx( Authorization,
			GenDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		else if( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readDerivedByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		static const std::string S_ProcName( "readDerivedByBodyIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = schema->getTableGenRule()->readDerivedByBodyIdx( Authorization,
			BodyTenantId,
			BodyGelCacheId,
			BodyGelId );
		cfcore::CFGenKbGenRuleBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readDerivedByItemIdIdx" );
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		key.setRequiredItemId( ItemId );
		cfcore::CFGenKbGenTruncBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGenTruncBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGenTruncBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readBuffByItemIdIdx" );
		cfcore::CFGenKbGenTruncBuff* buff = readDerivedByItemIdIdx( Authorization,
			TenantId,
			CartridgeId,
			ItemId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readBuffByCartIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readBuffByRuleTypeIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readBuffByToolSetIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByGenDefIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByGenDefIdx( Authorization,
			GenDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByAltIdx" );
		cfcore::CFGenKbGenTruncBuff* buff = readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readBuffByGelExecIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readBuffByProbeIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::readBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		static const std::string S_ProcName( "readBuffByBodyIdx" );
		cfcore::CFGenKbGenTruncBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> buffList = readDerivedByBodyIdx( Authorization,
			BodyTenantId,
			BodyGelCacheId,
			BodyGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> CFGenKbRamGenTruncTable::pageBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByBodyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGenTruncBuff* CFGenKbRamGenTruncTable::updateGenTrunc( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenTruncBuff* Buff )
	{
		static const std::string S_ProcName( "updateGenTrunc" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GenTrunc for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGenTruncBuff* existing = searchExisting->second;

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
				cfcore::CFGenKbGenRuleBuff* chk = dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( schema->getTableGenRule()->readDerivedByItemIdIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredCartridgeId(),
						Buff->getRequiredItemId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table GenRule" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( schema->getTableGenRule()->updateGenRule( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenTruncBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenTruncBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGenTruncBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGenTruncTable::deleteGenTrunc( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenTruncBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGenTrunc" );
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
		cfcore::CFGenKbGenTruncBuff* existing = searchExisting->second;
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalBodyTenantIdValue(),
			existing->getOptionalBodyGelCacheIdValue(),
			existing->getOptionalBodyGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalBodyTenantIdValue(),
			existing->getOptionalBodyGelCacheIdValue(),
			existing->getOptionalBodyGelIdValue() );
			}
		}
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
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenTruncBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		schema->getTableGenRule()->deleteGenRule( Authorization,
			Buff );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBodyTenantId,
			const int64_t* argBodyGelCacheId,
			const int64_t* argBodyGelId )
	{
		cfcore::CFGenKbGenRuleByBodyIdxKey key;
		if( argBodyTenantId == NULL ) {
			key.setOptionalBodyTenantIdNull();
		}
		else {
			key.setOptionalBodyTenantIdValue( *argBodyTenantId );
		}
		if( argBodyGelCacheId == NULL ) {
			key.setOptionalBodyGelCacheIdNull();
		}
		else {
			key.setOptionalBodyGelCacheIdValue( *argBodyGelCacheId );
		}
		if( argBodyGelId == NULL ) {
			key.setOptionalBodyGelIdNull();
		}
		else {
			key.setOptionalBodyGelIdValue( *argBodyGelId );
		}
		deleteGenTruncByBodyIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenRuleByBodyIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalBodyTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalBodyGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalBodyGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId )
	{
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		key.setRequiredItemId( argItemId );
		deleteGenTruncByItemIdIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGenTruncByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId )
	{
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		deleteGenTruncByCartIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByCartIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId )
	{
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( argRuleTypeId );
		deleteGenTruncByRuleTypeIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId )
	{
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( argToolSetId );
		deleteGenTruncByToolSetIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId )
	{
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		deleteGenTruncByScopeIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByScopeIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( argGenDefId );
		deleteGenTruncByGenDefIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenTruncByAltIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByAltIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenTruncByGelExecIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenTruncByProbeIdx( Authorization, &key );
	}

	void CFGenKbRamGenTruncTable::deleteGenTruncByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByProbeIdxKey* argKey )
	{
		cfcore::CFGenKbGenTruncBuff* cur = NULL;
		cfcore::CFGenKbGenTruncBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenTruncBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenTruncBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenTruncBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenTrunc()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenTrunc( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenTruncTable::releasePreparedStatements() {
	}

}
