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

	const std::string CFGenKbToolSetTableObj::CLASS_NAME( "CFGenKbToolSetTableObj" );
	const std::string CFGenKbToolSetTableObj::TABLE_NAME( "ToolSet" );
	const std::string CFGenKbToolSetTableObj::TABLE_DBNAME( "kbtoolset" );

	CFGenKbToolSetTableObj::CFGenKbToolSetTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
		allToolSet = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
			cfcore::ICFGenKbToolSetObj*>();
		indexByTool0Idx = new std::map< cfcore::CFGenKbToolSetByTool0IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool1Idx = new std::map< cfcore::CFGenKbToolSetByTool1IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool2Idx = new std::map< cfcore::CFGenKbToolSetByTool2IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool3Idx = new std::map< cfcore::CFGenKbToolSetByTool3IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool4Idx = new std::map< cfcore::CFGenKbToolSetByTool4IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool5Idx = new std::map< cfcore::CFGenKbToolSetByTool5IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool6Idx = new std::map< cfcore::CFGenKbToolSetByTool6IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool7Idx = new std::map< cfcore::CFGenKbToolSetByTool7IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
	}

	CFGenKbToolSetTableObj::CFGenKbToolSetTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
		allToolSet = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
			cfcore::ICFGenKbToolSetObj*>();
		indexByTool0Idx = new std::map< cfcore::CFGenKbToolSetByTool0IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool1Idx = new std::map< cfcore::CFGenKbToolSetByTool1IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool2Idx = new std::map< cfcore::CFGenKbToolSetByTool2IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool3Idx = new std::map< cfcore::CFGenKbToolSetByTool3IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool4Idx = new std::map< cfcore::CFGenKbToolSetByTool4IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool5Idx = new std::map< cfcore::CFGenKbToolSetByTool5IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool6Idx = new std::map< cfcore::CFGenKbToolSetByTool6IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		indexByTool7Idx = new std::map< cfcore::CFGenKbToolSetByTool7IdxKey,
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
	}

	CFGenKbToolSetTableObj::~CFGenKbToolSetTableObj() {
		minimizeMemory();
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( indexByTool0Idx != NULL ) {
			delete indexByTool0Idx;
			indexByTool0Idx = NULL;
		}
		if( indexByTool1Idx != NULL ) {
			delete indexByTool1Idx;
			indexByTool1Idx = NULL;
		}
		if( indexByTool2Idx != NULL ) {
			delete indexByTool2Idx;
			indexByTool2Idx = NULL;
		}
		if( indexByTool3Idx != NULL ) {
			delete indexByTool3Idx;
			indexByTool3Idx = NULL;
		}
		if( indexByTool4Idx != NULL ) {
			delete indexByTool4Idx;
			indexByTool4Idx = NULL;
		}
		if( indexByTool5Idx != NULL ) {
			delete indexByTool5Idx;
			indexByTool5Idx = NULL;
		}
		if( indexByTool6Idx != NULL ) {
			delete indexByTool6Idx;
			indexByTool6Idx = NULL;
		}
		if( indexByTool7Idx != NULL ) {
			delete indexByTool7Idx;
			indexByTool7Idx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbToolSetObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbToolSetTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbToolSetTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbToolSetTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbToolSetTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbToolSetTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbToolSetTableObj::minimizeMemory() {
		if( allToolSet != NULL ) {
			allToolSet->clear();
			delete allToolSet;
			allToolSet = NULL;
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( indexByTool0Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool0IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool0Idx = indexByTool0Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool0IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool0Idx = indexByTool0Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool0Idx = NULL;
			while( iterByTool0Idx != endByTool0Idx ) {
				curByTool0Idx = iterByTool0Idx->second;
				if( curByTool0Idx != NULL ) {
					curByTool0Idx->clear();
					delete curByTool0Idx;
					curByTool0Idx = NULL;
					iterByTool0Idx->second = NULL;
				}
				iterByTool0Idx ++;
			}
			indexByTool0Idx->clear();
		}
		if( indexByTool1Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool1IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool1Idx = indexByTool1Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool1IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool1Idx = indexByTool1Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool1Idx = NULL;
			while( iterByTool1Idx != endByTool1Idx ) {
				curByTool1Idx = iterByTool1Idx->second;
				if( curByTool1Idx != NULL ) {
					curByTool1Idx->clear();
					delete curByTool1Idx;
					curByTool1Idx = NULL;
					iterByTool1Idx->second = NULL;
				}
				iterByTool1Idx ++;
			}
			indexByTool1Idx->clear();
		}
		if( indexByTool2Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool2IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool2Idx = indexByTool2Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool2IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool2Idx = indexByTool2Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool2Idx = NULL;
			while( iterByTool2Idx != endByTool2Idx ) {
				curByTool2Idx = iterByTool2Idx->second;
				if( curByTool2Idx != NULL ) {
					curByTool2Idx->clear();
					delete curByTool2Idx;
					curByTool2Idx = NULL;
					iterByTool2Idx->second = NULL;
				}
				iterByTool2Idx ++;
			}
			indexByTool2Idx->clear();
		}
		if( indexByTool3Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool3IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool3Idx = indexByTool3Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool3IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool3Idx = indexByTool3Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool3Idx = NULL;
			while( iterByTool3Idx != endByTool3Idx ) {
				curByTool3Idx = iterByTool3Idx->second;
				if( curByTool3Idx != NULL ) {
					curByTool3Idx->clear();
					delete curByTool3Idx;
					curByTool3Idx = NULL;
					iterByTool3Idx->second = NULL;
				}
				iterByTool3Idx ++;
			}
			indexByTool3Idx->clear();
		}
		if( indexByTool4Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool4IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool4Idx = indexByTool4Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool4IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool4Idx = indexByTool4Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool4Idx = NULL;
			while( iterByTool4Idx != endByTool4Idx ) {
				curByTool4Idx = iterByTool4Idx->second;
				if( curByTool4Idx != NULL ) {
					curByTool4Idx->clear();
					delete curByTool4Idx;
					curByTool4Idx = NULL;
					iterByTool4Idx->second = NULL;
				}
				iterByTool4Idx ++;
			}
			indexByTool4Idx->clear();
		}
		if( indexByTool5Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool5IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool5Idx = indexByTool5Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool5IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool5Idx = indexByTool5Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool5Idx = NULL;
			while( iterByTool5Idx != endByTool5Idx ) {
				curByTool5Idx = iterByTool5Idx->second;
				if( curByTool5Idx != NULL ) {
					curByTool5Idx->clear();
					delete curByTool5Idx;
					curByTool5Idx = NULL;
					iterByTool5Idx->second = NULL;
				}
				iterByTool5Idx ++;
			}
			indexByTool5Idx->clear();
		}
		if( indexByTool6Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool6IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool6Idx = indexByTool6Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool6IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool6Idx = indexByTool6Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool6Idx = NULL;
			while( iterByTool6Idx != endByTool6Idx ) {
				curByTool6Idx = iterByTool6Idx->second;
				if( curByTool6Idx != NULL ) {
					curByTool6Idx->clear();
					delete curByTool6Idx;
					curByTool6Idx = NULL;
					iterByTool6Idx->second = NULL;
				}
				iterByTool6Idx ++;
			}
			indexByTool6Idx->clear();
		}
		if( indexByTool7Idx != NULL ) {
			std::map< cfcore::CFGenKbToolSetByTool7IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator iterByTool7Idx = indexByTool7Idx->begin();
			std::map< cfcore::CFGenKbToolSetByTool7IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* >::iterator endByTool7Idx = indexByTool7Idx->end();
			std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* curByTool7Idx = NULL;
			while( iterByTool7Idx != endByTool7Idx ) {
				curByTool7Idx = iterByTool7Idx->second;
				if( curByTool7Idx != NULL ) {
					curByTool7Idx->clear();
					delete curByTool7Idx;
					curByTool7Idx = NULL;
					iterByTool7Idx->second = NULL;
				}
				iterByTool7Idx ++;
			}
			indexByTool7Idx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbToolSetObj* cur = NULL;
			cfcore::ICFGenKbToolSetEditObj* edit = NULL;
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

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::newInstance() {
		cfcore::ICFGenKbToolSetObj* inst = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( new CFGenKbToolSetObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetTableObj::newEditInstance( cfcore::ICFGenKbToolSetObj* orig ) {
		cfcore::ICFGenKbToolSetEditObj* edit = dynamic_cast<cfcore::ICFGenKbToolSetEditObj*>( new CFGenKbToolSetEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::realizeToolSet( cfcore::ICFGenKbToolSetObj* Obj ) {
		static const std::string S_ProcName( "realizeToolSet" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbToolSetObj* obj = Obj;
		cfcore::ICFGenKbToolSetObj* existingObj = NULL;
		cfcore::CFGenKbToolSetPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbToolSetObj* keepObj = NULL;
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
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbToolSetByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByTool0Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool0IdxKey keyTool0Idx;
				keyTool0Idx.setRequiredToolId0( keepObj->getRequiredToolId0() );
				auto searchTool0Idx = indexByTool0Idx->find( keyTool0Idx );
				if( searchTool0Idx != indexByTool0Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool0Idx = searchTool0Idx->second;
					if( mapTool0Idx != NULL ) {
						auto removalProbe = mapTool0Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool0Idx->end() ) {
							mapTool0Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool1Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool1IdxKey keyTool1Idx;
				if( keepObj->isOptionalToolId1Null() ) {
					keyTool1Idx.setOptionalToolId1Null();
				}
				else {
					keyTool1Idx.setOptionalToolId1Value( keepObj->getOptionalToolId1Value() );
				}
				auto searchTool1Idx = indexByTool1Idx->find( keyTool1Idx );
				if( searchTool1Idx != indexByTool1Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool1Idx = searchTool1Idx->second;
					if( mapTool1Idx != NULL ) {
						auto removalProbe = mapTool1Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool1Idx->end() ) {
							mapTool1Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool2Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool2IdxKey keyTool2Idx;
				if( keepObj->isOptionalToolId2Null() ) {
					keyTool2Idx.setOptionalToolId2Null();
				}
				else {
					keyTool2Idx.setOptionalToolId2Value( keepObj->getOptionalToolId2Value() );
				}
				auto searchTool2Idx = indexByTool2Idx->find( keyTool2Idx );
				if( searchTool2Idx != indexByTool2Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool2Idx = searchTool2Idx->second;
					if( mapTool2Idx != NULL ) {
						auto removalProbe = mapTool2Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool2Idx->end() ) {
							mapTool2Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool3Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool3IdxKey keyTool3Idx;
				if( keepObj->isOptionalToolId3Null() ) {
					keyTool3Idx.setOptionalToolId3Null();
				}
				else {
					keyTool3Idx.setOptionalToolId3Value( keepObj->getOptionalToolId3Value() );
				}
				auto searchTool3Idx = indexByTool3Idx->find( keyTool3Idx );
				if( searchTool3Idx != indexByTool3Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool3Idx = searchTool3Idx->second;
					if( mapTool3Idx != NULL ) {
						auto removalProbe = mapTool3Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool3Idx->end() ) {
							mapTool3Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool4Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool4IdxKey keyTool4Idx;
				if( keepObj->isOptionalToolId4Null() ) {
					keyTool4Idx.setOptionalToolId4Null();
				}
				else {
					keyTool4Idx.setOptionalToolId4Value( keepObj->getOptionalToolId4Value() );
				}
				auto searchTool4Idx = indexByTool4Idx->find( keyTool4Idx );
				if( searchTool4Idx != indexByTool4Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool4Idx = searchTool4Idx->second;
					if( mapTool4Idx != NULL ) {
						auto removalProbe = mapTool4Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool4Idx->end() ) {
							mapTool4Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool5Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool5IdxKey keyTool5Idx;
				if( keepObj->isOptionalToolId5Null() ) {
					keyTool5Idx.setOptionalToolId5Null();
				}
				else {
					keyTool5Idx.setOptionalToolId5Value( keepObj->getOptionalToolId5Value() );
				}
				auto searchTool5Idx = indexByTool5Idx->find( keyTool5Idx );
				if( searchTool5Idx != indexByTool5Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool5Idx = searchTool5Idx->second;
					if( mapTool5Idx != NULL ) {
						auto removalProbe = mapTool5Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool5Idx->end() ) {
							mapTool5Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool6Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool6IdxKey keyTool6Idx;
				if( keepObj->isOptionalToolId6Null() ) {
					keyTool6Idx.setOptionalToolId6Null();
				}
				else {
					keyTool6Idx.setOptionalToolId6Value( keepObj->getOptionalToolId6Value() );
				}
				auto searchTool6Idx = indexByTool6Idx->find( keyTool6Idx );
				if( searchTool6Idx != indexByTool6Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool6Idx = searchTool6Idx->second;
					if( mapTool6Idx != NULL ) {
						auto removalProbe = mapTool6Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool6Idx->end() ) {
							mapTool6Idx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTool7Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool7IdxKey keyTool7Idx;
				if( keepObj->isOptionalToolId7Null() ) {
					keyTool7Idx.setOptionalToolId7Null();
				}
				else {
					keyTool7Idx.setOptionalToolId7Value( keepObj->getOptionalToolId7Value() );
				}
				auto searchTool7Idx = indexByTool7Idx->find( keyTool7Idx );
				if( searchTool7Idx != indexByTool7Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool7Idx = searchTool7Idx->second;
					if( mapTool7Idx != NULL ) {
						auto removalProbe = mapTool7Idx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTool7Idx->end() ) {
							mapTool7Idx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbToolSetObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbToolSetByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolSetByNameIdxKey, cfcore::ICFGenKbToolSetObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByTool0Idx != NULL ) {
				static const std::string S_ATool0IdxObj( "aTool0IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool0IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool0IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool0IdxObj );
				}
				cfcore::CFGenKbToolSetByTool0IdxKey keyTool0Idx;
				keyTool0Idx.setRequiredToolId0( keepObj->getRequiredToolId0() );
				auto searchIndexByTool0Idx = indexByTool0Idx->find( keyTool0Idx );
				if( searchIndexByTool0Idx != indexByTool0Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool0Idx = searchIndexByTool0Idx->second;
					if( mapTool0Idx != NULL ) {
						mapTool0Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool0IdxObj ) );
					}
				}
			}

			if( indexByTool1Idx != NULL ) {
				static const std::string S_ATool1IdxObj( "aTool1IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool1IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool1IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool1IdxObj );
				}
				cfcore::CFGenKbToolSetByTool1IdxKey keyTool1Idx;
				if( keepObj->isOptionalToolId1Null() ) {
					keyTool1Idx.setOptionalToolId1Null();
				}
				else {
					keyTool1Idx.setOptionalToolId1Value( keepObj->getOptionalToolId1Value() );
				}
				auto searchIndexByTool1Idx = indexByTool1Idx->find( keyTool1Idx );
				if( searchIndexByTool1Idx != indexByTool1Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool1Idx = searchIndexByTool1Idx->second;
					if( mapTool1Idx != NULL ) {
						mapTool1Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool1IdxObj ) );
					}
				}
			}

			if( indexByTool2Idx != NULL ) {
				static const std::string S_ATool2IdxObj( "aTool2IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool2IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool2IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool2IdxObj );
				}
				cfcore::CFGenKbToolSetByTool2IdxKey keyTool2Idx;
				if( keepObj->isOptionalToolId2Null() ) {
					keyTool2Idx.setOptionalToolId2Null();
				}
				else {
					keyTool2Idx.setOptionalToolId2Value( keepObj->getOptionalToolId2Value() );
				}
				auto searchIndexByTool2Idx = indexByTool2Idx->find( keyTool2Idx );
				if( searchIndexByTool2Idx != indexByTool2Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool2Idx = searchIndexByTool2Idx->second;
					if( mapTool2Idx != NULL ) {
						mapTool2Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool2IdxObj ) );
					}
				}
			}

			if( indexByTool3Idx != NULL ) {
				static const std::string S_ATool3IdxObj( "aTool3IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool3IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool3IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool3IdxObj );
				}
				cfcore::CFGenKbToolSetByTool3IdxKey keyTool3Idx;
				if( keepObj->isOptionalToolId3Null() ) {
					keyTool3Idx.setOptionalToolId3Null();
				}
				else {
					keyTool3Idx.setOptionalToolId3Value( keepObj->getOptionalToolId3Value() );
				}
				auto searchIndexByTool3Idx = indexByTool3Idx->find( keyTool3Idx );
				if( searchIndexByTool3Idx != indexByTool3Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool3Idx = searchIndexByTool3Idx->second;
					if( mapTool3Idx != NULL ) {
						mapTool3Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool3IdxObj ) );
					}
				}
			}

			if( indexByTool4Idx != NULL ) {
				static const std::string S_ATool4IdxObj( "aTool4IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool4IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool4IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool4IdxObj );
				}
				cfcore::CFGenKbToolSetByTool4IdxKey keyTool4Idx;
				if( keepObj->isOptionalToolId4Null() ) {
					keyTool4Idx.setOptionalToolId4Null();
				}
				else {
					keyTool4Idx.setOptionalToolId4Value( keepObj->getOptionalToolId4Value() );
				}
				auto searchIndexByTool4Idx = indexByTool4Idx->find( keyTool4Idx );
				if( searchIndexByTool4Idx != indexByTool4Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool4Idx = searchIndexByTool4Idx->second;
					if( mapTool4Idx != NULL ) {
						mapTool4Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool4IdxObj ) );
					}
				}
			}

			if( indexByTool5Idx != NULL ) {
				static const std::string S_ATool5IdxObj( "aTool5IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool5IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool5IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool5IdxObj );
				}
				cfcore::CFGenKbToolSetByTool5IdxKey keyTool5Idx;
				if( keepObj->isOptionalToolId5Null() ) {
					keyTool5Idx.setOptionalToolId5Null();
				}
				else {
					keyTool5Idx.setOptionalToolId5Value( keepObj->getOptionalToolId5Value() );
				}
				auto searchIndexByTool5Idx = indexByTool5Idx->find( keyTool5Idx );
				if( searchIndexByTool5Idx != indexByTool5Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool5Idx = searchIndexByTool5Idx->second;
					if( mapTool5Idx != NULL ) {
						mapTool5Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool5IdxObj ) );
					}
				}
			}

			if( indexByTool6Idx != NULL ) {
				static const std::string S_ATool6IdxObj( "aTool6IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool6IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool6IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool6IdxObj );
				}
				cfcore::CFGenKbToolSetByTool6IdxKey keyTool6Idx;
				if( keepObj->isOptionalToolId6Null() ) {
					keyTool6Idx.setOptionalToolId6Null();
				}
				else {
					keyTool6Idx.setOptionalToolId6Value( keepObj->getOptionalToolId6Value() );
				}
				auto searchIndexByTool6Idx = indexByTool6Idx->find( keyTool6Idx );
				if( searchIndexByTool6Idx != indexByTool6Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool6Idx = searchIndexByTool6Idx->second;
					if( mapTool6Idx != NULL ) {
						mapTool6Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool6IdxObj ) );
					}
				}
			}

			if( indexByTool7Idx != NULL ) {
				static const std::string S_ATool7IdxObj( "aTool7IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool7IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool7IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool7IdxObj );
				}
				cfcore::CFGenKbToolSetByTool7IdxKey keyTool7Idx;
				if( keepObj->isOptionalToolId7Null() ) {
					keyTool7Idx.setOptionalToolId7Null();
				}
				else {
					keyTool7Idx.setOptionalToolId7Value( keepObj->getOptionalToolId7Value() );
				}
				auto searchIndexByTool7Idx = indexByTool7Idx->find( keyTool7Idx );
				if( searchIndexByTool7Idx != indexByTool7Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool7Idx = searchIndexByTool7Idx->second;
					if( mapTool7Idx != NULL ) {
						mapTool7Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool7IdxObj ) );
					}
				}
			}

			if( allToolSet != NULL ) {
				allToolSet->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbToolSetObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbToolSetByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolSetByNameIdxKey, cfcore::ICFGenKbToolSetObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByTool0Idx != NULL ) {
				static const std::string S_ATool0IdxObj( "aTool0IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool0IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool0IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool0IdxObj );
				}
				cfcore::CFGenKbToolSetByTool0IdxKey keyTool0Idx;
				keyTool0Idx.setRequiredToolId0( keepObj->getRequiredToolId0() );
				auto searchIndexByTool0Idx = indexByTool0Idx->find( keyTool0Idx );
				if( searchIndexByTool0Idx != indexByTool0Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool0Idx = searchIndexByTool0Idx->second;
					if( mapTool0Idx != NULL ) {
						mapTool0Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool0IdxObj ) );
					}
				}
			}

			if( indexByTool1Idx != NULL ) {
				static const std::string S_ATool1IdxObj( "aTool1IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool1IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool1IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool1IdxObj );
				}
				cfcore::CFGenKbToolSetByTool1IdxKey keyTool1Idx;
				if( keepObj->isOptionalToolId1Null() ) {
					keyTool1Idx.setOptionalToolId1Null();
				}
				else {
					keyTool1Idx.setOptionalToolId1Value( keepObj->getOptionalToolId1Value() );
				}
				auto searchIndexByTool1Idx = indexByTool1Idx->find( keyTool1Idx );
				if( searchIndexByTool1Idx != indexByTool1Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool1Idx = searchIndexByTool1Idx->second;
					if( mapTool1Idx != NULL ) {
						mapTool1Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool1IdxObj ) );
					}
				}
			}

			if( indexByTool2Idx != NULL ) {
				static const std::string S_ATool2IdxObj( "aTool2IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool2IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool2IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool2IdxObj );
				}
				cfcore::CFGenKbToolSetByTool2IdxKey keyTool2Idx;
				if( keepObj->isOptionalToolId2Null() ) {
					keyTool2Idx.setOptionalToolId2Null();
				}
				else {
					keyTool2Idx.setOptionalToolId2Value( keepObj->getOptionalToolId2Value() );
				}
				auto searchIndexByTool2Idx = indexByTool2Idx->find( keyTool2Idx );
				if( searchIndexByTool2Idx != indexByTool2Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool2Idx = searchIndexByTool2Idx->second;
					if( mapTool2Idx != NULL ) {
						mapTool2Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool2IdxObj ) );
					}
				}
			}

			if( indexByTool3Idx != NULL ) {
				static const std::string S_ATool3IdxObj( "aTool3IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool3IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool3IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool3IdxObj );
				}
				cfcore::CFGenKbToolSetByTool3IdxKey keyTool3Idx;
				if( keepObj->isOptionalToolId3Null() ) {
					keyTool3Idx.setOptionalToolId3Null();
				}
				else {
					keyTool3Idx.setOptionalToolId3Value( keepObj->getOptionalToolId3Value() );
				}
				auto searchIndexByTool3Idx = indexByTool3Idx->find( keyTool3Idx );
				if( searchIndexByTool3Idx != indexByTool3Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool3Idx = searchIndexByTool3Idx->second;
					if( mapTool3Idx != NULL ) {
						mapTool3Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool3IdxObj ) );
					}
				}
			}

			if( indexByTool4Idx != NULL ) {
				static const std::string S_ATool4IdxObj( "aTool4IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool4IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool4IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool4IdxObj );
				}
				cfcore::CFGenKbToolSetByTool4IdxKey keyTool4Idx;
				if( keepObj->isOptionalToolId4Null() ) {
					keyTool4Idx.setOptionalToolId4Null();
				}
				else {
					keyTool4Idx.setOptionalToolId4Value( keepObj->getOptionalToolId4Value() );
				}
				auto searchIndexByTool4Idx = indexByTool4Idx->find( keyTool4Idx );
				if( searchIndexByTool4Idx != indexByTool4Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool4Idx = searchIndexByTool4Idx->second;
					if( mapTool4Idx != NULL ) {
						mapTool4Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool4IdxObj ) );
					}
				}
			}

			if( indexByTool5Idx != NULL ) {
				static const std::string S_ATool5IdxObj( "aTool5IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool5IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool5IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool5IdxObj );
				}
				cfcore::CFGenKbToolSetByTool5IdxKey keyTool5Idx;
				if( keepObj->isOptionalToolId5Null() ) {
					keyTool5Idx.setOptionalToolId5Null();
				}
				else {
					keyTool5Idx.setOptionalToolId5Value( keepObj->getOptionalToolId5Value() );
				}
				auto searchIndexByTool5Idx = indexByTool5Idx->find( keyTool5Idx );
				if( searchIndexByTool5Idx != indexByTool5Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool5Idx = searchIndexByTool5Idx->second;
					if( mapTool5Idx != NULL ) {
						mapTool5Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool5IdxObj ) );
					}
				}
			}

			if( indexByTool6Idx != NULL ) {
				static const std::string S_ATool6IdxObj( "aTool6IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool6IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool6IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool6IdxObj );
				}
				cfcore::CFGenKbToolSetByTool6IdxKey keyTool6Idx;
				if( keepObj->isOptionalToolId6Null() ) {
					keyTool6Idx.setOptionalToolId6Null();
				}
				else {
					keyTool6Idx.setOptionalToolId6Value( keepObj->getOptionalToolId6Value() );
				}
				auto searchIndexByTool6Idx = indexByTool6Idx->find( keyTool6Idx );
				if( searchIndexByTool6Idx != indexByTool6Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool6Idx = searchIndexByTool6Idx->second;
					if( mapTool6Idx != NULL ) {
						mapTool6Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool6IdxObj ) );
					}
				}
			}

			if( indexByTool7Idx != NULL ) {
				static const std::string S_ATool7IdxObj( "aTool7IdxObj" );
				cfcore::ICFGenKbToolSetObj* aTool7IdxObj =
					dynamic_cast<cfcore::ICFGenKbToolSetObj*>( keepObj );
				if( aTool7IdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATool7IdxObj );
				}
				cfcore::CFGenKbToolSetByTool7IdxKey keyTool7Idx;
				if( keepObj->isOptionalToolId7Null() ) {
					keyTool7Idx.setOptionalToolId7Null();
				}
				else {
					keyTool7Idx.setOptionalToolId7Value( keepObj->getOptionalToolId7Value() );
				}
				auto searchIndexByTool7Idx = indexByTool7Idx->find( keyTool7Idx );
				if( searchIndexByTool7Idx != indexByTool7Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool7Idx = searchIndexByTool7Idx->second;
					if( mapTool7Idx != NULL ) {
						mapTool7Idx->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), aTool7IdxObj ) );
					}
				}
			}

			if( allToolSet != NULL ) {
				allToolSet->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbToolSetTableObj::deepDisposeByIdIdx( const int16_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		cfcore::ICFGenKbToolSetObj* existingObj = readCachedToolSetByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByNameIdx( const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		cfcore::ICFGenKbToolSetObj* existingObj = readCachedToolSetByNameIdx( Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool0Idx( const int16_t ToolId0 ) {
		static const std::string S_ProcName( "deepDisposeByTool0Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool0Idx( ToolId0 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool1Idx( const int16_t* ToolId1 ) {
		static const std::string S_ProcName( "deepDisposeByTool1Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool1Idx( ToolId1 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool2Idx( const int16_t* ToolId2 ) {
		static const std::string S_ProcName( "deepDisposeByTool2Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool2Idx( ToolId2 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool3Idx( const int16_t* ToolId3 ) {
		static const std::string S_ProcName( "deepDisposeByTool3Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool3Idx( ToolId3 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool4Idx( const int16_t* ToolId4 ) {
		static const std::string S_ProcName( "deepDisposeByTool4Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool4Idx( ToolId4 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool5Idx( const int16_t* ToolId5 ) {
		static const std::string S_ProcName( "deepDisposeByTool5Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool5Idx( ToolId5 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool6Idx( const int16_t* ToolId6 ) {
		static const std::string S_ProcName( "deepDisposeByTool6Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool6Idx( ToolId6 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::deepDisposeByTool7Idx( const int16_t* ToolId7 ) {
		static const std::string S_ProcName( "deepDisposeByTool7Idx" );
		std::vector<cfcore::ICFGenKbToolSetObj*> list;
		std::vector<cfcore::ICFGenKbToolSetObj*> matchesFound = readCachedToolSetByTool7Idx( ToolId7 );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolSetObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDeepDisposeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolSetTableObj::reallyDeepDisposeToolSet( cfcore::ICFGenKbToolSetObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeToolSet" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbToolSetObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->reallyDetachFromIndexesToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::createToolSet( cfcore::ICFGenKbToolSetEditObj* Obj ) {
		static const std::string S_ProcName( "createToolSet" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbToolSetObj* obj = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbToolSetBuff* buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->createToolSet(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
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

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readToolSet( cfcore::CFGenKbToolSetPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readToolSet" );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		cfcore::ICFGenKbToolSetObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbToolSetBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
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

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::lockToolSet( cfcore::CFGenKbToolSetPKey* pkey ) {
		static const std::string S_ProcName( "lockToolSet" );
		cfcore::ICFGenKbToolSetObj* locked = NULL;
		cfcore::CFGenKbToolSetBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readAllToolSet( bool forceRead ) {
		static const std::string S_ProcName( "readAllToolSet" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbToolSetObj* realized = NULL;
		if( forceRead || ( allToolSet == NULL ) ) {
			std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* map = new std::map<cfcore::CFGenKbToolSetPKey,cfcore::ICFGenKbToolSetObj*>();
			allToolSet = map;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbToolSetBuff* buff = NULL;
			cfcore::ICFGenKbToolSetObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allToolSet->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allToolSet->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		auto valIter = allToolSet->begin();
		size_t idx = 0;
		while( valIter != allToolSet->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readToolSetByIdIdx( const int16_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbToolSetObj* obj = readToolSet( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readToolSetByNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
				cfcore::ICFGenKbToolSetObj*>();
		}
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		cfcore::ICFGenKbToolSetObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbToolSetBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolSetByNameIdxKey, cfcore::ICFGenKbToolSetObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbToolSetObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool0Idx( const int16_t ToolId0,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool0Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool0IdxKey key;
		key.setRequiredToolId0( ToolId0 );
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool0Idx == NULL ) {
			indexByTool0Idx = new std::map< cfcore::CFGenKbToolSetByTool0IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool0Idx = indexByTool0Idx->find( key );
		if( searchIndexByTool0Idx != indexByTool0Idx->end() ) {
			oldDict = searchIndexByTool0Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool0Idx( schema->getAuthorization(),
				ToolId0 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool0Idx->erase( searchIndexByTool0Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool0Idx->insert( std::map< cfcore::CFGenKbToolSetByTool0IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool1Idx( const int16_t* ToolId1,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool1Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool1IdxKey key;
		if( ToolId1 == NULL ) {
			key.setOptionalToolId1Null();
		}
		else {
			key.setOptionalToolId1Value( *ToolId1 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool1Idx == NULL ) {
			indexByTool1Idx = new std::map< cfcore::CFGenKbToolSetByTool1IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool1Idx = indexByTool1Idx->find( key );
		if( searchIndexByTool1Idx != indexByTool1Idx->end() ) {
			oldDict = searchIndexByTool1Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool1Idx( schema->getAuthorization(),
				ToolId1 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool1Idx->erase( searchIndexByTool1Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool1Idx->insert( std::map< cfcore::CFGenKbToolSetByTool1IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool2Idx( const int16_t* ToolId2,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool2Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool2IdxKey key;
		if( ToolId2 == NULL ) {
			key.setOptionalToolId2Null();
		}
		else {
			key.setOptionalToolId2Value( *ToolId2 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool2Idx == NULL ) {
			indexByTool2Idx = new std::map< cfcore::CFGenKbToolSetByTool2IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool2Idx = indexByTool2Idx->find( key );
		if( searchIndexByTool2Idx != indexByTool2Idx->end() ) {
			oldDict = searchIndexByTool2Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool2Idx( schema->getAuthorization(),
				ToolId2 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool2Idx->erase( searchIndexByTool2Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool2Idx->insert( std::map< cfcore::CFGenKbToolSetByTool2IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool3Idx( const int16_t* ToolId3,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool3Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool3IdxKey key;
		if( ToolId3 == NULL ) {
			key.setOptionalToolId3Null();
		}
		else {
			key.setOptionalToolId3Value( *ToolId3 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool3Idx == NULL ) {
			indexByTool3Idx = new std::map< cfcore::CFGenKbToolSetByTool3IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool3Idx = indexByTool3Idx->find( key );
		if( searchIndexByTool3Idx != indexByTool3Idx->end() ) {
			oldDict = searchIndexByTool3Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool3Idx( schema->getAuthorization(),
				ToolId3 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool3Idx->erase( searchIndexByTool3Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool3Idx->insert( std::map< cfcore::CFGenKbToolSetByTool3IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool4Idx( const int16_t* ToolId4,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool4Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool4IdxKey key;
		if( ToolId4 == NULL ) {
			key.setOptionalToolId4Null();
		}
		else {
			key.setOptionalToolId4Value( *ToolId4 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool4Idx == NULL ) {
			indexByTool4Idx = new std::map< cfcore::CFGenKbToolSetByTool4IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool4Idx = indexByTool4Idx->find( key );
		if( searchIndexByTool4Idx != indexByTool4Idx->end() ) {
			oldDict = searchIndexByTool4Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool4Idx( schema->getAuthorization(),
				ToolId4 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool4Idx->erase( searchIndexByTool4Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool4Idx->insert( std::map< cfcore::CFGenKbToolSetByTool4IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool5Idx( const int16_t* ToolId5,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool5Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool5IdxKey key;
		if( ToolId5 == NULL ) {
			key.setOptionalToolId5Null();
		}
		else {
			key.setOptionalToolId5Value( *ToolId5 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool5Idx == NULL ) {
			indexByTool5Idx = new std::map< cfcore::CFGenKbToolSetByTool5IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool5Idx = indexByTool5Idx->find( key );
		if( searchIndexByTool5Idx != indexByTool5Idx->end() ) {
			oldDict = searchIndexByTool5Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool5Idx( schema->getAuthorization(),
				ToolId5 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool5Idx->erase( searchIndexByTool5Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool5Idx->insert( std::map< cfcore::CFGenKbToolSetByTool5IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool6Idx( const int16_t* ToolId6,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool6Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool6IdxKey key;
		if( ToolId6 == NULL ) {
			key.setOptionalToolId6Null();
		}
		else {
			key.setOptionalToolId6Value( *ToolId6 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool6Idx == NULL ) {
			indexByTool6Idx = new std::map< cfcore::CFGenKbToolSetByTool6IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool6Idx = indexByTool6Idx->find( key );
		if( searchIndexByTool6Idx != indexByTool6Idx->end() ) {
			oldDict = searchIndexByTool6Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool6Idx( schema->getAuthorization(),
				ToolId6 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool6Idx->erase( searchIndexByTool6Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool6Idx->insert( std::map< cfcore::CFGenKbToolSetByTool6IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readToolSetByTool7Idx( const int16_t* ToolId7,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolSetByTool7Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetByTool7IdxKey key;
		if( ToolId7 == NULL ) {
			key.setOptionalToolId7Null();
		}
		else {
			key.setOptionalToolId7Value( *ToolId7 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* oldDict;
		if( indexByTool7Idx == NULL ) {
			indexByTool7Idx = new std::map< cfcore::CFGenKbToolSetByTool7IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>*>();
		}
		auto searchIndexByTool7Idx = indexByTool7Idx->find( key );
		if( searchIndexByTool7Idx != indexByTool7Idx->end() ) {
			oldDict = searchIndexByTool7Idx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>();
			cfcore::ICFGenKbToolSetObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolSetBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByTool7Idx( schema->getAuthorization(),
				ToolId7 );
			cfcore::CFGenKbToolSetBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolSetObj* realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTool7Idx->erase( searchIndexByTool7Idx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTool7Idx->insert( std::map< cfcore::CFGenKbToolSetByTool7IdxKey,
				std::map< cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readToolSetByLookupNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readToolSetByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
				cfcore::ICFGenKbToolSetObj*>();
		}
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		cfcore::ICFGenKbToolSetObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbToolSetBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolSetByNameIdxKey, cfcore::ICFGenKbToolSetObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbToolSetObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readCachedToolSet( cfcore::CFGenKbToolSetPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readToolSet" );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		cfcore::ICFGenKbToolSetObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readCachedToolSetByIdIdx( const int16_t Id )
	{
		static const std::string S_ProcName( "readCachedToolSetByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolSetPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbToolSetObj* obj = readCachedToolSet( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readCachedToolSetByNameIdx( const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedToolSetByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
				cfcore::ICFGenKbToolSetObj*>();
		}
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool0Idx( const int16_t ToolId0 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool0Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool0IdxKey key;
		key.setRequiredToolId0( ToolId0 );
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool0Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool0Idx = indexByTool0Idx->find( key );
		if( searchIndexByTool0Idx != indexByTool0Idx->end() ) {
			dict = searchIndexByTool0Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool1Idx( const int16_t* ToolId1 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool1Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool1IdxKey key;
		if( ToolId1 == NULL ) {
			key.setOptionalToolId1Null();
		}
		else {
			key.setOptionalToolId1Value( *ToolId1 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool1Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool1Idx = indexByTool1Idx->find( key );
		if( searchIndexByTool1Idx != indexByTool1Idx->end() ) {
			dict = searchIndexByTool1Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool2Idx( const int16_t* ToolId2 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool2Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool2IdxKey key;
		if( ToolId2 == NULL ) {
			key.setOptionalToolId2Null();
		}
		else {
			key.setOptionalToolId2Value( *ToolId2 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool2Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool2Idx = indexByTool2Idx->find( key );
		if( searchIndexByTool2Idx != indexByTool2Idx->end() ) {
			dict = searchIndexByTool2Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool3Idx( const int16_t* ToolId3 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool3Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool3IdxKey key;
		if( ToolId3 == NULL ) {
			key.setOptionalToolId3Null();
		}
		else {
			key.setOptionalToolId3Value( *ToolId3 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool3Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool3Idx = indexByTool3Idx->find( key );
		if( searchIndexByTool3Idx != indexByTool3Idx->end() ) {
			dict = searchIndexByTool3Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool4Idx( const int16_t* ToolId4 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool4Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool4IdxKey key;
		if( ToolId4 == NULL ) {
			key.setOptionalToolId4Null();
		}
		else {
			key.setOptionalToolId4Value( *ToolId4 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool4Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool4Idx = indexByTool4Idx->find( key );
		if( searchIndexByTool4Idx != indexByTool4Idx->end() ) {
			dict = searchIndexByTool4Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool5Idx( const int16_t* ToolId5 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool5Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool5IdxKey key;
		if( ToolId5 == NULL ) {
			key.setOptionalToolId5Null();
		}
		else {
			key.setOptionalToolId5Value( *ToolId5 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool5Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool5Idx = indexByTool5Idx->find( key );
		if( searchIndexByTool5Idx != indexByTool5Idx->end() ) {
			dict = searchIndexByTool5Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool6Idx( const int16_t* ToolId6 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool6Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool6IdxKey key;
		if( ToolId6 == NULL ) {
			key.setOptionalToolId6Null();
		}
		else {
			key.setOptionalToolId6Value( *ToolId6 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool6Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool6Idx = indexByTool6Idx->find( key );
		if( searchIndexByTool6Idx != indexByTool6Idx->end() ) {
			dict = searchIndexByTool6Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbToolSetObj*> CFGenKbToolSetTableObj::readCachedToolSetByTool7Idx( const int16_t* ToolId7 )
	{
		static const std::string S_ProcName( "readCachedToolSetByTool7Idx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolSetObj*> arr;
		cfcore::CFGenKbToolSetByTool7IdxKey key;
		if( ToolId7 == NULL ) {
			key.setOptionalToolId7Null();
		}
		else {
			key.setOptionalToolId7Value( *ToolId7 );
		}
		std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* dict;
		if( indexByTool7Idx == NULL ) {
			return( arr );
		}
		auto searchIndexByTool7Idx = indexByTool7Idx->find( key );
		if( searchIndexByTool7Idx != indexByTool7Idx->end() ) {
			dict = searchIndexByTool7Idx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolSetObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolSetObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::readCachedToolSetByLookupNameIdx( const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedToolSetByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
				cfcore::ICFGenKbToolSetObj*>();
		}
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		cfcore::ICFGenKbToolSetObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolSetBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetTableObj::updateToolSet( cfcore::ICFGenKbToolSetEditObj* Obj ) {
		static const std::string S_ProcName( "updateToolSet" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbToolSetObj* obj = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbToolSetBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->updateToolSet( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbToolSetBuff*>( Obj->getToolSetBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( dynamic_cast<cfcore::CFGenKbToolSetTableObj*>( schema->getToolSetTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbToolSetObj*>( obj->realize() );
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

	void CFGenKbToolSetTableObj::deleteToolSet( cfcore::ICFGenKbToolSetEditObj* Obj ) {
		cfcore::ICFGenKbToolSetObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSet( schema->getAuthorization(),
			obj->getToolSetBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByIdIdx( const int16_t Id )
	{
		cfcore::CFGenKbToolSetPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbToolSetObj* obj = readToolSet( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbToolSetEditObj* editObj = dynamic_cast<cfcore::ICFGenKbToolSetEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbToolSetEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbToolSetTableObj::deleteToolSetByNameIdx( const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolSetByNameIdxKey,
				cfcore::ICFGenKbToolSetObj*>();
		}
		cfcore::CFGenKbToolSetByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolSetObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByNameIdx( schema->getAuthorization(),
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByNameIdx( schema->getAuthorization(),
				Name );
		}
		deepDisposeByNameIdx( Name );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool0Idx( const int16_t ToolId0 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool0Idx( schema->getAuthorization(),
				ToolId0 );
		deepDisposeByTool0Idx( ToolId0 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool1Idx( const int16_t* ToolId1 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool1Idx( schema->getAuthorization(),
				ToolId1 );
		deepDisposeByTool1Idx( ToolId1 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool2Idx( const int16_t* ToolId2 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool2Idx( schema->getAuthorization(),
				ToolId2 );
		deepDisposeByTool2Idx( ToolId2 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool3Idx( const int16_t* ToolId3 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool3Idx( schema->getAuthorization(),
				ToolId3 );
		deepDisposeByTool3Idx( ToolId3 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool4Idx( const int16_t* ToolId4 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool4Idx( schema->getAuthorization(),
				ToolId4 );
		deepDisposeByTool4Idx( ToolId4 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool5Idx( const int16_t* ToolId5 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool5Idx( schema->getAuthorization(),
				ToolId5 );
		deepDisposeByTool5Idx( ToolId5 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool6Idx( const int16_t* ToolId6 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool6Idx( schema->getAuthorization(),
				ToolId6 );
		deepDisposeByTool6Idx( ToolId6 );
	}

	void CFGenKbToolSetTableObj::deleteToolSetByTool7Idx( const int16_t* ToolId7 )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->deleteToolSetByTool7Idx( schema->getAuthorization(),
				ToolId7 );
		deepDisposeByTool7Idx( ToolId7 );
	}

	void CFGenKbToolSetTableObj::reallyDetachFromIndexesToolSet( cfcore::ICFGenKbToolSetObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesToolSet" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbToolSetObj* obj = Obj;
		cfcore::CFGenKbToolSetPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbToolSetObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbToolSetByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByTool0Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool0IdxKey keyTool0Idx;
				keyTool0Idx.setRequiredToolId0( obj->getRequiredToolId0() );
				auto searchTool0Idx = indexByTool0Idx->find( keyTool0Idx );
				if( searchTool0Idx != indexByTool0Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool0Idx = searchTool0Idx->second;
					if( mapTool0Idx != NULL ) {
						auto removalProbe = mapTool0Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool0Idx->end() ) {
							mapTool0Idx->erase( removalProbe );
							if( mapTool0Idx->empty() ) {
								delete mapTool0Idx;
								mapTool0Idx = NULL;
								indexByTool0Idx->erase( searchTool0Idx );
							}
						}
					}
				}
			}

			if( indexByTool1Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool1IdxKey keyTool1Idx;
				if( obj->isOptionalToolId1Null() ) {
					keyTool1Idx.setOptionalToolId1Null();
				}
				else {
					keyTool1Idx.setOptionalToolId1Value( obj->getOptionalToolId1Value() );
				}
				auto searchTool1Idx = indexByTool1Idx->find( keyTool1Idx );
				if( searchTool1Idx != indexByTool1Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool1Idx = searchTool1Idx->second;
					if( mapTool1Idx != NULL ) {
						auto removalProbe = mapTool1Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool1Idx->end() ) {
							mapTool1Idx->erase( removalProbe );
							if( mapTool1Idx->empty() ) {
								delete mapTool1Idx;
								mapTool1Idx = NULL;
								indexByTool1Idx->erase( searchTool1Idx );
							}
						}
					}
				}
			}

			if( indexByTool2Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool2IdxKey keyTool2Idx;
				if( obj->isOptionalToolId2Null() ) {
					keyTool2Idx.setOptionalToolId2Null();
				}
				else {
					keyTool2Idx.setOptionalToolId2Value( obj->getOptionalToolId2Value() );
				}
				auto searchTool2Idx = indexByTool2Idx->find( keyTool2Idx );
				if( searchTool2Idx != indexByTool2Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool2Idx = searchTool2Idx->second;
					if( mapTool2Idx != NULL ) {
						auto removalProbe = mapTool2Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool2Idx->end() ) {
							mapTool2Idx->erase( removalProbe );
							if( mapTool2Idx->empty() ) {
								delete mapTool2Idx;
								mapTool2Idx = NULL;
								indexByTool2Idx->erase( searchTool2Idx );
							}
						}
					}
				}
			}

			if( indexByTool3Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool3IdxKey keyTool3Idx;
				if( obj->isOptionalToolId3Null() ) {
					keyTool3Idx.setOptionalToolId3Null();
				}
				else {
					keyTool3Idx.setOptionalToolId3Value( obj->getOptionalToolId3Value() );
				}
				auto searchTool3Idx = indexByTool3Idx->find( keyTool3Idx );
				if( searchTool3Idx != indexByTool3Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool3Idx = searchTool3Idx->second;
					if( mapTool3Idx != NULL ) {
						auto removalProbe = mapTool3Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool3Idx->end() ) {
							mapTool3Idx->erase( removalProbe );
							if( mapTool3Idx->empty() ) {
								delete mapTool3Idx;
								mapTool3Idx = NULL;
								indexByTool3Idx->erase( searchTool3Idx );
							}
						}
					}
				}
			}

			if( indexByTool4Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool4IdxKey keyTool4Idx;
				if( obj->isOptionalToolId4Null() ) {
					keyTool4Idx.setOptionalToolId4Null();
				}
				else {
					keyTool4Idx.setOptionalToolId4Value( obj->getOptionalToolId4Value() );
				}
				auto searchTool4Idx = indexByTool4Idx->find( keyTool4Idx );
				if( searchTool4Idx != indexByTool4Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool4Idx = searchTool4Idx->second;
					if( mapTool4Idx != NULL ) {
						auto removalProbe = mapTool4Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool4Idx->end() ) {
							mapTool4Idx->erase( removalProbe );
							if( mapTool4Idx->empty() ) {
								delete mapTool4Idx;
								mapTool4Idx = NULL;
								indexByTool4Idx->erase( searchTool4Idx );
							}
						}
					}
				}
			}

			if( indexByTool5Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool5IdxKey keyTool5Idx;
				if( obj->isOptionalToolId5Null() ) {
					keyTool5Idx.setOptionalToolId5Null();
				}
				else {
					keyTool5Idx.setOptionalToolId5Value( obj->getOptionalToolId5Value() );
				}
				auto searchTool5Idx = indexByTool5Idx->find( keyTool5Idx );
				if( searchTool5Idx != indexByTool5Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool5Idx = searchTool5Idx->second;
					if( mapTool5Idx != NULL ) {
						auto removalProbe = mapTool5Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool5Idx->end() ) {
							mapTool5Idx->erase( removalProbe );
							if( mapTool5Idx->empty() ) {
								delete mapTool5Idx;
								mapTool5Idx = NULL;
								indexByTool5Idx->erase( searchTool5Idx );
							}
						}
					}
				}
			}

			if( indexByTool6Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool6IdxKey keyTool6Idx;
				if( obj->isOptionalToolId6Null() ) {
					keyTool6Idx.setOptionalToolId6Null();
				}
				else {
					keyTool6Idx.setOptionalToolId6Value( obj->getOptionalToolId6Value() );
				}
				auto searchTool6Idx = indexByTool6Idx->find( keyTool6Idx );
				if( searchTool6Idx != indexByTool6Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool6Idx = searchTool6Idx->second;
					if( mapTool6Idx != NULL ) {
						auto removalProbe = mapTool6Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool6Idx->end() ) {
							mapTool6Idx->erase( removalProbe );
							if( mapTool6Idx->empty() ) {
								delete mapTool6Idx;
								mapTool6Idx = NULL;
								indexByTool6Idx->erase( searchTool6Idx );
							}
						}
					}
				}
			}

			if( indexByTool7Idx != NULL ) {
				cfcore::CFGenKbToolSetByTool7IdxKey keyTool7Idx;
				if( obj->isOptionalToolId7Null() ) {
					keyTool7Idx.setOptionalToolId7Null();
				}
				else {
					keyTool7Idx.setOptionalToolId7Value( obj->getOptionalToolId7Value() );
				}
				auto searchTool7Idx = indexByTool7Idx->find( keyTool7Idx );
				if( searchTool7Idx != indexByTool7Idx->end() ) {
					std::map<cfcore::CFGenKbToolSetPKey, cfcore::ICFGenKbToolSetObj*>* mapTool7Idx = searchTool7Idx->second;
					if( mapTool7Idx != NULL ) {
						auto removalProbe = mapTool7Idx->find( *(obj->getPKey()) );
						if( removalProbe != mapTool7Idx->end() ) {
							mapTool7Idx->erase( removalProbe );
							if( mapTool7Idx->empty() ) {
								delete mapTool7Idx;
								mapTool7Idx = NULL;
								indexByTool7Idx->erase( searchTool7Idx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
