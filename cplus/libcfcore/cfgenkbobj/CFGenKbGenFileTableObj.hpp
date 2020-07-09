#pragma once

// Description: C++18 Table Object specification for CFGenKb.

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

namespace cfcore {
	class ICFGenKbSchemaObj;
	class ICFGenKbClusterObj;
	class ICFGenKbClusterEditObj;
	class ICFGenKbClusterTableObj;
	class ICFGenKbDefClassObj;
	class ICFGenKbDefClassEditObj;
	class ICFGenKbDefClassTableObj;
	class ICFGenKbGelBoilerplateObj;
	class ICFGenKbGelBoilerplateEditObj;
	class ICFGenKbGelBoilerplateTableObj;
	class ICFGenKbGelBuiltinObj;
	class ICFGenKbGelBuiltinEditObj;
	class ICFGenKbGelBuiltinTableObj;
	class ICFGenKbGelCacheObj;
	class ICFGenKbGelCacheEditObj;
	class ICFGenKbGelCacheTableObj;
	class ICFGenKbGelCallObj;
	class ICFGenKbGelCallEditObj;
	class ICFGenKbGelCallTableObj;
	class ICFGenKbGelConstrainObj;
	class ICFGenKbGelConstrainEditObj;
	class ICFGenKbGelConstrainTableObj;
	class ICFGenKbGelCounterObj;
	class ICFGenKbGelCounterEditObj;
	class ICFGenKbGelCounterTableObj;
	class ICFGenKbGelErrorObj;
	class ICFGenKbGelErrorEditObj;
	class ICFGenKbGelErrorTableObj;
	class ICFGenKbGelExecutableObj;
	class ICFGenKbGelExecutableEditObj;
	class ICFGenKbGelExecutableTableObj;
	class ICFGenKbGelExpansionObj;
	class ICFGenKbGelExpansionEditObj;
	class ICFGenKbGelExpansionTableObj;
	class ICFGenKbGelInstructionObj;
	class ICFGenKbGelInstructionEditObj;
	class ICFGenKbGelInstructionTableObj;
	class ICFGenKbGelIteratorObj;
	class ICFGenKbGelIteratorEditObj;
	class ICFGenKbGelIteratorTableObj;
	class ICFGenKbGelModifierObj;
	class ICFGenKbGelModifierEditObj;
	class ICFGenKbGelModifierTableObj;
	class ICFGenKbGelPopObj;
	class ICFGenKbGelPopEditObj;
	class ICFGenKbGelPopTableObj;
	class ICFGenKbGelPrefixLineObj;
	class ICFGenKbGelPrefixLineEditObj;
	class ICFGenKbGelPrefixLineTableObj;
	class ICFGenKbGelReferenceObj;
	class ICFGenKbGelReferenceEditObj;
	class ICFGenKbGelReferenceTableObj;
	class ICFGenKbGelSequenceObj;
	class ICFGenKbGelSequenceEditObj;
	class ICFGenKbGelSequenceTableObj;
	class ICFGenKbGelSpreadObj;
	class ICFGenKbGelSpreadEditObj;
	class ICFGenKbGelSpreadTableObj;
	class ICFGenKbGelSwitchObj;
	class ICFGenKbGelSwitchEditObj;
	class ICFGenKbGelSwitchTableObj;
	class ICFGenKbGelSwitchLimbObj;
	class ICFGenKbGelSwitchLimbEditObj;
	class ICFGenKbGelSwitchLimbTableObj;
	class ICFGenKbGenBindObj;
	class ICFGenKbGenBindEditObj;
	class ICFGenKbGenBindTableObj;
	class ICFGenKbGenFileObj;
	class ICFGenKbGenFileEditObj;
	class ICFGenKbGenFileTableObj;
	class ICFGenKbGenItemObj;
	class ICFGenKbGenItemEditObj;
	class ICFGenKbGenItemTableObj;
	class ICFGenKbGenIteratorObj;
	class ICFGenKbGenIteratorEditObj;
	class ICFGenKbGenIteratorTableObj;
	class ICFGenKbGenReferenceObj;
	class ICFGenKbGenReferenceEditObj;
	class ICFGenKbGenReferenceTableObj;
	class ICFGenKbGenRuleObj;
	class ICFGenKbGenRuleEditObj;
	class ICFGenKbGenRuleTableObj;
	class ICFGenKbGenTruncObj;
	class ICFGenKbGenTruncEditObj;
	class ICFGenKbGenTruncTableObj;
	class ICFGenKbHostNodeObj;
	class ICFGenKbHostNodeEditObj;
	class ICFGenKbHostNodeTableObj;
	class ICFGenKbRuleCartObj;
	class ICFGenKbRuleCartEditObj;
	class ICFGenKbRuleCartTableObj;
	class ICFGenKbRuleTypeObj;
	class ICFGenKbRuleTypeEditObj;
	class ICFGenKbRuleTypeTableObj;
	class ICFGenKbSecAppObj;
	class ICFGenKbSecAppEditObj;
	class ICFGenKbSecAppTableObj;
	class ICFGenKbSecDeviceObj;
	class ICFGenKbSecDeviceEditObj;
	class ICFGenKbSecDeviceTableObj;
	class ICFGenKbSecFormObj;
	class ICFGenKbSecFormEditObj;
	class ICFGenKbSecFormTableObj;
	class ICFGenKbSecGroupObj;
	class ICFGenKbSecGroupEditObj;
	class ICFGenKbSecGroupTableObj;
	class ICFGenKbSecGroupFormObj;
	class ICFGenKbSecGroupFormEditObj;
	class ICFGenKbSecGroupFormTableObj;
	class ICFGenKbSecGrpIncObj;
	class ICFGenKbSecGrpIncEditObj;
	class ICFGenKbSecGrpIncTableObj;
	class ICFGenKbSecGrpMembObj;
	class ICFGenKbSecGrpMembEditObj;
	class ICFGenKbSecGrpMembTableObj;
	class ICFGenKbSecSessionObj;
	class ICFGenKbSecSessionEditObj;
	class ICFGenKbSecSessionTableObj;
	class ICFGenKbSecUserObj;
	class ICFGenKbSecUserEditObj;
	class ICFGenKbSecUserTableObj;
	class ICFGenKbSysClusterObj;
	class ICFGenKbSysClusterEditObj;
	class ICFGenKbSysClusterTableObj;
	class ICFGenKbTSecGroupObj;
	class ICFGenKbTSecGroupEditObj;
	class ICFGenKbTSecGroupTableObj;
	class ICFGenKbTSecGrpIncObj;
	class ICFGenKbTSecGrpIncEditObj;
	class ICFGenKbTSecGrpIncTableObj;
	class ICFGenKbTSecGrpMembObj;
	class ICFGenKbTSecGrpMembEditObj;
	class ICFGenKbTSecGrpMembTableObj;
	class ICFGenKbTenantObj;
	class ICFGenKbTenantEditObj;
	class ICFGenKbTenantTableObj;
	class ICFGenKbToolObj;
	class ICFGenKbToolEditObj;
	class ICFGenKbToolTableObj;
	class ICFGenKbToolSetObj;
	class ICFGenKbToolSetEditObj;
	class ICFGenKbToolSetTableObj;
}

#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileTableObj.hpp>

namespace cfcore {

	class CFGenKbGenFileTableObj
	: public virtual ICFGenKbGenFileTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* members;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* allGenFile;
		std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByCartIdx;
		std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByRuleTypeIdx;
		std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByToolSetIdx;
		std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByScopeIdx;
		std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByGenDefIdx;
		std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenFileObj*>* indexByAltIdx;
		std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByGelExecIdx;
		std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByProbeIdx;
		std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByBodyIdx;
		std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXSrcBundle;
		std::map< cfcore::CFGenKbGenFileByXModNameKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXModName;
		std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXBasePkg;
		std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXSubPkg;
		std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXExpClsName;
		std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXExpKeyName;
		std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>* indexByXExpFileName;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGenFileTableObj();
		CFGenKbGenFileTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGenFileTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGenFileObj* newInstance();

		virtual cfcore::ICFGenKbGenFileEditObj* newEditInstance( cfcore::ICFGenKbGenFileObj* orig );

		virtual cfcore::ICFGenKbGenFileObj* realizeGenFile( cfcore::ICFGenKbGenFileObj* Obj );

		virtual void deepDisposeByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );
		virtual void deepDisposeByRuleTypeIdx( const int16_t RuleTypeId );
		virtual void deepDisposeByToolSetIdx( const int16_t ToolSetId );
		virtual void deepDisposeByScopeIdx( const int16_t* ScopeDefId );
		virtual void deepDisposeByGenDefIdx( const int16_t GenDefId );
		virtual void deepDisposeByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );
		virtual void deepDisposeByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );
		virtual void deepDisposeByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );
		virtual void reallyDeepDisposeGenFile( cfcore::ICFGenKbGenFileObj* Obj );
		virtual void deepDisposeByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );
		virtual void deepDisposeByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId );
		virtual void deepDisposeByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId );
		virtual void deepDisposeByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId );
		virtual void deepDisposeByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId );
		virtual void deepDisposeByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId );
		virtual void deepDisposeByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId );
		virtual void deepDisposeByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId );
		virtual cfcore::ICFGenKbGenFileObj* createGenFile( cfcore::ICFGenKbGenFileEditObj* Obj );

		virtual cfcore::ICFGenKbGenFileObj* readGenFile( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGenFileObj* lockGenFile( cfcore::CFGenKbGenItemPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readAllGenFile( bool forceRead = false );

		virtual cfcore::ICFGenKbGenFileObj* readGenFileByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByRuleTypeIdx( const int16_t RuleTypeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByToolSetIdx( const int16_t ToolSetId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByScopeIdx( const int16_t* ScopeDefId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByGenDefIdx( const int16_t GenDefId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenFileObj* readGenFileByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readGenFileByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenFileObj* readCachedGenFile( cfcore::CFGenKbGenItemPKey* pkey );

		virtual cfcore::ICFGenKbGenFileObj* readCachedGenFileByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByRuleTypeIdx( const int16_t RuleTypeId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByToolSetIdx( const int16_t ToolSetId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByScopeIdx( const int16_t* ScopeDefId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByGenDefIdx( const int16_t GenDefId );

		virtual cfcore::ICFGenKbGenFileObj* readCachedGenFileByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId );

		virtual std::vector<cfcore::ICFGenKbGenFileObj*> readCachedGenFileByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId );

		virtual cfcore::ICFGenKbGenFileObj* updateGenFile( cfcore::ICFGenKbGenFileEditObj* Obj );

		virtual void deleteGenFile( cfcore::ICFGenKbGenFileEditObj* Obj );

		virtual void deleteGenFileByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual void deleteGenFileByTenantIdx( const int64_t TenantId );

		virtual void deleteGenFileByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual void deleteGenFileByRuleTypeIdx( const int16_t RuleTypeId );

		virtual void deleteGenFileByToolSetIdx( const int16_t ToolSetId );

		virtual void deleteGenFileByScopeIdx( const int16_t* ScopeDefId );

		virtual void deleteGenFileByGenDefIdx( const int16_t GenDefId );

		virtual void deleteGenFileByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual void deleteGenFileByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual void deleteGenFileByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual void deleteGenFileByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId );

		virtual void deleteGenFileByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId );

		virtual void deleteGenFileByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId );

		virtual void deleteGenFileByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId );

		virtual void deleteGenFileByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId );

		virtual void deleteGenFileByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId );

		virtual void deleteGenFileByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId );

		virtual void deleteGenFileByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId );

		virtual void reallyDetachFromIndexesGenFile( cfcore::ICFGenKbGenFileObj* Obj );

	};

}
