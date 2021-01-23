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

#include <cfgenkbobj/ICFGenKbSecSessionObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecSessionTableObj.hpp>

namespace cfcore {

	class CFGenKbSecSessionTableObj
	: public virtual ICFGenKbSecSessionTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* members;
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* allSecSession;
		std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>* indexBySecUserIdx;
		std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>* indexBySecDevIdx;
		std::map< cfcore::CFGenKbSecSessionByStartIdxKey,
			cfcore::ICFGenKbSecSessionObj*>* indexByStartIdx;
		std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>* indexByFinishIdx;
		std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
			std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>* indexBySecProxyIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbSecSessionTableObj();
		CFGenKbSecSessionTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbSecSessionTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbSecSessionObj* newInstance();

		virtual cfcore::ICFGenKbSecSessionEditObj* newEditInstance( cfcore::ICFGenKbSecSessionObj* orig );

		virtual cfcore::ICFGenKbSecSessionObj* realizeSecSession( cfcore::ICFGenKbSecSessionObj* Obj );

		virtual void deepDisposeByIdIdx( const uuid_ptr_t SecSessionId );
		virtual void deepDisposeBySecUserIdx( const uuid_ptr_t SecUserId );
		virtual void deepDisposeBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName );
		virtual void deepDisposeByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start );
		virtual void deepDisposeByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish );
		virtual void deepDisposeBySecProxyIdx( const uuid_ptr_t SecProxyId );
		virtual void reallyDeepDisposeSecSession( cfcore::ICFGenKbSecSessionObj* Obj );
		virtual cfcore::ICFGenKbSecSessionObj* createSecSession( cfcore::ICFGenKbSecSessionEditObj* Obj );

		virtual cfcore::ICFGenKbSecSessionObj* readSecSession( cfcore::CFGenKbSecSessionPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbSecSessionObj* lockSecSession( cfcore::CFGenKbSecSessionPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readAllSecSession( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> pageAllSecSession(const uuid_ptr_t priorSecSessionId );

		virtual cfcore::ICFGenKbSecSessionObj* readSecSessionByIdIdx( const uuid_ptr_t SecSessionId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readSecSessionBySecUserIdx( const uuid_ptr_t SecUserId,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
			bool forceRead = false );

		virtual cfcore::ICFGenKbSecSessionObj* readSecSessionByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId,
			bool forceRead = false );

		virtual cfcore::ICFGenKbSecSessionObj* readCachedSecSession( cfcore::CFGenKbSecSessionPKey* pkey );

		virtual cfcore::ICFGenKbSecSessionObj* readCachedSecSessionByIdIdx( const uuid_ptr_t SecSessionId );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readCachedSecSessionBySecUserIdx( const uuid_ptr_t SecUserId );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readCachedSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName );

		virtual cfcore::ICFGenKbSecSessionObj* readCachedSecSessionByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readCachedSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> readCachedSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> pageSecSessionBySecUserIdx( const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecSessionId );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> pageSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
			const uuid_ptr_t priorSecSessionId );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> pageSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
			const uuid_ptr_t priorSecSessionId );

		virtual std::vector<cfcore::ICFGenKbSecSessionObj*> pageSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId,
			const uuid_ptr_t priorSecSessionId );

		virtual cfcore::ICFGenKbSecSessionObj* updateSecSession( cfcore::ICFGenKbSecSessionEditObj* Obj );

		virtual void deleteSecSession( cfcore::ICFGenKbSecSessionEditObj* Obj );

		virtual void deleteSecSessionByIdIdx( const uuid_ptr_t SecSessionId );

		virtual void deleteSecSessionBySecUserIdx( const uuid_ptr_t SecUserId );

		virtual void deleteSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName );

		virtual void deleteSecSessionByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start );

		virtual void deleteSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish );

		virtual void deleteSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId );

		virtual void reallyDetachFromIndexesSecSession( cfcore::ICFGenKbSecSessionObj* Obj );

	virtual ICFGenKbSecSessionObj* getSystemSession();

	};

}
