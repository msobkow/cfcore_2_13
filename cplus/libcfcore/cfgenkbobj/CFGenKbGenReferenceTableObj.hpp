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

#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/ICFGenKbGenReferenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGenReferenceEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenReferenceTableObj.hpp>

namespace cfcore {

	class CFGenKbGenReferenceTableObj
	: public virtual ICFGenKbGenReferenceTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>* members;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>* allGenReference;
		std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByCartIdx;
		std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByRuleTypeIdx;
		std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByToolSetIdx;
		std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByScopeIdx;
		std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByGenDefIdx;
		std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenReferenceObj*>* indexByAltIdx;
		std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByGelExecIdx;
		std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenReferenceObj*>*>* indexByProbeIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGenReferenceTableObj();
		CFGenKbGenReferenceTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGenReferenceTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGenReferenceObj* newInstance();

		virtual cfcore::ICFGenKbGenReferenceEditObj* newEditInstance( cfcore::ICFGenKbGenReferenceObj* orig );

		virtual cfcore::ICFGenKbGenReferenceObj* realizeGenReference( cfcore::ICFGenKbGenReferenceObj* Obj );

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
		virtual void reallyDeepDisposeGenReference( cfcore::ICFGenKbGenReferenceObj* Obj );
		virtual cfcore::ICFGenKbGenReferenceObj* createGenReference( cfcore::ICFGenKbGenReferenceEditObj* Obj );

		virtual cfcore::ICFGenKbGenReferenceObj* readGenReference( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGenReferenceObj* lockGenReference( cfcore::CFGenKbGenItemPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readAllGenReference( bool forceRead = false );

		virtual cfcore::ICFGenKbGenReferenceObj* readGenReferenceByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByRuleTypeIdx( const int16_t RuleTypeId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByToolSetIdx( const int16_t ToolSetId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByScopeIdx( const int16_t* ScopeDefId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByGenDefIdx( const int16_t GenDefId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenReferenceObj* readGenReferenceByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readGenReferenceByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGenReferenceObj* readCachedGenReference( cfcore::CFGenKbGenItemPKey* pkey );

		virtual cfcore::ICFGenKbGenReferenceObj* readCachedGenReferenceByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByRuleTypeIdx( const int16_t RuleTypeId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByToolSetIdx( const int16_t ToolSetId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByScopeIdx( const int16_t* ScopeDefId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByGenDefIdx( const int16_t GenDefId );

		virtual cfcore::ICFGenKbGenReferenceObj* readCachedGenReferenceByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual std::vector<cfcore::ICFGenKbGenReferenceObj*> readCachedGenReferenceByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual cfcore::ICFGenKbGenReferenceObj* updateGenReference( cfcore::ICFGenKbGenReferenceEditObj* Obj );

		virtual void deleteGenReference( cfcore::ICFGenKbGenReferenceEditObj* Obj );

		virtual void deleteGenReferenceByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId );

		virtual void deleteGenReferenceByTenantIdx( const int64_t TenantId );

		virtual void deleteGenReferenceByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId );

		virtual void deleteGenReferenceByRuleTypeIdx( const int16_t RuleTypeId );

		virtual void deleteGenReferenceByToolSetIdx( const int16_t ToolSetId );

		virtual void deleteGenReferenceByScopeIdx( const int16_t* ScopeDefId );

		virtual void deleteGenReferenceByGenDefIdx( const int16_t GenDefId );

		virtual void deleteGenReferenceByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId );

		virtual void deleteGenReferenceByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId );

		virtual void deleteGenReferenceByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId );

		virtual void reallyDetachFromIndexesGenReference( cfcore::ICFGenKbGenReferenceObj* Obj );

	};

}
