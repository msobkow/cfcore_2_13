// Description: C++18 Table Object implementation for CFGenKb.

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

	const std::string CFGenKbGelIteratorTableObj::CLASS_NAME( "CFGenKbGelIteratorTableObj" );
	const std::string CFGenKbGelIteratorTableObj::TABLE_NAME( "GelIterator" );
	const std::string CFGenKbGelIteratorTableObj::TABLE_DBNAME( "geliter" );

	CFGenKbGelIteratorTableObj::CFGenKbGelIteratorTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
		allGelIterator = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByBeforeIdx = new std::map< cfcore::CFGenKbGelIteratorByBeforeIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByFirstIdx = new std::map< cfcore::CFGenKbGelIteratorByFirstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByEachIdx = new std::map< cfcore::CFGenKbGelIteratorByEachIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByLastIdx = new std::map< cfcore::CFGenKbGelIteratorByLastIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByLoneIdx = new std::map< cfcore::CFGenKbGelIteratorByLoneIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByEmptyIdx = new std::map< cfcore::CFGenKbGelIteratorByEmptyIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
	}

	CFGenKbGelIteratorTableObj::CFGenKbGelIteratorTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
		allGelIterator = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByBeforeIdx = new std::map< cfcore::CFGenKbGelIteratorByBeforeIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByFirstIdx = new std::map< cfcore::CFGenKbGelIteratorByFirstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByEachIdx = new std::map< cfcore::CFGenKbGelIteratorByEachIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByLastIdx = new std::map< cfcore::CFGenKbGelIteratorByLastIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByLoneIdx = new std::map< cfcore::CFGenKbGelIteratorByLoneIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
		indexByEmptyIdx = new std::map< cfcore::CFGenKbGelIteratorByEmptyIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
	}

	CFGenKbGelIteratorTableObj::~CFGenKbGelIteratorTableObj() {
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelIteratorTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelIteratorTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelIteratorTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelIteratorTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelIteratorTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelIteratorTableObj::minimizeMemory() {
		if( allGelIterator != NULL ) {
			allGelIterator->clear();
			delete allGelIterator;
			allGelIterator = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByTenantIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByGelCacheIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByChainIdx = NULL;
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
		if( indexByBeforeIdx != NULL ) {
			std::map< cfcore::CFGenKbGelIteratorByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByBeforeIdx = indexByBeforeIdx->begin();
			std::map< cfcore::CFGenKbGelIteratorByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByBeforeIdx = indexByBeforeIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByBeforeIdx = NULL;
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
			std::map< cfcore::CFGenKbGelIteratorByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByFirstIdx = indexByFirstIdx->begin();
			std::map< cfcore::CFGenKbGelIteratorByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByFirstIdx = indexByFirstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByFirstIdx = NULL;
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
			std::map< cfcore::CFGenKbGelIteratorByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByEachIdx = indexByEachIdx->begin();
			std::map< cfcore::CFGenKbGelIteratorByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByEachIdx = indexByEachIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByEachIdx = NULL;
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
			std::map< cfcore::CFGenKbGelIteratorByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByLastIdx = indexByLastIdx->begin();
			std::map< cfcore::CFGenKbGelIteratorByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByLastIdx = indexByLastIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByLastIdx = NULL;
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
			std::map< cfcore::CFGenKbGelIteratorByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByLoneIdx = indexByLoneIdx->begin();
			std::map< cfcore::CFGenKbGelIteratorByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByLoneIdx = indexByLoneIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByLoneIdx = NULL;
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
			std::map< cfcore::CFGenKbGelIteratorByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator iterByEmptyIdx = indexByEmptyIdx->begin();
			std::map< cfcore::CFGenKbGelIteratorByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* >::iterator endByEmptyIdx = indexByEmptyIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* curByEmptyIdx = NULL;
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

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::newInstance() {
		cfcore::ICFGenKbGelIteratorObj* inst = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( new CFGenKbGelIteratorObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelIteratorEditObj* CFGenKbGelIteratorTableObj::newEditInstance( cfcore::ICFGenKbGelIteratorObj* orig ) {
		cfcore::ICFGenKbGelIteratorEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelIteratorEditObj*>( new CFGenKbGelIteratorEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::realizeGelIterator( cfcore::ICFGenKbGelIteratorObj* Obj ) {
		static const std::string S_ProcName( "realizeGelIterator" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelIteratorObj* obj = Obj;
		cfcore::ICFGenKbGelIteratorObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelIteratorObj* keepObj = NULL;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByBeforeIdxKey keyBeforeIdx;
				if( keepObj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( keepObj->getOptionalExpandBeforeValue() );
				}
				auto searchBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapBeforeIdx = searchBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						auto removalProbe = mapBeforeIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapBeforeIdx->end() ) {
							mapBeforeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByFirstIdxKey keyFirstIdx;
				if( keepObj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( keepObj->getOptionalExpandFirstValue() );
				}
				auto searchFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapFirstIdx = searchFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						auto removalProbe = mapFirstIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapFirstIdx->end() ) {
							mapFirstIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( keepObj->getRequiredExpandEach() );
				auto searchEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEachIdx = searchEachIdx->second;
					if( mapEachIdx != NULL ) {
						auto removalProbe = mapEachIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEachIdx->end() ) {
							mapEachIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByLastIdxKey keyLastIdx;
				if( keepObj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( keepObj->getOptionalExpandLastValue() );
				}
				auto searchLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLastIdx = searchLastIdx->second;
					if( mapLastIdx != NULL ) {
						auto removalProbe = mapLastIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLastIdx->end() ) {
							mapLastIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByLoneIdxKey keyLoneIdx;
				if( keepObj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( keepObj->getOptionalExpandLoneValue() );
				}
				auto searchLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLoneIdx = searchLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						auto removalProbe = mapLoneIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLoneIdx->end() ) {
							mapLoneIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByEmptyIdxKey keyEmptyIdx;
				if( keepObj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( keepObj->getOptionalExpandEmptyValue() );
				}
				auto searchEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEmptyIdx = searchEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						auto removalProbe = mapEmptyIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEmptyIdx->end() ) {
							mapEmptyIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( Obj ) );
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
				cfcore::ICFGenKbGelIteratorObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				static const std::string S_ABeforeIdxObj( "aBeforeIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aBeforeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aBeforeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABeforeIdxObj );
				}
				cfcore::CFGenKbGelIteratorByBeforeIdxKey keyBeforeIdx;
				if( keepObj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( keepObj->getOptionalExpandBeforeValue() );
				}
				auto searchIndexByBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapBeforeIdx = searchIndexByBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						mapBeforeIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aBeforeIdxObj ) );
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				static const std::string S_AFirstIdxObj( "aFirstIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aFirstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aFirstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFirstIdxObj );
				}
				cfcore::CFGenKbGelIteratorByFirstIdxKey keyFirstIdx;
				if( keepObj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( keepObj->getOptionalExpandFirstValue() );
				}
				auto searchIndexByFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapFirstIdx = searchIndexByFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						mapFirstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aFirstIdxObj ) );
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				static const std::string S_AEachIdxObj( "aEachIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aEachIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aEachIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEachIdxObj );
				}
				cfcore::CFGenKbGelIteratorByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( keepObj->getRequiredExpandEach() );
				auto searchIndexByEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchIndexByEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEachIdx = searchIndexByEachIdx->second;
					if( mapEachIdx != NULL ) {
						mapEachIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aEachIdxObj ) );
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				static const std::string S_ALastIdxObj( "aLastIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aLastIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aLastIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALastIdxObj );
				}
				cfcore::CFGenKbGelIteratorByLastIdxKey keyLastIdx;
				if( keepObj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( keepObj->getOptionalExpandLastValue() );
				}
				auto searchIndexByLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchIndexByLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLastIdx = searchIndexByLastIdx->second;
					if( mapLastIdx != NULL ) {
						mapLastIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aLastIdxObj ) );
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				static const std::string S_ALoneIdxObj( "aLoneIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aLoneIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aLoneIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALoneIdxObj );
				}
				cfcore::CFGenKbGelIteratorByLoneIdxKey keyLoneIdx;
				if( keepObj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( keepObj->getOptionalExpandLoneValue() );
				}
				auto searchIndexByLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLoneIdx = searchIndexByLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						mapLoneIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aLoneIdxObj ) );
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				static const std::string S_AEmptyIdxObj( "aEmptyIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aEmptyIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aEmptyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEmptyIdxObj );
				}
				cfcore::CFGenKbGelIteratorByEmptyIdxKey keyEmptyIdx;
				if( keepObj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( keepObj->getOptionalExpandEmptyValue() );
				}
				auto searchIndexByEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEmptyIdx = searchIndexByEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						mapEmptyIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aEmptyIdxObj ) );
					}
				}
			}

			if( allGelIterator != NULL ) {
				allGelIterator->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByBeforeIdx != NULL ) {
				static const std::string S_ABeforeIdxObj( "aBeforeIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aBeforeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aBeforeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABeforeIdxObj );
				}
				cfcore::CFGenKbGelIteratorByBeforeIdxKey keyBeforeIdx;
				if( keepObj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( keepObj->getOptionalExpandBeforeValue() );
				}
				auto searchIndexByBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapBeforeIdx = searchIndexByBeforeIdx->second;
					if( mapBeforeIdx != NULL ) {
						mapBeforeIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aBeforeIdxObj ) );
					}
				}
			}

			if( indexByFirstIdx != NULL ) {
				static const std::string S_AFirstIdxObj( "aFirstIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aFirstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aFirstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFirstIdxObj );
				}
				cfcore::CFGenKbGelIteratorByFirstIdxKey keyFirstIdx;
				if( keepObj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( keepObj->getOptionalExpandFirstValue() );
				}
				auto searchIndexByFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapFirstIdx = searchIndexByFirstIdx->second;
					if( mapFirstIdx != NULL ) {
						mapFirstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aFirstIdxObj ) );
					}
				}
			}

			if( indexByEachIdx != NULL ) {
				static const std::string S_AEachIdxObj( "aEachIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aEachIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aEachIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEachIdxObj );
				}
				cfcore::CFGenKbGelIteratorByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( keepObj->getRequiredExpandEach() );
				auto searchIndexByEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchIndexByEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEachIdx = searchIndexByEachIdx->second;
					if( mapEachIdx != NULL ) {
						mapEachIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aEachIdxObj ) );
					}
				}
			}

			if( indexByLastIdx != NULL ) {
				static const std::string S_ALastIdxObj( "aLastIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aLastIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aLastIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALastIdxObj );
				}
				cfcore::CFGenKbGelIteratorByLastIdxKey keyLastIdx;
				if( keepObj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( keepObj->getOptionalExpandLastValue() );
				}
				auto searchIndexByLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchIndexByLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLastIdx = searchIndexByLastIdx->second;
					if( mapLastIdx != NULL ) {
						mapLastIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aLastIdxObj ) );
					}
				}
			}

			if( indexByLoneIdx != NULL ) {
				static const std::string S_ALoneIdxObj( "aLoneIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aLoneIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aLoneIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALoneIdxObj );
				}
				cfcore::CFGenKbGelIteratorByLoneIdxKey keyLoneIdx;
				if( keepObj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( keepObj->getOptionalExpandLoneValue() );
				}
				auto searchIndexByLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLoneIdx = searchIndexByLoneIdx->second;
					if( mapLoneIdx != NULL ) {
						mapLoneIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aLoneIdxObj ) );
					}
				}
			}

			if( indexByEmptyIdx != NULL ) {
				static const std::string S_AEmptyIdxObj( "aEmptyIdxObj" );
				cfcore::ICFGenKbGelIteratorObj* aEmptyIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( keepObj );
				if( aEmptyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEmptyIdxObj );
				}
				cfcore::CFGenKbGelIteratorByEmptyIdxKey keyEmptyIdx;
				if( keepObj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( keepObj->getOptionalExpandEmptyValue() );
				}
				auto searchIndexByEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEmptyIdx = searchIndexByEmptyIdx->second;
					if( mapEmptyIdx != NULL ) {
						mapEmptyIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), aEmptyIdxObj ) );
					}
				}
			}

			if( allGelIterator != NULL ) {
				allGelIterator->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		cfcore::ICFGenKbGelIteratorObj* existingObj = readCachedGelIteratorByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByChainIdx( ChainInstTenantId,
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
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::reallyDeepDisposeGelIterator( cfcore::ICFGenKbGelIteratorObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelIterator" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelIteratorObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDetachFromIndexesGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj ) );
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByBeforeIdx( const std::string* ExpandBefore ) {
		static const std::string S_ProcName( "deepDisposeByBeforeIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByBeforeIdx( ExpandBefore );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByFirstIdx( const std::string* ExpandFirst ) {
		static const std::string S_ProcName( "deepDisposeByFirstIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByFirstIdx( ExpandFirst );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByEachIdx( const std::string& ExpandEach ) {
		static const std::string S_ProcName( "deepDisposeByEachIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByEachIdx( ExpandEach );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByLastIdx( const std::string* ExpandLast ) {
		static const std::string S_ProcName( "deepDisposeByLastIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByLastIdx( ExpandLast );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByLoneIdx( const std::string* ExpandLone ) {
		static const std::string S_ProcName( "deepDisposeByLoneIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByLoneIdx( ExpandLone );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelIteratorTableObj::deepDisposeByEmptyIdx( const std::string* ExpandEmpty ) {
		static const std::string S_ProcName( "deepDisposeByEmptyIdx" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGelIteratorObj*> matchesFound = readCachedGelIteratorByEmptyIdx( ExpandEmpty );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::createGelIterator( cfcore::ICFGenKbGelIteratorEditObj* Obj ) {
		static const std::string S_ProcName( "createGelIterator" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelIteratorObj* obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelIteratorBuff* buff = dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->createGelIterator(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::readGelIterator( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelIterator" );
		cfcore::ICFGenKbGelIteratorObj* obj = NULL;
		cfcore::ICFGenKbGelIteratorObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelIteratorBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::lockGelIterator( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelIterator" );
		cfcore::ICFGenKbGelIteratorObj* locked = NULL;
		cfcore::CFGenKbGelIteratorBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readAllGelIterator( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelIterator" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelIteratorObj* realized = NULL;
		if( forceRead || ( allGelIterator == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelIteratorObj*>();
			allGelIterator = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelIteratorBuff* buff = NULL;
			cfcore::ICFGenKbGelIteratorObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelIterator->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelIterator->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		auto valIter = allGelIterator->begin();
		size_t idx = 0;
		while( valIter != allGelIterator->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::readGelIteratorByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelIteratorObj* obj = readGelIterator( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByChainIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByBeforeIdx( const std::string* ExpandBefore,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByBeforeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelIteratorByBeforeIdxKey key;
		if( ExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *ExpandBefore );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByBeforeIdx == NULL ) {
			indexByBeforeIdx = new std::map< cfcore::CFGenKbGelIteratorByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelIteratorObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByBeforeIdx( schema->getAuthorization(),
				ExpandBefore );
			cfcore::CFGenKbGelIteratorBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByBeforeIdx->erase( searchIndexByBeforeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByBeforeIdx->insert( std::map< cfcore::CFGenKbGelIteratorByBeforeIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByFirstIdx( const std::string* ExpandFirst,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByFirstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelIteratorByFirstIdxKey key;
		if( ExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *ExpandFirst );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByFirstIdx == NULL ) {
			indexByFirstIdx = new std::map< cfcore::CFGenKbGelIteratorByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelIteratorObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByFirstIdx( schema->getAuthorization(),
				ExpandFirst );
			cfcore::CFGenKbGelIteratorBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFirstIdx->erase( searchIndexByFirstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFirstIdx->insert( std::map< cfcore::CFGenKbGelIteratorByFirstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByEachIdx( const std::string& ExpandEach,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByEachIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelIteratorByEachIdxKey key;
		key.setRequiredExpandEach( ExpandEach );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByEachIdx == NULL ) {
			indexByEachIdx = new std::map< cfcore::CFGenKbGelIteratorByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelIteratorObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByEachIdx( schema->getAuthorization(),
				ExpandEach );
			cfcore::CFGenKbGelIteratorBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEachIdx->erase( searchIndexByEachIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEachIdx->insert( std::map< cfcore::CFGenKbGelIteratorByEachIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByLastIdx( const std::string* ExpandLast,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByLastIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelIteratorByLastIdxKey key;
		if( ExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *ExpandLast );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByLastIdx == NULL ) {
			indexByLastIdx = new std::map< cfcore::CFGenKbGelIteratorByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelIteratorObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByLastIdx( schema->getAuthorization(),
				ExpandLast );
			cfcore::CFGenKbGelIteratorBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLastIdx->erase( searchIndexByLastIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLastIdx->insert( std::map< cfcore::CFGenKbGelIteratorByLastIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByLoneIdx( const std::string* ExpandLone,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByLoneIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelIteratorByLoneIdxKey key;
		if( ExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *ExpandLone );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByLoneIdx == NULL ) {
			indexByLoneIdx = new std::map< cfcore::CFGenKbGelIteratorByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelIteratorObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByLoneIdx( schema->getAuthorization(),
				ExpandLone );
			cfcore::CFGenKbGelIteratorBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLoneIdx->erase( searchIndexByLoneIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLoneIdx->insert( std::map< cfcore::CFGenKbGelIteratorByLoneIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readGelIteratorByEmptyIdx( const std::string* ExpandEmpty,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelIteratorByEmptyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelIteratorByEmptyIdxKey key;
		if( ExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *ExpandEmpty );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* oldDict;
		if( indexByEmptyIdx == NULL ) {
			indexByEmptyIdx = new std::map< cfcore::CFGenKbGelIteratorByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>();
			cfcore::ICFGenKbGelIteratorObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByEmptyIdx( schema->getAuthorization(),
				ExpandEmpty );
			cfcore::CFGenKbGelIteratorBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEmptyIdx->erase( searchIndexByEmptyIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEmptyIdx->insert( std::map< cfcore::CFGenKbGelIteratorByEmptyIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::readCachedGelIterator( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelIterator" );
		cfcore::ICFGenKbGelIteratorObj* obj = NULL;
		cfcore::ICFGenKbGelIteratorObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::readCachedGelIteratorByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelIteratorObj* obj = readCachedGelIterator( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
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

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
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

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
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

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByBeforeIdx( const std::string* ExpandBefore )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByBeforeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelIteratorByBeforeIdxKey key;
		if( ExpandBefore == NULL ) {
			key.setOptionalExpandBeforeNull();
		}
		else {
			key.setOptionalExpandBeforeValue( *ExpandBefore );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByBeforeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByBeforeIdx = indexByBeforeIdx->find( key );
		if( searchIndexByBeforeIdx != indexByBeforeIdx->end() ) {
			dict = searchIndexByBeforeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByFirstIdx( const std::string* ExpandFirst )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByFirstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelIteratorByFirstIdxKey key;
		if( ExpandFirst == NULL ) {
			key.setOptionalExpandFirstNull();
		}
		else {
			key.setOptionalExpandFirstValue( *ExpandFirst );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByFirstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFirstIdx = indexByFirstIdx->find( key );
		if( searchIndexByFirstIdx != indexByFirstIdx->end() ) {
			dict = searchIndexByFirstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByEachIdx( const std::string& ExpandEach )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByEachIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelIteratorByEachIdxKey key;
		key.setRequiredExpandEach( ExpandEach );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByEachIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEachIdx = indexByEachIdx->find( key );
		if( searchIndexByEachIdx != indexByEachIdx->end() ) {
			dict = searchIndexByEachIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByLastIdx( const std::string* ExpandLast )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByLastIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelIteratorByLastIdxKey key;
		if( ExpandLast == NULL ) {
			key.setOptionalExpandLastNull();
		}
		else {
			key.setOptionalExpandLastValue( *ExpandLast );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByLastIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLastIdx = indexByLastIdx->find( key );
		if( searchIndexByLastIdx != indexByLastIdx->end() ) {
			dict = searchIndexByLastIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByLoneIdx( const std::string* ExpandLone )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByLoneIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelIteratorByLoneIdxKey key;
		if( ExpandLone == NULL ) {
			key.setOptionalExpandLoneNull();
		}
		else {
			key.setOptionalExpandLoneValue( *ExpandLone );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByLoneIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLoneIdx = indexByLoneIdx->find( key );
		if( searchIndexByLoneIdx != indexByLoneIdx->end() ) {
			dict = searchIndexByLoneIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelIteratorObj*> CFGenKbGelIteratorTableObj::readCachedGelIteratorByEmptyIdx( const std::string* ExpandEmpty )
	{
		static const std::string S_ProcName( "readCachedGelIteratorByEmptyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
		cfcore::CFGenKbGelIteratorByEmptyIdxKey key;
		if( ExpandEmpty == NULL ) {
			key.setOptionalExpandEmptyNull();
		}
		else {
			key.setOptionalExpandEmptyValue( *ExpandEmpty );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* dict;
		if( indexByEmptyIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEmptyIdx = indexByEmptyIdx->find( key );
		if( searchIndexByEmptyIdx != indexByEmptyIdx->end() ) {
			dict = searchIndexByEmptyIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorTableObj::updateGelIterator( cfcore::ICFGenKbGelIteratorEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelIterator" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelIteratorObj* obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelIteratorBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->updateGelIterator( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelIteratorBuff*>( Obj->getGelIteratorBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj->realize() );
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

	void CFGenKbGelIteratorTableObj::deleteGelIterator( cfcore::ICFGenKbGelIteratorEditObj* Obj ) {
		cfcore::ICFGenKbGelIteratorObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIterator( schema->getAuthorization(),
			obj->getGelIteratorBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelIteratorObj* obj = readGelIterator( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelIteratorEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelIteratorEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelIteratorEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByBeforeIdx( const std::string* ExpandBefore )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByBeforeIdx( schema->getAuthorization(),
				ExpandBefore );
		deepDisposeByBeforeIdx( ExpandBefore );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByFirstIdx( const std::string* ExpandFirst )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByFirstIdx( schema->getAuthorization(),
				ExpandFirst );
		deepDisposeByFirstIdx( ExpandFirst );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByEachIdx( const std::string& ExpandEach )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByEachIdx( schema->getAuthorization(),
				ExpandEach );
		deepDisposeByEachIdx( ExpandEach );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByLastIdx( const std::string* ExpandLast )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByLastIdx( schema->getAuthorization(),
				ExpandLast );
		deepDisposeByLastIdx( ExpandLast );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByLoneIdx( const std::string* ExpandLone )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByLoneIdx( schema->getAuthorization(),
				ExpandLone );
		deepDisposeByLoneIdx( ExpandLone );
	}

	void CFGenKbGelIteratorTableObj::deleteGelIteratorByEmptyIdx( const std::string* ExpandEmpty )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->deleteGelIteratorByEmptyIdx( schema->getAuthorization(),
				ExpandEmpty );
		deepDisposeByEmptyIdx( ExpandEmpty );
	}

	void CFGenKbGelIteratorTableObj::reallyDetachFromIndexesGelIterator( cfcore::ICFGenKbGelIteratorObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelIterator" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelIteratorObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelIteratorObj* existingObj = searchMembers->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapChainIdx = searchChainIdx->second;
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

			if( indexByBeforeIdx != NULL ) {
				cfcore::CFGenKbGelIteratorByBeforeIdxKey keyBeforeIdx;
				if( obj->isOptionalExpandBeforeNull() ) {
					keyBeforeIdx.setOptionalExpandBeforeNull();
				}
				else {
					keyBeforeIdx.setOptionalExpandBeforeValue( obj->getOptionalExpandBeforeValue() );
				}
				auto searchBeforeIdx = indexByBeforeIdx->find( keyBeforeIdx );
				if( searchBeforeIdx != indexByBeforeIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapBeforeIdx = searchBeforeIdx->second;
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
				cfcore::CFGenKbGelIteratorByFirstIdxKey keyFirstIdx;
				if( obj->isOptionalExpandFirstNull() ) {
					keyFirstIdx.setOptionalExpandFirstNull();
				}
				else {
					keyFirstIdx.setOptionalExpandFirstValue( obj->getOptionalExpandFirstValue() );
				}
				auto searchFirstIdx = indexByFirstIdx->find( keyFirstIdx );
				if( searchFirstIdx != indexByFirstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapFirstIdx = searchFirstIdx->second;
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
				cfcore::CFGenKbGelIteratorByEachIdxKey keyEachIdx;
				keyEachIdx.setRequiredExpandEach( obj->getRequiredExpandEach() );
				auto searchEachIdx = indexByEachIdx->find( keyEachIdx );
				if( searchEachIdx != indexByEachIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEachIdx = searchEachIdx->second;
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
				cfcore::CFGenKbGelIteratorByLastIdxKey keyLastIdx;
				if( obj->isOptionalExpandLastNull() ) {
					keyLastIdx.setOptionalExpandLastNull();
				}
				else {
					keyLastIdx.setOptionalExpandLastValue( obj->getOptionalExpandLastValue() );
				}
				auto searchLastIdx = indexByLastIdx->find( keyLastIdx );
				if( searchLastIdx != indexByLastIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLastIdx = searchLastIdx->second;
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
				cfcore::CFGenKbGelIteratorByLoneIdxKey keyLoneIdx;
				if( obj->isOptionalExpandLoneNull() ) {
					keyLoneIdx.setOptionalExpandLoneNull();
				}
				else {
					keyLoneIdx.setOptionalExpandLoneValue( obj->getOptionalExpandLoneValue() );
				}
				auto searchLoneIdx = indexByLoneIdx->find( keyLoneIdx );
				if( searchLoneIdx != indexByLoneIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapLoneIdx = searchLoneIdx->second;
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
				cfcore::CFGenKbGelIteratorByEmptyIdxKey keyEmptyIdx;
				if( obj->isOptionalExpandEmptyNull() ) {
					keyEmptyIdx.setOptionalExpandEmptyNull();
				}
				else {
					keyEmptyIdx.setOptionalExpandEmptyValue( obj->getOptionalExpandEmptyValue() );
				}
				auto searchEmptyIdx = indexByEmptyIdx->find( keyEmptyIdx );
				if( searchEmptyIdx != indexByEmptyIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelIteratorObj*>* mapEmptyIdx = searchEmptyIdx->second;
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
