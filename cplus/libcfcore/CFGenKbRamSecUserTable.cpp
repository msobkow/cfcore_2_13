
// Description: C++18 Implementation for an in-memory RAM DbIO for SecUser.

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

	const std::string CFGenKbRamSecUserTable::CLASS_NAME( "CFGenKbRamSecUserTable" );

	CFGenKbRamSecUserTable::CFGenKbRamSecUserTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecUserTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
		dictByULoginIdx = new std::map<cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::CFGenKbSecUserBuff*>();
		dictByEMConfIdx = new std::map<cfcore::CFGenKbSecUserByEMConfIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>*>();
		dictByPwdResetIdx = new std::map<cfcore::CFGenKbSecUserByPwdResetIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>*>();
		dictByDefDevIdx = new std::map<cfcore::CFGenKbSecUserByDefDevIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>*>();
	}

	CFGenKbRamSecUserTable::~CFGenKbRamSecUserTable() {
		if( dictByULoginIdx != NULL ) {
			delete dictByULoginIdx;
			dictByULoginIdx = NULL;
		}
		if( dictByEMConfIdx != NULL ) {
			for( auto iterDict = dictByEMConfIdx->begin(); iterDict != dictByEMConfIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByEMConfIdx;
			dictByEMConfIdx = NULL;
		}
		if( dictByPwdResetIdx != NULL ) {
			for( auto iterDict = dictByPwdResetIdx->begin(); iterDict != dictByPwdResetIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByPwdResetIdx;
			dictByPwdResetIdx = NULL;
		}
		if( dictByDefDevIdx != NULL ) {
			for( auto iterDict = dictByDefDevIdx->begin(); iterDict != dictByDefDevIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByDefDevIdx;
			dictByDefDevIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecUserBuff* elt;
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::createSecUser( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecUserBuff* Buff )
	{
		static const std::string S_ProcName( "createSecUser" );
		cfcore::CFGenKbSecUserPKey pkey;
		pkey.generateRequiredSecUserId();
		Buff->setRequiredSecUserId( pkey.getRequiredSecUserId() );
		cfcore::CFGenKbSecUserByULoginIdxKey keyULoginIdx;
		keyULoginIdx.setRequiredLoginId( Buff->getRequiredLoginId() );
		cfcore::CFGenKbSecUserByEMConfIdxKey keyEMConfIdx;
		if( Buff->isOptionalEMailConfirmUuidNull() ) {
			keyEMConfIdx.setOptionalEMailConfirmUuidNull();
		}
		else {
			keyEMConfIdx.setOptionalEMailConfirmUuidValue( Buff->getOptionalEMailConfirmUuidValue() );
		}
		cfcore::CFGenKbSecUserByPwdResetIdxKey keyPwdResetIdx;
		if( Buff->isOptionalPasswordResetUuidNull() ) {
			keyPwdResetIdx.setOptionalPasswordResetUuidNull();
		}
		else {
			keyPwdResetIdx.setOptionalPasswordResetUuidValue( Buff->getOptionalPasswordResetUuidValue() );
		}
		cfcore::CFGenKbSecUserByDefDevIdxKey keyDefDevIdx;
		if( Buff->isOptionalDfltDevUserIdNull() ) {
			keyDefDevIdx.setOptionalDfltDevUserIdNull();
		}
		else {
			keyDefDevIdx.setOptionalDfltDevUserIdValue( Buff->getOptionalDfltDevUserIdValue() );
		}
		if( Buff->isOptionalDfltDevNameNull() ) {
			keyDefDevIdx.setOptionalDfltDevNameNull();
		}
		else {
			keyDefDevIdx.setOptionalDfltDevNameValue( Buff->getOptionalDfltDevNameValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByULoginIdx = dictByULoginIdx->find( keyULoginIdx );
		if( searchDictByULoginIdx != dictByULoginIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SecUserLoginIdx " + keyULoginIdx.toString() );
			delete Buff;
			throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbSecUserBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, buff ) );

		dictByULoginIdx->insert( std::map<cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::CFGenKbSecUserBuff*>::value_type( keyULoginIdx, buff ) );

		std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>* subdictEMConfIdx;
		auto searchDictByEMConfIdx = dictByEMConfIdx->find( keyEMConfIdx );
		if( searchDictByEMConfIdx != dictByEMConfIdx->end() ) {
			subdictEMConfIdx = searchDictByEMConfIdx->second;
		}
		else {
			subdictEMConfIdx = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
			dictByEMConfIdx->insert( std::map<cfcore::CFGenKbSecUserByEMConfIdxKey,
				std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>*>::value_type( keyEMConfIdx, subdictEMConfIdx ) );
		}
		subdictEMConfIdx->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>* subdictPwdResetIdx;
		auto searchDictByPwdResetIdx = dictByPwdResetIdx->find( keyPwdResetIdx );
		if( searchDictByPwdResetIdx != dictByPwdResetIdx->end() ) {
			subdictPwdResetIdx = searchDictByPwdResetIdx->second;
		}
		else {
			subdictPwdResetIdx = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
			dictByPwdResetIdx->insert( std::map<cfcore::CFGenKbSecUserByPwdResetIdxKey,
				std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>*>::value_type( keyPwdResetIdx, subdictPwdResetIdx ) );
		}
		subdictPwdResetIdx->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>* subdictDefDevIdx;
		auto searchDictByDefDevIdx = dictByDefDevIdx->find( keyDefDevIdx );
		if( searchDictByDefDevIdx != dictByDefDevIdx->end() ) {
			subdictDefDevIdx = searchDictByDefDevIdx->second;
		}
		else {
			subdictDefDevIdx = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
			dictByDefDevIdx->insert( std::map<cfcore::CFGenKbSecUserByDefDevIdxKey,
				std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>*>::value_type( keyDefDevIdx, subdictDefDevIdx ) );
		}
		subdictDefDevIdx->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecUserBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecUserBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> retVec;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecUserBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readDerivedByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& LoginId )
	{
		static const std::string S_ProcName( "readDerivedByULoginIdx" );
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfcore::CFGenKbSecUserBuff* buff;
		auto searchDictByULoginIdx = dictByULoginIdx->find( key );
		if( searchDictByULoginIdx != dictByULoginIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( searchDictByULoginIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readDerivedByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid )
	{
		static const std::string S_ProcName( "readDerivedByEMConfIdx" );
		cfcore::CFGenKbSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> recVec;
		cfcore::CFGenKbSecUserBuff* clone;
		auto searchDictByEMConfIdx = dictByEMConfIdx->find( key );
		if( searchDictByEMConfIdx != dictByEMConfIdx->end() ) {
			std::map<cfcore::CFGenKbSecUserPKey,
				 cfcore::CFGenKbSecUserBuff*>* subdictEMConfIdx = searchDictByEMConfIdx->second;
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator iter = subdictEMConfIdx->begin();
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator end = subdictEMConfIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readDerivedByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid )
	{
		static const std::string S_ProcName( "readDerivedByPwdResetIdx" );
		cfcore::CFGenKbSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> recVec;
		cfcore::CFGenKbSecUserBuff* clone;
		auto searchDictByPwdResetIdx = dictByPwdResetIdx->find( key );
		if( searchDictByPwdResetIdx != dictByPwdResetIdx->end() ) {
			std::map<cfcore::CFGenKbSecUserPKey,
				 cfcore::CFGenKbSecUserBuff*>* subdictPwdResetIdx = searchDictByPwdResetIdx->second;
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator iter = subdictPwdResetIdx->begin();
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator end = subdictPwdResetIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readDerivedByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName )
	{
		static const std::string S_ProcName( "readDerivedByDefDevIdx" );
		cfcore::CFGenKbSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> recVec;
		cfcore::CFGenKbSecUserBuff* clone;
		auto searchDictByDefDevIdx = dictByDefDevIdx->find( key );
		if( searchDictByDefDevIdx != dictByDefDevIdx->end() ) {
			std::map<cfcore::CFGenKbSecUserPKey,
				 cfcore::CFGenKbSecUserBuff*>* subdictDefDevIdx = searchDictByDefDevIdx->second;
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator iter = subdictDefDevIdx->begin();
			std::map<cfcore::CFGenKbSecUserPKey,
				cfcore::CFGenKbSecUserBuff*>::iterator end = subdictDefDevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecUserPKey key;
		key.setRequiredSecUserId( SecUserId );
		cfcore::CFGenKbSecUserBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecUserBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecUserBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecUserBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecUserBuff* buff = readDerivedByIdIdx( Authorization,
			SecUserId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readBuffByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& LoginId )
	{
		static const std::string S_ProcName( "readBuffByULoginIdx" );
		cfcore::CFGenKbSecUserBuff* buff = readDerivedByULoginIdx( Authorization,
			LoginId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readBuffByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid )
	{
		static const std::string S_ProcName( "readBuffByEMConfIdx" );
		cfcore::CFGenKbSecUserBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = readDerivedByEMConfIdx( Authorization,
			EMailConfirmUuid );
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readBuffByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid )
	{
		static const std::string S_ProcName( "readBuffByPwdResetIdx" );
		cfcore::CFGenKbSecUserBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = readDerivedByPwdResetIdx( Authorization,
			PasswordResetUuid );
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::readBuffByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName )
	{
		static const std::string S_ProcName( "readBuffByDefDevIdx" );
		cfcore::CFGenKbSecUserBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = readDerivedByDefDevIdx( Authorization,
			DfltDevUserId,
			DfltDevName );
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readBuffByLookupULoginIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& LoginId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupULoginIdx" );
		cfcore::CFGenKbSecUserBuff* buff = readBuffByULoginIdx( Authorization,
			LoginId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::readDerivedByLookupULoginIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& LoginId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupULoginIdx" );
		cfcore::CFGenKbSecUserBuff* buff = readDerivedByULoginIdx( Authorization,
			LoginId );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::pageBuffByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t EMailConfirmUuid,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageBuffByEMConfIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::pageBuffByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t PasswordResetUuid,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageBuffByPwdResetIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> CFGenKbRamSecUserTable::pageBuffByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageBuffByDefDevIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbRamSecUserTable::updateSecUser( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecUserBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecUser" );
		cfcore::CFGenKbSecUserPKey pkey;
		pkey.setRequiredSecUserId( Buff->getRequiredSecUserId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecUser for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecUserBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecUser primary key " );
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
		cfcore::CFGenKbSecUserByULoginIdxKey existingKeyULoginIdx;
		existingKeyULoginIdx.setRequiredLoginId( existing->getRequiredLoginId() );
		cfcore::CFGenKbSecUserByULoginIdxKey newKeyULoginIdx;
		newKeyULoginIdx.setRequiredLoginId( Buff->getRequiredLoginId() );
		cfcore::CFGenKbSecUserByEMConfIdxKey existingKeyEMConfIdx;
		if( existing->isOptionalEMailConfirmUuidNull() ) {
			existingKeyEMConfIdx.setOptionalEMailConfirmUuidNull();
		}
		else {
			existingKeyEMConfIdx.setOptionalEMailConfirmUuidValue( existing->getOptionalEMailConfirmUuidValue() );
		}
		cfcore::CFGenKbSecUserByEMConfIdxKey newKeyEMConfIdx;
		if( Buff->isOptionalEMailConfirmUuidNull() ) {
			newKeyEMConfIdx.setOptionalEMailConfirmUuidNull();
		}
		else {
			newKeyEMConfIdx.setOptionalEMailConfirmUuidValue( Buff->getOptionalEMailConfirmUuidValue() );
		}
		cfcore::CFGenKbSecUserByPwdResetIdxKey existingKeyPwdResetIdx;
		if( existing->isOptionalPasswordResetUuidNull() ) {
			existingKeyPwdResetIdx.setOptionalPasswordResetUuidNull();
		}
		else {
			existingKeyPwdResetIdx.setOptionalPasswordResetUuidValue( existing->getOptionalPasswordResetUuidValue() );
		}
		cfcore::CFGenKbSecUserByPwdResetIdxKey newKeyPwdResetIdx;
		if( Buff->isOptionalPasswordResetUuidNull() ) {
			newKeyPwdResetIdx.setOptionalPasswordResetUuidNull();
		}
		else {
			newKeyPwdResetIdx.setOptionalPasswordResetUuidValue( Buff->getOptionalPasswordResetUuidValue() );
		}
		cfcore::CFGenKbSecUserByDefDevIdxKey existingKeyDefDevIdx;
		if( existing->isOptionalDfltDevUserIdNull() ) {
			existingKeyDefDevIdx.setOptionalDfltDevUserIdNull();
		}
		else {
			existingKeyDefDevIdx.setOptionalDfltDevUserIdValue( existing->getOptionalDfltDevUserIdValue() );
		}
		if( existing->isOptionalDfltDevNameNull() ) {
			existingKeyDefDevIdx.setOptionalDfltDevNameNull();
		}
		else {
			existingKeyDefDevIdx.setOptionalDfltDevNameValue( existing->getOptionalDfltDevNameValue() );
		}
		cfcore::CFGenKbSecUserByDefDevIdxKey newKeyDefDevIdx;
		if( Buff->isOptionalDfltDevUserIdNull() ) {
			newKeyDefDevIdx.setOptionalDfltDevUserIdNull();
		}
		else {
			newKeyDefDevIdx.setOptionalDfltDevUserIdValue( Buff->getOptionalDfltDevUserIdValue() );
		}
		if( Buff->isOptionalDfltDevNameNull() ) {
			newKeyDefDevIdx.setOptionalDfltDevNameNull();
		}
		else {
			newKeyDefDevIdx.setOptionalDfltDevNameValue( Buff->getOptionalDfltDevNameValue() );
		}
		// Check unique indexes

		if( existingKeyULoginIdx != newKeyULoginIdx ) {
			auto searchDictByULoginIdx = dictByULoginIdx->find( newKeyULoginIdx );
			if( searchDictByULoginIdx != dictByULoginIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SecUserLoginIdx " + newKeyULoginIdx.toString() );
				delete Buff;
				throw cflib::CFLibUniqueIndexViolationException( CLASS_NAME,
					S_ProcName,
					Msg );
			}
		}

		// Validate foreign keys

		// Update is valid
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecUserBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, existing ) );

		auto removalDictByULoginIdx = dictByULoginIdx->find( existingKeyULoginIdx );
		if( removalDictByULoginIdx != dictByULoginIdx->end() ) {
			dictByULoginIdx->erase( removalDictByULoginIdx );
		}
		dictByULoginIdx->insert( std::map<cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::CFGenKbSecUserBuff*>::value_type( newKeyULoginIdx, existing ) );

		std::map<cfcore::CFGenKbSecUserPKey,
			 cfcore::CFGenKbSecUserBuff*>* subdictEMConfIdx;
		auto searchDictByEMConfIdx = dictByEMConfIdx->find( existingKeyEMConfIdx );
		if( searchDictByEMConfIdx != dictByEMConfIdx->end() ) {
			subdictEMConfIdx = searchDictByEMConfIdx->second;
			auto searchSubDict = subdictEMConfIdx->find( pkey );
			if( searchSubDict != subdictEMConfIdx->end() ) {
				subdictEMConfIdx->erase( searchSubDict );
			}
			if( subdictEMConfIdx->size() <= 0 ) {
				delete subdictEMConfIdx;
				dictByEMConfIdx->erase( searchDictByEMConfIdx );
			}
			subdictEMConfIdx = NULL;
		}
		auto searchNewKeyDictByEMConfIdx = dictByEMConfIdx->find( newKeyEMConfIdx );
		if( searchNewKeyDictByEMConfIdx != dictByEMConfIdx->end() ) {
			subdictEMConfIdx = searchNewKeyDictByEMConfIdx->second;
		}
		else {
			subdictEMConfIdx = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
			dictByEMConfIdx->insert( std::map<cfcore::CFGenKbSecUserByEMConfIdxKey,
				std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>*>::value_type( newKeyEMConfIdx, subdictEMConfIdx ) );
		}
		subdictEMConfIdx->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecUserPKey,
			 cfcore::CFGenKbSecUserBuff*>* subdictPwdResetIdx;
		auto searchDictByPwdResetIdx = dictByPwdResetIdx->find( existingKeyPwdResetIdx );
		if( searchDictByPwdResetIdx != dictByPwdResetIdx->end() ) {
			subdictPwdResetIdx = searchDictByPwdResetIdx->second;
			auto searchSubDict = subdictPwdResetIdx->find( pkey );
			if( searchSubDict != subdictPwdResetIdx->end() ) {
				subdictPwdResetIdx->erase( searchSubDict );
			}
			if( subdictPwdResetIdx->size() <= 0 ) {
				delete subdictPwdResetIdx;
				dictByPwdResetIdx->erase( searchDictByPwdResetIdx );
			}
			subdictPwdResetIdx = NULL;
		}
		auto searchNewKeyDictByPwdResetIdx = dictByPwdResetIdx->find( newKeyPwdResetIdx );
		if( searchNewKeyDictByPwdResetIdx != dictByPwdResetIdx->end() ) {
			subdictPwdResetIdx = searchNewKeyDictByPwdResetIdx->second;
		}
		else {
			subdictPwdResetIdx = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
			dictByPwdResetIdx->insert( std::map<cfcore::CFGenKbSecUserByPwdResetIdxKey,
				std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>*>::value_type( newKeyPwdResetIdx, subdictPwdResetIdx ) );
		}
		subdictPwdResetIdx->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecUserPKey,
			 cfcore::CFGenKbSecUserBuff*>* subdictDefDevIdx;
		auto searchDictByDefDevIdx = dictByDefDevIdx->find( existingKeyDefDevIdx );
		if( searchDictByDefDevIdx != dictByDefDevIdx->end() ) {
			subdictDefDevIdx = searchDictByDefDevIdx->second;
			auto searchSubDict = subdictDefDevIdx->find( pkey );
			if( searchSubDict != subdictDefDevIdx->end() ) {
				subdictDefDevIdx->erase( searchSubDict );
			}
			if( subdictDefDevIdx->size() <= 0 ) {
				delete subdictDefDevIdx;
				dictByDefDevIdx->erase( searchDictByDefDevIdx );
			}
			subdictDefDevIdx = NULL;
		}
		auto searchNewKeyDictByDefDevIdx = dictByDefDevIdx->find( newKeyDefDevIdx );
		if( searchNewKeyDictByDefDevIdx != dictByDefDevIdx->end() ) {
			subdictDefDevIdx = searchNewKeyDictByDefDevIdx->second;
		}
		else {
			subdictDefDevIdx = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>();
			dictByDefDevIdx->insert( std::map<cfcore::CFGenKbSecUserByDefDevIdxKey,
				std::map<cfcore::CFGenKbSecUserPKey,
					cfcore::CFGenKbSecUserBuff*>*>::value_type( newKeyDefDevIdx, subdictDefDevIdx ) );
		}
		subdictDefDevIdx->insert( std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecUserBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecUserTable::deleteSecUser( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecUserBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecUser" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecUserPKey pkey;
		pkey.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecUserBuff* existing = searchExisting->second;
					{
						cfcore::CFGenKbSecUserBuff* buff = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
						existing->getRequiredSecUserId() );
						buff->setOptionalDfltDevUserIdNull();
						buff->setOptionalDfltDevNameNull();
						cfcore::CFGenKbSecUserBuff* editBuff = NULL;
						classCode = buff->getClassCode();
						if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
							editBuff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( schema->getTableSecUser()->updateSecUser( Authorization, buff ) );
						}
						else {
							if( buff != NULL ) {
								delete buff;
								buff = NULL;
							}
							std::string S_Msg( "Unrecognized ClassCode \"" + cflib::CFLib::formatClassCode( classCode ) + "\"" );
							throw cflib::CFLibUnsupportedClassException( CLASS_NAME,
								S_ProcName,
								S_Msg );
						}
						if( editBuff != NULL ) {
							delete editBuff;
							editBuff = NULL;
						}
					}
		cfcore::CFGenKbSecUserBuff* editSubobj = NULL;
		cfcore::CFGenKbSecUserBuff* subobj = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
			existing->getRequiredSecUserId() );
			subobj->setOptionalDfltDevUserIdNull();
			subobj->setOptionalDfltDevNameNull();
		classCode = subobj->getClassCode();
		if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			editSubobj = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( schema->getTableSecUser()->updateSecUser( Authorization, subobj ) );
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
		schema->getTableTSecGrpMemb()->deleteTSecGrpMembByUserIdx( Authorization,
			existing->getRequiredSecUserId() );
		schema->getTableSecGrpMemb()->deleteSecGrpMembByUserIdx( Authorization,
			existing->getRequiredSecUserId() );
		schema->getTableSecSession()->deleteSecSessionBySecUserIdx( Authorization,
			existing->getRequiredSecUserId() );
		schema->getTableSecSession()->deleteSecSessionBySecProxyIdx( Authorization,
			existing->getRequiredSecUserIdReference() );
		schema->getTableSecDevice()->deleteSecDeviceByUserIdx( Authorization,
			existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecUserByULoginIdxKey keyULoginIdx;
		keyULoginIdx.setRequiredLoginId( existing->getRequiredLoginId() );
		cfcore::CFGenKbSecUserByEMConfIdxKey keyEMConfIdx;
		if( existing->isOptionalEMailConfirmUuidNull() ) {
			keyEMConfIdx.setOptionalEMailConfirmUuidNull();
		}
		else {
			keyEMConfIdx.setOptionalEMailConfirmUuidValue( existing->getOptionalEMailConfirmUuidValue() );
		}
		cfcore::CFGenKbSecUserByPwdResetIdxKey keyPwdResetIdx;
		if( existing->isOptionalPasswordResetUuidNull() ) {
			keyPwdResetIdx.setOptionalPasswordResetUuidNull();
		}
		else {
			keyPwdResetIdx.setOptionalPasswordResetUuidValue( existing->getOptionalPasswordResetUuidValue() );
		}
		cfcore::CFGenKbSecUserByDefDevIdxKey keyDefDevIdx;
		if( existing->isOptionalDfltDevUserIdNull() ) {
			keyDefDevIdx.setOptionalDfltDevUserIdNull();
		}
		else {
			keyDefDevIdx.setOptionalDfltDevUserIdValue( existing->getOptionalDfltDevUserIdValue() );
		}
		if( existing->isOptionalDfltDevNameNull() ) {
			keyDefDevIdx.setOptionalDfltDevNameNull();
		}
		else {
			keyDefDevIdx.setOptionalDfltDevNameValue( existing->getOptionalDfltDevNameValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::CFGenKbSecUserBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByULoginIdx = dictByULoginIdx->find( keyULoginIdx );
		if( searchDictByULoginIdx != dictByULoginIdx->end() ) {
			dictByULoginIdx->erase( searchDictByULoginIdx );
		}

		auto searchDictByEMConfIdx = dictByEMConfIdx->find( keyEMConfIdx );
		if( searchDictByEMConfIdx != dictByEMConfIdx->end() ) {
			std::map<cfcore::CFGenKbSecUserPKey,
				 cfcore::CFGenKbSecUserBuff*>* subdictEMConfIdx = searchDictByEMConfIdx->second;
			auto searchSubDict = subdictEMConfIdx->find( pkey );
			if( searchSubDict != subdictEMConfIdx->end() ) {
				subdictEMConfIdx->erase( searchSubDict );
			}
			subdictEMConfIdx = NULL;
		}

		auto searchDictByPwdResetIdx = dictByPwdResetIdx->find( keyPwdResetIdx );
		if( searchDictByPwdResetIdx != dictByPwdResetIdx->end() ) {
			std::map<cfcore::CFGenKbSecUserPKey,
				 cfcore::CFGenKbSecUserBuff*>* subdictPwdResetIdx = searchDictByPwdResetIdx->second;
			auto searchSubDict = subdictPwdResetIdx->find( pkey );
			if( searchSubDict != subdictPwdResetIdx->end() ) {
				subdictPwdResetIdx->erase( searchSubDict );
			}
			subdictPwdResetIdx = NULL;
		}

		auto searchDictByDefDevIdx = dictByDefDevIdx->find( keyDefDevIdx );
		if( searchDictByDefDevIdx != dictByDefDevIdx->end() ) {
			std::map<cfcore::CFGenKbSecUserPKey,
				 cfcore::CFGenKbSecUserBuff*>* subdictDefDevIdx = searchDictByDefDevIdx->second;
			auto searchSubDict = subdictDefDevIdx->find( pkey );
			if( searchSubDict != subdictDefDevIdx->end() ) {
				subdictDefDevIdx->erase( searchSubDict );
			}
			subdictDefDevIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamSecUserTable::deleteSecUserByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbSecUserPKey key;
		key.setRequiredSecUserId( argSecUserId );
		deleteSecUserByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecUserTable::deleteSecUserByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecUserBuff* cur = NULL;
		cfcore::CFGenKbSecUserBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> matchSet;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId() );
			rereadCur = cur;
			deleteSecUser( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecUserTable::deleteSecUserByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argLoginId )
	{
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( argLoginId );
		deleteSecUserByULoginIdx( Authorization, &key );
	}

	void CFGenKbRamSecUserTable::deleteSecUserByULoginIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserByULoginIdxKey* argKey )
	{
		cfcore::CFGenKbSecUserBuff* cur = NULL;
		cfcore::CFGenKbSecUserBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> matchSet;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId() );
			rereadCur = cur;
			deleteSecUser( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecUserTable::deleteSecUserByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argEMailConfirmUuid )
	{
		cfcore::CFGenKbSecUserByEMConfIdxKey key;
		if( argEMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( argEMailConfirmUuid );
		}
		deleteSecUserByEMConfIdx( Authorization, &key );
	}

	void CFGenKbRamSecUserTable::deleteSecUserByEMConfIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserByEMConfIdxKey* argKey )
	{
		cfcore::CFGenKbSecUserBuff* cur = NULL;
		cfcore::CFGenKbSecUserBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalEMailConfirmUuidNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> matchSet;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId() );
			rereadCur = cur;
			deleteSecUser( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecUserTable::deleteSecUserByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argPasswordResetUuid )
	{
		cfcore::CFGenKbSecUserByPwdResetIdxKey key;
		if( argPasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( argPasswordResetUuid );
		}
		deleteSecUserByPwdResetIdx( Authorization, &key );
	}

	void CFGenKbRamSecUserTable::deleteSecUserByPwdResetIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserByPwdResetIdxKey* argKey )
	{
		cfcore::CFGenKbSecUserBuff* cur = NULL;
		cfcore::CFGenKbSecUserBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalPasswordResetUuidNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> matchSet;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId() );
			rereadCur = cur;
			deleteSecUser( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecUserTable::deleteSecUserByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argDfltDevUserId,
			const std::string* argDfltDevName )
	{
		cfcore::CFGenKbSecUserByDefDevIdxKey key;
		if( argDfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( argDfltDevUserId );
		}
		if( argDfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *argDfltDevName );
		}
		deleteSecUserByDefDevIdx( Authorization, &key );
	}

	void CFGenKbRamSecUserTable::deleteSecUserByDefDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecUserByDefDevIdxKey* argKey )
	{
		cfcore::CFGenKbSecUserBuff* cur = NULL;
		cfcore::CFGenKbSecUserBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalDfltDevUserIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalDfltDevNameNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> matchSet;
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecUserPKey,
			cfcore::CFGenKbSecUserBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecUser()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecUserId() );
			rereadCur = cur;
			deleteSecUser( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecUserTable::releasePreparedStatements() {
	}

}
