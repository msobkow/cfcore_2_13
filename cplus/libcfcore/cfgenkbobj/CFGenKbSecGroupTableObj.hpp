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

#include <cfgenkbobj/ICFGenKbSecGroupObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecGroupTableObj.hpp>

namespace cfcore {

	class CFGenKbSecGroupTableObj
	: public virtual ICFGenKbSecGroupTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* members;
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* allSecGroup;
		std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
			std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>* indexByClusterIdx;
		std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
			std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>* indexByClusterVisIdx;
		std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
			cfcore::ICFGenKbSecGroupObj*>* indexByUNameIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbSecGroupTableObj();
		CFGenKbSecGroupTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbSecGroupTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbSecGroupObj* newInstance();

		virtual cfcore::ICFGenKbSecGroupEditObj* newEditInstance( cfcore::ICFGenKbSecGroupObj* orig );

		virtual cfcore::ICFGenKbSecGroupObj* realizeSecGroup( cfcore::ICFGenKbSecGroupObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId );
		virtual void deepDisposeByClusterIdx( const int64_t ClusterId );
		virtual void deepDisposeByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible );
		virtual void deepDisposeByUNameIdx( const int64_t ClusterId,
			const std::string& Name );
		virtual void reallyDeepDisposeSecGroup( cfcore::ICFGenKbSecGroupObj* Obj );
		virtual cfcore::ICFGenKbSecGroupObj* createSecGroup( cfcore::ICFGenKbSecGroupEditObj* Obj );

		virtual cfcore::ICFGenKbSecGroupObj* readSecGroup( cfcore::CFGenKbSecGroupPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupObj* lockSecGroup( cfcore::CFGenKbSecGroupPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbSecGroupObj*> readAllSecGroup( bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupObj* readSecGroupByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupObj*> readSecGroupByClusterIdx( const int64_t ClusterId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecGroupObj*> readSecGroupByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible,
			bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupObj* readSecGroupByUNameIdx( const int64_t ClusterId,
			const std::string& Name, bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupObj* readCachedSecGroup( cfcore::CFGenKbSecGroupPKey* pkey );

		virtual cfcore::ICFGenKbSecGroupObj* readCachedSecGroupByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual std::vector<cfcore::ICFGenKbSecGroupObj*> readCachedSecGroupByClusterIdx( const int64_t ClusterId );

		virtual std::vector<cfcore::ICFGenKbSecGroupObj*> readCachedSecGroupByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible );

		virtual cfcore::ICFGenKbSecGroupObj* readCachedSecGroupByUNameIdx( const int64_t ClusterId,
			const std::string& Name );

		virtual cfcore::ICFGenKbSecGroupObj* readSecGroupByLookupUNameIdx( const int64_t ClusterId,
			const std::string& Name, bool forceRead = false );

		virtual cfcore::ICFGenKbSecGroupObj* readCachedSecGroupByLookupUNameIdx( const int64_t ClusterId,
			const std::string& Name );

		virtual cfcore::ICFGenKbSecGroupObj* updateSecGroup( cfcore::ICFGenKbSecGroupEditObj* Obj );

		virtual void deleteSecGroup( cfcore::ICFGenKbSecGroupEditObj* Obj );

		virtual void deleteSecGroupByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId );

		virtual void deleteSecGroupByClusterIdx( const int64_t ClusterId );

		virtual void deleteSecGroupByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible );

		virtual void deleteSecGroupByUNameIdx( const int64_t ClusterId,
			const std::string& Name );

		virtual void reallyDetachFromIndexesSecGroup( cfcore::ICFGenKbSecGroupObj* Obj );

	};

}
