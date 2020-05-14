
// Description: C++18 Implementation for an in-memory RAM DbIO for GenFile.

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

	const std::string CFGenKbRamGenFileTable::CLASS_NAME( "CFGenKbRamGenFileTable" );

	CFGenKbRamGenFileTable::CFGenKbRamGenFileTable( ICFGenKbSchema* argSchema )
	: cfcore::ICFGenKbGenFileTable()
	{
		schema = argSchema;
		dictByPKey = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
		dictByXSrcBundle = new std::map<cfcore::CFGenKbGenFileByXSrcBundleKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
		dictByXModName = new std::map<cfcore::CFGenKbGenFileByXModNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
		dictByXBasePkg = new std::map<cfcore::CFGenKbGenFileByXBasePkgKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
		dictByXSubPkg = new std::map<cfcore::CFGenKbGenFileByXSubPkgKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
		dictByXExpClsName = new std::map<cfcore::CFGenKbGenFileByXExpClsNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
		dictByXExpKeyName = new std::map<cfcore::CFGenKbGenFileByXExpKeyNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
		dictByXExpFileName = new std::map<cfcore::CFGenKbGenFileByXExpFileNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>();
	}

	CFGenKbRamGenFileTable::~CFGenKbRamGenFileTable() {
		if( dictByXSrcBundle != NULL ) {
			for( auto iterDict = dictByXSrcBundle->begin(); iterDict != dictByXSrcBundle->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXSrcBundle;
			dictByXSrcBundle = NULL;
		}
		if( dictByXModName != NULL ) {
			for( auto iterDict = dictByXModName->begin(); iterDict != dictByXModName->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXModName;
			dictByXModName = NULL;
		}
		if( dictByXBasePkg != NULL ) {
			for( auto iterDict = dictByXBasePkg->begin(); iterDict != dictByXBasePkg->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXBasePkg;
			dictByXBasePkg = NULL;
		}
		if( dictByXSubPkg != NULL ) {
			for( auto iterDict = dictByXSubPkg->begin(); iterDict != dictByXSubPkg->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXSubPkg;
			dictByXSubPkg = NULL;
		}
		if( dictByXExpClsName != NULL ) {
			for( auto iterDict = dictByXExpClsName->begin(); iterDict != dictByXExpClsName->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXExpClsName;
			dictByXExpClsName = NULL;
		}
		if( dictByXExpKeyName != NULL ) {
			for( auto iterDict = dictByXExpKeyName->begin(); iterDict != dictByXExpKeyName->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXExpKeyName;
			dictByXExpKeyName = NULL;
		}
		if( dictByXExpFileName != NULL ) {
			for( auto iterDict = dictByXExpFileName->begin(); iterDict != dictByXExpFileName->end(); iterDict ++ ) {
				delete iterDict->second;
				iterDict->second = NULL;
			}
			delete dictByXExpFileName;
			dictByXExpFileName = NULL;
		}
		if( dictByPKey != NULL ) {
			delete dictByPKey;
			dictByPKey = NULL;
		}
		schema = NULL;
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::createGenFile( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenFileBuff* Buff )
	{
		static const std::string S_ProcName( "createGenFile" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );
		cfcore::CFGenKbGenFileByXSrcBundleKey keyXSrcBundle;
		if( Buff->isOptionalSourceBundleTenantIdNull() ) {
			keyXSrcBundle.setOptionalSourceBundleTenantIdNull();
		}
		else {
			keyXSrcBundle.setOptionalSourceBundleTenantIdValue( Buff->getOptionalSourceBundleTenantIdValue() );
		}
		if( Buff->isOptionalSourceBundleGelCacheIdNull() ) {
			keyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			keyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( Buff->getOptionalSourceBundleGelCacheIdValue() );
		}
		if( Buff->isOptionalSourceBundleGelIdNull() ) {
			keyXSrcBundle.setOptionalSourceBundleGelIdNull();
		}
		else {
			keyXSrcBundle.setOptionalSourceBundleGelIdValue( Buff->getOptionalSourceBundleGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXModNameKey keyXModName;
		if( Buff->isOptionalModuleNameTenantIdNull() ) {
			keyXModName.setOptionalModuleNameTenantIdNull();
		}
		else {
			keyXModName.setOptionalModuleNameTenantIdValue( Buff->getOptionalModuleNameTenantIdValue() );
		}
		if( Buff->isOptionalModuleNameGelCacheIdNull() ) {
			keyXModName.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			keyXModName.setOptionalModuleNameGelCacheIdValue( Buff->getOptionalModuleNameGelCacheIdValue() );
		}
		if( Buff->isOptionalModuleNameGelIdNull() ) {
			keyXModName.setOptionalModuleNameGelIdNull();
		}
		else {
			keyXModName.setOptionalModuleNameGelIdValue( Buff->getOptionalModuleNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXBasePkgKey keyXBasePkg;
		if( Buff->isOptionalBasePackageTenantIdNull() ) {
			keyXBasePkg.setOptionalBasePackageTenantIdNull();
		}
		else {
			keyXBasePkg.setOptionalBasePackageTenantIdValue( Buff->getOptionalBasePackageTenantIdValue() );
		}
		if( Buff->isOptionalBasePackageGelCacheIdNull() ) {
			keyXBasePkg.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			keyXBasePkg.setOptionalBasePackageGelCacheIdValue( Buff->getOptionalBasePackageGelCacheIdValue() );
		}
		if( Buff->isOptionalBasePackageGelIdNull() ) {
			keyXBasePkg.setOptionalBasePackageGelIdNull();
		}
		else {
			keyXBasePkg.setOptionalBasePackageGelIdValue( Buff->getOptionalBasePackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXSubPkgKey keyXSubPkg;
		if( Buff->isOptionalSubPackageTenantIdNull() ) {
			keyXSubPkg.setOptionalSubPackageTenantIdNull();
		}
		else {
			keyXSubPkg.setOptionalSubPackageTenantIdValue( Buff->getOptionalSubPackageTenantIdValue() );
		}
		if( Buff->isOptionalSubPackageGelCacheIdNull() ) {
			keyXSubPkg.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			keyXSubPkg.setOptionalSubPackageGelCacheIdValue( Buff->getOptionalSubPackageGelCacheIdValue() );
		}
		if( Buff->isOptionalSubPackageGelIdNull() ) {
			keyXSubPkg.setOptionalSubPackageGelIdNull();
		}
		else {
			keyXSubPkg.setOptionalSubPackageGelIdValue( Buff->getOptionalSubPackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpClsNameKey keyXExpClsName;
		if( Buff->isOptionalExpansionClassNameTenantIdNull() ) {
			keyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			keyXExpClsName.setOptionalExpansionClassNameTenantIdValue( Buff->getOptionalExpansionClassNameTenantIdValue() );
		}
		if( Buff->isOptionalExpansionClassNameGelCacheIdNull() ) {
			keyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			keyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( Buff->getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( Buff->isOptionalExpansionClassNameGelIdNull() ) {
			keyXExpClsName.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			keyXExpClsName.setOptionalExpansionClassNameGelIdValue( Buff->getOptionalExpansionClassNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpKeyNameKey keyXExpKeyName;
		if( Buff->isOptionalExpansionKeyNameTenantIdNull() ) {
			keyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			keyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( Buff->getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( Buff->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( Buff->getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( Buff->isOptionalExpansionKeyNameGelIdNull() ) {
			keyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			keyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( Buff->getOptionalExpansionKeyNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpFileNameKey keyXExpFileName;
		if( Buff->isOptionalExpansionFileNameTenantIdNull() ) {
			keyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			keyXExpFileName.setOptionalExpansionFileNameTenantIdValue( Buff->getOptionalExpansionFileNameTenantIdValue() );
		}
		if( Buff->isOptionalExpansionFileNameGelCacheIdNull() ) {
			keyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			keyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( Buff->getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( Buff->isOptionalExpansionFileNameGelIdNull() ) {
			keyXExpFileName.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			keyXExpFileName.setOptionalExpansionFileNameGelIdValue( Buff->getOptionalExpansionFileNameGelIdValue() );
		}
		// Validate unique indexes
		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Duplicate primary key detected " + pkey.toString() );
			throw cflib::CFLibPrimaryKeyNotNewException( CLASS_NAME, S_ProcName, Msg );
		}

		// Validate foreign keys

		// Proceed with adding the new record
		cfcore::CFGenKbGenFileBuff* buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( schema->getTableGenRule()->createGenRule( Authorization,
			Buff ) );
		pkey.setRequiredTenantId( buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( buff->getRequiredItemId() );
		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXSrcBundle;
		auto searchDictByXSrcBundle = dictByXSrcBundle->find( keyXSrcBundle );
		if( searchDictByXSrcBundle != dictByXSrcBundle->end() ) {
			subdictXSrcBundle = searchDictByXSrcBundle->second;
		}
		else {
			subdictXSrcBundle = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXSrcBundle->insert( std::map<cfcore::CFGenKbGenFileByXSrcBundleKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXSrcBundle, subdictXSrcBundle ) );
		}
		subdictXSrcBundle->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXModName;
		auto searchDictByXModName = dictByXModName->find( keyXModName );
		if( searchDictByXModName != dictByXModName->end() ) {
			subdictXModName = searchDictByXModName->second;
		}
		else {
			subdictXModName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXModName->insert( std::map<cfcore::CFGenKbGenFileByXModNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXModName, subdictXModName ) );
		}
		subdictXModName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXBasePkg;
		auto searchDictByXBasePkg = dictByXBasePkg->find( keyXBasePkg );
		if( searchDictByXBasePkg != dictByXBasePkg->end() ) {
			subdictXBasePkg = searchDictByXBasePkg->second;
		}
		else {
			subdictXBasePkg = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXBasePkg->insert( std::map<cfcore::CFGenKbGenFileByXBasePkgKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXBasePkg, subdictXBasePkg ) );
		}
		subdictXBasePkg->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXSubPkg;
		auto searchDictByXSubPkg = dictByXSubPkg->find( keyXSubPkg );
		if( searchDictByXSubPkg != dictByXSubPkg->end() ) {
			subdictXSubPkg = searchDictByXSubPkg->second;
		}
		else {
			subdictXSubPkg = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXSubPkg->insert( std::map<cfcore::CFGenKbGenFileByXSubPkgKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXSubPkg, subdictXSubPkg ) );
		}
		subdictXSubPkg->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXExpClsName;
		auto searchDictByXExpClsName = dictByXExpClsName->find( keyXExpClsName );
		if( searchDictByXExpClsName != dictByXExpClsName->end() ) {
			subdictXExpClsName = searchDictByXExpClsName->second;
		}
		else {
			subdictXExpClsName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXExpClsName->insert( std::map<cfcore::CFGenKbGenFileByXExpClsNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXExpClsName, subdictXExpClsName ) );
		}
		subdictXExpClsName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXExpKeyName;
		auto searchDictByXExpKeyName = dictByXExpKeyName->find( keyXExpKeyName );
		if( searchDictByXExpKeyName != dictByXExpKeyName->end() ) {
			subdictXExpKeyName = searchDictByXExpKeyName->second;
		}
		else {
			subdictXExpKeyName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXExpKeyName->insert( std::map<cfcore::CFGenKbGenFileByXExpKeyNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXExpKeyName, subdictXExpKeyName ) );
		}
		subdictXExpKeyName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdictXExpFileName;
		auto searchDictByXExpFileName = dictByXExpFileName->find( keyXExpFileName );
		if( searchDictByXExpFileName != dictByXExpFileName->end() ) {
			subdictXExpFileName = searchDictByXExpFileName->second;
		}
		else {
			subdictXExpFileName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXExpFileName->insert( std::map<cfcore::CFGenKbGenFileByXExpFileNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( keyXExpFileName, subdictXExpFileName ) );
		}
		subdictXExpFileName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, buff ) );

		// The top level code has to clone the final buffer. The one passed in is now part of the persistent storage.
		if( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() );
		}
		return( buff );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::readDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readDerived" );
		cfcore::CFGenKbGenFileBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockDerived" );
		cfcore::CFGenKbGenFileBuff* buff;
		auto searchDictByPKey = dictByPKey->find( *PKey );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() );
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

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) {
		static const std::string S_ProcName( "readAllDerived" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> retVec;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		cfcore::CFGenKbGenFileBuff* clone;
		while( iter != end ) {
			clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
			retVec.push_back( clone );
			iter ++;
		}
		return( retVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readDerivedByTenantIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByTenantIdx( Authorization,
			TenantId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readDerivedByCartIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readDerivedByRuleTypeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readDerivedByToolSetIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readDerivedByScopeIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readDerivedByGenDefIdx" );
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = schema->getTableGenItem()->readDerivedByGenDefIdx( Authorization,
			GenDefId );
		cfcore::CFGenKbGenItemBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		else if( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
			return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			if( ( buff != NULL ) && ( buff->implementsClassCode( cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) ) {
				*iterBuffList = NULL;
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
			}
			iterBuffList ++;
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId )
	{
		static const std::string S_ProcName( "readDerivedByXSrcBundle" );
		cfcore::CFGenKbGenFileByXSrcBundleKey key;
		if( SourceBundleTenantId == NULL ) {
			key.setOptionalSourceBundleTenantIdNull();
		}
		else {
			key.setOptionalSourceBundleTenantIdValue( *SourceBundleTenantId );
		}
		if( SourceBundleGelCacheId == NULL ) {
			key.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			key.setOptionalSourceBundleGelCacheIdValue( *SourceBundleGelCacheId );
		}
		if( SourceBundleGelId == NULL ) {
			key.setOptionalSourceBundleGelIdNull();
		}
		else {
			key.setOptionalSourceBundleGelIdValue( *SourceBundleGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXSrcBundle = dictByXSrcBundle->find( key );
		if( searchDictByXSrcBundle != dictByXSrcBundle->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXSrcBundle = searchDictByXSrcBundle->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXSrcBundle->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXSrcBundle->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId )
	{
		static const std::string S_ProcName( "readDerivedByXModName" );
		cfcore::CFGenKbGenFileByXModNameKey key;
		if( ModuleNameTenantId == NULL ) {
			key.setOptionalModuleNameTenantIdNull();
		}
		else {
			key.setOptionalModuleNameTenantIdValue( *ModuleNameTenantId );
		}
		if( ModuleNameGelCacheId == NULL ) {
			key.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			key.setOptionalModuleNameGelCacheIdValue( *ModuleNameGelCacheId );
		}
		if( ModuleNameGelId == NULL ) {
			key.setOptionalModuleNameGelIdNull();
		}
		else {
			key.setOptionalModuleNameGelIdValue( *ModuleNameGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXModName = dictByXModName->find( key );
		if( searchDictByXModName != dictByXModName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXModName = searchDictByXModName->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXModName->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXModName->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId )
	{
		static const std::string S_ProcName( "readDerivedByXBasePkg" );
		cfcore::CFGenKbGenFileByXBasePkgKey key;
		if( BasePackageTenantId == NULL ) {
			key.setOptionalBasePackageTenantIdNull();
		}
		else {
			key.setOptionalBasePackageTenantIdValue( *BasePackageTenantId );
		}
		if( BasePackageGelCacheId == NULL ) {
			key.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			key.setOptionalBasePackageGelCacheIdValue( *BasePackageGelCacheId );
		}
		if( BasePackageGelId == NULL ) {
			key.setOptionalBasePackageGelIdNull();
		}
		else {
			key.setOptionalBasePackageGelIdValue( *BasePackageGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXBasePkg = dictByXBasePkg->find( key );
		if( searchDictByXBasePkg != dictByXBasePkg->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXBasePkg = searchDictByXBasePkg->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXBasePkg->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXBasePkg->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId )
	{
		static const std::string S_ProcName( "readDerivedByXSubPkg" );
		cfcore::CFGenKbGenFileByXSubPkgKey key;
		if( SubPackageTenantId == NULL ) {
			key.setOptionalSubPackageTenantIdNull();
		}
		else {
			key.setOptionalSubPackageTenantIdValue( *SubPackageTenantId );
		}
		if( SubPackageGelCacheId == NULL ) {
			key.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			key.setOptionalSubPackageGelCacheIdValue( *SubPackageGelCacheId );
		}
		if( SubPackageGelId == NULL ) {
			key.setOptionalSubPackageGelIdNull();
		}
		else {
			key.setOptionalSubPackageGelIdValue( *SubPackageGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXSubPkg = dictByXSubPkg->find( key );
		if( searchDictByXSubPkg != dictByXSubPkg->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXSubPkg = searchDictByXSubPkg->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXSubPkg->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXSubPkg->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId )
	{
		static const std::string S_ProcName( "readDerivedByXExpClsName" );
		cfcore::CFGenKbGenFileByXExpClsNameKey key;
		if( ExpansionClassNameTenantId == NULL ) {
			key.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionClassNameTenantIdValue( *ExpansionClassNameTenantId );
		}
		if( ExpansionClassNameGelCacheId == NULL ) {
			key.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelCacheIdValue( *ExpansionClassNameGelCacheId );
		}
		if( ExpansionClassNameGelId == NULL ) {
			key.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelIdValue( *ExpansionClassNameGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXExpClsName = dictByXExpClsName->find( key );
		if( searchDictByXExpClsName != dictByXExpClsName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXExpClsName = searchDictByXExpClsName->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXExpClsName->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXExpClsName->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId )
	{
		static const std::string S_ProcName( "readDerivedByXExpKeyName" );
		cfcore::CFGenKbGenFileByXExpKeyNameKey key;
		if( ExpansionKeyNameTenantId == NULL ) {
			key.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameTenantIdValue( *ExpansionKeyNameTenantId );
		}
		if( ExpansionKeyNameGelCacheId == NULL ) {
			key.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelCacheIdValue( *ExpansionKeyNameGelCacheId );
		}
		if( ExpansionKeyNameGelId == NULL ) {
			key.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelIdValue( *ExpansionKeyNameGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXExpKeyName = dictByXExpKeyName->find( key );
		if( searchDictByXExpKeyName != dictByXExpKeyName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXExpKeyName = searchDictByXExpKeyName->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXExpKeyName->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXExpKeyName->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readDerivedByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId )
	{
		static const std::string S_ProcName( "readDerivedByXExpFileName" );
		cfcore::CFGenKbGenFileByXExpFileNameKey key;
		if( ExpansionFileNameTenantId == NULL ) {
			key.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionFileNameTenantIdValue( *ExpansionFileNameTenantId );
		}
		if( ExpansionFileNameGelCacheId == NULL ) {
			key.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelCacheIdValue( *ExpansionFileNameGelCacheId );
		}
		if( ExpansionFileNameGelId == NULL ) {
			key.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelIdValue( *ExpansionFileNameGelId );
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> recVec;
		cfcore::CFGenKbGenFileBuff* clone;
		auto searchDictByXExpFileName = dictByXExpFileName->find( key );
		if( searchDictByXExpFileName != dictByXExpFileName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXExpFileName = searchDictByXExpFileName->second;
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator iter = subdictXExpFileName->begin();
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>::iterator end = subdictXExpFileName->end();
			while( iter != end ) {
				clone = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( iter->second->clone() );
				recVec.push_back( clone );
				iter ++;
			}
		}
		return( recVec );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readDerivedByItemIdIdx" );
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		key.setRequiredItemId( ItemId );
		cfcore::CFGenKbGenFileBuff* buff;
		auto searchDictByPKey = dictByPKey->find( key );
		if( searchDictByPKey != dictByPKey->end() ) {
			buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( searchDictByPKey->second );
			if( buff != NULL ) {
				buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() );
			}
		}
		else {
			buff = NULL;
		}
		return( buff );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::readBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "readBuff" );
		cfcore::CFGenKbGenFileBuff* buff = readDerived( Authorization, PKey );
		if( buff != NULL ) {
			if( buff->getClassCode() != cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
				delete buff;
				buff = NULL;
			}
		}
		return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* PKey )
	{
		static const std::string S_ProcName( "lockBuff" );
		cfcore::CFGenKbGenFileBuff* buff = lockDerived( Authorization, PKey );
		return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readAllBuff( const cfcore::CFGenKbAuthorization* Authorization )
	{
		static const std::string S_ProcName( "readAllBuff" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readAllDerived( Authorization );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readBuffByItemIdIdx" );
		cfcore::CFGenKbGenFileBuff* buff = readDerivedByItemIdIdx( Authorization,
			TenantId,
			CartridgeId,
			ItemId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId )
	{
		static const std::string S_ProcName( "readBuffByTenantIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByTenantIdx( Authorization,
			TenantId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readBuffByCartIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByCartIdx( Authorization,
			TenantId,
			CartridgeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readBuffByRuleTypeIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByRuleTypeIdx( Authorization,
			RuleTypeId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readBuffByToolSetIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByToolSetIdx( Authorization,
			ToolSetId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readBuffByScopeIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByScopeIdx( Authorization,
			ScopeDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByGenDefIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByGenDefIdx( Authorization,
			GenDefId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readBuffByAltIdx" );
		cfcore::CFGenKbGenFileBuff* buff = readDerivedByAltIdx( Authorization,
			Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
		if( buff == NULL ) {
			return( NULL );
		}
		else if( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		}
		else {
			delete buff;
			buff = NULL;
			return( NULL );
		}
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readBuffByGelExecIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByGelExecIdx( Authorization,
			GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readBuffByProbeIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByProbeIdx( Authorization,
			ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		static const std::string S_ProcName( "readBuffByBodyIdx" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByBodyIdx( Authorization,
			BodyTenantId,
			BodyGelCacheId,
			BodyGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId )
	{
		static const std::string S_ProcName( "readBuffByXSrcBundle" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXSrcBundle( Authorization,
			SourceBundleTenantId,
			SourceBundleGelCacheId,
			SourceBundleGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId )
	{
		static const std::string S_ProcName( "readBuffByXModName" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXModName( Authorization,
			ModuleNameTenantId,
			ModuleNameGelCacheId,
			ModuleNameGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId )
	{
		static const std::string S_ProcName( "readBuffByXBasePkg" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXBasePkg( Authorization,
			BasePackageTenantId,
			BasePackageGelCacheId,
			BasePackageGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId )
	{
		static const std::string S_ProcName( "readBuffByXSubPkg" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXSubPkg( Authorization,
			SubPackageTenantId,
			SubPackageGelCacheId,
			SubPackageGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId )
	{
		static const std::string S_ProcName( "readBuffByXExpClsName" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXExpClsName( Authorization,
			ExpansionClassNameTenantId,
			ExpansionClassNameGelCacheId,
			ExpansionClassNameGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId )
	{
		static const std::string S_ProcName( "readBuffByXExpKeyName" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXExpKeyName( Authorization,
			ExpansionKeyNameTenantId,
			ExpansionKeyNameGelCacheId,
			ExpansionKeyNameGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::readBuffByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId )
	{
		static const std::string S_ProcName( "readBuffByXExpFileName" );
		cfcore::CFGenKbGenFileBuff* buff;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> filteredList;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = readDerivedByXExpFileName( Authorization,
			ExpansionFileNameTenantId,
			ExpansionFileNameGelCacheId,
			ExpansionFileNameGelId );
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterBuffList = buffList.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator endBuffList = buffList.end();
		while( iterBuffList != endBuffList ) {
			buff = *iterBuffList;
			iterBuffList ++;
			if( ( buff != NULL ) && ( buff->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) ) {
				filteredList.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff->clone() ) );
			}
		}
		return( filteredList );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
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

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXSrcBundle" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXModName" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXBasePkg" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXSubPkg" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXExpClsName" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXExpKeyName" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> CFGenKbRamGenFileTable::pageBuffByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId )
	{
		static const std::string S_ProcName( "pageBuffByXExpFileName" );
		// MSS TODO WORKING
		throw cflib::CFLibNotImplementedYetException( CLASS_NAME, S_ProcName );
	}

	cfcore::CFGenKbGenFileBuff* CFGenKbRamGenFileTable::updateGenFile( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenFileBuff* Buff )
	{
		static const std::string S_ProcName( "updateGenFile" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( Buff->getRequiredTenantId() );
		pkey.setRequiredCartridgeId( Buff->getRequiredCartridgeId() );
		pkey.setRequiredItemId( Buff->getRequiredItemId() );

		// Search for existing buffer

		auto searchExisting = dictByPKey->find( pkey );
		if( searchExisting == dictByPKey->end() ) {
			delete Buff;
			std::string Msg( "Existing record not found in GenFile for key " + pkey.toString() );
			throw cflib::CFLibStaleCacheDetectedException( CLASS_NAME,
				S_ProcName,
				Msg );
		}

		cfcore::CFGenKbGenFileBuff* existing = searchExisting->second;

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
		cfcore::CFGenKbGenFileByXSrcBundleKey existingKeyXSrcBundle;
		if( existing->isOptionalSourceBundleTenantIdNull() ) {
			existingKeyXSrcBundle.setOptionalSourceBundleTenantIdNull();
		}
		else {
			existingKeyXSrcBundle.setOptionalSourceBundleTenantIdValue( existing->getOptionalSourceBundleTenantIdValue() );
		}
		if( existing->isOptionalSourceBundleGelCacheIdNull() ) {
			existingKeyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			existingKeyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( existing->getOptionalSourceBundleGelCacheIdValue() );
		}
		if( existing->isOptionalSourceBundleGelIdNull() ) {
			existingKeyXSrcBundle.setOptionalSourceBundleGelIdNull();
		}
		else {
			existingKeyXSrcBundle.setOptionalSourceBundleGelIdValue( existing->getOptionalSourceBundleGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXSrcBundleKey newKeyXSrcBundle;
		if( Buff->isOptionalSourceBundleTenantIdNull() ) {
			newKeyXSrcBundle.setOptionalSourceBundleTenantIdNull();
		}
		else {
			newKeyXSrcBundle.setOptionalSourceBundleTenantIdValue( Buff->getOptionalSourceBundleTenantIdValue() );
		}
		if( Buff->isOptionalSourceBundleGelCacheIdNull() ) {
			newKeyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			newKeyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( Buff->getOptionalSourceBundleGelCacheIdValue() );
		}
		if( Buff->isOptionalSourceBundleGelIdNull() ) {
			newKeyXSrcBundle.setOptionalSourceBundleGelIdNull();
		}
		else {
			newKeyXSrcBundle.setOptionalSourceBundleGelIdValue( Buff->getOptionalSourceBundleGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXModNameKey existingKeyXModName;
		if( existing->isOptionalModuleNameTenantIdNull() ) {
			existingKeyXModName.setOptionalModuleNameTenantIdNull();
		}
		else {
			existingKeyXModName.setOptionalModuleNameTenantIdValue( existing->getOptionalModuleNameTenantIdValue() );
		}
		if( existing->isOptionalModuleNameGelCacheIdNull() ) {
			existingKeyXModName.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			existingKeyXModName.setOptionalModuleNameGelCacheIdValue( existing->getOptionalModuleNameGelCacheIdValue() );
		}
		if( existing->isOptionalModuleNameGelIdNull() ) {
			existingKeyXModName.setOptionalModuleNameGelIdNull();
		}
		else {
			existingKeyXModName.setOptionalModuleNameGelIdValue( existing->getOptionalModuleNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXModNameKey newKeyXModName;
		if( Buff->isOptionalModuleNameTenantIdNull() ) {
			newKeyXModName.setOptionalModuleNameTenantIdNull();
		}
		else {
			newKeyXModName.setOptionalModuleNameTenantIdValue( Buff->getOptionalModuleNameTenantIdValue() );
		}
		if( Buff->isOptionalModuleNameGelCacheIdNull() ) {
			newKeyXModName.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			newKeyXModName.setOptionalModuleNameGelCacheIdValue( Buff->getOptionalModuleNameGelCacheIdValue() );
		}
		if( Buff->isOptionalModuleNameGelIdNull() ) {
			newKeyXModName.setOptionalModuleNameGelIdNull();
		}
		else {
			newKeyXModName.setOptionalModuleNameGelIdValue( Buff->getOptionalModuleNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXBasePkgKey existingKeyXBasePkg;
		if( existing->isOptionalBasePackageTenantIdNull() ) {
			existingKeyXBasePkg.setOptionalBasePackageTenantIdNull();
		}
		else {
			existingKeyXBasePkg.setOptionalBasePackageTenantIdValue( existing->getOptionalBasePackageTenantIdValue() );
		}
		if( existing->isOptionalBasePackageGelCacheIdNull() ) {
			existingKeyXBasePkg.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			existingKeyXBasePkg.setOptionalBasePackageGelCacheIdValue( existing->getOptionalBasePackageGelCacheIdValue() );
		}
		if( existing->isOptionalBasePackageGelIdNull() ) {
			existingKeyXBasePkg.setOptionalBasePackageGelIdNull();
		}
		else {
			existingKeyXBasePkg.setOptionalBasePackageGelIdValue( existing->getOptionalBasePackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXBasePkgKey newKeyXBasePkg;
		if( Buff->isOptionalBasePackageTenantIdNull() ) {
			newKeyXBasePkg.setOptionalBasePackageTenantIdNull();
		}
		else {
			newKeyXBasePkg.setOptionalBasePackageTenantIdValue( Buff->getOptionalBasePackageTenantIdValue() );
		}
		if( Buff->isOptionalBasePackageGelCacheIdNull() ) {
			newKeyXBasePkg.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			newKeyXBasePkg.setOptionalBasePackageGelCacheIdValue( Buff->getOptionalBasePackageGelCacheIdValue() );
		}
		if( Buff->isOptionalBasePackageGelIdNull() ) {
			newKeyXBasePkg.setOptionalBasePackageGelIdNull();
		}
		else {
			newKeyXBasePkg.setOptionalBasePackageGelIdValue( Buff->getOptionalBasePackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXSubPkgKey existingKeyXSubPkg;
		if( existing->isOptionalSubPackageTenantIdNull() ) {
			existingKeyXSubPkg.setOptionalSubPackageTenantIdNull();
		}
		else {
			existingKeyXSubPkg.setOptionalSubPackageTenantIdValue( existing->getOptionalSubPackageTenantIdValue() );
		}
		if( existing->isOptionalSubPackageGelCacheIdNull() ) {
			existingKeyXSubPkg.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			existingKeyXSubPkg.setOptionalSubPackageGelCacheIdValue( existing->getOptionalSubPackageGelCacheIdValue() );
		}
		if( existing->isOptionalSubPackageGelIdNull() ) {
			existingKeyXSubPkg.setOptionalSubPackageGelIdNull();
		}
		else {
			existingKeyXSubPkg.setOptionalSubPackageGelIdValue( existing->getOptionalSubPackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXSubPkgKey newKeyXSubPkg;
		if( Buff->isOptionalSubPackageTenantIdNull() ) {
			newKeyXSubPkg.setOptionalSubPackageTenantIdNull();
		}
		else {
			newKeyXSubPkg.setOptionalSubPackageTenantIdValue( Buff->getOptionalSubPackageTenantIdValue() );
		}
		if( Buff->isOptionalSubPackageGelCacheIdNull() ) {
			newKeyXSubPkg.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			newKeyXSubPkg.setOptionalSubPackageGelCacheIdValue( Buff->getOptionalSubPackageGelCacheIdValue() );
		}
		if( Buff->isOptionalSubPackageGelIdNull() ) {
			newKeyXSubPkg.setOptionalSubPackageGelIdNull();
		}
		else {
			newKeyXSubPkg.setOptionalSubPackageGelIdValue( Buff->getOptionalSubPackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpClsNameKey existingKeyXExpClsName;
		if( existing->isOptionalExpansionClassNameTenantIdNull() ) {
			existingKeyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			existingKeyXExpClsName.setOptionalExpansionClassNameTenantIdValue( existing->getOptionalExpansionClassNameTenantIdValue() );
		}
		if( existing->isOptionalExpansionClassNameGelCacheIdNull() ) {
			existingKeyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			existingKeyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( existing->getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( existing->isOptionalExpansionClassNameGelIdNull() ) {
			existingKeyXExpClsName.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			existingKeyXExpClsName.setOptionalExpansionClassNameGelIdValue( existing->getOptionalExpansionClassNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpClsNameKey newKeyXExpClsName;
		if( Buff->isOptionalExpansionClassNameTenantIdNull() ) {
			newKeyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			newKeyXExpClsName.setOptionalExpansionClassNameTenantIdValue( Buff->getOptionalExpansionClassNameTenantIdValue() );
		}
		if( Buff->isOptionalExpansionClassNameGelCacheIdNull() ) {
			newKeyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			newKeyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( Buff->getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( Buff->isOptionalExpansionClassNameGelIdNull() ) {
			newKeyXExpClsName.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			newKeyXExpClsName.setOptionalExpansionClassNameGelIdValue( Buff->getOptionalExpansionClassNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpKeyNameKey existingKeyXExpKeyName;
		if( existing->isOptionalExpansionKeyNameTenantIdNull() ) {
			existingKeyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			existingKeyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( existing->getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( existing->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			existingKeyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			existingKeyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( existing->getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( existing->isOptionalExpansionKeyNameGelIdNull() ) {
			existingKeyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			existingKeyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( existing->getOptionalExpansionKeyNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpKeyNameKey newKeyXExpKeyName;
		if( Buff->isOptionalExpansionKeyNameTenantIdNull() ) {
			newKeyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			newKeyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( Buff->getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( Buff->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			newKeyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			newKeyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( Buff->getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( Buff->isOptionalExpansionKeyNameGelIdNull() ) {
			newKeyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			newKeyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( Buff->getOptionalExpansionKeyNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpFileNameKey existingKeyXExpFileName;
		if( existing->isOptionalExpansionFileNameTenantIdNull() ) {
			existingKeyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			existingKeyXExpFileName.setOptionalExpansionFileNameTenantIdValue( existing->getOptionalExpansionFileNameTenantIdValue() );
		}
		if( existing->isOptionalExpansionFileNameGelCacheIdNull() ) {
			existingKeyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			existingKeyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( existing->getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( existing->isOptionalExpansionFileNameGelIdNull() ) {
			existingKeyXExpFileName.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			existingKeyXExpFileName.setOptionalExpansionFileNameGelIdValue( existing->getOptionalExpansionFileNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpFileNameKey newKeyXExpFileName;
		if( Buff->isOptionalExpansionFileNameTenantIdNull() ) {
			newKeyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			newKeyXExpFileName.setOptionalExpansionFileNameTenantIdValue( Buff->getOptionalExpansionFileNameTenantIdValue() );
		}
		if( Buff->isOptionalExpansionFileNameGelCacheIdNull() ) {
			newKeyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			newKeyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( Buff->getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( Buff->isOptionalExpansionFileNameGelIdNull() ) {
			newKeyXExpFileName.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			newKeyXExpFileName.setOptionalExpansionFileNameGelIdValue( Buff->getOptionalExpansionFileNameGelIdValue() );
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
		existing = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( schema->getTableGenRule()->updateGenRule( Authorization,
			Buff ) );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdict;
		auto removalDictByPKey = dictByPKey->find( pkey );
		if( removalDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( removalDictByPKey );
		}

		dictByPKey->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXSrcBundle;
		auto searchDictByXSrcBundle = dictByXSrcBundle->find( existingKeyXSrcBundle );
		if( searchDictByXSrcBundle != dictByXSrcBundle->end() ) {
			subdictXSrcBundle = searchDictByXSrcBundle->second;
			auto searchSubDict = subdictXSrcBundle->find( pkey );
			if( searchSubDict != subdictXSrcBundle->end() ) {
				subdictXSrcBundle->erase( searchSubDict );
			}
			if( subdictXSrcBundle->size() <= 0 ) {
				delete subdictXSrcBundle;
				dictByXSrcBundle->erase( searchDictByXSrcBundle );
			}
			subdictXSrcBundle = NULL;
		}
		auto searchNewKeyDictByXSrcBundle = dictByXSrcBundle->find( newKeyXSrcBundle );
		if( searchNewKeyDictByXSrcBundle != dictByXSrcBundle->end() ) {
			subdictXSrcBundle = searchNewKeyDictByXSrcBundle->second;
		}
		else {
			subdictXSrcBundle = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXSrcBundle->insert( std::map<cfcore::CFGenKbGenFileByXSrcBundleKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXSrcBundle, subdictXSrcBundle ) );
		}
		subdictXSrcBundle->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXModName;
		auto searchDictByXModName = dictByXModName->find( existingKeyXModName );
		if( searchDictByXModName != dictByXModName->end() ) {
			subdictXModName = searchDictByXModName->second;
			auto searchSubDict = subdictXModName->find( pkey );
			if( searchSubDict != subdictXModName->end() ) {
				subdictXModName->erase( searchSubDict );
			}
			if( subdictXModName->size() <= 0 ) {
				delete subdictXModName;
				dictByXModName->erase( searchDictByXModName );
			}
			subdictXModName = NULL;
		}
		auto searchNewKeyDictByXModName = dictByXModName->find( newKeyXModName );
		if( searchNewKeyDictByXModName != dictByXModName->end() ) {
			subdictXModName = searchNewKeyDictByXModName->second;
		}
		else {
			subdictXModName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXModName->insert( std::map<cfcore::CFGenKbGenFileByXModNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXModName, subdictXModName ) );
		}
		subdictXModName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXBasePkg;
		auto searchDictByXBasePkg = dictByXBasePkg->find( existingKeyXBasePkg );
		if( searchDictByXBasePkg != dictByXBasePkg->end() ) {
			subdictXBasePkg = searchDictByXBasePkg->second;
			auto searchSubDict = subdictXBasePkg->find( pkey );
			if( searchSubDict != subdictXBasePkg->end() ) {
				subdictXBasePkg->erase( searchSubDict );
			}
			if( subdictXBasePkg->size() <= 0 ) {
				delete subdictXBasePkg;
				dictByXBasePkg->erase( searchDictByXBasePkg );
			}
			subdictXBasePkg = NULL;
		}
		auto searchNewKeyDictByXBasePkg = dictByXBasePkg->find( newKeyXBasePkg );
		if( searchNewKeyDictByXBasePkg != dictByXBasePkg->end() ) {
			subdictXBasePkg = searchNewKeyDictByXBasePkg->second;
		}
		else {
			subdictXBasePkg = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXBasePkg->insert( std::map<cfcore::CFGenKbGenFileByXBasePkgKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXBasePkg, subdictXBasePkg ) );
		}
		subdictXBasePkg->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXSubPkg;
		auto searchDictByXSubPkg = dictByXSubPkg->find( existingKeyXSubPkg );
		if( searchDictByXSubPkg != dictByXSubPkg->end() ) {
			subdictXSubPkg = searchDictByXSubPkg->second;
			auto searchSubDict = subdictXSubPkg->find( pkey );
			if( searchSubDict != subdictXSubPkg->end() ) {
				subdictXSubPkg->erase( searchSubDict );
			}
			if( subdictXSubPkg->size() <= 0 ) {
				delete subdictXSubPkg;
				dictByXSubPkg->erase( searchDictByXSubPkg );
			}
			subdictXSubPkg = NULL;
		}
		auto searchNewKeyDictByXSubPkg = dictByXSubPkg->find( newKeyXSubPkg );
		if( searchNewKeyDictByXSubPkg != dictByXSubPkg->end() ) {
			subdictXSubPkg = searchNewKeyDictByXSubPkg->second;
		}
		else {
			subdictXSubPkg = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXSubPkg->insert( std::map<cfcore::CFGenKbGenFileByXSubPkgKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXSubPkg, subdictXSubPkg ) );
		}
		subdictXSubPkg->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXExpClsName;
		auto searchDictByXExpClsName = dictByXExpClsName->find( existingKeyXExpClsName );
		if( searchDictByXExpClsName != dictByXExpClsName->end() ) {
			subdictXExpClsName = searchDictByXExpClsName->second;
			auto searchSubDict = subdictXExpClsName->find( pkey );
			if( searchSubDict != subdictXExpClsName->end() ) {
				subdictXExpClsName->erase( searchSubDict );
			}
			if( subdictXExpClsName->size() <= 0 ) {
				delete subdictXExpClsName;
				dictByXExpClsName->erase( searchDictByXExpClsName );
			}
			subdictXExpClsName = NULL;
		}
		auto searchNewKeyDictByXExpClsName = dictByXExpClsName->find( newKeyXExpClsName );
		if( searchNewKeyDictByXExpClsName != dictByXExpClsName->end() ) {
			subdictXExpClsName = searchNewKeyDictByXExpClsName->second;
		}
		else {
			subdictXExpClsName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXExpClsName->insert( std::map<cfcore::CFGenKbGenFileByXExpClsNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXExpClsName, subdictXExpClsName ) );
		}
		subdictXExpClsName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXExpKeyName;
		auto searchDictByXExpKeyName = dictByXExpKeyName->find( existingKeyXExpKeyName );
		if( searchDictByXExpKeyName != dictByXExpKeyName->end() ) {
			subdictXExpKeyName = searchDictByXExpKeyName->second;
			auto searchSubDict = subdictXExpKeyName->find( pkey );
			if( searchSubDict != subdictXExpKeyName->end() ) {
				subdictXExpKeyName->erase( searchSubDict );
			}
			if( subdictXExpKeyName->size() <= 0 ) {
				delete subdictXExpKeyName;
				dictByXExpKeyName->erase( searchDictByXExpKeyName );
			}
			subdictXExpKeyName = NULL;
		}
		auto searchNewKeyDictByXExpKeyName = dictByXExpKeyName->find( newKeyXExpKeyName );
		if( searchNewKeyDictByXExpKeyName != dictByXExpKeyName->end() ) {
			subdictXExpKeyName = searchNewKeyDictByXExpKeyName->second;
		}
		else {
			subdictXExpKeyName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXExpKeyName->insert( std::map<cfcore::CFGenKbGenFileByXExpKeyNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXExpKeyName, subdictXExpKeyName ) );
		}
		subdictXExpKeyName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );

		std::map<cfcore::CFGenKbGenItemPKey,
			 cfcore::CFGenKbGenFileBuff*>* subdictXExpFileName;
		auto searchDictByXExpFileName = dictByXExpFileName->find( existingKeyXExpFileName );
		if( searchDictByXExpFileName != dictByXExpFileName->end() ) {
			subdictXExpFileName = searchDictByXExpFileName->second;
			auto searchSubDict = subdictXExpFileName->find( pkey );
			if( searchSubDict != subdictXExpFileName->end() ) {
				subdictXExpFileName->erase( searchSubDict );
			}
			if( subdictXExpFileName->size() <= 0 ) {
				delete subdictXExpFileName;
				dictByXExpFileName->erase( searchDictByXExpFileName );
			}
			subdictXExpFileName = NULL;
		}
		auto searchNewKeyDictByXExpFileName = dictByXExpFileName->find( newKeyXExpFileName );
		if( searchNewKeyDictByXExpFileName != dictByXExpFileName->end() ) {
			subdictXExpFileName = searchNewKeyDictByXExpFileName->second;
		}
		else {
			subdictXExpFileName = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>();
			dictByXExpFileName->insert( std::map<cfcore::CFGenKbGenFileByXExpFileNameKey,
				std::map<cfcore::CFGenKbGenItemPKey,
					cfcore::CFGenKbGenFileBuff*>*>::value_type( newKeyXExpFileName, subdictXExpFileName ) );
		}
		subdictXExpFileName->insert( std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>::value_type( pkey, existing ) );


		// The top level code has to clean up the memory buffer that was passed in, and return a clone
		// of the copy that existing buffer that is attached to the RAM storage.  All other cases
		// return the existing buffer.

		cfcore::CFGenKbGenFileBuff* buff;
		if( existing->getClassCode() == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			delete Buff;
			Buff = NULL;
			buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( existing->clone() );
		}
		else {
			buff = existing;
		}
		return( buff );
	}

	void CFGenKbRamGenFileTable::deleteGenFile( const cfcore::CFGenKbAuthorization* Authorization,
		cfcore::CFGenKbGenFileBuff* Buff )
	{
		static const std::string S_ProcName( "deleteGenFile" );
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
		cfcore::CFGenKbGenFileBuff* existing = searchExisting->second;
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalSourceBundleTenantIdValue(),
			existing->getOptionalSourceBundleGelCacheIdValue(),
			existing->getOptionalSourceBundleGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalSourceBundleTenantIdValue(),
			existing->getOptionalSourceBundleGelCacheIdValue(),
			existing->getOptionalSourceBundleGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalBasePackageTenantIdValue(),
			existing->getOptionalBasePackageGelCacheIdValue(),
			existing->getOptionalBasePackageGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalBasePackageTenantIdValue(),
			existing->getOptionalBasePackageGelCacheIdValue(),
			existing->getOptionalBasePackageGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalModuleNameTenantIdValue(),
			existing->getOptionalModuleNameGelCacheIdValue(),
			existing->getOptionalModuleNameGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalModuleNameTenantIdValue(),
			existing->getOptionalModuleNameGelCacheIdValue(),
			existing->getOptionalModuleNameGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalSubPackageTenantIdValue(),
			existing->getOptionalSubPackageGelCacheIdValue(),
			existing->getOptionalSubPackageGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalSubPackageTenantIdValue(),
			existing->getOptionalSubPackageGelCacheIdValue(),
			existing->getOptionalSubPackageGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalExpansionClassNameTenantIdValue(),
			existing->getOptionalExpansionClassNameGelCacheIdValue(),
			existing->getOptionalExpansionClassNameGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalExpansionClassNameTenantIdValue(),
			existing->getOptionalExpansionClassNameGelCacheIdValue(),
			existing->getOptionalExpansionClassNameGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalExpansionKeyNameTenantIdValue(),
			existing->getOptionalExpansionKeyNameGelCacheIdValue(),
			existing->getOptionalExpansionKeyNameGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalExpansionKeyNameTenantIdValue(),
			existing->getOptionalExpansionKeyNameGelCacheIdValue(),
			existing->getOptionalExpansionKeyNameGelIdValue() );
			}
		}
		{
			cfcore::CFGenKbGelExecutableBuff* chk = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( schema->getTableGelExecutable()->readDerivedByPIdx( Authorization,
			existing->getOptionalExpansionFileNameTenantIdValue(),
			existing->getOptionalExpansionFileNameGelCacheIdValue(),
			existing->getOptionalExpansionFileNameGelIdValue() ) );
			if( chk != NULL ) {
				delete chk;
				chk = NULL;
				schema->getTableGelExecutable()->deleteGelExecutableByPIdx( Authorization,
			existing->getOptionalExpansionFileNameTenantIdValue(),
			existing->getOptionalExpansionFileNameGelCacheIdValue(),
			existing->getOptionalExpansionFileNameGelIdValue() );
			}
		}
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
		cfcore::CFGenKbGenFileByXSrcBundleKey keyXSrcBundle;
		if( existing->isOptionalSourceBundleTenantIdNull() ) {
			keyXSrcBundle.setOptionalSourceBundleTenantIdNull();
		}
		else {
			keyXSrcBundle.setOptionalSourceBundleTenantIdValue( existing->getOptionalSourceBundleTenantIdValue() );
		}
		if( existing->isOptionalSourceBundleGelCacheIdNull() ) {
			keyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			keyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( existing->getOptionalSourceBundleGelCacheIdValue() );
		}
		if( existing->isOptionalSourceBundleGelIdNull() ) {
			keyXSrcBundle.setOptionalSourceBundleGelIdNull();
		}
		else {
			keyXSrcBundle.setOptionalSourceBundleGelIdValue( existing->getOptionalSourceBundleGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXModNameKey keyXModName;
		if( existing->isOptionalModuleNameTenantIdNull() ) {
			keyXModName.setOptionalModuleNameTenantIdNull();
		}
		else {
			keyXModName.setOptionalModuleNameTenantIdValue( existing->getOptionalModuleNameTenantIdValue() );
		}
		if( existing->isOptionalModuleNameGelCacheIdNull() ) {
			keyXModName.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			keyXModName.setOptionalModuleNameGelCacheIdValue( existing->getOptionalModuleNameGelCacheIdValue() );
		}
		if( existing->isOptionalModuleNameGelIdNull() ) {
			keyXModName.setOptionalModuleNameGelIdNull();
		}
		else {
			keyXModName.setOptionalModuleNameGelIdValue( existing->getOptionalModuleNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXBasePkgKey keyXBasePkg;
		if( existing->isOptionalBasePackageTenantIdNull() ) {
			keyXBasePkg.setOptionalBasePackageTenantIdNull();
		}
		else {
			keyXBasePkg.setOptionalBasePackageTenantIdValue( existing->getOptionalBasePackageTenantIdValue() );
		}
		if( existing->isOptionalBasePackageGelCacheIdNull() ) {
			keyXBasePkg.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			keyXBasePkg.setOptionalBasePackageGelCacheIdValue( existing->getOptionalBasePackageGelCacheIdValue() );
		}
		if( existing->isOptionalBasePackageGelIdNull() ) {
			keyXBasePkg.setOptionalBasePackageGelIdNull();
		}
		else {
			keyXBasePkg.setOptionalBasePackageGelIdValue( existing->getOptionalBasePackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXSubPkgKey keyXSubPkg;
		if( existing->isOptionalSubPackageTenantIdNull() ) {
			keyXSubPkg.setOptionalSubPackageTenantIdNull();
		}
		else {
			keyXSubPkg.setOptionalSubPackageTenantIdValue( existing->getOptionalSubPackageTenantIdValue() );
		}
		if( existing->isOptionalSubPackageGelCacheIdNull() ) {
			keyXSubPkg.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			keyXSubPkg.setOptionalSubPackageGelCacheIdValue( existing->getOptionalSubPackageGelCacheIdValue() );
		}
		if( existing->isOptionalSubPackageGelIdNull() ) {
			keyXSubPkg.setOptionalSubPackageGelIdNull();
		}
		else {
			keyXSubPkg.setOptionalSubPackageGelIdValue( existing->getOptionalSubPackageGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpClsNameKey keyXExpClsName;
		if( existing->isOptionalExpansionClassNameTenantIdNull() ) {
			keyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			keyXExpClsName.setOptionalExpansionClassNameTenantIdValue( existing->getOptionalExpansionClassNameTenantIdValue() );
		}
		if( existing->isOptionalExpansionClassNameGelCacheIdNull() ) {
			keyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			keyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( existing->getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( existing->isOptionalExpansionClassNameGelIdNull() ) {
			keyXExpClsName.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			keyXExpClsName.setOptionalExpansionClassNameGelIdValue( existing->getOptionalExpansionClassNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpKeyNameKey keyXExpKeyName;
		if( existing->isOptionalExpansionKeyNameTenantIdNull() ) {
			keyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			keyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( existing->getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( existing->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( existing->getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( existing->isOptionalExpansionKeyNameGelIdNull() ) {
			keyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			keyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( existing->getOptionalExpansionKeyNameGelIdValue() );
		}
		cfcore::CFGenKbGenFileByXExpFileNameKey keyXExpFileName;
		if( existing->isOptionalExpansionFileNameTenantIdNull() ) {
			keyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			keyXExpFileName.setOptionalExpansionFileNameTenantIdValue( existing->getOptionalExpansionFileNameTenantIdValue() );
		}
		if( existing->isOptionalExpansionFileNameGelCacheIdNull() ) {
			keyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			keyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( existing->getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( existing->isOptionalExpansionFileNameGelIdNull() ) {
			keyXExpFileName.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			keyXExpFileName.setOptionalExpansionFileNameGelIdValue( existing->getOptionalExpansionFileNameGelIdValue() );
		}
		// Validate reverse foreign keys

		// Delete is valid
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::CFGenKbGenFileBuff*>* subdict;

		auto searchDictByPKey = dictByPKey->find( pkey );
		if( searchDictByPKey != dictByPKey->end() ) {
			dictByPKey->erase( searchDictByPKey );
		}

		auto searchDictByXSrcBundle = dictByXSrcBundle->find( keyXSrcBundle );
		if( searchDictByXSrcBundle != dictByXSrcBundle->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXSrcBundle = searchDictByXSrcBundle->second;
			auto searchSubDict = subdictXSrcBundle->find( pkey );
			if( searchSubDict != subdictXSrcBundle->end() ) {
				subdictXSrcBundle->erase( searchSubDict );
			}
			subdictXSrcBundle = NULL;
		}

		auto searchDictByXModName = dictByXModName->find( keyXModName );
		if( searchDictByXModName != dictByXModName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXModName = searchDictByXModName->second;
			auto searchSubDict = subdictXModName->find( pkey );
			if( searchSubDict != subdictXModName->end() ) {
				subdictXModName->erase( searchSubDict );
			}
			subdictXModName = NULL;
		}

		auto searchDictByXBasePkg = dictByXBasePkg->find( keyXBasePkg );
		if( searchDictByXBasePkg != dictByXBasePkg->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXBasePkg = searchDictByXBasePkg->second;
			auto searchSubDict = subdictXBasePkg->find( pkey );
			if( searchSubDict != subdictXBasePkg->end() ) {
				subdictXBasePkg->erase( searchSubDict );
			}
			subdictXBasePkg = NULL;
		}

		auto searchDictByXSubPkg = dictByXSubPkg->find( keyXSubPkg );
		if( searchDictByXSubPkg != dictByXSubPkg->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXSubPkg = searchDictByXSubPkg->second;
			auto searchSubDict = subdictXSubPkg->find( pkey );
			if( searchSubDict != subdictXSubPkg->end() ) {
				subdictXSubPkg->erase( searchSubDict );
			}
			subdictXSubPkg = NULL;
		}

		auto searchDictByXExpClsName = dictByXExpClsName->find( keyXExpClsName );
		if( searchDictByXExpClsName != dictByXExpClsName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXExpClsName = searchDictByXExpClsName->second;
			auto searchSubDict = subdictXExpClsName->find( pkey );
			if( searchSubDict != subdictXExpClsName->end() ) {
				subdictXExpClsName->erase( searchSubDict );
			}
			subdictXExpClsName = NULL;
		}

		auto searchDictByXExpKeyName = dictByXExpKeyName->find( keyXExpKeyName );
		if( searchDictByXExpKeyName != dictByXExpKeyName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXExpKeyName = searchDictByXExpKeyName->second;
			auto searchSubDict = subdictXExpKeyName->find( pkey );
			if( searchSubDict != subdictXExpKeyName->end() ) {
				subdictXExpKeyName->erase( searchSubDict );
			}
			subdictXExpKeyName = NULL;
		}

		auto searchDictByXExpFileName = dictByXExpFileName->find( keyXExpFileName );
		if( searchDictByXExpFileName != dictByXExpFileName->end() ) {
			std::map<cfcore::CFGenKbGenItemPKey,
				 cfcore::CFGenKbGenFileBuff*>* subdictXExpFileName = searchDictByXExpFileName->second;
			auto searchSubDict = subdictXExpFileName->find( pkey );
			if( searchSubDict != subdictXExpFileName->end() ) {
				subdictXExpFileName->erase( searchSubDict );
			}
			subdictXExpFileName = NULL;
		}

		schema->getTableGenRule()->deleteGenRule( Authorization,
			Buff );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSourceBundleTenantId,
			const int64_t* argSourceBundleGelCacheId,
			const int64_t* argSourceBundleGelId )
	{
		cfcore::CFGenKbGenFileByXSrcBundleKey key;
		if( argSourceBundleTenantId == NULL ) {
			key.setOptionalSourceBundleTenantIdNull();
		}
		else {
			key.setOptionalSourceBundleTenantIdValue( *argSourceBundleTenantId );
		}
		if( argSourceBundleGelCacheId == NULL ) {
			key.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			key.setOptionalSourceBundleGelCacheIdValue( *argSourceBundleGelCacheId );
		}
		if( argSourceBundleGelId == NULL ) {
			key.setOptionalSourceBundleGelIdNull();
		}
		else {
			key.setOptionalSourceBundleGelIdValue( *argSourceBundleGelId );
		}
		deleteGenFileByXSrcBundle( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXSrcBundleKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalSourceBundleTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalSourceBundleGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalSourceBundleGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argModuleNameTenantId,
			const int64_t* argModuleNameGelCacheId,
			const int64_t* argModuleNameGelId )
	{
		cfcore::CFGenKbGenFileByXModNameKey key;
		if( argModuleNameTenantId == NULL ) {
			key.setOptionalModuleNameTenantIdNull();
		}
		else {
			key.setOptionalModuleNameTenantIdValue( *argModuleNameTenantId );
		}
		if( argModuleNameGelCacheId == NULL ) {
			key.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			key.setOptionalModuleNameGelCacheIdValue( *argModuleNameGelCacheId );
		}
		if( argModuleNameGelId == NULL ) {
			key.setOptionalModuleNameGelIdNull();
		}
		else {
			key.setOptionalModuleNameGelIdValue( *argModuleNameGelId );
		}
		deleteGenFileByXModName( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXModName( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXModNameKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalModuleNameTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalModuleNameGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalModuleNameGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBasePackageTenantId,
			const int64_t* argBasePackageGelCacheId,
			const int64_t* argBasePackageGelId )
	{
		cfcore::CFGenKbGenFileByXBasePkgKey key;
		if( argBasePackageTenantId == NULL ) {
			key.setOptionalBasePackageTenantIdNull();
		}
		else {
			key.setOptionalBasePackageTenantIdValue( *argBasePackageTenantId );
		}
		if( argBasePackageGelCacheId == NULL ) {
			key.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			key.setOptionalBasePackageGelCacheIdValue( *argBasePackageGelCacheId );
		}
		if( argBasePackageGelId == NULL ) {
			key.setOptionalBasePackageGelIdNull();
		}
		else {
			key.setOptionalBasePackageGelIdValue( *argBasePackageGelId );
		}
		deleteGenFileByXBasePkg( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXBasePkgKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalBasePackageTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalBasePackageGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalBasePackageGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSubPackageTenantId,
			const int64_t* argSubPackageGelCacheId,
			const int64_t* argSubPackageGelId )
	{
		cfcore::CFGenKbGenFileByXSubPkgKey key;
		if( argSubPackageTenantId == NULL ) {
			key.setOptionalSubPackageTenantIdNull();
		}
		else {
			key.setOptionalSubPackageTenantIdValue( *argSubPackageTenantId );
		}
		if( argSubPackageGelCacheId == NULL ) {
			key.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			key.setOptionalSubPackageGelCacheIdValue( *argSubPackageGelCacheId );
		}
		if( argSubPackageGelId == NULL ) {
			key.setOptionalSubPackageGelIdNull();
		}
		else {
			key.setOptionalSubPackageGelIdValue( *argSubPackageGelId );
		}
		deleteGenFileByXSubPkg( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXSubPkgKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalSubPackageTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalSubPackageGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalSubPackageGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionClassNameTenantId,
			const int64_t* argExpansionClassNameGelCacheId,
			const int64_t* argExpansionClassNameGelId )
	{
		cfcore::CFGenKbGenFileByXExpClsNameKey key;
		if( argExpansionClassNameTenantId == NULL ) {
			key.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionClassNameTenantIdValue( *argExpansionClassNameTenantId );
		}
		if( argExpansionClassNameGelCacheId == NULL ) {
			key.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelCacheIdValue( *argExpansionClassNameGelCacheId );
		}
		if( argExpansionClassNameGelId == NULL ) {
			key.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelIdValue( *argExpansionClassNameGelId );
		}
		deleteGenFileByXExpClsName( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXExpClsNameKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpansionClassNameTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalExpansionClassNameGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalExpansionClassNameGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionKeyNameTenantId,
			const int64_t* argExpansionKeyNameGelCacheId,
			const int64_t* argExpansionKeyNameGelId )
	{
		cfcore::CFGenKbGenFileByXExpKeyNameKey key;
		if( argExpansionKeyNameTenantId == NULL ) {
			key.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameTenantIdValue( *argExpansionKeyNameTenantId );
		}
		if( argExpansionKeyNameGelCacheId == NULL ) {
			key.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelCacheIdValue( *argExpansionKeyNameGelCacheId );
		}
		if( argExpansionKeyNameGelId == NULL ) {
			key.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelIdValue( *argExpansionKeyNameGelId );
		}
		deleteGenFileByXExpKeyName( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXExpKeyNameKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpansionKeyNameTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalExpansionKeyNameGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionFileNameTenantId,
			const int64_t* argExpansionFileNameGelCacheId,
			const int64_t* argExpansionFileNameGelId )
	{
		cfcore::CFGenKbGenFileByXExpFileNameKey key;
		if( argExpansionFileNameTenantId == NULL ) {
			key.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionFileNameTenantIdValue( *argExpansionFileNameTenantId );
		}
		if( argExpansionFileNameGelCacheId == NULL ) {
			key.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelCacheIdValue( *argExpansionFileNameGelCacheId );
		}
		if( argExpansionFileNameGelId == NULL ) {
			key.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelIdValue( *argExpansionFileNameGelId );
		}
		deleteGenFileByXExpFileName( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenFileByXExpFileNameKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalExpansionFileNameTenantIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalExpansionFileNameGelCacheIdNull() ) {
			anyNotNull = true;
		}
		if( argKey->isOptionalExpansionFileNameGelIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenFileByBodyIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenRuleByBodyIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId )
	{
		cfcore::CFGenKbGenItemPKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		key.setRequiredItemId( argItemId );
		deleteGenFileByItemIdIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemPKey* argKey )
	{
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			if( rereadCur != NULL ) {
				delete rereadCur;
				rereadCur = NULL;
			}
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId )
	{
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( argTenantId );
		deleteGenFileByTenantIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByTenantIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId )
	{
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( argTenantId );
		key.setRequiredCartridgeId( argCartridgeId );
		deleteGenFileByCartIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByCartIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId )
	{
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( argRuleTypeId );
		deleteGenFileByRuleTypeIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId )
	{
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( argToolSetId );
		deleteGenFileByToolSetIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId )
	{
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( argScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *argScopeDefId );
		}
		deleteGenFileByScopeIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByScopeIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		if( argKey->isOptionalScopeDefIdNull() ) {
			anyNotNull = true;
		}
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId )
	{
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( argGenDefId );
		deleteGenFileByGenDefIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
		bool anyNotNull = false;
		anyNotNull = true;
		if( ! anyNotNull ) {
			return;
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenFileByAltIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByAltIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenFileByGelExecIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::deleteGenFileByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
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
		deleteGenFileByProbeIdx( Authorization, &key );
	}

	void CFGenKbRamGenFileTable::deleteGenFileByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
		const cfcore::CFGenKbGenItemByProbeIdxKey* argKey )
	{
		cfcore::CFGenKbGenFileBuff* cur = NULL;
		cfcore::CFGenKbGenFileBuff* rereadCur = NULL;
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
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> matchSet;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator iter = dictByPKey->begin();
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>::iterator end = dictByPKey->end();
		while( iter != end ) {
			cur = iter->second;
			iter ++;
			if( *dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cur ) == *argKey ) {
				matchSet.push_back( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cur->clone() ) );
			}
		}
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator iterMatch = matchSet.begin();
		std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*>::iterator matchEnd = matchSet.end();
		while( iterMatch != matchEnd ) {
			cur = *iterMatch;
			iterMatch ++;
			cur = schema->getTableGenFile()->readDerivedByItemIdIdx( Authorization,
				cur->getRequiredTenantId(),
				cur->getRequiredCartridgeId(),
				cur->getRequiredItemId() );
			rereadCur = cur;
			deleteGenFile( Authorization, cur );
			delete rereadCur;
			rereadCur = NULL;
		}
	}

	void CFGenKbRamGenFileTable::releasePreparedStatements() {
	}

}
