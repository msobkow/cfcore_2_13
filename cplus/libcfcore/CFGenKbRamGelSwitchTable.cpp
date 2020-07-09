
// Description: C++18 Implementation for an in-memory RAM DbIO for GelSwitch.

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

	const std::string CFGenKbRamGelSwitchTable::CLASS_NAME( "CFGenKbRamGelSwitchTable" );

	CFGenKbRamGelSwitchTable::CFGenKbRamGelSwitchTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGelSwitchTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSwitchBuff*>();
	}

	CFGenKbRamGelSwitchTable::~CFGenKbRamGelSwitchTable() {
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::createGelSwitch( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSwitchBuff* Buff )
	{
		static const std::string S_ProcName( "createGelSwitch" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbGelSwitchBuff* buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( schema->getTableGelInstruction()->createGelInstruction( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( buff->getRequiredGelInstId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSwitchBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGelSwitchBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGelSwitchBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> retVec;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGelSwitchBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readDerivedByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readDerivedByGelCacheIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = schema->getTableGelInstruction()->readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		cfcore::CFGenKbGelInstructionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readDerivedByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::readDerivedByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readDerivedByPIdx" );
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		cfcore::CFGenKbGelSwitchBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGelSwitchBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGelSwitchBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGelSwitchBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::readBuffByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readBuffByPIdx" );
		cfcore::CFGenKbGelSwitchBuff* buff = readDerivedByPIdx( Authorization,
			TenantId,
			GelCacheId,
			GelInstId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGelSwitchBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readBuffByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readBuffByGelCacheIdx" );
		cfcore::CFGenKbGelSwitchBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> buffList = readDerivedByGelCacheIdx( Authorization,
			TenantId,
			GelCacheId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> CFGenKbRamGelSwitchTable::readBuffByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readBuffByChainIdx" );
		cfcore::CFGenKbGelSwitchBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> buffList = readDerivedByChainIdx( Authorization,
			ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGelSwitchBuff* CFGenKbRamGelSwitchTable::updateGelSwitch( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSwitchBuff* Buff )
	{
		static const std::string S_ProcName( "updateGelSwitch" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredGelCacheId( Buff->getRequiredGelCacheId() );
		pkey.setRequiredGelInstId( Buff->getRequiredGelInstId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GelSwitch for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGelSwitchBuff* existing = searchExisting->second;

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
				cfcore::CFGenKbGelInstructionBuff* chk = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( schema->getTableGelInstruction()->readDerivedByPIdx( Authorization,
						Buff->getRequiredTenantId(),
						Buff->getRequiredGelCacheId(),
						Buff->getRequiredGelInstId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Superclass relationship SuperClass to table GelInstruction" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		existing = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( schema->getTableGelInstruction()->updateGelInstruction( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSwitchBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSwitchBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGelSwitchBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitch( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGelSwitchBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGelSwitch" );
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
		cfcore::CFGenKbGelSwitchBuff* existing = searchExisting->second;
		schema->getTableGelSwitchLimb()->deleteGelSwitchLimbBySwitchIdx( Authorization,
			existing->getRequiredTenantId(),
			existing->getRequiredGelCacheId(),
			existing->getRequiredGelInstId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::CFGenKbGelSwitchBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		schema->getTableGelInstruction()->deleteGelInstruction( Authorization,
			Buff );
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId,
			const int64_t argGelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		key.setRequiredGelInstId( argGelInstId );
		deleteGelSwitchByPIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByPIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGelSwitchBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitch()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSwitch( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGelSwitchByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGelSwitchBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitch()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSwitch( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argGelCacheId )
	{
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredGelCacheId( argGelCacheId );
		deleteGelSwitchByGelCacheIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByGelCacheIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByGelCacheIdxKey* argKey )
	{
		cfcore::CFGenKbGelSwitchBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitch()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSwitch( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGelSwitchByChainIdx( Authorization, &key );
	}

	void CFGenKbRamGelSwitchTable::deleteGelSwitchByChainIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGelInstructionByChainIdxKey* argKey )
	{
		cfcore::CFGenKbGelSwitchBuff* cur = NULL;
		cfcore::CFGenKbGelSwitchBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*> matchSet;
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGelInstructionPKey,
			cfcore::CFGenKbGelSwitchBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGelSwitchBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGelSwitch()->readDerivedByPIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredGelCacheId(),
				cur->getRequiredGelInstId() );
			rereadCur = cur;
			deleteGelSwitch( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGelSwitchTable::releasePreparedStatements() {
	}

}
