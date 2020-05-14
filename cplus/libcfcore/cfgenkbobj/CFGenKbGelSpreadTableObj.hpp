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

#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSpreadTableObj.hpp>

namespace cfcore {

	class CFGenKbGelSpreadTableObj
	: public virtual ICFGenKbGelSpreadTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* members;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* allGelSpread;
		std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByGelCacheIdx;
		std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByChainIdx;
		std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByBetweenIdx;
		std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByBeforeIdx;
		std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByFirstIdx;
		std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByEachIdx;
		std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByLastIdx;
		std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByLoneIdx;
		std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>* indexByEmptyIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGelSpreadTableObj();
		CFGenKbGelSpreadTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGelSpreadTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGelSpreadObj* newInstance();

		virtual cfcore::ICFGenKbGelSpreadEditObj* newEditInstance( cfcore::ICFGenKbGelSpreadObj* orig );

		virtual cfcore::ICFGenKbGelSpreadObj* realizeGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj );

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );
		virtual void deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );
		virtual void reallyDeepDisposeGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj );
		virtual void deepDisposeByBetweenIdx( const std::string* ExpandBetween );
		virtual void deepDisposeByBeforeIdx( const std::string* ExpandBefore );
		virtual void deepDisposeByFirstIdx( const std::string* ExpandFirst );
		virtual void deepDisposeByEachIdx( const std::string& ExpandEach );
		virtual void deepDisposeByLastIdx( const std::string* ExpandLast );
		virtual void deepDisposeByLoneIdx( const std::string* ExpandLone );
		virtual void deepDisposeByEmptyIdx( const std::string* ExpandEmpty );
		virtual cfcore::ICFGenKbGelSpreadObj* createGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj );

		virtual cfcore::ICFGenKbGelSpreadObj* readGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGelSpreadObj* lockGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readAllGelSpread( bool forceRead = false );

		virtual cfcore::ICFGenKbGelSpreadObj* readGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByBetweenIdx( const std::string* ExpandBetween,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByBeforeIdx( const std::string* ExpandBefore,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByFirstIdx( const std::string* ExpandFirst,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByEachIdx( const std::string& ExpandEach,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByLastIdx( const std::string* ExpandLast,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByLoneIdx( const std::string* ExpandLone,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readGelSpreadByEmptyIdx( const std::string* ExpandEmpty,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGelSpreadObj* readCachedGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey );

		virtual cfcore::ICFGenKbGelSpreadObj* readCachedGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByBetweenIdx( const std::string* ExpandBetween );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByBeforeIdx( const std::string* ExpandBefore );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByFirstIdx( const std::string* ExpandFirst );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByEachIdx( const std::string& ExpandEach );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByLastIdx( const std::string* ExpandLast );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByLoneIdx( const std::string* ExpandLone );

		virtual std::vector<cfcore::ICFGenKbGelSpreadObj*> readCachedGelSpreadByEmptyIdx( const std::string* ExpandEmpty );

		virtual cfcore::ICFGenKbGelSpreadObj* updateGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj );

		virtual void deleteGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj );

		virtual void deleteGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual void deleteGelSpreadByTenantIdx( const int64_t TenantId );

		virtual void deleteGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual void deleteGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual void deleteGelSpreadByBetweenIdx( const std::string* ExpandBetween );

		virtual void deleteGelSpreadByBeforeIdx( const std::string* ExpandBefore );

		virtual void deleteGelSpreadByFirstIdx( const std::string* ExpandFirst );

		virtual void deleteGelSpreadByEachIdx( const std::string& ExpandEach );

		virtual void deleteGelSpreadByLastIdx( const std::string* ExpandLast );

		virtual void deleteGelSpreadByLoneIdx( const std::string* ExpandLone );

		virtual void deleteGelSpreadByEmptyIdx( const std::string* ExpandEmpty );

		virtual void reallyDetachFromIndexesGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj );

	};

}
