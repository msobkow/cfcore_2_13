#pragma once

// Description: C++18 Table Object specification for CFGenKb.

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
#include <cfgenkbobj/ICFGenKbGelCallObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCallEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCallTableObj.hpp>

namespace cfcore {

	class CFGenKbGelCallTableObj
	: public virtual ICFGenKbGelCallTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* members;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* allGelCall;
		std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByGelCacheIdx;
		std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByChainIdx;
		std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByCacheIdx;
		std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexBySeqIdx;
		std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByCallInstIdx;
		std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByPrevInstIdx;
		std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>* indexByNextInstIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGelCallTableObj();
		CFGenKbGelCallTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGelCallTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGelCallObj* newInstance();

		virtual cfcore::ICFGenKbGelCallEditObj* newEditInstance( cfcore::ICFGenKbGelCallObj* orig );

		virtual cfcore::ICFGenKbGelCallObj* realizeGelCall( cfcore::ICFGenKbGelCallObj* Obj );

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );
		virtual void deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );
		virtual void reallyDeepDisposeGelCall( cfcore::ICFGenKbGelCallObj* Obj );
		virtual void deepDisposeByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );
		virtual void deepDisposeBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId );
		virtual void deepDisposeByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId );
		virtual void deepDisposeByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId );
		virtual void deepDisposeByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId );
		virtual cfcore::ICFGenKbGelCallObj* createGelCall( cfcore::ICFGenKbGelCallEditObj* Obj );

		virtual cfcore::ICFGenKbGelCallObj* readGelCall( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGelCallObj* lockGelCall( cfcore::CFGenKbGelInstructionPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readAllGelCall( bool forceRead = false );

		virtual cfcore::ICFGenKbGelCallObj* readGelCallByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readGelCallByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGelCallObj* readCachedGelCall( cfcore::CFGenKbGelInstructionPKey* pkey );

		virtual cfcore::ICFGenKbGelCallObj* readCachedGelCallByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId );

		virtual std::vector<cfcore::ICFGenKbGelCallObj*> readCachedGelCallByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId );

		virtual cfcore::ICFGenKbGelCallObj* updateGelCall( cfcore::ICFGenKbGelCallEditObj* Obj );

		virtual void deleteGelCall( cfcore::ICFGenKbGelCallEditObj* Obj );

		virtual void deleteGelCallByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual void deleteGelCallByTenantIdx( const int64_t TenantId );

		virtual void deleteGelCallByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual void deleteGelCallByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId );

		virtual void deleteGelCallByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual void deleteGelCallBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId );

		virtual void deleteGelCallByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId );

		virtual void deleteGelCallByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId );

		virtual void deleteGelCallByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId );

		virtual void reallyDetachFromIndexesGelCall( cfcore::ICFGenKbGelCallObj* Obj );

	};

}
