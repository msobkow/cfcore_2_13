
// Description: C++18 Implementation for an in-memory RAM DbIO for SecSession.

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

	const std::string CFGenKbRamSecSessionTable::CLASS_NAME( "CFGenKbRamSecSessionTable" );

	CFGenKbRamSecSessionTable::CFGenKbRamSecSessionTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbSecSessionTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
		dictBySecUserIdx = new std::map<cfcore::CFGenKbSecSessionBySecUserIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>();
		dictBySecDevIdx = new std::map<cfcore::CFGenKbSecSessionBySecDevIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>();
		dictByStartIdx = new std::map<cfcore::CFGenKbSecSessionByStartIdxKey, cfcore::CFGenKbSecSessionBuff*>();
		dictByFinishIdx = new std::map<cfcore::CFGenKbSecSessionByFinishIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>();
		dictBySecProxyIdx = new std::map<cfcore::CFGenKbSecSessionBySecProxyIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>*>();
	}

	CFGenKbRamSecSessionTable::~CFGenKbRamSecSessionTable() {
		if( dictBySecUserIdx != NULL ) {
			for( auto iterDict = dictBySecUserIdx->begin(); iterDict != dictBySecUserIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySecUserIdx;
			dictBySecUserIdx = NULL;
		}
		if( dictBySecDevIdx != NULL ) {
			for( auto iterDict = dictBySecDevIdx->begin(); iterDict != dictBySecDevIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySecDevIdx;
			dictBySecDevIdx = NULL;
		}
		if( dictByStartIdx != NULL ) {
			delete dictByStartIdx;
			dictByStartIdx = NULL;
		}
		if( dictByFinishIdx != NULL ) {
			for( auto iterDict = dictByFinishIdx->begin(); iterDict != dictByFinishIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByFinishIdx;
			dictByFinishIdx = NULL;
		}
		if( dictBySecProxyIdx != NULL ) {
			for( auto iterDict = dictBySecProxyIdx->begin(); iterDict != dictBySecProxyIdx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictBySecProxyIdx;
			dictBySecProxyIdx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbSecSessionBuff* elt;
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::createSecSession( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecSessionBuff* Buff )
	{
		static const std::string S_ProcName( "createSecSession" );
		cfcore::CFGenKbSecSessionPKey pkey;
		pkey.generateRequiredSecSessionId();
		Buff->setRequiredSecSessionId( pkey.getRequiredSecSessionId() );
		cfcore::CFGenKbSecSessionBySecUserIdxKey keySecUserIdx;
		keySecUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfcore::CFGenKbSecSessionBySecDevIdxKey keySecDevIdx;
		keySecDevIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		if( Buff->isOptionalSecDevNameNull() ) {
			keySecDevIdx.setOptionalSecDevNameNull();
		}
		else {
			keySecDevIdx.setOptionalSecDevNameValue( Buff->getOptionalSecDevNameValue() );
		}
		cfcore::CFGenKbSecSessionByStartIdxKey keyStartIdx;
		keyStartIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		keyStartIdx.setRequiredStart( Buff->getRequiredStart() );
		cfcore::CFGenKbSecSessionByFinishIdxKey keyFinishIdx;
		keyFinishIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		if( Buff->isOptionalFinishNull() ) {
			keyFinishIdx.setOptionalFinishNull();
		}
		else {
			keyFinishIdx.setOptionalFinishValue( Buff->getOptionalFinishValue() );
		}
		cfcore::CFGenKbSecSessionBySecProxyIdxKey keySecProxyIdx;
		if( Buff->isOptionalSecProxyIdNull() ) {
			keySecProxyIdx.setOptionalSecProxyIdNull();
		}
		else {
			keySecProxyIdx.setOptionalSecProxyIdValue( Buff->getOptionalSecProxyIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		auto searchDictByStartIdx = dictByStartIdx->find( keyStartIdx );
		if( searchDictByStartIdx != dictByStartIdx->end() ) {
			std::string Msg( "Duplicate key detected for index SessionStartIdx " + keyStartIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship SecSessionUser to table SecUser" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbSecSessionBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>* subdictSecUserIdx;
		auto searchDictBySecUserIdx = dictBySecUserIdx->find( keySecUserIdx );
		if( searchDictBySecUserIdx != dictBySecUserIdx->end() ) {
			subdictSecUserIdx = searchDictBySecUserIdx->second;
		}
		else {
			subdictSecUserIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictBySecUserIdx->insert( std::map<cfcore::CFGenKbSecSessionBySecUserIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( keySecUserIdx, subdictSecUserIdx ) );
		}
		subdictSecUserIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>* subdictSecDevIdx;
		auto searchDictBySecDevIdx = dictBySecDevIdx->find( keySecDevIdx );
		if( searchDictBySecDevIdx != dictBySecDevIdx->end() ) {
			subdictSecDevIdx = searchDictBySecDevIdx->second;
		}
		else {
			subdictSecDevIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictBySecDevIdx->insert( std::map<cfcore::CFGenKbSecSessionBySecDevIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( keySecDevIdx, subdictSecDevIdx ) );
		}
		subdictSecDevIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, buff ) );

		dictByStartIdx->insert( std::map<cfcore::CFGenKbSecSessionByStartIdxKey, cfcore::CFGenKbSecSessionBuff*>::value_type( keyStartIdx, buff ) );

		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>* subdictFinishIdx;
		auto searchDictByFinishIdx = dictByFinishIdx->find( keyFinishIdx );
		if( searchDictByFinishIdx != dictByFinishIdx->end() ) {
			subdictFinishIdx = searchDictByFinishIdx->second;
		}
		else {
			subdictFinishIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictByFinishIdx->insert( std::map<cfcore::CFGenKbSecSessionByFinishIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( keyFinishIdx, subdictFinishIdx ) );
		}
		subdictFinishIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>* subdictSecProxyIdx;
		auto searchDictBySecProxyIdx = dictBySecProxyIdx->find( keySecProxyIdx );
		if( searchDictBySecProxyIdx != dictBySecProxyIdx->end() ) {
			subdictSecProxyIdx = searchDictBySecProxyIdx->second;
		}
		else {
			subdictSecProxyIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictBySecProxyIdx->insert( std::map<cfcore::CFGenKbSecSessionBySecProxyIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( keySecProxyIdx, subdictSecProxyIdx ) );
		}
		subdictSecProxyIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbSecSessionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbSecSessionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> retVec;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbSecSessionBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readDerivedBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readDerivedBySecUserIdx" );
		cfcore::CFGenKbSecSessionBySecUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> recVec;
		cfcore::CFGenKbSecSessionBuff* clone;
		auto searchDictBySecUserIdx = dictBySecUserIdx->find( key );
		if( searchDictBySecUserIdx != dictBySecUserIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictSecUserIdx = searchDictBySecUserIdx->second;
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator iter = subdictSecUserIdx->begin();
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator end = subdictSecUserIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readDerivedBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName )
	{
		static const std::string S_ProcName( "readDerivedBySecDevIdx" );
		cfcore::CFGenKbSecSessionBySecDevIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( SecDevName == NULL ) {
			key.setOptionalSecDevNameNull();
		}
		else {
			key.setOptionalSecDevNameValue( *SecDevName );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> recVec;
		cfcore::CFGenKbSecSessionBuff* clone;
		auto searchDictBySecDevIdx = dictBySecDevIdx->find( key );
		if( searchDictBySecDevIdx != dictBySecDevIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictSecDevIdx = searchDictBySecDevIdx->second;
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator iter = subdictSecDevIdx->begin();
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator end = subdictSecDevIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::readDerivedByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start )
	{
		static const std::string S_ProcName( "readDerivedByStartIdx" );
		cfcore::CFGenKbSecSessionByStartIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredStart( Start );
		cfcore::CFGenKbSecSessionBuff* buff;
		auto searchDictByStartIdx = dictByStartIdx->find( key );
		if( searchDictByStartIdx != dictByStartIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( searchDictByStartIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readDerivedByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish )
	{
		static const std::string S_ProcName( "readDerivedByFinishIdx" );
		cfcore::CFGenKbSecSessionByFinishIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( Finish == NULL ) {
			key.setOptionalFinishNull();
		}
		else {
			key.setOptionalFinishValue( *Finish );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> recVec;
		cfcore::CFGenKbSecSessionBuff* clone;
		auto searchDictByFinishIdx = dictByFinishIdx->find( key );
		if( searchDictByFinishIdx != dictByFinishIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictFinishIdx = searchDictByFinishIdx->second;
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator iter = subdictFinishIdx->begin();
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator end = subdictFinishIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readDerivedBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId )
	{
		static const std::string S_ProcName( "readDerivedBySecProxyIdx" );
		cfcore::CFGenKbSecSessionBySecProxyIdxKey key;
		if( SecProxyId == NULL ) {
			key.setOptionalSecProxyIdNull();
		}
		else {
			key.setOptionalSecProxyIdValue( SecProxyId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> recVec;
		cfcore::CFGenKbSecSessionBuff* clone;
		auto searchDictBySecProxyIdx = dictBySecProxyIdx->find( key );
		if( searchDictBySecProxyIdx != dictBySecProxyIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictSecProxyIdx = searchDictBySecProxyIdx->second;
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator iter = subdictSecProxyIdx->begin();
			std::map<cfcore::CFGenKbSecSessionPKey,
				cfcore::CFGenKbSecSessionBuff*>::iterator end = subdictSecProxyIdx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecSessionId )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbSecSessionPKey key;
		key.setRequiredSecSessionId( SecSessionId );
		cfcore::CFGenKbSecSessionBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbSecSessionBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff ) );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbSecSessionBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbSecSessionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::pageAllBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageAllBuff" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecSessionId )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbSecSessionBuff* buff = readDerivedByIdIdx( Authorization,
			SecSessionId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readBuffBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readBuffBySecUserIdx" );
		cfcore::CFGenKbSecSessionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = readDerivedBySecUserIdx( Authorization,
			SecUserId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readBuffBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName )
	{
		static const std::string S_ProcName( "readBuffBySecDevIdx" );
		cfcore::CFGenKbSecSessionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = readDerivedBySecDevIdx( Authorization,
			SecUserId,
			SecDevName );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::readBuffByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start )
	{
		static const std::string S_ProcName( "readBuffByStartIdx" );
		cfcore::CFGenKbSecSessionBuff* buff = readDerivedByStartIdx( Authorization,
			SecUserId,
			Start );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readBuffByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish )
	{
		static const std::string S_ProcName( "readBuffByFinishIdx" );
		cfcore::CFGenKbSecSessionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = readDerivedByFinishIdx( Authorization,
			SecUserId,
			Finish );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::readBuffBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId )
	{
		static const std::string S_ProcName( "readBuffBySecProxyIdx" );
		cfcore::CFGenKbSecSessionBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = readDerivedBySecProxyIdx( Authorization,
			SecProxyId );
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::pageBuffBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageBuffBySecUserIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::pageBuffBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageBuffBySecDevIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::pageBuffByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageBuffByFinishIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> CFGenKbRamSecSessionTable::pageBuffBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t SecProxyId,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageBuffBySecProxyIdx" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbRamSecSessionTable::updateSecSession( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecSessionBuff* Buff )
	{
		static const std::string S_ProcName( "updateSecSession" );
		cfcore::CFGenKbSecSessionPKey pkey;
		pkey.setRequiredSecSessionId( Buff->getRequiredSecSessionId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in SecSession for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbSecSessionBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for SecSession primary key " );
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
		cfcore::CFGenKbSecSessionBySecUserIdxKey existingKeySecUserIdx;
		existingKeySecUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecSessionBySecUserIdxKey newKeySecUserIdx;
		newKeySecUserIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		cfcore::CFGenKbSecSessionBySecDevIdxKey existingKeySecDevIdx;
		existingKeySecDevIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		if( existing->isOptionalSecDevNameNull() ) {
			existingKeySecDevIdx.setOptionalSecDevNameNull();
		}
		else {
			existingKeySecDevIdx.setOptionalSecDevNameValue( existing->getOptionalSecDevNameValue() );
		}
		cfcore::CFGenKbSecSessionBySecDevIdxKey newKeySecDevIdx;
		newKeySecDevIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		if( Buff->isOptionalSecDevNameNull() ) {
			newKeySecDevIdx.setOptionalSecDevNameNull();
		}
		else {
			newKeySecDevIdx.setOptionalSecDevNameValue( Buff->getOptionalSecDevNameValue() );
		}
		cfcore::CFGenKbSecSessionByStartIdxKey existingKeyStartIdx;
		existingKeyStartIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		existingKeyStartIdx.setRequiredStart( existing->getRequiredStart() );
		cfcore::CFGenKbSecSessionByStartIdxKey newKeyStartIdx;
		newKeyStartIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		newKeyStartIdx.setRequiredStart( Buff->getRequiredStart() );
		cfcore::CFGenKbSecSessionByFinishIdxKey existingKeyFinishIdx;
		existingKeyFinishIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		if( existing->isOptionalFinishNull() ) {
			existingKeyFinishIdx.setOptionalFinishNull();
		}
		else {
			existingKeyFinishIdx.setOptionalFinishValue( existing->getOptionalFinishValue() );
		}
		cfcore::CFGenKbSecSessionByFinishIdxKey newKeyFinishIdx;
		newKeyFinishIdx.setRequiredSecUserId( Buff->getRequiredSecUserId() );
		if( Buff->isOptionalFinishNull() ) {
			newKeyFinishIdx.setOptionalFinishNull();
		}
		else {
			newKeyFinishIdx.setOptionalFinishValue( Buff->getOptionalFinishValue() );
		}
		cfcore::CFGenKbSecSessionBySecProxyIdxKey existingKeySecProxyIdx;
		if( existing->isOptionalSecProxyIdNull() ) {
			existingKeySecProxyIdx.setOptionalSecProxyIdNull();
		}
		else {
			existingKeySecProxyIdx.setOptionalSecProxyIdValue( existing->getOptionalSecProxyIdValue() );
		}
		cfcore::CFGenKbSecSessionBySecProxyIdxKey newKeySecProxyIdx;
		if( Buff->isOptionalSecProxyIdNull() ) {
			newKeySecProxyIdx.setOptionalSecProxyIdNull();
		}
		else {
			newKeySecProxyIdx.setOptionalSecProxyIdValue( Buff->getOptionalSecProxyIdValue() );
		}
		// Check unique indexes

		if( existingKeyStartIdx != newKeyStartIdx ) {
			auto searchDictByStartIdx = dictByStartIdx->find( newKeyStartIdx );
			if( searchDictByStartIdx != dictByStartIdx->end() ) {
				std::string Msg( "Duplicate key detected for index SessionStartIdx " + newKeyStartIdx.toString() );
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
					std::string Msg( "Could not resolve Container relationship SecSessionUser to table SecUser" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbSecSessionBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecSessionPKey,
			 cfcore::CFGenKbSecSessionBuff*>* subdictSecUserIdx;
		auto searchDictBySecUserIdx = dictBySecUserIdx->find( existingKeySecUserIdx );
		if( searchDictBySecUserIdx != dictBySecUserIdx->end() ) {
			subdictSecUserIdx = searchDictBySecUserIdx->second;
			auto searchSubDict = subdictSecUserIdx->find( pkey );
			if( searchSubDict != subdictSecUserIdx->end() ) {
				subdictSecUserIdx->erase( searchSubDict );
			}
			if( subdictSecUserIdx->size() <= 0 ) {
				delete subdictSecUserIdx;
				dictBySecUserIdx->erase( searchDictBySecUserIdx );
			}
			subdictSecUserIdx = NULL;
		}
		auto searchNewKeyDictBySecUserIdx = dictBySecUserIdx->find( newKeySecUserIdx );
		if( searchNewKeyDictBySecUserIdx != dictBySecUserIdx->end() ) {
			subdictSecUserIdx = searchNewKeyDictBySecUserIdx->second;
		}
		else {
			subdictSecUserIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictBySecUserIdx->insert( std::map<cfcore::CFGenKbSecSessionBySecUserIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( newKeySecUserIdx, subdictSecUserIdx ) );
		}
		subdictSecUserIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecSessionPKey,
			 cfcore::CFGenKbSecSessionBuff*>* subdictSecDevIdx;
		auto searchDictBySecDevIdx = dictBySecDevIdx->find( existingKeySecDevIdx );
		if( searchDictBySecDevIdx != dictBySecDevIdx->end() ) {
			subdictSecDevIdx = searchDictBySecDevIdx->second;
			auto searchSubDict = subdictSecDevIdx->find( pkey );
			if( searchSubDict != subdictSecDevIdx->end() ) {
				subdictSecDevIdx->erase( searchSubDict );
			}
			if( subdictSecDevIdx->size() <= 0 ) {
				delete subdictSecDevIdx;
				dictBySecDevIdx->erase( searchDictBySecDevIdx );
			}
			subdictSecDevIdx = NULL;
		}
		auto searchNewKeyDictBySecDevIdx = dictBySecDevIdx->find( newKeySecDevIdx );
		if( searchNewKeyDictBySecDevIdx != dictBySecDevIdx->end() ) {
			subdictSecDevIdx = searchNewKeyDictBySecDevIdx->second;
		}
		else {
			subdictSecDevIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictBySecDevIdx->insert( std::map<cfcore::CFGenKbSecSessionBySecDevIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( newKeySecDevIdx, subdictSecDevIdx ) );
		}
		subdictSecDevIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, existing ) );

		auto removalDictByStartIdx = dictByStartIdx->find( existingKeyStartIdx );
		if( removalDictByStartIdx != dictByStartIdx->end() ) {
			dictByStartIdx->erase( removalDictByStartIdx );
		}
		dictByStartIdx->insert( std::map<cfcore::CFGenKbSecSessionByStartIdxKey, cfcore::CFGenKbSecSessionBuff*>::value_type( newKeyStartIdx, existing ) );

		std::map<cfcore::CFGenKbSecSessionPKey,
			 cfcore::CFGenKbSecSessionBuff*>* subdictFinishIdx;
		auto searchDictByFinishIdx = dictByFinishIdx->find( existingKeyFinishIdx );
		if( searchDictByFinishIdx != dictByFinishIdx->end() ) {
			subdictFinishIdx = searchDictByFinishIdx->second;
			auto searchSubDict = subdictFinishIdx->find( pkey );
			if( searchSubDict != subdictFinishIdx->end() ) {
				subdictFinishIdx->erase( searchSubDict );
			}
			if( subdictFinishIdx->size() <= 0 ) {
				delete subdictFinishIdx;
				dictByFinishIdx->erase( searchDictByFinishIdx );
			}
			subdictFinishIdx = NULL;
		}
		auto searchNewKeyDictByFinishIdx = dictByFinishIdx->find( newKeyFinishIdx );
		if( searchNewKeyDictByFinishIdx != dictByFinishIdx->end() ) {
			subdictFinishIdx = searchNewKeyDictByFinishIdx->second;
		}
		else {
			subdictFinishIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictByFinishIdx->insert( std::map<cfcore::CFGenKbSecSessionByFinishIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( newKeyFinishIdx, subdictFinishIdx ) );
		}
		subdictFinishIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbSecSessionPKey,
			 cfcore::CFGenKbSecSessionBuff*>* subdictSecProxyIdx;
		auto searchDictBySecProxyIdx = dictBySecProxyIdx->find( existingKeySecProxyIdx );
		if( searchDictBySecProxyIdx != dictBySecProxyIdx->end() ) {
			subdictSecProxyIdx = searchDictBySecProxyIdx->second;
			auto searchSubDict = subdictSecProxyIdx->find( pkey );
			if( searchSubDict != subdictSecProxyIdx->end() ) {
				subdictSecProxyIdx->erase( searchSubDict );
			}
			if( subdictSecProxyIdx->size() <= 0 ) {
				delete subdictSecProxyIdx;
				dictBySecProxyIdx->erase( searchDictBySecProxyIdx );
			}
			subdictSecProxyIdx = NULL;
		}
		auto searchNewKeyDictBySecProxyIdx = dictBySecProxyIdx->find( newKeySecProxyIdx );
		if( searchNewKeyDictBySecProxyIdx != dictBySecProxyIdx->end() ) {
			subdictSecProxyIdx = searchNewKeyDictBySecProxyIdx->second;
		}
		else {
			subdictSecProxyIdx = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>();
			dictBySecProxyIdx->insert( std::map<cfcore::CFGenKbSecSessionBySecProxyIdxKey,
				std::map<cfcore::CFGenKbSecSessionPKey,
					cfcore::CFGenKbSecSessionBuff*>*>::value_type( newKeySecProxyIdx, subdictSecProxyIdx ) );
		}
		subdictSecProxyIdx->insert( std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbSecSessionBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamSecSessionTable::deleteSecSession( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbSecSessionBuff* Buff )
	{
		static const std::string S_ProcName( "deleteSecSession" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbSecSessionPKey pkey;
		pkey.setRequiredSecSessionId( Buff->getRequiredSecSessionId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbSecSessionBuff* existing = searchExisting->second;
		cfcore::CFGenKbSecSessionBySecUserIdxKey keySecUserIdx;
		keySecUserIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		cfcore::CFGenKbSecSessionBySecDevIdxKey keySecDevIdx;
		keySecDevIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		if( existing->isOptionalSecDevNameNull() ) {
			keySecDevIdx.setOptionalSecDevNameNull();
		}
		else {
			keySecDevIdx.setOptionalSecDevNameValue( existing->getOptionalSecDevNameValue() );
		}
		cfcore::CFGenKbSecSessionByStartIdxKey keyStartIdx;
		keyStartIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		keyStartIdx.setRequiredStart( existing->getRequiredStart() );
		cfcore::CFGenKbSecSessionByFinishIdxKey keyFinishIdx;
		keyFinishIdx.setRequiredSecUserId( existing->getRequiredSecUserId() );
		if( existing->isOptionalFinishNull() ) {
			keyFinishIdx.setOptionalFinishNull();
		}
		else {
			keyFinishIdx.setOptionalFinishValue( existing->getOptionalFinishValue() );
		}
		cfcore::CFGenKbSecSessionBySecProxyIdxKey keySecProxyIdx;
		if( existing->isOptionalSecProxyIdNull() ) {
			keySecProxyIdx.setOptionalSecProxyIdNull();
		}
		else {
			keySecProxyIdx.setOptionalSecProxyIdValue( existing->getOptionalSecProxyIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::CFGenKbSecSessionBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictBySecUserIdx = dictBySecUserIdx->find( keySecUserIdx );
		if( searchDictBySecUserIdx != dictBySecUserIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictSecUserIdx = searchDictBySecUserIdx->second;
			auto searchSubDict = subdictSecUserIdx->find( pkey );
			if( searchSubDict != subdictSecUserIdx->end() ) {
				subdictSecUserIdx->erase( searchSubDict );
			}
			subdictSecUserIdx = NULL;
		}

		auto searchDictBySecDevIdx = dictBySecDevIdx->find( keySecDevIdx );
		if( searchDictBySecDevIdx != dictBySecDevIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictSecDevIdx = searchDictBySecDevIdx->second;
			auto searchSubDict = subdictSecDevIdx->find( pkey );
			if( searchSubDict != subdictSecDevIdx->end() ) {
				subdictSecDevIdx->erase( searchSubDict );
			}
			subdictSecDevIdx = NULL;
		}

		auto searchDictByStartIdx = dictByStartIdx->find( keyStartIdx );
		if( searchDictByStartIdx != dictByStartIdx->end() ) {
			dictByStartIdx->erase( searchDictByStartIdx );
		}

		auto searchDictByFinishIdx = dictByFinishIdx->find( keyFinishIdx );
		if( searchDictByFinishIdx != dictByFinishIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictFinishIdx = searchDictByFinishIdx->second;
			auto searchSubDict = subdictFinishIdx->find( pkey );
			if( searchSubDict != subdictFinishIdx->end() ) {
				subdictFinishIdx->erase( searchSubDict );
			}
			subdictFinishIdx = NULL;
		}

		auto searchDictBySecProxyIdx = dictBySecProxyIdx->find( keySecProxyIdx );
		if( searchDictBySecProxyIdx != dictBySecProxyIdx->end() ) {
			std::map<cfcore::CFGenKbSecSessionPKey,
				 cfcore::CFGenKbSecSessionBuff*>* subdictSecProxyIdx = searchDictBySecProxyIdx->second;
			auto searchSubDict = subdictSecProxyIdx->find( pkey );
			if( searchSubDict != subdictSecProxyIdx->end() ) {
				subdictSecProxyIdx->erase( searchSubDict );
			}
			subdictSecProxyIdx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecSessionId )
	{
		cfcore::CFGenKbSecSessionPKey key;
		key.setRequiredSecSessionId( argSecSessionId );
		deleteSecSessionByIdIdx( Authorization, &key );
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbSecSessionBuff* cur = NULL;
		cfcore::CFGenKbSecSessionBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> matchSet;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecSession()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecSessionId() );
			rereadCur = cur;
			deleteSecSession( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId )
	{
		cfcore::CFGenKbSecSessionBySecUserIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		deleteSecSessionBySecUserIdx( Authorization, &key );
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionBySecUserIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionBySecUserIdxKey* argKey )
	{
		cfcore::CFGenKbSecSessionBuff* cur = NULL;
		cfcore::CFGenKbSecSessionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> matchSet;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecSession()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecSessionId() );
			rereadCur = cur;
			deleteSecSession( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::string* argSecDevName )
	{
		cfcore::CFGenKbSecSessionBySecDevIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		if( argSecDevName == NULL ) {
			key.setOptionalSecDevNameNull();
		}
		else {
			key.setOptionalSecDevNameValue( *argSecDevName );
		}
		deleteSecSessionBySecDevIdx( Authorization, &key );
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionBySecDevIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionBySecDevIdxKey* argKey )
	{
		cfcore::CFGenKbSecSessionBuff* cur = NULL;
		cfcore::CFGenKbSecSessionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( argKey->isOptionalSecDevNameNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> matchSet;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecSession()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecSessionId() );
			rereadCur = cur;
			deleteSecSession( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::chrono::system_clock::time_point& argStart )
	{
		cfcore::CFGenKbSecSessionByStartIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		key.setRequiredStart( argStart );
		deleteSecSessionByStartIdx( Authorization, &key );
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionByStartIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionByStartIdxKey* argKey )
	{
		cfcore::CFGenKbSecSessionBuff* cur = NULL;
		cfcore::CFGenKbSecSessionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> matchSet;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecSession()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecSessionId() );
			rereadCur = cur;
			deleteSecSession( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecUserId,
			const std::chrono::system_clock::time_point* argFinish )
	{
		cfcore::CFGenKbSecSessionByFinishIdxKey key;
		key.setRequiredSecUserId( argSecUserId );
		if( argFinish == NULL ) {
			key.setOptionalFinishNull();
		}
		else {
			key.setOptionalFinishValue( *argFinish );
		}
		deleteSecSessionByFinishIdx( Authorization, &key );
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionByFinishIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionByFinishIdxKey* argKey )
	{
		cfcore::CFGenKbSecSessionBuff* cur = NULL;
		cfcore::CFGenKbSecSessionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( argKey->isOptionalFinishNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> matchSet;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecSession()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecSessionId() );
			rereadCur = cur;
			deleteSecSession( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const uuid_ptr_t argSecProxyId )
	{
		cfcore::CFGenKbSecSessionBySecProxyIdxKey key;
		if( argSecProxyId == NULL ) {
			key.setOptionalSecProxyIdNull();
		}
		else {
			key.setOptionalSecProxyIdValue( argSecProxyId );
		}
		deleteSecSessionBySecProxyIdx( Authorization, &key );
	}

	void CFGenKbRamSecSessionTable::deleteSecSessionBySecProxyIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbSecSessionBySecProxyIdxKey* argKey )
	{
		cfcore::CFGenKbSecSessionBuff* cur = NULL;
		cfcore::CFGenKbSecSessionBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalSecProxyIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> matchSet;
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbSecSessionPKey,
			cfcore::CFGenKbSecSessionBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableSecSession()->readDerivedByIdIdx( Authorization,
				cur->getRequiredSecSessionId() );
			rereadCur = cur;
			deleteSecSession( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamSecSessionTable::releasePreparedStatements() {
	}

}
