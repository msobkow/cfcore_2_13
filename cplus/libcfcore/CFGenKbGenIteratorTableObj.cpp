// Description: C++18 Table Object implementation for CFGenKb.

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

	const std::string CFGenKbGenIteratorTableObj::CLASS_NAME( "CFGenKbGenIteratorTableObj" );
	const std::string CFGenKbGenIteratorTableObj::TABLE_NAME( "GenIterator" );
	const std::string CFGenKbGenIteratorTableObj::TABLE_DBNAME( "kbgeniter" );

	CFGenKbGenIteratorTableObj::CFGenKbGenIteratorTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
		allGenIterator = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenIteratorObj*>();
		indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
	}

	CFGenKbGenIteratorTableObj::CFGenKbGenIteratorTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
		allGenIterator = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenIteratorObj*>();
		indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
	}

	CFGenKbGenIteratorTableObj::~CFGenKbGenIteratorTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByCartIdx != NULL ) {
			delete indexByCartIdx;
			indexByCartIdx = NULL;
		}
		if( indexByRuleTypeIdx != NULL ) {
			delete indexByRuleTypeIdx;
			indexByRuleTypeIdx = NULL;
		}
		if( indexByToolSetIdx != NULL ) {
			delete indexByToolSetIdx;
			indexByToolSetIdx = NULL;
		}
		if( indexByScopeIdx != NULL ) {
			delete indexByScopeIdx;
			indexByScopeIdx = NULL;
		}
		if( indexByGenDefIdx != NULL ) {
			delete indexByGenDefIdx;
			indexByGenDefIdx = NULL;
		}
		if( indexByAltIdx != NULL ) {
			delete indexByAltIdx;
			indexByAltIdx = NULL;
		}
		if( indexByGelExecIdx != NULL ) {
			delete indexByGelExecIdx;
			indexByGelExecIdx = NULL;
		}
		if( indexByProbeIdx != NULL ) {
			delete indexByProbeIdx;
			indexByProbeIdx = NULL;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGenIteratorTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGenIteratorTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGenIteratorTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGenIteratorTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGenIteratorTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGenIteratorTableObj::minimizeMemory() {
		if( allGenIterator != NULL ) {
			allGenIterator->clear();
			delete allGenIterator;
			allGenIterator = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByTenantIdx = NULL;
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
		if( indexByCartIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByCartIdx = indexByCartIdx->begin();
			std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByCartIdx = indexByCartIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByCartIdx = NULL;
			while( iterByCartIdx != endByCartIdx ) {
				curByCartIdx = iterByCartIdx->second;
				if( curByCartIdx != NULL ) {
					curByCartIdx->clear();
					delete curByCartIdx;
					curByCartIdx = NULL;
					iterByCartIdx->second = NULL;
				}
				iterByCartIdx ++;
			}
			indexByCartIdx->clear();
		}
		if( indexByRuleTypeIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByRuleTypeIdx = indexByRuleTypeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByRuleTypeIdx = indexByRuleTypeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByRuleTypeIdx = NULL;
			while( iterByRuleTypeIdx != endByRuleTypeIdx ) {
				curByRuleTypeIdx = iterByRuleTypeIdx->second;
				if( curByRuleTypeIdx != NULL ) {
					curByRuleTypeIdx->clear();
					delete curByRuleTypeIdx;
					curByRuleTypeIdx = NULL;
					iterByRuleTypeIdx->second = NULL;
				}
				iterByRuleTypeIdx ++;
			}
			indexByRuleTypeIdx->clear();
		}
		if( indexByToolSetIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByToolSetIdx = indexByToolSetIdx->begin();
			std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByToolSetIdx = indexByToolSetIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByToolSetIdx = NULL;
			while( iterByToolSetIdx != endByToolSetIdx ) {
				curByToolSetIdx = iterByToolSetIdx->second;
				if( curByToolSetIdx != NULL ) {
					curByToolSetIdx->clear();
					delete curByToolSetIdx;
					curByToolSetIdx = NULL;
					iterByToolSetIdx->second = NULL;
				}
				iterByToolSetIdx ++;
			}
			indexByToolSetIdx->clear();
		}
		if( indexByScopeIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByScopeIdx = indexByScopeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByScopeIdx = indexByScopeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByScopeIdx = NULL;
			while( iterByScopeIdx != endByScopeIdx ) {
				curByScopeIdx = iterByScopeIdx->second;
				if( curByScopeIdx != NULL ) {
					curByScopeIdx->clear();
					delete curByScopeIdx;
					curByScopeIdx = NULL;
					iterByScopeIdx->second = NULL;
				}
				iterByScopeIdx ++;
			}
			indexByScopeIdx->clear();
		}
		if( indexByGenDefIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByGenDefIdx = indexByGenDefIdx->begin();
			std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByGenDefIdx = indexByGenDefIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByGenDefIdx = NULL;
			while( iterByGenDefIdx != endByGenDefIdx ) {
				curByGenDefIdx = iterByGenDefIdx->second;
				if( curByGenDefIdx != NULL ) {
					curByGenDefIdx->clear();
					delete curByGenDefIdx;
					curByGenDefIdx = NULL;
					iterByGenDefIdx->second = NULL;
				}
				iterByGenDefIdx ++;
			}
			indexByGenDefIdx->clear();
		}
		if( indexByAltIdx != NULL ) {
			indexByAltIdx->clear();
		}
		if( indexByGelExecIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByGelExecIdx = indexByGelExecIdx->begin();
			std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByGelExecIdx = indexByGelExecIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByGelExecIdx = NULL;
			while( iterByGelExecIdx != endByGelExecIdx ) {
				curByGelExecIdx = iterByGelExecIdx->second;
				if( curByGelExecIdx != NULL ) {
					curByGelExecIdx->clear();
					delete curByGelExecIdx;
					curByGelExecIdx = NULL;
					iterByGelExecIdx->second = NULL;
				}
				iterByGelExecIdx ++;
			}
			indexByGelExecIdx->clear();
		}
		if( indexByProbeIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator iterByProbeIdx = indexByProbeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* >::iterator endByProbeIdx = indexByProbeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* curByProbeIdx = NULL;
			while( iterByProbeIdx != endByProbeIdx ) {
				curByProbeIdx = iterByProbeIdx->second;
				if( curByProbeIdx != NULL ) {
					curByProbeIdx->clear();
					delete curByProbeIdx;
					curByProbeIdx = NULL;
					iterByProbeIdx->second = NULL;
				}
				iterByProbeIdx ++;
			}
			indexByProbeIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::newInstance() {
		cfcore::ICFGenKbGenIteratorObj* inst = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( new CFGenKbGenIteratorObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGenIteratorEditObj* CFGenKbGenIteratorTableObj::newEditInstance( cfcore::ICFGenKbGenIteratorObj* orig ) {
		cfcore::ICFGenKbGenIteratorEditObj* edit = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( new CFGenKbGenIteratorEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::realizeGenIterator( cfcore::ICFGenKbGenIteratorObj* Obj ) {
		static const std::string S_ProcName( "realizeGenIterator" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGenIteratorObj* obj = Obj;
		cfcore::ICFGenKbGenIteratorObj* existingObj = NULL;
		cfcore::CFGenKbGenItemPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGenIteratorObj* keepObj = NULL;
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
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( keepObj->getRequiredCartridgeId() );
				auto searchCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapCartIdx = searchCartIdx->second;
					if( mapCartIdx != NULL ) {
						auto removalProbe = mapCartIdx->find( *pkey );
						if( removalProbe != mapCartIdx->end() ) {
							mapCartIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( keepObj->getRequiredRuleTypeId() );
				auto searchRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapRuleTypeIdx = searchRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						auto removalProbe = mapRuleTypeIdx->find( *pkey );
						if( removalProbe != mapRuleTypeIdx->end() ) {
							mapRuleTypeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				auto searchToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapToolSetIdx = searchToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						auto removalProbe = mapToolSetIdx->find( *pkey );
						if( removalProbe != mapToolSetIdx->end() ) {
							mapToolSetIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				auto searchScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *pkey );
						if( removalProbe != mapScopeIdx->end() ) {
							mapScopeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto searchGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGenDefIdx = searchGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						auto removalProbe = mapGenDefIdx->find( *pkey );
						if( removalProbe != mapGenDefIdx->end() ) {
							mapGenDefIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( keepObj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto removalProbe = indexByAltIdx->find( keyAltIdx );
				if( removalProbe != indexByAltIdx->end() ) {
					indexByAltIdx->erase( removalProbe );
				}
			}

			if( indexByGelExecIdx != NULL ) {
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( keepObj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( keepObj->getOptionalGelExecutableTenantIdValue() );
				}
				if( keepObj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( keepObj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( keepObj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( keepObj->getOptionalGelExecutableIdValue() );
				}
				auto searchGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGelExecIdx = searchGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						auto removalProbe = mapGelExecIdx->find( *pkey );
						if( removalProbe != mapGelExecIdx->end() ) {
							mapGelExecIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( keepObj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( keepObj->getOptionalProbeTenantIdValue() );
				}
				if( keepObj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( keepObj->getOptionalProbeCartridgeIdValue() );
				}
				if( keepObj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( keepObj->getOptionalProbeGenItemIdValue() );
				}
				auto searchProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapProbeIdx = searchProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						auto removalProbe = mapProbeIdx->find( *pkey );
						if( removalProbe != mapProbeIdx->end() ) {
							mapProbeIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->realizeGenItem( Obj ) );
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
				cfcore::ICFGenKbGenIteratorObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				static const std::string S_ACartIdxObj( "aCartIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aCartIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aCartIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACartIdxObj );
				}
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( keepObj->getRequiredCartridgeId() );
				auto searchIndexByCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchIndexByCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapCartIdx = searchIndexByCartIdx->second;
					if( mapCartIdx != NULL ) {
						mapCartIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aCartIdxObj ) );
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				static const std::string S_ARuleTypeIdxObj( "aRuleTypeIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aRuleTypeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aRuleTypeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARuleTypeIdxObj );
				}
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( keepObj->getRequiredRuleTypeId() );
				auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapRuleTypeIdx = searchIndexByRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						mapRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aRuleTypeIdxObj ) );
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				static const std::string S_AToolSetIdxObj( "aToolSetIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aToolSetIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aToolSetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToolSetIdxObj );
				}
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				auto searchIndexByToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapToolSetIdx = searchIndexByToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						mapToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aToolSetIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aScopeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aScopeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AScopeIdxObj );
				}
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				auto searchIndexByScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				static const std::string S_AGenDefIdxObj( "aGenDefIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aGenDefIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aGenDefIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGenDefIdxObj );
				}
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto searchIndexByGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGenDefIdx = searchIndexByGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						mapGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aGenDefIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aAltIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIdxObj );
				}
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( keepObj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( indexByGelExecIdx != NULL ) {
				static const std::string S_AGelExecIdxObj( "aGelExecIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aGelExecIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aGelExecIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelExecIdxObj );
				}
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( keepObj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( keepObj->getOptionalGelExecutableTenantIdValue() );
				}
				if( keepObj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( keepObj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( keepObj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( keepObj->getOptionalGelExecutableIdValue() );
				}
				auto searchIndexByGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGelExecIdx = searchIndexByGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						mapGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aGelExecIdxObj ) );
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				static const std::string S_AProbeIdxObj( "aProbeIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aProbeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aProbeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AProbeIdxObj );
				}
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( keepObj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( keepObj->getOptionalProbeTenantIdValue() );
				}
				if( keepObj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( keepObj->getOptionalProbeCartridgeIdValue() );
				}
				if( keepObj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( keepObj->getOptionalProbeGenItemIdValue() );
				}
				auto searchIndexByProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapProbeIdx = searchIndexByProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						mapProbeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aProbeIdxObj ) );
					}
				}
			}

			if( allGenIterator != NULL ) {
				allGenIterator->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->realizeGenItem( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				static const std::string S_ACartIdxObj( "aCartIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aCartIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aCartIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACartIdxObj );
				}
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( keepObj->getRequiredCartridgeId() );
				auto searchIndexByCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchIndexByCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapCartIdx = searchIndexByCartIdx->second;
					if( mapCartIdx != NULL ) {
						mapCartIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aCartIdxObj ) );
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				static const std::string S_ARuleTypeIdxObj( "aRuleTypeIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aRuleTypeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aRuleTypeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARuleTypeIdxObj );
				}
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( keepObj->getRequiredRuleTypeId() );
				auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapRuleTypeIdx = searchIndexByRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						mapRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aRuleTypeIdxObj ) );
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				static const std::string S_AToolSetIdxObj( "aToolSetIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aToolSetIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aToolSetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToolSetIdxObj );
				}
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				auto searchIndexByToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapToolSetIdx = searchIndexByToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						mapToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aToolSetIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aScopeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aScopeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AScopeIdxObj );
				}
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				auto searchIndexByScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				static const std::string S_AGenDefIdxObj( "aGenDefIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aGenDefIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aGenDefIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGenDefIdxObj );
				}
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto searchIndexByGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGenDefIdx = searchIndexByGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						mapGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aGenDefIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aAltIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIdxObj );
				}
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( keepObj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( indexByGelExecIdx != NULL ) {
				static const std::string S_AGelExecIdxObj( "aGelExecIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aGelExecIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aGelExecIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelExecIdxObj );
				}
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( keepObj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( keepObj->getOptionalGelExecutableTenantIdValue() );
				}
				if( keepObj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( keepObj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( keepObj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( keepObj->getOptionalGelExecutableIdValue() );
				}
				auto searchIndexByGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGelExecIdx = searchIndexByGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						mapGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aGelExecIdxObj ) );
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				static const std::string S_AProbeIdxObj( "aProbeIdxObj" );
				cfcore::ICFGenKbGenIteratorObj* aProbeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( keepObj );
				if( aProbeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AProbeIdxObj );
				}
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( keepObj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( keepObj->getOptionalProbeTenantIdValue() );
				}
				if( keepObj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( keepObj->getOptionalProbeCartridgeIdValue() );
				}
				if( keepObj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( keepObj->getOptionalProbeGenItemIdValue() );
				}
				auto searchIndexByProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapProbeIdx = searchIndexByProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						mapProbeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), aProbeIdxObj ) );
					}
				}
			}

			if( allGenIterator != NULL ) {
				allGenIterator->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) {
		static const std::string S_ProcName( "deepDisposeByItemIdIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		cfcore::ICFGenKbGenIteratorObj* existingObj = readCachedGenIteratorByItemIdIdx( TenantId,
				CartridgeId,
				ItemId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId ) {
		static const std::string S_ProcName( "deepDisposeByCartIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByCartIdx( TenantId,
				CartridgeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByRuleTypeIdx( const int16_t RuleTypeId ) {
		static const std::string S_ProcName( "deepDisposeByRuleTypeIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByRuleTypeIdx( RuleTypeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByToolSetIdx( const int16_t ToolSetId ) {
		static const std::string S_ProcName( "deepDisposeByToolSetIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByToolSetIdx( ToolSetId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByScopeIdx( const int16_t* ScopeDefId ) {
		static const std::string S_ProcName( "deepDisposeByScopeIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByScopeIdx( ScopeDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByGenDefIdx( const int16_t GenDefId ) {
		static const std::string S_ProcName( "deepDisposeByGenDefIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByGenDefIdx( GenDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) {
		static const std::string S_ProcName( "deepDisposeByAltIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		cfcore::ICFGenKbGenIteratorObj* existingObj = readCachedGenIteratorByAltIdx( Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) {
		static const std::string S_ProcName( "deepDisposeByGelExecIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByGelExecIdx( GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::deepDisposeByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) {
		static const std::string S_ProcName( "deepDisposeByProbeIdx" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> list;
		std::vector<cfcore::ICFGenKbGenIteratorObj*> matchesFound = readCachedGenIteratorByProbeIdx( ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenIteratorObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenIteratorTableObj::reallyDeepDisposeGenIterator( cfcore::ICFGenKbGenIteratorObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGenIterator" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGenIteratorObj* obj = Obj;
		
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalGelExecutableTenantIdValue(),
			obj->getOptionalGelExecutableGelCacheIdValue(),
			obj->getOptionalGelExecutableIdValue() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDetachFromIndexesGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj ) );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::createGenIterator( cfcore::ICFGenKbGenIteratorEditObj* Obj ) {
		static const std::string S_ProcName( "createGenIterator" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenIteratorObj* obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGenIteratorBuff* buff = dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->createGenIterator(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
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

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::readGenIterator( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGenIterator" );
		cfcore::ICFGenKbGenIteratorObj* obj = NULL;
		cfcore::ICFGenKbGenIteratorObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGenIteratorBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->readDerivedByItemIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredCartridgeId(),
			pkey->getRequiredItemId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
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

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::lockGenIterator( cfcore::CFGenKbGenItemPKey* pkey ) {
		static const std::string S_ProcName( "lockGenIterator" );
		cfcore::ICFGenKbGenIteratorObj* locked = NULL;
		cfcore::CFGenKbGenIteratorBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readAllGenIterator( bool forceRead ) {
		static const std::string S_ProcName( "readAllGenIterator" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenIteratorObj* realized = NULL;
		if( forceRead || ( allGenIterator == NULL ) ) {
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* map = new std::map<cfcore::CFGenKbGenItemPKey,cfcore::ICFGenKbGenIteratorObj*>();
			allGenIterator = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGenIteratorBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGenIteratorBuff* buff = NULL;
			cfcore::ICFGenKbGenIteratorObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGenIterator->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGenIterator->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		auto valIter = allGenIterator->begin();
		size_t idx = 0;
		while( valIter != allGenIterator->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::readGenIteratorByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByItemIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenIteratorObj* obj = readGenIterator( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByCartIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByCartIdx == NULL ) {
			indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByCartIdx = indexByCartIdx->find( key );
		if( searchIndexByCartIdx != indexByCartIdx->end() ) {
			oldDict = searchIndexByCartIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByCartIdx( schema->getAuthorization(),
				TenantId,
				CartridgeId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCartIdx->erase( searchIndexByCartIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCartIdx->insert( std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByRuleTypeIdx( const int16_t RuleTypeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByRuleTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByRuleTypeIdx == NULL ) {
			indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( key );
		if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
			oldDict = searchIndexByRuleTypeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByRuleTypeIdx( schema->getAuthorization(),
				RuleTypeId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRuleTypeIdx->erase( searchIndexByRuleTypeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByToolSetIdx( const int16_t ToolSetId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByToolSetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByToolSetIdx == NULL ) {
			indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByToolSetIdx = indexByToolSetIdx->find( key );
		if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
			oldDict = searchIndexByToolSetIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByToolSetIdx( schema->getAuthorization(),
				ToolSetId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByToolSetIdx->erase( searchIndexByToolSetIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByScopeIdx( const int16_t* ScopeDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByScopeIdx == NULL ) {
			indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			oldDict = searchIndexByScopeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByScopeIdx( schema->getAuthorization(),
				ScopeDefId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByScopeIdx->erase( searchIndexByScopeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByScopeIdx->insert( std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByGenDefIdx( const int16_t GenDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByGenDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByGenDefIdx == NULL ) {
			indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByGenDefIdx = indexByGenDefIdx->find( key );
		if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
			oldDict = searchIndexByGenDefIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByGenDefIdx( schema->getAuthorization(),
				GenDefId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGenDefIdx->erase( searchIndexByGenDefIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::readGenIteratorByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenIteratorObj*>();
		}
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::ICFGenKbGenIteratorObj* obj = NULL;
		cfcore::ICFGenKbGenIteratorObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByAltIdx = indexByAltIdx->find( key );
			if( searchIndexByAltIdx != indexByAltIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByAltIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGenItemBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenIteratorObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByGelExecIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( GelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *GelExecutableTenantId );
		}
		if( GelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *GelExecutableGelCacheId );
		}
		if( GelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *GelExecutableId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByGelExecIdx == NULL ) {
			indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByGelExecIdx = indexByGelExecIdx->find( key );
		if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
			oldDict = searchIndexByGelExecIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByGelExecIdx( schema->getAuthorization(),
				GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelExecIdx->erase( searchIndexByGelExecIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readGenIteratorByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenIteratorByProbeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( ProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *ProbeTenantId );
		}
		if( ProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *ProbeCartridgeId );
		}
		if( ProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *ProbeGenItemId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* oldDict;
		if( indexByProbeIdx == NULL ) {
			indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>*>();
		}
		auto searchIndexByProbeIdx = indexByProbeIdx->find( key );
		if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
			oldDict = searchIndexByProbeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByProbeIdx( schema->getAuthorization(),
				ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenIteratorObj* realized = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByProbeIdx->erase( searchIndexByProbeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByProbeIdx->insert( std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::readCachedGenIterator( cfcore::CFGenKbGenItemPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGenIterator" );
		cfcore::ICFGenKbGenIteratorObj* obj = NULL;
		cfcore::ICFGenKbGenIteratorObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::readCachedGenIteratorByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByItemIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenIteratorObj* obj = readCachedGenIterator( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByCartIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByCartIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByCartIdx = indexByCartIdx->find( key );
		if( searchIndexByCartIdx != indexByCartIdx->end() ) {
			dict = searchIndexByCartIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByRuleTypeIdx( const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByRuleTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByRuleTypeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( key );
		if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
			dict = searchIndexByRuleTypeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByToolSetIdx( const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByToolSetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByToolSetIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByToolSetIdx = indexByToolSetIdx->find( key );
		if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
			dict = searchIndexByToolSetIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByScopeIdx( const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByScopeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			dict = searchIndexByScopeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByGenDefIdx( const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByGenDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByGenDefIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGenDefIdx = indexByGenDefIdx->find( key );
		if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
			dict = searchIndexByGenDefIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::readCachedGenIteratorByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenIteratorObj*>();
		}
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::ICFGenKbGenIteratorObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByAltIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByGelExecIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( GelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *GelExecutableTenantId );
		}
		if( GelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *GelExecutableGelCacheId );
		}
		if( GelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *GelExecutableId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByGelExecIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelExecIdx = indexByGelExecIdx->find( key );
		if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
			dict = searchIndexByGelExecIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenIteratorObj*> CFGenKbGenIteratorTableObj::readCachedGenIteratorByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readCachedGenIteratorByProbeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( ProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *ProbeTenantId );
		}
		if( ProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *ProbeCartridgeId );
		}
		if( ProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *ProbeGenItemId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* dict;
		if( indexByProbeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByProbeIdx = indexByProbeIdx->find( key );
		if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
			dict = searchIndexByProbeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenIteratorObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenIteratorObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGenIteratorObj* CFGenKbGenIteratorTableObj::updateGenIterator( cfcore::ICFGenKbGenIteratorEditObj* Obj ) {
		static const std::string S_ProcName( "updateGenIterator" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenIteratorObj* obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGenIteratorBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->updateGenIterator( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGenIteratorBuff*>( Obj->getGenIteratorBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj->realize() );
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

	void CFGenKbGenIteratorTableObj::deleteGenIterator( cfcore::ICFGenKbGenIteratorEditObj* Obj ) {
		cfcore::ICFGenKbGenIteratorObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIterator( schema->getAuthorization(),
			obj->getGenIteratorBuff() );
		deepDisposeByItemIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredCartridgeId(),
			obj->getRequiredItemId() );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenIteratorObj* obj = readGenIterator( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGenIteratorEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGenIteratorEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByCartIdx( schema->getAuthorization(),
				TenantId,
				CartridgeId );
		deepDisposeByCartIdx( TenantId,
			CartridgeId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByRuleTypeIdx( const int16_t RuleTypeId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByRuleTypeIdx( schema->getAuthorization(),
				RuleTypeId );
		deepDisposeByRuleTypeIdx( RuleTypeId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByToolSetIdx( const int16_t ToolSetId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByToolSetIdx( schema->getAuthorization(),
				ToolSetId );
		deepDisposeByToolSetIdx( ToolSetId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByScopeIdx( const int16_t* ScopeDefId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByScopeIdx( schema->getAuthorization(),
				ScopeDefId );
		deepDisposeByScopeIdx( ScopeDefId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByGenDefIdx( const int16_t GenDefId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByGenDefIdx( schema->getAuthorization(),
				GenDefId );
		deepDisposeByGenDefIdx( GenDefId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenIteratorObj*>();
		}
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::ICFGenKbGenIteratorObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		}
		deepDisposeByAltIdx( Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByGelExecIdx( schema->getAuthorization(),
				GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
		deepDisposeByGelExecIdx( GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
	}

	void CFGenKbGenIteratorTableObj::deleteGenIteratorByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenIterator()->deleteGenIteratorByProbeIdx( schema->getAuthorization(),
				ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
		deepDisposeByProbeIdx( ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
	}

	void CFGenKbGenIteratorTableObj::reallyDetachFromIndexesGenIterator( cfcore::ICFGenKbGenIteratorObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGenIterator" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGenIteratorObj* obj = Obj;
		cfcore::CFGenKbGenItemPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGenIteratorObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByCartIdx != NULL ) {
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( obj->getRequiredCartridgeId() );
				auto searchCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapCartIdx = searchCartIdx->second;
					if( mapCartIdx != NULL ) {
						auto removalProbe = mapCartIdx->find( *pkey );
						if( removalProbe != mapCartIdx->end() ) {
							mapCartIdx->erase( removalProbe );
							if( mapCartIdx->empty() ) {
								delete mapCartIdx;
								mapCartIdx = NULL;
								indexByCartIdx->erase( searchCartIdx );
							}
						}
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( obj->getRequiredRuleTypeId() );
				auto searchRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapRuleTypeIdx = searchRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						auto removalProbe = mapRuleTypeIdx->find( *pkey );
						if( removalProbe != mapRuleTypeIdx->end() ) {
							mapRuleTypeIdx->erase( removalProbe );
							if( mapRuleTypeIdx->empty() ) {
								delete mapRuleTypeIdx;
								mapRuleTypeIdx = NULL;
								indexByRuleTypeIdx->erase( searchRuleTypeIdx );
							}
						}
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( obj->getRequiredToolSetId() );
				auto searchToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapToolSetIdx = searchToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						auto removalProbe = mapToolSetIdx->find( *pkey );
						if( removalProbe != mapToolSetIdx->end() ) {
							mapToolSetIdx->erase( removalProbe );
							if( mapToolSetIdx->empty() ) {
								delete mapToolSetIdx;
								mapToolSetIdx = NULL;
								indexByToolSetIdx->erase( searchToolSetIdx );
							}
						}
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( obj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( obj->getOptionalScopeDefIdValue() );
				}
				auto searchScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *pkey );
						if( removalProbe != mapScopeIdx->end() ) {
							mapScopeIdx->erase( removalProbe );
							if( mapScopeIdx->empty() ) {
								delete mapScopeIdx;
								mapScopeIdx = NULL;
								indexByScopeIdx->erase( searchScopeIdx );
							}
						}
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( obj->getRequiredGenDefId() );
				auto searchGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGenDefIdx = searchGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						auto removalProbe = mapGenDefIdx->find( *pkey );
						if( removalProbe != mapGenDefIdx->end() ) {
							mapGenDefIdx->erase( removalProbe );
							if( mapGenDefIdx->empty() ) {
								delete mapGenDefIdx;
								mapGenDefIdx = NULL;
								indexByGenDefIdx->erase( searchGenDefIdx );
							}
						}
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( obj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( obj->getRequiredToolSetId() );
				if( obj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( obj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( obj->getRequiredGenDefId() );
				auto removalProbe = indexByAltIdx->find( keyAltIdx );
				if( removalProbe != indexByAltIdx->end() ) {
					indexByAltIdx->erase( removalProbe );
				}
			}

			if( indexByGelExecIdx != NULL ) {
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( obj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( obj->getOptionalGelExecutableTenantIdValue() );
				}
				if( obj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( obj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( obj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( obj->getOptionalGelExecutableIdValue() );
				}
				auto searchGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapGelExecIdx = searchGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						auto removalProbe = mapGelExecIdx->find( *pkey );
						if( removalProbe != mapGelExecIdx->end() ) {
							mapGelExecIdx->erase( removalProbe );
							if( mapGelExecIdx->empty() ) {
								delete mapGelExecIdx;
								mapGelExecIdx = NULL;
								indexByGelExecIdx->erase( searchGelExecIdx );
							}
						}
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( obj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( obj->getOptionalProbeTenantIdValue() );
				}
				if( obj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( obj->getOptionalProbeCartridgeIdValue() );
				}
				if( obj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( obj->getOptionalProbeGenItemIdValue() );
				}
				auto searchProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenIteratorObj*>* mapProbeIdx = searchProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						auto removalProbe = mapProbeIdx->find( *pkey );
						if( removalProbe != mapProbeIdx->end() ) {
							mapProbeIdx->erase( removalProbe );
							if( mapProbeIdx->empty() ) {
								delete mapProbeIdx;
								mapProbeIdx = NULL;
								indexByProbeIdx->erase( searchProbeIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDetachFromIndexesGenItem( Obj );
	}


}
