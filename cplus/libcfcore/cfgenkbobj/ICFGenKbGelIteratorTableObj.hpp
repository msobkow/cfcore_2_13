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
#include <cfgenkbobj/ICFGenKbGelIteratorObj.hpp>
#include <cfgenkbobj/ICFGenKbGelIteratorEditObj.hpp>

namespace cfcore {

	class ICFGenKbGelIteratorTableObj
	{
	public:
		ICFGenKbGelIteratorTableObj();
		virtual ~ICFGenKbGelIteratorTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value ) = 0;

		virtual void minimizeMemory() = 0;

		virtual const std::string getTableName() = 0;
		virtual const std::string getTableDbName() = 0;
		virtual const classcode_t* getObjQualifyingClassCode() = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* newInstance() = 0;

		virtual cfcore::ICFGenKbGelIteratorEditObj* newEditInstance( cfcore::ICFGenKbGelIteratorObj* orig ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* realizeGelIterator( cfcore::ICFGenKbGelIteratorObj* Obj ) = 0;

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;
		virtual void deepDisposeByTenantIdx( const int64_t TenantId ) = 0;
		virtual void deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;
		virtual void deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;
		virtual void reallyDeepDisposeGelIterator( cfcore::ICFGenKbGelIteratorObj* Obj ) = 0;
		virtual void deepDisposeByBeforeIdx( const std::string* ExpandBefore ) = 0;
		virtual void deepDisposeByFirstIdx( const std::string* ExpandFirst ) = 0;
		virtual void deepDisposeByEachIdx( const std::string& ExpandEach ) = 0;
		virtual void deepDisposeByLastIdx( const std::string* ExpandLast ) = 0;
		virtual void deepDisposeByLoneIdx( const std::string* ExpandLone ) = 0;
		virtual void deepDisposeByEmptyIdx( const std::string* ExpandEmpty ) = 0;
		virtual cfcore::ICFGenKbGelIteratorObj* createGelIterator( cfcore::ICFGenKbGelIteratorEditObj* Obj ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* readGelIterator( cfcore::CFGenKbGelInstructionPKey* pkey,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* lockGelIterator( cfcore::CFGenKbGelInstructionPKey* pkey ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readAllGelIterator( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* readGelIteratorByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByTenantIdx( const int64_t TenantId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByBeforeIdx( const std::string* ExpandBefore,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByFirstIdx( const std::string* ExpandFirst,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByEachIdx( const std::string& ExpandEach,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByLastIdx( const std::string* ExpandLast,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByLoneIdx( const std::string* ExpandLone,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readGelIteratorByEmptyIdx( const std::string* ExpandEmpty,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* readCachedGelIterator( cfcore::CFGenKbGelInstructionPKey* pkey ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* readCachedGelIteratorByPIdx(const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByTenantIdx( const int64_t TenantId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByBeforeIdx( const std::string* ExpandBefore ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByFirstIdx( const std::string* ExpandFirst ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByEachIdx( const std::string& ExpandEach ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByLastIdx( const std::string* ExpandLast ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByLoneIdx( const std::string* ExpandLone ) = 0;

		virtual std::vector<cfcore::ICFGenKbGelIteratorObj*> readCachedGelIteratorByEmptyIdx( const std::string* ExpandEmpty ) = 0;

		virtual cfcore::ICFGenKbGelIteratorObj* updateGelIterator( cfcore::ICFGenKbGelIteratorEditObj* Obj ) = 0;

		virtual void deleteGelIterator( cfcore::ICFGenKbGelIteratorEditObj* Obj ) = 0;

		virtual void deleteGelIteratorByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) = 0;

		virtual void deleteGelIteratorByTenantIdx( const int64_t TenantId ) = 0;

		virtual void deleteGelIteratorByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) = 0;

		virtual void deleteGelIteratorByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) = 0;

		virtual void deleteGelIteratorByBeforeIdx( const std::string* ExpandBefore ) = 0;

		virtual void deleteGelIteratorByFirstIdx( const std::string* ExpandFirst ) = 0;

		virtual void deleteGelIteratorByEachIdx( const std::string& ExpandEach ) = 0;

		virtual void deleteGelIteratorByLastIdx( const std::string* ExpandLast ) = 0;

		virtual void deleteGelIteratorByLoneIdx( const std::string* ExpandLone ) = 0;

		virtual void deleteGelIteratorByEmptyIdx( const std::string* ExpandEmpty ) = 0;

		virtual void reallyDetachFromIndexesGelIterator( cfcore::ICFGenKbGelIteratorObj* Obj ) = 0;

	};
}
