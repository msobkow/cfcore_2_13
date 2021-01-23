
// Description: C++18 Implementation for an in-memory RAM DbIO for ToolSet.

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

	const std::string CFGenKbRamToolSetTable::CLASS_NAME( "CFGenKbRamToolSetTable" );

	CFGenKbRamToolSetTable::CFGenKbRamToolSetTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbToolSetTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
		dictByNameIdx = new std::map<cfcore::CFGenKbToolSetByNameIdxKey, cfcore::CFGenKbToolSetBuff*>();
		dictByTool0Idx = new std::map<cfcore::CFGenKbToolSetByTool0IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool1Idx = new std::map<cfcore::CFGenKbToolSetByTool1IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool2Idx = new std::map<cfcore::CFGenKbToolSetByTool2IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool3Idx = new std::map<cfcore::CFGenKbToolSetByTool3IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool4Idx = new std::map<cfcore::CFGenKbToolSetByTool4IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool5Idx = new std::map<cfcore::CFGenKbToolSetByTool5IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool6Idx = new std::map<cfcore::CFGenKbToolSetByTool6IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
		dictByTool7Idx = new std::map<cfcore::CFGenKbToolSetByTool7IdxKey,
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>*>();
	}

	CFGenKbRamToolSetTable::~CFGenKbRamToolSetTable() {
		if( dictByNameIdx != NULL ) {
			delete dictByNameIdx;
			dictByNameIdx = NULL;
		}
		if( dictByTool0Idx != NULL ) {
			for( auto iterDict = dictByTool0Idx->begin(); iterDict != dictByTool0Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool0Idx;
			dictByTool0Idx = NULL;
		}
		if( dictByTool1Idx != NULL ) {
			for( auto iterDict = dictByTool1Idx->begin(); iterDict != dictByTool1Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool1Idx;
			dictByTool1Idx = NULL;
		}
		if( dictByTool2Idx != NULL ) {
			for( auto iterDict = dictByTool2Idx->begin(); iterDict != dictByTool2Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool2Idx;
			dictByTool2Idx = NULL;
		}
		if( dictByTool3Idx != NULL ) {
			for( auto iterDict = dictByTool3Idx->begin(); iterDict != dictByTool3Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool3Idx;
			dictByTool3Idx = NULL;
		}
		if( dictByTool4Idx != NULL ) {
			for( auto iterDict = dictByTool4Idx->begin(); iterDict != dictByTool4Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool4Idx;
			dictByTool4Idx = NULL;
		}
		if( dictByTool5Idx != NULL ) {
			for( auto iterDict = dictByTool5Idx->begin(); iterDict != dictByTool5Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool5Idx;
			dictByTool5Idx = NULL;
		}
		if( dictByTool6Idx != NULL ) {
			for( auto iterDict = dictByTool6Idx->begin(); iterDict != dictByTool6Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool6Idx;
			dictByTool6Idx = NULL;
		}
		if( dictByTool7Idx != NULL ) {
			for( auto iterDict = dictByTool7Idx->begin(); iterDict != dictByTool7Idx->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByTool7Idx;
			dictByTool7Idx = NULL;
		}
		if( dictByPKey != NULL ) {
			cfcore::CFGenKbToolSetBuff* elt;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
			for( std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>::iterator cur = dictByPKey->begin();
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

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::createToolSet( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbToolSetBuff* Buff )
	{
		static const std::string S_ProcName( "createToolSet" );
		cfcore::CFGenKbToolSetPKey pkey;
		pkey.setRequiredId( schema->nextToolSetIdGen() );
		Buff->setRequiredId( pkey.getRequiredId() );
		cfcore::CFGenKbToolSetByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( Buff->getRequiredName() );
		cfcore::CFGenKbToolSetByTool0IdxKey keyTool0Idx;
		keyTool0Idx.setRequiredToolId0( Buff->getRequiredToolId0() );
		cfcore::CFGenKbToolSetByTool1IdxKey keyTool1Idx;
		if( Buff->isOptionalToolId1Null() ) {
			keyTool1Idx.setOptionalToolId1Null();
		}
		else {
			keyTool1Idx.setOptionalToolId1Value( Buff->getOptionalToolId1Value() );
		}
		cfcore::CFGenKbToolSetByTool2IdxKey keyTool2Idx;
		if( Buff->isOptionalToolId2Null() ) {
			keyTool2Idx.setOptionalToolId2Null();
		}
		else {
			keyTool2Idx.setOptionalToolId2Value( Buff->getOptionalToolId2Value() );
		}
		cfcore::CFGenKbToolSetByTool3IdxKey keyTool3Idx;
		if( Buff->isOptionalToolId3Null() ) {
			keyTool3Idx.setOptionalToolId3Null();
		}
		else {
			keyTool3Idx.setOptionalToolId3Value( Buff->getOptionalToolId3Value() );
		}
		cfcore::CFGenKbToolSetByTool4IdxKey keyTool4Idx;
		if( Buff->isOptionalToolId4Null() ) {
			keyTool4Idx.setOptionalToolId4Null();
		}
		else {
			keyTool4Idx.setOptionalToolId4Value( Buff->getOptionalToolId4Value() );
		}
		cfcore::CFGenKbToolSetByTool5IdxKey keyTool5Idx;
		if( Buff->isOptionalToolId5Null() ) {
			keyTool5Idx.setOptionalToolId5Null();
		}
		else {
			keyTool5Idx.setOptionalToolId5Value( Buff->getOptionalToolId5Value() );
		}
		cfcore::CFGenKbToolSetByTool6IdxKey keyTool6Idx;
		if( Buff->isOptionalToolId6Null() ) {
			keyTool6Idx.setOptionalToolId6Null();
		}
		else {
			keyTool6Idx.setOptionalToolId6Value( Buff->getOptionalToolId6Value() );
		}
		cfcore::CFGenKbToolSetByTool7IdxKey keyTool7Idx;
		if( Buff->isOptionalToolId7Null() ) {
			keyTool7Idx.setOptionalToolId7Null();
		}
		else {
			keyTool7Idx.setOptionalToolId7Value( Buff->getOptionalToolId7Value() );
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
			std::string Msg( "Duplicate key detected for index ToolSetName " + keyNameIdx.toString() );
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
				cfcore::CFGenKbToolBuff* chk = dynamic_cast<cfcore::CFGenKbToolBuff*>( schema->getTableTool()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredToolId0() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Tool0 to table Tool" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Proceed with adding the new record
		cfcore::CFGenKbToolSetBuff* buff = Buff;
		buff->setRequiredRevision( 1 );
		dictByPKey->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		dictByNameIdx->insert( std::map<cfcore::CFGenKbToolSetByNameIdxKey, cfcore::CFGenKbToolSetBuff*>::value_type( keyNameIdx, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool0Idx;
		auto searchDictByTool0Idx = dictByTool0Idx->find( keyTool0Idx );
		if( searchDictByTool0Idx != dictByTool0Idx->end() ) {
			subdictTool0Idx = searchDictByTool0Idx->second;
		}
		else {
			subdictTool0Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool0Idx->insert( std::map<cfcore::CFGenKbToolSetByTool0IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool0Idx, subdictTool0Idx ) );
		}
		subdictTool0Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool1Idx;
		auto searchDictByTool1Idx = dictByTool1Idx->find( keyTool1Idx );
		if( searchDictByTool1Idx != dictByTool1Idx->end() ) {
			subdictTool1Idx = searchDictByTool1Idx->second;
		}
		else {
			subdictTool1Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool1Idx->insert( std::map<cfcore::CFGenKbToolSetByTool1IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool1Idx, subdictTool1Idx ) );
		}
		subdictTool1Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool2Idx;
		auto searchDictByTool2Idx = dictByTool2Idx->find( keyTool2Idx );
		if( searchDictByTool2Idx != dictByTool2Idx->end() ) {
			subdictTool2Idx = searchDictByTool2Idx->second;
		}
		else {
			subdictTool2Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool2Idx->insert( std::map<cfcore::CFGenKbToolSetByTool2IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool2Idx, subdictTool2Idx ) );
		}
		subdictTool2Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool3Idx;
		auto searchDictByTool3Idx = dictByTool3Idx->find( keyTool3Idx );
		if( searchDictByTool3Idx != dictByTool3Idx->end() ) {
			subdictTool3Idx = searchDictByTool3Idx->second;
		}
		else {
			subdictTool3Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool3Idx->insert( std::map<cfcore::CFGenKbToolSetByTool3IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool3Idx, subdictTool3Idx ) );
		}
		subdictTool3Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool4Idx;
		auto searchDictByTool4Idx = dictByTool4Idx->find( keyTool4Idx );
		if( searchDictByTool4Idx != dictByTool4Idx->end() ) {
			subdictTool4Idx = searchDictByTool4Idx->second;
		}
		else {
			subdictTool4Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool4Idx->insert( std::map<cfcore::CFGenKbToolSetByTool4IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool4Idx, subdictTool4Idx ) );
		}
		subdictTool4Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool5Idx;
		auto searchDictByTool5Idx = dictByTool5Idx->find( keyTool5Idx );
		if( searchDictByTool5Idx != dictByTool5Idx->end() ) {
			subdictTool5Idx = searchDictByTool5Idx->second;
		}
		else {
			subdictTool5Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool5Idx->insert( std::map<cfcore::CFGenKbToolSetByTool5IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool5Idx, subdictTool5Idx ) );
		}
		subdictTool5Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool6Idx;
		auto searchDictByTool6Idx = dictByTool6Idx->find( keyTool6Idx );
		if( searchDictByTool6Idx != dictByTool6Idx->end() ) {
			subdictTool6Idx = searchDictByTool6Idx->second;
		}
		else {
			subdictTool6Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool6Idx->insert( std::map<cfcore::CFGenKbToolSetByTool6IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool6Idx, subdictTool6Idx ) );
		}
		subdictTool6Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdictTool7Idx;
		auto searchDictByTool7Idx = dictByTool7Idx->find( keyTool7Idx );
		if( searchDictByTool7Idx != dictByTool7Idx->end() ) {
			subdictTool7Idx = searchDictByTool7Idx->second;
		}
		else {
			subdictTool7Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool7Idx->insert( std::map<cfcore::CFGenKbToolSetByTool7IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( keyTool7Idx, subdictTool7Idx ) );
		}
		subdictTool7Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbToolSetBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbToolSetBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> retVec;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbToolSetBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readDerivedByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readDerivedByNameIdx" );
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::CFGenKbToolSetBuff* buff;
		auto searchDictByNameIdx = dictByNameIdx->find( key );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( searchDictByNameIdx->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolId0 )
	{
		static const std::string S_ProcName( "readDerivedByTool0Idx" );
		cfcore::CFGenKbToolSetByTool0IdxKey key;
		key.setRequiredToolId0( ToolId0 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool0Idx = dictByTool0Idx->find( key );
		if( searchDictByTool0Idx != dictByTool0Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool0Idx = searchDictByTool0Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool0Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool0Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId1 )
	{
		static const std::string S_ProcName( "readDerivedByTool1Idx" );
		cfcore::CFGenKbToolSetByTool1IdxKey key;
		if( ToolId1 == NULL ) {
			key.setOptionalToolId1Null();
		}
		else {
			key.setOptionalToolId1Value( *ToolId1 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool1Idx = dictByTool1Idx->find( key );
		if( searchDictByTool1Idx != dictByTool1Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool1Idx = searchDictByTool1Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool1Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool1Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId2 )
	{
		static const std::string S_ProcName( "readDerivedByTool2Idx" );
		cfcore::CFGenKbToolSetByTool2IdxKey key;
		if( ToolId2 == NULL ) {
			key.setOptionalToolId2Null();
		}
		else {
			key.setOptionalToolId2Value( *ToolId2 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool2Idx = dictByTool2Idx->find( key );
		if( searchDictByTool2Idx != dictByTool2Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool2Idx = searchDictByTool2Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool2Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool2Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId3 )
	{
		static const std::string S_ProcName( "readDerivedByTool3Idx" );
		cfcore::CFGenKbToolSetByTool3IdxKey key;
		if( ToolId3 == NULL ) {
			key.setOptionalToolId3Null();
		}
		else {
			key.setOptionalToolId3Value( *ToolId3 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool3Idx = dictByTool3Idx->find( key );
		if( searchDictByTool3Idx != dictByTool3Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool3Idx = searchDictByTool3Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool3Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool3Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId4 )
	{
		static const std::string S_ProcName( "readDerivedByTool4Idx" );
		cfcore::CFGenKbToolSetByTool4IdxKey key;
		if( ToolId4 == NULL ) {
			key.setOptionalToolId4Null();
		}
		else {
			key.setOptionalToolId4Value( *ToolId4 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool4Idx = dictByTool4Idx->find( key );
		if( searchDictByTool4Idx != dictByTool4Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool4Idx = searchDictByTool4Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool4Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool4Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId5 )
	{
		static const std::string S_ProcName( "readDerivedByTool5Idx" );
		cfcore::CFGenKbToolSetByTool5IdxKey key;
		if( ToolId5 == NULL ) {
			key.setOptionalToolId5Null();
		}
		else {
			key.setOptionalToolId5Value( *ToolId5 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool5Idx = dictByTool5Idx->find( key );
		if( searchDictByTool5Idx != dictByTool5Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool5Idx = searchDictByTool5Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool5Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool5Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId6 )
	{
		static const std::string S_ProcName( "readDerivedByTool6Idx" );
		cfcore::CFGenKbToolSetByTool6IdxKey key;
		if( ToolId6 == NULL ) {
			key.setOptionalToolId6Null();
		}
		else {
			key.setOptionalToolId6Value( *ToolId6 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool6Idx = dictByTool6Idx->find( key );
		if( searchDictByTool6Idx != dictByTool6Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool6Idx = searchDictByTool6Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool6Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool6Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readDerivedByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId7 )
	{
		static const std::string S_ProcName( "readDerivedByTool7Idx" );
		cfcore::CFGenKbToolSetByTool7IdxKey key;
		if( ToolId7 == NULL ) {
			key.setOptionalToolId7Null();
		}
		else {
			key.setOptionalToolId7Value( *ToolId7 );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> recVec;
		cfcore::CFGenKbToolSetBuff* clone;
		auto searchDictByTool7Idx = dictByTool7Idx->find( key );
		if( searchDictByTool7Idx != dictByTool7Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool7Idx = searchDictByTool7Idx->second;
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator iter = subdictTool7Idx->begin();
			std::map<cfcore::CFGenKbToolSetPKey,
				cfcore::CFGenKbToolSetBuff*>::iterator end = subdictTool7Idx->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readDerivedByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readDerivedByIdIdx" );
		cfcore::CFGenKbToolSetPKey key;
		key.setRequiredId( Id );
		cfcore::CFGenKbToolSetBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbToolSetBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbToolSetBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readBuffByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t Id )
	{
		static const std::string S_ProcName( "readBuffByIdIdx" );
		cfcore::CFGenKbToolSetBuff* buff = readDerivedByIdIdx( Authorization,
			Id );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readBuffByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readBuffByNameIdx" );
		cfcore::CFGenKbToolSetBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolId0 )
	{
		static const std::string S_ProcName( "readBuffByTool0Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool0Idx( Authorization,
			ToolId0 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId1 )
	{
		static const std::string S_ProcName( "readBuffByTool1Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool1Idx( Authorization,
			ToolId1 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId2 )
	{
		static const std::string S_ProcName( "readBuffByTool2Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool2Idx( Authorization,
			ToolId2 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId3 )
	{
		static const std::string S_ProcName( "readBuffByTool3Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool3Idx( Authorization,
			ToolId3 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId4 )
	{
		static const std::string S_ProcName( "readBuffByTool4Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool4Idx( Authorization,
			ToolId4 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId5 )
	{
		static const std::string S_ProcName( "readBuffByTool5Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool5Idx( Authorization,
			ToolId5 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId6 )
	{
		static const std::string S_ProcName( "readBuffByTool6Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool6Idx( Authorization,
			ToolId6 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> CFGenKbRamToolSetTable::readBuffByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ToolId7 )
	{
		static const std::string S_ProcName( "readBuffByTool7Idx" );
		cfcore::CFGenKbToolSetBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = readDerivedByTool7Idx( Authorization,
			ToolId7 );
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readBuffByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readBuffByLookupNameIdx" );
		cfcore::CFGenKbToolSetBuff* buff = readBuffByNameIdx( Authorization,
			Name );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::readDerivedByLookupNameIdx( const cfcore::CFGenKbAuthorization* Authorization, const std::string& Name,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDerivedByLookupNameIdx" );
		cfcore::CFGenKbToolSetBuff* buff = readDerivedByNameIdx( Authorization,
			Name );
		if( buff != NULL ) {
			return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( buff->clone() ) );
		}
		else {
			return( NULL );
		}
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbRamToolSetTable::updateToolSet( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbToolSetBuff* Buff )
	{
		static const std::string S_ProcName( "updateToolSet" );
		cfcore::CFGenKbToolSetPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in ToolSet for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbToolSetBuff* existing = searchExisting->second;

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
			std::string Msg( "Collision detected for ToolSet primary key " );
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
		cfcore::CFGenKbToolSetByNameIdxKey existingKeyNameIdx;
		existingKeyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbToolSetByNameIdxKey newKeyNameIdx;
		newKeyNameIdx.setRequiredName( Buff->getRequiredName() );
		cfcore::CFGenKbToolSetByTool0IdxKey existingKeyTool0Idx;
		existingKeyTool0Idx.setRequiredToolId0( existing->getRequiredToolId0() );
		cfcore::CFGenKbToolSetByTool0IdxKey newKeyTool0Idx;
		newKeyTool0Idx.setRequiredToolId0( Buff->getRequiredToolId0() );
		cfcore::CFGenKbToolSetByTool1IdxKey existingKeyTool1Idx;
		if( existing->isOptionalToolId1Null() ) {
			existingKeyTool1Idx.setOptionalToolId1Null();
		}
		else {
			existingKeyTool1Idx.setOptionalToolId1Value( existing->getOptionalToolId1Value() );
		}
		cfcore::CFGenKbToolSetByTool1IdxKey newKeyTool1Idx;
		if( Buff->isOptionalToolId1Null() ) {
			newKeyTool1Idx.setOptionalToolId1Null();
		}
		else {
			newKeyTool1Idx.setOptionalToolId1Value( Buff->getOptionalToolId1Value() );
		}
		cfcore::CFGenKbToolSetByTool2IdxKey existingKeyTool2Idx;
		if( existing->isOptionalToolId2Null() ) {
			existingKeyTool2Idx.setOptionalToolId2Null();
		}
		else {
			existingKeyTool2Idx.setOptionalToolId2Value( existing->getOptionalToolId2Value() );
		}
		cfcore::CFGenKbToolSetByTool2IdxKey newKeyTool2Idx;
		if( Buff->isOptionalToolId2Null() ) {
			newKeyTool2Idx.setOptionalToolId2Null();
		}
		else {
			newKeyTool2Idx.setOptionalToolId2Value( Buff->getOptionalToolId2Value() );
		}
		cfcore::CFGenKbToolSetByTool3IdxKey existingKeyTool3Idx;
		if( existing->isOptionalToolId3Null() ) {
			existingKeyTool3Idx.setOptionalToolId3Null();
		}
		else {
			existingKeyTool3Idx.setOptionalToolId3Value( existing->getOptionalToolId3Value() );
		}
		cfcore::CFGenKbToolSetByTool3IdxKey newKeyTool3Idx;
		if( Buff->isOptionalToolId3Null() ) {
			newKeyTool3Idx.setOptionalToolId3Null();
		}
		else {
			newKeyTool3Idx.setOptionalToolId3Value( Buff->getOptionalToolId3Value() );
		}
		cfcore::CFGenKbToolSetByTool4IdxKey existingKeyTool4Idx;
		if( existing->isOptionalToolId4Null() ) {
			existingKeyTool4Idx.setOptionalToolId4Null();
		}
		else {
			existingKeyTool4Idx.setOptionalToolId4Value( existing->getOptionalToolId4Value() );
		}
		cfcore::CFGenKbToolSetByTool4IdxKey newKeyTool4Idx;
		if( Buff->isOptionalToolId4Null() ) {
			newKeyTool4Idx.setOptionalToolId4Null();
		}
		else {
			newKeyTool4Idx.setOptionalToolId4Value( Buff->getOptionalToolId4Value() );
		}
		cfcore::CFGenKbToolSetByTool5IdxKey existingKeyTool5Idx;
		if( existing->isOptionalToolId5Null() ) {
			existingKeyTool5Idx.setOptionalToolId5Null();
		}
		else {
			existingKeyTool5Idx.setOptionalToolId5Value( existing->getOptionalToolId5Value() );
		}
		cfcore::CFGenKbToolSetByTool5IdxKey newKeyTool5Idx;
		if( Buff->isOptionalToolId5Null() ) {
			newKeyTool5Idx.setOptionalToolId5Null();
		}
		else {
			newKeyTool5Idx.setOptionalToolId5Value( Buff->getOptionalToolId5Value() );
		}
		cfcore::CFGenKbToolSetByTool6IdxKey existingKeyTool6Idx;
		if( existing->isOptionalToolId6Null() ) {
			existingKeyTool6Idx.setOptionalToolId6Null();
		}
		else {
			existingKeyTool6Idx.setOptionalToolId6Value( existing->getOptionalToolId6Value() );
		}
		cfcore::CFGenKbToolSetByTool6IdxKey newKeyTool6Idx;
		if( Buff->isOptionalToolId6Null() ) {
			newKeyTool6Idx.setOptionalToolId6Null();
		}
		else {
			newKeyTool6Idx.setOptionalToolId6Value( Buff->getOptionalToolId6Value() );
		}
		cfcore::CFGenKbToolSetByTool7IdxKey existingKeyTool7Idx;
		if( existing->isOptionalToolId7Null() ) {
			existingKeyTool7Idx.setOptionalToolId7Null();
		}
		else {
			existingKeyTool7Idx.setOptionalToolId7Value( existing->getOptionalToolId7Value() );
		}
		cfcore::CFGenKbToolSetByTool7IdxKey newKeyTool7Idx;
		if( Buff->isOptionalToolId7Null() ) {
			newKeyTool7Idx.setOptionalToolId7Null();
		}
		else {
			newKeyTool7Idx.setOptionalToolId7Value( Buff->getOptionalToolId7Value() );
		}
		// Check unique indexes

		if( existingKeyNameIdx != newKeyNameIdx ) {
			auto searchDictByNameIdx = dictByNameIdx->find( newKeyNameIdx );
			if( searchDictByNameIdx != dictByNameIdx->end() ) {
				std::string Msg( "Duplicate key detected for index ToolSetName " + newKeyNameIdx.toString() );
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
				cfcore::CFGenKbToolBuff* chk = dynamic_cast<cfcore::CFGenKbToolBuff*>( schema->getTableTool()->readDerivedByIdIdx( Authorization,
						Buff->getRequiredToolId0() ) );
				if( chk == NULL ) {
					delete Buff;
					std::string Msg( "Could not resolve Lookup relationship Tool0 to table Tool" );
					throw cflib::CFLibUnresolvedRelationException( CLASS_NAME,
						S_ProcName,
						Msg );
				}
				delete chk;
				chk = NULL;
			}
		}

		// Update is valid
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}
		// Copy edited buffer to existing persistent buffer

		if( Buff->getClassCode() != cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			const static std::string S_IsNotA( " is not a cfcore::CFGenKbToolSetBuff" );
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

		dictByPKey->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		auto removalDictByNameIdx = dictByNameIdx->find( existingKeyNameIdx );
		if( removalDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( removalDictByNameIdx );
		}
		dictByNameIdx->insert( std::map<cfcore::CFGenKbToolSetByNameIdxKey, cfcore::CFGenKbToolSetBuff*>::value_type( newKeyNameIdx, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool0Idx;
		auto searchDictByTool0Idx = dictByTool0Idx->find( existingKeyTool0Idx );
		if( searchDictByTool0Idx != dictByTool0Idx->end() ) {
			subdictTool0Idx = searchDictByTool0Idx->second;
			auto searchSubDict = subdictTool0Idx->find( pkey );
			if( searchSubDict != subdictTool0Idx->end() ) {
				subdictTool0Idx->erase( searchSubDict );
			}
			if( subdictTool0Idx->size() <= 0 ) {
				delete subdictTool0Idx;
				dictByTool0Idx->erase( searchDictByTool0Idx );
			}
			subdictTool0Idx = NULL;
		}
		auto searchNewKeyDictByTool0Idx = dictByTool0Idx->find( newKeyTool0Idx );
		if( searchNewKeyDictByTool0Idx != dictByTool0Idx->end() ) {
			subdictTool0Idx = searchNewKeyDictByTool0Idx->second;
		}
		else {
			subdictTool0Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool0Idx->insert( std::map<cfcore::CFGenKbToolSetByTool0IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool0Idx, subdictTool0Idx ) );
		}
		subdictTool0Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool1Idx;
		auto searchDictByTool1Idx = dictByTool1Idx->find( existingKeyTool1Idx );
		if( searchDictByTool1Idx != dictByTool1Idx->end() ) {
			subdictTool1Idx = searchDictByTool1Idx->second;
			auto searchSubDict = subdictTool1Idx->find( pkey );
			if( searchSubDict != subdictTool1Idx->end() ) {
				subdictTool1Idx->erase( searchSubDict );
			}
			if( subdictTool1Idx->size() <= 0 ) {
				delete subdictTool1Idx;
				dictByTool1Idx->erase( searchDictByTool1Idx );
			}
			subdictTool1Idx = NULL;
		}
		auto searchNewKeyDictByTool1Idx = dictByTool1Idx->find( newKeyTool1Idx );
		if( searchNewKeyDictByTool1Idx != dictByTool1Idx->end() ) {
			subdictTool1Idx = searchNewKeyDictByTool1Idx->second;
		}
		else {
			subdictTool1Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool1Idx->insert( std::map<cfcore::CFGenKbToolSetByTool1IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool1Idx, subdictTool1Idx ) );
		}
		subdictTool1Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool2Idx;
		auto searchDictByTool2Idx = dictByTool2Idx->find( existingKeyTool2Idx );
		if( searchDictByTool2Idx != dictByTool2Idx->end() ) {
			subdictTool2Idx = searchDictByTool2Idx->second;
			auto searchSubDict = subdictTool2Idx->find( pkey );
			if( searchSubDict != subdictTool2Idx->end() ) {
				subdictTool2Idx->erase( searchSubDict );
			}
			if( subdictTool2Idx->size() <= 0 ) {
				delete subdictTool2Idx;
				dictByTool2Idx->erase( searchDictByTool2Idx );
			}
			subdictTool2Idx = NULL;
		}
		auto searchNewKeyDictByTool2Idx = dictByTool2Idx->find( newKeyTool2Idx );
		if( searchNewKeyDictByTool2Idx != dictByTool2Idx->end() ) {
			subdictTool2Idx = searchNewKeyDictByTool2Idx->second;
		}
		else {
			subdictTool2Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool2Idx->insert( std::map<cfcore::CFGenKbToolSetByTool2IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool2Idx, subdictTool2Idx ) );
		}
		subdictTool2Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool3Idx;
		auto searchDictByTool3Idx = dictByTool3Idx->find( existingKeyTool3Idx );
		if( searchDictByTool3Idx != dictByTool3Idx->end() ) {
			subdictTool3Idx = searchDictByTool3Idx->second;
			auto searchSubDict = subdictTool3Idx->find( pkey );
			if( searchSubDict != subdictTool3Idx->end() ) {
				subdictTool3Idx->erase( searchSubDict );
			}
			if( subdictTool3Idx->size() <= 0 ) {
				delete subdictTool3Idx;
				dictByTool3Idx->erase( searchDictByTool3Idx );
			}
			subdictTool3Idx = NULL;
		}
		auto searchNewKeyDictByTool3Idx = dictByTool3Idx->find( newKeyTool3Idx );
		if( searchNewKeyDictByTool3Idx != dictByTool3Idx->end() ) {
			subdictTool3Idx = searchNewKeyDictByTool3Idx->second;
		}
		else {
			subdictTool3Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool3Idx->insert( std::map<cfcore::CFGenKbToolSetByTool3IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool3Idx, subdictTool3Idx ) );
		}
		subdictTool3Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool4Idx;
		auto searchDictByTool4Idx = dictByTool4Idx->find( existingKeyTool4Idx );
		if( searchDictByTool4Idx != dictByTool4Idx->end() ) {
			subdictTool4Idx = searchDictByTool4Idx->second;
			auto searchSubDict = subdictTool4Idx->find( pkey );
			if( searchSubDict != subdictTool4Idx->end() ) {
				subdictTool4Idx->erase( searchSubDict );
			}
			if( subdictTool4Idx->size() <= 0 ) {
				delete subdictTool4Idx;
				dictByTool4Idx->erase( searchDictByTool4Idx );
			}
			subdictTool4Idx = NULL;
		}
		auto searchNewKeyDictByTool4Idx = dictByTool4Idx->find( newKeyTool4Idx );
		if( searchNewKeyDictByTool4Idx != dictByTool4Idx->end() ) {
			subdictTool4Idx = searchNewKeyDictByTool4Idx->second;
		}
		else {
			subdictTool4Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool4Idx->insert( std::map<cfcore::CFGenKbToolSetByTool4IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool4Idx, subdictTool4Idx ) );
		}
		subdictTool4Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool5Idx;
		auto searchDictByTool5Idx = dictByTool5Idx->find( existingKeyTool5Idx );
		if( searchDictByTool5Idx != dictByTool5Idx->end() ) {
			subdictTool5Idx = searchDictByTool5Idx->second;
			auto searchSubDict = subdictTool5Idx->find( pkey );
			if( searchSubDict != subdictTool5Idx->end() ) {
				subdictTool5Idx->erase( searchSubDict );
			}
			if( subdictTool5Idx->size() <= 0 ) {
				delete subdictTool5Idx;
				dictByTool5Idx->erase( searchDictByTool5Idx );
			}
			subdictTool5Idx = NULL;
		}
		auto searchNewKeyDictByTool5Idx = dictByTool5Idx->find( newKeyTool5Idx );
		if( searchNewKeyDictByTool5Idx != dictByTool5Idx->end() ) {
			subdictTool5Idx = searchNewKeyDictByTool5Idx->second;
		}
		else {
			subdictTool5Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool5Idx->insert( std::map<cfcore::CFGenKbToolSetByTool5IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool5Idx, subdictTool5Idx ) );
		}
		subdictTool5Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool6Idx;
		auto searchDictByTool6Idx = dictByTool6Idx->find( existingKeyTool6Idx );
		if( searchDictByTool6Idx != dictByTool6Idx->end() ) {
			subdictTool6Idx = searchDictByTool6Idx->second;
			auto searchSubDict = subdictTool6Idx->find( pkey );
			if( searchSubDict != subdictTool6Idx->end() ) {
				subdictTool6Idx->erase( searchSubDict );
			}
			if( subdictTool6Idx->size() <= 0 ) {
				delete subdictTool6Idx;
				dictByTool6Idx->erase( searchDictByTool6Idx );
			}
			subdictTool6Idx = NULL;
		}
		auto searchNewKeyDictByTool6Idx = dictByTool6Idx->find( newKeyTool6Idx );
		if( searchNewKeyDictByTool6Idx != dictByTool6Idx->end() ) {
			subdictTool6Idx = searchNewKeyDictByTool6Idx->second;
		}
		else {
			subdictTool6Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool6Idx->insert( std::map<cfcore::CFGenKbToolSetByTool6IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool6Idx, subdictTool6Idx ) );
		}
		subdictTool6Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbToolSetPKey,
			 cfcore::CFGenKbToolSetBuff*>* subdictTool7Idx;
		auto searchDictByTool7Idx = dictByTool7Idx->find( existingKeyTool7Idx );
		if( searchDictByTool7Idx != dictByTool7Idx->end() ) {
			subdictTool7Idx = searchDictByTool7Idx->second;
			auto searchSubDict = subdictTool7Idx->find( pkey );
			if( searchSubDict != subdictTool7Idx->end() ) {
				subdictTool7Idx->erase( searchSubDict );
			}
			if( subdictTool7Idx->size() <= 0 ) {
				delete subdictTool7Idx;
				dictByTool7Idx->erase( searchDictByTool7Idx );
			}
			subdictTool7Idx = NULL;
		}
		auto searchNewKeyDictByTool7Idx = dictByTool7Idx->find( newKeyTool7Idx );
		if( searchNewKeyDictByTool7Idx != dictByTool7Idx->end() ) {
			subdictTool7Idx = searchNewKeyDictByTool7Idx->second;
		}
		else {
			subdictTool7Idx = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>();
			dictByTool7Idx->insert( std::map<cfcore::CFGenKbToolSetByTool7IdxKey,
				std::map<cfcore::CFGenKbToolSetPKey,
					cfcore::CFGenKbToolSetBuff*>*>::value_type( newKeyTool7Idx, subdictTool7Idx ) );
		}
		subdictTool7Idx->insert( std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbToolSetBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamToolSetTable::deleteToolSet( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbToolSetBuff* Buff )
	{
		static const std::string S_ProcName( "deleteToolSet" );
		static const std::string S_Prev( "prev" );
		classcode_t classCode;
		cfcore::CFGenKbToolSetPKey pkey;
		pkey.setRequiredId( Buff->getRequiredId() );
		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			return;
		}
		cfcore::CFGenKbToolSetBuff* existing = searchExisting->second;
		cfcore::CFGenKbToolSetByNameIdxKey keyNameIdx;
		keyNameIdx.setRequiredName( existing->getRequiredName() );
		cfcore::CFGenKbToolSetByTool0IdxKey keyTool0Idx;
		keyTool0Idx.setRequiredToolId0( existing->getRequiredToolId0() );
		cfcore::CFGenKbToolSetByTool1IdxKey keyTool1Idx;
		if( existing->isOptionalToolId1Null() ) {
			keyTool1Idx.setOptionalToolId1Null();
		}
		else {
			keyTool1Idx.setOptionalToolId1Value( existing->getOptionalToolId1Value() );
		}
		cfcore::CFGenKbToolSetByTool2IdxKey keyTool2Idx;
		if( existing->isOptionalToolId2Null() ) {
			keyTool2Idx.setOptionalToolId2Null();
		}
		else {
			keyTool2Idx.setOptionalToolId2Value( existing->getOptionalToolId2Value() );
		}
		cfcore::CFGenKbToolSetByTool3IdxKey keyTool3Idx;
		if( existing->isOptionalToolId3Null() ) {
			keyTool3Idx.setOptionalToolId3Null();
		}
		else {
			keyTool3Idx.setOptionalToolId3Value( existing->getOptionalToolId3Value() );
		}
		cfcore::CFGenKbToolSetByTool4IdxKey keyTool4Idx;
		if( existing->isOptionalToolId4Null() ) {
			keyTool4Idx.setOptionalToolId4Null();
		}
		else {
			keyTool4Idx.setOptionalToolId4Value( existing->getOptionalToolId4Value() );
		}
		cfcore::CFGenKbToolSetByTool5IdxKey keyTool5Idx;
		if( existing->isOptionalToolId5Null() ) {
			keyTool5Idx.setOptionalToolId5Null();
		}
		else {
			keyTool5Idx.setOptionalToolId5Value( existing->getOptionalToolId5Value() );
		}
		cfcore::CFGenKbToolSetByTool6IdxKey keyTool6Idx;
		if( existing->isOptionalToolId6Null() ) {
			keyTool6Idx.setOptionalToolId6Null();
		}
		else {
			keyTool6Idx.setOptionalToolId6Value( existing->getOptionalToolId6Value() );
		}
		cfcore::CFGenKbToolSetByTool7IdxKey keyTool7Idx;
		if( existing->isOptionalToolId7Null() ) {
			keyTool7Idx.setOptionalToolId7Null();
		}
		else {
			keyTool7Idx.setOptionalToolId7Value( existing->getOptionalToolId7Value() );
		}
		// Validate reverse foreign keys

		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> derivedByToolSetIdx = schema->getTableGenItem()->readDerivedByToolSetIdx( Authorization,
						existing->getRequiredId() );
		if( derivedByToolSetIdx.size() > 0 ) {
			std::string Msg( "Dependents detected for Lookup relationship ToolSet from table GenItem for primary key " + pkey.toString() );
			throw cflib::CFLibDependentsDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		// Delete is valid
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::CFGenKbToolSetBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByNameIdx = dictByNameIdx->find( keyNameIdx );
		if( searchDictByNameIdx != dictByNameIdx->end() ) {
			dictByNameIdx->erase( searchDictByNameIdx );
		}

		auto searchDictByTool0Idx = dictByTool0Idx->find( keyTool0Idx );
		if( searchDictByTool0Idx != dictByTool0Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool0Idx = searchDictByTool0Idx->second;
			auto searchSubDict = subdictTool0Idx->find( pkey );
			if( searchSubDict != subdictTool0Idx->end() ) {
				subdictTool0Idx->erase( searchSubDict );
			}
			subdictTool0Idx = NULL;
		}

		auto searchDictByTool1Idx = dictByTool1Idx->find( keyTool1Idx );
		if( searchDictByTool1Idx != dictByTool1Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool1Idx = searchDictByTool1Idx->second;
			auto searchSubDict = subdictTool1Idx->find( pkey );
			if( searchSubDict != subdictTool1Idx->end() ) {
				subdictTool1Idx->erase( searchSubDict );
			}
			subdictTool1Idx = NULL;
		}

		auto searchDictByTool2Idx = dictByTool2Idx->find( keyTool2Idx );
		if( searchDictByTool2Idx != dictByTool2Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool2Idx = searchDictByTool2Idx->second;
			auto searchSubDict = subdictTool2Idx->find( pkey );
			if( searchSubDict != subdictTool2Idx->end() ) {
				subdictTool2Idx->erase( searchSubDict );
			}
			subdictTool2Idx = NULL;
		}

		auto searchDictByTool3Idx = dictByTool3Idx->find( keyTool3Idx );
		if( searchDictByTool3Idx != dictByTool3Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool3Idx = searchDictByTool3Idx->second;
			auto searchSubDict = subdictTool3Idx->find( pkey );
			if( searchSubDict != subdictTool3Idx->end() ) {
				subdictTool3Idx->erase( searchSubDict );
			}
			subdictTool3Idx = NULL;
		}

		auto searchDictByTool4Idx = dictByTool4Idx->find( keyTool4Idx );
		if( searchDictByTool4Idx != dictByTool4Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool4Idx = searchDictByTool4Idx->second;
			auto searchSubDict = subdictTool4Idx->find( pkey );
			if( searchSubDict != subdictTool4Idx->end() ) {
				subdictTool4Idx->erase( searchSubDict );
			}
			subdictTool4Idx = NULL;
		}

		auto searchDictByTool5Idx = dictByTool5Idx->find( keyTool5Idx );
		if( searchDictByTool5Idx != dictByTool5Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool5Idx = searchDictByTool5Idx->second;
			auto searchSubDict = subdictTool5Idx->find( pkey );
			if( searchSubDict != subdictTool5Idx->end() ) {
				subdictTool5Idx->erase( searchSubDict );
			}
			subdictTool5Idx = NULL;
		}

		auto searchDictByTool6Idx = dictByTool6Idx->find( keyTool6Idx );
		if( searchDictByTool6Idx != dictByTool6Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool6Idx = searchDictByTool6Idx->second;
			auto searchSubDict = subdictTool6Idx->find( pkey );
			if( searchSubDict != subdictTool6Idx->end() ) {
				subdictTool6Idx->erase( searchSubDict );
			}
			subdictTool6Idx = NULL;
		}

		auto searchDictByTool7Idx = dictByTool7Idx->find( keyTool7Idx );
		if( searchDictByTool7Idx != dictByTool7Idx->end() ) {
			std::map<cfcore::CFGenKbToolSetPKey,
				 cfcore::CFGenKbToolSetBuff*>* subdictTool7Idx = searchDictByTool7Idx->second;
			auto searchSubDict = subdictTool7Idx->find( pkey );
			if( searchSubDict != subdictTool7Idx->end() ) {
				subdictTool7Idx->erase( searchSubDict );
			}
			subdictTool7Idx = NULL;
		}

		if( existing != NULL ) {
			delete existing;
			existing = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argId )
	{
		cfcore::CFGenKbToolSetPKey key;
		key.setRequiredId( argId );
		deleteToolSetByIdIdx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName )
	{
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( argName );
		deleteToolSetByNameIdx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByNameIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByNameIdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolId0 )
	{
		cfcore::CFGenKbToolSetByTool0IdxKey key;
		key.setRequiredToolId0( argToolId0 );
		deleteToolSetByTool0Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool0Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool0IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId1 )
	{
		cfcore::CFGenKbToolSetByTool1IdxKey key;
		if( argToolId1 == NULL ) {
			key.setOptionalToolId1Null();
		}
		else {
			key.setOptionalToolId1Value( *argToolId1 );
		}
		deleteToolSetByTool1Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool1Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool1IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId1Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId2 )
	{
		cfcore::CFGenKbToolSetByTool2IdxKey key;
		if( argToolId2 == NULL ) {
			key.setOptionalToolId2Null();
		}
		else {
			key.setOptionalToolId2Value( *argToolId2 );
		}
		deleteToolSetByTool2Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool2Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool2IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId2Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId3 )
	{
		cfcore::CFGenKbToolSetByTool3IdxKey key;
		if( argToolId3 == NULL ) {
			key.setOptionalToolId3Null();
		}
		else {
			key.setOptionalToolId3Value( *argToolId3 );
		}
		deleteToolSetByTool3Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool3Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool3IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId3Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId4 )
	{
		cfcore::CFGenKbToolSetByTool4IdxKey key;
		if( argToolId4 == NULL ) {
			key.setOptionalToolId4Null();
		}
		else {
			key.setOptionalToolId4Value( *argToolId4 );
		}
		deleteToolSetByTool4Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool4Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool4IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId4Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId5 )
	{
		cfcore::CFGenKbToolSetByTool5IdxKey key;
		if( argToolId5 == NULL ) {
			key.setOptionalToolId5Null();
		}
		else {
			key.setOptionalToolId5Value( *argToolId5 );
		}
		deleteToolSetByTool5Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool5Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool5IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId5Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId6 )
	{
		cfcore::CFGenKbToolSetByTool6IdxKey key;
		if( argToolId6 == NULL ) {
			key.setOptionalToolId6Null();
		}
		else {
			key.setOptionalToolId6Value( *argToolId6 );
		}
		deleteToolSetByTool6Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool6Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool6IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId6Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argToolId7 )
	{
		cfcore::CFGenKbToolSetByTool7IdxKey key;
		if( argToolId7 == NULL ) {
			key.setOptionalToolId7Null();
		}
		else {
			key.setOptionalToolId7Value( *argToolId7 );
		}
		deleteToolSetByTool7Idx( Authorization, &key );
	}

	void CFGenKbRamToolSetTable::deleteToolSetByTool7Idx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbToolSetByTool7IdxKey* argKey )
	{
		cfcore::CFGenKbToolSetBuff* cur = NULL;
		cfcore::CFGenKbToolSetBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalToolId7Null() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> matchSet;
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbToolSetPKey,
			cfcore::CFGenKbToolSetBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableToolSet()->readDerivedByIdIdx( Authorization,
				cur->getRequiredId() );
			rereadCur = cur;
			deleteToolSet( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamToolSetTable::releasePreparedStatements() {
	}

}
