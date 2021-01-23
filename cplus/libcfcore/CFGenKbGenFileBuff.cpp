// Description: C++18 implementation for a GenFile buffer object.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbGenItemByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByCartIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByRuleTypeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByToolSetIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByScopeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByGenDefIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByAltIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByGelExecIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemByProbeIdxKey.hpp>
#include <cfgenkb/CFGenKbGenRuleByBodyIdxKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXSrcBundleKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXModNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXBasePkgKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXSubPkgKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXExpClsNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXExpKeyNameKey.hpp>
#include <cfgenkb/CFGenKbGenFileByXExpFileNameKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGenFileBuff::GENDEFNAME( "GenFile" );
	const classcode_t CFGenKbGenFileBuff::CLASS_CODE = 0xa932L;
	const std::string CFGenKbGenFileBuff::CLASS_NAME( "CFGenKbGenFileBuff" );
		const std::string CFGenKbGenFileBuff::COLNAME_GENERATEONCE( "GenerateOnce" );
		const std::string CFGenKbGenFileBuff::COLNAME_SOURCEBUNDLE( "SourceBundle" );
		const std::string CFGenKbGenFileBuff::COLNAME_SOURCEBUNDLETENANTID( "SourceBundleTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_SOURCEBUNDLEGELCACHEID( "SourceBundleGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_SOURCEBUNDLEGELID( "SourceBundleGelId" );
		const std::string CFGenKbGenFileBuff::COLNAME_MODULENAME( "ModuleName" );
		const std::string CFGenKbGenFileBuff::COLNAME_MODULENAMETENANTID( "ModuleNameTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_MODULENAMEGELCACHEID( "ModuleNameGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_MODULENAMEGELID( "ModuleNameGelId" );
		const std::string CFGenKbGenFileBuff::COLNAME_BASEPACKAGENAME( "BasePackageName" );
		const std::string CFGenKbGenFileBuff::COLNAME_BASEPACKAGETENANTID( "BasePackageTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_BASEPACKAGEGELCACHEID( "BasePackageGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_BASEPACKAGEGELID( "BasePackageGelId" );
		const std::string CFGenKbGenFileBuff::COLNAME_SUBPACKAGENAME( "SubPackageName" );
		const std::string CFGenKbGenFileBuff::COLNAME_SUBPACKAGETENANTID( "SubPackageTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_SUBPACKAGEGELCACHEID( "SubPackageGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_SUBPACKAGEGELID( "SubPackageGelId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONCLASSNAME( "ExpansionClassName" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONCLASSNAMETENANTID( "ExpansionClassNameTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONCLASSNAMEGELCACHEID( "ExpansionClassNameGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONCLASSNAMEGELID( "ExpansionClassNameGelId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONKEYNAME( "ExpansionKeyName" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONKEYNAMETENANTID( "ExpansionKeyNameTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONKEYNAMEGELCACHEID( "ExpansionKeyNameGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONKEYNAMEGELID( "ExpansionKeyNameGelId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONFILENAME( "ExpansionFileName" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONFILENAMETENANTID( "ExpansionFileNameTenantId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONFILENAMEGELCACHEID( "ExpansionFileNameGelCacheId" );
		const std::string CFGenKbGenFileBuff::COLNAME_EXPANSIONFILENAMEGELID( "ExpansionFileNameGelId" );
	const int64_t CFGenKbGenFileBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::CARTRIDGEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::ITEMID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::GENERATEONCE_INIT_VALUE( "" );
	const std::string CFGenKbGenFileBuff::SOURCEBUNDLE_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::SOURCEBUNDLETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SOURCEBUNDLEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SOURCEBUNDLEGELID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::MODULENAME_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::MODULENAMETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::MODULENAMEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::MODULENAMEGELID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::BASEPACKAGENAME_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::BASEPACKAGETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::BASEPACKAGEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::BASEPACKAGEGELID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::SUBPACKAGENAME_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::SUBPACKAGETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SUBPACKAGEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SUBPACKAGEGELID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::EXPANSIONCLASSNAME_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::EXPANSIONCLASSNAMETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::EXPANSIONKEYNAME_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::EXPANSIONKEYNAMETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELID_INIT_VALUE = 0LL;
	const std::string CFGenKbGenFileBuff::EXPANSIONFILENAME_INIT_VALUE( "" );
	const int64_t CFGenKbGenFileBuff::EXPANSIONFILENAMETENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONFILENAMEGELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONFILENAMEGELID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::CARTRIDGEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::ITEMID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SOURCEBUNDLETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SOURCEBUNDLEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SOURCEBUNDLEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::MODULENAMETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::MODULENAMEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::MODULENAMEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::BASEPACKAGETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::BASEPACKAGEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::BASEPACKAGEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SUBPACKAGETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SUBPACKAGEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::SUBPACKAGEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONCLASSNAMETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONKEYNAMETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONFILENAMETENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONFILENAMEGELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::EXPANSIONFILENAMEGELID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGenFileBuff::ITEMID_MAX_VALUE = 2147483647LL;
	const std::string::size_type CFGenKbGenFileBuff::GENERATEONCE_MAX_LEN = 8;
	const std::string::size_type CFGenKbGenFileBuff::SOURCEBUNDLE_MAX_LEN = 1024;
	const std::string::size_type CFGenKbGenFileBuff::MODULENAME_MAX_LEN = 1024;
	const std::string::size_type CFGenKbGenFileBuff::BASEPACKAGENAME_MAX_LEN = 1024;
	const std::string::size_type CFGenKbGenFileBuff::SUBPACKAGENAME_MAX_LEN = 1024;
	const std::string::size_type CFGenKbGenFileBuff::EXPANSIONCLASSNAME_MAX_LEN = 1024;
	const std::string::size_type CFGenKbGenFileBuff::EXPANSIONKEYNAME_MAX_LEN = 1024;
	const std::string::size_type CFGenKbGenFileBuff::EXPANSIONFILENAME_MAX_LEN = 1024;

	CFGenKbGenFileBuff::CFGenKbGenFileBuff()
	: CFGenKbGenRuleBuff()
	{
		optionalGenerateOnce = NULL;
		optionalSourceBundle = NULL;
		optionalSourceBundleTenantId.setNull();
		optionalSourceBundleGelCacheId.setNull();
		optionalSourceBundleGelId.setNull();
		optionalModuleName = NULL;
		optionalModuleNameTenantId.setNull();
		optionalModuleNameGelCacheId.setNull();
		optionalModuleNameGelId.setNull();
		optionalBasePackageName = NULL;
		optionalBasePackageTenantId.setNull();
		optionalBasePackageGelCacheId.setNull();
		optionalBasePackageGelId.setNull();
		optionalSubPackageName = NULL;
		optionalSubPackageTenantId.setNull();
		optionalSubPackageGelCacheId.setNull();
		optionalSubPackageGelId.setNull();
		optionalExpansionClassName = NULL;
		optionalExpansionClassNameTenantId.setNull();
		optionalExpansionClassNameGelCacheId.setNull();
		optionalExpansionClassNameGelId.setNull();
		optionalExpansionKeyName = NULL;
		optionalExpansionKeyNameTenantId.setNull();
		optionalExpansionKeyNameGelCacheId.setNull();
		optionalExpansionKeyNameGelId.setNull();
		optionalExpansionFileName = NULL;
		optionalExpansionFileNameTenantId.setNull();
		optionalExpansionFileNameGelCacheId.setNull();
		optionalExpansionFileNameGelId.setNull();
	}

	CFGenKbGenFileBuff::CFGenKbGenFileBuff( const CFGenKbGenFileBuff& src )
	: CFGenKbGenRuleBuff()
	{
		optionalGenerateOnce = NULL;
		optionalSourceBundle = NULL;
		optionalSourceBundleTenantId.setNull();
		optionalSourceBundleGelCacheId.setNull();
		optionalSourceBundleGelId.setNull();
		optionalModuleName = NULL;
		optionalModuleNameTenantId.setNull();
		optionalModuleNameGelCacheId.setNull();
		optionalModuleNameGelId.setNull();
		optionalBasePackageName = NULL;
		optionalBasePackageTenantId.setNull();
		optionalBasePackageGelCacheId.setNull();
		optionalBasePackageGelId.setNull();
		optionalSubPackageName = NULL;
		optionalSubPackageTenantId.setNull();
		optionalSubPackageGelCacheId.setNull();
		optionalSubPackageGelId.setNull();
		optionalExpansionClassName = NULL;
		optionalExpansionClassNameTenantId.setNull();
		optionalExpansionClassNameGelCacheId.setNull();
		optionalExpansionClassNameGelId.setNull();
		optionalExpansionKeyName = NULL;
		optionalExpansionKeyNameTenantId.setNull();
		optionalExpansionKeyNameGelCacheId.setNull();
		optionalExpansionKeyNameGelId.setNull();
		optionalExpansionFileName = NULL;
		optionalExpansionFileNameTenantId.setNull();
		optionalExpansionFileNameGelCacheId.setNull();
		optionalExpansionFileNameGelId.setNull();
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
		setRequiredItemId( src.getRequiredItemId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
		setRequiredName( src.getRequiredName() );
		setRequiredToolSetId( src.getRequiredToolSetId() );
		if( src.isOptionalScopeDefIdNull() ) {
			setOptionalScopeDefIdNull();
		}
		else {
			setOptionalScopeDefIdValue( src.getOptionalScopeDefIdValue() );
		}
		setRequiredGenDefId( src.getRequiredGenDefId() );
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
		setRequiredDefinedNear( src.getRequiredDefinedNear() );
		setRequiredBody( src.getRequiredBody() );
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
		if( src.isOptionalGenerateOnceNull() ) {
			setOptionalGenerateOnceNull();
		}
		else {
			setOptionalGenerateOnceValue( src.getOptionalGenerateOnceValue() );
		}
		if( src.isOptionalSourceBundleNull() ) {
			setOptionalSourceBundleNull();
		}
		else {
			setOptionalSourceBundleValue( src.getOptionalSourceBundleValue() );
		}
		if( src.isOptionalSourceBundleTenantIdNull() ) {
			setOptionalSourceBundleTenantIdNull();
		}
		else {
			setOptionalSourceBundleTenantIdValue( src.getOptionalSourceBundleTenantIdValue() );
		}
		if( src.isOptionalSourceBundleGelCacheIdNull() ) {
			setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			setOptionalSourceBundleGelCacheIdValue( src.getOptionalSourceBundleGelCacheIdValue() );
		}
		if( src.isOptionalSourceBundleGelIdNull() ) {
			setOptionalSourceBundleGelIdNull();
		}
		else {
			setOptionalSourceBundleGelIdValue( src.getOptionalSourceBundleGelIdValue() );
		}
		if( src.isOptionalModuleNameNull() ) {
			setOptionalModuleNameNull();
		}
		else {
			setOptionalModuleNameValue( src.getOptionalModuleNameValue() );
		}
		if( src.isOptionalModuleNameTenantIdNull() ) {
			setOptionalModuleNameTenantIdNull();
		}
		else {
			setOptionalModuleNameTenantIdValue( src.getOptionalModuleNameTenantIdValue() );
		}
		if( src.isOptionalModuleNameGelCacheIdNull() ) {
			setOptionalModuleNameGelCacheIdNull();
		}
		else {
			setOptionalModuleNameGelCacheIdValue( src.getOptionalModuleNameGelCacheIdValue() );
		}
		if( src.isOptionalModuleNameGelIdNull() ) {
			setOptionalModuleNameGelIdNull();
		}
		else {
			setOptionalModuleNameGelIdValue( src.getOptionalModuleNameGelIdValue() );
		}
		if( src.isOptionalBasePackageNameNull() ) {
			setOptionalBasePackageNameNull();
		}
		else {
			setOptionalBasePackageNameValue( src.getOptionalBasePackageNameValue() );
		}
		if( src.isOptionalBasePackageTenantIdNull() ) {
			setOptionalBasePackageTenantIdNull();
		}
		else {
			setOptionalBasePackageTenantIdValue( src.getOptionalBasePackageTenantIdValue() );
		}
		if( src.isOptionalBasePackageGelCacheIdNull() ) {
			setOptionalBasePackageGelCacheIdNull();
		}
		else {
			setOptionalBasePackageGelCacheIdValue( src.getOptionalBasePackageGelCacheIdValue() );
		}
		if( src.isOptionalBasePackageGelIdNull() ) {
			setOptionalBasePackageGelIdNull();
		}
		else {
			setOptionalBasePackageGelIdValue( src.getOptionalBasePackageGelIdValue() );
		}
		if( src.isOptionalSubPackageNameNull() ) {
			setOptionalSubPackageNameNull();
		}
		else {
			setOptionalSubPackageNameValue( src.getOptionalSubPackageNameValue() );
		}
		if( src.isOptionalSubPackageTenantIdNull() ) {
			setOptionalSubPackageTenantIdNull();
		}
		else {
			setOptionalSubPackageTenantIdValue( src.getOptionalSubPackageTenantIdValue() );
		}
		if( src.isOptionalSubPackageGelCacheIdNull() ) {
			setOptionalSubPackageGelCacheIdNull();
		}
		else {
			setOptionalSubPackageGelCacheIdValue( src.getOptionalSubPackageGelCacheIdValue() );
		}
		if( src.isOptionalSubPackageGelIdNull() ) {
			setOptionalSubPackageGelIdNull();
		}
		else {
			setOptionalSubPackageGelIdValue( src.getOptionalSubPackageGelIdValue() );
		}
		if( src.isOptionalExpansionClassNameNull() ) {
			setOptionalExpansionClassNameNull();
		}
		else {
			setOptionalExpansionClassNameValue( src.getOptionalExpansionClassNameValue() );
		}
		if( src.isOptionalExpansionClassNameTenantIdNull() ) {
			setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			setOptionalExpansionClassNameTenantIdValue( src.getOptionalExpansionClassNameTenantIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelCacheIdNull() ) {
			setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionClassNameGelCacheIdValue( src.getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelIdNull() ) {
			setOptionalExpansionClassNameGelIdNull();
		}
		else {
			setOptionalExpansionClassNameGelIdValue( src.getOptionalExpansionClassNameGelIdValue() );
		}
		if( src.isOptionalExpansionKeyNameNull() ) {
			setOptionalExpansionKeyNameNull();
		}
		else {
			setOptionalExpansionKeyNameValue( src.getOptionalExpansionKeyNameValue() );
		}
		if( src.isOptionalExpansionKeyNameTenantIdNull() ) {
			setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			setOptionalExpansionKeyNameTenantIdValue( src.getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelCacheIdValue( src.getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelIdNull() ) {
			setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelIdValue( src.getOptionalExpansionKeyNameGelIdValue() );
		}
		if( src.isOptionalExpansionFileNameNull() ) {
			setOptionalExpansionFileNameNull();
		}
		else {
			setOptionalExpansionFileNameValue( src.getOptionalExpansionFileNameValue() );
		}
		if( src.isOptionalExpansionFileNameTenantIdNull() ) {
			setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			setOptionalExpansionFileNameTenantIdValue( src.getOptionalExpansionFileNameTenantIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelCacheIdNull() ) {
			setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionFileNameGelCacheIdValue( src.getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelIdNull() ) {
			setOptionalExpansionFileNameGelIdNull();
		}
		else {
			setOptionalExpansionFileNameGelIdValue( src.getOptionalExpansionFileNameGelIdValue() );
		}
	}

	CFGenKbGenFileBuff::~CFGenKbGenFileBuff() {
		if( optionalGenerateOnce != NULL ) {
			delete optionalGenerateOnce;
			optionalGenerateOnce = NULL;
		}
		if( optionalSourceBundle != NULL ) {
			delete optionalSourceBundle;
			optionalSourceBundle = NULL;
		}
		if( optionalModuleName != NULL ) {
			delete optionalModuleName;
			optionalModuleName = NULL;
		}
		if( optionalBasePackageName != NULL ) {
			delete optionalBasePackageName;
			optionalBasePackageName = NULL;
		}
		if( optionalSubPackageName != NULL ) {
			delete optionalSubPackageName;
			optionalSubPackageName = NULL;
		}
		if( optionalExpansionClassName != NULL ) {
			delete optionalExpansionClassName;
			optionalExpansionClassName = NULL;
		}
		if( optionalExpansionKeyName != NULL ) {
			delete optionalExpansionKeyName;
			optionalExpansionKeyName = NULL;
		}
		if( optionalExpansionFileName != NULL ) {
			delete optionalExpansionFileName;
			optionalExpansionFileName = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGenFileBuff::clone() {
		CFGenKbGenFileBuff* copy = new CFGenKbGenFileBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGenFileBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenFileBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGenFileBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( cfcore::CFGenKbGenRuleBuff::implementsClassCode( argClassCode ) );
		}
	}

	const bool CFGenKbGenFileBuff::isOptionalGenerateOnceNull() const {
		return( optionalGenerateOnce == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalGenerateOnceValue() const {
		static const std::string S_ProcName( "getOptionalGenerateOnceValue" );
		if( optionalGenerateOnce == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalGenerateOnce );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalGenerateOnceReference() const {
		return( optionalGenerateOnce );
	}

	void CFGenKbGenFileBuff::setOptionalGenerateOnceNull() {
		if( optionalGenerateOnce != NULL ) {
			delete optionalGenerateOnce;
			optionalGenerateOnce = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalGenerateOnceValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalGenerateOnceValue" );
		if( value.length() > CFGenKbGenFileBuff::GENERATEONCE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::GENERATEONCE_MAX_LEN );
		}
		if( optionalGenerateOnce != NULL ) {
			delete optionalGenerateOnce;
			optionalGenerateOnce = NULL;
		}
		optionalGenerateOnce = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSourceBundleNull() const {
		return( optionalSourceBundle == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalSourceBundleValue() const {
		static const std::string S_ProcName( "getOptionalSourceBundleValue" );
		if( optionalSourceBundle == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalSourceBundle );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalSourceBundleReference() const {
		return( optionalSourceBundle );
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleNull() {
		if( optionalSourceBundle != NULL ) {
			delete optionalSourceBundle;
			optionalSourceBundle = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleValue" );
		if( value.length() > CFGenKbGenFileBuff::SOURCEBUNDLE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::SOURCEBUNDLE_MAX_LEN );
		}
		if( optionalSourceBundle != NULL ) {
			delete optionalSourceBundle;
			optionalSourceBundle = NULL;
		}
		optionalSourceBundle = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSourceBundleTenantIdNull() const {
		return( optionalSourceBundleTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalSourceBundleTenantIdValue() const {
		return( optionalSourceBundleTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalSourceBundleTenantIdReference() const {
		return( optionalSourceBundleTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleTenantIdNull() {
		optionalSourceBundleTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SOURCEBUNDLETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SOURCEBUNDLETENANTID_MIN_VALUE );
		}
		optionalSourceBundleTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSourceBundleGelCacheIdNull() const {
		return( optionalSourceBundleGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalSourceBundleGelCacheIdValue() const {
		return( optionalSourceBundleGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalSourceBundleGelCacheIdReference() const {
		return( optionalSourceBundleGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleGelCacheIdNull() {
		optionalSourceBundleGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELCACHEID_MIN_VALUE );
		}
		optionalSourceBundleGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSourceBundleGelIdNull() const {
		return( optionalSourceBundleGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalSourceBundleGelIdValue() const {
		return( optionalSourceBundleGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalSourceBundleGelIdReference() const {
		return( optionalSourceBundleGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleGelIdNull() {
		optionalSourceBundleGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalSourceBundleGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSourceBundleGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SOURCEBUNDLEGELID_MIN_VALUE );
		}
		optionalSourceBundleGelId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalModuleNameNull() const {
		return( optionalModuleName == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalModuleNameValue() const {
		static const std::string S_ProcName( "getOptionalModuleNameValue" );
		if( optionalModuleName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalModuleName );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalModuleNameReference() const {
		return( optionalModuleName );
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameNull() {
		if( optionalModuleName != NULL ) {
			delete optionalModuleName;
			optionalModuleName = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalModuleNameValue" );
		if( value.length() > CFGenKbGenFileBuff::MODULENAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::MODULENAME_MAX_LEN );
		}
		if( optionalModuleName != NULL ) {
			delete optionalModuleName;
			optionalModuleName = NULL;
		}
		optionalModuleName = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalModuleNameTenantIdNull() const {
		return( optionalModuleNameTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalModuleNameTenantIdValue() const {
		return( optionalModuleNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalModuleNameTenantIdReference() const {
		return( optionalModuleNameTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameTenantIdNull() {
		optionalModuleNameTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalModuleNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::MODULENAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::MODULENAMETENANTID_MIN_VALUE );
		}
		optionalModuleNameTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalModuleNameGelCacheIdNull() const {
		return( optionalModuleNameGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalModuleNameGelCacheIdValue() const {
		return( optionalModuleNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalModuleNameGelCacheIdReference() const {
		return( optionalModuleNameGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameGelCacheIdNull() {
		optionalModuleNameGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalModuleNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::MODULENAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::MODULENAMEGELCACHEID_MIN_VALUE );
		}
		optionalModuleNameGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalModuleNameGelIdNull() const {
		return( optionalModuleNameGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalModuleNameGelIdValue() const {
		return( optionalModuleNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalModuleNameGelIdReference() const {
		return( optionalModuleNameGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameGelIdNull() {
		optionalModuleNameGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalModuleNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalModuleNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::MODULENAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::MODULENAMEGELID_MIN_VALUE );
		}
		optionalModuleNameGelId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalBasePackageNameNull() const {
		return( optionalBasePackageName == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalBasePackageNameValue() const {
		static const std::string S_ProcName( "getOptionalBasePackageNameValue" );
		if( optionalBasePackageName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalBasePackageName );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalBasePackageNameReference() const {
		return( optionalBasePackageName );
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageNameNull() {
		if( optionalBasePackageName != NULL ) {
			delete optionalBasePackageName;
			optionalBasePackageName = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalBasePackageNameValue" );
		if( value.length() > CFGenKbGenFileBuff::BASEPACKAGENAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::BASEPACKAGENAME_MAX_LEN );
		}
		if( optionalBasePackageName != NULL ) {
			delete optionalBasePackageName;
			optionalBasePackageName = NULL;
		}
		optionalBasePackageName = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalBasePackageTenantIdNull() const {
		return( optionalBasePackageTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalBasePackageTenantIdValue() const {
		return( optionalBasePackageTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalBasePackageTenantIdReference() const {
		return( optionalBasePackageTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageTenantIdNull() {
		optionalBasePackageTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBasePackageTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::BASEPACKAGETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::BASEPACKAGETENANTID_MIN_VALUE );
		}
		optionalBasePackageTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalBasePackageGelCacheIdNull() const {
		return( optionalBasePackageGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalBasePackageGelCacheIdValue() const {
		return( optionalBasePackageGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalBasePackageGelCacheIdReference() const {
		return( optionalBasePackageGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageGelCacheIdNull() {
		optionalBasePackageGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBasePackageGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELCACHEID_MIN_VALUE );
		}
		optionalBasePackageGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalBasePackageGelIdNull() const {
		return( optionalBasePackageGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalBasePackageGelIdValue() const {
		return( optionalBasePackageGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalBasePackageGelIdReference() const {
		return( optionalBasePackageGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageGelIdNull() {
		optionalBasePackageGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalBasePackageGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalBasePackageGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::BASEPACKAGEGELID_MIN_VALUE );
		}
		optionalBasePackageGelId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSubPackageNameNull() const {
		return( optionalSubPackageName == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalSubPackageNameValue() const {
		static const std::string S_ProcName( "getOptionalSubPackageNameValue" );
		if( optionalSubPackageName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalSubPackageName );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalSubPackageNameReference() const {
		return( optionalSubPackageName );
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageNameNull() {
		if( optionalSubPackageName != NULL ) {
			delete optionalSubPackageName;
			optionalSubPackageName = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalSubPackageNameValue" );
		if( value.length() > CFGenKbGenFileBuff::SUBPACKAGENAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::SUBPACKAGENAME_MAX_LEN );
		}
		if( optionalSubPackageName != NULL ) {
			delete optionalSubPackageName;
			optionalSubPackageName = NULL;
		}
		optionalSubPackageName = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSubPackageTenantIdNull() const {
		return( optionalSubPackageTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalSubPackageTenantIdValue() const {
		return( optionalSubPackageTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalSubPackageTenantIdReference() const {
		return( optionalSubPackageTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageTenantIdNull() {
		optionalSubPackageTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSubPackageTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SUBPACKAGETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SUBPACKAGETENANTID_MIN_VALUE );
		}
		optionalSubPackageTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSubPackageGelCacheIdNull() const {
		return( optionalSubPackageGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalSubPackageGelCacheIdValue() const {
		return( optionalSubPackageGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalSubPackageGelCacheIdReference() const {
		return( optionalSubPackageGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageGelCacheIdNull() {
		optionalSubPackageGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSubPackageGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELCACHEID_MIN_VALUE );
		}
		optionalSubPackageGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalSubPackageGelIdNull() const {
		return( optionalSubPackageGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalSubPackageGelIdValue() const {
		return( optionalSubPackageGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalSubPackageGelIdReference() const {
		return( optionalSubPackageGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageGelIdNull() {
		optionalSubPackageGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalSubPackageGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalSubPackageGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::SUBPACKAGEGELID_MIN_VALUE );
		}
		optionalSubPackageGelId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionClassNameNull() const {
		return( optionalExpansionClassName == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalExpansionClassNameValue() const {
		static const std::string S_ProcName( "getOptionalExpansionClassNameValue" );
		if( optionalExpansionClassName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpansionClassName );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalExpansionClassNameReference() const {
		return( optionalExpansionClassName );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameNull() {
		if( optionalExpansionClassName != NULL ) {
			delete optionalExpansionClassName;
			optionalExpansionClassName = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameValue" );
		if( value.length() > CFGenKbGenFileBuff::EXPANSIONCLASSNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::EXPANSIONCLASSNAME_MAX_LEN );
		}
		if( optionalExpansionClassName != NULL ) {
			delete optionalExpansionClassName;
			optionalExpansionClassName = NULL;
		}
		optionalExpansionClassName = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionClassNameTenantIdNull() const {
		return( optionalExpansionClassNameTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionClassNameTenantIdValue() const {
		return( optionalExpansionClassNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionClassNameTenantIdReference() const {
		return( optionalExpansionClassNameTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameTenantIdNull() {
		optionalExpansionClassNameTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMETENANTID_MIN_VALUE );
		}
		optionalExpansionClassNameTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionClassNameGelCacheIdNull() const {
		return( optionalExpansionClassNameGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionClassNameGelCacheIdValue() const {
		return( optionalExpansionClassNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionClassNameGelCacheIdReference() const {
		return( optionalExpansionClassNameGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameGelCacheIdNull() {
		optionalExpansionClassNameGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELCACHEID_MIN_VALUE );
		}
		optionalExpansionClassNameGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionClassNameGelIdNull() const {
		return( optionalExpansionClassNameGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionClassNameGelIdValue() const {
		return( optionalExpansionClassNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionClassNameGelIdReference() const {
		return( optionalExpansionClassNameGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameGelIdNull() {
		optionalExpansionClassNameGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionClassNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionClassNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONCLASSNAMEGELID_MIN_VALUE );
		}
		optionalExpansionClassNameGelId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionKeyNameNull() const {
		return( optionalExpansionKeyName == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalExpansionKeyNameValue() const {
		static const std::string S_ProcName( "getOptionalExpansionKeyNameValue" );
		if( optionalExpansionKeyName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpansionKeyName );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalExpansionKeyNameReference() const {
		return( optionalExpansionKeyName );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameNull() {
		if( optionalExpansionKeyName != NULL ) {
			delete optionalExpansionKeyName;
			optionalExpansionKeyName = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameValue" );
		if( value.length() > CFGenKbGenFileBuff::EXPANSIONKEYNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::EXPANSIONKEYNAME_MAX_LEN );
		}
		if( optionalExpansionKeyName != NULL ) {
			delete optionalExpansionKeyName;
			optionalExpansionKeyName = NULL;
		}
		optionalExpansionKeyName = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionKeyNameTenantIdNull() const {
		return( optionalExpansionKeyNameTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionKeyNameTenantIdValue() const {
		return( optionalExpansionKeyNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionKeyNameTenantIdReference() const {
		return( optionalExpansionKeyNameTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameTenantIdNull() {
		optionalExpansionKeyNameTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMETENANTID_MIN_VALUE );
		}
		optionalExpansionKeyNameTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionKeyNameGelCacheIdNull() const {
		return( optionalExpansionKeyNameGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionKeyNameGelCacheIdValue() const {
		return( optionalExpansionKeyNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionKeyNameGelCacheIdReference() const {
		return( optionalExpansionKeyNameGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameGelCacheIdNull() {
		optionalExpansionKeyNameGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELCACHEID_MIN_VALUE );
		}
		optionalExpansionKeyNameGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionKeyNameGelIdNull() const {
		return( optionalExpansionKeyNameGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionKeyNameGelIdValue() const {
		return( optionalExpansionKeyNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionKeyNameGelIdReference() const {
		return( optionalExpansionKeyNameGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameGelIdNull() {
		optionalExpansionKeyNameGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionKeyNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionKeyNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONKEYNAMEGELID_MIN_VALUE );
		}
		optionalExpansionKeyNameGelId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionFileNameNull() const {
		return( optionalExpansionFileName == NULL );
	}

	const std::string& CFGenKbGenFileBuff::getOptionalExpansionFileNameValue() const {
		static const std::string S_ProcName( "getOptionalExpansionFileNameValue" );
		if( optionalExpansionFileName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpansionFileName );
	}

	const std::string* CFGenKbGenFileBuff::getOptionalExpansionFileNameReference() const {
		return( optionalExpansionFileName );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameNull() {
		if( optionalExpansionFileName != NULL ) {
			delete optionalExpansionFileName;
			optionalExpansionFileName = NULL;
		}
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameValue" );
		if( value.length() > CFGenKbGenFileBuff::EXPANSIONFILENAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGenFileBuff::EXPANSIONFILENAME_MAX_LEN );
		}
		if( optionalExpansionFileName != NULL ) {
			delete optionalExpansionFileName;
			optionalExpansionFileName = NULL;
		}
		optionalExpansionFileName = new std::string( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionFileNameTenantIdNull() const {
		return( optionalExpansionFileNameTenantId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionFileNameTenantIdValue() const {
		return( optionalExpansionFileNameTenantId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionFileNameTenantIdReference() const {
		return( optionalExpansionFileNameTenantId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameTenantIdNull() {
		optionalExpansionFileNameTenantId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameTenantIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameTenantIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMETENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMETENANTID_MIN_VALUE );
		}
		optionalExpansionFileNameTenantId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionFileNameGelCacheIdNull() const {
		return( optionalExpansionFileNameGelCacheId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionFileNameGelCacheIdValue() const {
		return( optionalExpansionFileNameGelCacheId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionFileNameGelCacheIdReference() const {
		return( optionalExpansionFileNameGelCacheId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameGelCacheIdNull() {
		optionalExpansionFileNameGelCacheId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameGelCacheIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameGelCacheIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELCACHEID_MIN_VALUE );
		}
		optionalExpansionFileNameGelCacheId.setValue( value );
	}

	const bool CFGenKbGenFileBuff::isOptionalExpansionFileNameGelIdNull() const {
		return( optionalExpansionFileNameGelId.isNull() );
	}

	const int64_t CFGenKbGenFileBuff::getOptionalExpansionFileNameGelIdValue() const {
		return( optionalExpansionFileNameGelId.getValue() );
	}

	const int64_t* CFGenKbGenFileBuff::getOptionalExpansionFileNameGelIdReference() const {
		return( optionalExpansionFileNameGelId.getReference() );
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameGelIdNull() {
		optionalExpansionFileNameGelId.setNull();
	}

	void CFGenKbGenFileBuff::setOptionalExpansionFileNameGelIdValue( const int64_t value ) {
		static const std::string S_ProcName( "setOptionalExpansionFileNameGelIdValue" );
		if( value < cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenFileBuff::EXPANSIONFILENAMEGELID_MIN_VALUE );
		}
		optionalExpansionFileNameGelId.setValue( value );
	}

	size_t CFGenKbGenFileBuff::hashCode() const {
		size_t hashCode = CFGenKbGenRuleBuff::hashCode();
		if( ! isOptionalGenerateOnceNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalGenerateOnceValue() );
		}
		if( ! isOptionalSourceBundleNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSourceBundleValue() );
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSourceBundleTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSourceBundleGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSourceBundleGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalModuleNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalModuleNameValue() );
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalModuleNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalModuleNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalModuleNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBasePackageNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalBasePackageNameValue() );
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBasePackageTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBasePackageGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBasePackageGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSubPackageNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSubPackageNameValue() );
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSubPackageTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSubPackageGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalSubPackageGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpansionClassNameValue() );
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionClassNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionClassNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionClassNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpansionKeyNameValue() );
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionKeyNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionKeyNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionKeyNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpansionFileNameValue() );
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionFileNameTenantIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionFileNameGelCacheIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalExpansionFileNameGelIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	CFGenKbGenFileBuff CFGenKbGenFileBuff::operator =( cfcore::CFGenKbGenFileBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredCartridgeId( src.getRequiredCartridgeId() );
		setRequiredItemId( src.getRequiredItemId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredRuleTypeId( src.getRequiredRuleTypeId() );
		setRequiredName( src.getRequiredName() );
		setRequiredToolSetId( src.getRequiredToolSetId() );
		if( src.isOptionalScopeDefIdNull() ) {
			setOptionalScopeDefIdNull();
		}
		else {
			setOptionalScopeDefIdValue( src.getOptionalScopeDefIdValue() );
		}
		setRequiredGenDefId( src.getRequiredGenDefId() );
		if( src.isOptionalGelExecutableTenantIdNull() ) {
			setOptionalGelExecutableTenantIdNull();
		}
		else {
			setOptionalGelExecutableTenantIdValue( src.getOptionalGelExecutableTenantIdValue() );
		}
		if( src.isOptionalGelExecutableGelCacheIdNull() ) {
			setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			setOptionalGelExecutableGelCacheIdValue( src.getOptionalGelExecutableGelCacheIdValue() );
		}
		if( src.isOptionalGelExecutableIdNull() ) {
			setOptionalGelExecutableIdNull();
		}
		else {
			setOptionalGelExecutableIdValue( src.getOptionalGelExecutableIdValue() );
		}
		if( src.isOptionalProbeTenantIdNull() ) {
			setOptionalProbeTenantIdNull();
		}
		else {
			setOptionalProbeTenantIdValue( src.getOptionalProbeTenantIdValue() );
		}
		if( src.isOptionalProbeCartridgeIdNull() ) {
			setOptionalProbeCartridgeIdNull();
		}
		else {
			setOptionalProbeCartridgeIdValue( src.getOptionalProbeCartridgeIdValue() );
		}
		if( src.isOptionalProbeGenItemIdNull() ) {
			setOptionalProbeGenItemIdNull();
		}
		else {
			setOptionalProbeGenItemIdValue( src.getOptionalProbeGenItemIdValue() );
		}
		setRequiredDefinedNear( src.getRequiredDefinedNear() );
		setRequiredBody( src.getRequiredBody() );
		if( src.isOptionalBodyTenantIdNull() ) {
			setOptionalBodyTenantIdNull();
		}
		else {
			setOptionalBodyTenantIdValue( src.getOptionalBodyTenantIdValue() );
		}
		if( src.isOptionalBodyGelCacheIdNull() ) {
			setOptionalBodyGelCacheIdNull();
		}
		else {
			setOptionalBodyGelCacheIdValue( src.getOptionalBodyGelCacheIdValue() );
		}
		if( src.isOptionalBodyGelIdNull() ) {
			setOptionalBodyGelIdNull();
		}
		else {
			setOptionalBodyGelIdValue( src.getOptionalBodyGelIdValue() );
		}
		if( src.isOptionalGenerateOnceNull() ) {
			setOptionalGenerateOnceNull();
		}
		else {
			setOptionalGenerateOnceValue( src.getOptionalGenerateOnceValue() );
		}
		if( src.isOptionalSourceBundleNull() ) {
			setOptionalSourceBundleNull();
		}
		else {
			setOptionalSourceBundleValue( src.getOptionalSourceBundleValue() );
		}
		if( src.isOptionalSourceBundleTenantIdNull() ) {
			setOptionalSourceBundleTenantIdNull();
		}
		else {
			setOptionalSourceBundleTenantIdValue( src.getOptionalSourceBundleTenantIdValue() );
		}
		if( src.isOptionalSourceBundleGelCacheIdNull() ) {
			setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			setOptionalSourceBundleGelCacheIdValue( src.getOptionalSourceBundleGelCacheIdValue() );
		}
		if( src.isOptionalSourceBundleGelIdNull() ) {
			setOptionalSourceBundleGelIdNull();
		}
		else {
			setOptionalSourceBundleGelIdValue( src.getOptionalSourceBundleGelIdValue() );
		}
		if( src.isOptionalModuleNameNull() ) {
			setOptionalModuleNameNull();
		}
		else {
			setOptionalModuleNameValue( src.getOptionalModuleNameValue() );
		}
		if( src.isOptionalModuleNameTenantIdNull() ) {
			setOptionalModuleNameTenantIdNull();
		}
		else {
			setOptionalModuleNameTenantIdValue( src.getOptionalModuleNameTenantIdValue() );
		}
		if( src.isOptionalModuleNameGelCacheIdNull() ) {
			setOptionalModuleNameGelCacheIdNull();
		}
		else {
			setOptionalModuleNameGelCacheIdValue( src.getOptionalModuleNameGelCacheIdValue() );
		}
		if( src.isOptionalModuleNameGelIdNull() ) {
			setOptionalModuleNameGelIdNull();
		}
		else {
			setOptionalModuleNameGelIdValue( src.getOptionalModuleNameGelIdValue() );
		}
		if( src.isOptionalBasePackageNameNull() ) {
			setOptionalBasePackageNameNull();
		}
		else {
			setOptionalBasePackageNameValue( src.getOptionalBasePackageNameValue() );
		}
		if( src.isOptionalBasePackageTenantIdNull() ) {
			setOptionalBasePackageTenantIdNull();
		}
		else {
			setOptionalBasePackageTenantIdValue( src.getOptionalBasePackageTenantIdValue() );
		}
		if( src.isOptionalBasePackageGelCacheIdNull() ) {
			setOptionalBasePackageGelCacheIdNull();
		}
		else {
			setOptionalBasePackageGelCacheIdValue( src.getOptionalBasePackageGelCacheIdValue() );
		}
		if( src.isOptionalBasePackageGelIdNull() ) {
			setOptionalBasePackageGelIdNull();
		}
		else {
			setOptionalBasePackageGelIdValue( src.getOptionalBasePackageGelIdValue() );
		}
		if( src.isOptionalSubPackageNameNull() ) {
			setOptionalSubPackageNameNull();
		}
		else {
			setOptionalSubPackageNameValue( src.getOptionalSubPackageNameValue() );
		}
		if( src.isOptionalSubPackageTenantIdNull() ) {
			setOptionalSubPackageTenantIdNull();
		}
		else {
			setOptionalSubPackageTenantIdValue( src.getOptionalSubPackageTenantIdValue() );
		}
		if( src.isOptionalSubPackageGelCacheIdNull() ) {
			setOptionalSubPackageGelCacheIdNull();
		}
		else {
			setOptionalSubPackageGelCacheIdValue( src.getOptionalSubPackageGelCacheIdValue() );
		}
		if( src.isOptionalSubPackageGelIdNull() ) {
			setOptionalSubPackageGelIdNull();
		}
		else {
			setOptionalSubPackageGelIdValue( src.getOptionalSubPackageGelIdValue() );
		}
		if( src.isOptionalExpansionClassNameNull() ) {
			setOptionalExpansionClassNameNull();
		}
		else {
			setOptionalExpansionClassNameValue( src.getOptionalExpansionClassNameValue() );
		}
		if( src.isOptionalExpansionClassNameTenantIdNull() ) {
			setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			setOptionalExpansionClassNameTenantIdValue( src.getOptionalExpansionClassNameTenantIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelCacheIdNull() ) {
			setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionClassNameGelCacheIdValue( src.getOptionalExpansionClassNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionClassNameGelIdNull() ) {
			setOptionalExpansionClassNameGelIdNull();
		}
		else {
			setOptionalExpansionClassNameGelIdValue( src.getOptionalExpansionClassNameGelIdValue() );
		}
		if( src.isOptionalExpansionKeyNameNull() ) {
			setOptionalExpansionKeyNameNull();
		}
		else {
			setOptionalExpansionKeyNameValue( src.getOptionalExpansionKeyNameValue() );
		}
		if( src.isOptionalExpansionKeyNameTenantIdNull() ) {
			setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			setOptionalExpansionKeyNameTenantIdValue( src.getOptionalExpansionKeyNameTenantIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelCacheIdValue( src.getOptionalExpansionKeyNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionKeyNameGelIdNull() ) {
			setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			setOptionalExpansionKeyNameGelIdValue( src.getOptionalExpansionKeyNameGelIdValue() );
		}
		if( src.isOptionalExpansionFileNameNull() ) {
			setOptionalExpansionFileNameNull();
		}
		else {
			setOptionalExpansionFileNameValue( src.getOptionalExpansionFileNameValue() );
		}
		if( src.isOptionalExpansionFileNameTenantIdNull() ) {
			setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			setOptionalExpansionFileNameTenantIdValue( src.getOptionalExpansionFileNameTenantIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelCacheIdNull() ) {
			setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			setOptionalExpansionFileNameGelCacheIdValue( src.getOptionalExpansionFileNameGelCacheIdValue() );
		}
		if( src.isOptionalExpansionFileNameGelIdNull() ) {
			setOptionalExpansionFileNameGelIdNull();
		}
		else {
			setOptionalExpansionFileNameGelIdValue( src.getOptionalExpansionFileNameGelIdValue() );
		}
		return( *this );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <( const CFGenKbGenFileBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
			if( getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
			if( getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
			if( getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
			if( getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator <=( const CFGenKbGenFileBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
			if( getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
			if( getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
			if( getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
			if( getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator ==( const CFGenKbGenFileBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		if( getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		if( getRequiredBody() != rhs.getRequiredBody() ) {
			return( false );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGenerateOnceNull() ) {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				if( getOptionalGenerateOnceValue() != rhs.getOptionalGenerateOnceValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleNull() ) {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				if( getOptionalSourceBundleValue() != rhs.getOptionalSourceBundleValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameNull() ) {
			if( ! rhs.isOptionalModuleNameNull() ) {
				if( getOptionalModuleNameValue() != rhs.getOptionalModuleNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageNameNull() ) {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				if( getOptionalBasePackageNameValue() != rhs.getOptionalBasePackageNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageNameNull() ) {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				if( getOptionalSubPackageNameValue() != rhs.getOptionalSubPackageNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				if( getOptionalExpansionClassNameValue() != rhs.getOptionalExpansionClassNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				if( getOptionalExpansionKeyNameValue() != rhs.getOptionalExpansionKeyNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				if( getOptionalExpansionFileNameValue() != rhs.getOptionalExpansionFileNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator !=( const CFGenKbGenFileBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		if( getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() != rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
			if( getOptionalGenerateOnceValue() != rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleValue() != rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
			if( getOptionalModuleNameValue() != rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
			if( getOptionalBasePackageNameValue() != rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
			if( getOptionalSubPackageNameValue() != rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameValue() != rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameValue() != rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameValue() != rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >=( const CFGenKbGenFileBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
			if( getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
			if( getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
			if( getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
			if( getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenItemPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenFileBuff::operator >( const CFGenKbGenFileBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
			if( getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
			if( getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
			if( getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
			if( getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbGenFileBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_CartridgeId( "CartridgeId" );
		static const std::string S_ItemId( "ItemId" );
		static const std::string S_RuleTypeId( "RuleTypeId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ToolSetId( "ToolSetId" );
		static const std::string S_ScopeDefId( "ScopeDefId" );
		static const std::string S_GenDefId( "GenDefId" );
		static const std::string S_GelExecutableTenantId( "GelExecutableTenantId" );
		static const std::string S_GelExecutableGelCacheId( "GelExecutableGelCacheId" );
		static const std::string S_GelExecutableId( "GelExecutableId" );
		static const std::string S_ProbeTenantId( "ProbeTenantId" );
		static const std::string S_ProbeCartridgeId( "ProbeCartridgeId" );
		static const std::string S_ProbeGenItemId( "ProbeGenItemId" );
		static const std::string S_DefinedNear( "DefinedNear" );
		static const std::string S_Body( "Body" );
		static const std::string S_BodyTenantId( "BodyTenantId" );
		static const std::string S_BodyGelCacheId( "BodyGelCacheId" );
		static const std::string S_BodyGelId( "BodyGelId" );
		static const std::string S_GenerateOnce( "GenerateOnce" );
		static const std::string S_SourceBundle( "SourceBundle" );
		static const std::string S_SourceBundleTenantId( "SourceBundleTenantId" );
		static const std::string S_SourceBundleGelCacheId( "SourceBundleGelCacheId" );
		static const std::string S_SourceBundleGelId( "SourceBundleGelId" );
		static const std::string S_ModuleName( "ModuleName" );
		static const std::string S_ModuleNameTenantId( "ModuleNameTenantId" );
		static const std::string S_ModuleNameGelCacheId( "ModuleNameGelCacheId" );
		static const std::string S_ModuleNameGelId( "ModuleNameGelId" );
		static const std::string S_BasePackageName( "BasePackageName" );
		static const std::string S_BasePackageTenantId( "BasePackageTenantId" );
		static const std::string S_BasePackageGelCacheId( "BasePackageGelCacheId" );
		static const std::string S_BasePackageGelId( "BasePackageGelId" );
		static const std::string S_SubPackageName( "SubPackageName" );
		static const std::string S_SubPackageTenantId( "SubPackageTenantId" );
		static const std::string S_SubPackageGelCacheId( "SubPackageGelCacheId" );
		static const std::string S_SubPackageGelId( "SubPackageGelId" );
		static const std::string S_ExpansionClassName( "ExpansionClassName" );
		static const std::string S_ExpansionClassNameTenantId( "ExpansionClassNameTenantId" );
		static const std::string S_ExpansionClassNameGelCacheId( "ExpansionClassNameGelCacheId" );
		static const std::string S_ExpansionClassNameGelId( "ExpansionClassNameGelId" );
		static const std::string S_ExpansionKeyName( "ExpansionKeyName" );
		static const std::string S_ExpansionKeyNameTenantId( "ExpansionKeyNameTenantId" );
		static const std::string S_ExpansionKeyNameGelCacheId( "ExpansionKeyNameGelCacheId" );
		static const std::string S_ExpansionKeyNameGelId( "ExpansionKeyNameGelId" );
		static const std::string S_ExpansionFileName( "ExpansionFileName" );
		static const std::string S_ExpansionFileNameTenantId( "ExpansionFileNameTenantId" );
		static const std::string S_ExpansionFileNameGelCacheId( "ExpansionFileNameGelCacheId" );
		static const std::string S_ExpansionFileNameGelId( "ExpansionFileNameGelId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CartridgeId, getRequiredCartridgeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ItemId, getRequiredItemId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RuleTypeId, getRequiredRuleTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolSetId, getRequiredToolSetId() ) );
		if( ! isOptionalScopeDefIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ScopeDefId, getOptionalScopeDefIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_GenDefId, getRequiredGenDefId() ) );
		if( ! isOptionalGelExecutableTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableTenantId, getOptionalGelExecutableTenantIdValue() ) );
		}
		if( ! isOptionalGelExecutableGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableGelCacheId, getOptionalGelExecutableGelCacheIdValue() ) );
		}
		if( ! isOptionalGelExecutableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableId, getOptionalGelExecutableIdValue() ) );
		}
		if( ! isOptionalProbeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeTenantId, getOptionalProbeTenantIdValue() ) );
		}
		if( ! isOptionalProbeCartridgeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeCartridgeId, getOptionalProbeCartridgeIdValue() ) );
		}
		if( ! isOptionalProbeGenItemIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeGenItemId, getOptionalProbeGenItemIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefinedNear, getRequiredDefinedNear() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Body, getRequiredBody() ) );
		if( ! isOptionalBodyTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyTenantId, getOptionalBodyTenantIdValue() ) );
		}
		if( ! isOptionalBodyGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelCacheId, getOptionalBodyGelCacheIdValue() ) );
		}
		if( ! isOptionalBodyGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelId, getOptionalBodyGelIdValue() ) );
		}
		if( ! isOptionalGenerateOnceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_GenerateOnce, getOptionalGenerateOnceValue() ) );
		}
		if( ! isOptionalSourceBundleNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceBundle, getOptionalSourceBundleValue() ) );
		}
		if( ! isOptionalSourceBundleTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleTenantId, getOptionalSourceBundleTenantIdValue() ) );
		}
		if( ! isOptionalSourceBundleGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelCacheId, getOptionalSourceBundleGelCacheIdValue() ) );
		}
		if( ! isOptionalSourceBundleGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelId, getOptionalSourceBundleGelIdValue() ) );
		}
		if( ! isOptionalModuleNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ModuleName, getOptionalModuleNameValue() ) );
		}
		if( ! isOptionalModuleNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameTenantId, getOptionalModuleNameTenantIdValue() ) );
		}
		if( ! isOptionalModuleNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelCacheId, getOptionalModuleNameGelCacheIdValue() ) );
		}
		if( ! isOptionalModuleNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelId, getOptionalModuleNameGelIdValue() ) );
		}
		if( ! isOptionalBasePackageNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_BasePackageName, getOptionalBasePackageNameValue() ) );
		}
		if( ! isOptionalBasePackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageTenantId, getOptionalBasePackageTenantIdValue() ) );
		}
		if( ! isOptionalBasePackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelCacheId, getOptionalBasePackageGelCacheIdValue() ) );
		}
		if( ! isOptionalBasePackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelId, getOptionalBasePackageGelIdValue() ) );
		}
		if( ! isOptionalSubPackageNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SubPackageName, getOptionalSubPackageNameValue() ) );
		}
		if( ! isOptionalSubPackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageTenantId, getOptionalSubPackageTenantIdValue() ) );
		}
		if( ! isOptionalSubPackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelCacheId, getOptionalSubPackageGelCacheIdValue() ) );
		}
		if( ! isOptionalSubPackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelId, getOptionalSubPackageGelIdValue() ) );
		}
		if( ! isOptionalExpansionClassNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionClassName, getOptionalExpansionClassNameValue() ) );
		}
		if( ! isOptionalExpansionClassNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameTenantId, getOptionalExpansionClassNameTenantIdValue() ) );
		}
		if( ! isOptionalExpansionClassNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelCacheId, getOptionalExpansionClassNameGelCacheIdValue() ) );
		}
		if( ! isOptionalExpansionClassNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelId, getOptionalExpansionClassNameGelIdValue() ) );
		}
		if( ! isOptionalExpansionKeyNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionKeyName, getOptionalExpansionKeyNameValue() ) );
		}
		if( ! isOptionalExpansionKeyNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameTenantId, getOptionalExpansionKeyNameTenantIdValue() ) );
		}
		if( ! isOptionalExpansionKeyNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelCacheId, getOptionalExpansionKeyNameGelCacheIdValue() ) );
		}
		if( ! isOptionalExpansionKeyNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelId, getOptionalExpansionKeyNameGelIdValue() ) );
		}
		if( ! isOptionalExpansionFileNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionFileName, getOptionalExpansionFileNameValue() ) );
		}
		if( ! isOptionalExpansionFileNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameTenantId, getOptionalExpansionFileNameTenantIdValue() ) );
		}
		if( ! isOptionalExpansionFileNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelCacheId, getOptionalExpansionFileNameGelCacheIdValue() ) );
		}
		if( ! isOptionalExpansionFileNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelId, getOptionalExpansionFileNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
			if( lhs.getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
			if( lhs.getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( false );
		}
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( false );
		}
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( false );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( false );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		if( lhs.getRequiredBody() != rhs.getRequiredBody() ) {
			return( false );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGenerateOnceNull() ) {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				if( lhs.getOptionalGenerateOnceValue() != rhs.getOptionalGenerateOnceValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleNull() ) {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				if( lhs.getOptionalSourceBundleValue() != rhs.getOptionalSourceBundleValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameNull() ) {
			if( ! rhs.isOptionalModuleNameNull() ) {
				if( lhs.getOptionalModuleNameValue() != rhs.getOptionalModuleNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageNameNull() ) {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				if( lhs.getOptionalBasePackageNameValue() != rhs.getOptionalBasePackageNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageNameNull() ) {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				if( lhs.getOptionalSubPackageNameValue() != rhs.getOptionalSubPackageNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameNull() ) {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				if( lhs.getOptionalExpansionClassNameValue() != rhs.getOptionalExpansionClassNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				if( lhs.getOptionalExpansionKeyNameValue() != rhs.getOptionalExpansionKeyNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameNull() ) {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				if( lhs.getOptionalExpansionFileNameValue() != rhs.getOptionalExpansionFileNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() != rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() != rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() != rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() != rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() != rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() != rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredGenDefId() != rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() != rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() != rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() != rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() != rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() != rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() != rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredDefinedNear() != rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() != rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() != rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() != rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() != rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateOnceValue() != rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleValue() != rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() != rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() != rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() != rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameValue() != rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() != rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() != rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() != rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageNameValue() != rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() != rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() != rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() != rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageNameValue() != rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() != rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() != rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() != rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameValue() != rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() != rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() != rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() != rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameValue() != rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() != rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() != rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() != rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameValue() != rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() != rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() != rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() != rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs ) {
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs ) {
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs ) {
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs ) {
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs ) {
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredCartridgeId() < rhs.getRequiredCartridgeId() ) {
			return( false );
		}
		else if( lhs.getRequiredCartridgeId() > rhs.getRequiredCartridgeId() ) {
			return( true );
		}
		if( lhs.getRequiredItemId() < rhs.getRequiredItemId() ) {
			return( false );
		}
		else if( lhs.getRequiredItemId() > rhs.getRequiredItemId() ) {
			return( true );
		}
		if( lhs.getRequiredRuleTypeId() < rhs.getRequiredRuleTypeId() ) {
			return( false );
		}
		else if( lhs.getRequiredRuleTypeId() > rhs.getRequiredRuleTypeId() ) {
			return( true );
		}
		if( lhs.getRequiredName() < rhs.getRequiredName() ) {
			return( false );
		}
		else if( lhs.getRequiredName() > rhs.getRequiredName() ) {
			return( true );
		}
		if( lhs.getRequiredToolSetId() < rhs.getRequiredToolSetId() ) {
			return( false );
		}
		else if( lhs.getRequiredToolSetId() > rhs.getRequiredToolSetId() ) {
			return( true );
		}
		if( ! lhs.isOptionalScopeDefIdNull() ) {
			if( rhs.isOptionalScopeDefIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalScopeDefIdValue() < rhs.getOptionalScopeDefIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalScopeDefIdValue() > rhs.getOptionalScopeDefIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalScopeDefIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredGenDefId() < rhs.getRequiredGenDefId() ) {
			return( false );
		}
		else if( lhs.getRequiredGenDefId() > rhs.getRequiredGenDefId() ) {
			return( true );
		}
		if( ! lhs.isOptionalGelExecutableTenantIdNull() ) {
			if( rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableTenantIdValue() < rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableTenantIdValue() > rhs.getOptionalGelExecutableTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableGelCacheIdNull() ) {
			if( rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableGelCacheIdValue() < rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableGelCacheIdValue() > rhs.getOptionalGelExecutableGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGelExecutableIdNull() ) {
			if( rhs.isOptionalGelExecutableIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalGelExecutableIdValue() < rhs.getOptionalGelExecutableIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGelExecutableIdValue() > rhs.getOptionalGelExecutableIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGelExecutableIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeTenantIdNull() ) {
			if( rhs.isOptionalProbeTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeTenantIdValue() < rhs.getOptionalProbeTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeTenantIdValue() > rhs.getOptionalProbeTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeCartridgeIdNull() ) {
			if( rhs.isOptionalProbeCartridgeIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeCartridgeIdValue() < rhs.getOptionalProbeCartridgeIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeCartridgeIdValue() > rhs.getOptionalProbeCartridgeIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeCartridgeIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalProbeGenItemIdNull() ) {
			if( rhs.isOptionalProbeGenItemIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalProbeGenItemIdValue() < rhs.getOptionalProbeGenItemIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalProbeGenItemIdValue() > rhs.getOptionalProbeGenItemIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalProbeGenItemIdNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredDefinedNear() < rhs.getRequiredDefinedNear() ) {
			return( false );
		}
		else if( lhs.getRequiredDefinedNear() > rhs.getRequiredDefinedNear() ) {
			return( true );
		}
		if( lhs.getRequiredBody() < rhs.getRequiredBody() ) {
			return( false );
		}
		else if( lhs.getRequiredBody() > rhs.getRequiredBody() ) {
			return( true );
		}
		if( ! lhs.isOptionalBodyTenantIdNull() ) {
			if( rhs.isOptionalBodyTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyTenantIdValue() < rhs.getOptionalBodyTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyTenantIdValue() > rhs.getOptionalBodyTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelCacheIdNull() ) {
			if( rhs.isOptionalBodyGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelCacheIdValue() < rhs.getOptionalBodyGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelCacheIdValue() > rhs.getOptionalBodyGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBodyGelIdNull() ) {
			if( rhs.isOptionalBodyGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBodyGelIdValue() < rhs.getOptionalBodyGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBodyGelIdValue() > rhs.getOptionalBodyGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBodyGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalGenerateOnceNull() ) {
			if( rhs.isOptionalGenerateOnceNull() ) {
				return( true );
			}
			if( lhs.getOptionalGenerateOnceValue() < rhs.getOptionalGenerateOnceValue() ) {
				return( false );
			}
			else if( lhs.getOptionalGenerateOnceValue() > rhs.getOptionalGenerateOnceValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalGenerateOnceNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleNull() ) {
			if( rhs.isOptionalSourceBundleNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleValue() < rhs.getOptionalSourceBundleValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleValue() > rhs.getOptionalSourceBundleValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleTenantIdNull() ) {
			if( rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleTenantIdValue() < rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleTenantIdValue() > rhs.getOptionalSourceBundleTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelCacheIdNull() ) {
			if( rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelCacheIdValue() < rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelCacheIdValue() > rhs.getOptionalSourceBundleGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSourceBundleGelIdNull() ) {
			if( rhs.isOptionalSourceBundleGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSourceBundleGelIdValue() < rhs.getOptionalSourceBundleGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSourceBundleGelIdValue() > rhs.getOptionalSourceBundleGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSourceBundleGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameNull() ) {
			if( rhs.isOptionalModuleNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameValue() < rhs.getOptionalModuleNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameValue() > rhs.getOptionalModuleNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameTenantIdNull() ) {
			if( rhs.isOptionalModuleNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameTenantIdValue() < rhs.getOptionalModuleNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameTenantIdValue() > rhs.getOptionalModuleNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelCacheIdNull() ) {
			if( rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelCacheIdValue() < rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelCacheIdValue() > rhs.getOptionalModuleNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalModuleNameGelIdNull() ) {
			if( rhs.isOptionalModuleNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalModuleNameGelIdValue() < rhs.getOptionalModuleNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalModuleNameGelIdValue() > rhs.getOptionalModuleNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalModuleNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageNameNull() ) {
			if( rhs.isOptionalBasePackageNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageNameValue() < rhs.getOptionalBasePackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageNameValue() > rhs.getOptionalBasePackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageTenantIdNull() ) {
			if( rhs.isOptionalBasePackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageTenantIdValue() < rhs.getOptionalBasePackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageTenantIdValue() > rhs.getOptionalBasePackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelCacheIdNull() ) {
			if( rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelCacheIdValue() < rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelCacheIdValue() > rhs.getOptionalBasePackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalBasePackageGelIdNull() ) {
			if( rhs.isOptionalBasePackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBasePackageGelIdValue() < rhs.getOptionalBasePackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBasePackageGelIdValue() > rhs.getOptionalBasePackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBasePackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageNameNull() ) {
			if( rhs.isOptionalSubPackageNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageNameValue() < rhs.getOptionalSubPackageNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageNameValue() > rhs.getOptionalSubPackageNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageTenantIdNull() ) {
			if( rhs.isOptionalSubPackageTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageTenantIdValue() < rhs.getOptionalSubPackageTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageTenantIdValue() > rhs.getOptionalSubPackageTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelCacheIdNull() ) {
			if( rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelCacheIdValue() < rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelCacheIdValue() > rhs.getOptionalSubPackageGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSubPackageGelIdNull() ) {
			if( rhs.isOptionalSubPackageGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalSubPackageGelIdValue() < rhs.getOptionalSubPackageGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSubPackageGelIdValue() > rhs.getOptionalSubPackageGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSubPackageGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameNull() ) {
			if( rhs.isOptionalExpansionClassNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameValue() < rhs.getOptionalExpansionClassNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameValue() > rhs.getOptionalExpansionClassNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameTenantIdValue() < rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameTenantIdValue() > rhs.getOptionalExpansionClassNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelCacheIdValue() < rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelCacheIdValue() > rhs.getOptionalExpansionClassNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionClassNameGelIdNull() ) {
			if( rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionClassNameGelIdValue() < rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionClassNameGelIdValue() > rhs.getOptionalExpansionClassNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionClassNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameNull() ) {
			if( rhs.isOptionalExpansionKeyNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameValue() < rhs.getOptionalExpansionKeyNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameValue() > rhs.getOptionalExpansionKeyNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameTenantIdValue() < rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameTenantIdValue() > rhs.getOptionalExpansionKeyNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() < rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelCacheIdValue() > rhs.getOptionalExpansionKeyNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionKeyNameGelIdNull() ) {
			if( rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionKeyNameGelIdValue() < rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionKeyNameGelIdValue() > rhs.getOptionalExpansionKeyNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionKeyNameGelIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameNull() ) {
			if( rhs.isOptionalExpansionFileNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameValue() < rhs.getOptionalExpansionFileNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameValue() > rhs.getOptionalExpansionFileNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameTenantIdNull() ) {
			if( rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameTenantIdValue() < rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameTenantIdValue() > rhs.getOptionalExpansionFileNameTenantIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameTenantIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelCacheIdValue() < rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelCacheIdValue() > rhs.getOptionalExpansionFileNameGelCacheIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelCacheIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalExpansionFileNameGelIdNull() ) {
			if( rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpansionFileNameGelIdValue() < rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpansionFileNameGelIdValue() > rhs.getOptionalExpansionFileNameGelIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpansionFileNameGelIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

