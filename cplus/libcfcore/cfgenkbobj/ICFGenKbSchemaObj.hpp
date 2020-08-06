#pragma once

// Description: C++18 Schema Object interface for CFGenKb.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

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

namespace cfcore {
	class ICFGenKbSchemaObj
	{
	public:
		ICFGenKbSchemaObj();
		virtual ~ICFGenKbSchemaObj();

		virtual cfcore::CFGenKbAuthorization* getAuthorization() const = 0;
		virtual void setAuthorization( cfcore::CFGenKbAuthorization* value ) = 0;

		virtual cfcore::ICFGenKbSchema* getBackingStore() = 0;
		virtual void setBackingStore( cfcore::ICFGenKbSchema* value ) = 0;

		virtual std::string getSchemaName() = 0;

		virtual void setSecClusterName( const std::string& value ) = 0;
		virtual cfcore::ICFGenKbClusterObj* getSecCluster() = 0;
		virtual void setSecCluster( cfcore::ICFGenKbClusterObj* value ) = 0;

		virtual void setSecTenantName( const std::string& value ) = 0;
		virtual cfcore::ICFGenKbTenantObj* getSecTenant() = 0;
		virtual void setSecTenant( cfcore::ICFGenKbTenantObj* value ) = 0;

		virtual void setSecUserName( const std::string& value ) = 0;
		virtual cfcore::ICFGenKbSecUserObj* getSecUser() = 0;
		virtual void setSecUser( cfcore::ICFGenKbSecUserObj* value ) = 0;

		virtual void setSecSessionId( const uuid_ptr_t value ) = 0;
		virtual cfcore::ICFGenKbSecSessionObj* getSecSession() = 0;
		virtual void setSecSession( cfcore::ICFGenKbSecSessionObj* value ) = 0;

		virtual bool isConnected() = 0;
		virtual bool connect() = 0;
		virtual bool connect( const std::string& username, const std::string& password ) = 0;
		virtual bool connect( const std::string& clusterName, const std::string& tenantName, const std::string& secUserName, const std::string& password ) = 0;
		virtual void disconnect( bool doCommit ) = 0;
		virtual void logout() = 0;

		virtual void minimizeMemory() = 0;

		virtual std::string getDbSchemaName() = 0;
		virtual std::string getLowerDbSchemaName() = 0;
		virtual void setDbSchemaName( const std::string& argDbSchemaName ) = 0;

		virtual bool isTransactionOpen() = 0;
		virtual bool beginTransaction() = 0;
		virtual void commit() = 0;
		virtual void rollback() = 0;

		virtual void releasePreparedStatements() = 0;

		virtual cfcore::ICFGenKbClusterTableObj* getClusterTableObj() = 0;
		virtual cfcore::ICFGenKbDefClassTableObj* getDefClassTableObj() = 0;
		virtual cfcore::ICFGenKbGelBoilerplateTableObj* getGelBoilerplateTableObj() = 0;
		virtual cfcore::ICFGenKbGelBuiltinTableObj* getGelBuiltinTableObj() = 0;
		virtual cfcore::ICFGenKbGelCacheTableObj* getGelCacheTableObj() = 0;
		virtual cfcore::ICFGenKbGelCallTableObj* getGelCallTableObj() = 0;
		virtual cfcore::ICFGenKbGelConstrainTableObj* getGelConstrainTableObj() = 0;
		virtual cfcore::ICFGenKbGelCounterTableObj* getGelCounterTableObj() = 0;
		virtual cfcore::ICFGenKbGelErrorTableObj* getGelErrorTableObj() = 0;
		virtual cfcore::ICFGenKbGelExecutableTableObj* getGelExecutableTableObj() = 0;
		virtual cfcore::ICFGenKbGelExpansionTableObj* getGelExpansionTableObj() = 0;
		virtual cfcore::ICFGenKbGelInstructionTableObj* getGelInstructionTableObj() = 0;
		virtual cfcore::ICFGenKbGelIteratorTableObj* getGelIteratorTableObj() = 0;
		virtual cfcore::ICFGenKbGelModifierTableObj* getGelModifierTableObj() = 0;
		virtual cfcore::ICFGenKbGelPopTableObj* getGelPopTableObj() = 0;
		virtual cfcore::ICFGenKbGelPrefixLineTableObj* getGelPrefixLineTableObj() = 0;
		virtual cfcore::ICFGenKbGelReferenceTableObj* getGelReferenceTableObj() = 0;
		virtual cfcore::ICFGenKbGelSequenceTableObj* getGelSequenceTableObj() = 0;
		virtual cfcore::ICFGenKbGelSpreadTableObj* getGelSpreadTableObj() = 0;
		virtual cfcore::ICFGenKbGelSwitchTableObj* getGelSwitchTableObj() = 0;
		virtual cfcore::ICFGenKbGelSwitchLimbTableObj* getGelSwitchLimbTableObj() = 0;
		virtual cfcore::ICFGenKbGenBindTableObj* getGenBindTableObj() = 0;
		virtual cfcore::ICFGenKbGenFileTableObj* getGenFileTableObj() = 0;
		virtual cfcore::ICFGenKbGenItemTableObj* getGenItemTableObj() = 0;
		virtual cfcore::ICFGenKbGenIteratorTableObj* getGenIteratorTableObj() = 0;
		virtual cfcore::ICFGenKbGenReferenceTableObj* getGenReferenceTableObj() = 0;
		virtual cfcore::ICFGenKbGenRuleTableObj* getGenRuleTableObj() = 0;
		virtual cfcore::ICFGenKbGenTruncTableObj* getGenTruncTableObj() = 0;
		virtual cfcore::ICFGenKbHostNodeTableObj* getHostNodeTableObj() = 0;
		virtual cfcore::ICFGenKbRuleCartTableObj* getRuleCartTableObj() = 0;
		virtual cfcore::ICFGenKbRuleTypeTableObj* getRuleTypeTableObj() = 0;
		virtual cfcore::ICFGenKbSecAppTableObj* getSecAppTableObj() = 0;
		virtual cfcore::ICFGenKbSecDeviceTableObj* getSecDeviceTableObj() = 0;
		virtual cfcore::ICFGenKbSecFormTableObj* getSecFormTableObj() = 0;
		virtual cfcore::ICFGenKbSecGroupTableObj* getSecGroupTableObj() = 0;
		virtual cfcore::ICFGenKbSecGroupFormTableObj* getSecGroupFormTableObj() = 0;
		virtual cfcore::ICFGenKbSecGrpIncTableObj* getSecGrpIncTableObj() = 0;
		virtual cfcore::ICFGenKbSecGrpMembTableObj* getSecGrpMembTableObj() = 0;
		virtual cfcore::ICFGenKbSecSessionTableObj* getSecSessionTableObj() = 0;
		virtual cfcore::ICFGenKbSecUserTableObj* getSecUserTableObj() = 0;
		virtual cfcore::ICFGenKbSysClusterTableObj* getSysClusterTableObj() = 0;
		virtual cfcore::ICFGenKbTSecGroupTableObj* getTSecGroupTableObj() = 0;
		virtual cfcore::ICFGenKbTSecGrpIncTableObj* getTSecGrpIncTableObj() = 0;
		virtual cfcore::ICFGenKbTSecGrpMembTableObj* getTSecGrpMembTableObj() = 0;
		virtual cfcore::ICFGenKbTenantTableObj* getTenantTableObj() = 0;
		virtual cfcore::ICFGenKbToolTableObj* getToolTableObj() = 0;
		virtual cfcore::ICFGenKbToolSetTableObj* getToolSetTableObj() = 0;
	};
}
