#pragma once

// Description: C++18 Table Object specification for CFGenKb.

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
#include <cfgenkbobj/ICFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExecutableObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExecutableEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelExecutableTableObj.hpp>

namespace cfcore {

	class CFGenKbGelExecutableTableObj
	: public virtual ICFGenKbGelExecutableTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* members;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* allGelExecutable;
		std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>* indexByGelCacheIdx;
		std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>* indexByChainIdx;
		std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>* indexByFirstInstIdx;
		std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>* indexByLastInstIdx;
		std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>* indexByGenItemIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGelExecutableTableObj();
		CFGenKbGelExecutableTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGelExecutableTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGelExecutableObj* newInstance();

		virtual cfcore::ICFGenKbGelExecutableEditObj* newEditInstance( cfcore::ICFGenKbGelExecutableObj* orig );

		virtual cfcore::ICFGenKbGelExecutableObj* realizeGelExecutable( cfcore::ICFGenKbGelExecutableObj* Obj );

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );
		virtual void deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );
		virtual void reallyDeepDisposeGelExecutable( cfcore::ICFGenKbGelExecutableObj* Obj );
		virtual void deepDisposeByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId );
		virtual void deepDisposeByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId );
		virtual void deepDisposeByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId );
		virtual cfcore::ICFGenKbGelExecutableObj* createGelExecutable( cfcore::ICFGenKbGelExecutableEditObj* Obj );

		virtual cfcore::ICFGenKbGelExecutableObj* readGelExecutable( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* lockGelExecutable( cfcore::CFGenKbGelInstructionPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readAllGelExecutable( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* readGelExecutableByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readGelExecutableByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readGelExecutableByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readGelExecutableByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readGelExecutableByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readGelExecutableByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readGelExecutableByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* readCachedGelExecutable( cfcore::CFGenKbGelInstructionPKey* pkey );

		virtual cfcore::ICFGenKbGelExecutableObj* readCachedGelExecutableByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readCachedGelExecutableByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readCachedGelExecutableByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readCachedGelExecutableByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readCachedGelExecutableByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readCachedGelExecutableByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId );

		virtual std::vector<cfcore::ICFGenKbGelExecutableObj*> readCachedGelExecutableByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual cfcore::ICFGenKbGelExecutableObj* updateGelExecutable( cfcore::ICFGenKbGelExecutableEditObj* Obj );

		virtual void deleteGelExecutable( cfcore::ICFGenKbGelExecutableEditObj* Obj );

		virtual void deleteGelExecutableByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual void deleteGelExecutableByTenantIdx( const int64_t TenantId );

		virtual void deleteGelExecutableByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual void deleteGelExecutableByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual void deleteGelExecutableByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId );

		virtual void deleteGelExecutableByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId );

		virtual void deleteGelExecutableByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual void reallyDetachFromIndexesGelExecutable( cfcore::ICFGenKbGelExecutableObj* Obj );

	};

}
