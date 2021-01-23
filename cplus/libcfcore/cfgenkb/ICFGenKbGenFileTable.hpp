#pragma once

// Description: C++18 DbIO interface for GenFile.

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
#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/CFGenKbGenFileBuff.hpp>
#include <cfgenkb/CFGenKbGenItemPKey.hpp>
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

namespace cfcore {
	class ICFGenKbSchemaObj;
}

namespace cfcore {
	class ICFGenKbGenFileObj;

	class ICFGenKbGenFileTable
	{
	public:
		ICFGenKbGenFileTable();
		virtual ~ICFGenKbGenFileTable();

		virtual cfcore::CFGenKbGenFileBuff* createGenFile( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenFileBuff* Buff ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* updateGenFile( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenFileBuff* Buff ) = 0;

		virtual void deleteGenFile( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenFileBuff* Buff ) = 0;
		virtual void deleteGenFileByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSourceBundleTenantId,
			const int64_t* argSourceBundleGelCacheId,
			const int64_t* argSourceBundleGelId ) = 0;

		virtual void deleteGenFileByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXSrcBundleKey* argKey ) = 0;
		virtual void deleteGenFileByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argModuleNameTenantId,
			const int64_t* argModuleNameGelCacheId,
			const int64_t* argModuleNameGelId ) = 0;

		virtual void deleteGenFileByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXModNameKey* argKey ) = 0;
		virtual void deleteGenFileByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBasePackageTenantId,
			const int64_t* argBasePackageGelCacheId,
			const int64_t* argBasePackageGelId ) = 0;

		virtual void deleteGenFileByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXBasePkgKey* argKey ) = 0;
		virtual void deleteGenFileByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSubPackageTenantId,
			const int64_t* argSubPackageGelCacheId,
			const int64_t* argSubPackageGelId ) = 0;

		virtual void deleteGenFileByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXSubPkgKey* argKey ) = 0;
		virtual void deleteGenFileByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionClassNameTenantId,
			const int64_t* argExpansionClassNameGelCacheId,
			const int64_t* argExpansionClassNameGelId ) = 0;

		virtual void deleteGenFileByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXExpClsNameKey* argKey ) = 0;
		virtual void deleteGenFileByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionKeyNameTenantId,
			const int64_t* argExpansionKeyNameGelCacheId,
			const int64_t* argExpansionKeyNameGelId ) = 0;

		virtual void deleteGenFileByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXExpKeyNameKey* argKey ) = 0;
		virtual void deleteGenFileByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionFileNameTenantId,
			const int64_t* argExpansionFileNameGelCacheId,
			const int64_t* argExpansionFileNameGelId ) = 0;

		virtual void deleteGenFileByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXExpFileNameKey* argKey ) = 0;
		virtual void deleteGenFileByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBodyTenantId,
			const int64_t* argBodyGelCacheId,
			const int64_t* argBodyGelId ) = 0;

		virtual void deleteGenFileByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenRuleByBodyIdxKey* argKey ) = 0;
		virtual void deleteGenFileByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId ) = 0;

		virtual void deleteGenFileByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey ) = 0;
		virtual void deleteGenFileByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId ) = 0;

		virtual void deleteGenFileByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey ) = 0;
		virtual void deleteGenFileByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId ) = 0;

		virtual void deleteGenFileByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey ) = 0;
		virtual void deleteGenFileByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId ) = 0;

		virtual void deleteGenFileByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey ) = 0;
		virtual void deleteGenFileByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId ) = 0;

		virtual void deleteGenFileByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey ) = 0;
		virtual void deleteGenFileByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId ) = 0;

		virtual void deleteGenFileByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey ) = 0;
		virtual void deleteGenFileByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId ) = 0;

		virtual void deleteGenFileByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey ) = 0;
		virtual void deleteGenFileByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId ) = 0;

		virtual void deleteGenFileByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey ) = 0;
		virtual void deleteGenFileByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId ) = 0;

		virtual void deleteGenFileByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey ) = 0;
		virtual void deleteGenFileByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId ) = 0;

		virtual void deleteGenFileByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId ) = 0;

		virtual cfcore::CFGenKbGenFileBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId ) = 0;

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId ) = 0;

		virtual void releasePreparedStatements() = 0;
	};
}
