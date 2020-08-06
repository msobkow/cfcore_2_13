// Description: C++18 Implementation of an in-memory RAM CFGenKb schema.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbSchemaObj.hpp>
#include <cfgenkbram/CFGenKbRamSchema.hpp>
#include <cfgenkbram/CFGenKbRamClusterTable.hpp>
#include <cfgenkbram/CFGenKbRamDefClassTable.hpp>
#include <cfgenkbram/CFGenKbRamGelBoilerplateTable.hpp>
#include <cfgenkbram/CFGenKbRamGelBuiltinTable.hpp>
#include <cfgenkbram/CFGenKbRamGelCacheTable.hpp>
#include <cfgenkbram/CFGenKbRamGelCallTable.hpp>
#include <cfgenkbram/CFGenKbRamGelConstrainTable.hpp>
#include <cfgenkbram/CFGenKbRamGelCounterTable.hpp>
#include <cfgenkbram/CFGenKbRamGelErrorTable.hpp>
#include <cfgenkbram/CFGenKbRamGelExecutableTable.hpp>
#include <cfgenkbram/CFGenKbRamGelExpansionTable.hpp>
#include <cfgenkbram/CFGenKbRamGelInstructionTable.hpp>
#include <cfgenkbram/CFGenKbRamGelIteratorTable.hpp>
#include <cfgenkbram/CFGenKbRamGelModifierTable.hpp>
#include <cfgenkbram/CFGenKbRamGelPopTable.hpp>
#include <cfgenkbram/CFGenKbRamGelPrefixLineTable.hpp>
#include <cfgenkbram/CFGenKbRamGelReferenceTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSequenceTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSpreadTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSwitchTable.hpp>
#include <cfgenkbram/CFGenKbRamGelSwitchLimbTable.hpp>
#include <cfgenkbram/CFGenKbRamGenBindTable.hpp>
#include <cfgenkbram/CFGenKbRamGenFileTable.hpp>
#include <cfgenkbram/CFGenKbRamGenItemTable.hpp>
#include <cfgenkbram/CFGenKbRamGenIteratorTable.hpp>
#include <cfgenkbram/CFGenKbRamGenReferenceTable.hpp>
#include <cfgenkbram/CFGenKbRamGenRuleTable.hpp>
#include <cfgenkbram/CFGenKbRamGenTruncTable.hpp>
#include <cfgenkbram/CFGenKbRamHostNodeTable.hpp>
#include <cfgenkbram/CFGenKbRamRuleCartTable.hpp>
#include <cfgenkbram/CFGenKbRamRuleTypeTable.hpp>
#include <cfgenkbram/CFGenKbRamSecAppTable.hpp>
#include <cfgenkbram/CFGenKbRamSecDeviceTable.hpp>
#include <cfgenkbram/CFGenKbRamSecFormTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGroupTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGroupFormTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGrpIncTable.hpp>
#include <cfgenkbram/CFGenKbRamSecGrpMembTable.hpp>
#include <cfgenkbram/CFGenKbRamSecSessionTable.hpp>
#include <cfgenkbram/CFGenKbRamSecUserTable.hpp>
#include <cfgenkbram/CFGenKbRamSysClusterTable.hpp>
#include <cfgenkbram/CFGenKbRamTSecGroupTable.hpp>
#include <cfgenkbram/CFGenKbRamTSecGrpIncTable.hpp>
#include <cfgenkbram/CFGenKbRamTSecGrpMembTable.hpp>
#include <cfgenkbram/CFGenKbRamTenantTable.hpp>
#include <cfgenkbram/CFGenKbRamToolTable.hpp>
#include <cfgenkbram/CFGenKbRamToolSetTable.hpp>

using namespace std;

namespace cfcore {

	const std::string CFGenKbRamSchema::CLASS_NAME( "CFGenKbRamSchema" );

	CFGenKbRamSchema::CFGenKbRamSchema()
	: cfcore::CFGenKbSchema(),
	  cfcore::ICFGenKbSchema()
	{
		sessConnected = false;
		tranOpen = false;
		nextDefClassIdGenValue = 1;
		nextRuleTypeIdGenValue = 1;
		nextToolIdGenValue = 1;
		nextToolSetIdGenValue = 1;
		nextClusterIdGenValue = 1L;
		nextTenantIdGenValue = 1L;
		tableCluster = new CFGenKbRamClusterTable( this );
		tableDefClass = new CFGenKbRamDefClassTable( this );
		tableGelBoilerplate = new CFGenKbRamGelBoilerplateTable( this );
		tableGelBuiltin = new CFGenKbRamGelBuiltinTable( this );
		tableGelCache = new CFGenKbRamGelCacheTable( this );
		tableGelCall = new CFGenKbRamGelCallTable( this );
		tableGelConstrain = new CFGenKbRamGelConstrainTable( this );
		tableGelCounter = new CFGenKbRamGelCounterTable( this );
		tableGelError = new CFGenKbRamGelErrorTable( this );
		tableGelExecutable = new CFGenKbRamGelExecutableTable( this );
		tableGelExpansion = new CFGenKbRamGelExpansionTable( this );
		tableGelInstruction = new CFGenKbRamGelInstructionTable( this );
		tableGelIterator = new CFGenKbRamGelIteratorTable( this );
		tableGelModifier = new CFGenKbRamGelModifierTable( this );
		tableGelPop = new CFGenKbRamGelPopTable( this );
		tableGelPrefixLine = new CFGenKbRamGelPrefixLineTable( this );
		tableGelReference = new CFGenKbRamGelReferenceTable( this );
		tableGelSequence = new CFGenKbRamGelSequenceTable( this );
		tableGelSpread = new CFGenKbRamGelSpreadTable( this );
		tableGelSwitch = new CFGenKbRamGelSwitchTable( this );
		tableGelSwitchLimb = new CFGenKbRamGelSwitchLimbTable( this );
		tableGenBind = new CFGenKbRamGenBindTable( this );
		tableGenFile = new CFGenKbRamGenFileTable( this );
		tableGenItem = new CFGenKbRamGenItemTable( this );
		tableGenIterator = new CFGenKbRamGenIteratorTable( this );
		tableGenReference = new CFGenKbRamGenReferenceTable( this );
		tableGenRule = new CFGenKbRamGenRuleTable( this );
		tableGenTrunc = new CFGenKbRamGenTruncTable( this );
		tableHostNode = new CFGenKbRamHostNodeTable( this );
		tableRuleCart = new CFGenKbRamRuleCartTable( this );
		tableRuleType = new CFGenKbRamRuleTypeTable( this );
		tableSecApp = new CFGenKbRamSecAppTable( this );
		tableSecDevice = new CFGenKbRamSecDeviceTable( this );
		tableSecForm = new CFGenKbRamSecFormTable( this );
		tableSecGroup = new CFGenKbRamSecGroupTable( this );
		tableSecGroupForm = new CFGenKbRamSecGroupFormTable( this );
		tableSecGrpInc = new CFGenKbRamSecGrpIncTable( this );
		tableSecGrpMemb = new CFGenKbRamSecGrpMembTable( this );
		tableSecSession = new CFGenKbRamSecSessionTable( this );
		tableSecUser = new CFGenKbRamSecUserTable( this );
		tableSysCluster = new CFGenKbRamSysClusterTable( this );
		tableTSecGroup = new CFGenKbRamTSecGroupTable( this );
		tableTSecGrpInc = new CFGenKbRamTSecGrpIncTable( this );
		tableTSecGrpMemb = new CFGenKbRamTSecGrpMembTable( this );
		tableTenant = new CFGenKbRamTenantTable( this );
		tableTool = new CFGenKbRamToolTable( this );
		tableToolSet = new CFGenKbRamToolSetTable( this );
	}

	CFGenKbRamSchema::~CFGenKbRamSchema() {
		tranOpen = false;
		sessConnected = false;
		if( tableCluster != NULL ) {
			delete tableCluster;
			tableCluster = NULL;
		}
		if( tableDefClass != NULL ) {
			delete tableDefClass;
			tableDefClass = NULL;
		}
		if( tableGelBoilerplate != NULL ) {
			delete tableGelBoilerplate;
			tableGelBoilerplate = NULL;
		}
		if( tableGelBuiltin != NULL ) {
			delete tableGelBuiltin;
			tableGelBuiltin = NULL;
		}
		if( tableGelCache != NULL ) {
			delete tableGelCache;
			tableGelCache = NULL;
		}
		if( tableGelCall != NULL ) {
			delete tableGelCall;
			tableGelCall = NULL;
		}
		if( tableGelConstrain != NULL ) {
			delete tableGelConstrain;
			tableGelConstrain = NULL;
		}
		if( tableGelCounter != NULL ) {
			delete tableGelCounter;
			tableGelCounter = NULL;
		}
		if( tableGelError != NULL ) {
			delete tableGelError;
			tableGelError = NULL;
		}
		if( tableGelExecutable != NULL ) {
			delete tableGelExecutable;
			tableGelExecutable = NULL;
		}
		if( tableGelExpansion != NULL ) {
			delete tableGelExpansion;
			tableGelExpansion = NULL;
		}
		if( tableGelInstruction != NULL ) {
			delete tableGelInstruction;
			tableGelInstruction = NULL;
		}
		if( tableGelIterator != NULL ) {
			delete tableGelIterator;
			tableGelIterator = NULL;
		}
		if( tableGelModifier != NULL ) {
			delete tableGelModifier;
			tableGelModifier = NULL;
		}
		if( tableGelPop != NULL ) {
			delete tableGelPop;
			tableGelPop = NULL;
		}
		if( tableGelPrefixLine != NULL ) {
			delete tableGelPrefixLine;
			tableGelPrefixLine = NULL;
		}
		if( tableGelReference != NULL ) {
			delete tableGelReference;
			tableGelReference = NULL;
		}
		if( tableGelSequence != NULL ) {
			delete tableGelSequence;
			tableGelSequence = NULL;
		}
		if( tableGelSpread != NULL ) {
			delete tableGelSpread;
			tableGelSpread = NULL;
		}
		if( tableGelSwitch != NULL ) {
			delete tableGelSwitch;
			tableGelSwitch = NULL;
		}
		if( tableGelSwitchLimb != NULL ) {
			delete tableGelSwitchLimb;
			tableGelSwitchLimb = NULL;
		}
		if( tableGenBind != NULL ) {
			delete tableGenBind;
			tableGenBind = NULL;
		}
		if( tableGenFile != NULL ) {
			delete tableGenFile;
			tableGenFile = NULL;
		}
		if( tableGenItem != NULL ) {
			delete tableGenItem;
			tableGenItem = NULL;
		}
		if( tableGenIterator != NULL ) {
			delete tableGenIterator;
			tableGenIterator = NULL;
		}
		if( tableGenReference != NULL ) {
			delete tableGenReference;
			tableGenReference = NULL;
		}
		if( tableGenRule != NULL ) {
			delete tableGenRule;
			tableGenRule = NULL;
		}
		if( tableGenTrunc != NULL ) {
			delete tableGenTrunc;
			tableGenTrunc = NULL;
		}
		if( tableHostNode != NULL ) {
			delete tableHostNode;
			tableHostNode = NULL;
		}
		if( tableRuleCart != NULL ) {
			delete tableRuleCart;
			tableRuleCart = NULL;
		}
		if( tableRuleType != NULL ) {
			delete tableRuleType;
			tableRuleType = NULL;
		}
		if( tableSecApp != NULL ) {
			delete tableSecApp;
			tableSecApp = NULL;
		}
		if( tableSecDevice != NULL ) {
			delete tableSecDevice;
			tableSecDevice = NULL;
		}
		if( tableSecForm != NULL ) {
			delete tableSecForm;
			tableSecForm = NULL;
		}
		if( tableSecGroup != NULL ) {
			delete tableSecGroup;
			tableSecGroup = NULL;
		}
		if( tableSecGroupForm != NULL ) {
			delete tableSecGroupForm;
			tableSecGroupForm = NULL;
		}
		if( tableSecGrpInc != NULL ) {
			delete tableSecGrpInc;
			tableSecGrpInc = NULL;
		}
		if( tableSecGrpMemb != NULL ) {
			delete tableSecGrpMemb;
			tableSecGrpMemb = NULL;
		}
		if( tableSecSession != NULL ) {
			delete tableSecSession;
			tableSecSession = NULL;
		}
		if( tableSecUser != NULL ) {
			delete tableSecUser;
			tableSecUser = NULL;
		}
		if( tableSysCluster != NULL ) {
			delete tableSysCluster;
			tableSysCluster = NULL;
		}
		if( tableTSecGroup != NULL ) {
			delete tableTSecGroup;
			tableTSecGroup = NULL;
		}
		if( tableTSecGrpInc != NULL ) {
			delete tableTSecGrpInc;
			tableTSecGrpInc = NULL;
		}
		if( tableTSecGrpMemb != NULL ) {
			delete tableTSecGrpMemb;
			tableTSecGrpMemb = NULL;
		}
		if( tableTenant != NULL ) {
			delete tableTenant;
			tableTenant = NULL;
		}
		if( tableTool != NULL ) {
			delete tableTool;
			tableTool = NULL;
		}
		if( tableToolSet != NULL ) {
			delete tableToolSet;
			tableToolSet = NULL;
		}
	}

	bool CFGenKbRamSchema::isConnected() {
		return( sessConnected );
	}

	bool CFGenKbRamSchema::connect() {
		if( sessConnected ) {
			return( false );
		}
		else {
			sessConnected = true;
			tranOpen = false;
			return( true );
		}
	}

	bool CFGenKbRamSchema::connect( const std::string& username, const std::string& password ) {
		static const std::string S_ProcName( "connect" );
		static const std::string S_UserName( "username" );
		static const std::string S_System( "system" );
		static const std::string S_MsgOnlySystem( "Only 'system' is authorized to use a RAM database" );
		if( username.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_UserName );
		}
		if( username != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystem );
		}
		if( sessConnected ) {
			return( false );
		}
		else {
			sessConnected = true;
			tranOpen = false;
			return( true );
		}
	}

	bool CFGenKbRamSchema::connect( const std::string& loginId, const std::string& password, const std::string& clusterName, const std::string& tenantName ) {
		static const std::string S_ProcName( "connect" );
		static const std::string S_LoginId( "loginId" );
		static const std::string S_ClusterName( "clusterName" );
		static const std::string S_TenantName( "tenantName" );
		static const std::string S_System( "system" );
		static const std::string S_MsgOnlySystemAuthorized( "Only 'system' is authorized to use a RAM database" );
		static const std::string S_MsgOnlySystemClusterAuthorized( "Only the 'system' Cluster is authorized to use a RAM database" );
		static const std::string S_MsgOnlySystemTenantAuthorized( "Only the 'system' Tenant is authorized to use a RAM database" );
		if( loginId.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				S_LoginId );
		}
		if( clusterName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				3,
				S_ClusterName );
		}
		if( tenantName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				4,
				S_TenantName );
		}
		if( loginId != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystemAuthorized );
		}
		if( clusterName != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystemClusterAuthorized );
		}
		if( tenantName != S_System ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				S_MsgOnlySystemTenantAuthorized );
		}
		if( sessConnected ) {
			return( false );
		}
		else {
			sessConnected = true;
			tranOpen = false;
			return( true );
		}
	}

	void CFGenKbRamSchema::disconnect( bool doCommit ) {
		tranOpen = false;
		sessConnected = false;
	}

	//	Transactions are not supported, so pretend there is always one open

	bool CFGenKbRamSchema::isTransactionOpen() {
		return( tranOpen );
	}

	bool CFGenKbRamSchema::beginTransaction() {
		if( tranOpen ) {
			return( false );
		}
		tranOpen = true;
		return( true );
	}

	void CFGenKbRamSchema::commit() {
		tranOpen = false;
	}

	void CFGenKbRamSchema::rollback() {
		tranOpen = false;
	}

	cfcore::ICFGenKbSchema* CFGenKbRamSchema::newSchema() {
		static const std::string S_ProcName( "newSchema" );
		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName );
	}

	int16_t CFGenKbRamSchema::nextDefClassIdGen() {
		int16_t next = nextDefClassIdGenValue++;
		return( next );
	}

	int16_t CFGenKbRamSchema::nextRuleTypeIdGen() {
		int16_t next = nextRuleTypeIdGenValue++;
		return( next );
	}

	int16_t CFGenKbRamSchema::nextToolIdGen() {
		int16_t next = nextToolIdGenValue++;
		return( next );
	}

	int16_t CFGenKbRamSchema::nextToolSetIdGen() {
		int16_t next = nextToolSetIdGenValue++;
		return( next );
	}

	int64_t CFGenKbRamSchema::nextClusterIdGen() {
		int64_t next = nextClusterIdGenValue++;
		return( next );
	}

	int64_t CFGenKbRamSchema::nextTenantIdGen() {
		int64_t next = nextTenantIdGenValue++;
		return( next );
	}

	void CFGenKbRamSchema::releasePreparedStatements() {
	}

}
