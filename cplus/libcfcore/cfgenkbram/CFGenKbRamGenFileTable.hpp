#pragma once

// Description: C++18 Interface for an in-memory RAM DbIO declementation for GenFile.

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
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>


namespace cfcore {

	class CFGenKbRamGenFileTable
	: public virtual cfcore::ICFGenKbGenFileTable
	{
	protected:
		cfcore::ICFGenKbSchema* schema;
		std::map<cfcore::CFGenKbGenItemPKey,
			cfcore::CFGenKbGenFileBuff*>* dictByPKey;
		std::map<cfcore::CFGenKbGenFileByXSrcBundleKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXSrcBundle;
		std::map<cfcore::CFGenKbGenFileByXModNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXModName;
		std::map<cfcore::CFGenKbGenFileByXBasePkgKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXBasePkg;
		std::map<cfcore::CFGenKbGenFileByXSubPkgKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXSubPkg;
		std::map<cfcore::CFGenKbGenFileByXExpClsNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXExpClsName;
		std::map<cfcore::CFGenKbGenFileByXExpKeyNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXExpKeyName;
		std::map<cfcore::CFGenKbGenFileByXExpFileNameKey,
			std::map<cfcore::CFGenKbGenItemPKey,
				cfcore::CFGenKbGenFileBuff*>*>* dictByXExpFileName;
	public:
		static const std::string CLASS_NAME;
		CFGenKbRamGenFileTable( cfcore::ICFGenKbSchema* argSchema );

		virtual ~CFGenKbRamGenFileTable();

		virtual cfcore::CFGenKbGenFileBuff* createGenFile( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenFileBuff* Buff );

		virtual cfcore::CFGenKbGenFileBuff* readDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenFileBuff* lockDerived( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readAllDerived( const cfcore::CFGenKbAuthorization* Authorization );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenFileBuff* readDerivedByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readDerivedByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId );

		virtual cfcore::CFGenKbGenFileBuff* readDerivedByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual cfcore::CFGenKbGenFileBuff* readBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual cfcore::CFGenKbGenFileBuff* lockBuff( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* PKey );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readAllBuff( const cfcore::CFGenKbAuthorization* Authorization );

		virtual cfcore::CFGenKbGenFileBuff* readBuffByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t RuleTypeId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t ToolSetId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* ScopeDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t GenDefId );

		virtual cfcore::CFGenKbGenFileBuff* readBuffByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> readBuffByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> pageBuffByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId,
			const int64_t* priorTenantId,
			const int64_t* priorCartridgeId,
			const int64_t* priorItemId );

		virtual cfcore::CFGenKbGenFileBuff* updateGenFile( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenFileBuff* Buff );

		virtual void deleteGenFile( const cfcore::CFGenKbAuthorization* Authorization,
			cfcore::CFGenKbGenFileBuff* Buff );
		virtual void deleteGenFileByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSourceBundleTenantId,
			const int64_t* argSourceBundleGelCacheId,
			const int64_t* argSourceBundleGelId );

		virtual void deleteGenFileByXSrcBundle( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXSrcBundleKey* argKey );

		virtual void deleteGenFileByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argModuleNameTenantId,
			const int64_t* argModuleNameGelCacheId,
			const int64_t* argModuleNameGelId );

		virtual void deleteGenFileByXModName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXModNameKey* argKey );

		virtual void deleteGenFileByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBasePackageTenantId,
			const int64_t* argBasePackageGelCacheId,
			const int64_t* argBasePackageGelId );

		virtual void deleteGenFileByXBasePkg( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXBasePkgKey* argKey );

		virtual void deleteGenFileByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argSubPackageTenantId,
			const int64_t* argSubPackageGelCacheId,
			const int64_t* argSubPackageGelId );

		virtual void deleteGenFileByXSubPkg( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXSubPkgKey* argKey );

		virtual void deleteGenFileByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionClassNameTenantId,
			const int64_t* argExpansionClassNameGelCacheId,
			const int64_t* argExpansionClassNameGelId );

		virtual void deleteGenFileByXExpClsName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXExpClsNameKey* argKey );

		virtual void deleteGenFileByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionKeyNameTenantId,
			const int64_t* argExpansionKeyNameGelCacheId,
			const int64_t* argExpansionKeyNameGelId );

		virtual void deleteGenFileByXExpKeyName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXExpKeyNameKey* argKey );

		virtual void deleteGenFileByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argExpansionFileNameTenantId,
			const int64_t* argExpansionFileNameGelCacheId,
			const int64_t* argExpansionFileNameGelId );

		virtual void deleteGenFileByXExpFileName( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenFileByXExpFileNameKey* argKey );

		virtual void deleteGenFileByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argBodyTenantId,
			const int64_t* argBodyGelCacheId,
			const int64_t* argBodyGelId );

		virtual void deleteGenFileByBodyIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenRuleByBodyIdxKey* argKey );

		virtual void deleteGenFileByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId,
			const int64_t argItemId );

		virtual void deleteGenFileByItemIdIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemPKey* argKey );

		virtual void deleteGenFileByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId );

		virtual void deleteGenFileByTenantIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByTenantIdxKey* argKey );

		virtual void deleteGenFileByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t argTenantId,
			const int64_t argCartridgeId );

		virtual void deleteGenFileByCartIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByCartIdxKey* argKey );

		virtual void deleteGenFileByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argRuleTypeId );

		virtual void deleteGenFileByRuleTypeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByRuleTypeIdxKey* argKey );

		virtual void deleteGenFileByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argToolSetId );

		virtual void deleteGenFileByToolSetIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByToolSetIdxKey* argKey );

		virtual void deleteGenFileByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t* argScopeDefId );

		virtual void deleteGenFileByScopeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByScopeIdxKey* argKey );

		virtual void deleteGenFileByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int16_t argGenDefId );

		virtual void deleteGenFileByGenDefIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGenDefIdxKey* argKey );

		virtual void deleteGenFileByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const std::string& argName,
			const int16_t argToolSetId,
			const int16_t* argScopeDefId,
			const int16_t argGenDefId );

		virtual void deleteGenFileByAltIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByAltIdxKey* argKey );

		virtual void deleteGenFileByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argGelExecutableTenantId,
			const int64_t* argGelExecutableGelCacheId,
			const int64_t* argGelExecutableId );

		virtual void deleteGenFileByGelExecIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByGelExecIdxKey* argKey );

		virtual void deleteGenFileByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const int64_t* argProbeTenantId,
			const int64_t* argProbeCartridgeId,
			const int64_t* argProbeGenItemId );

		virtual void deleteGenFileByProbeIdx( const cfcore::CFGenKbAuthorization* Authorization,
			const cfcore::CFGenKbGenItemByProbeIdxKey* argKey );


		virtual void releasePreparedStatements();

	};
}
