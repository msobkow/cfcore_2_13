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

	const std::string CFGenKbGenItemTableObj::CLASS_NAME( "CFGenKbGenItemTableObj" );
	const std::string CFGenKbGenItemTableObj::TABLE_NAME( "GenItem" );
	const std::string CFGenKbGenItemTableObj::TABLE_DBNAME( "kbgenitem" );

	CFGenKbGenItemTableObj::CFGenKbGenItemTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
		allGenItem = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenItemObj*>();
		indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
	}

	CFGenKbGenItemTableObj::CFGenKbGenItemTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
		allGenItem = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenItemObj*>();
		indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
		indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
	}

	CFGenKbGenItemTableObj::~CFGenKbGenItemTableObj() {
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
			cfcore::ICFGenKbGenItemObj* curMember;
			auto membersIter = members->begin();
			while( membersIter != members->end() ) {
				curMember = membersIter->second;
				if( curMember != NULL ) {
					delete curMember;
				}
				members->erase( membersIter );
				membersIter = members->begin();
			}
			delete members;
			members = NULL;
		}
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGenItemTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGenItemTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGenItemTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGenItemTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGenItemTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGenItemTableObj::minimizeMemory() {
		if( allGenItem != NULL ) {
			allGenItem->clear();
			delete allGenItem;
			allGenItem = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByTenantIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByCartIdx = indexByCartIdx->begin();
			std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByCartIdx = indexByCartIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByCartIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByRuleTypeIdx = indexByRuleTypeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByRuleTypeIdx = indexByRuleTypeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByRuleTypeIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByToolSetIdx = indexByToolSetIdx->begin();
			std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByToolSetIdx = indexByToolSetIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByToolSetIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByScopeIdx = indexByScopeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByScopeIdx = indexByScopeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByScopeIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByGenDefIdx = indexByGenDefIdx->begin();
			std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByGenDefIdx = indexByGenDefIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByGenDefIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByGelExecIdx = indexByGelExecIdx->begin();
			std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByGelExecIdx = indexByGelExecIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByGelExecIdx = NULL;
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
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator iterByProbeIdx = indexByProbeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* >::iterator endByProbeIdx = indexByProbeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* curByProbeIdx = NULL;
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
			cfcore::ICFGenKbGenItemObj* cur = NULL;
			cfcore::ICFGenKbGenItemEditObj* edit = NULL;
			auto iter = members->begin();
			auto end = members->end();
			while( iter != end ) {
				cur = iter->second;
				if( cur != NULL ) {
					iter->second = NULL;
					edit = cur->getEdit();
					if( edit != NULL ) {
						edit->endEdit();
						edit = NULL;
					}
					delete cur;
					cur = NULL;
				}
				iter ++;
			}
			members->clear();
		}
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::newInstance() {
		cfcore::ICFGenKbGenItemObj* inst = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( new CFGenKbGenItemObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemTableObj::newEditInstance( cfcore::ICFGenKbGenItemObj* orig ) {
		cfcore::ICFGenKbGenItemEditObj* edit = dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( new CFGenKbGenItemEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::constructByClassCode( const classcode_t argClassCode ) {
		static const std::string S_ProcName( "constructByClassCode" );
		static const std::string S_Obj( "obj" );
		cfcore::ICFGenKbGenItemObj* obj = NULL;
		if( argClassCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->newInstance();
		}
		if( obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Obj );
		}
		return( obj );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::realizeGenItem( cfcore::ICFGenKbGenItemObj* Obj ) {
		static const std::string S_ProcName( "realizeGenItem" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGenItemObj* obj = Obj;
		cfcore::ICFGenKbGenItemObj* existingObj = NULL;
		cfcore::CFGenKbGenItemPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGenItemObj* keepObj = NULL;
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapCartIdx = searchCartIdx->second;
					if( mapCartIdx != NULL ) {
						auto removalProbe = mapCartIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapRuleTypeIdx = searchRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						auto removalProbe = mapRuleTypeIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapToolSetIdx = searchToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						auto removalProbe = mapToolSetIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGenDefIdx = searchGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						auto removalProbe = mapGenDefIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGelExecIdx = searchGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						auto removalProbe = mapGelExecIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapProbeIdx = searchProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						auto removalProbe = mapProbeIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapProbeIdx->end() ) {
							mapProbeIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGenItemObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				static const std::string S_ACartIdxObj( "aCartIdxObj" );
				cfcore::ICFGenKbGenItemObj* aCartIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapCartIdx = searchIndexByCartIdx->second;
					if( mapCartIdx != NULL ) {
						mapCartIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aCartIdxObj ) );
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				static const std::string S_ARuleTypeIdxObj( "aRuleTypeIdxObj" );
				cfcore::ICFGenKbGenItemObj* aRuleTypeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapRuleTypeIdx = searchIndexByRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						mapRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aRuleTypeIdxObj ) );
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				static const std::string S_AToolSetIdxObj( "aToolSetIdxObj" );
				cfcore::ICFGenKbGenItemObj* aToolSetIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapToolSetIdx = searchIndexByToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						mapToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aToolSetIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfcore::ICFGenKbGenItemObj* aScopeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				static const std::string S_AGenDefIdxObj( "aGenDefIdxObj" );
				cfcore::ICFGenKbGenItemObj* aGenDefIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGenDefIdx = searchIndexByGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						mapGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aGenDefIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGenItemObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenItemObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( indexByGelExecIdx != NULL ) {
				static const std::string S_AGelExecIdxObj( "aGelExecIdxObj" );
				cfcore::ICFGenKbGenItemObj* aGelExecIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGelExecIdx = searchIndexByGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						mapGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aGelExecIdxObj ) );
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				static const std::string S_AProbeIdxObj( "aProbeIdxObj" );
				cfcore::ICFGenKbGenItemObj* aProbeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapProbeIdx = searchIndexByProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						mapProbeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aProbeIdxObj ) );
					}
				}
			}

			if( allGenItem != NULL ) {
				allGenItem->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGenItemObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				static const std::string S_ACartIdxObj( "aCartIdxObj" );
				cfcore::ICFGenKbGenItemObj* aCartIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapCartIdx = searchIndexByCartIdx->second;
					if( mapCartIdx != NULL ) {
						mapCartIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aCartIdxObj ) );
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				static const std::string S_ARuleTypeIdxObj( "aRuleTypeIdxObj" );
				cfcore::ICFGenKbGenItemObj* aRuleTypeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapRuleTypeIdx = searchIndexByRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						mapRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aRuleTypeIdxObj ) );
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				static const std::string S_AToolSetIdxObj( "aToolSetIdxObj" );
				cfcore::ICFGenKbGenItemObj* aToolSetIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapToolSetIdx = searchIndexByToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						mapToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aToolSetIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfcore::ICFGenKbGenItemObj* aScopeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				static const std::string S_AGenDefIdxObj( "aGenDefIdxObj" );
				cfcore::ICFGenKbGenItemObj* aGenDefIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGenDefIdx = searchIndexByGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						mapGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aGenDefIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGenItemObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenItemObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( indexByGelExecIdx != NULL ) {
				static const std::string S_AGelExecIdxObj( "aGelExecIdxObj" );
				cfcore::ICFGenKbGenItemObj* aGelExecIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGelExecIdx = searchIndexByGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						mapGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aGelExecIdxObj ) );
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				static const std::string S_AProbeIdxObj( "aProbeIdxObj" );
				cfcore::ICFGenKbGenItemObj* aProbeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenItemObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapProbeIdx = searchIndexByProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						mapProbeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), aProbeIdxObj ) );
					}
				}
			}

			if( allGenItem != NULL ) {
				allGenItem->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		if( keepObj != obj ) {
			delete obj;
			obj = NULL;
		}
		// Something is leaking, so I've added this paranoid check
		if( ( keepObj != existingObj ) && ( existingObj != NULL ) ) {
			delete existingObj;
			existingObj = NULL;
		}
		return( keepObj );
	}

	void CFGenKbGenItemTableObj::deepDisposeByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) {
		static const std::string S_ProcName( "deepDisposeByItemIdIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		cfcore::ICFGenKbGenItemObj* existingObj = readCachedGenItemByItemIdIdx( TenantId,
				CartridgeId,
				ItemId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId ) {
		static const std::string S_ProcName( "deepDisposeByCartIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByCartIdx( TenantId,
				CartridgeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByRuleTypeIdx( const int16_t RuleTypeId ) {
		static const std::string S_ProcName( "deepDisposeByRuleTypeIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByRuleTypeIdx( RuleTypeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByToolSetIdx( const int16_t ToolSetId ) {
		static const std::string S_ProcName( "deepDisposeByToolSetIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByToolSetIdx( ToolSetId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByScopeIdx( const int16_t* ScopeDefId ) {
		static const std::string S_ProcName( "deepDisposeByScopeIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByScopeIdx( ScopeDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByGenDefIdx( const int16_t GenDefId ) {
		static const std::string S_ProcName( "deepDisposeByGenDefIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByGenDefIdx( GenDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) {
		static const std::string S_ProcName( "deepDisposeByAltIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		cfcore::ICFGenKbGenItemObj* existingObj = readCachedGenItemByAltIdx( Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) {
		static const std::string S_ProcName( "deepDisposeByGelExecIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByGelExecIdx( GelExecutableTenantId,
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
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::deepDisposeByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) {
		static const std::string S_ProcName( "deepDisposeByProbeIdx" );
		std::vector<cfcore::ICFGenKbGenItemObj*> list;
		std::vector<cfcore::ICFGenKbGenItemObj*> matchesFound = readCachedGenItemByProbeIdx( ProbeTenantId,
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
		cfcore::ICFGenKbGenItemObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDeepDisposeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDeepDisposeGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDeepDisposeGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDeepDisposeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDeepDisposeGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenItemTableObj::reallyDeepDisposeGenItem( cfcore::ICFGenKbGenItemObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGenItem" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGenItemObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalGelExecutableTenantIdValue(),
			obj->getOptionalGelExecutableGelCacheIdValue(),
			obj->getOptionalGelExecutableIdValue() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->reallyDetachFromIndexesGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGenIteratorBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenIteratorTableObj*>( schema->getGenIteratorTableObj() )->reallyDetachFromIndexesGenIterator( dynamic_cast<cfcore::ICFGenKbGenIteratorObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGenReferenceBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenReferenceTableObj*>( schema->getGenReferenceTableObj() )->reallyDetachFromIndexesGenReference( dynamic_cast<cfcore::ICFGenKbGenReferenceObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDetachFromIndexesGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenTruncTableObj*>( schema->getGenTruncTableObj() )->reallyDetachFromIndexesGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDetachFromIndexesGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGenBindBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenBindTableObj*>( schema->getGenBindTableObj() )->reallyDetachFromIndexesGenBind( dynamic_cast<cfcore::ICFGenKbGenBindObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::createGenItem( cfcore::ICFGenKbGenItemEditObj* Obj ) {
		static const std::string S_ProcName( "createGenItem" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenItemObj* obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGenItemBuff* buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->createGenItem(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::readGenItem( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGenItem" );
		cfcore::ICFGenKbGenItemObj* obj = NULL;
		cfcore::ICFGenKbGenItemObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGenItemBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByItemIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredCartridgeId(),
			pkey->getRequiredItemId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::lockGenItem( cfcore::CFGenKbGenItemPKey* pkey ) {
		static const std::string S_ProcName( "lockGenItem" );
		cfcore::ICFGenKbGenItemObj* locked = NULL;
		cfcore::CFGenKbGenItemBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readAllGenItem( bool forceRead ) {
		static const std::string S_ProcName( "readAllGenItem" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenItemObj* realized = NULL;
		if( forceRead || ( allGenItem == NULL ) ) {
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* map = new std::map<cfcore::CFGenKbGenItemPKey,cfcore::ICFGenKbGenItemObj*>();
			allGenItem = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGenItemBuff* buff = NULL;
			cfcore::ICFGenKbGenItemObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGenItem->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGenItem->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		auto valIter = allGenItem->begin();
		size_t idx = 0;
		while( valIter != allGenItem->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::readGenItemByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByItemIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenItemObj* obj = readGenItem( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByCartIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByCartIdx == NULL ) {
			indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByCartIdx( schema->getAuthorization(),
				TenantId,
				CartridgeId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCartIdx->erase( searchIndexByCartIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCartIdx->insert( std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByRuleTypeIdx( const int16_t RuleTypeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByRuleTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByRuleTypeIdx == NULL ) {
			indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByRuleTypeIdx( schema->getAuthorization(),
				RuleTypeId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRuleTypeIdx->erase( searchIndexByRuleTypeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByToolSetIdx( const int16_t ToolSetId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByToolSetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByToolSetIdx == NULL ) {
			indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByToolSetIdx( schema->getAuthorization(),
				ToolSetId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByToolSetIdx->erase( searchIndexByToolSetIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByScopeIdx( const int16_t* ScopeDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByScopeIdx" );
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
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByScopeIdx == NULL ) {
			indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByScopeIdx( schema->getAuthorization(),
				ScopeDefId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByScopeIdx->erase( searchIndexByScopeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByScopeIdx->insert( std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByGenDefIdx( const int16_t GenDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByGenDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByGenDefIdx == NULL ) {
			indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByGenDefIdx( schema->getAuthorization(),
				GenDefId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGenDefIdx->erase( searchIndexByGenDefIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::readGenItemByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenItemObj*>();
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
		cfcore::ICFGenKbGenItemObj* obj = NULL;
		cfcore::ICFGenKbGenItemObj* realized = NULL;
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
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenItemObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbGenItemObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByGelExecIdx" );
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
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByGelExecIdx == NULL ) {
			indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByGelExecIdx( schema->getAuthorization(),
				GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelExecIdx->erase( searchIndexByGelExecIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readGenItemByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenItemByProbeIdx" );
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
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* oldDict;
		if( indexByProbeIdx == NULL ) {
			indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByProbeIdx( schema->getAuthorization(),
				ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenItemObj* realized = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByProbeIdx->erase( searchIndexByProbeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByProbeIdx->insert( std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::readCachedGenItem( cfcore::CFGenKbGenItemPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGenItem" );
		cfcore::ICFGenKbGenItemObj* obj = NULL;
		cfcore::ICFGenKbGenItemObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::readCachedGenItemByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readCachedGenItemByItemIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenItemObj* obj = readCachedGenItem( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGenItemByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readCachedGenItemByCartIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByCartIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByCartIdx = indexByCartIdx->find( key );
		if( searchIndexByCartIdx != indexByCartIdx->end() ) {
			dict = searchIndexByCartIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByRuleTypeIdx( const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readCachedGenItemByRuleTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByRuleTypeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( key );
		if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
			dict = searchIndexByRuleTypeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByToolSetIdx( const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readCachedGenItemByToolSetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByToolSetIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByToolSetIdx = indexByToolSetIdx->find( key );
		if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
			dict = searchIndexByToolSetIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByScopeIdx( const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readCachedGenItemByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByScopeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			dict = searchIndexByScopeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByGenDefIdx( const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readCachedGenItemByGenDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByGenDefIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGenDefIdx = indexByGenDefIdx->find( key );
		if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
			dict = searchIndexByGenDefIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::readCachedGenItemByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readCachedGenItemByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenItemObj*>();
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
		cfcore::ICFGenKbGenItemObj* obj = NULL;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readCachedGenItemByGelExecIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
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
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByGelExecIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelExecIdx = indexByGelExecIdx->find( key );
		if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
			dict = searchIndexByGelExecIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbGenItemTableObj::readCachedGenItemByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readCachedGenItemByProbeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenItemObj*> arr;
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
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* dict;
		if( indexByProbeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByProbeIdx = indexByProbeIdx->find( key );
		if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
			dict = searchIndexByProbeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenItemObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenItemObj* obj;
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemTableObj::updateGenItem( cfcore::ICFGenKbGenItemEditObj* Obj ) {
		static const std::string S_ProcName( "updateGenItem" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenItemObj* obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGenItemBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->updateGenItem( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGenItemBuff*>( Obj->getGenItemBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGenItemObj*>( obj->realize() );
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

	void CFGenKbGenItemTableObj::deleteGenItem( cfcore::ICFGenKbGenItemEditObj* Obj ) {
		cfcore::ICFGenKbGenItemObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItem( schema->getAuthorization(),
			obj->getGenItemBuff() );
		deepDisposeByItemIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredCartridgeId(),
			obj->getRequiredItemId() );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenItemObj* obj = readGenItem( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGenItemEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGenItemTableObj::deleteGenItemByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByCartIdx( schema->getAuthorization(),
				TenantId,
				CartridgeId );
		deepDisposeByCartIdx( TenantId,
			CartridgeId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByRuleTypeIdx( const int16_t RuleTypeId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByRuleTypeIdx( schema->getAuthorization(),
				RuleTypeId );
		deepDisposeByRuleTypeIdx( RuleTypeId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByToolSetIdx( const int16_t ToolSetId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByToolSetIdx( schema->getAuthorization(),
				ToolSetId );
		deepDisposeByToolSetIdx( ToolSetId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByScopeIdx( const int16_t* ScopeDefId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByScopeIdx( schema->getAuthorization(),
				ScopeDefId );
		deepDisposeByScopeIdx( ScopeDefId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByGenDefIdx( const int16_t GenDefId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByGenDefIdx( schema->getAuthorization(),
				GenDefId );
		deepDisposeByGenDefIdx( GenDefId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenItemObj*>();
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
		cfcore::ICFGenKbGenItemObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByAltIdx( schema->getAuthorization(),
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

	void CFGenKbGenItemTableObj::deleteGenItemByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByGelExecIdx( schema->getAuthorization(),
				GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
		deepDisposeByGelExecIdx( GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
	}

	void CFGenKbGenItemTableObj::deleteGenItemByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->deleteGenItemByProbeIdx( schema->getAuthorization(),
				ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
		deepDisposeByProbeIdx( ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
	}

	void CFGenKbGenItemTableObj::reallyDetachFromIndexesGenItem( cfcore::ICFGenKbGenItemObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGenItem" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGenItemObj* obj = Obj;
		cfcore::CFGenKbGenItemPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGenItemObj* existingObj = searchMembers->second;
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapCartIdx = searchCartIdx->second;
					if( mapCartIdx != NULL ) {
						auto removalProbe = mapCartIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapRuleTypeIdx = searchRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						auto removalProbe = mapRuleTypeIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapToolSetIdx = searchToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						auto removalProbe = mapToolSetIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGenDefIdx = searchGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						auto removalProbe = mapGenDefIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapGelExecIdx = searchGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						auto removalProbe = mapGelExecIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenItemObj*>* mapProbeIdx = searchProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						auto removalProbe = mapProbeIdx->find( *(obj->getPKey()) );
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
	}


}
