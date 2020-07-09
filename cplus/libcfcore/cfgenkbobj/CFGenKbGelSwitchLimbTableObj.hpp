#pragma once

// Description: C++18 Table Object specification for CFGenKb.

/*
 *	org.msscf.msscf.CFCore
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

#include <cfgenkbobj/ICFGenKbGelSwitchLimbObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchLimbEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSwitchLimbTableObj.hpp>

namespace cfcore {

	class CFGenKbGelSwitchLimbTableObj
	: public virtual ICFGenKbGelSwitchLimbTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* members;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* allGelSwitchLimb;
		std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
			std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
			std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>* indexBySwitchIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGelSwitchLimbTableObj();
		CFGenKbGelSwitchLimbTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGelSwitchLimbTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGelSwitchLimbObj* newInstance();

		virtual cfcore::ICFGenKbGelSwitchLimbEditObj* newEditInstance( cfcore::ICFGenKbGelSwitchLimbObj* orig );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* realizeGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbObj* Obj );

		virtual void deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );
		virtual void reallyDeepDisposeGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbObj* Obj );
		virtual cfcore::ICFGenKbGelSwitchLimbObj* createGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbEditObj* Obj );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* readGelSwitchLimb( cfcore::CFGenKbGelSwitchLimbPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* lockGelSwitchLimb( cfcore::CFGenKbGelSwitchLimbPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> readAllGelSwitchLimb( bool forceRead = false );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* readGelSwitchLimbByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> readGelSwitchLimbByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> readGelSwitchLimbBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* readCachedGelSwitchLimb( cfcore::CFGenKbGelSwitchLimbPKey* pkey );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* readCachedGelSwitchLimbByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName );

		virtual std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> readCachedGelSwitchLimbByTenantIdx( const int64_t TenantId );

		virtual std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> readCachedGelSwitchLimbBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual cfcore::ICFGenKbGelSwitchLimbObj* updateGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbEditObj* Obj );

		virtual void deleteGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbEditObj* Obj );

		virtual void deleteGelSwitchLimbByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName );

		virtual void deleteGelSwitchLimbByTenantIdx( const int64_t TenantId );

		virtual void deleteGelSwitchLimbBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId );

		virtual void reallyDetachFromIndexesGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbObj* Obj );

	};

}
