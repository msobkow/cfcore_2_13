#pragma once

// Description: C++18 Schema Object specification for CFGenKb.

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

#include <cfgenkbobj/ICFGenKbSchemaObj.hpp>

namespace cfcore {

	class CFGenKbSchemaObj
	: public virtual ICFGenKbSchemaObj
	{
	public:
		static const std::string CLASS_NAME;
		static const std::string SCHEMA_NAME;
		static const std::string SCHEMA_DBNAME;
		static const std::string S_System;
	protected:
		cfcore::CFGenKbAuthorization* authorization;
		cfcore::ICFGenKbSchema* backingStore;
		std::string* secClusterName;
		std::string* secTenantName;
		std::string* secUserName;
		cfcore::ICFGenKbClusterObj* secCluster;
		long secClusterId;
		cfcore::ICFGenKbTenantObj* secTenant;
		long secTenantId;
		cfcore::ICFGenKbSecUserObj* secUser;
		uuid_t secSessionUserId;
		cfcore::ICFGenKbSecSessionObj* secSession;
		uuid_t secSessionSessionId;
		std::string* schemaDbName;
		std::string* lowerDbSchemaName;
		ICFGenKbClusterTableObj* clusterTableObj;
		ICFGenKbDefClassTableObj* defClassTableObj;
		ICFGenKbGelBoilerplateTableObj* gelBoilerplateTableObj;
		ICFGenKbGelBuiltinTableObj* gelBuiltinTableObj;
		ICFGenKbGelCacheTableObj* gelCacheTableObj;
		ICFGenKbGelCallTableObj* gelCallTableObj;
		ICFGenKbGelConstrainTableObj* gelConstrainTableObj;
		ICFGenKbGelCounterTableObj* gelCounterTableObj;
		ICFGenKbGelErrorTableObj* gelErrorTableObj;
		ICFGenKbGelExecutableTableObj* gelExecutableTableObj;
		ICFGenKbGelExpansionTableObj* gelExpansionTableObj;
		ICFGenKbGelInstructionTableObj* gelInstructionTableObj;
		ICFGenKbGelIteratorTableObj* gelIteratorTableObj;
		ICFGenKbGelModifierTableObj* gelModifierTableObj;
		ICFGenKbGelPopTableObj* gelPopTableObj;
		ICFGenKbGelPrefixLineTableObj* gelPrefixLineTableObj;
		ICFGenKbGelReferenceTableObj* gelReferenceTableObj;
		ICFGenKbGelSequenceTableObj* gelSequenceTableObj;
		ICFGenKbGelSpreadTableObj* gelSpreadTableObj;
		ICFGenKbGelSwitchTableObj* gelSwitchTableObj;
		ICFGenKbGelSwitchLimbTableObj* gelSwitchLimbTableObj;
		ICFGenKbGenBindTableObj* genBindTableObj;
		ICFGenKbGenFileTableObj* genFileTableObj;
		ICFGenKbGenItemTableObj* genItemTableObj;
		ICFGenKbGenIteratorTableObj* genIteratorTableObj;
		ICFGenKbGenReferenceTableObj* genReferenceTableObj;
		ICFGenKbGenRuleTableObj* genRuleTableObj;
		ICFGenKbGenTruncTableObj* genTruncTableObj;
		ICFGenKbHostNodeTableObj* hostNodeTableObj;
		ICFGenKbRuleCartTableObj* ruleCartTableObj;
		ICFGenKbRuleTypeTableObj* ruleTypeTableObj;
		ICFGenKbSecAppTableObj* secAppTableObj;
		ICFGenKbSecDeviceTableObj* secDeviceTableObj;
		ICFGenKbSecFormTableObj* secFormTableObj;
		ICFGenKbSecGroupTableObj* secGroupTableObj;
		ICFGenKbSecGroupFormTableObj* secGroupFormTableObj;
		ICFGenKbSecGrpIncTableObj* secGrpIncTableObj;
		ICFGenKbSecGrpMembTableObj* secGrpMembTableObj;
		ICFGenKbSecSessionTableObj* secSessionTableObj;
		ICFGenKbSecUserTableObj* secUserTableObj;
		ICFGenKbSysClusterTableObj* sysClusterTableObj;
		ICFGenKbTSecGroupTableObj* tSecGroupTableObj;
		ICFGenKbTSecGrpIncTableObj* tSecGrpIncTableObj;
		ICFGenKbTSecGrpMembTableObj* tSecGrpMembTableObj;
		ICFGenKbTenantTableObj* tenantTableObj;
		ICFGenKbToolTableObj* toolTableObj;
		ICFGenKbToolSetTableObj* toolSetTableObj;
	public:
		CFGenKbSchemaObj();

		virtual ~CFGenKbSchemaObj();

		virtual void setSecClusterName( const std::string& value );
		virtual std::string getSecClusterName();
		virtual cfcore::ICFGenKbClusterObj* getSecCluster();
		virtual void setSecCluster( cfcore::ICFGenKbClusterObj* value );
		virtual long getSecClusterId();

		virtual void setSecTenantName( const std::string& value );
		virtual std::string getSecTenantName();
		virtual cfcore::ICFGenKbTenantObj* getSecTenant();
		virtual void setSecTenant( cfcore::ICFGenKbTenantObj* value );
		virtual long getSecTenantId();

		virtual void setSecUserName( const std::string& value );
		virtual std::string getSecUserName();
		virtual cfcore::ICFGenKbSecUserObj* getSecUser();
		virtual void setSecUser( cfcore::ICFGenKbSecUserObj* value );

		virtual cfcore::ICFGenKbSecSessionObj* getSecSession();
		virtual void setSecSession( cfcore::ICFGenKbSecSessionObj* value );
		virtual void setSecSessionId( const uuid_ptr_t value );
		virtual uuid_ptr_t getSecSessionSessionId();
		virtual uuid_ptr_t getSecSessionUserId();

		virtual std::string getDbSchemaName();
		virtual std::string getLowerDbSchemaName();

		virtual void setDbSchemaName( const std::string& argDbSchemaName );

		/**
		 *	Release any prepared statements acquired by this connection.
		 *	<p>
		 *	Resets the prepared statements so they can acquire the new value of
		 *	<tt>setDbSchemaName()</tt>.
		 */
		virtual void releasePreparedStatements();

		virtual cfcore::CFGenKbAuthorization* getAuthorization() const;
		virtual void setAuthorization( cfcore::CFGenKbAuthorization* value );
		virtual cfcore::ICFGenKbSchema* getBackingStore();
		virtual void setBackingStore( cfcore::ICFGenKbSchema* value );
		virtual std::string getSchemaName();
		virtual bool isConnected();
		virtual bool connect();
		virtual bool connect( const std::string& username, const std::string& password );
		virtual bool connect( const std::string& clusterName, const std::string& tenantName, const std::string& secUserName, const std::string& password );
		virtual void disconnect( bool doCommit );
		virtual void logout();
		virtual void minimizeMemory();
		virtual bool isTransactionOpen();
		virtual bool beginTransaction();
		virtual void commit();
		virtual void rollback();

		virtual cfcore::ICFGenKbClusterTableObj* getClusterTableObj();

		virtual cfcore::ICFGenKbDefClassTableObj* getDefClassTableObj();

		virtual cfcore::ICFGenKbGelBoilerplateTableObj* getGelBoilerplateTableObj();

		virtual cfcore::ICFGenKbGelBuiltinTableObj* getGelBuiltinTableObj();

		virtual cfcore::ICFGenKbGelCacheTableObj* getGelCacheTableObj();

		virtual cfcore::ICFGenKbGelCallTableObj* getGelCallTableObj();

		virtual cfcore::ICFGenKbGelConstrainTableObj* getGelConstrainTableObj();

		virtual cfcore::ICFGenKbGelCounterTableObj* getGelCounterTableObj();

		virtual cfcore::ICFGenKbGelErrorTableObj* getGelErrorTableObj();

		virtual cfcore::ICFGenKbGelExecutableTableObj* getGelExecutableTableObj();

		virtual cfcore::ICFGenKbGelExpansionTableObj* getGelExpansionTableObj();

		virtual cfcore::ICFGenKbGelInstructionTableObj* getGelInstructionTableObj();

		virtual cfcore::ICFGenKbGelIteratorTableObj* getGelIteratorTableObj();

		virtual cfcore::ICFGenKbGelModifierTableObj* getGelModifierTableObj();

		virtual cfcore::ICFGenKbGelPopTableObj* getGelPopTableObj();

		virtual cfcore::ICFGenKbGelPrefixLineTableObj* getGelPrefixLineTableObj();

		virtual cfcore::ICFGenKbGelReferenceTableObj* getGelReferenceTableObj();

		virtual cfcore::ICFGenKbGelSequenceTableObj* getGelSequenceTableObj();

		virtual cfcore::ICFGenKbGelSpreadTableObj* getGelSpreadTableObj();

		virtual cfcore::ICFGenKbGelSwitchTableObj* getGelSwitchTableObj();

		virtual cfcore::ICFGenKbGelSwitchLimbTableObj* getGelSwitchLimbTableObj();

		virtual cfcore::ICFGenKbGenBindTableObj* getGenBindTableObj();

		virtual cfcore::ICFGenKbGenFileTableObj* getGenFileTableObj();

		virtual cfcore::ICFGenKbGenItemTableObj* getGenItemTableObj();

		virtual cfcore::ICFGenKbGenIteratorTableObj* getGenIteratorTableObj();

		virtual cfcore::ICFGenKbGenReferenceTableObj* getGenReferenceTableObj();

		virtual cfcore::ICFGenKbGenRuleTableObj* getGenRuleTableObj();

		virtual cfcore::ICFGenKbGenTruncTableObj* getGenTruncTableObj();

		virtual cfcore::ICFGenKbHostNodeTableObj* getHostNodeTableObj();

		virtual cfcore::ICFGenKbRuleCartTableObj* getRuleCartTableObj();

		virtual cfcore::ICFGenKbRuleTypeTableObj* getRuleTypeTableObj();

		virtual cfcore::ICFGenKbSecAppTableObj* getSecAppTableObj();

		virtual cfcore::ICFGenKbSecDeviceTableObj* getSecDeviceTableObj();

		virtual cfcore::ICFGenKbSecFormTableObj* getSecFormTableObj();

		virtual cfcore::ICFGenKbSecGroupTableObj* getSecGroupTableObj();

		virtual cfcore::ICFGenKbSecGroupFormTableObj* getSecGroupFormTableObj();

		virtual cfcore::ICFGenKbSecGrpIncTableObj* getSecGrpIncTableObj();

		virtual cfcore::ICFGenKbSecGrpMembTableObj* getSecGrpMembTableObj();

		virtual cfcore::ICFGenKbSecSessionTableObj* getSecSessionTableObj();

		virtual cfcore::ICFGenKbSecUserTableObj* getSecUserTableObj();

		virtual cfcore::ICFGenKbSysClusterTableObj* getSysClusterTableObj();

		virtual cfcore::ICFGenKbTSecGroupTableObj* getTSecGroupTableObj();

		virtual cfcore::ICFGenKbTSecGrpIncTableObj* getTSecGrpIncTableObj();

		virtual cfcore::ICFGenKbTSecGrpMembTableObj* getTSecGrpMembTableObj();

		virtual cfcore::ICFGenKbTenantTableObj* getTenantTableObj();

		virtual cfcore::ICFGenKbToolTableObj* getToolTableObj();

		virtual cfcore::ICFGenKbToolSetTableObj* getToolSetTableObj();

	};

}
