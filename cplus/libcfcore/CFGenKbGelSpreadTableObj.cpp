// Description: C++18 Table Object implementation for CFGenKb.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

#include <cfgenkbobj/CFGenKbClusterObj.hpp>
#include <cfgenkbobj/CFGenKbDefClassObj.hpp>
#include <cfgenkbobj/CFGenKbGelCacheObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelIteratorObj.hpp>
#include <cfgenkbobj/CFGenKbGelSpreadObj.hpp>
#include <cfgenkbobj/CFGenKbGelPopObj.hpp>
#include <cfgenkbobj/CFGenKbGelPrefixLineObj.hpp>
#include <cfgenkbobj/CFGenKbGelReferenceObj.hpp>
#include <cfgenkbobj/CFGenKbGelCallObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/CFGenKbGelExecutableObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchObj.hpp>
#include <cfgenkbobj/CFGenKbGelBoilerplateObj.hpp>
#include <cfgenkbobj/CFGenKbGelErrorObj.hpp>
#include <cfgenkbobj/CFGenKbGelBuiltinObj.hpp>
#include <cfgenkbobj/CFGenKbGelConstrainObj.hpp>
#include <cfgenkbobj/CFGenKbGelCounterObj.hpp>
#include <cfgenkbobj/CFGenKbGelExpansionObj.hpp>
#include <cfgenkbobj/CFGenKbGelModifierObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchLimbObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenIteratorObj.hpp>
#include <cfgenkbobj/CFGenKbGenReferenceObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenTruncObj.hpp>
#include <cfgenkbobj/CFGenKbGenFileObj.hpp>
#include <cfgenkbobj/CFGenKbGenBindObj.hpp>
#include <cfgenkbobj/CFGenKbHostNodeObj.hpp>
#include <cfgenkbobj/CFGenKbRuleCartObj.hpp>
#include <cfgenkbobj/CFGenKbRuleTypeObj.hpp>
#include <cfgenkbobj/CFGenKbSecAppObj.hpp>
#include <cfgenkbobj/CFGenKbSecDeviceObj.hpp>
#include <cfgenkbobj/CFGenKbSecFormObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupFormObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpIncObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpMembObj.hpp>
#include <cfgenkbobj/CFGenKbSecSessionObj.hpp>
#include <cfgenkbobj/CFGenKbSecUserObj.hpp>
#include <cfgenkbobj/CFGenKbSysClusterObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGroupObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpIncObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpMembObj.hpp>
#include <cfgenkbobj/CFGenKbTenantObj.hpp>
#include <cfgenkbobj/CFGenKbToolObj.hpp>
#include <cfgenkbobj/CFGenKbToolSetObj.hpp>

#include <cfgenkbobj/CFGenKbClusterEditObj.hpp>
#include <cfgenkbobj/CFGenKbDefClassEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelCacheEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelIteratorEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSpreadEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelPopEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelPrefixLineEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelReferenceEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelCallEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelExecutableEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelBoilerplateEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelErrorEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelBuiltinEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelConstrainEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelCounterEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelExpansionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelModifierEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchLimbEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenIteratorEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenReferenceEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenTruncEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenFileEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenBindEditObj.hpp>
#include <cfgenkbobj/CFGenKbHostNodeEditObj.hpp>
#include <cfgenkbobj/CFGenKbRuleCartEditObj.hpp>
#include <cfgenkbobj/CFGenKbRuleTypeEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecAppEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecDeviceEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecFormEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupFormEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpIncEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpMembEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecSessionEditObj.hpp>
#include <cfgenkbobj/CFGenKbSecUserEditObj.hpp>
#include <cfgenkbobj/CFGenKbSysClusterEditObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGroupEditObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpIncEditObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpMembEditObj.hpp>
#include <cfgenkbobj/CFGenKbTenantEditObj.hpp>
#include <cfgenkbobj/CFGenKbToolEditObj.hpp>
#include <cfgenkbobj/CFGenKbToolSetEditObj.hpp>

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

	const std::string CFGenKbGelSpreadTableObj::CLASS_NAME( "CFGenKbGelSpreadTableObj" );
	const std::string CFGenKbGelSpreadTableObj::TABLE_NAME( "GelSpread" );
	const std::string CFGenKbGelSpreadTableObj::TABLE_DBNAME( "gelspred" );

	CFGenKbGelSpreadTableObj::CFGenKbGelSpreadTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
		allGelSpread = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByBetweenIdx = new std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByBeforeIdx = new std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByFirstIdx = new std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByEachIdx = new std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByLastIdx = new std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByLoneIdx = new std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByEmptyIdx = new std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
	}

	CFGenKbGelSpreadTableObj::CFGenKbGelSpreadTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
		allGelSpread = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByBetweenIdx = new std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByBeforeIdx = new std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByFirstIdx = new std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByEachIdx = new std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByLastIdx = new std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByLoneIdx = new std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		indexByEmptyIdx = new std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
	}

	CFGenKbGelSpreadTableObj::~CFGenKbGelSpreadTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByGelCacheIdx != NULL ) {
			delete indexByGelCacheIdx;
			indexByGelCacheIdx = NULL;
		}
		if( indexByChainIdx != NULL ) {
			delete indexByChainIdx;
			indexByChainIdx = NULL;
		}
		if( indexByBetweenIdx != NULL ) {
			delete indexByBetweenIdx;
			indexByBetweenIdx = NULL;
		}
		if( indexByBeforeIdx != NULL ) {
			delete indexByBeforeIdx;
			indexByBeforeIdx = NULL;
		}
		if( indexByFirstIdx != NULL ) {
			delete indexByFirstIdx;
			indexByFirstIdx = NULL;
		}
		if( indexByEachIdx != NULL ) {
			delete indexByEachIdx;
			indexByEachIdx = NULL;
		}
		if( indexByLastIdx != NULL ) {
			delete indexByLastIdx;
			indexByLastIdx = NULL;
		}
		if( indexByLoneIdx != NULL ) {
			delete indexByLoneIdx;
			indexByLoneIdx = NULL;
		}
		if( indexByEmptyIdx != NULL ) {
			delete indexByEmptyIdx;
			indexByEmptyIdx = NULL;
		}
		if( members != NULL ) {
			auto membersIter = members->begin();
			while( membersIter != members->end() ) {
				members->erase( membersIter );
				membersIter = members->begin();
			}
			delete members;
			members = NULL;
		}
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelSpreadTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelSpreadTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelSpreadTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelSpreadTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelSpreadTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelSpreadTableObj::minimizeMemory() {
		if( allGelSpread != NULL ) {
			allGelSpread->clear();
			delete allGelSpread;
			allGelSpread = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByTenantIdx = NULL;
			while( iterByTenantIdx != endByTenantIdx ) {
				curByTenantIdx = iterByTenantIdx->second;
				if( curByTenantIdx != NULL ) {
					curByTenantIdx->clear();
					delete curByTenantIdx;
					curByTenantIdx = NULL;
					iterByTenantIdx->second = NULL;
				}
				iterByTenantIdx ++;
			}
			indexByTenantIdx->clear();
		}
		if( indexByGelCacheIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByGelCacheIdx = NULL;
			while( iterByGelCacheIdx != endByGelCacheIdx ) {
				curByGelCacheIdx = iterByGelCacheIdx->second;
				if( curByGelCacheIdx != NULL ) {
					curByGelCacheIdx->clear();
					delete curByGelCacheIdx;
					curByGelCacheIdx = NULL;
					iterByGelCacheIdx->second = NULL;
				}
				iterByGelCacheIdx ++;
			}
			indexByGelCacheIdx->clear();
		}
		if( indexByChainIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByChainIdx = NULL;
			while( iterByChainIdx != endByChainIdx ) {
				curByChainIdx = iterByChainIdx->second;
				if( curByChainIdx != NULL ) {
					curByChainIdx->clear();
					delete curByChainIdx;
					curByChainIdx = NULL;
					iterByChainIdx->second = NULL;
				}
				iterByChainIdx ++;
			}
			indexByChainIdx->clear();
		}
		if( indexByBetweenIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByBetweenIdx = indexByBetweenIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByBetweenIdx = indexByBetweenIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByBetweenIdx = NULL;
			while( iterByBetweenIdx != endByBetweenIdx ) {
				curByBetweenIdx = iterByBetweenIdx->second;
				if( curByBetweenIdx != NULL ) {
					curByBetweenIdx->clear();
					delete curByBetweenIdx;
					curByBetweenIdx = NULL;
					iterByBetweenIdx->second = NULL;
				}
				iterByBetweenIdx ++;
			}
			indexByBetweenIdx->clear();
		}
		if( indexByBeforeIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByBeforeIdx = indexByBeforeIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByBeforeIdx = indexByBeforeIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByBeforeIdx = NULL;
			while( iterByBeforeIdx != endByBeforeIdx ) {
				curByBeforeIdx = iterByBeforeIdx->second;
				if( curByBeforeIdx != NULL ) {
					curByBeforeIdx->clear();
					delete curByBeforeIdx;
					curByBeforeIdx = NULL;
					iterByBeforeIdx->second = NULL;
				}
				iterByBeforeIdx ++;
			}
			indexByBeforeIdx->clear();
		}
		if( indexByFirstIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByFirstIdx = indexByFirstIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByFirstIdx = indexByFirstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByFirstIdx = NULL;
			while( iterByFirstIdx != endByFirstIdx ) {
				curByFirstIdx = iterByFirstIdx->second;
				if( curByFirstIdx != NULL ) {
					curByFirstIdx->clear();
					delete curByFirstIdx;
					curByFirstIdx = NULL;
					iterByFirstIdx->second = NULL;
				}
				iterByFirstIdx ++;
			}
			indexByFirstIdx->clear();
		}
		if( indexByEachIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByEachIdx = indexByEachIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByEachIdx = indexByEachIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByEachIdx = NULL;
			while( iterByEachIdx != endByEachIdx ) {
				curByEachIdx = iterByEachIdx->second;
				if( curByEachIdx != NULL ) {
					curByEachIdx->clear();
					delete curByEachIdx;
					curByEachIdx = NULL;
					iterByEachIdx->second = NULL;
				}
				iterByEachIdx ++;
			}
			indexByEachIdx->clear();
		}
		if( indexByLastIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByLastIdx = indexByLastIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByLastIdx = indexByLastIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByLastIdx = NULL;
			while( iterByLastIdx != endByLastIdx ) {
				curByLastIdx = iterByLastIdx->second;
				if( curByLastIdx != NULL ) {
					curByLastIdx->clear();
					delete curByLastIdx;
					curByLastIdx = NULL;
					iterByLastIdx->second = NULL;
				}
				iterByLastIdx ++;
			}
			indexByLastIdx->clear();
		}
		if( indexByLoneIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByLoneIdx = indexByLoneIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByLoneIdx = indexByLoneIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByLoneIdx = NULL;
			while( iterByLoneIdx != endByLoneIdx ) {
				curByLoneIdx = iterByLoneIdx->second;
				if( curByLoneIdx != NULL ) {
					curByLoneIdx->clear();
					delete curByLoneIdx;
					curByLoneIdx = NULL;
					iterByLoneIdx->second = NULL;
				}
				iterByLoneIdx ++;
			}
			indexByLoneIdx->clear();
		}
		if( indexByEmptyIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator iterByEmptyIdx = indexByEmptyIdx->begin();
			std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* >::iterator endByEmptyIdx = indexByEmptyIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* curByEmptyIdx = NULL;
			while( iterByEmptyIdx != endByEmptyIdx ) {
				curByEmptyIdx = iterByEmptyIdx->second;
				if( curByEmptyIdx != NULL ) {
					curByEmptyIdx->clear();
					delete curByEmptyIdx;
					curByEmptyIdx = NULL;
					iterByEmptyIdx->second = NULL;
				}
				iterByEmptyIdx ++;
			}
			indexByEmptyIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::newInstance() {
		cfcore::ICFGenKbGelSpreadObj* inst = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( new CFGenKbGelSpreadObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelSpreadEditObj* CFGenKbGelSpreadTableObj::newEditInstance( cfcore::ICFGenKbGelSpreadObj* orig ) {
		cfcore::ICFGenKbGelSpreadEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelSpreadEditObj*>( new CFGenKbGelSpreadEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::realizeGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj ) {
		static const std::string S_ProcName( "realizeGelSpread" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelSpreadObj* obj = Obj;
		cfcore::ICFGenKbGelSpreadObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelSpreadObj* keepObj = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			keepObj = existingObj;
			pkey = keepObj->getPKey();
			/*
			 *	We always rebind the data because if we're being called, some index may have been
			 *	updated and is refreshing it's data, which may require binding a different lookup key
			 */
			// Detach object from alternate and duplicate indexes, leave PKey alone
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						auto removalProbe = mapGelCacheIdx->find( *pkey );
						if( removalProbe != mapGelCacheIdx->end() ) {
							mapGelCacheIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( keepObj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( keepObj->getOptionalChainInstTenantIdValue() );
				}
				if( keepObj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( keepObj->getOptionalChainInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( keepObj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByBetweenIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByBetweenIdxKey keyBetweenIdx;
				if( keepObj->isOptionalExpandBetweenNull() ) {
					keyBetweenIdx.setOptionalExpandBetweenNull();
				}
				else {
					keyBetweenIdx.setOptionalExpandBetweenValue( keepObj->getOptionalExpandBetweenValue() );
				}
				auto searchBetweenIdx = indexByBetweenIdx->find( keyBetweenIdx );
				if( searchBetweenIdx != indexByBetweenIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBetweenIdx = searchBetweenIdx->second;
					if( mapBetweenIdx != NULL ) {
						auto removalProbe = mapBetweenIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapBetweenIdx->end() ) {
							mapBetweenIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByBeforeIdxKey keyBeforeIdx;
				if( keepObj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( keepObj->getOptionalExpandBeforeValue() );
				}
				auto searchBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBeforeIdx = searchBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						auto removalProbe = mapBeforeIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapBeforeIdx->end() ) {
							mapBeforeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByFirstIdxKey keyFirstIdx;
				if( keepObj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( keepObj->getOptionalExpandFirstValue() );
				}
				auto searchFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapFirstIdx = searchFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						auto removalProbe = mapFirstIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapFirstIdx->end() ) {
							mapFirstIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( keepObj->getRequiredExpandEach() );
				auto searchEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEachIdx = searchEachIdx->second;
					if( mapEachIdx != NULL ) {
						auto removalProbe = mapEachIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEachIdx->end() ) {
							mapEachIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByLastIdxKey keyLastIdx;
				if( keepObj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( keepObj->getOptionalExpandLastValue() );
				}
				auto searchLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLastIdx = searchLastIdx->second;
					if( mapLastIdx != NULL ) {
						auto removalProbe = mapLastIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLastIdx->end() ) {
							mapLastIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByLoneIdxKey keyLoneIdx;
				if( keepObj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( keepObj->getOptionalExpandLoneValue() );
				}
				auto searchLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLoneIdx = searchLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						auto removalProbe = mapLoneIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLoneIdx->end() ) {
							mapLoneIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByEmptyIdxKey keyEmptyIdx;
				if( keepObj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( keepObj->getOptionalExpandEmptyValue() );
				}
				auto searchEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEmptyIdx = searchEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						auto removalProbe = mapEmptyIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEmptyIdx->end() ) {
							mapEmptyIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( Obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aGelCacheIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelCacheIdxObj );
				}
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aChainIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AChainIdxObj );
				}
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( keepObj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( keepObj->getOptionalChainInstTenantIdValue() );
				}
				if( keepObj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( keepObj->getOptionalChainInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( keepObj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchIndexByChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchIndexByChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByBetweenIdx != NULL ) {
				static const std::string S_ABetweenIdxObj( "aBetweenIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aBetweenIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aBetweenIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABetweenIdxObj );
				}
				cfcore::CFGenKbGelSpreadByBetweenIdxKey keyBetweenIdx;
				if( keepObj->isOptionalExpandBetweenNull() ) {
					keyBetweenIdx.setOptionalExpandBetweenNull();
				}
				else {
					keyBetweenIdx.setOptionalExpandBetweenValue( keepObj->getOptionalExpandBetweenValue() );
				}
				auto searchIndexByBetweenIdx = indexByBetweenIdx->find( keyBetweenIdx );
				if( searchIndexByBetweenIdx != indexByBetweenIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBetweenIdx = searchIndexByBetweenIdx->second;
					if( mapBetweenIdx != NULL ) {
						mapBetweenIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aBetweenIdxObj ) );
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				static const std::string S_ABeforeIdxObj( "aBeforeIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aBeforeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aBeforeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABeforeIdxObj );
				}
				cfcore::CFGenKbGelSpreadByBeforeIdxKey keyBeforeIdx;
				if( keepObj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( keepObj->getOptionalExpandBeforeValue() );
				}
				auto searchIndexByBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBeforeIdx = searchIndexByBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						mapBeforeIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aBeforeIdxObj ) );
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				static const std::string S_AFirstIdxObj( "aFirstIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aFirstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aFirstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFirstIdxObj );
				}
				cfcore::CFGenKbGelSpreadByFirstIdxKey keyFirstIdx;
				if( keepObj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( keepObj->getOptionalExpandFirstValue() );
				}
				auto searchIndexByFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapFirstIdx = searchIndexByFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						mapFirstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aFirstIdxObj ) );
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				static const std::string S_AEachIdxObj( "aEachIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aEachIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aEachIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEachIdxObj );
				}
				cfcore::CFGenKbGelSpreadByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( keepObj->getRequiredExpandEach() );
				auto searchIndexByEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchIndexByEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEachIdx = searchIndexByEachIdx->second;
					if( mapEachIdx != NULL ) {
						mapEachIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aEachIdxObj ) );
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				static const std::string S_ALastIdxObj( "aLastIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aLastIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aLastIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALastIdxObj );
				}
				cfcore::CFGenKbGelSpreadByLastIdxKey keyLastIdx;
				if( keepObj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( keepObj->getOptionalExpandLastValue() );
				}
				auto searchIndexByLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchIndexByLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLastIdx = searchIndexByLastIdx->second;
					if( mapLastIdx != NULL ) {
						mapLastIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aLastIdxObj ) );
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				static const std::string S_ALoneIdxObj( "aLoneIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aLoneIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aLoneIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALoneIdxObj );
				}
				cfcore::CFGenKbGelSpreadByLoneIdxKey keyLoneIdx;
				if( keepObj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( keepObj->getOptionalExpandLoneValue() );
				}
				auto searchIndexByLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLoneIdx = searchIndexByLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						mapLoneIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aLoneIdxObj ) );
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				static const std::string S_AEmptyIdxObj( "aEmptyIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aEmptyIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aEmptyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEmptyIdxObj );
				}
				cfcore::CFGenKbGelSpreadByEmptyIdxKey keyEmptyIdx;
				if( keepObj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( keepObj->getOptionalExpandEmptyValue() );
				}
				auto searchIndexByEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEmptyIdx = searchIndexByEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						mapEmptyIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aEmptyIdxObj ) );
					}
				}
			}

			if( allGelSpread != NULL ) {
				allGelSpread->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aGelCacheIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelCacheIdxObj );
				}
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aChainIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AChainIdxObj );
				}
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( keepObj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( keepObj->getOptionalChainInstTenantIdValue() );
				}
				if( keepObj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( keepObj->getOptionalChainInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( keepObj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchIndexByChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchIndexByChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByBetweenIdx != NULL ) {
				static const std::string S_ABetweenIdxObj( "aBetweenIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aBetweenIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aBetweenIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABetweenIdxObj );
				}
				cfcore::CFGenKbGelSpreadByBetweenIdxKey keyBetweenIdx;
				if( keepObj->isOptionalExpandBetweenNull() ) {
					keyBetweenIdx.setOptionalExpandBetweenNull();
				}
				else {
					keyBetweenIdx.setOptionalExpandBetweenValue( keepObj->getOptionalExpandBetweenValue() );
				}
				auto searchIndexByBetweenIdx = indexByBetweenIdx->find( keyBetweenIdx );
				if( searchIndexByBetweenIdx != indexByBetweenIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBetweenIdx = searchIndexByBetweenIdx->second;
					if( mapBetweenIdx != NULL ) {
						mapBetweenIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aBetweenIdxObj ) );
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				static const std::string S_ABeforeIdxObj( "aBeforeIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aBeforeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aBeforeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABeforeIdxObj );
				}
				cfcore::CFGenKbGelSpreadByBeforeIdxKey keyBeforeIdx;
				if( keepObj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( keepObj->getOptionalExpandBeforeValue() );
				}
				auto searchIndexByBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBeforeIdx = searchIndexByBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						mapBeforeIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aBeforeIdxObj ) );
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				static const std::string S_AFirstIdxObj( "aFirstIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aFirstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aFirstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFirstIdxObj );
				}
				cfcore::CFGenKbGelSpreadByFirstIdxKey keyFirstIdx;
				if( keepObj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( keepObj->getOptionalExpandFirstValue() );
				}
				auto searchIndexByFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapFirstIdx = searchIndexByFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						mapFirstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aFirstIdxObj ) );
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				static const std::string S_AEachIdxObj( "aEachIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aEachIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aEachIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEachIdxObj );
				}
				cfcore::CFGenKbGelSpreadByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( keepObj->getRequiredExpandEach() );
				auto searchIndexByEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchIndexByEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEachIdx = searchIndexByEachIdx->second;
					if( mapEachIdx != NULL ) {
						mapEachIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aEachIdxObj ) );
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				static const std::string S_ALastIdxObj( "aLastIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aLastIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aLastIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALastIdxObj );
				}
				cfcore::CFGenKbGelSpreadByLastIdxKey keyLastIdx;
				if( keepObj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( keepObj->getOptionalExpandLastValue() );
				}
				auto searchIndexByLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchIndexByLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLastIdx = searchIndexByLastIdx->second;
					if( mapLastIdx != NULL ) {
						mapLastIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aLastIdxObj ) );
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				static const std::string S_ALoneIdxObj( "aLoneIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aLoneIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aLoneIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALoneIdxObj );
				}
				cfcore::CFGenKbGelSpreadByLoneIdxKey keyLoneIdx;
				if( keepObj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( keepObj->getOptionalExpandLoneValue() );
				}
				auto searchIndexByLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLoneIdx = searchIndexByLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						mapLoneIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aLoneIdxObj ) );
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				static const std::string S_AEmptyIdxObj( "aEmptyIdxObj" );
				cfcore::ICFGenKbGelSpreadObj* aEmptyIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( keepObj );
				if( aEmptyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEmptyIdxObj );
				}
				cfcore::CFGenKbGelSpreadByEmptyIdxKey keyEmptyIdx;
				if( keepObj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( keepObj->getOptionalExpandEmptyValue() );
				}
				auto searchIndexByEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEmptyIdx = searchIndexByEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						mapEmptyIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), aEmptyIdxObj ) );
					}
				}
			}

			if( allGelSpread != NULL ) {
				allGelSpread->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		cfcore::ICFGenKbGelSpreadObj* existingObj = readCachedGelSpreadByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByChainIdx( ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::reallyDeepDisposeGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelSpread" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelSpreadObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDetachFromIndexesGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj ) );
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByBetweenIdx( const std::string* ExpandBetween ) {
		static const std::string S_ProcName( "deepDisposeByBetweenIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByBetweenIdx( ExpandBetween );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByBeforeIdx( const std::string* ExpandBefore ) {
		static const std::string S_ProcName( "deepDisposeByBeforeIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByBeforeIdx( ExpandBefore );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByFirstIdx( const std::string* ExpandFirst ) {
		static const std::string S_ProcName( "deepDisposeByFirstIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByFirstIdx( ExpandFirst );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByEachIdx( const std::string& ExpandEach ) {
		static const std::string S_ProcName( "deepDisposeByEachIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByEachIdx( ExpandEach );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByLastIdx( const std::string* ExpandLast ) {
		static const std::string S_ProcName( "deepDisposeByLastIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByLastIdx( ExpandLast );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByLoneIdx( const std::string* ExpandLone ) {
		static const std::string S_ProcName( "deepDisposeByLoneIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByLoneIdx( ExpandLone );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSpreadTableObj::deepDisposeByEmptyIdx( const std::string* ExpandEmpty ) {
		static const std::string S_ProcName( "deepDisposeByEmptyIdx" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> list;
		std::vector<cfcore::ICFGenKbGelSpreadObj*> matchesFound = readCachedGelSpreadByEmptyIdx( ExpandEmpty );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSpreadObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::createGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj ) {
		static const std::string S_ProcName( "createGelSpread" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSpreadObj* obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelSpreadBuff* buff = dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->createGelSpread(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			if( obj->getEdit() != NULL ) {
				obj->endEdit();
			}
			if( obj->getIsNew() ) {
				delete obj;
				obj = NULL;
			}
			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
		}
		return( obj );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::readGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelSpread" );
		cfcore::ICFGenKbGelSpreadObj* obj = NULL;
		cfcore::ICFGenKbGelSpreadObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelSpreadBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
		}
		return( realized );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::lockGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelSpread" );
		cfcore::ICFGenKbGelSpreadObj* locked = NULL;
		cfcore::CFGenKbGelSpreadBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readAllGelSpread( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelSpread" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSpreadObj* realized = NULL;
		if( forceRead || ( allGelSpread == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelSpreadObj*>();
			allGelSpread = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelSpreadBuff* buff = NULL;
			cfcore::ICFGenKbGelSpreadObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelSpread->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
					// No need to delete obj -- realize() auto-destructs the instance it decided to discard
					obj = NULL;
				}
			}
			CFLIB_EXCEPTION_CATCH_FALLTHROUGH

			if( ( obj != NULL ) && obj->getIsNew() ) {
				delete obj;
				obj = NULL;
			}

			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		}
		size_t len = allGelSpread->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		auto valIter = allGelSpread->begin();
		size_t idx = 0;
		while( valIter != allGelSpread->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::readGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelSpreadObj* obj = readGelSpread( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			oldDict = searchIndexByTenantIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			oldDict = searchIndexByGelCacheIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( ChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *ChainInstTenantId );
		}
		if( ChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *ChainInstGelCacheId );
		}
		if( ChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *ChainInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			oldDict = searchIndexByChainIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByBetweenIdx( const std::string* ExpandBetween,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByBetweenIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByBetweenIdxKey key;
		if( ExpandBetween == NULL ) {
			key.setOptionalExpandBetweenNull();
		}
		else {
			key.setOptionalExpandBetweenValue( *ExpandBetween );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByBetweenIdx == NULL ) {
			indexByBetweenIdx = new std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByBetweenIdx = indexByBetweenIdx->find( key );
		if( searchIndexByBetweenIdx != indexByBetweenIdx->end() ) {
			oldDict = searchIndexByBetweenIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByBetweenIdx( schema->getAuthorization(),
				ExpandBetween );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByBetweenIdx->erase( searchIndexByBetweenIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByBetweenIdx->insert( std::map< cfcore::CFGenKbGelSpreadByBetweenIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByBeforeIdx( const std::string* ExpandBefore,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByBeforeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByBeforeIdxKey key;
		if( ExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *ExpandBefore );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByBeforeIdx == NULL ) {
			indexByBeforeIdx = new std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByBeforeIdx = indexByBeforeIdx->find( key );
		if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
			oldDict = searchIndexByBeforeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByBeforeIdx( schema->getAuthorization(),
				ExpandBefore );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByBeforeIdx->erase( searchIndexByBeforeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByBeforeIdx->insert( std::map< cfcore::CFGenKbGelSpreadByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByFirstIdx( const std::string* ExpandFirst,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByFirstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByFirstIdxKey key;
		if( ExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *ExpandFirst );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByFirstIdx == NULL ) {
			indexByFirstIdx = new std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByFirstIdx = indexByFirstIdx->find( key );
		if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
			oldDict = searchIndexByFirstIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByFirstIdx( schema->getAuthorization(),
				ExpandFirst );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFirstIdx->erase( searchIndexByFirstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFirstIdx->insert( std::map< cfcore::CFGenKbGelSpreadByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByEachIdx( const std::string& ExpandEach,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByEachIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByEachIdxKey key;
		key.setRequiredExpandEach( ExpandEach );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByEachIdx == NULL ) {
			indexByEachIdx = new std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByEachIdx = indexByEachIdx->find( key );
		if( searchIndexByEachIdx != indexByEachIdx->end() ) {
			oldDict = searchIndexByEachIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByEachIdx( schema->getAuthorization(),
				ExpandEach );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEachIdx->erase( searchIndexByEachIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEachIdx->insert( std::map< cfcore::CFGenKbGelSpreadByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByLastIdx( const std::string* ExpandLast,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByLastIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByLastIdxKey key;
		if( ExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *ExpandLast );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByLastIdx == NULL ) {
			indexByLastIdx = new std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByLastIdx = indexByLastIdx->find( key );
		if( searchIndexByLastIdx != indexByLastIdx->end() ) {
			oldDict = searchIndexByLastIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByLastIdx( schema->getAuthorization(),
				ExpandLast );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLastIdx->erase( searchIndexByLastIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLastIdx->insert( std::map< cfcore::CFGenKbGelSpreadByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByLoneIdx( const std::string* ExpandLone,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByLoneIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByLoneIdxKey key;
		if( ExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *ExpandLone );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByLoneIdx == NULL ) {
			indexByLoneIdx = new std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByLoneIdx = indexByLoneIdx->find( key );
		if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
			oldDict = searchIndexByLoneIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByLoneIdx( schema->getAuthorization(),
				ExpandLone );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLoneIdx->erase( searchIndexByLoneIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLoneIdx->insert( std::map< cfcore::CFGenKbGelSpreadByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readGelSpreadByEmptyIdx( const std::string* ExpandEmpty,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSpreadByEmptyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSpreadByEmptyIdxKey key;
		if( ExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *ExpandEmpty );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* oldDict;
		if( indexByEmptyIdx == NULL ) {
			indexByEmptyIdx = new std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>*>();
		}
		auto searchIndexByEmptyIdx = indexByEmptyIdx->find( key );
		if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
			oldDict = searchIndexByEmptyIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>();
			cfcore::ICFGenKbGelSpreadObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSpreadBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->readDerivedByEmptyIdx( schema->getAuthorization(),
				ExpandEmpty );
			cfcore::CFGenKbGelSpreadBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSpreadObj* realized = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEmptyIdx->erase( searchIndexByEmptyIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEmptyIdx->insert( std::map< cfcore::CFGenKbGelSpreadByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::readCachedGelSpread( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelSpread" );
		cfcore::ICFGenKbGelSpreadObj* obj = NULL;
		cfcore::ICFGenKbGelSpreadObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::readCachedGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelSpreadObj* obj = readCachedGelSpread( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( ChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *ChainInstTenantId );
		}
		if( ChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *ChainInstGelCacheId );
		}
		if( ChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *ChainInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByBetweenIdx( const std::string* ExpandBetween )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByBetweenIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByBetweenIdxKey key;
		if( ExpandBetween == NULL ) {
			key.setOptionalExpandBetweenNull();
		}
		else {
			key.setOptionalExpandBetweenValue( *ExpandBetween );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByBetweenIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByBetweenIdx = indexByBetweenIdx->find( key );
		if( searchIndexByBetweenIdx != indexByBetweenIdx->end() ) {
			dict = searchIndexByBetweenIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByBeforeIdx( const std::string* ExpandBefore )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByBeforeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByBeforeIdxKey key;
		if( ExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *ExpandBefore );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByBeforeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByBeforeIdx = indexByBeforeIdx->find( key );
		if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
			dict = searchIndexByBeforeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByFirstIdx( const std::string* ExpandFirst )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByFirstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByFirstIdxKey key;
		if( ExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *ExpandFirst );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByFirstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFirstIdx = indexByFirstIdx->find( key );
		if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
			dict = searchIndexByFirstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByEachIdx( const std::string& ExpandEach )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByEachIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByEachIdxKey key;
		key.setRequiredExpandEach( ExpandEach );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByEachIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEachIdx = indexByEachIdx->find( key );
		if( searchIndexByEachIdx != indexByEachIdx->end() ) {
			dict = searchIndexByEachIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByLastIdx( const std::string* ExpandLast )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByLastIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByLastIdxKey key;
		if( ExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *ExpandLast );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByLastIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLastIdx = indexByLastIdx->find( key );
		if( searchIndexByLastIdx != indexByLastIdx->end() ) {
			dict = searchIndexByLastIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByLoneIdx( const std::string* ExpandLone )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByLoneIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByLoneIdxKey key;
		if( ExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *ExpandLone );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByLoneIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLoneIdx = indexByLoneIdx->find( key );
		if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
			dict = searchIndexByLoneIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSpreadObj*> CFGenKbGelSpreadTableObj::readCachedGelSpreadByEmptyIdx( const std::string* ExpandEmpty )
	{
		static const std::string S_ProcName( "readCachedGelSpreadByEmptyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
		cfcore::CFGenKbGelSpreadByEmptyIdxKey key;
		if( ExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *ExpandEmpty );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* dict;
		if( indexByEmptyIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEmptyIdx = indexByEmptyIdx->find( key );
		if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
			dict = searchIndexByEmptyIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSpreadObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSpreadObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadTableObj::updateGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelSpread" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSpreadObj* obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelSpreadBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->updateGelSpread( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelSpreadBuff*>( Obj->getGelSpreadBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj->realize() );
			if( obj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Obj );
			}
			if( obj->getEdit() != NULL ) {
				obj->endEdit();
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH
		if( ! CFLIB_EXCEPTION_EMPTY ) {
			if( obj->getEdit() != NULL ) {
				obj->endEdit();
			}
			CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION
		}
		return( obj );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpread( cfcore::ICFGenKbGelSpreadEditObj* Obj ) {
		cfcore::ICFGenKbGelSpreadObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpread( schema->getAuthorization(),
			obj->getGelSpreadBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelSpreadObj* obj = readGelSpread( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelSpreadEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelSpreadEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelSpreadEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByBetweenIdx( const std::string* ExpandBetween )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByBetweenIdx( schema->getAuthorization(),
				ExpandBetween );
		deepDisposeByBetweenIdx( ExpandBetween );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByBeforeIdx( const std::string* ExpandBefore )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByBeforeIdx( schema->getAuthorization(),
				ExpandBefore );
		deepDisposeByBeforeIdx( ExpandBefore );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByFirstIdx( const std::string* ExpandFirst )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByFirstIdx( schema->getAuthorization(),
				ExpandFirst );
		deepDisposeByFirstIdx( ExpandFirst );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByEachIdx( const std::string& ExpandEach )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByEachIdx( schema->getAuthorization(),
				ExpandEach );
		deepDisposeByEachIdx( ExpandEach );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByLastIdx( const std::string* ExpandLast )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByLastIdx( schema->getAuthorization(),
				ExpandLast );
		deepDisposeByLastIdx( ExpandLast );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByLoneIdx( const std::string* ExpandLone )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByLoneIdx( schema->getAuthorization(),
				ExpandLone );
		deepDisposeByLoneIdx( ExpandLone );
	}

	void CFGenKbGelSpreadTableObj::deleteGelSpreadByEmptyIdx( const std::string* ExpandEmpty )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSpread()->deleteGelSpreadByEmptyIdx( schema->getAuthorization(),
				ExpandEmpty );
		deepDisposeByEmptyIdx( ExpandEmpty );
	}

	void CFGenKbGelSpreadTableObj::reallyDetachFromIndexesGelSpread( cfcore::ICFGenKbGelSpreadObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelSpread" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelSpreadObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelSpreadObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
							if( mapTenantIdx->empty() ) {
								delete mapTenantIdx;
								mapTenantIdx = NULL;
								indexByTenantIdx->erase( searchTenantIdx );
							}
						}
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( obj->getRequiredGelCacheId() );
				auto searchGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						auto removalProbe = mapGelCacheIdx->find( *pkey );
						if( removalProbe != mapGelCacheIdx->end() ) {
							mapGelCacheIdx->erase( removalProbe );
							if( mapGelCacheIdx->empty() ) {
								delete mapGelCacheIdx;
								mapGelCacheIdx = NULL;
								indexByGelCacheIdx->erase( searchGelCacheIdx );
							}
						}
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( obj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( obj->getOptionalChainInstTenantIdValue() );
				}
				if( obj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( obj->getOptionalChainInstGelCacheIdValue() );
				}
				if( obj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( obj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
							if( mapChainIdx->empty() ) {
								delete mapChainIdx;
								mapChainIdx = NULL;
								indexByChainIdx->erase( searchChainIdx );
							}
						}
					}
				}
			}

			if( indexByBetweenIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByBetweenIdxKey keyBetweenIdx;
				if( obj->isOptionalExpandBetweenNull() ) {
					keyBetweenIdx.setOptionalExpandBetweenNull();
				}
				else {
					keyBetweenIdx.setOptionalExpandBetweenValue( obj->getOptionalExpandBetweenValue() );
				}
				auto searchBetweenIdx = indexByBetweenIdx->find( keyBetweenIdx );
				if( searchBetweenIdx != indexByBetweenIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBetweenIdx = searchBetweenIdx->second;
					if( mapBetweenIdx != NULL ) {
						auto removalProbe = mapBetweenIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapBetweenIdx->end() ) {
							mapBetweenIdx->erase( removalProbe );
							if( mapBetweenIdx->empty() ) {
								delete mapBetweenIdx;
								mapBetweenIdx = NULL;
								indexByBetweenIdx->erase( searchBetweenIdx );
							}
						}
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByBeforeIdxKey keyBeforeIdx;
				if( obj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( obj->getOptionalExpandBeforeValue() );
				}
				auto searchBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapBeforeIdx = searchBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						auto removalProbe = mapBeforeIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapBeforeIdx->end() ) {
							mapBeforeIdx->erase( removalProbe );
							if( mapBeforeIdx->empty() ) {
								delete mapBeforeIdx;
								mapBeforeIdx = NULL;
								indexByBeforeIdx->erase( searchBeforeIdx );
							}
						}
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByFirstIdxKey keyFirstIdx;
				if( obj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( obj->getOptionalExpandFirstValue() );
				}
				auto searchFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapFirstIdx = searchFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						auto removalProbe = mapFirstIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapFirstIdx->end() ) {
							mapFirstIdx->erase( removalProbe );
							if( mapFirstIdx->empty() ) {
								delete mapFirstIdx;
								mapFirstIdx = NULL;
								indexByFirstIdx->erase( searchFirstIdx );
							}
						}
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( obj->getRequiredExpandEach() );
				auto searchEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEachIdx = searchEachIdx->second;
					if( mapEachIdx != NULL ) {
						auto removalProbe = mapEachIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapEachIdx->end() ) {
							mapEachIdx->erase( removalProbe );
							if( mapEachIdx->empty() ) {
								delete mapEachIdx;
								mapEachIdx = NULL;
								indexByEachIdx->erase( searchEachIdx );
							}
						}
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByLastIdxKey keyLastIdx;
				if( obj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( obj->getOptionalExpandLastValue() );
				}
				auto searchLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLastIdx = searchLastIdx->second;
					if( mapLastIdx != NULL ) {
						auto removalProbe = mapLastIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapLastIdx->end() ) {
							mapLastIdx->erase( removalProbe );
							if( mapLastIdx->empty() ) {
								delete mapLastIdx;
								mapLastIdx = NULL;
								indexByLastIdx->erase( searchLastIdx );
							}
						}
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByLoneIdxKey keyLoneIdx;
				if( obj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( obj->getOptionalExpandLoneValue() );
				}
				auto searchLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapLoneIdx = searchLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						auto removalProbe = mapLoneIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapLoneIdx->end() ) {
							mapLoneIdx->erase( removalProbe );
							if( mapLoneIdx->empty() ) {
								delete mapLoneIdx;
								mapLoneIdx = NULL;
								indexByLoneIdx->erase( searchLoneIdx );
							}
						}
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				cfcore::CFGenKbGelSpreadByEmptyIdxKey keyEmptyIdx;
				if( obj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( obj->getOptionalExpandEmptyValue() );
				}
				auto searchEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSpreadObj*>* mapEmptyIdx = searchEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						auto removalProbe = mapEmptyIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapEmptyIdx->end() ) {
							mapEmptyIdx->erase( removalProbe );
							if( mapEmptyIdx->empty() ) {
								delete mapEmptyIdx;
								mapEmptyIdx = NULL;
								indexByEmptyIdx->erase( searchEmptyIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDetachFromIndexesGelInstruction( Obj );
	}


}
