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

#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceEditObj.hpp>

namespace cfcore {

	class ICFGenKbGelSequenceTableObj
	{
	public:
		ICFGenKbGelSequenceTableObj();
		virtual ~ICFGenKbGelSequenceTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value ) = 0;

		virtual void minimizeMemory() = 0;

		virtual const std::string getTableName() = 0;
		virtual const std::string getTableDbName() = 0;
		virtual const classcode_t* getObjQualifyingClassCode() = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* newInstance() = 0;

		virtual cfcore::ICFGenKbGelSequenceEditObj* newEditInstance( cfcore::ICFGenKbGelSequenceObj* orig ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* realizeGelSequence( cfcore::ICFGenKbGelSequenceObj* Obj ) = 0;

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;
		virtual void deepDisposeByTenantIdx( const int64_t TenantId ) = 0;
		virtual void deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;
		virtual void deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;
		virtual void reallyDeepDisposeGelSequence( cfcore::ICFGenKbGelSequenceObj* Obj ) = 0;
		virtual void deepDisposeByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) = 0;
		virtual void deepDisposeByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) = 0;
		virtual cfcore::ICFGenKbGelSequenceObj* createGelSequence( cfcore::ICFGenKbGelSequenceEditObj* Obj ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* readGelSequence( cfcore::CFGenKbGelInstructionPKey* pkey,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* lockGelSequence( cfcore::CFGenKbGelInstructionPKey* pkey ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readAllGelSequence( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* readGelSequenceByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readGelSequenceByTenantIdx( const int64_t TenantId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readGelSequenceByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readGelSequenceByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readGelSequenceByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readGelSequenceByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* readCachedGelSequence( cfcore::CFGenKbGelInstructionPKey* pkey ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* readCachedGelSequenceByPIdx(const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readCachedGelSequenceByTenantIdx( const int64_t TenantId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readCachedGelSequenceByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readCachedGelSequenceByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readCachedGelSequenceByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSequenceObj*> readCachedGelSequenceByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) = 0;

		virtual cfcore::ICFGenKbGelSequenceObj* updateGelSequence( cfcore::ICFGenKbGelSequenceEditObj* Obj ) = 0;

		virtual void deleteGelSequence( cfcore::ICFGenKbGelSequenceEditObj* Obj ) = 0;

		virtual void deleteGelSequenceByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual void deleteGelSequenceByTenantIdx( const int64_t TenantId ) = 0;

		virtual void deleteGelSequenceByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual void deleteGelSequenceByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual void deleteGelSequenceByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) = 0;

		virtual void deleteGelSequenceByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) = 0;

		virtual void reallyDetachFromIndexesGelSequence( cfcore::ICFGenKbGelSequenceObj* Obj ) = 0;

	};
}
