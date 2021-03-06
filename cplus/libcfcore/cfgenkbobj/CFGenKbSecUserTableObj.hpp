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

#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserEditObj.hpp>
#include <cfgenkbobj/ICFGenKbSecUserTableObj.hpp>

namespace cfcore {

	class CFGenKbSecUserTableObj
	: public virtual ICFGenKbSecUserTableObj
	{
	protected:
		cfcore::ICFGenKbSchemaObj* schema;
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* members;
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* allSecUser;
		std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
			cfcore::ICFGenKbSecUserObj*>* indexByULoginIdx;
		std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>* indexByEMConfIdx;
		std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>* indexByPwdResetIdx;
		std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
			std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>* indexByDefDevIdx;

	public:
		static const std::string CLASS_NAME;
		static const std::string TABLE_NAME;
		static const std::string TABLE_DBNAME;

		CFGenKbSecUserTableObj();
		CFGenKbSecUserTableObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual ~CFGenKbSecUserTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema();
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value );
		virtual const std::string getTableName();
		virtual const std::string getTableDbName();
		virtual const classcode_t* getObjQualifyingClassCode();

		virtual void minimizeMemory();

		virtual cfcore::ICFGenKbSecUserObj* newInstance();

		virtual cfcore::ICFGenKbSecUserEditObj* newEditInstance( cfcore::ICFGenKbSecUserObj* orig );

		virtual cfcore::ICFGenKbSecUserObj* realizeSecUser( cfcore::ICFGenKbSecUserObj* Obj );

		virtual void deepDisposeByIdIdx( const uuid_ptr_t SecUserId );
		virtual void deepDisposeByULoginIdx( const std::string& LoginId );
		virtual void deepDisposeByEMConfIdx( const uuid_ptr_t EMailConfirmUuid );
		virtual void deepDisposeByPwdResetIdx( const uuid_ptr_t PasswordResetUuid );
		virtual void deepDisposeByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName );
		virtual void reallyDeepDisposeSecUser( cfcore::ICFGenKbSecUserObj* Obj );
		virtual cfcore::ICFGenKbSecUserObj* createSecUser( cfcore::ICFGenKbSecUserEditObj* Obj );

		virtual cfcore::ICFGenKbSecUserObj* readSecUser( cfcore::CFGenKbSecUserPKey* pkey, bool forceRead = false );

		virtual cfcore::ICFGenKbSecUserObj* lockSecUser( cfcore::CFGenKbSecUserPKey* pkey );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readAllSecUser( bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> pageAllSecUser(const uuid_ptr_t priorSecUserId );

		virtual cfcore::ICFGenKbSecUserObj* readSecUserByIdIdx( const uuid_ptr_t SecUserId, bool forceRead = false );

		virtual cfcore::ICFGenKbSecUserObj* readSecUserByULoginIdx( const std::string& LoginId, bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid,
			bool forceRead = false );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			bool forceRead = false );

		virtual cfcore::ICFGenKbSecUserObj* readCachedSecUser( cfcore::CFGenKbSecUserPKey* pkey );

		virtual cfcore::ICFGenKbSecUserObj* readCachedSecUserByIdIdx( const uuid_ptr_t SecUserId );

		virtual cfcore::ICFGenKbSecUserObj* readCachedSecUserByULoginIdx( const std::string& LoginId );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readCachedSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readCachedSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> readCachedSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName );

		virtual cfcore::ICFGenKbSecUserObj* readSecUserByLookupULoginIdx( const std::string& LoginId, bool forceRead = false );

		virtual cfcore::ICFGenKbSecUserObj* readCachedSecUserByLookupULoginIdx( const std::string& LoginId );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> pageSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid,
			const uuid_ptr_t priorSecUserId );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> pageSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid,
			const uuid_ptr_t priorSecUserId );

		virtual std::vector<cfcore::ICFGenKbSecUserObj*> pageSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			const uuid_ptr_t priorSecUserId );

		virtual cfcore::ICFGenKbSecUserObj* updateSecUser( cfcore::ICFGenKbSecUserEditObj* Obj );

		virtual void deleteSecUser( cfcore::ICFGenKbSecUserEditObj* Obj );

		virtual void deleteSecUserByIdIdx( const uuid_ptr_t SecUserId );

		virtual void deleteSecUserByULoginIdx( const std::string& LoginId );

		virtual void deleteSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid );

		virtual void deleteSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid );

		virtual void deleteSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName );

		virtual void reallyDetachFromIndexesSecUser( cfcore::ICFGenKbSecUserObj* Obj );

	virtual ICFGenKbSecUserObj* getSystemUser();

	};

}
