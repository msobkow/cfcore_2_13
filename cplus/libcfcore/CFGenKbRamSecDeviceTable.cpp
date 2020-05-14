
// Description: C++18 Implementation for an in-memory RAM DbIO for SecDevice.

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

	const std::string CFGenKbRamSecDeviceTable::CLASS_NAME( "CFGenKbRamSecDeviceTable" );

	CFGenKbRamSecDeviceTable::CFGenKbRamSecDeviceTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecDeviceTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>();
		dictByNameIdx = new std::map<cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::CFGenKbSecDeviceBuff*>();
		dictByUserIdx = new std::map<cfcore::CFGenKbSecDeviceByUserIdxKey,
			std::map<cfcore::CFGenKbSecDevicePKey,
				cfcore::CFGenKbSecDeviceBuff*>*>();
	}

	CFGenKbRamSecDeviceTable::~CFGenKbRamSecDeviceTable() {
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByUserIdx != NULL ) {
			for( auto iterDict = dictByUserIdx->begin(); iterDict != dictByUserIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByUserIdx;
			dictByUserIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecDeviceBuff* elt;
			std::map<cfcore::CFGenKbSecDevicePKey,
				cfcore::CFGenKbSecDeviceBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecDevicePKey,
					cfcore::CFGenKbSecDeviceBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::createSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecDeviceBuff* Buff )
	{
		static const std::string S_ProcName( "createSecDevice" );
		cfcore::CFGenKbSecDevicePKey pkey;
		pkey.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		pkey.setRequiredDevName( Buff->getRequiredDevName() );
		Buff->setRequiredSecUserId( pkey.getRequiredSecUserId() );
		Buff->setRequiredDevName( pkey.getRequiredDevName() );
		cfcore::CFGenKbSecDeviceByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		keyNameIdx.setRequiredDevName( Buff->getRequiredDevName() );
		cfcore::CFGenKbSecDeviceByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SecDeviceNameIdx " + keyNameIdx.toString() );
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
				cfcore::CFGenKbSecUserBuff* chk = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredSecUserId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecDeviceSecUser to table SecUser" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecDeviceBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::CFGenKbSecDeviceBuff*>::value_type( keyNameIdx, buff ) );

		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>();
			dictByUserIdx->insert( std::map<cfcore::CFGenKbSecDeviceByUserIdxKey,
				std::map<cfcore::CFGenKbSecDevicePKey,
					cfcore::CFGenKbSecDeviceBuff*>*>::value_type( keyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDevicePKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecDeviceBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDevicePKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecDeviceBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> CFGenKbRamSecDeviceTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> retVec;
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecDeviceBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::CFGenKbSecDeviceBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> CFGenKbRamSecDeviceTable::readDerivedByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByUserIdx" );
		cfcore::CFGenKbSecDeviceByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> recVec;
		cfcore::CFGenKbSecDeviceBuff* clone;
		auto searchDictByUserIdx = dictByUserIdx->find( key );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfcore::CFGenKbSecDevicePKey,
				 cfcore::CFGenKbSecDeviceBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			std::map<cfcore::CFGenKbSecDevicePKey,
				cfcore::CFGenKbSecDeviceBuff*>::iterator iter = subdictUserIdx->begin();
			std::map<cfcore::CFGenKbSecDevicePKey,
				cfcore::CFGenKbSecDeviceBuff*>::iterator end = subdictUserIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecDevicePKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::CFGenKbSecDeviceBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDevicePKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecDeviceBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDevicePKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecDeviceBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> CFGenKbRamSecDeviceTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecDeviceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> CFGenKbRamSecDeviceTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecDeviceBuff* buff = readDerivedByIdIdx( Authorization,
			SecUserId,
			DevName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfcore::CFGenKbSecDeviceBuff* buff = readDerivedByNameIdx( Authorization,
			SecUserId,
			DevName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> CFGenKbRamSecDeviceTable::readBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByUserIdx" );
		cfcore::CFGenKbSecDeviceBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> buffList = readDerivedByUserIdx( Authorization,
			SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId, const std::string& DevName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfcore::CFGenKbSecDeviceBuff* buff = readBuffByNameIdx( Authorization,
			SecUserId,
			DevName );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId, const std::string& DevName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfcore::CFGenKbSecDeviceBuff* buff = readDerivedByNameIdx( Authorization,
			SecUserId,
			DevName );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> CFGenKbRamSecDeviceTable::pageBuffByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName )
	{
		static const std::string S_ProcName( "pageBuffByUserIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbRamSecDeviceTable::updateSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecDeviceBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecDevice" );
		cfcore::CFGenKbSecDevicePKey pkey;
		pkey.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		pkey.setRequiredDevName( Buff->getRequiredDevName() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecDevice for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecDeviceBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecDevice primary key " );
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
		cfcore::CFGenKbSecDeviceByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		existingKeyNameIdx.setRequiredDevName( existing->getRequiredDevName() );
		cfcore::CFGenKbSecDeviceByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		newKeyNameIdx.setRequiredDevName( Buff->getRequiredDevName() );
		cfcore::CFGenKbSecDeviceByUserIdxKey existingKeyUserIdx;
		existingKeyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecDeviceByUserIdxKey newKeyUserIdx;
		newKeyUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecDeviceNameIdx " + newKeyNameIdx.toString() );
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
				cfcore::CFGenKbSecUserBuff* chk = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredSecUserId() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Container relationship SecDeviceSecUser to table SecUser" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecDeviceBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::CFGenKbSecDeviceBuff*>::value_type( newKeyNameIdx, existing ) );

		std::map<cfcore::CFGenKbSecDevicePKey,
			 cfcore::CFGenKbSecDeviceBuff*>* subdictUserIdx;
		auto searchDictByUserIdx = dictByUserIdx->find( existingKeyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchDictByUserIdx->second;
			auto searchSubDict = subdictUserIdx->find( pkey );
			if( searchSubDict != subdictUserIdx->end() ) {
				subdictUserIdx->erase( searchSubDict );
			}
			if( subdictUserIdx->size() <= 0 ) {
				delete subdictUserIdx;
				dictByUserIdx->erase( searchDictByUserIdx );
			}
			subdictUserIdx = NULL;
		}
		auto searchNewKeyDictByUserIdx = dictByUserIdx->find( newKeyUserIdx );
		if( searchNewKeyDictByUserIdx != dictByUserIdx->end() ) {
			subdictUserIdx = searchNewKeyDictByUserIdx->second;
		}
		else {
			subdictUserIdx = new std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>();
			dictByUserIdx->insert( std::map<cfcore::CFGenKbSecDeviceByUserIdxKey,
				std::map<cfcore::CFGenKbSecDevicePKey,
					cfcore::CFGenKbSecDeviceBuff*>*>::value_type( newKeyUserIdx, subdictUserIdx ) );
		}
		subdictUserIdx->insert( std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecDeviceBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecDeviceTable::deleteSecDevice( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecDeviceBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecDevice" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecDevicePKey pkey;
		pkey.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		pkey.setRequiredDevName( Buff->getRequiredDevName() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecDeviceBuff* existing = searchExisting->second;
		cfcore::CFGenKbSecDeviceByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		keyNameIdx.setRequiredDevName( existing->getRequiredDevName() );
		cfcore::CFGenKbSecDeviceByUserIdxKey keyUserIdx;
		keyUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::CFGenKbSecDeviceBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( searchDictByNameIdx );
		}

		auto searchDictByUserIdx = dictByUserIdx->find( keyUserIdx );
		if( searchDictByUserIdx != dictByUserIdx->end() ) {
			std::map<cfcore::CFGenKbSecDevicePKey,
				 cfcore::CFGenKbSecDeviceBuff*>* subdictUserIdx = searchDictByUserIdx->second;
			auto searchSubDict = subdictUserIdx->find( pkey );
			if( searchSubDict != subdictUserIdx->end() ) {
				subdictUserIdx->erase( searchSubDict );
			}
			subdictUserIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamSecDeviceTable::deleteSecDeviceByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string& argDevName )
	{
		cfcore::CFGenKbSecDevicePKey key;
		key.setRequiredSecUserId( argSecUserId );
		key.setRequiredDevName( argDevName );
		deleteSecDeviceByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecDeviceTable::deleteSecDeviceByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDevicePKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecDeviceBuff* cur = NULL;
		cfcore::CFGenKbSecDeviceBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> matchSet;
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecDevice()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId(),
				cur->getRequiredDevName() );
			rereadCur = cur;
			deleteSecDevice( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecDeviceTable::deleteSecDeviceByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string& argDevName )
	{
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		key.setRequiredDevName( argDevName );
		deleteSecDeviceByNameIdx( Authorization, &key );
	}

	void CFGenKbRamSecDeviceTable::deleteSecDeviceByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDeviceByNameIdxKey* argKey )
	{
		cfcore::CFGenKbSecDeviceBuff* cur = NULL;
		cfcore::CFGenKbSecDeviceBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> matchSet;
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecDevice()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId(),
				cur->getRequiredDevName() );
			rereadCur = cur;
			deleteSecDevice( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecDeviceTable::deleteSecDeviceByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbSecDeviceByUserIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		deleteSecDeviceByUserIdx( Authorization, &key );
	}

	void CFGenKbRamSecDeviceTable::deleteSecDeviceByUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecDeviceByUserIdxKey* argKey )
	{
		cfcore::CFGenKbSecDeviceBuff* cur = NULL;
		cfcore::CFGenKbSecDeviceBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> matchSet;
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecDevicePKey,
			cfcore::CFGenKbSecDeviceBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecDevice()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId(),
				cur->getRequiredDevName() );
			rereadCur = cur;
			deleteSecDevice( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecDeviceTable::releasePreparedStatements() {
	}

}
