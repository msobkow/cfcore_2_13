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

#include <cfgenkbobj/ICFGenKbTenantObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTenantTableObj.hpp>

namespace cfcore {

	class CFGenKbTenantTableObj
	: public virtual ICFGenKbTenantTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* members;
		std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* allTenant;
		std::map< cfcore::CFGenKbTenantByClusterIdxKey,
			std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>*>* indexByClusterIdx;
		std::map< cfcore::CFGenKbTenantByUNameIdxKey,
			cfcore::ICFGenKbTenantObj*>* indexByUNameIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbTenantTableObj();
		CFGenKbTenantTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbTenantTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbTenantObj* newInstance();

		virtual cfcore::ICFGenKbTenantEditObj* newEditInstance( cfcore::ICFGenKbTenantObj* orig );

		virtual cfcore::ICFGenKbTenantObj* realizeTenant( cfcore::ICFGenKbTenantObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t Id );
		virtual void deepDisposeByClusterIdx( const int64_t ClusterId );
		virtual void deepDisposeByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName );
		virtual void reallyDeepDisposeTenant( cfcore::ICFGenKbTenantObj* Obj );
		virtual cfcore::ICFGenKbTenantObj* createTenant( cfcore::ICFGenKbTenantEditObj* Obj );

		virtual cfcore::ICFGenKbTenantObj* readTenant( cfcore::CFGenKbTenantPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbTenantObj* lockTenant( cfcore::CFGenKbTenantPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbTenantObj*> readAllTenant( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTenantObj*> pageAllTenant(const int64_t* priorId );

		virtual cfcore::ICFGenKbTenantObj* readTenantByIdIdx( const int64_t Id, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTenantObj*> readTenantByClusterIdx( const int64_t ClusterId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbTenantObj* readTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName, bool forceRead = false );

		virtual cfcore::ICFGenKbTenantObj* readCachedTenant( cfcore::CFGenKbTenantPKey* pkey );

		virtual cfcore::ICFGenKbTenantObj* readCachedTenantByIdIdx( const int64_t Id );

		virtual std::vector<cfcore::ICFGenKbTenantObj*> readCachedTenantByClusterIdx( const int64_t ClusterId );

		virtual cfcore::ICFGenKbTenantObj* readCachedTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName );

		virtual cfcore::ICFGenKbTenantObj* readTenantByLookupUNameIdx( const int64_t ClusterId,
			const std::string& TenantName, bool forceRead = false );

		virtual cfcore::ICFGenKbTenantObj* readCachedTenantByLookupUNameIdx( const int64_t ClusterId,
			const std::string& TenantName );

		virtual std::vector<cfcore::ICFGenKbTenantObj*> pageTenantByClusterIdx( const int64_t ClusterId,
			const int64_t* priorId );

		virtual cfcore::ICFGenKbTenantObj* updateTenant( cfcore::ICFGenKbTenantEditObj* Obj );

		virtual void deleteTenant( cfcore::ICFGenKbTenantEditObj* Obj );

		virtual void deleteTenantByIdIdx( const int64_t Id );

		virtual void deleteTenantByClusterIdx( const int64_t ClusterId );

		virtual void deleteTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName );

		virtual void reallyDetachFromIndexesTenant( cfcore::ICFGenKbTenantObj* Obj );

	virtual ICFGenKbTenantObj* getSystemTenant();

	};

}
