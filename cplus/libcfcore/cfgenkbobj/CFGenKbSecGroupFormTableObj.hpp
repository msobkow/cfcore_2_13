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

#include <cfgenkbobj/ICFGenKbSecGroupFormObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupFormEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupFormTableObj.hpp>

namespace cfcore {

	class CFGenKbSecGroupFormTableObj
	: public virtual ICFGenKbSecGroupFormTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* members;
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* allSecGroupForm;
		std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>* indexByClusterIdx;
		std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>* indexByGroupIdx;
		std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>* indexByAppIdx;
		std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
			std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>* indexByFormIdx;
		std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey,
			cfcore::ICFGenKbSecGroupFormObj*>* indexByUFormIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbSecGroupFormTableObj();
		CFGenKbSecGroupFormTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbSecGroupFormTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbSecGroupFormObj* newInstance();

		virtual cfcore::ICFGenKbSecGroupFormEditObj* newEditInstance( cfcore::ICFGenKbSecGroupFormObj* orig );

		virtual cfcore::ICFGenKbSecGroupFormObj* realizeSecGroupForm( cfcore::ICFGenKbSecGroupFormObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId );
		virtual void deepDisposeByClusterIdx( const int64_t ClusterId );
		virtual void deepDisposeByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId );
		virtual void deepDisposeByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId );
		virtual void deepDisposeByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId );
		virtual void deepDisposeByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId );
		virtual void reallyDeepDisposeSecGroupForm( cfcore::ICFGenKbSecGroupFormObj* Obj );
		virtual cfcore::ICFGenKbSecGroupFormObj* createSecGroupForm( cfcore::ICFGenKbSecGroupFormEditObj* Obj );

		virtual cfcore::ICFGenKbSecGroupFormObj* readSecGroupForm( cfcore::CFGenKbSecGroupFormPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupFormObj* lockSecGroupForm( cfcore::CFGenKbSecGroupFormPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readAllSecGroupForm( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> pageAllSecGroupForm(const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual cfcore::ICFGenKbSecGroupFormObj* readSecGroupFormByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readSecGroupFormByClusterIdx( const int64_t ClusterId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupFormObj* readSecGroupFormByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId, bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupFormObj* readCachedSecGroupForm( cfcore::CFGenKbSecGroupFormPKey* pkey );

		virtual cfcore::ICFGenKbSecGroupFormObj* readCachedSecGroupFormByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readCachedSecGroupFormByClusterIdx( const int64_t ClusterId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readCachedSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readCachedSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> readCachedSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId );

		virtual cfcore::ICFGenKbSecGroupFormObj* readCachedSecGroupFormByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> pageSecGroupFormByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> pageSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> pageSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual std::vector<cfcore::ICFGenKbSecGroupFormObj*> pageSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId );

		virtual cfcore::ICFGenKbSecGroupFormObj* updateSecGroupForm( cfcore::ICFGenKbSecGroupFormEditObj* Obj );

		virtual void deleteSecGroupForm( cfcore::ICFGenKbSecGroupFormEditObj* Obj );

		virtual void deleteSecGroupFormByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId );

		virtual void deleteSecGroupFormByClusterIdx( const int64_t ClusterId );

		virtual void deleteSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual void deleteSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId );

		virtual void deleteSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId );

		virtual void deleteSecGroupFormByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId );

		virtual void reallyDetachFromIndexesSecGroupForm( cfcore::ICFGenKbSecGroupFormObj* Obj );

	};

}
