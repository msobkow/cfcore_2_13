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

#include <cfgenkbobj/ICFGenKbGelCacheObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCacheEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGelCacheTableObj.hpp>

namespace cfcore {

	class CFGenKbGelCacheTableObj
	: public virtual ICFGenKbGelCacheTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* members;
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* allGelCache;
		std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
			std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>*>* indexByTenantIdx;
		std::map< cfcore::CFGenKbGelCacheByAltIdxKey,
			cfcore::ICFGenKbGelCacheObj*>* indexByAltIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbGelCacheTableObj();
		CFGenKbGelCacheTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbGelCacheTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbGelCacheObj* newInstance();

		virtual cfcore::ICFGenKbGelCacheEditObj* newEditInstance( cfcore::ICFGenKbGelCacheObj* orig );

		virtual cfcore::ICFGenKbGelCacheObj* realizeGelCache( cfcore::ICFGenKbGelCacheObj* Obj );

		virtual void deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId );
		virtual void deepDisposeByTenantIdx( const int64_t TenantId );
		virtual void deepDisposeByAltIdx( const int64_t TenantId,
			const std::string& CacheName );
		virtual void reallyDeepDisposeGelCache( cfcore::ICFGenKbGelCacheObj* Obj );
		virtual cfcore::ICFGenKbGelCacheObj* createGelCache( cfcore::ICFGenKbGelCacheEditObj* Obj );

		virtual cfcore::ICFGenKbGelCacheObj* readGelCache( cfcore::CFGenKbGelCachePKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbGelCacheObj* lockGelCache( cfcore::CFGenKbGelCachePKey* pkey );

		virtual std::vector<cfcore::ICFGenKbGelCacheObj*> readAllGelCache( bool forceRead = false );

		virtual cfcore::ICFGenKbGelCacheObj* readGelCacheByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbGelCacheObj*> readGelCacheByTenantIdx( const int64_t TenantId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbGelCacheObj* readGelCacheByAltIdx( const int64_t TenantId,
			const std::string& CacheName, bool forceRead = false );

		virtual cfcore::ICFGenKbGelCacheObj* readCachedGelCache( cfcore::CFGenKbGelCachePKey* pkey );

		virtual cfcore::ICFGenKbGelCacheObj* readCachedGelCacheByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual std::vector<cfcore::ICFGenKbGelCacheObj*> readCachedGelCacheByTenantIdx( const int64_t TenantId );

		virtual cfcore::ICFGenKbGelCacheObj* readCachedGelCacheByAltIdx( const int64_t TenantId,
			const std::string& CacheName );

		virtual cfcore::ICFGenKbGelCacheObj* updateGelCache( cfcore::ICFGenKbGelCacheEditObj* Obj );

		virtual void deleteGelCache( cfcore::ICFGenKbGelCacheEditObj* Obj );

		virtual void deleteGelCacheByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId );

		virtual void deleteGelCacheByTenantIdx( const int64_t TenantId );

		virtual void deleteGelCacheByAltIdx( const int64_t TenantId,
			const std::string& CacheName );

		virtual void reallyDetachFromIndexesGelCache( cfcore::ICFGenKbGelCacheObj* Obj );

	};

}
