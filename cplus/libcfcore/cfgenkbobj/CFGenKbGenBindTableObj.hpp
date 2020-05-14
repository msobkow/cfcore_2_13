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
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenBindObj.hpp>
#include <cfgenkbobj/ICFGenKbGenBindEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenBindTableObj.hpp>

namespace cfcore {

	class CFGenKbGenBindTableObj
	: public virtual ICFGenKbGenBindTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>* members;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>* allGenBind;
		std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByCartIdx;
		std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByRuleTypeIdx;
		std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByToolSetIdx;
		std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByScopeIdx;
		std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByGenDefIdx;
		std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenBindObj*>* indexByAltIdx;
		std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByGelExecIdx;
		std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenBindObj*>*>* indexByProbeIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGenBindTableObj();
		CFGenKbGenBindTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGenBindTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGenBindObj* newInstance();

		virtual cfcore::ICFGenKbGenBindEditObj* newEditInstance( cfcore::ICFGenKbGenBindObj* orig );

		virtual cfcore::ICFGenKbGenBindObj* realizeGenBind( cfcore::ICFGenKbGenBindObj* Obj );

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
		virtual void reallyDeepDisposeGenBind( cfcore::ICFGenKbGenBindObj* Obj );
		virtual cfcore::ICFGenKbGenBindObj* createGenBind( cfcore::ICFGenKbGenBindEditObj* Obj );

		virtual cfcore::ICFGenKbGenBindObj* readGenBind( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGenBindObj* lockGenBind( cfcore::CFGenKbGenItemPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readAllGenBind( bool forceRead = false );

		virtual cfcore::ICFGenKbGenBindObj* readGenBindByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByRuleTypeIdx( const int16_t RuleTypeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByToolSetIdx( const int16_t ToolSetId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByScopeIdx( const int16_t* ScopeDefId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByGenDefIdx( const int16_t GenDefId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenBindObj* readGenBindByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readGenBindByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenBindObj* readCachedGenBind( cfcore::CFGenKbGenItemPKey* pkey );

		virtual cfcore::ICFGenKbGenBindObj* readCachedGenBindByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByRuleTypeIdx( const int16_t RuleTypeId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByToolSetIdx( const int16_t ToolSetId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByScopeIdx( const int16_t* ScopeDefId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByGenDefIdx( const int16_t GenDefId );

		virtual cfcore::ICFGenKbGenBindObj* readCachedGenBindByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::vector<cfcore::ICFGenKbGenBindObj*> readCachedGenBindByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::ICFGenKbGenBindObj* updateGenBind( cfcore::ICFGenKbGenBindEditObj* Obj );

		virtual void deleteGenBind( cfcore::ICFGenKbGenBindEditObj* Obj );

		virtual void deleteGenBindByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual void deleteGenBindByTenantIdx( const int64_t TenantId );

		virtual void deleteGenBindByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual void deleteGenBindByRuleTypeIdx( const int16_t RuleTypeId );

		virtual void deleteGenBindByToolSetIdx( const int16_t ToolSetId );

		virtual void deleteGenBindByScopeIdx( const int16_t* ScopeDefId );

		virtual void deleteGenBindByGenDefIdx( const int16_t GenDefId );

		virtual void deleteGenBindByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual void deleteGenBindByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual void deleteGenBindByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual void reallyDetachFromIndexesGenBind( cfcore::ICFGenKbGenBindObj* Obj );

	};

}
