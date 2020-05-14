
// Description: C++18 Implementation for an in-memory RAM DbIO for Tool.

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

	const std::string CFGenKbRamToolTable::CLASS_NAME( "CFGenKbRamToolTable" );

	CFGenKbRamToolTable::CFGenKbRamToolTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbToolTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>();
		dictByNameIdx = new std::map<cfcore::CFGenKbToolByNameIdxKey, cfcore::CFGenKbToolBuff*>();
		dictByReplacesIdx = new std::map<cfcore::CFGenKbToolByReplacesIdxKey,
			std::map<cfcore::CFGenKbToolPKey,
				cfcore::CFGenKbToolBuff*>*>();
	}

	CFGenKbRamToolTable::~CFGenKbRamToolTable() {
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByReplacesIdx != NULL ) {
			for( auto iterDict = dictByReplacesIdx->begin(); iterDict != dictByReplacesIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByReplacesIdx;
			dictByReplacesIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbToolBuff* elt;
			std::map<cfcore::CFGenKbToolPKey,
				cfcore::CFGenKbToolBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbToolPKey,
					cfcore::CFGenKbToolBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::createTool( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbToolBuff* Buff )
	{
		static const std::string S_ProcName( "createTool" );
		cfcore::CFGenKbToolPKey pkey;
		pkey.setRequiredId( schema->nextToolIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfcore::CFGenKbToolByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( Buff->getRequiredName() );
		cfcore::CFGenKbToolByReplacesIdxKey keyReplacesIdx;
		if( Buff->isOptionalReplacesIdNull() ) {
			keyReplacesIdx.setOptionalReplacesIdNull();
		}
		else {
			keyReplacesIdx.setOptionalReplacesIdValue( Buff->getOptionalReplacesIdValue() );
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
			std::string Msg( "Duplicate key detected for index ToolName " + keyNameIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbToolBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfcore::CFGenKbToolByNameIdxKey, cfcore::CFGenKbToolBuff*>::value_type( keyNameIdx, buff ) );

		std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>* subdictReplacesIdx;
		auto searchDictByReplacesIdx = dictByReplacesIdx->find( keyReplacesIdx );
		if( searchDictByReplacesIdx != dictByReplacesIdx->end() ) {
			subdictReplacesIdx = searchDictByReplacesIdx->second;
		}
		else {
			subdictReplacesIdx = new std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>();
			dictByReplacesIdx->insert( std::map<cfcore::CFGenKbToolByReplacesIdxKey,
				std::map<cfcore::CFGenKbToolPKey,
					cfcore::CFGenKbToolBuff*>*>::value_type( keyReplacesIdx, subdictReplacesIdx ) );
		}
		subdictReplacesIdx->insert( std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbToolBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbToolBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> CFGenKbRamToolTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> retVec;
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbToolBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbToolBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::CFGenKbToolBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> CFGenKbRamToolTable::readDerivedByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ReplacesId )
	{
		static const std::string S_ProcName( "readDerivedByReplacesIdx" );
		cfcore::CFGenKbToolByReplacesIdxKey key;
		if( ReplacesId == NULL ) {
			key.setOptionalReplacesIdNull();
		}
		else {
			key.setOptionalReplacesIdValue( *ReplacesId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> recVec;
		cfcore::CFGenKbToolBuff* clone;
		auto searchDictByReplacesIdx = dictByReplacesIdx->find( key );
		if( searchDictByReplacesIdx != dictByReplacesIdx->end() ) {
			std::map<cfcore::CFGenKbToolPKey,
				 cfcore::CFGenKbToolBuff*>* subdictReplacesIdx = searchDictByReplacesIdx->second;
			std::map<cfcore::CFGenKbToolPKey,
				cfcore::CFGenKbToolBuff*>::iterator iter = subdictReplacesIdx->begin();
			std::map<cfcore::CFGenKbToolPKey,
				cfcore::CFGenKbToolBuff*>::iterator end = subdictReplacesIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbToolPKey key;
		key.setRequiredId( Id );
		cfcore::CFGenKbToolBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbToolBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbToolBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff ) );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbToolBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> CFGenKbRamToolTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbToolBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbToolBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfcore::CFGenKbToolBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> CFGenKbRamToolTable::readBuffByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ReplacesId )
	{
		static const std::string S_ProcName( "readBuffByReplacesIdx" );
		cfcore::CFGenKbToolBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> buffList = readDerivedByReplacesIdx( Authorization,
			ReplacesId );
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfcore::CFGenKbToolBuff* buff = readBuffByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfcore::CFGenKbToolBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbToolBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbToolBuff* CFGenKbRamToolTable::updateTool( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbToolBuff* Buff )
	{
		static const std::string S_ProcName( "updateTool" );
		cfcore::CFGenKbToolPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in Tool for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbToolBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for Tool primary key " );
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
		cfcore::CFGenKbToolByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbToolByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		cfcore::CFGenKbToolByReplacesIdxKey existingKeyReplacesIdx;
		if( existing->isOptionalReplacesIdNull() ) {
			existingKeyReplacesIdx.setOptionalReplacesIdNull();
		}
		else {
			existingKeyReplacesIdx.setOptionalReplacesIdValue( existing->getOptionalReplacesIdValue() );
		}
		cfcore::CFGenKbToolByReplacesIdxKey newKeyReplacesIdx;
		if( Buff->isOptionalReplacesIdNull() ) {
			newKeyReplacesIdx.setOptionalReplacesIdNull();
		}
		else {
			newKeyReplacesIdx.setOptionalReplacesIdValue( Buff->getOptionalReplacesIdValue() );
		}
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ToolName " + newKeyNameIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbToolBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfcore::CFGenKbToolByNameIdxKey, cfcore::CFGenKbToolBuff*>::value_type( newKeyNameIdx, existing ) );

		std::map<cfcore::CFGenKbToolPKey,
			 cfcore::CFGenKbToolBuff*>* subdictReplacesIdx;
		auto searchDictByReplacesIdx = dictByReplacesIdx->find( existingKeyReplacesIdx );
		if( searchDictByReplacesIdx != dictByReplacesIdx->end() ) {
			subdictReplacesIdx = searchDictByReplacesIdx->second;
			auto searchSubDict = subdictReplacesIdx->find( pkey );
			if( searchSubDict != subdictReplacesIdx->end() ) {
				subdictReplacesIdx->erase( searchSubDict );
			}
			if( subdictReplacesIdx->size() <= 0 ) {
				delete subdictReplacesIdx;
				dictByReplacesIdx->erase( searchDictByReplacesIdx );
			}
			subdictReplacesIdx = NULL;
		}
		auto searchNewKeyDictByReplacesIdx = dictByReplacesIdx->find( newKeyReplacesIdx );
		if( searchNewKeyDictByReplacesIdx != dictByReplacesIdx->end() ) {
			subdictReplacesIdx = searchNewKeyDictByReplacesIdx->second;
		}
		else {
			subdictReplacesIdx = new std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>();
			dictByReplacesIdx->insert( std::map<cfcore::CFGenKbToolByReplacesIdxKey,
				std::map<cfcore::CFGenKbToolPKey,
					cfcore::CFGenKbToolBuff*>*>::value_type( newKeyReplacesIdx, subdictReplacesIdx ) );
		}
		subdictReplacesIdx->insert( std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbToolBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamToolTable::deleteTool( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbToolBuff* Buff )
	{
		static const std::string S_ProcName( "deleteTool" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbToolPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbToolBuff* existing = searchExisting->second;
		cfcore::CFGenKbToolByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbToolByReplacesIdxKey keyReplacesIdx;
		if( existing->isOptionalReplacesIdNull() ) {
			keyReplacesIdx.setOptionalReplacesIdNull();
		}
		else {
			keyReplacesIdx.setOptionalReplacesIdValue( existing->getOptionalReplacesIdValue() );
		}
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> derivedByTool0Idx = schema->getTableToolSet()->readDerivedByTool0Idx( Authorization,
						existing->getRequiredId() );
		if( derivedByTool0Idx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship Tool0 from table ToolSet for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfcore::CFGenKbToolPKey, cfcore::CFGenKbToolBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( searchDictByNameIdx );
		}

		auto searchDictByReplacesIdx = dictByReplacesIdx->find( keyReplacesIdx );
		if( searchDictByReplacesIdx != dictByReplacesIdx->end() ) {
			std::map<cfcore::CFGenKbToolPKey,
				 cfcore::CFGenKbToolBuff*>* subdictReplacesIdx = searchDictByReplacesIdx->second;
			auto searchSubDict = subdictReplacesIdx->find( pkey );
			if( searchSubDict != subdictReplacesIdx->end() ) {
				subdictReplacesIdx->erase( searchSubDict );
			}
			subdictReplacesIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamToolTable::deleteToolByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId )
	{
		cfcore::CFGenKbToolPKey key;
		key.setRequiredId( argId );
		deleteToolByIdIdx( Authorization, &key );
	}

	void CFGenKbRamToolTable::deleteToolByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbToolBuff* cur = NULL;
		cfcore::CFGenKbToolBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> matchSet;
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTool()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTool( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamToolTable::deleteToolByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName )
	{
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( argName );
		deleteToolByNameIdx( Authorization, &key );
	}

	void CFGenKbRamToolTable::deleteToolByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolByNameIdxKey* argKey )
	{
		cfcore::CFGenKbToolBuff* cur = NULL;
		cfcore::CFGenKbToolBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> matchSet;
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTool()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTool( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolTable::deleteToolByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argReplacesId )
	{
		cfcore::CFGenKbToolByReplacesIdxKey key;
		if( argReplacesId == NULL ) {
			key.setOptionalReplacesIdNull();
		}
		else {
			key.setOptionalReplacesIdValue( *argReplacesId );
		}
		deleteToolByReplacesIdx( Authorization, &key );
	}

	void CFGenKbRamToolTable::deleteToolByReplacesIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolByReplacesIdxKey* argKey )
	{
		cfcore::CFGenKbToolBuff* cur = NULL;
		cfcore::CFGenKbToolBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalReplacesIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> matchSet;
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolPKey,
			cfcore::CFGenKbToolBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableTool()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteTool( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolTable::releasePreparedStatements() {
	}

}
