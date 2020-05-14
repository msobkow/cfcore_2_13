#pragma once

// Description: C++18 specification of a CFGenKb schema.

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

	class CFGenKbClusterByUDomNameIdxKey;
	class CFGenKbClusterByUDescrIdxKey;
	class CFGenKbDefClassByNameIdxKey;
	class CFGenKbDefClassByBaseIdxKey;
	class CFGenKbGelCacheByTenantIdxKey;
	class CFGenKbGelCacheByAltIdxKey;
	class CFGenKbGelCallByCacheIdxKey;
	class CFGenKbGelCallBySeqIdxKey;
	class CFGenKbGelCallByCallInstIdxKey;
	class CFGenKbGelCallByPrevInstIdxKey;
	class CFGenKbGelCallByNextInstIdxKey;
	class CFGenKbGelConstrainByRemainderIdxKey;
	class CFGenKbGelExecutableByGenItemIdxKey;
	class CFGenKbGelInstructionByTenantIdxKey;
	class CFGenKbGelInstructionByGelCacheIdxKey;
	class CFGenKbGelInstructionByChainIdxKey;
	class CFGenKbGelIteratorByBeforeIdxKey;
	class CFGenKbGelIteratorByFirstIdxKey;
	class CFGenKbGelIteratorByEachIdxKey;
	class CFGenKbGelIteratorByLastIdxKey;
	class CFGenKbGelIteratorByLoneIdxKey;
	class CFGenKbGelIteratorByEmptyIdxKey;
	class CFGenKbGelModifierByRemainderIdxKey;
	class CFGenKbGelPopByRemainderIdxKey;
	class CFGenKbGelPrefixLineByRemainderIdxKey;
	class CFGenKbGelReferenceByRemainderIdxKey;
	class CFGenKbGelSequenceByFirstInstIdxKey;
	class CFGenKbGelSequenceByLastInstIdxKey;
	class CFGenKbGelSpreadByBetweenIdxKey;
	class CFGenKbGelSpreadByBeforeIdxKey;
	class CFGenKbGelSpreadByFirstIdxKey;
	class CFGenKbGelSpreadByEachIdxKey;
	class CFGenKbGelSpreadByLastIdxKey;
	class CFGenKbGelSpreadByLoneIdxKey;
	class CFGenKbGelSpreadByEmptyIdxKey;
	class CFGenKbGelSwitchLimbByTenantIdxKey;
	class CFGenKbGelSwitchLimbBySwitchIdxKey;
	class CFGenKbGenFileByXSrcBundleKey;
	class CFGenKbGenFileByXModNameKey;
	class CFGenKbGenFileByXBasePkgKey;
	class CFGenKbGenFileByXSubPkgKey;
	class CFGenKbGenFileByXExpClsNameKey;
	class CFGenKbGenFileByXExpKeyNameKey;
	class CFGenKbGenFileByXExpFileNameKey;
	class CFGenKbGenItemByTenantIdxKey;
	class CFGenKbGenItemByCartIdxKey;
	class CFGenKbGenItemByRuleTypeIdxKey;
	class CFGenKbGenItemByToolSetIdxKey;
	class CFGenKbGenItemByScopeIdxKey;
	class CFGenKbGenItemByGenDefIdxKey;
	class CFGenKbGenItemByAltIdxKey;
	class CFGenKbGenItemByGelExecIdxKey;
	class CFGenKbGenItemByProbeIdxKey;
	class CFGenKbGenRuleByBodyIdxKey;
	class CFGenKbHostNodeByClusterIdxKey;
	class CFGenKbHostNodeByUDescrIdxKey;
	class CFGenKbHostNodeByHostNameIdxKey;
	class CFGenKbRuleCartByTenantIdxKey;
	class CFGenKbRuleCartByNameIdxKey;
	class CFGenKbRuleTypeByNameIdxKey;
	class CFGenKbSecAppByClusterIdxKey;
	class CFGenKbSecAppByUJEEMountIdxKey;
	class CFGenKbSecDeviceByNameIdxKey;
	class CFGenKbSecDeviceByUserIdxKey;
	class CFGenKbSecFormByClusterIdxKey;
	class CFGenKbSecFormBySecAppIdxKey;
	class CFGenKbSecFormByUJEEServletIdxKey;
	class CFGenKbSecGroupByClusterIdxKey;
	class CFGenKbSecGroupByClusterVisIdxKey;
	class CFGenKbSecGroupByUNameIdxKey;
	class CFGenKbSecGroupFormByClusterIdxKey;
	class CFGenKbSecGroupFormByGroupIdxKey;
	class CFGenKbSecGroupFormByAppIdxKey;
	class CFGenKbSecGroupFormByFormIdxKey;
	class CFGenKbSecGroupFormByUFormIdxKey;
	class CFGenKbSecGrpIncByClusterIdxKey;
	class CFGenKbSecGrpIncByGroupIdxKey;
	class CFGenKbSecGrpIncByIncludeIdxKey;
	class CFGenKbSecGrpIncByUIncludeIdxKey;
	class CFGenKbSecGrpMembByClusterIdxKey;
	class CFGenKbSecGrpMembByGroupIdxKey;
	class CFGenKbSecGrpMembByUserIdxKey;
	class CFGenKbSecGrpMembByUUserIdxKey;
	class CFGenKbSecSessionBySecUserIdxKey;
	class CFGenKbSecSessionBySecDevIdxKey;
	class CFGenKbSecSessionByStartIdxKey;
	class CFGenKbSecSessionByFinishIdxKey;
	class CFGenKbSecSessionBySecProxyIdxKey;
	class CFGenKbSecUserByULoginIdxKey;
	class CFGenKbSecUserByEMConfIdxKey;
	class CFGenKbSecUserByPwdResetIdxKey;
	class CFGenKbSecUserByDefDevIdxKey;
	class CFGenKbSysClusterByClusterIdxKey;
	class CFGenKbTSecGroupByTenantIdxKey;
	class CFGenKbTSecGroupByTenantVisIdxKey;
	class CFGenKbTSecGroupByUNameIdxKey;
	class CFGenKbTSecGrpIncByTenantIdxKey;
	class CFGenKbTSecGrpIncByGroupIdxKey;
	class CFGenKbTSecGrpIncByIncludeIdxKey;
	class CFGenKbTSecGrpIncByUIncludeIdxKey;
	class CFGenKbTSecGrpMembByTenantIdxKey;
	class CFGenKbTSecGrpMembByGroupIdxKey;
	class CFGenKbTSecGrpMembByUserIdxKey;
	class CFGenKbTSecGrpMembByUUserIdxKey;
	class CFGenKbTenantByClusterIdxKey;
	class CFGenKbTenantByUNameIdxKey;
	class CFGenKbToolByNameIdxKey;
	class CFGenKbToolByReplacesIdxKey;
	class CFGenKbToolSetByNameIdxKey;
	class CFGenKbToolSetByTool0IdxKey;
	class CFGenKbToolSetByTool1IdxKey;
	class CFGenKbToolSetByTool2IdxKey;
	class CFGenKbToolSetByTool3IdxKey;
	class CFGenKbToolSetByTool4IdxKey;
	class CFGenKbToolSetByTool5IdxKey;
	class CFGenKbToolSetByTool6IdxKey;
	class CFGenKbToolSetByTool7IdxKey;

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

#include <cfgenkb/ICFGenKbSchema.hpp>

#include <cfgenkb/CFGenKbAuthorization.hpp>
#include <cfgenkb/ICFGenKbTablePerms.hpp>

namespace cfcore {

	class CFGenKbSchema
	: public virtual cfcore::ICFGenKbSchema
	{
	protected:
		cfcore::CFGenKbAuthorization* authorization;
cfcore::ICFGenKbTablePerms* tablePerms;
		std::string* jndiName;
		std::string* schemaDbName;
		std::string* lowerDbSchemaName;
		cfcore::ICFGenKbClusterTable* tableCluster;
		cfcore::ICFGenKbDefClassTable* tableDefClass;
		cfcore::ICFGenKbGelBoilerplateTable* tableGelBoilerplate;
		cfcore::ICFGenKbGelBuiltinTable* tableGelBuiltin;
		cfcore::ICFGenKbGelCacheTable* tableGelCache;
		cfcore::ICFGenKbGelCallTable* tableGelCall;
		cfcore::ICFGenKbGelConstrainTable* tableGelConstrain;
		cfcore::ICFGenKbGelCounterTable* tableGelCounter;
		cfcore::ICFGenKbGelErrorTable* tableGelError;
		cfcore::ICFGenKbGelExecutableTable* tableGelExecutable;
		cfcore::ICFGenKbGelExpansionTable* tableGelExpansion;
		cfcore::ICFGenKbGelInstructionTable* tableGelInstruction;
		cfcore::ICFGenKbGelIteratorTable* tableGelIterator;
		cfcore::ICFGenKbGelModifierTable* tableGelModifier;
		cfcore::ICFGenKbGelPopTable* tableGelPop;
		cfcore::ICFGenKbGelPrefixLineTable* tableGelPrefixLine;
		cfcore::ICFGenKbGelReferenceTable* tableGelReference;
		cfcore::ICFGenKbGelSequenceTable* tableGelSequence;
		cfcore::ICFGenKbGelSpreadTable* tableGelSpread;
		cfcore::ICFGenKbGelSwitchTable* tableGelSwitch;
		cfcore::ICFGenKbGelSwitchLimbTable* tableGelSwitchLimb;
		cfcore::ICFGenKbGenBindTable* tableGenBind;
		cfcore::ICFGenKbGenFileTable* tableGenFile;
		cfcore::ICFGenKbGenItemTable* tableGenItem;
		cfcore::ICFGenKbGenIteratorTable* tableGenIterator;
		cfcore::ICFGenKbGenReferenceTable* tableGenReference;
		cfcore::ICFGenKbGenRuleTable* tableGenRule;
		cfcore::ICFGenKbGenTruncTable* tableGenTrunc;
		cfcore::ICFGenKbHostNodeTable* tableHostNode;
		cfcore::ICFGenKbRuleCartTable* tableRuleCart;
		cfcore::ICFGenKbRuleTypeTable* tableRuleType;
		cfcore::ICFGenKbSecAppTable* tableSecApp;
		cfcore::ICFGenKbSecDeviceTable* tableSecDevice;
		cfcore::ICFGenKbSecFormTable* tableSecForm;
		cfcore::ICFGenKbSecGroupTable* tableSecGroup;
		cfcore::ICFGenKbSecGroupFormTable* tableSecGroupForm;
		cfcore::ICFGenKbSecGrpIncTable* tableSecGrpInc;
		cfcore::ICFGenKbSecGrpMembTable* tableSecGrpMemb;
		cfcore::ICFGenKbSecSessionTable* tableSecSession;
		cfcore::ICFGenKbSecUserTable* tableSecUser;
		cfcore::ICFGenKbSysClusterTable* tableSysCluster;
		cfcore::ICFGenKbTSecGroupTable* tableTSecGroup;
		cfcore::ICFGenKbTSecGrpIncTable* tableTSecGrpInc;
		cfcore::ICFGenKbTSecGrpMembTable* tableTSecGrpMemb;
		cfcore::ICFGenKbTenantTable* tableTenant;
		cfcore::ICFGenKbToolTable* tableTool;
		cfcore::ICFGenKbToolSetTable* tableToolSet;

	public:
		static const std::string CLASS_NAME;

		CFGenKbSchema();
		CFGenKbSchema( const std::string& argJndiName );
		virtual ~CFGenKbSchema();

		virtual cfcore::CFGenKbAuthorization* getAuthorization() const;
		virtual void setAuthorization( cfcore::CFGenKbAuthorization* value );

		virtual const std::string* getJndiName() const;
		virtual void setJndiName( const std::string& value );

		virtual bool isConnected();
		virtual bool connect();
		virtual bool connect( const std::string& username, const std::string& password );
		virtual bool connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName );
		virtual void disconnect( bool doCommit );
		virtual void logout( cfcore::CFGenKbAuthorization* auth );

		virtual cfcore::ICFGenKbSchema* newSchema();

		virtual int16_t nextDefClassIdGen();

		virtual int16_t nextRuleTypeIdGen();

		virtual int16_t nextToolIdGen();

		virtual int16_t nextToolSetIdGen();

		virtual int64_t nextClusterIdGen();

		virtual int64_t nextTenantIdGen();

		virtual cfcore::ICFGenKbClusterTable* getTableCluster();
		virtual void setTableCluster( cfcore::ICFGenKbClusterTable* value );

		virtual cfcore::ICFGenKbDefClassTable* getTableDefClass();
		virtual void setTableDefClass( cfcore::ICFGenKbDefClassTable* value );

		virtual cfcore::ICFGenKbGelBoilerplateTable* getTableGelBoilerplate();
		virtual void setTableGelBoilerplate( cfcore::ICFGenKbGelBoilerplateTable* value );

		virtual cfcore::ICFGenKbGelBuiltinTable* getTableGelBuiltin();
		virtual void setTableGelBuiltin( cfcore::ICFGenKbGelBuiltinTable* value );

		virtual cfcore::ICFGenKbGelCacheTable* getTableGelCache();
		virtual void setTableGelCache( cfcore::ICFGenKbGelCacheTable* value );

		virtual cfcore::ICFGenKbGelCallTable* getTableGelCall();
		virtual void setTableGelCall( cfcore::ICFGenKbGelCallTable* value );

		virtual cfcore::ICFGenKbGelConstrainTable* getTableGelConstrain();
		virtual void setTableGelConstrain( cfcore::ICFGenKbGelConstrainTable* value );

		virtual cfcore::ICFGenKbGelCounterTable* getTableGelCounter();
		virtual void setTableGelCounter( cfcore::ICFGenKbGelCounterTable* value );

		virtual cfcore::ICFGenKbGelErrorTable* getTableGelError();
		virtual void setTableGelError( cfcore::ICFGenKbGelErrorTable* value );

		virtual cfcore::ICFGenKbGelExecutableTable* getTableGelExecutable();
		virtual void setTableGelExecutable( cfcore::ICFGenKbGelExecutableTable* value );

		virtual cfcore::ICFGenKbGelExpansionTable* getTableGelExpansion();
		virtual void setTableGelExpansion( cfcore::ICFGenKbGelExpansionTable* value );

		virtual cfcore::ICFGenKbGelInstructionTable* getTableGelInstruction();
		virtual void setTableGelInstruction( cfcore::ICFGenKbGelInstructionTable* value );

		virtual cfcore::ICFGenKbGelIteratorTable* getTableGelIterator();
		virtual void setTableGelIterator( cfcore::ICFGenKbGelIteratorTable* value );

		virtual cfcore::ICFGenKbGelModifierTable* getTableGelModifier();
		virtual void setTableGelModifier( cfcore::ICFGenKbGelModifierTable* value );

		virtual cfcore::ICFGenKbGelPopTable* getTableGelPop();
		virtual void setTableGelPop( cfcore::ICFGenKbGelPopTable* value );

		virtual cfcore::ICFGenKbGelPrefixLineTable* getTableGelPrefixLine();
		virtual void setTableGelPrefixLine( cfcore::ICFGenKbGelPrefixLineTable* value );

		virtual cfcore::ICFGenKbGelReferenceTable* getTableGelReference();
		virtual void setTableGelReference( cfcore::ICFGenKbGelReferenceTable* value );

		virtual cfcore::ICFGenKbGelSequenceTable* getTableGelSequence();
		virtual void setTableGelSequence( cfcore::ICFGenKbGelSequenceTable* value );

		virtual cfcore::ICFGenKbGelSpreadTable* getTableGelSpread();
		virtual void setTableGelSpread( cfcore::ICFGenKbGelSpreadTable* value );

		virtual cfcore::ICFGenKbGelSwitchTable* getTableGelSwitch();
		virtual void setTableGelSwitch( cfcore::ICFGenKbGelSwitchTable* value );

		virtual cfcore::ICFGenKbGelSwitchLimbTable* getTableGelSwitchLimb();
		virtual void setTableGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbTable* value );

		virtual cfcore::ICFGenKbGenBindTable* getTableGenBind();
		virtual void setTableGenBind( cfcore::ICFGenKbGenBindTable* value );

		virtual cfcore::ICFGenKbGenFileTable* getTableGenFile();
		virtual void setTableGenFile( cfcore::ICFGenKbGenFileTable* value );

		virtual cfcore::ICFGenKbGenItemTable* getTableGenItem();
		virtual void setTableGenItem( cfcore::ICFGenKbGenItemTable* value );

		virtual cfcore::ICFGenKbGenIteratorTable* getTableGenIterator();
		virtual void setTableGenIterator( cfcore::ICFGenKbGenIteratorTable* value );

		virtual cfcore::ICFGenKbGenReferenceTable* getTableGenReference();
		virtual void setTableGenReference( cfcore::ICFGenKbGenReferenceTable* value );

		virtual cfcore::ICFGenKbGenRuleTable* getTableGenRule();
		virtual void setTableGenRule( cfcore::ICFGenKbGenRuleTable* value );

		virtual cfcore::ICFGenKbGenTruncTable* getTableGenTrunc();
		virtual void setTableGenTrunc( cfcore::ICFGenKbGenTruncTable* value );

		virtual cfcore::ICFGenKbHostNodeTable* getTableHostNode();
		virtual void setTableHostNode( cfcore::ICFGenKbHostNodeTable* value );

		virtual cfcore::ICFGenKbRuleCartTable* getTableRuleCart();
		virtual void setTableRuleCart( cfcore::ICFGenKbRuleCartTable* value );

		virtual cfcore::ICFGenKbRuleTypeTable* getTableRuleType();
		virtual void setTableRuleType( cfcore::ICFGenKbRuleTypeTable* value );

		virtual cfcore::ICFGenKbSecAppTable* getTableSecApp();
		virtual void setTableSecApp( cfcore::ICFGenKbSecAppTable* value );

		virtual cfcore::ICFGenKbSecDeviceTable* getTableSecDevice();
		virtual void setTableSecDevice( cfcore::ICFGenKbSecDeviceTable* value );

		virtual cfcore::ICFGenKbSecFormTable* getTableSecForm();
		virtual void setTableSecForm( cfcore::ICFGenKbSecFormTable* value );

		virtual cfcore::ICFGenKbSecGroupTable* getTableSecGroup();
		virtual void setTableSecGroup( cfcore::ICFGenKbSecGroupTable* value );

		virtual cfcore::ICFGenKbSecGroupFormTable* getTableSecGroupForm();
		virtual void setTableSecGroupForm( cfcore::ICFGenKbSecGroupFormTable* value );

		virtual cfcore::ICFGenKbSecGrpIncTable* getTableSecGrpInc();
		virtual void setTableSecGrpInc( cfcore::ICFGenKbSecGrpIncTable* value );

		virtual cfcore::ICFGenKbSecGrpMembTable* getTableSecGrpMemb();
		virtual void setTableSecGrpMemb( cfcore::ICFGenKbSecGrpMembTable* value );

		virtual cfcore::ICFGenKbSecSessionTable* getTableSecSession();
		virtual void setTableSecSession( cfcore::ICFGenKbSecSessionTable* value );

		virtual cfcore::ICFGenKbSecUserTable* getTableSecUser();
		virtual void setTableSecUser( cfcore::ICFGenKbSecUserTable* value );

		virtual cfcore::ICFGenKbSysClusterTable* getTableSysCluster();
		virtual void setTableSysCluster( cfcore::ICFGenKbSysClusterTable* value );

		virtual cfcore::ICFGenKbTSecGroupTable* getTableTSecGroup();
		virtual void setTableTSecGroup( cfcore::ICFGenKbTSecGroupTable* value );

		virtual cfcore::ICFGenKbTSecGrpIncTable* getTableTSecGrpInc();
		virtual void setTableTSecGrpInc( cfcore::ICFGenKbTSecGrpIncTable* value );

		virtual cfcore::ICFGenKbTSecGrpMembTable* getTableTSecGrpMemb();
		virtual void setTableTSecGrpMemb( cfcore::ICFGenKbTSecGrpMembTable* value );

		virtual cfcore::ICFGenKbTenantTable* getTableTenant();
		virtual void setTableTenant( cfcore::ICFGenKbTenantTable* value );

		virtual cfcore::ICFGenKbToolTable* getTableTool();
		virtual void setTableTool( cfcore::ICFGenKbToolTable* value );

		virtual cfcore::ICFGenKbToolSetTable* getTableToolSet();
		virtual void setTableToolSet( cfcore::ICFGenKbToolSetTable* value );

		virtual bool isTransactionOpen() const;
		virtual bool beginTransaction();
		virtual void commit();
		virtual void rollback();

		virtual cfcore::ICFGenKbTablePerms* getTablePerms();
		virtual void setTablePerms( cfcore::ICFGenKbTablePerms* value );

		virtual void releasePreparedStatements();

		virtual const std::string* getDbSchemaName() const;
		virtual const std::string* getLowerDbSchemaName() const;
		virtual void setDbSchemaName( const std::string& argDbSchemaName );
	};
}
