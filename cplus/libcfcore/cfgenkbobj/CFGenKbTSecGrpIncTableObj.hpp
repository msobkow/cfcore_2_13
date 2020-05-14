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

#include <cfgenkbobj/ICFGenKbTSecGrpIncObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpIncEditObj.hpp>
#include <cfgenkbobj/ICFGenKbTSecGrpIncTableObj.hpp>

namespace cfcore {

	class CFGenKbTSecGrpIncTableObj
	: public virtual ICFGenKbTSecGrpIncTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* members;
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* allTSecGrpInc;
		std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
			std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
			std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>* indexByGroupIdx;
		std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
			std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>* indexByIncludeIdx;
		std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey,
			cfcore::ICFGenKbTSecGrpIncObj*>* indexByUIncludeIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbTSecGrpIncTableObj();
		CFGenKbTSecGrpIncTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbTSecGrpIncTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbTSecGrpIncObj* newInstance();

		virtual cfcore::ICFGenKbTSecGrpIncEditObj* newEditInstance( cfcore::ICFGenKbTSecGrpIncObj* orig );

		virtual cfcore::ICFGenKbTSecGrpIncObj* realizeTSecGrpInc( cfcore::ICFGenKbTSecGrpIncObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId );
		virtual void deepDisposeByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId );
		virtual void deepDisposeByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId );
		virtual void reallyDeepDisposeTSecGrpInc( cfcore::ICFGenKbTSecGrpIncObj* Obj );
		virtual cfcore::ICFGenKbTSecGrpIncObj* createTSecGrpInc( cfcore::ICFGenKbTSecGrpIncEditObj* Obj );

		virtual cfcore::ICFGenKbTSecGrpIncObj* readTSecGrpInc( cfcore::CFGenKbTSecGrpIncPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGrpIncObj* lockTSecGrpInc( cfcore::CFGenKbTSecGrpIncPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readAllTSecGrpInc( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> pageAllTSecGrpInc(const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId );

		virtual cfcore::ICFGenKbTSecGrpIncObj* readTSecGrpIncByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readTSecGrpIncByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGrpIncObj* readTSecGrpIncByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId, bool forceRead = false );

		virtual cfcore::ICFGenKbTSecGrpIncObj* readCachedTSecGrpInc( cfcore::CFGenKbTSecGrpIncPKey* pkey );

		virtual cfcore::ICFGenKbTSecGrpIncObj* readCachedTSecGrpIncByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readCachedTSecGrpIncByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readCachedTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> readCachedTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId );

		virtual cfcore::ICFGenKbTSecGrpIncObj* readCachedTSecGrpIncByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> pageTSecGrpIncByTenantIdx( const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> pageTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId );

		virtual std::vector<cfcore::ICFGenKbTSecGrpIncObj*> pageTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId );

		virtual cfcore::ICFGenKbTSecGrpIncObj* updateTSecGrpInc( cfcore::ICFGenKbTSecGrpIncEditObj* Obj );

		virtual void deleteTSecGrpInc( cfcore::ICFGenKbTSecGrpIncEditObj* Obj );

		virtual void deleteTSecGrpIncByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId );

		virtual void deleteTSecGrpIncByTenantIdx( const int64_t TenantId );

		virtual void deleteTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId );

		virtual void deleteTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId );

		virtual void deleteTSecGrpIncByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId );

		virtual void reallyDetachFromIndexesTSecGrpInc( cfcore::ICFGenKbTSecGrpIncObj* Obj );

	};

}
