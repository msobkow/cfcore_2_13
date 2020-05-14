#pragma once

// Description: C++18 Table Object specification for CFGenKb.

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

namespace cfcore {

	class CFGenKbGenItemTableObj
	: public virtual ICFGenKbGenItemTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* members;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* allGenItem;
		std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByCartIdx;
		std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByRuleTypeIdx;
		std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByToolSetIdx;
		std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByScopeIdx;
		std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByGenDefIdx;
		std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenItemObj*>* indexByAltIdx;
		std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByGelExecIdx;
		std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>* indexByProbeIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGenItemTableObj();
		CFGenKbGenItemTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGenItemTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGenItemObj* newInstance();

		virtual cfcore::ICFGenKbGenItemEditObj* newEditInstance( cfcore::ICFGenKbGenItemObj* orig );

		virtual cfcore::ICFGenKbGenItemObj* constructByClassCode( const classcode_t argClassCode );

		virtual cfcore::ICFGenKbGenItemObj* realizeGenItem( cfcore::ICFGenKbGenItemObj* Obj );

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
		virtual void reallyDeepDisposeGenItem( cfcore::ICFGenKbGenItemObj* Obj );
		virtual cfcore::ICFGenKbGenItemObj* createGenItem( cfcore::ICFGenKbGenItemEditObj* Obj );

		virtual cfcore::ICFGenKbGenItemObj* readGenItem( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGenItemObj* lockGenItem( cfcore::CFGenKbGenItemPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readAllGenItem( bool forceRead = false );

		virtual cfcore::ICFGenKbGenItemObj* readGenItemByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByRuleTypeIdx( const int16_t RuleTypeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByToolSetIdx( const int16_t ToolSetId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByScopeIdx( const int16_t* ScopeDefId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByGenDefIdx( const int16_t GenDefId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenItemObj* readGenItemByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readGenItemByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenItemObj* readCachedGenItem( cfcore::CFGenKbGenItemPKey* pkey );

		virtual cfcore::ICFGenKbGenItemObj* readCachedGenItemByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByRuleTypeIdx( const int16_t RuleTypeId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByToolSetIdx( const int16_t ToolSetId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByScopeIdx( const int16_t* ScopeDefId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByGenDefIdx( const int16_t GenDefId );

		virtual cfcore::ICFGenKbGenItemObj* readCachedGenItemByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::vector<cfcore::ICFGenKbGenItemObj*> readCachedGenItemByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::ICFGenKbGenItemObj* updateGenItem( cfcore::ICFGenKbGenItemEditObj* Obj );

		virtual void deleteGenItem( cfcore::ICFGenKbGenItemEditObj* Obj );

		virtual void deleteGenItemByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual void deleteGenItemByTenantIdx( const int64_t TenantId );

		virtual void deleteGenItemByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual void deleteGenItemByRuleTypeIdx( const int16_t RuleTypeId );

		virtual void deleteGenItemByToolSetIdx( const int16_t ToolSetId );

		virtual void deleteGenItemByScopeIdx( const int16_t* ScopeDefId );

		virtual void deleteGenItemByGenDefIdx( const int16_t GenDefId );

		virtual void deleteGenItemByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual void deleteGenItemByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual void deleteGenItemByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual void reallyDetachFromIndexesGenItem( cfcore::ICFGenKbGenItemObj* Obj );

	};

}
