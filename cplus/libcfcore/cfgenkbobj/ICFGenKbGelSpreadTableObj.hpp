#pragma once

// Description: C++18 Table Object interface for CFGenKb.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
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
#include <cfgenkbobj/ICFGenKbGelSpreadObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadEditObj.hpp>

namespace cfcore {

	class ICFGenKbGelSpreadTableObj
	{
	public:
		ICFGenKbGelSpreadTableObj();
		virtual ~ICFGenKbGelSpreadTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value ) = 0;

		virtual void minimizeMemory() = 0;

		virtual const std::string getTableName() = 0;
		virtual const std::string getTableDbName() = 0;
		virtual const classcode_t* getObjQualifyingClassCode() = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* newInstance() = 0;

		virtual cfcore::ICFGenKbGelSpreadEditObj* newEditInstance( cfcore::ICFGenKbGelSpreadObj* orig ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* realizeGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj ) = 0;

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;
		virtual void deepDisposeByTenantIdx( const int64_t TenantId ) = 0;
		virtual void deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;
		virtual void deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;
		virtual void reallyDeepDisposeGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj ) = 0;
		virtual void deepDisposeByBetweenIdx( const std::string* ExpandBetween ) = 0;
		virtual void deepDisposeByBeforeIdx( const std::string* ExpandBefore ) = 0;
		virtual void deepDisposeByFirstIdx( const std::string* ExpandFirst ) = 0;
		virtual void deepDisposeByEachIdx( const std::string& ExpandEach ) = 0;
		virtual void deepDisposeByLastIdx( const std::string* ExpandLast ) = 0;
		virtual void deepDisposeByLoneIdx( const std::string* ExpandLone ) = 0;
		virtual void deepDisposeByEmptyIdx( const std::string* ExpandEmpty ) = 0;
		virtual cfcore::ICFGenKbGelSpreadObj* createGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* readGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* lockGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readAllGelSpread( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* readGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByTenantIdx( const int64_t TenantId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByBetweenIdx( const std::string* ExpandBetween,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByBeforeIdx( const std::string* ExpandBefore,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByFirstIdx( const std::string* ExpandFirst,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByEachIdx( const std::string& ExpandEach,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByLastIdx( const std::string* ExpandLast,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByLoneIdx( const std::string* ExpandLone,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByEmptyIdx( const std::string* ExpandEmpty,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* readCachedGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* readCachedGelSpreadByPIdx(const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByTenantIdx( const int64_t TenantId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByBetweenIdx( const std::string* ExpandBetween ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByBeforeIdx( const std::string* ExpandBefore ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByFirstIdx( const std::string* ExpandFirst ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByEachIdx( const std::string& ExpandEach ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByLastIdx( const std::string* ExpandLast ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByLoneIdx( const std::string* ExpandLone ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByEmptyIdx( const std::string* ExpandEmpty ) = 0;

		virtual cfcore::ICFGenKbGelSpreadObj* updateGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj ) = 0;

		virtual void deleteGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj ) = 0;

		virtual void deleteGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual void deleteGelSpreadByTenantIdx( const int64_t TenantId ) = 0;

		virtual void deleteGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual void deleteGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual void deleteGelSpreadByBetweenIdx( const std::string* ExpandBetween ) = 0;

		virtual void deleteGelSpreadByBeforeIdx( const std::string* ExpandBefore ) = 0;

		virtual void deleteGelSpreadByFirstIdx( const std::string* ExpandFirst ) = 0;

		virtual void deleteGelSpreadByEachIdx( const std::string& ExpandEach ) = 0;

		virtual void deleteGelSpreadByLastIdx( const std::string* ExpandLast ) = 0;

		virtual void deleteGelSpreadByLoneIdx( const std::string* ExpandLone ) = 0;

		virtual void deleteGelSpreadByEmptyIdx( const std::string* ExpandEmpty ) = 0;

		virtual void reallyDetachFromIndexesGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj ) = 0;

	};
}
