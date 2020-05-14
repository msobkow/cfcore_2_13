#pragma once

// Description: C++18 interface for a CFGenKb schema.

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


#include <uuid/uuid.h>

#include <array>
#include <cassert>
#include <cstddef>
#include <chrono>
#include <ctime>
#include <functional>
#include <list>
#include <string>

#include <cflib/ICFLibPublic.hpp>

#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/ICFGenKbTablePerms.hpp>

namespace cfcore {

	class CFGenKbClusterPKey;
	class CFGenKbDefClassPKey;
	class CFGenKbGelCachePKey;
	class CFGenKbGelInstructionPKey;
	class CFGenKbGelSwitchLimbPKey;
	class CFGenKbGenItemPKey;
	class CFGenKbHostNodePKey;
	class CFGenKbRuleCartPKey;
	class CFGenKbRuleTypePKey;
	class CFGenKbSecAppPKey;
	class CFGenKbSecDevicePKey;
	class CFGenKbSecFormPKey;
	class CFGenKbSecGroupPKey;
	class CFGenKbSecGroupFormPKey;
	class CFGenKbSecGrpIncPKey;
	class CFGenKbSecGrpMembPKey;
	class CFGenKbSecSessionPKey;
	class CFGenKbSecUserPKey;
	class CFGenKbSysClusterPKey;
	class CFGenKbTSecGroupPKey;
	class CFGenKbTSecGrpIncPKey;
	class CFGenKbTSecGrpMembPKey;
	class CFGenKbTenantPKey;
	class CFGenKbToolPKey;
	class CFGenKbToolSetPKey;

	class CFGenKbClusterBuff;
	class CFGenKbDefClassBuff;
	class CFGenKbGelBoilerplateBuff;
	class CFGenKbGelBuiltinBuff;
	class CFGenKbGelCacheBuff;
	class CFGenKbGelCallBuff;
	class CFGenKbGelConstrainBuff;
	class CFGenKbGelCounterBuff;
	class CFGenKbGelErrorBuff;
	class CFGenKbGelExecutableBuff;
	class CFGenKbGelExpansionBuff;
	class CFGenKbGelInstructionBuff;
	class CFGenKbGelIteratorBuff;
	class CFGenKbGelModifierBuff;
	class CFGenKbGelPopBuff;
	class CFGenKbGelPrefixLineBuff;
	class CFGenKbGelReferenceBuff;
	class CFGenKbGelSequenceBuff;
	class CFGenKbGelSpreadBuff;
	class CFGenKbGelSwitchBuff;
	class CFGenKbGelSwitchLimbBuff;
	class CFGenKbGenBindBuff;
	class CFGenKbGenFileBuff;
	class CFGenKbGenItemBuff;
	class CFGenKbGenIteratorBuff;
	class CFGenKbGenReferenceBuff;
	class CFGenKbGenRuleBuff;
	class CFGenKbGenTruncBuff;
	class CFGenKbHostNodeBuff;
	class CFGenKbRuleCartBuff;
	class CFGenKbRuleTypeBuff;
	class CFGenKbSecAppBuff;
	class CFGenKbSecDeviceBuff;
	class CFGenKbSecFormBuff;
	class CFGenKbSecGroupBuff;
	class CFGenKbSecGroupFormBuff;
	class CFGenKbSecGrpIncBuff;
	class CFGenKbSecGrpMembBuff;
	class CFGenKbSecSessionBuff;
	class CFGenKbSecUserBuff;
	class CFGenKbSysClusterBuff;
	class CFGenKbTSecGroupBuff;
	class CFGenKbTSecGrpIncBuff;
	class CFGenKbTSecGrpMembBuff;
	class CFGenKbTenantBuff;
	class CFGenKbToolBuff;
	class CFGenKbToolSetBuff;

	class ICFGenKbClusterTable;
	class ICFGenKbDefClassTable;
	class ICFGenKbGelBoilerplateTable;
	class ICFGenKbGelBuiltinTable;
	class ICFGenKbGelCacheTable;
	class ICFGenKbGelCallTable;
	class ICFGenKbGelConstrainTable;
	class ICFGenKbGelCounterTable;
	class ICFGenKbGelErrorTable;
	class ICFGenKbGelExecutableTable;
	class ICFGenKbGelExpansionTable;
	class ICFGenKbGelInstructionTable;
	class ICFGenKbGelIteratorTable;
	class ICFGenKbGelModifierTable;
	class ICFGenKbGelPopTable;
	class ICFGenKbGelPrefixLineTable;
	class ICFGenKbGelReferenceTable;
	class ICFGenKbGelSequenceTable;
	class ICFGenKbGelSpreadTable;
	class ICFGenKbGelSwitchTable;
	class ICFGenKbGelSwitchLimbTable;
	class ICFGenKbGenBindTable;
	class ICFGenKbGenFileTable;
	class ICFGenKbGenItemTable;
	class ICFGenKbGenIteratorTable;
	class ICFGenKbGenReferenceTable;
	class ICFGenKbGenRuleTable;
	class ICFGenKbGenTruncTable;
	class ICFGenKbHostNodeTable;
	class ICFGenKbRuleCartTable;
	class ICFGenKbRuleTypeTable;
	class ICFGenKbSecAppTable;
	class ICFGenKbSecDeviceTable;
	class ICFGenKbSecFormTable;
	class ICFGenKbSecGroupTable;
	class ICFGenKbSecGroupFormTable;
	class ICFGenKbSecGrpIncTable;
	class ICFGenKbSecGrpMembTable;
	class ICFGenKbSecSessionTable;
	class ICFGenKbSecUserTable;
	class ICFGenKbSysClusterTable;
	class ICFGenKbTSecGroupTable;
	class ICFGenKbTSecGrpIncTable;
	class ICFGenKbTSecGrpMembTable;
	class ICFGenKbTenantTable;
	class ICFGenKbToolTable;
	class ICFGenKbToolSetTable;
}


namespace cfcore {

	class ICFGenKbSchema
	{
	public:
		static const std::string CLASS_NAME;
		enum AuditActionEnum {
			Create,
			Update,
			Delete
		};


	public:
		ICFGenKbSchema();
		virtual ~ICFGenKbSchema();

		static AuditActionEnum* parseAuditActionEnum( const std::string* value );
		static AuditActionEnum* parseAuditActionEnum( const std::string& fieldOrClassName, const std::string* value );
		static const std::string* toAuditActionEnumString( const AuditActionEnum value );

		static const AuditActionEnum ordinalToAuditActionEnum( const std::string& fieldOrClassName, const int16_t value );
		static const AuditActionEnum* ordinalToAuditActionEnum( const std::string& fieldOrClassName, const int16_t* value );
		static const AuditActionEnum ordinalToAuditActionEnum( const int16_t value );
		static const AuditActionEnum* ordinalToAuditActionEnum( const int16_t* value );
		static const AuditActionEnum ordinalToAuditActionEnum( const int32_t value );
		static const AuditActionEnum* ordinalToAuditActionEnum( const int32_t* value );
		static const AuditActionEnum ordinalToAuditActionEnum( const std::string& fieldOrClassName, const int32_t value );
		static const AuditActionEnum* ordinalToAuditActionEnum( const std::string& fieldOrClassName, const int32_t* value );

		virtual const std::string* getJndiName() const = 0;
		virtual void setJndiName( const std::string& value ) = 0;

		virtual cfcore::CFGenKbAuthorization* getAuthorization() const = 0;
		virtual void setAuthorization( cfcore::CFGenKbAuthorization* value ) = 0;

		virtual bool isConnected() = 0;
		virtual bool connect() = 0;
		virtual bool connect( const std::string& username, const std::string& password ) = 0;
		virtual bool connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName ) = 0;
		virtual void disconnect( bool doCommit ) = 0;
		virtual void logout( cfcore::CFGenKbAuthorization* auth ) = 0;

		virtual ICFGenKbSchema* newSchema() = 0;

		virtual int16_t nextDefClassIdGen() = 0;

		virtual int16_t nextRuleTypeIdGen() = 0;

		virtual int16_t nextToolIdGen() = 0;

		virtual int16_t nextToolSetIdGen() = 0;

		virtual int64_t nextClusterIdGen() = 0;

		virtual int64_t nextTenantIdGen() = 0;

		virtual cfcore::ICFGenKbClusterTable* getTableCluster() = 0;

		virtual cfcore::ICFGenKbDefClassTable* getTableDefClass() = 0;

		virtual cfcore::ICFGenKbGelBoilerplateTable* getTableGelBoilerplate() = 0;

		virtual cfcore::ICFGenKbGelBuiltinTable* getTableGelBuiltin() = 0;

		virtual cfcore::ICFGenKbGelCacheTable* getTableGelCache() = 0;

		virtual cfcore::ICFGenKbGelCallTable* getTableGelCall() = 0;

		virtual cfcore::ICFGenKbGelConstrainTable* getTableGelConstrain() = 0;

		virtual cfcore::ICFGenKbGelCounterTable* getTableGelCounter() = 0;

		virtual cfcore::ICFGenKbGelErrorTable* getTableGelError() = 0;

		virtual cfcore::ICFGenKbGelExecutableTable* getTableGelExecutable() = 0;

		virtual cfcore::ICFGenKbGelExpansionTable* getTableGelExpansion() = 0;

		virtual cfcore::ICFGenKbGelInstructionTable* getTableGelInstruction() = 0;

		virtual cfcore::ICFGenKbGelIteratorTable* getTableGelIterator() = 0;

		virtual cfcore::ICFGenKbGelModifierTable* getTableGelModifier() = 0;

		virtual cfcore::ICFGenKbGelPopTable* getTableGelPop() = 0;

		virtual cfcore::ICFGenKbGelPrefixLineTable* getTableGelPrefixLine() = 0;

		virtual cfcore::ICFGenKbGelReferenceTable* getTableGelReference() = 0;

		virtual cfcore::ICFGenKbGelSequenceTable* getTableGelSequence() = 0;

		virtual cfcore::ICFGenKbGelSpreadTable* getTableGelSpread() = 0;

		virtual cfcore::ICFGenKbGelSwitchTable* getTableGelSwitch() = 0;

		virtual cfcore::ICFGenKbGelSwitchLimbTable* getTableGelSwitchLimb() = 0;

		virtual cfcore::ICFGenKbGenBindTable* getTableGenBind() = 0;

		virtual cfcore::ICFGenKbGenFileTable* getTableGenFile() = 0;

		virtual cfcore::ICFGenKbGenItemTable* getTableGenItem() = 0;

		virtual cfcore::ICFGenKbGenIteratorTable* getTableGenIterator() = 0;

		virtual cfcore::ICFGenKbGenReferenceTable* getTableGenReference() = 0;

		virtual cfcore::ICFGenKbGenRuleTable* getTableGenRule() = 0;

		virtual cfcore::ICFGenKbGenTruncTable* getTableGenTrunc() = 0;

		virtual cfcore::ICFGenKbHostNodeTable* getTableHostNode() = 0;

		virtual cfcore::ICFGenKbRuleCartTable* getTableRuleCart() = 0;

		virtual cfcore::ICFGenKbRuleTypeTable* getTableRuleType() = 0;

		virtual cfcore::ICFGenKbSecAppTable* getTableSecApp() = 0;

		virtual cfcore::ICFGenKbSecDeviceTable* getTableSecDevice() = 0;

		virtual cfcore::ICFGenKbSecFormTable* getTableSecForm() = 0;

		virtual cfcore::ICFGenKbSecGroupTable* getTableSecGroup() = 0;

		virtual cfcore::ICFGenKbSecGroupFormTable* getTableSecGroupForm() = 0;

		virtual cfcore::ICFGenKbSecGrpIncTable* getTableSecGrpInc() = 0;

		virtual cfcore::ICFGenKbSecGrpMembTable* getTableSecGrpMemb() = 0;

		virtual cfcore::ICFGenKbSecSessionTable* getTableSecSession() = 0;

		virtual cfcore::ICFGenKbSecUserTable* getTableSecUser() = 0;

		virtual cfcore::ICFGenKbSysClusterTable* getTableSysCluster() = 0;

		virtual cfcore::ICFGenKbTSecGroupTable* getTableTSecGroup() = 0;

		virtual cfcore::ICFGenKbTSecGrpIncTable* getTableTSecGrpInc() = 0;

		virtual cfcore::ICFGenKbTSecGrpMembTable* getTableTSecGrpMemb() = 0;

		virtual cfcore::ICFGenKbTenantTable* getTableTenant() = 0;

		virtual cfcore::ICFGenKbToolTable* getTableTool() = 0;

		virtual cfcore::ICFGenKbToolSetTable* getTableToolSet() = 0;

		virtual bool isTransactionOpen() const = 0;
		virtual bool beginTransaction() = 0;
		virtual void commit() = 0;
		virtual void rollback() = 0;

		virtual cfcore::ICFGenKbTablePerms* getTablePerms() = 0;
		virtual void setTablePerms( cfcore::ICFGenKbTablePerms* value ) = 0;

		virtual void releasePreparedStatements() = 0;

		virtual const std::string* getDbSchemaName() const = 0;
		virtual const std::string* getLowerDbSchemaName() const = 0;

		virtual void setDbSchemaName( const std::string& argDbSchemaName ) = 0;
;
	};
}
