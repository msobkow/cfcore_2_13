#pragma once

// Description: C++18 Table Object interface for CFGenKb.

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
#include <cfgenkbobj/ICFGenKbGenIteratorObj.hpp>
#include <cfgenkbobj/ICFGenKbGenIteratorEditObj.hpp>

namespace cfcore {

	class ICFGenKbGenIteratorTableObj
	{
	public:
		ICFGenKbGenIteratorTableObj();
		virtual ~ICFGenKbGenIteratorTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value ) = 0;

		virtual void minimizeMemory() = 0;

		virtual const std::string getTableName() = 0;
		virtual const std::string getTableDbName() = 0;
		virtual const classcode_t* getObjQualifyingClassCode() = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* newInstance() = 0;

		virtual cfcore::ICFGenKbGenIteratorEditObj* newEditInstance( cfcore::ICFGenKbGenIteratorObj* orig ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* realizeGenIterator( cfcore::ICFGenKbGenIteratorObj* Obj ) = 0;

		virtual void deepDisposeByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;
		virtual void deepDisposeByTenantIdx( const int64_t TenantId ) = 0;
		virtual void deepDisposeByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId ) = 0;
		virtual void deepDisposeByRuleTypeIdx( const int16_t RuleTypeId ) = 0;
		virtual void deepDisposeByToolSetIdx( const int16_t ToolSetId ) = 0;
		virtual void deepDisposeByScopeIdx( const int16_t* ScopeDefId ) = 0;
		virtual void deepDisposeByGenDefIdx( const int16_t GenDefId ) = 0;
		virtual void deepDisposeByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;
		virtual void deepDisposeByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;
		virtual void deepDisposeByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;
		virtual void reallyDeepDisposeGenIterator( cfcore::ICFGenKbGenIteratorObj* Obj ) = 0;
		virtual cfcore::ICFGenKbGenIteratorObj* createGenIterator( cfcore::ICFGenKbGenIteratorEditObj* Obj ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* readGenIterator( cfcore::CFGenKbGenItemPKey* pkey,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* lockGenIterator( cfcore::CFGenKbGenItemPKey* pkey ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readAllGenIterator( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* readGenIteratorByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByTenantIdx( const int64_t TenantId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByRuleTypeIdx( const int16_t RuleTypeId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByToolSetIdx( const int16_t ToolSetId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByScopeIdx( const int16_t* ScopeDefId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByGenDefIdx( const int16_t GenDefId,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* readGenIteratorByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readGenIteratorByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* readCachedGenIterator( cfcore::CFGenKbGenItemPKey* pkey ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* readCachedGenIteratorByItemIdIdx(const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByTenantIdx( const int64_t TenantId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByRuleTypeIdx( const int16_t RuleTypeId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByToolSetIdx( const int16_t ToolSetId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByScopeIdx( const int16_t* ScopeDefId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByGenDefIdx( const int16_t GenDefId ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* readCachedGenIteratorByAltIdx(const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGenIteratorObj*> readCachedGenIteratorByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual cfcore::ICFGenKbGenIteratorObj* updateGenIterator( cfcore::ICFGenKbGenIteratorEditObj* Obj ) = 0;

		virtual void deleteGenIterator( cfcore::ICFGenKbGenIteratorEditObj* Obj ) = 0;

		virtual void deleteGenIteratorByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) = 0;

		virtual void deleteGenIteratorByTenantIdx( const int64_t TenantId ) = 0;

		virtual void deleteGenIteratorByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId ) = 0;

		virtual void deleteGenIteratorByRuleTypeIdx( const int16_t RuleTypeId ) = 0;

		virtual void deleteGenIteratorByToolSetIdx( const int16_t ToolSetId ) = 0;

		virtual void deleteGenIteratorByScopeIdx( const int16_t* ScopeDefId ) = 0;

		virtual void deleteGenIteratorByGenDefIdx( const int16_t GenDefId ) = 0;

		virtual void deleteGenIteratorByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) = 0;

		virtual void deleteGenIteratorByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) = 0;

		virtual void deleteGenIteratorByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) = 0;

		virtual void reallyDetachFromIndexesGenIterator( cfcore::ICFGenKbGenIteratorObj* Obj ) = 0;

	};
}
