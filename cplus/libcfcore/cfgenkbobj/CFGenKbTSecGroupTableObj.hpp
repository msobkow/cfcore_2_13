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

#include <cfgenkbobj/ICFGenKbTSecGroupObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGroupEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGroupTableObj.hpp>

namespace cfcore {

	class CFGenKbTSecGroupTableObj
	: public virtual ICFGenKbTSecGroupTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* members;
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* allTSecGroup;
		std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
			std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>* indexByTenantVisIdx;
		std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
			cfcore::ICFGenKbTSecGroupObj*>* indexByUNameIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbTSecGroupTableObj();
		CFGenKbTSecGroupTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbTSecGroupTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbTSecGroupObj* newInstance();

		virtual cfcore::ICFGenKbTSecGroupEditObj* newEditInstance( cfcore::ICFGenKbTSecGroupObj* orig );

		virtual cfcore::ICFGenKbTSecGroupObj* realizeTSecGroup( cfcore::ICFGenKbTSecGroupObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible );
		virtual void deepDisposeByUNameIdx( const int64_t TenantId,
			const std::string& Name );
		virtual void reallyDeepDisposeTSecGroup( cfcore::ICFGenKbTSecGroupObj* Obj );
		virtual cfcore::ICFGenKbTSecGroupObj* createTSecGroup( cfcore::ICFGenKbTSecGroupEditObj* Obj );

		virtual cfcore::ICFGenKbTSecGroupObj* readTSecGroup( cfcore::CFGenKbTSecGroupPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGroupObj* lockTSecGroup( cfcore::CFGenKbTSecGroupPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbTSecGroupObj*> readAllTSecGroup( bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGroupObj* readTSecGroupByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGroupObj*> readTSecGroupByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGroupObj*> readTSecGroupByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible,
			bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGroupObj* readTSecGroupByUNameIdx( const int64_t TenantId,
			const std::string& Name, bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGroupObj* readCachedTSecGroup( cfcore::CFGenKbTSecGroupPKey* pkey );

		virtual cfcore::ICFGenKbTSecGroupObj* readCachedTSecGroupByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual std::vector<cfcore::ICFGenKbTSecGroupObj*> readCachedTSecGroupByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbTSecGroupObj*> readCachedTSecGroupByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible );

		virtual cfcore::ICFGenKbTSecGroupObj* readCachedTSecGroupByUNameIdx( const int64_t TenantId,
			const std::string& Name );

		virtual cfcore::ICFGenKbTSecGroupObj* readTSecGroupByLookupUNameIdx( const int64_t TenantId,
			const std::string& Name, bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGroupObj* readCachedTSecGroupByLookupUNameIdx( const int64_t TenantId,
			const std::string& Name );

		virtual cfcore::ICFGenKbTSecGroupObj* updateTSecGroup( cfcore::ICFGenKbTSecGroupEditObj* Obj );

		virtual void deleteTSecGroup( cfcore::ICFGenKbTSecGroupEditObj* Obj );

		virtual void deleteTSecGroupByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual void deleteTSecGroupByTenantIdx( const int64_t TenantId );

		virtual void deleteTSecGroupByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible );

		virtual void deleteTSecGroupByUNameIdx( const int64_t TenantId,
			const std::string& Name );

		virtual void reallyDetachFromIndexesTSecGroup( cfcore::ICFGenKbTSecGroupObj* Obj );

	};

}
