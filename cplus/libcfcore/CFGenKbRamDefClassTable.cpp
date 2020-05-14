
// Description: C++18 Implementation for an in-memory RAM DbIO for DefClass.

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

	const std::string CFGenKbRamDefClassTable::CLASS_NAME( "CFGenKbRamDefClassTable" );

	CFGenKbRamDefClassTable::CFGenKbRamDefClassTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbDefClassTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>();
		dictByNameIdx = new std::map<cfcore::CFGenKbDefClassByNameIdxKey, cfcore::CFGenKbDefClassBuff*>();
		dictByBaseIdx = new std::map<cfcore::CFGenKbDefClassByBaseIdxKey,
			std::map<cfcore::CFGenKbDefClassPKey,
				cfcore::CFGenKbDefClassBuff*>*>();
	}

	CFGenKbRamDefClassTable::~CFGenKbRamDefClassTable() {
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByBaseIdx != NULL ) {
			for( auto iterDict = dictByBaseIdx->begin(); iterDict != dictByBaseIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByBaseIdx;
			dictByBaseIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbDefClassBuff* elt;
			std::map<cfcore::CFGenKbDefClassPKey,
				cfcore::CFGenKbDefClassBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbDefClassPKey,
					cfcore::CFGenKbDefClassBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::createDefClass( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbDefClassBuff* Buff )
	{
		static const std::string S_ProcName( "createDefClass" );
		cfcore::CFGenKbDefClassPKey pkey;
		pkey.setRequiredId( schema->nextDefClassIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfcore::CFGenKbDefClassByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( Buff->getRequiredName() );
		cfcore::CFGenKbDefClassByBaseIdxKey keyBaseIdx;
		if( Buff->isOptionalBaseIdNull() ) {
			keyBaseIdx.setOptionalBaseIdNull();
		}
		else {
			keyBaseIdx.setOptionalBaseIdValue( Buff->getOptionalBaseIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index DefClassName " + keyNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbDefClassBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfcore::CFGenKbDefClassByNameIdxKey, cfcore::CFGenKbDefClassBuff*>::value_type( keyNameIdx, buff ) );

		std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>* subdictBaseIdx;
		auto searchDictByBaseIdx = dictByBaseIdx->find( keyBaseIdx );
		if( searchDictByBaseIdx != dictByBaseIdx->end() ) {
			subdictBaseIdx = searchDictByBaseIdx->second;
		}
		else {
			subdictBaseIdx = new std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>();
			dictByBaseIdx->insert( std::map<cfcore::CFGenKbDefClassByBaseIdxKey,
				std::map<cfcore::CFGenKbDefClassPKey,
					cfcore::CFGenKbDefClassBuff*>*>::value_type( keyBaseIdx, subdictBaseIdx ) );
		}
		subdictBaseIdx->insert( std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbDefClassBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbDefClassBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> CFGenKbRamDefClassTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> retVec;
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbDefClassBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::CFGenKbDefClassBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> CFGenKbRamDefClassTable::readDerivedByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* BaseId )
	{
		static const std::string S_ProcName( "readDerivedByBaseIdx" );
		cfcore::CFGenKbDefClassByBaseIdxKey key;
		if( BaseId == NULL ) {
			key.setOptionalBaseIdNull();
		}
		else {
			key.setOptionalBaseIdValue( *BaseId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> recVec;
		cfcore::CFGenKbDefClassBuff* clone;
		auto searchDictByBaseIdx = dictByBaseIdx->find( key );
		if( searchDictByBaseIdx != dictByBaseIdx->end() ) {
			std::map<cfcore::CFGenKbDefClassPKey,
				 cfcore::CFGenKbDefClassBuff*>* subdictBaseIdx = searchDictByBaseIdx->second;
			std::map<cfcore::CFGenKbDefClassPKey,
				cfcore::CFGenKbDefClassBuff*>::iterator iter = subdictBaseIdx->begin();
			std::map<cfcore::CFGenKbDefClassPKey,
				cfcore::CFGenKbDefClassBuff*>::iterator end = subdictBaseIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbDefClassPKey key;
		key.setRequiredId( Id );
		cfcore::CFGenKbDefClassBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbDefClassBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbDefClassBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> CFGenKbRamDefClassTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbDefClassBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbDefClassBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfcore::CFGenKbDefClassBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> CFGenKbRamDefClassTable::readBuffByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* BaseId )
	{
		static const std::string S_ProcName( "readBuffByBaseIdx" );
		cfcore::CFGenKbDefClassBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> buffList = readDerivedByBaseIdx( Authorization,
			BaseId );
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfcore::CFGenKbDefClassBuff* buff = readBuffByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfcore::CFGenKbDefClassBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbRamDefClassTable::updateDefClass( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbDefClassBuff* Buff )
	{
		static const std::string S_ProcName( "updateDefClass" );
		cfcore::CFGenKbDefClassPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in DefClass for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbDefClassBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for DefClass primary key " );
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
		cfcore::CFGenKbDefClassByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbDefClassByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		cfcore::CFGenKbDefClassByBaseIdxKey existingKeyBaseIdx;
		if( existing->isOptionalBaseIdNull() ) {
			existingKeyBaseIdx.setOptionalBaseIdNull();
		}
		else {
			existingKeyBaseIdx.setOptionalBaseIdValue( existing->getOptionalBaseIdValue() );
		}
		cfcore::CFGenKbDefClassByBaseIdxKey newKeyBaseIdx;
		if( Buff->isOptionalBaseIdNull() ) {
			newKeyBaseIdx.setOptionalBaseIdNull();
		}
		else {
			newKeyBaseIdx.setOptionalBaseIdValue( Buff->getOptionalBaseIdValue() );
		}
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index DefClassName " + newKeyNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbDefClassBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfcore::CFGenKbDefClassByNameIdxKey, cfcore::CFGenKbDefClassBuff*>::value_type( newKeyNameIdx, existing ) );

		std::map<cfcore::CFGenKbDefClassPKey,
			 cfcore::CFGenKbDefClassBuff*>* subdictBaseIdx;
		auto searchDictByBaseIdx = dictByBaseIdx->find( existingKeyBaseIdx );
		if( searchDictByBaseIdx != dictByBaseIdx->end() ) {
			subdictBaseIdx = searchDictByBaseIdx->second;
			auto searchSubDict = subdictBaseIdx->find( pkey );
			if( searchSubDict != subdictBaseIdx->end() ) {
				subdictBaseIdx->erase( searchSubDict );
			}
			if( subdictBaseIdx->size() <= 0 ) {
				delete subdictBaseIdx;
				dictByBaseIdx->erase( searchDictByBaseIdx );
			}
			subdictBaseIdx = NULL;
		}
		auto searchNewKeyDictByBaseIdx = dictByBaseIdx->find( newKeyBaseIdx );
		if( searchNewKeyDictByBaseIdx != dictByBaseIdx->end() ) {
			subdictBaseIdx = searchNewKeyDictByBaseIdx->second;
		}
		else {
			subdictBaseIdx = new std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>();
			dictByBaseIdx->insert( std::map<cfcore::CFGenKbDefClassByBaseIdxKey,
				std::map<cfcore::CFGenKbDefClassPKey,
					cfcore::CFGenKbDefClassBuff*>*>::value_type( newKeyBaseIdx, subdictBaseIdx ) );
		}
		subdictBaseIdx->insert( std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbDefClassBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamDefClassTable::deleteDefClass( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbDefClassBuff* Buff )
	{
		static const std::string S_ProcName( "deleteDefClass" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbDefClassPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbDefClassBuff* existing = searchExisting->second;
		cfcore::CFGenKbDefClassByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbDefClassByBaseIdxKey keyBaseIdx;
		if( existing->isOptionalBaseIdNull() ) {
			keyBaseIdx.setOptionalBaseIdNull();
		}
		else {
			keyBaseIdx.setOptionalBaseIdValue( existing->getOptionalBaseIdValue() );
		}
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> derivedByGenDefIdx = schema->getTableGenItem()->readDerivedByGenDefIdx( Authorization,
						existing->getRequiredId() );
		if( derivedByGenDefIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship GenDef from table GenItem for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfcore::CFGenKbDefClassPKey, cfcore::CFGenKbDefClassBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( searchDictByNameIdx );
		}

		auto searchDictByBaseIdx = dictByBaseIdx->find( keyBaseIdx );
		if( searchDictByBaseIdx != dictByBaseIdx->end() ) {
			std::map<cfcore::CFGenKbDefClassPKey,
				 cfcore::CFGenKbDefClassBuff*>* subdictBaseIdx = searchDictByBaseIdx->second;
			auto searchSubDict = subdictBaseIdx->find( pkey );
			if( searchSubDict != subdictBaseIdx->end() ) {
				subdictBaseIdx->erase( searchSubDict );
			}
			subdictBaseIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamDefClassTable::deleteDefClassByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId )
	{
		cfcore::CFGenKbDefClassPKey key;
		key.setRequiredId( argId );
		deleteDefClassByIdIdx( Authorization, &key );
	}

	void CFGenKbRamDefClassTable::deleteDefClassByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbDefClassBuff* cur = NULL;
		cfcore::CFGenKbDefClassBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> matchSet;
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDefClass()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDefClass( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamDefClassTable::deleteDefClassByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName )
	{
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( argName );
		deleteDefClassByNameIdx( Authorization, &key );
	}

	void CFGenKbRamDefClassTable::deleteDefClassByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassByNameIdxKey* argKey )
	{
		cfcore::CFGenKbDefClassBuff* cur = NULL;
		cfcore::CFGenKbDefClassBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> matchSet;
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDefClass()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDefClass( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamDefClassTable::deleteDefClassByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argBaseId )
	{
		cfcore::CFGenKbDefClassByBaseIdxKey key;
		if( argBaseId == NULL ) {
			key.setOptionalBaseIdNull();
		}
		else {
			key.setOptionalBaseIdValue( *argBaseId );
		}
		deleteDefClassByBaseIdx( Authorization, &key );
	}

	void CFGenKbRamDefClassTable::deleteDefClassByBaseIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbDefClassByBaseIdxKey* argKey )
	{
		cfcore::CFGenKbDefClassBuff* cur = NULL;
		cfcore::CFGenKbDefClassBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalBaseIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> matchSet;
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbDefClassPKey,
			cfcore::CFGenKbDefClassBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableDefClass()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteDefClass( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamDefClassTable::releasePreparedStatements() {
	}

}
