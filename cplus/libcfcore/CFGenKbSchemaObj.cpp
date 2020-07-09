// Description: C++18 Schema Object implementation for CFGenKb.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbSchemaObj.hpp>

#include <cfgenkbobj/CFGenKbClusterTableObj.hpp>
#include <cfgenkbobj/CFGenKbDefClassTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelCacheTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelIteratorTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelSpreadTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelPopTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelPrefixLineTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelReferenceTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelCallTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelExecutableTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelBoilerplateTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelErrorTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelBuiltinTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelConstrainTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelCounterTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelExpansionTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelModifierTableObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchLimbTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenIteratorTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenReferenceTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenTruncTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenFileTableObj.hpp>
#include <cfgenkbobj/CFGenKbGenBindTableObj.hpp>
#include <cfgenkbobj/CFGenKbHostNodeTableObj.hpp>
#include <cfgenkbobj/CFGenKbRuleCartTableObj.hpp>
#include <cfgenkbobj/CFGenKbRuleTypeTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecAppTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecDeviceTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecFormTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupFormTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpIncTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpMembTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecSessionTableObj.hpp>
#include <cfgenkbobj/CFGenKbSecUserTableObj.hpp>
#include <cfgenkbobj/CFGenKbSysClusterTableObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGroupTableObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpIncTableObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpMembTableObj.hpp>
#include <cfgenkbobj/CFGenKbTenantTableObj.hpp>
#include <cfgenkbobj/CFGenKbToolTableObj.hpp>
#include <cfgenkbobj/CFGenKbToolSetTableObj.hpp>

namespace cfcore {
	const std::string CFGenKbSchemaObj::CLASS_NAME( "CFGenKbSchemaObj" );
	const std::string CFGenKbSchemaObj::SCHEMA_NAME( "CFGenKb" );
	const std::string CFGenKbSchemaObj::SCHEMA_DBNAME( "genkb213" );
	const std::string CFGenKbSchemaObj::S_System( "system" );

	CFGenKbSchemaObj::CFGenKbSchemaObj() {
		authorization = NULL;
		backingStore = NULL;
		secClusterName = new std::string( S_System );
		secTenantName = new std::string( S_System );
		secUserName = new std::string( S_System );
		secCluster = NULL;
		secClusterId = 0L;
		secTenant = NULL;
		secTenantId = 0L;
		secUser = NULL;
		for( int i = 0; i < 16; i++ ) {
			secSessionUserId[i] = 0;
		}
		secSession = NULL;
		for( int i = 0; i < 16; i++ ) {
			secSessionSessionId[i] = 0;
		}
		schemaDbName = new std::string( SCHEMA_DBNAME );
		lowerDbSchemaName = new std::string( SCHEMA_DBNAME );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );
		clusterTableObj = new CFGenKbClusterTableObj( this );
		defClassTableObj = new CFGenKbDefClassTableObj( this );
		gelCacheTableObj = new CFGenKbGelCacheTableObj( this );
		gelInstructionTableObj = new CFGenKbGelInstructionTableObj( this );
		gelIteratorTableObj = new CFGenKbGelIteratorTableObj( this );
		gelSpreadTableObj = new CFGenKbGelSpreadTableObj( this );
		gelPopTableObj = new CFGenKbGelPopTableObj( this );
		gelPrefixLineTableObj = new CFGenKbGelPrefixLineTableObj( this );
		gelReferenceTableObj = new CFGenKbGelReferenceTableObj( this );
		gelCallTableObj = new CFGenKbGelCallTableObj( this );
		gelSequenceTableObj = new CFGenKbGelSequenceTableObj( this );
		gelExecutableTableObj = new CFGenKbGelExecutableTableObj( this );
		gelSwitchTableObj = new CFGenKbGelSwitchTableObj( this );
		gelBoilerplateTableObj = new CFGenKbGelBoilerplateTableObj( this );
		gelErrorTableObj = new CFGenKbGelErrorTableObj( this );
		gelBuiltinTableObj = new CFGenKbGelBuiltinTableObj( this );
		gelConstrainTableObj = new CFGenKbGelConstrainTableObj( this );
		gelCounterTableObj = new CFGenKbGelCounterTableObj( this );
		gelExpansionTableObj = new CFGenKbGelExpansionTableObj( this );
		gelModifierTableObj = new CFGenKbGelModifierTableObj( this );
		gelSwitchLimbTableObj = new CFGenKbGelSwitchLimbTableObj( this );
		genItemTableObj = new CFGenKbGenItemTableObj( this );
		genIteratorTableObj = new CFGenKbGenIteratorTableObj( this );
		genReferenceTableObj = new CFGenKbGenReferenceTableObj( this );
		genRuleTableObj = new CFGenKbGenRuleTableObj( this );
		genTruncTableObj = new CFGenKbGenTruncTableObj( this );
		genFileTableObj = new CFGenKbGenFileTableObj( this );
		genBindTableObj = new CFGenKbGenBindTableObj( this );
		hostNodeTableObj = new CFGenKbHostNodeTableObj( this );
		ruleCartTableObj = new CFGenKbRuleCartTableObj( this );
		ruleTypeTableObj = new CFGenKbRuleTypeTableObj( this );
		secAppTableObj = new CFGenKbSecAppTableObj( this );
		secDeviceTableObj = new CFGenKbSecDeviceTableObj( this );
		secFormTableObj = new CFGenKbSecFormTableObj( this );
		secGroupTableObj = new CFGenKbSecGroupTableObj( this );
		secGroupFormTableObj = new CFGenKbSecGroupFormTableObj( this );
		secGrpIncTableObj = new CFGenKbSecGrpIncTableObj( this );
		secGrpMembTableObj = new CFGenKbSecGrpMembTableObj( this );
		secSessionTableObj = new CFGenKbSecSessionTableObj( this );
		secUserTableObj = new CFGenKbSecUserTableObj( this );
		sysClusterTableObj = new CFGenKbSysClusterTableObj( this );
		tSecGroupTableObj = new CFGenKbTSecGroupTableObj( this );
		tSecGrpIncTableObj = new CFGenKbTSecGrpIncTableObj( this );
		tSecGrpMembTableObj = new CFGenKbTSecGrpMembTableObj( this );
		tenantTableObj = new CFGenKbTenantTableObj( this );
		toolTableObj = new CFGenKbToolTableObj( this );
		toolSetTableObj = new CFGenKbToolSetTableObj( this );
	}

	CFGenKbSchemaObj::~CFGenKbSchemaObj() {
		authorization = NULL;
		backingStore = NULL;
		if( secClusterName != NULL ) {
			delete secClusterName;
			secClusterName = NULL;
		}
		if( secTenantName != NULL ) {
			delete secTenantName;
			secTenantName = NULL;
		}
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		secCluster = NULL;
		secClusterId = 0L;
		secTenant = NULL;
		secTenantId = 0L;
		secUser = NULL;
		for( int i = 0; i < 16; i++ ) {
			secSessionUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			secSessionSessionId[i] = 0;
		}
		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		if( lowerDbSchemaName != NULL ) {
			delete lowerDbSchemaName;
			lowerDbSchemaName = NULL;
		}

		if( clusterTableObj != NULL ) {
			clusterTableObj->minimizeMemory();
		}

		if( clusterTableObj != NULL ) {
			delete clusterTableObj;
			clusterTableObj = NULL;
		}

		if( defClassTableObj != NULL ) {
			defClassTableObj->minimizeMemory();
		}

		if( defClassTableObj != NULL ) {
			delete defClassTableObj;
			defClassTableObj = NULL;
		}

		if( gelCacheTableObj != NULL ) {
			gelCacheTableObj->minimizeMemory();
		}

		if( gelCacheTableObj != NULL ) {
			delete gelCacheTableObj;
			gelCacheTableObj = NULL;
		}

		if( gelIteratorTableObj != NULL ) {
			gelIteratorTableObj->minimizeMemory();
		}
		if( gelSpreadTableObj != NULL ) {
			gelSpreadTableObj->minimizeMemory();
		}
		if( gelPopTableObj != NULL ) {
			gelPopTableObj->minimizeMemory();
		}
		if( gelPrefixLineTableObj != NULL ) {
			gelPrefixLineTableObj->minimizeMemory();
		}
		if( gelReferenceTableObj != NULL ) {
			gelReferenceTableObj->minimizeMemory();
		}
		if( gelCallTableObj != NULL ) {
			gelCallTableObj->minimizeMemory();
		}
		if( gelExecutableTableObj != NULL ) {
			gelExecutableTableObj->minimizeMemory();
		}
		if( gelSequenceTableObj != NULL ) {
			gelSequenceTableObj->minimizeMemory();
		}
		if( gelSwitchTableObj != NULL ) {
			gelSwitchTableObj->minimizeMemory();
		}
		if( gelErrorTableObj != NULL ) {
			gelErrorTableObj->minimizeMemory();
		}
		if( gelBoilerplateTableObj != NULL ) {
			gelBoilerplateTableObj->minimizeMemory();
		}
		if( gelBuiltinTableObj != NULL ) {
			gelBuiltinTableObj->minimizeMemory();
		}
		if( gelConstrainTableObj != NULL ) {
			gelConstrainTableObj->minimizeMemory();
		}
		if( gelCounterTableObj != NULL ) {
			gelCounterTableObj->minimizeMemory();
		}
		if( gelExpansionTableObj != NULL ) {
			gelExpansionTableObj->minimizeMemory();
		}
		if( gelModifierTableObj != NULL ) {
			gelModifierTableObj->minimizeMemory();
		}
		if( gelInstructionTableObj != NULL ) {
			gelInstructionTableObj->minimizeMemory();
		}

		if( gelIteratorTableObj != NULL ) {
			delete gelIteratorTableObj;
			gelIteratorTableObj = NULL;
		}
		if( gelSpreadTableObj != NULL ) {
			delete gelSpreadTableObj;
			gelSpreadTableObj = NULL;
		}
		if( gelPopTableObj != NULL ) {
			delete gelPopTableObj;
			gelPopTableObj = NULL;
		}
		if( gelPrefixLineTableObj != NULL ) {
			delete gelPrefixLineTableObj;
			gelPrefixLineTableObj = NULL;
		}
		if( gelReferenceTableObj != NULL ) {
			delete gelReferenceTableObj;
			gelReferenceTableObj = NULL;
		}
		if( gelCallTableObj != NULL ) {
			delete gelCallTableObj;
			gelCallTableObj = NULL;
		}
		if( gelExecutableTableObj != NULL ) {
			delete gelExecutableTableObj;
			gelExecutableTableObj = NULL;
		}
		if( gelSequenceTableObj != NULL ) {
			delete gelSequenceTableObj;
			gelSequenceTableObj = NULL;
		}
		if( gelSwitchTableObj != NULL ) {
			delete gelSwitchTableObj;
			gelSwitchTableObj = NULL;
		}
		if( gelErrorTableObj != NULL ) {
			delete gelErrorTableObj;
			gelErrorTableObj = NULL;
		}
		if( gelBoilerplateTableObj != NULL ) {
			delete gelBoilerplateTableObj;
			gelBoilerplateTableObj = NULL;
		}
		if( gelBuiltinTableObj != NULL ) {
			delete gelBuiltinTableObj;
			gelBuiltinTableObj = NULL;
		}
		if( gelConstrainTableObj != NULL ) {
			delete gelConstrainTableObj;
			gelConstrainTableObj = NULL;
		}
		if( gelCounterTableObj != NULL ) {
			delete gelCounterTableObj;
			gelCounterTableObj = NULL;
		}
		if( gelExpansionTableObj != NULL ) {
			delete gelExpansionTableObj;
			gelExpansionTableObj = NULL;
		}
		if( gelModifierTableObj != NULL ) {
			delete gelModifierTableObj;
			gelModifierTableObj = NULL;
		}
		if( gelInstructionTableObj != NULL ) {
			delete gelInstructionTableObj;
			gelInstructionTableObj = NULL;
		}

		if( gelSwitchLimbTableObj != NULL ) {
			gelSwitchLimbTableObj->minimizeMemory();
		}

		if( gelSwitchLimbTableObj != NULL ) {
			delete gelSwitchLimbTableObj;
			gelSwitchLimbTableObj = NULL;
		}

		if( genIteratorTableObj != NULL ) {
			genIteratorTableObj->minimizeMemory();
		}
		if( genReferenceTableObj != NULL ) {
			genReferenceTableObj->minimizeMemory();
		}
		if( genTruncTableObj != NULL ) {
			genTruncTableObj->minimizeMemory();
		}
		if( genFileTableObj != NULL ) {
			genFileTableObj->minimizeMemory();
		}
		if( genRuleTableObj != NULL ) {
			genRuleTableObj->minimizeMemory();
		}
		if( genBindTableObj != NULL ) {
			genBindTableObj->minimizeMemory();
		}
		if( genItemTableObj != NULL ) {
			genItemTableObj->minimizeMemory();
		}

		if( genIteratorTableObj != NULL ) {
			delete genIteratorTableObj;
			genIteratorTableObj = NULL;
		}
		if( genReferenceTableObj != NULL ) {
			delete genReferenceTableObj;
			genReferenceTableObj = NULL;
		}
		if( genTruncTableObj != NULL ) {
			delete genTruncTableObj;
			genTruncTableObj = NULL;
		}
		if( genFileTableObj != NULL ) {
			delete genFileTableObj;
			genFileTableObj = NULL;
		}
		if( genRuleTableObj != NULL ) {
			delete genRuleTableObj;
			genRuleTableObj = NULL;
		}
		if( genBindTableObj != NULL ) {
			delete genBindTableObj;
			genBindTableObj = NULL;
		}
		if( genItemTableObj != NULL ) {
			delete genItemTableObj;
			genItemTableObj = NULL;
		}

		if( hostNodeTableObj != NULL ) {
			hostNodeTableObj->minimizeMemory();
		}

		if( hostNodeTableObj != NULL ) {
			delete hostNodeTableObj;
			hostNodeTableObj = NULL;
		}

		if( ruleCartTableObj != NULL ) {
			ruleCartTableObj->minimizeMemory();
		}

		if( ruleCartTableObj != NULL ) {
			delete ruleCartTableObj;
			ruleCartTableObj = NULL;
		}

		if( ruleTypeTableObj != NULL ) {
			ruleTypeTableObj->minimizeMemory();
		}

		if( ruleTypeTableObj != NULL ) {
			delete ruleTypeTableObj;
			ruleTypeTableObj = NULL;
		}

		if( secAppTableObj != NULL ) {
			secAppTableObj->minimizeMemory();
		}

		if( secAppTableObj != NULL ) {
			delete secAppTableObj;
			secAppTableObj = NULL;
		}

		if( secDeviceTableObj != NULL ) {
			secDeviceTableObj->minimizeMemory();
		}

		if( secDeviceTableObj != NULL ) {
			delete secDeviceTableObj;
			secDeviceTableObj = NULL;
		}

		if( secFormTableObj != NULL ) {
			secFormTableObj->minimizeMemory();
		}

		if( secFormTableObj != NULL ) {
			delete secFormTableObj;
			secFormTableObj = NULL;
		}

		if( secGroupTableObj != NULL ) {
			secGroupTableObj->minimizeMemory();
		}

		if( secGroupTableObj != NULL ) {
			delete secGroupTableObj;
			secGroupTableObj = NULL;
		}

		if( secGroupFormTableObj != NULL ) {
			secGroupFormTableObj->minimizeMemory();
		}

		if( secGroupFormTableObj != NULL ) {
			delete secGroupFormTableObj;
			secGroupFormTableObj = NULL;
		}

		if( secGrpIncTableObj != NULL ) {
			secGrpIncTableObj->minimizeMemory();
		}

		if( secGrpIncTableObj != NULL ) {
			delete secGrpIncTableObj;
			secGrpIncTableObj = NULL;
		}

		if( secGrpMembTableObj != NULL ) {
			secGrpMembTableObj->minimizeMemory();
		}

		if( secGrpMembTableObj != NULL ) {
			delete secGrpMembTableObj;
			secGrpMembTableObj = NULL;
		}

		if( secSessionTableObj != NULL ) {
			secSessionTableObj->minimizeMemory();
		}

		if( secSessionTableObj != NULL ) {
			delete secSessionTableObj;
			secSessionTableObj = NULL;
		}

		if( secUserTableObj != NULL ) {
			secUserTableObj->minimizeMemory();
		}

		if( secUserTableObj != NULL ) {
			delete secUserTableObj;
			secUserTableObj = NULL;
		}

		if( sysClusterTableObj != NULL ) {
			sysClusterTableObj->minimizeMemory();
		}

		if( sysClusterTableObj != NULL ) {
			delete sysClusterTableObj;
			sysClusterTableObj = NULL;
		}

		if( tSecGroupTableObj != NULL ) {
			tSecGroupTableObj->minimizeMemory();
		}

		if( tSecGroupTableObj != NULL ) {
			delete tSecGroupTableObj;
			tSecGroupTableObj = NULL;
		}

		if( tSecGrpIncTableObj != NULL ) {
			tSecGrpIncTableObj->minimizeMemory();
		}

		if( tSecGrpIncTableObj != NULL ) {
			delete tSecGrpIncTableObj;
			tSecGrpIncTableObj = NULL;
		}

		if( tSecGrpMembTableObj != NULL ) {
			tSecGrpMembTableObj->minimizeMemory();
		}

		if( tSecGrpMembTableObj != NULL ) {
			delete tSecGrpMembTableObj;
			tSecGrpMembTableObj = NULL;
		}

		if( tenantTableObj != NULL ) {
			tenantTableObj->minimizeMemory();
		}

		if( tenantTableObj != NULL ) {
			delete tenantTableObj;
			tenantTableObj = NULL;
		}

		if( toolTableObj != NULL ) {
			toolTableObj->minimizeMemory();
		}

		if( toolTableObj != NULL ) {
			delete toolTableObj;
			toolTableObj = NULL;
		}

		if( toolSetTableObj != NULL ) {
			toolSetTableObj->minimizeMemory();
		}

		if( toolSetTableObj != NULL ) {
			delete toolSetTableObj;
			toolSetTableObj = NULL;
		}
	}

	void CFGenKbSchemaObj::setSecClusterName( const std::string& value ) {
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				"setClusterName",
				1,
				"value" );
		}
		if( secClusterName != NULL ) {
			delete secClusterName;
			secClusterName = NULL;
		}
		secClusterName = new std::string( value );
		secCluster = NULL;
	}

	std::string CFGenKbSchemaObj::getSecClusterName() {
		std::string retval( *secClusterName );
		return( retval );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSchemaObj::getSecCluster() {
		if( secCluster == NULL ) {
			if( authorization != NULL ) {
				secCluster = getClusterTableObj()->readClusterByIdIdx( authorization->getSecClusterId() );
			}
			else {
				secCluster = getClusterTableObj()->readClusterByUDomNameIdx( *secClusterName );
				if( ( secCluster == NULL ) && ( secClusterId > 0 ) ) {
					secCluster = getClusterTableObj()->readClusterByIdIdx( secClusterId );
				}
			}
			if( secCluster != NULL ) {
				if( secClusterName != NULL ) {
					delete secClusterName;
					secClusterName = NULL;
				}
				secClusterName = new std::string( secCluster->getRequiredFullDomName() );
				secClusterId = secCluster->getRequiredId();
				if( authorization != NULL ) {
					authorization->setSecCluster( *secCluster );
				}
			}
		}
		return( secCluster );
	}

	void CFGenKbSchemaObj::setSecCluster( cfcore::ICFGenKbClusterObj* value ) {
		secCluster = value;
		if( secCluster == NULL ) {
			return;
		}
		secClusterId = secCluster->getRequiredId();
		if( secClusterName != NULL ) {
			delete secClusterName;
			secClusterName = NULL;
		}
		secClusterName = new std::string( secCluster->getRequiredFullDomName() );
		if( authorization != NULL ) {
			authorization->setSecCluster( *secCluster );
		}
	}

	long CFGenKbSchemaObj::getSecClusterId() {
		return( secClusterId );
	}

	void CFGenKbSchemaObj::setSecTenantName( const std::string& value ) {
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				"setTenantName",
				1,
				"value" );
		}
		if( secTenantName != NULL ) {
			delete secTenantName;
			secTenantName = NULL;
		}
		secTenantName = new std::string( value );
		secTenant = NULL;
	}

	std::string CFGenKbSchemaObj::getSecTenantName() {
		std::string retval( *secTenantName );
		return( retval );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbSchemaObj::getSecTenant() {
		if( secTenant == NULL ) {
			if( authorization != NULL ) {
				secTenant = getTenantTableObj()->readTenantByIdIdx( authorization->getSecTenantId() );
			}
			else {
				secTenant = getTenantTableObj()->readTenantByUNameIdx( getSecCluster()->getRequiredId(), *secTenantName );
				if( ( secTenant == NULL ) && ( secTenantId > 0 ) ) {
					secTenant = getTenantTableObj()->readTenantByIdIdx( secTenantId );
				}
			}
			if( secTenant != NULL ) {
				if( secTenantName != NULL ) {
					delete secTenantName;
					secTenantName = NULL;
				}
				secTenantName = new std::string( secTenant->getRequiredTenantName() );
				secTenantId = secTenant->getRequiredId();
				if( authorization != NULL ) {
					authorization->setSecTenant( *secTenant );
				}
			}
		}
		return( secTenant );
	}

	void CFGenKbSchemaObj::setSecTenant( cfcore::ICFGenKbTenantObj* value ) {
		secTenant = value;
		if( secTenant == NULL ) {
			return;
		}
		secTenantId = secTenant->getRequiredId();
		if( secTenantName != NULL ) {
			delete secTenantName;
			secTenantName = NULL;
		}
		secTenantName = new std::string( secTenant->getRequiredTenantName() );
		if( authorization != NULL ) {
			authorization->setSecTenant( *secTenant );
		}
	}

	long CFGenKbSchemaObj::getSecTenantId() {
		return( secTenantId );
	}

	void CFGenKbSchemaObj::setSecUserName( const std::string& value ) {
		if( value.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				"setUserName",
				1,
				"value" );
		}
		if( secUserName != NULL ) {
			delete secUserName;
			secUserName = NULL;
		}
		secUserName = new std::string( value );
		secUser = NULL;
	}

	std::string CFGenKbSchemaObj::getSecUserName() {
		std::string retval( *secUserName );
		return( retval );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSchemaObj::getSecUser() {
		if( secUser == NULL ) {
			if( authorization != NULL ) {
				secUser = getSecUserTableObj()->readSecUserByIdIdx( authorization->getSecUserId() );
			}
			else {
				secUser = getSecUserTableObj()->readSecUserByULoginIdx( *secUserName );
				if( ( secUser == NULL ) &&
					( ( secSessionUserId[0] != 0 ) || ( secSessionUserId[1] != 0 )
						|| ( secSessionUserId[2] != 0 ) || ( secSessionUserId[3] != 0 )
						|| ( secSessionUserId[4] != 0 ) || ( secSessionUserId[5] != 0 )
						|| ( secSessionUserId[6] != 0 ) || ( secSessionUserId[7] != 0 )
						|| ( secSessionUserId[8] != 0 ) || ( secSessionUserId[9] != 0 )
						|| ( secSessionUserId[10] != 0 ) || ( secSessionUserId[11] != 0 )
						|| ( secSessionUserId[12] != 0 ) || ( secSessionUserId[13] != 0 )
						|| ( secSessionUserId[14] != 0 ) || ( secSessionUserId[15] != 0 ) ) )
				{
					secUser = getSecUserTableObj()->readSecUserByIdIdx( secSessionUserId );
				}
			}
			if( secUser != NULL ) {
				if( secUserName != NULL ) {
					delete secUserName;
					secUserName = NULL;
				}
				secUserName = new std::string( secUser->getRequiredLoginId() );
				uuid_copy( secSessionUserId, secUser->getRequiredSecUserId() );
			}
		}
		return( secUser );
	}

	void CFGenKbSchemaObj::setSecUser( cfcore::ICFGenKbSecUserObj* value ) {
		secUser = value;
		if( secUser != NULL ) {
			if( secUserName != NULL ) {
				delete secUserName;
				secUserName = NULL;
			}
			secUserName = new std::string( secUser->getRequiredLoginId() );
			uuid_copy( secSessionUserId, secUser->getRequiredSecUserId() );
		}
	}
	cfcore::ICFGenKbSecSessionObj* CFGenKbSchemaObj::getSecSession() {
		if( secSession == NULL ) {
			if( authorization != NULL ) {
				secSession = getSecSessionTableObj()->readSecSessionByIdIdx( authorization->getSecSessionId() );
			}
			else if( ( secSessionSessionId[0] != 0 )
				|| ( secSessionSessionId[1] != 0 )
				|| ( secSessionSessionId[2] != 0 )
				|| ( secSessionSessionId[3] != 0 )
				|| ( secSessionSessionId[4] != 0 )
				|| ( secSessionSessionId[5] != 0 )
				|| ( secSessionSessionId[6] != 0 )
				|| ( secSessionSessionId[7] != 0 )
				|| ( secSessionSessionId[8] != 0 )
				|| ( secSessionSessionId[9] != 0 )
				|| ( secSessionSessionId[10] != 0 )
				|| ( secSessionSessionId[11] != 0 )
				|| ( secSessionSessionId[12] != 0 )
				|| ( secSessionSessionId[13] != 0 )
				|| ( secSessionSessionId[14] != 0 )
				|| ( secSessionSessionId[15] != 0 ) )
			{
				secSession = getSecSessionTableObj()->readSecSessionByIdIdx( secSessionSessionId );
			}
			if( secSession != NULL ) {
				uuid_copy( secSessionSessionId, secSession->getRequiredSecSessionId() );
				uuid_copy( secSessionUserId, secSession->getRequiredSecUserId() );
			}
		}
		return( secSession );
	}

	void CFGenKbSchemaObj::setSecSession( cfcore::ICFGenKbSecSessionObj* value ) {
		secSession = value;
		if( secSession == NULL ) {
			return;
		}
		uuid_copy( secSessionSessionId, secSession->getRequiredSecSessionId() );
		uuid_copy( secSessionUserId, secSession->getRequiredSecUserId() );
		if( authorization != NULL ) {
			authorization->setSecSession( secSession );
		}
	}

	void CFGenKbSchemaObj::setSecSessionId( const uuid_ptr_t value ) {
		uuid_copy( secSessionSessionId, value );
	}

	uuid_ptr_t CFGenKbSchemaObj::getSecSessionSessionId() {
		return( secSessionSessionId );
	}

	uuid_ptr_t CFGenKbSchemaObj::getSecSessionUserId() {
		return( secSessionUserId );
	}

	std::string CFGenKbSchemaObj::getDbSchemaName() {
		std::string retval( *schemaDbName );
		return( retval );
	}

	std::string CFGenKbSchemaObj::getLowerDbSchemaName() {
		std::string retval( *lowerDbSchemaName );
		return( retval );
	}

	void CFGenKbSchemaObj::setDbSchemaName( const std::string& argDbSchemaName ) {
		static const std::string S_ProcName = "setDbSchemaName";

		rollback();

		if( argDbSchemaName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				"argDbSchemaName" );
		}

		if( backingStore != NULL ) {
			backingStore->setDbSchemaName( argDbSchemaName );
		}

		if( schemaDbName != NULL ) {
			delete schemaDbName;
			schemaDbName = NULL;
		}
		schemaDbName = new std::string( argDbSchemaName );
		lowerDbSchemaName = new std::string( argDbSchemaName );
		std::transform( lowerDbSchemaName->begin(), lowerDbSchemaName->end(), lowerDbSchemaName->begin(), ::tolower );

		releasePreparedStatements();
	}

	/**
	 *	Release any prepared statements acquired by this connection.
	 *	<p>
	 *	Resets the prepared statements so they can acquire the new value of
	 *	<tt>setDbSchemaName()</tt>.
	 */
	void CFGenKbSchemaObj::releasePreparedStatements() {
	}
	cfcore::CFGenKbAuthorization* CFGenKbSchemaObj::getAuthorization() const {
		return( authorization );
	}

	void CFGenKbSchemaObj::setAuthorization( cfcore::CFGenKbAuthorization* value ) {
		authorization = value;
	}

	cfcore::ICFGenKbSchema* CFGenKbSchemaObj::getBackingStore() {
		return( backingStore );
	}

	void CFGenKbSchemaObj::setBackingStore( cfcore::ICFGenKbSchema* value ) {
		backingStore = value;
	}

	std::string CFGenKbSchemaObj::getSchemaName() {
		return( SCHEMA_NAME );
	}

	bool CFGenKbSchemaObj::isConnected() {
		if( backingStore == NULL ) {
			return( false );
		}
		else {
			return( backingStore->isConnected() );
		}
	}

	bool CFGenKbSchemaObj::connect() {
		return( backingStore->connect() );
	}

	bool CFGenKbSchemaObj::connect( const std::string& username, const std::string& password ) {
		return( backingStore->connect( username, password ) );
	}

	bool CFGenKbSchemaObj::connect( const std::string& clusterName, const std::string& tenantName, const std::string& secUserName, const std::string& password ) {
		static const std::string S_ProcName = "connect-full";
		if( clusterName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				1,
				"clusterName" );
		}
		if( tenantName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				2,
				"tenantName" );
		}
		if( secUserName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				3,
				"secUserName" );
		}
		if( password.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME,
				S_ProcName,
				5,
				"password" );
		}
		if( ! backingStore->connect( secUserName, password, clusterName, tenantName ) ) {
			authorization = NULL;
			return( false );
		}
		if( authorization != NULL ) {
			// The login was established as an XMsg client, which automatically sets the Authorization
			// information based on the return message.  You only need to do the remaining SecSession
			// and authorization creation if you're using a direct client-server model instead of
			// an XMsg client-server model.
			setSecClusterName( clusterName );
			setSecTenantName( tenantName );
			setSecUserName( secUserName );
			return( true );
		}

		if( ( clusterName == S_System )
		 && ( tenantName == S_System )
		 && ( secUserName == S_System ) )
		{
			if( secCluster == NULL ) {
				secCluster = getClusterTableObj()->newInstance();
				cfcore::ICFGenKbClusterEditObj* editCluster = secCluster->getEdit();
				if( editCluster == NULL ) {
					editCluster = secCluster->beginEdit();
					editCluster->setRequiredDescription( S_System );
					editCluster->setRequiredFullDomName( S_System );
					secCluster = editCluster->create();
					editCluster = NULL;
				}
			}
			if( secTenant == NULL ) {
				secTenant = getTenantTableObj()->newInstance();
				cfcore::ICFGenKbTenantEditObj* editTenant = secTenant->getEdit();
				if( editTenant == NULL ) {
					editTenant = secTenant->beginEdit();
					editTenant->setRequiredContainerCluster( secCluster);
					editTenant->setRequiredTenantName( S_System );
					secTenant = editTenant->create();
					editTenant = NULL;
				}
			}
			if( secUser == NULL ) {
				secUser = getSecUserTableObj()->newInstance();
				cfcore::ICFGenKbSecUserEditObj* editSecUser = secUser->getEdit();
				if( editSecUser == NULL ) {
					editSecUser = secUser->beginEdit();
					editSecUser->setRequiredEMailAddress( S_System );
					editSecUser->setRequiredLoginId( S_System );
					secUser = editSecUser->create();
					editSecUser = NULL;
				}
			}
			setSecClusterName( clusterName );
			setSecTenantName( tenantName );
			setSecUserName( secUserName );
			secCluster = NULL;
			secTenant = NULL;
			secUser = NULL;
			secSession = NULL;
			cfcore::ICFGenKbClusterObj* cluster = getSecCluster();
			cfcore::ICFGenKbTenantObj* tenant = getSecTenant();
			cfcore::ICFGenKbSecUserObj* user = getSecUser();
			cfcore::ICFGenKbSecSessionObj* session;
			if( ( cluster != NULL ) && ( tenant != NULL ) && ( user != NULL ) ) {
				session = getSecSessionTableObj()->newInstance();
				cfcore::ICFGenKbSecSessionEditObj* sessionEdit = session->beginEdit();
				sessionEdit->setRequiredContainerSecUser( user );
				std::chrono::system_clock::time_point timestamp = cflib::CFLib::getUTCTimestampInstance();
				sessionEdit->setRequiredStart( timestamp );
				sessionEdit->setOptionalFinishNull();
				session = sessionEdit->create();
				sessionEdit = NULL;
				setSecSession( session );
			}
			else {
				session = NULL;
			}
			if( ( cluster == NULL ) || ( tenant == NULL ) || ( user == NULL ) || ( session == NULL ) ) {
				disconnect( false );
				authorization = NULL;
				throw cflib::CFLibRuntimeException( CLASS_NAME,
					S_ProcName,
					"Could not resolve cluster name, tenant name, user name, or session.  Login cancelled" );
			}
			if( authorization == NULL ) {
				authorization = new cfcore::CFGenKbAuthorization();
			}
			authorization->setSecCluster( *cluster );
			authorization->setSecTenant( *tenant );
			authorization->setSecSession( session );
			return( true );
		}
		setSecClusterName( clusterName );
		setSecTenantName( tenantName );
		setSecUserName( secUserName );
		bool transactionStarted = beginTransaction();
		secCluster = NULL;
		secTenant = NULL;
		secUser = NULL;
		secSession = NULL;
		cfcore::ICFGenKbClusterObj* cluster = getSecCluster();
		cfcore::ICFGenKbTenantObj* tenant = getSecTenant();
		cfcore::ICFGenKbSecUserObj* user = getSecUser();
		cfcore::ICFGenKbSecSessionObj* session;
		if( ( cluster != NULL ) && ( tenant != NULL ) && ( user != NULL ) ) {
			session = getSecSessionTableObj()->newInstance();
			cfcore::ICFGenKbSecSessionEditObj* sessionEdit = session->beginEdit();
			sessionEdit->setRequiredContainerSecUser( user );
			std::chrono::system_clock::time_point timestamp = cflib::CFLib::getUTCTimestampInstance();
			sessionEdit->setRequiredStart( timestamp );
			sessionEdit->setOptionalFinishNull();
			session = sessionEdit->create();
			setSecSession( session );
		}
		else {
			session = NULL;
		}
		if( transactionStarted ) {
			commit();
		}
		if( ( cluster == NULL ) || ( tenant == NULL ) || ( user == NULL ) || ( session == NULL ) ) {
			disconnect( false );
			authorization = NULL;
			throw cflib::CFLibRuntimeException( CLASS_NAME,
				S_ProcName,
				"Could not resolve cluster name, tenant name, user name, or session.  Login cancelled" );
		}
		if( authorization == NULL ) {
			authorization = new cfcore::CFGenKbAuthorization();
		}
		authorization->setSecCluster( *cluster );
		authorization->setSecTenant( *tenant );
		authorization->setSecSession( session );
		return( true );
	}

	void CFGenKbSchemaObj::disconnect( bool doCommit ) {
		backingStore->disconnect( doCommit );
	}

	void CFGenKbSchemaObj::logout() {
		if( authorization == NULL ) {
			if( isConnected() ) {
				disconnect( false );
			}
			return;
		}
		if( isConnected() ) {
			try {
				bool transactionStarted = beginTransaction();
				if( ! transactionStarted ) {
					rollback();
					transactionStarted = beginTransaction();
					if( ! transactionStarted ) {
						setAuthorization( NULL );
						return;
					}
				}
				const uuid_ptr_t secSessionId = authorization->getSecSessionId();
				if( ( secSessionId[0] != 0 )
					|| ( secSessionId[1] != 0 )
					|| ( secSessionId[2] != 0 )
					|| ( secSessionId[3] != 0 )
					|| ( secSessionId[4] != 0 )
					|| ( secSessionId[5] != 0 )
					|| ( secSessionId[6] != 0 )
					|| ( secSessionId[7] != 0 )
					|| ( secSessionId[8] != 0 )
					|| ( secSessionId[9] != 0 )
					|| ( secSessionId[10] != 0 )
					|| ( secSessionId[11] != 0 )
					|| ( secSessionId[12] != 0 )
					|| ( secSessionId[13] != 0 )
					|| ( secSessionId[14] != 0 )
					|| ( secSessionId[15] != 0 ) )
				{
					cfcore::ICFGenKbSecSessionObj* secSession = getSecSessionTableObj()->readSecSessionByIdIdx( secSessionId );
					if( secSession != NULL ) {
						if( secSession->isOptionalFinishNull() ) {
							cfcore::ICFGenKbSecSessionEditObj* editSecSession = secSession->beginEdit();
							std::chrono::system_clock::time_point timestamp = cflib::CFLib::getUTCTimestampInstance();
							editSecSession->setOptionalFinishValue( timestamp );
							editSecSession->update();
							editSecSession = NULL;
						}
					}
				}
				commit();
			}
			catch( std::exception x ) {
				setAuthorization( NULL );
				try {
					disconnect( false );
				}
				catch( std::exception e ) {
				}
			}
			setAuthorization( NULL );
			try {
				disconnect( false );
			}
			catch( std::exception e ) {
			}
		}
	}

	void CFGenKbSchemaObj::minimizeMemory() {
		if( clusterTableObj != NULL ) {
			clusterTableObj->minimizeMemory();
		}
		if( defClassTableObj != NULL ) {
			defClassTableObj->minimizeMemory();
		}
		if( gelCacheTableObj != NULL ) {
			gelCacheTableObj->minimizeMemory();
		}
		if( gelIteratorTableObj != NULL ) {
			gelIteratorTableObj->minimizeMemory();
		}
		if( gelSpreadTableObj != NULL ) {
			gelSpreadTableObj->minimizeMemory();
		}
		if( gelPopTableObj != NULL ) {
			gelPopTableObj->minimizeMemory();
		}
		if( gelPrefixLineTableObj != NULL ) {
			gelPrefixLineTableObj->minimizeMemory();
		}
		if( gelReferenceTableObj != NULL ) {
			gelReferenceTableObj->minimizeMemory();
		}
		if( gelCallTableObj != NULL ) {
			gelCallTableObj->minimizeMemory();
		}
		if( gelExecutableTableObj != NULL ) {
			gelExecutableTableObj->minimizeMemory();
		}
		if( gelSequenceTableObj != NULL ) {
			gelSequenceTableObj->minimizeMemory();
		}
		if( gelSwitchTableObj != NULL ) {
			gelSwitchTableObj->minimizeMemory();
		}
		if( gelErrorTableObj != NULL ) {
			gelErrorTableObj->minimizeMemory();
		}
		if( gelBoilerplateTableObj != NULL ) {
			gelBoilerplateTableObj->minimizeMemory();
		}
		if( gelBuiltinTableObj != NULL ) {
			gelBuiltinTableObj->minimizeMemory();
		}
		if( gelConstrainTableObj != NULL ) {
			gelConstrainTableObj->minimizeMemory();
		}
		if( gelCounterTableObj != NULL ) {
			gelCounterTableObj->minimizeMemory();
		}
		if( gelExpansionTableObj != NULL ) {
			gelExpansionTableObj->minimizeMemory();
		}
		if( gelModifierTableObj != NULL ) {
			gelModifierTableObj->minimizeMemory();
		}
		if( gelInstructionTableObj != NULL ) {
			gelInstructionTableObj->minimizeMemory();
		}
		if( gelSwitchLimbTableObj != NULL ) {
			gelSwitchLimbTableObj->minimizeMemory();
		}
		if( genIteratorTableObj != NULL ) {
			genIteratorTableObj->minimizeMemory();
		}
		if( genReferenceTableObj != NULL ) {
			genReferenceTableObj->minimizeMemory();
		}
		if( genTruncTableObj != NULL ) {
			genTruncTableObj->minimizeMemory();
		}
		if( genFileTableObj != NULL ) {
			genFileTableObj->minimizeMemory();
		}
		if( genRuleTableObj != NULL ) {
			genRuleTableObj->minimizeMemory();
		}
		if( genBindTableObj != NULL ) {
			genBindTableObj->minimizeMemory();
		}
		if( genItemTableObj != NULL ) {
			genItemTableObj->minimizeMemory();
		}
		if( hostNodeTableObj != NULL ) {
			hostNodeTableObj->minimizeMemory();
		}
		if( ruleCartTableObj != NULL ) {
			ruleCartTableObj->minimizeMemory();
		}
		if( ruleTypeTableObj != NULL ) {
			ruleTypeTableObj->minimizeMemory();
		}
		if( secAppTableObj != NULL ) {
			secAppTableObj->minimizeMemory();
		}
		if( secDeviceTableObj != NULL ) {
			secDeviceTableObj->minimizeMemory();
		}
		if( secFormTableObj != NULL ) {
			secFormTableObj->minimizeMemory();
		}
		if( secGroupTableObj != NULL ) {
			secGroupTableObj->minimizeMemory();
		}
		if( secGroupFormTableObj != NULL ) {
			secGroupFormTableObj->minimizeMemory();
		}
		if( secGrpIncTableObj != NULL ) {
			secGrpIncTableObj->minimizeMemory();
		}
		if( secGrpMembTableObj != NULL ) {
			secGrpMembTableObj->minimizeMemory();
		}
		if( secSessionTableObj != NULL ) {
			secSessionTableObj->minimizeMemory();
		}
		if( secUserTableObj != NULL ) {
			secUserTableObj->minimizeMemory();
		}
		if( sysClusterTableObj != NULL ) {
			sysClusterTableObj->minimizeMemory();
		}
		if( tSecGroupTableObj != NULL ) {
			tSecGroupTableObj->minimizeMemory();
		}
		if( tSecGrpIncTableObj != NULL ) {
			tSecGrpIncTableObj->minimizeMemory();
		}
		if( tSecGrpMembTableObj != NULL ) {
			tSecGrpMembTableObj->minimizeMemory();
		}
		if( tenantTableObj != NULL ) {
			tenantTableObj->minimizeMemory();
		}
		if( toolTableObj != NULL ) {
			toolTableObj->minimizeMemory();
		}
		if( toolSetTableObj != NULL ) {
			toolSetTableObj->minimizeMemory();
		}
	}

	bool CFGenKbSchemaObj::isTransactionOpen() {
		bool txnOpen = backingStore->isTransactionOpen();
		return( txnOpen );
	}

	bool CFGenKbSchemaObj::beginTransaction() {
		bool txnInitiated = backingStore->beginTransaction();
		return( txnInitiated );
	}

	void CFGenKbSchemaObj::commit() {
		backingStore->commit();
	}

	void CFGenKbSchemaObj::rollback() {
		backingStore->rollback();
	}
	cfcore::ICFGenKbClusterTableObj* CFGenKbSchemaObj::getClusterTableObj() {
		return( clusterTableObj );
	}

	cfcore::ICFGenKbDefClassTableObj* CFGenKbSchemaObj::getDefClassTableObj() {
		return( defClassTableObj );
	}

	cfcore::ICFGenKbGelBoilerplateTableObj* CFGenKbSchemaObj::getGelBoilerplateTableObj() {
		return( gelBoilerplateTableObj );
	}

	cfcore::ICFGenKbGelBuiltinTableObj* CFGenKbSchemaObj::getGelBuiltinTableObj() {
		return( gelBuiltinTableObj );
	}

	cfcore::ICFGenKbGelCacheTableObj* CFGenKbSchemaObj::getGelCacheTableObj() {
		return( gelCacheTableObj );
	}

	cfcore::ICFGenKbGelCallTableObj* CFGenKbSchemaObj::getGelCallTableObj() {
		return( gelCallTableObj );
	}

	cfcore::ICFGenKbGelConstrainTableObj* CFGenKbSchemaObj::getGelConstrainTableObj() {
		return( gelConstrainTableObj );
	}

	cfcore::ICFGenKbGelCounterTableObj* CFGenKbSchemaObj::getGelCounterTableObj() {
		return( gelCounterTableObj );
	}

	cfcore::ICFGenKbGelErrorTableObj* CFGenKbSchemaObj::getGelErrorTableObj() {
		return( gelErrorTableObj );
	}

	cfcore::ICFGenKbGelExecutableTableObj* CFGenKbSchemaObj::getGelExecutableTableObj() {
		return( gelExecutableTableObj );
	}

	cfcore::ICFGenKbGelExpansionTableObj* CFGenKbSchemaObj::getGelExpansionTableObj() {
		return( gelExpansionTableObj );
	}

	cfcore::ICFGenKbGelInstructionTableObj* CFGenKbSchemaObj::getGelInstructionTableObj() {
		return( gelInstructionTableObj );
	}

	cfcore::ICFGenKbGelIteratorTableObj* CFGenKbSchemaObj::getGelIteratorTableObj() {
		return( gelIteratorTableObj );
	}

	cfcore::ICFGenKbGelModifierTableObj* CFGenKbSchemaObj::getGelModifierTableObj() {
		return( gelModifierTableObj );
	}

	cfcore::ICFGenKbGelPopTableObj* CFGenKbSchemaObj::getGelPopTableObj() {
		return( gelPopTableObj );
	}

	cfcore::ICFGenKbGelPrefixLineTableObj* CFGenKbSchemaObj::getGelPrefixLineTableObj() {
		return( gelPrefixLineTableObj );
	}

	cfcore::ICFGenKbGelReferenceTableObj* CFGenKbSchemaObj::getGelReferenceTableObj() {
		return( gelReferenceTableObj );
	}

	cfcore::ICFGenKbGelSequenceTableObj* CFGenKbSchemaObj::getGelSequenceTableObj() {
		return( gelSequenceTableObj );
	}

	cfcore::ICFGenKbGelSpreadTableObj* CFGenKbSchemaObj::getGelSpreadTableObj() {
		return( gelSpreadTableObj );
	}

	cfcore::ICFGenKbGelSwitchTableObj* CFGenKbSchemaObj::getGelSwitchTableObj() {
		return( gelSwitchTableObj );
	}

	cfcore::ICFGenKbGelSwitchLimbTableObj* CFGenKbSchemaObj::getGelSwitchLimbTableObj() {
		return( gelSwitchLimbTableObj );
	}

	cfcore::ICFGenKbGenBindTableObj* CFGenKbSchemaObj::getGenBindTableObj() {
		return( genBindTableObj );
	}

	cfcore::ICFGenKbGenFileTableObj* CFGenKbSchemaObj::getGenFileTableObj() {
		return( genFileTableObj );
	}

	cfcore::ICFGenKbGenItemTableObj* CFGenKbSchemaObj::getGenItemTableObj() {
		return( genItemTableObj );
	}

	cfcore::ICFGenKbGenIteratorTableObj* CFGenKbSchemaObj::getGenIteratorTableObj() {
		return( genIteratorTableObj );
	}

	cfcore::ICFGenKbGenReferenceTableObj* CFGenKbSchemaObj::getGenReferenceTableObj() {
		return( genReferenceTableObj );
	}

	cfcore::ICFGenKbGenRuleTableObj* CFGenKbSchemaObj::getGenRuleTableObj() {
		return( genRuleTableObj );
	}

	cfcore::ICFGenKbGenTruncTableObj* CFGenKbSchemaObj::getGenTruncTableObj() {
		return( genTruncTableObj );
	}

	cfcore::ICFGenKbHostNodeTableObj* CFGenKbSchemaObj::getHostNodeTableObj() {
		return( hostNodeTableObj );
	}

	cfcore::ICFGenKbRuleCartTableObj* CFGenKbSchemaObj::getRuleCartTableObj() {
		return( ruleCartTableObj );
	}

	cfcore::ICFGenKbRuleTypeTableObj* CFGenKbSchemaObj::getRuleTypeTableObj() {
		return( ruleTypeTableObj );
	}

	cfcore::ICFGenKbSecAppTableObj* CFGenKbSchemaObj::getSecAppTableObj() {
		return( secAppTableObj );
	}

	cfcore::ICFGenKbSecDeviceTableObj* CFGenKbSchemaObj::getSecDeviceTableObj() {
		return( secDeviceTableObj );
	}

	cfcore::ICFGenKbSecFormTableObj* CFGenKbSchemaObj::getSecFormTableObj() {
		return( secFormTableObj );
	}

	cfcore::ICFGenKbSecGroupTableObj* CFGenKbSchemaObj::getSecGroupTableObj() {
		return( secGroupTableObj );
	}

	cfcore::ICFGenKbSecGroupFormTableObj* CFGenKbSchemaObj::getSecGroupFormTableObj() {
		return( secGroupFormTableObj );
	}

	cfcore::ICFGenKbSecGrpIncTableObj* CFGenKbSchemaObj::getSecGrpIncTableObj() {
		return( secGrpIncTableObj );
	}

	cfcore::ICFGenKbSecGrpMembTableObj* CFGenKbSchemaObj::getSecGrpMembTableObj() {
		return( secGrpMembTableObj );
	}

	cfcore::ICFGenKbSecSessionTableObj* CFGenKbSchemaObj::getSecSessionTableObj() {
		return( secSessionTableObj );
	}

	cfcore::ICFGenKbSecUserTableObj* CFGenKbSchemaObj::getSecUserTableObj() {
		return( secUserTableObj );
	}

	cfcore::ICFGenKbSysClusterTableObj* CFGenKbSchemaObj::getSysClusterTableObj() {
		return( sysClusterTableObj );
	}

	cfcore::ICFGenKbTSecGroupTableObj* CFGenKbSchemaObj::getTSecGroupTableObj() {
		return( tSecGroupTableObj );
	}

	cfcore::ICFGenKbTSecGrpIncTableObj* CFGenKbSchemaObj::getTSecGrpIncTableObj() {
		return( tSecGrpIncTableObj );
	}

	cfcore::ICFGenKbTSecGrpMembTableObj* CFGenKbSchemaObj::getTSecGrpMembTableObj() {
		return( tSecGrpMembTableObj );
	}

	cfcore::ICFGenKbTenantTableObj* CFGenKbSchemaObj::getTenantTableObj() {
		return( tenantTableObj );
	}

	cfcore::ICFGenKbToolTableObj* CFGenKbSchemaObj::getToolTableObj() {
		return( toolTableObj );
	}

	cfcore::ICFGenKbToolSetTableObj* CFGenKbSchemaObj::getToolSetTableObj() {
		return( toolSetTableObj );
	}
}
