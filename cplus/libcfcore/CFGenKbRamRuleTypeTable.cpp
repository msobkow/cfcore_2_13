
// Description: C++18 Implementation for an in-memory RAM DbIO for RuleType.

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

	const std::string CFGenKbRamRuleTypeTable::CLASS_NAME( "CFGenKbRamRuleTypeTable" );

	CFGenKbRamRuleTypeTable::CFGenKbRamRuleTypeTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbRuleTypeTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbRuleTypePKey, cfcore::CFGenKbRuleTypeBuff*>();
		dictByNameIdx = new std::map<cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::CFGenKbRuleTypeBuff*>();
	}

	CFGenKbRamRuleTypeTable::~CFGenKbRamRuleTypeTable() {
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbRuleTypeBuff* elt;
			std::map<cfcore::CFGenKbRuleTypePKey,
				cfcore::CFGenKbRuleTypeBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbRuleTypePKey,
					cfcore::CFGenKbRuleTypeBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::createRuleType( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbRuleTypeBuff* Buff )
	{
		static const std::string S_ProcName( "createRuleType" );
		cfcore::CFGenKbRuleTypePKey pkey;
		pkey.setRequiredId( schema->nextRuleTypeIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfcore::CFGenKbRuleTypeByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index RuleTypeName " + keyNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbRuleTypeBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbRuleTypePKey, cfcore::CFGenKbRuleTypeBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::CFGenKbRuleTypeBuff*>::value_type( keyNameIdx, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbRuleTypePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbRuleTypeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbRuleTypePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbRuleTypeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> CFGenKbRamRuleTypeTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> retVec;
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbRuleTypeBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::CFGenKbRuleTypeBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbRuleTypePKey key;
		key.setRequiredId( Id );
		cfcore::CFGenKbRuleTypeBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbRuleTypePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbRuleTypeBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff ) );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbRuleTypePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbRuleTypeBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> CFGenKbRamRuleTypeTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbRuleTypeBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbRuleTypeBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfcore::CFGenKbRuleTypeBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfcore::CFGenKbRuleTypeBuff* buff = readBuffByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfcore::CFGenKbRuleTypeBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRamRuleTypeTable::updateRuleType( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbRuleTypeBuff* Buff )
	{
		static const std::string S_ProcName( "updateRuleType" );
		cfcore::CFGenKbRuleTypePKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in RuleType for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbRuleTypeBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for RuleType primary key " );
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
		cfcore::CFGenKbRuleTypeByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbRuleTypeByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index RuleTypeName " + newKeyNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfcore::CFGenKbRuleTypePKey, cfcore::CFGenKbRuleTypeBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbRuleTypeBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbRuleTypePKey, cfcore::CFGenKbRuleTypeBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::CFGenKbRuleTypeBuff*>::value_type( newKeyNameIdx, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbRuleTypeBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamRuleTypeTable::deleteRuleType( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbRuleTypeBuff* Buff )
	{
		static const std::string S_ProcName( "deleteRuleType" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbRuleTypePKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbRuleTypeBuff* existing = searchExisting->second;
		cfcore::CFGenKbRuleTypeByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> derivedByRuleTypeIdx = schema->getTableGenItem()->readDerivedByRuleTypeIdx( Authorization,
						existing->getRequiredId() );
		if( derivedByRuleTypeIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship RuleType from table GenItem for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfcore::CFGenKbRuleTypePKey, cfcore::CFGenKbRuleTypeBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( searchDictByNameIdx );
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamRuleTypeTable::deleteRuleTypeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId )
	{
		cfcore::CFGenKbRuleTypePKey key;
		key.setRequiredId( argId );
		deleteRuleTypeByIdIdx( Authorization, &key );
	}

	void CFGenKbRamRuleTypeTable::deleteRuleTypeByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbRuleTypePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbRuleTypeBuff* cur = NULL;
		cfcore::CFGenKbRuleTypeBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> matchSet;
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRuleType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRuleType( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamRuleTypeTable::deleteRuleTypeByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName )
	{
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( argName );
		deleteRuleTypeByNameIdx( Authorization, &key );
	}

	void CFGenKbRamRuleTypeTable::deleteRuleTypeByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbRuleTypeByNameIdxKey* argKey )
	{
		cfcore::CFGenKbRuleTypeBuff* cur = NULL;
		cfcore::CFGenKbRuleTypeBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> matchSet;
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbRuleTypePKey,
			cfcore::CFGenKbRuleTypeBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableRuleType()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteRuleType( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamRuleTypeTable::releasePreparedStatements() {
	}

}
