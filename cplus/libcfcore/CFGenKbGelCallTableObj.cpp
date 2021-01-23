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

	const std::string CFGenKbGelCallTableObj::CLASS_NAME( "CFGenKbGelCallTableObj" );
	const std::string CFGenKbGelCallTableObj::TABLE_NAME( "GelCall" );
	const std::string CFGenKbGelCallTableObj::TABLE_DBNAME( "gelcall" );

	CFGenKbGelCallTableObj::CFGenKbGelCallTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
		allGelCall = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByCacheIdx = new std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexBySeqIdx = new std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByCallInstIdx = new std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByPrevInstIdx = new std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByNextInstIdx = new std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
	}

	CFGenKbGelCallTableObj::CFGenKbGelCallTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
		allGelCall = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByCacheIdx = new std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexBySeqIdx = new std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByCallInstIdx = new std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByPrevInstIdx = new std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		indexByNextInstIdx = new std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
	}

	CFGenKbGelCallTableObj::~CFGenKbGelCallTableObj() {
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
		if( indexByCacheIdx != NULL ) {
			delete indexByCacheIdx;
			indexByCacheIdx = NULL;
		}
		if( indexBySeqIdx != NULL ) {
			delete indexBySeqIdx;
			indexBySeqIdx = NULL;
		}
		if( indexByCallInstIdx != NULL ) {
			delete indexByCallInstIdx;
			indexByCallInstIdx = NULL;
		}
		if( indexByPrevInstIdx != NULL ) {
			delete indexByPrevInstIdx;
			indexByPrevInstIdx = NULL;
		}
		if( indexByNextInstIdx != NULL ) {
			delete indexByNextInstIdx;
			indexByNextInstIdx = NULL;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelCallTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelCallTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelCallTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelCallTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelCallTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelCallTableObj::minimizeMemory() {
		if( allGelCall != NULL ) {
			allGelCall->clear();
			delete allGelCall;
			allGelCall = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByTenantIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByGelCacheIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByChainIdx = NULL;
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
		if( indexByCacheIdx != NULL ) {
			std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByCacheIdx = indexByCacheIdx->begin();
			std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByCacheIdx = indexByCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByCacheIdx = NULL;
			while( iterByCacheIdx != endByCacheIdx ) {
				curByCacheIdx = iterByCacheIdx->second;
				if( curByCacheIdx != NULL ) {
					curByCacheIdx->clear();
					delete curByCacheIdx;
					curByCacheIdx = NULL;
					iterByCacheIdx->second = NULL;
				}
				iterByCacheIdx ++;
			}
			indexByCacheIdx->clear();
		}
		if( indexBySeqIdx != NULL ) {
			std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterBySeqIdx = indexBySeqIdx->begin();
			std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endBySeqIdx = indexBySeqIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curBySeqIdx = NULL;
			while( iterBySeqIdx != endBySeqIdx ) {
				curBySeqIdx = iterBySeqIdx->second;
				if( curBySeqIdx != NULL ) {
					curBySeqIdx->clear();
					delete curBySeqIdx;
					curBySeqIdx = NULL;
					iterBySeqIdx->second = NULL;
				}
				iterBySeqIdx ++;
			}
			indexBySeqIdx->clear();
		}
		if( indexByCallInstIdx != NULL ) {
			std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByCallInstIdx = indexByCallInstIdx->begin();
			std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByCallInstIdx = indexByCallInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByCallInstIdx = NULL;
			while( iterByCallInstIdx != endByCallInstIdx ) {
				curByCallInstIdx = iterByCallInstIdx->second;
				if( curByCallInstIdx != NULL ) {
					curByCallInstIdx->clear();
					delete curByCallInstIdx;
					curByCallInstIdx = NULL;
					iterByCallInstIdx->second = NULL;
				}
				iterByCallInstIdx ++;
			}
			indexByCallInstIdx->clear();
		}
		if( indexByPrevInstIdx != NULL ) {
			std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByPrevInstIdx = indexByPrevInstIdx->begin();
			std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByPrevInstIdx = indexByPrevInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByPrevInstIdx = NULL;
			while( iterByPrevInstIdx != endByPrevInstIdx ) {
				curByPrevInstIdx = iterByPrevInstIdx->second;
				if( curByPrevInstIdx != NULL ) {
					curByPrevInstIdx->clear();
					delete curByPrevInstIdx;
					curByPrevInstIdx = NULL;
					iterByPrevInstIdx->second = NULL;
				}
				iterByPrevInstIdx ++;
			}
			indexByPrevInstIdx->clear();
		}
		if( indexByNextInstIdx != NULL ) {
			std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator iterByNextInstIdx = indexByNextInstIdx->begin();
			std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* >::iterator endByNextInstIdx = indexByNextInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* curByNextInstIdx = NULL;
			while( iterByNextInstIdx != endByNextInstIdx ) {
				curByNextInstIdx = iterByNextInstIdx->second;
				if( curByNextInstIdx != NULL ) {
					curByNextInstIdx->clear();
					delete curByNextInstIdx;
					curByNextInstIdx = NULL;
					iterByNextInstIdx->second = NULL;
				}
				iterByNextInstIdx ++;
			}
			indexByNextInstIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::newInstance() {
		cfcore::ICFGenKbGelCallObj* inst = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( new CFGenKbGelCallObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelCallEditObj* CFGenKbGelCallTableObj::newEditInstance( cfcore::ICFGenKbGelCallObj* orig ) {
		cfcore::ICFGenKbGelCallEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelCallEditObj*>( new CFGenKbGelCallEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::realizeGelCall( cfcore::ICFGenKbGelCallObj* Obj ) {
		static const std::string S_ProcName( "realizeGelCall" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelCallObj* obj = Obj;
		cfcore::ICFGenKbGelCallObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelCallObj* keepObj = NULL;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByCacheIdx != NULL ) {
				cfcore::CFGenKbGelCallByCacheIdxKey keyCacheIdx;
				keyCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchCacheIdx = indexByCacheIdx->find( keyCacheIdx );
				if( searchCacheIdx != indexByCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCacheIdx = searchCacheIdx->second;
					if( mapCacheIdx != NULL ) {
						auto removalProbe = mapCacheIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapCacheIdx->end() ) {
							mapCacheIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySeqIdx != NULL ) {
				cfcore::CFGenKbGelCallBySeqIdxKey keySeqIdx;
				if( keepObj->isOptionalSeqInstTenantIdNull() ) {
					keySeqIdx.setOptionalSeqInstTenantIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstTenantIdValue( keepObj->getOptionalSeqInstTenantIdValue() );
				}
				if( keepObj->isOptionalSeqInstGelCacheIdNull() ) {
					keySeqIdx.setOptionalSeqInstGelCacheIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstGelCacheIdValue( keepObj->getOptionalSeqInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalSeqInstIdNull() ) {
					keySeqIdx.setOptionalSeqInstIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstIdValue( keepObj->getOptionalSeqInstIdValue() );
				}
				auto searchSeqIdx = indexBySeqIdx->find( keySeqIdx );
				if( searchSeqIdx != indexBySeqIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapSeqIdx = searchSeqIdx->second;
					if( mapSeqIdx != NULL ) {
						auto removalProbe = mapSeqIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSeqIdx->end() ) {
							mapSeqIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByCallInstIdx != NULL ) {
				cfcore::CFGenKbGelCallByCallInstIdxKey keyCallInstIdx;
				if( keepObj->isOptionalCallInstTenantIdNull() ) {
					keyCallInstIdx.setOptionalCallInstTenantIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstTenantIdValue( keepObj->getOptionalCallInstTenantIdValue() );
				}
				if( keepObj->isOptionalCallInstGelCacheIdNull() ) {
					keyCallInstIdx.setOptionalCallInstGelCacheIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstGelCacheIdValue( keepObj->getOptionalCallInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalCallInstIdNull() ) {
					keyCallInstIdx.setOptionalCallInstIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstIdValue( keepObj->getOptionalCallInstIdValue() );
				}
				auto searchCallInstIdx = indexByCallInstIdx->find( keyCallInstIdx );
				if( searchCallInstIdx != indexByCallInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCallInstIdx = searchCallInstIdx->second;
					if( mapCallInstIdx != NULL ) {
						auto removalProbe = mapCallInstIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapCallInstIdx->end() ) {
							mapCallInstIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPrevInstIdx != NULL ) {
				cfcore::CFGenKbGelCallByPrevInstIdxKey keyPrevInstIdx;
				if( keepObj->isOptionalPrevInstTenantIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstTenantIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstTenantIdValue( keepObj->getOptionalPrevInstTenantIdValue() );
				}
				if( keepObj->isOptionalPrevInstGelCacheIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( keepObj->getOptionalPrevInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalPrevInstGelInstIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdValue( keepObj->getOptionalPrevInstGelInstIdValue() );
				}
				auto searchPrevInstIdx = indexByPrevInstIdx->find( keyPrevInstIdx );
				if( searchPrevInstIdx != indexByPrevInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapPrevInstIdx = searchPrevInstIdx->second;
					if( mapPrevInstIdx != NULL ) {
						auto removalProbe = mapPrevInstIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPrevInstIdx->end() ) {
							mapPrevInstIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNextInstIdx != NULL ) {
				cfcore::CFGenKbGelCallByNextInstIdxKey keyNextInstIdx;
				if( keepObj->isOptionalNextInstTenantIdNull() ) {
					keyNextInstIdx.setOptionalNextInstTenantIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstTenantIdValue( keepObj->getOptionalNextInstTenantIdValue() );
				}
				if( keepObj->isOptionalNextInstGelCacheIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelCacheIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelCacheIdValue( keepObj->getOptionalNextInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalNextInstGelInstIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelInstIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelInstIdValue( keepObj->getOptionalNextInstGelInstIdValue() );
				}
				auto searchNextInstIdx = indexByNextInstIdx->find( keyNextInstIdx );
				if( searchNextInstIdx != indexByNextInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapNextInstIdx = searchNextInstIdx->second;
					if( mapNextInstIdx != NULL ) {
						auto removalProbe = mapNextInstIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapNextInstIdx->end() ) {
							mapNextInstIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( Obj ) );
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
				cfcore::ICFGenKbGelCallObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelCallObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelCallObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByCacheIdx != NULL ) {
				static const std::string S_ACacheIdxObj( "aCacheIdxObj" );
				cfcore::ICFGenKbGelCallObj* aCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aCacheIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACacheIdxObj );
				}
				cfcore::CFGenKbGelCallByCacheIdxKey keyCacheIdx;
				keyCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByCacheIdx = indexByCacheIdx->find( keyCacheIdx );
				if( searchIndexByCacheIdx != indexByCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCacheIdx = searchIndexByCacheIdx->second;
					if( mapCacheIdx != NULL ) {
						mapCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aCacheIdxObj ) );
					}
				}
			}

			if( indexBySeqIdx != NULL ) {
				static const std::string S_ASeqIdxObj( "aSeqIdxObj" );
				cfcore::ICFGenKbGelCallObj* aSeqIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aSeqIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASeqIdxObj );
				}
				cfcore::CFGenKbGelCallBySeqIdxKey keySeqIdx;
				if( keepObj->isOptionalSeqInstTenantIdNull() ) {
					keySeqIdx.setOptionalSeqInstTenantIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstTenantIdValue( keepObj->getOptionalSeqInstTenantIdValue() );
				}
				if( keepObj->isOptionalSeqInstGelCacheIdNull() ) {
					keySeqIdx.setOptionalSeqInstGelCacheIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstGelCacheIdValue( keepObj->getOptionalSeqInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalSeqInstIdNull() ) {
					keySeqIdx.setOptionalSeqInstIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstIdValue( keepObj->getOptionalSeqInstIdValue() );
				}
				auto searchIndexBySeqIdx = indexBySeqIdx->find( keySeqIdx );
				if( searchIndexBySeqIdx != indexBySeqIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapSeqIdx = searchIndexBySeqIdx->second;
					if( mapSeqIdx != NULL ) {
						mapSeqIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aSeqIdxObj ) );
					}
				}
			}

			if( indexByCallInstIdx != NULL ) {
				static const std::string S_ACallInstIdxObj( "aCallInstIdxObj" );
				cfcore::ICFGenKbGelCallObj* aCallInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aCallInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACallInstIdxObj );
				}
				cfcore::CFGenKbGelCallByCallInstIdxKey keyCallInstIdx;
				if( keepObj->isOptionalCallInstTenantIdNull() ) {
					keyCallInstIdx.setOptionalCallInstTenantIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstTenantIdValue( keepObj->getOptionalCallInstTenantIdValue() );
				}
				if( keepObj->isOptionalCallInstGelCacheIdNull() ) {
					keyCallInstIdx.setOptionalCallInstGelCacheIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstGelCacheIdValue( keepObj->getOptionalCallInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalCallInstIdNull() ) {
					keyCallInstIdx.setOptionalCallInstIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstIdValue( keepObj->getOptionalCallInstIdValue() );
				}
				auto searchIndexByCallInstIdx = indexByCallInstIdx->find( keyCallInstIdx );
				if( searchIndexByCallInstIdx != indexByCallInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCallInstIdx = searchIndexByCallInstIdx->second;
					if( mapCallInstIdx != NULL ) {
						mapCallInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aCallInstIdxObj ) );
					}
				}
			}

			if( indexByPrevInstIdx != NULL ) {
				static const std::string S_APrevInstIdxObj( "aPrevInstIdxObj" );
				cfcore::ICFGenKbGelCallObj* aPrevInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aPrevInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevInstIdxObj );
				}
				cfcore::CFGenKbGelCallByPrevInstIdxKey keyPrevInstIdx;
				if( keepObj->isOptionalPrevInstTenantIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstTenantIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstTenantIdValue( keepObj->getOptionalPrevInstTenantIdValue() );
				}
				if( keepObj->isOptionalPrevInstGelCacheIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( keepObj->getOptionalPrevInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalPrevInstGelInstIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdValue( keepObj->getOptionalPrevInstGelInstIdValue() );
				}
				auto searchIndexByPrevInstIdx = indexByPrevInstIdx->find( keyPrevInstIdx );
				if( searchIndexByPrevInstIdx != indexByPrevInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapPrevInstIdx = searchIndexByPrevInstIdx->second;
					if( mapPrevInstIdx != NULL ) {
						mapPrevInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aPrevInstIdxObj ) );
					}
				}
			}

			if( indexByNextInstIdx != NULL ) {
				static const std::string S_ANextInstIdxObj( "aNextInstIdxObj" );
				cfcore::ICFGenKbGelCallObj* aNextInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aNextInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextInstIdxObj );
				}
				cfcore::CFGenKbGelCallByNextInstIdxKey keyNextInstIdx;
				if( keepObj->isOptionalNextInstTenantIdNull() ) {
					keyNextInstIdx.setOptionalNextInstTenantIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstTenantIdValue( keepObj->getOptionalNextInstTenantIdValue() );
				}
				if( keepObj->isOptionalNextInstGelCacheIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelCacheIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelCacheIdValue( keepObj->getOptionalNextInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalNextInstGelInstIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelInstIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelInstIdValue( keepObj->getOptionalNextInstGelInstIdValue() );
				}
				auto searchIndexByNextInstIdx = indexByNextInstIdx->find( keyNextInstIdx );
				if( searchIndexByNextInstIdx != indexByNextInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapNextInstIdx = searchIndexByNextInstIdx->second;
					if( mapNextInstIdx != NULL ) {
						mapNextInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aNextInstIdxObj ) );
					}
				}
			}

			if( allGelCall != NULL ) {
				allGelCall->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelCallObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelCallObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelCallObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByCacheIdx != NULL ) {
				static const std::string S_ACacheIdxObj( "aCacheIdxObj" );
				cfcore::ICFGenKbGelCallObj* aCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aCacheIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACacheIdxObj );
				}
				cfcore::CFGenKbGelCallByCacheIdxKey keyCacheIdx;
				keyCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByCacheIdx = indexByCacheIdx->find( keyCacheIdx );
				if( searchIndexByCacheIdx != indexByCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCacheIdx = searchIndexByCacheIdx->second;
					if( mapCacheIdx != NULL ) {
						mapCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aCacheIdxObj ) );
					}
				}
			}

			if( indexBySeqIdx != NULL ) {
				static const std::string S_ASeqIdxObj( "aSeqIdxObj" );
				cfcore::ICFGenKbGelCallObj* aSeqIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aSeqIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASeqIdxObj );
				}
				cfcore::CFGenKbGelCallBySeqIdxKey keySeqIdx;
				if( keepObj->isOptionalSeqInstTenantIdNull() ) {
					keySeqIdx.setOptionalSeqInstTenantIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstTenantIdValue( keepObj->getOptionalSeqInstTenantIdValue() );
				}
				if( keepObj->isOptionalSeqInstGelCacheIdNull() ) {
					keySeqIdx.setOptionalSeqInstGelCacheIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstGelCacheIdValue( keepObj->getOptionalSeqInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalSeqInstIdNull() ) {
					keySeqIdx.setOptionalSeqInstIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstIdValue( keepObj->getOptionalSeqInstIdValue() );
				}
				auto searchIndexBySeqIdx = indexBySeqIdx->find( keySeqIdx );
				if( searchIndexBySeqIdx != indexBySeqIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapSeqIdx = searchIndexBySeqIdx->second;
					if( mapSeqIdx != NULL ) {
						mapSeqIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aSeqIdxObj ) );
					}
				}
			}

			if( indexByCallInstIdx != NULL ) {
				static const std::string S_ACallInstIdxObj( "aCallInstIdxObj" );
				cfcore::ICFGenKbGelCallObj* aCallInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aCallInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACallInstIdxObj );
				}
				cfcore::CFGenKbGelCallByCallInstIdxKey keyCallInstIdx;
				if( keepObj->isOptionalCallInstTenantIdNull() ) {
					keyCallInstIdx.setOptionalCallInstTenantIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstTenantIdValue( keepObj->getOptionalCallInstTenantIdValue() );
				}
				if( keepObj->isOptionalCallInstGelCacheIdNull() ) {
					keyCallInstIdx.setOptionalCallInstGelCacheIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstGelCacheIdValue( keepObj->getOptionalCallInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalCallInstIdNull() ) {
					keyCallInstIdx.setOptionalCallInstIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstIdValue( keepObj->getOptionalCallInstIdValue() );
				}
				auto searchIndexByCallInstIdx = indexByCallInstIdx->find( keyCallInstIdx );
				if( searchIndexByCallInstIdx != indexByCallInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCallInstIdx = searchIndexByCallInstIdx->second;
					if( mapCallInstIdx != NULL ) {
						mapCallInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aCallInstIdxObj ) );
					}
				}
			}

			if( indexByPrevInstIdx != NULL ) {
				static const std::string S_APrevInstIdxObj( "aPrevInstIdxObj" );
				cfcore::ICFGenKbGelCallObj* aPrevInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aPrevInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APrevInstIdxObj );
				}
				cfcore::CFGenKbGelCallByPrevInstIdxKey keyPrevInstIdx;
				if( keepObj->isOptionalPrevInstTenantIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstTenantIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstTenantIdValue( keepObj->getOptionalPrevInstTenantIdValue() );
				}
				if( keepObj->isOptionalPrevInstGelCacheIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( keepObj->getOptionalPrevInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalPrevInstGelInstIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdValue( keepObj->getOptionalPrevInstGelInstIdValue() );
				}
				auto searchIndexByPrevInstIdx = indexByPrevInstIdx->find( keyPrevInstIdx );
				if( searchIndexByPrevInstIdx != indexByPrevInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapPrevInstIdx = searchIndexByPrevInstIdx->second;
					if( mapPrevInstIdx != NULL ) {
						mapPrevInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aPrevInstIdxObj ) );
					}
				}
			}

			if( indexByNextInstIdx != NULL ) {
				static const std::string S_ANextInstIdxObj( "aNextInstIdxObj" );
				cfcore::ICFGenKbGelCallObj* aNextInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCallObj*>( keepObj );
				if( aNextInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANextInstIdxObj );
				}
				cfcore::CFGenKbGelCallByNextInstIdxKey keyNextInstIdx;
				if( keepObj->isOptionalNextInstTenantIdNull() ) {
					keyNextInstIdx.setOptionalNextInstTenantIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstTenantIdValue( keepObj->getOptionalNextInstTenantIdValue() );
				}
				if( keepObj->isOptionalNextInstGelCacheIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelCacheIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelCacheIdValue( keepObj->getOptionalNextInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalNextInstGelInstIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelInstIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelInstIdValue( keepObj->getOptionalNextInstGelInstIdValue() );
				}
				auto searchIndexByNextInstIdx = indexByNextInstIdx->find( keyNextInstIdx );
				if( searchIndexByNextInstIdx != indexByNextInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapNextInstIdx = searchIndexByNextInstIdx->second;
					if( mapNextInstIdx != NULL ) {
						mapNextInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), aNextInstIdxObj ) );
					}
				}
			}

			if( allGelCall != NULL ) {
				allGelCall->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGelCallTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		cfcore::ICFGenKbGelCallObj* existingObj = readCachedGelCallByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByChainIdx( ChainInstTenantId,
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
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::reallyDeepDisposeGelCall( cfcore::ICFGenKbGelCallObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelCall" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelCallObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDetachFromIndexesGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj ) );
	}

	void CFGenKbGelCallTableObj::deepDisposeByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByCacheIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId ) {
		static const std::string S_ProcName( "deepDisposeBySeqIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallBySeqIdx( SeqInstTenantId,
				SeqInstGelCacheId,
				SeqInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId ) {
		static const std::string S_ProcName( "deepDisposeByCallInstIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByCallInstIdx( CallInstTenantId,
				CallInstGelCacheId,
				CallInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPrevInstIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByPrevInstIdx( PrevInstTenantId,
				PrevInstGelCacheId,
				PrevInstGelInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCallTableObj::deepDisposeByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByNextInstIdx" );
		std::vector<cfcore::ICFGenKbGelCallObj*> list;
		std::vector<cfcore::ICFGenKbGelCallObj*> matchesFound = readCachedGelCallByNextInstIdx( NextInstTenantId,
				NextInstGelCacheId,
				NextInstGelInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCallObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::createGelCall( cfcore::ICFGenKbGelCallEditObj* Obj ) {
		static const std::string S_ProcName( "createGelCall" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelCallObj* obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelCallBuff* buff = dynamic_cast<cfcore::CFGenKbGelCallBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->createGelCall(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelCallBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::readGelCall( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelCall" );
		cfcore::ICFGenKbGelCallObj* obj = NULL;
		cfcore::ICFGenKbGelCallObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelCallBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::lockGelCall( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelCall" );
		cfcore::ICFGenKbGelCallObj* locked = NULL;
		cfcore::CFGenKbGelCallBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readAllGelCall( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelCall" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelCallObj* realized = NULL;
		if( forceRead || ( allGelCall == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelCallObj*>();
			allGelCall = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelCallBuff* buff = NULL;
			cfcore::ICFGenKbGelCallObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelCall->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelCall->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		auto valIter = allGelCall->begin();
		size_t idx = 0;
		while( valIter != allGelCall->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::readGelCallByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelCallObj* obj = readGelCall( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByChainIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCallByCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByCacheIdx == NULL ) {
			indexByCacheIdx = new std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		}
		auto searchIndexByCacheIdx = indexByCacheIdx->find( key );
		if( searchIndexByCacheIdx != indexByCacheIdx->end() ) {
			oldDict = searchIndexByCacheIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelCallObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedByCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelCallBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCacheIdx->erase( searchIndexByCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCacheIdx->insert( std::map< cfcore::CFGenKbGelCallByCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallBySeqIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCallBySeqIdxKey key;
		if( SeqInstTenantId == NULL ) {
			key.setOptionalSeqInstTenantIdNull();
		}
		else {
			key.setOptionalSeqInstTenantIdValue( *SeqInstTenantId );
		}
		if( SeqInstGelCacheId == NULL ) {
			key.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			key.setOptionalSeqInstGelCacheIdValue( *SeqInstGelCacheId );
		}
		if( SeqInstId == NULL ) {
			key.setOptionalSeqInstIdNull();
		}
		else {
			key.setOptionalSeqInstIdValue( *SeqInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexBySeqIdx == NULL ) {
			indexBySeqIdx = new std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		}
		auto searchIndexBySeqIdx = indexBySeqIdx->find( key );
		if( searchIndexBySeqIdx != indexBySeqIdx->end() ) {
			oldDict = searchIndexBySeqIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelCallObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedBySeqIdx( schema->getAuthorization(),
				SeqInstTenantId,
				SeqInstGelCacheId,
				SeqInstId );
			cfcore::CFGenKbGelCallBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySeqIdx->erase( searchIndexBySeqIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySeqIdx->insert( std::map< cfcore::CFGenKbGelCallBySeqIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByCallInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCallByCallInstIdxKey key;
		if( CallInstTenantId == NULL ) {
			key.setOptionalCallInstTenantIdNull();
		}
		else {
			key.setOptionalCallInstTenantIdValue( *CallInstTenantId );
		}
		if( CallInstGelCacheId == NULL ) {
			key.setOptionalCallInstGelCacheIdNull();
		}
		else {
			key.setOptionalCallInstGelCacheIdValue( *CallInstGelCacheId );
		}
		if( CallInstId == NULL ) {
			key.setOptionalCallInstIdNull();
		}
		else {
			key.setOptionalCallInstIdValue( *CallInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByCallInstIdx == NULL ) {
			indexByCallInstIdx = new std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		}
		auto searchIndexByCallInstIdx = indexByCallInstIdx->find( key );
		if( searchIndexByCallInstIdx != indexByCallInstIdx->end() ) {
			oldDict = searchIndexByCallInstIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelCallObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedByCallInstIdx( schema->getAuthorization(),
				CallInstTenantId,
				CallInstGelCacheId,
				CallInstId );
			cfcore::CFGenKbGelCallBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCallInstIdx->erase( searchIndexByCallInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCallInstIdx->insert( std::map< cfcore::CFGenKbGelCallByCallInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByPrevInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCallByPrevInstIdxKey key;
		if( PrevInstTenantId == NULL ) {
			key.setOptionalPrevInstTenantIdNull();
		}
		else {
			key.setOptionalPrevInstTenantIdValue( *PrevInstTenantId );
		}
		if( PrevInstGelCacheId == NULL ) {
			key.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			key.setOptionalPrevInstGelCacheIdValue( *PrevInstGelCacheId );
		}
		if( PrevInstGelInstId == NULL ) {
			key.setOptionalPrevInstGelInstIdNull();
		}
		else {
			key.setOptionalPrevInstGelInstIdValue( *PrevInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByPrevInstIdx == NULL ) {
			indexByPrevInstIdx = new std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		}
		auto searchIndexByPrevInstIdx = indexByPrevInstIdx->find( key );
		if( searchIndexByPrevInstIdx != indexByPrevInstIdx->end() ) {
			oldDict = searchIndexByPrevInstIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelCallObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedByPrevInstIdx( schema->getAuthorization(),
				PrevInstTenantId,
				PrevInstGelCacheId,
				PrevInstGelInstId );
			cfcore::CFGenKbGelCallBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPrevInstIdx->erase( searchIndexByPrevInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPrevInstIdx->insert( std::map< cfcore::CFGenKbGelCallByPrevInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readGelCallByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCallByNextInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCallByNextInstIdxKey key;
		if( NextInstTenantId == NULL ) {
			key.setOptionalNextInstTenantIdNull();
		}
		else {
			key.setOptionalNextInstTenantIdValue( *NextInstTenantId );
		}
		if( NextInstGelCacheId == NULL ) {
			key.setOptionalNextInstGelCacheIdNull();
		}
		else {
			key.setOptionalNextInstGelCacheIdValue( *NextInstGelCacheId );
		}
		if( NextInstGelInstId == NULL ) {
			key.setOptionalNextInstGelInstIdNull();
		}
		else {
			key.setOptionalNextInstGelInstIdValue( *NextInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* oldDict;
		if( indexByNextInstIdx == NULL ) {
			indexByNextInstIdx = new std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>*>();
		}
		auto searchIndexByNextInstIdx = indexByNextInstIdx->find( key );
		if( searchIndexByNextInstIdx != indexByNextInstIdx->end() ) {
			oldDict = searchIndexByNextInstIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>();
			cfcore::ICFGenKbGelCallObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCallBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedByNextInstIdx( schema->getAuthorization(),
				NextInstTenantId,
				NextInstGelCacheId,
				NextInstGelInstId );
			cfcore::CFGenKbGelCallBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCallObj* realized = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByNextInstIdx->erase( searchIndexByNextInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByNextInstIdx->insert( std::map< cfcore::CFGenKbGelCallByNextInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::readCachedGelCall( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelCall" );
		cfcore::ICFGenKbGelCallObj* obj = NULL;
		cfcore::ICFGenKbGelCallObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::readCachedGelCallByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelCallByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelCallObj* obj = readCachedGelCall( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelCallByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
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

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelCallByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
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

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelCallByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
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

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelCallByCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelCallByCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByCacheIdx = indexByCacheIdx->find( key );
		if( searchIndexByCacheIdx != indexByCacheIdx->end() ) {
			dict = searchIndexByCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCallBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId )
	{
		static const std::string S_ProcName( "readCachedGelCallBySeqIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelCallBySeqIdxKey key;
		if( SeqInstTenantId == NULL ) {
			key.setOptionalSeqInstTenantIdNull();
		}
		else {
			key.setOptionalSeqInstTenantIdValue( *SeqInstTenantId );
		}
		if( SeqInstGelCacheId == NULL ) {
			key.setOptionalSeqInstGelCacheIdNull();
		}
		else {
			key.setOptionalSeqInstGelCacheIdValue( *SeqInstGelCacheId );
		}
		if( SeqInstId == NULL ) {
			key.setOptionalSeqInstIdNull();
		}
		else {
			key.setOptionalSeqInstIdValue( *SeqInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexBySeqIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySeqIdx = indexBySeqIdx->find( key );
		if( searchIndexBySeqIdx != indexBySeqIdx->end() ) {
			dict = searchIndexBySeqIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCallBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId )
	{
		static const std::string S_ProcName( "readCachedGelCallByCallInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelCallByCallInstIdxKey key;
		if( CallInstTenantId == NULL ) {
			key.setOptionalCallInstTenantIdNull();
		}
		else {
			key.setOptionalCallInstTenantIdValue( *CallInstTenantId );
		}
		if( CallInstGelCacheId == NULL ) {
			key.setOptionalCallInstGelCacheIdNull();
		}
		else {
			key.setOptionalCallInstGelCacheIdValue( *CallInstGelCacheId );
		}
		if( CallInstId == NULL ) {
			key.setOptionalCallInstIdNull();
		}
		else {
			key.setOptionalCallInstIdValue( *CallInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByCallInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByCallInstIdx = indexByCallInstIdx->find( key );
		if( searchIndexByCallInstIdx != indexByCallInstIdx->end() ) {
			dict = searchIndexByCallInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCallBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelCallByPrevInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelCallByPrevInstIdxKey key;
		if( PrevInstTenantId == NULL ) {
			key.setOptionalPrevInstTenantIdNull();
		}
		else {
			key.setOptionalPrevInstTenantIdValue( *PrevInstTenantId );
		}
		if( PrevInstGelCacheId == NULL ) {
			key.setOptionalPrevInstGelCacheIdNull();
		}
		else {
			key.setOptionalPrevInstGelCacheIdValue( *PrevInstGelCacheId );
		}
		if( PrevInstGelInstId == NULL ) {
			key.setOptionalPrevInstGelInstIdNull();
		}
		else {
			key.setOptionalPrevInstGelInstIdValue( *PrevInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByPrevInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPrevInstIdx = indexByPrevInstIdx->find( key );
		if( searchIndexByPrevInstIdx != indexByPrevInstIdx->end() ) {
			dict = searchIndexByPrevInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCallBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelCallTableObj::readCachedGelCallByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelCallByNextInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCallObj*> arr;
		cfcore::CFGenKbGelCallByNextInstIdxKey key;
		if( NextInstTenantId == NULL ) {
			key.setOptionalNextInstTenantIdNull();
		}
		else {
			key.setOptionalNextInstTenantIdValue( *NextInstTenantId );
		}
		if( NextInstGelCacheId == NULL ) {
			key.setOptionalNextInstGelCacheIdNull();
		}
		else {
			key.setOptionalNextInstGelCacheIdValue( *NextInstGelCacheId );
		}
		if( NextInstGelInstId == NULL ) {
			key.setOptionalNextInstGelInstIdNull();
		}
		else {
			key.setOptionalNextInstGelInstIdValue( *NextInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* dict;
		if( indexByNextInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByNextInstIdx = indexByNextInstIdx->find( key );
		if( searchIndexByNextInstIdx != indexByNextInstIdx->end() ) {
			dict = searchIndexByNextInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCallObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCallObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCallBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallTableObj::updateGelCall( cfcore::ICFGenKbGelCallEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelCall" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelCallObj* obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelCallBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->updateGelCall( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelCallBuff*>( Obj->getGelCallBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj->realize() );
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

	void CFGenKbGelCallTableObj::deleteGelCall( cfcore::ICFGenKbGelCallEditObj* Obj ) {
		cfcore::ICFGenKbGelCallObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCall( schema->getAuthorization(),
			obj->getGelCallBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelCallObj* obj = readGelCall( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelCallEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelCallEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelCallEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelCallTableObj::deleteGelCallByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallBySeqIdx( const int64_t* SeqInstTenantId,
			const int64_t* SeqInstGelCacheId,
			const int64_t* SeqInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallBySeqIdx( schema->getAuthorization(),
				SeqInstTenantId,
				SeqInstGelCacheId,
				SeqInstId );
		deepDisposeBySeqIdx( SeqInstTenantId,
			SeqInstGelCacheId,
			SeqInstId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByCallInstIdx( const int64_t* CallInstTenantId,
			const int64_t* CallInstGelCacheId,
			const int64_t* CallInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByCallInstIdx( schema->getAuthorization(),
				CallInstTenantId,
				CallInstGelCacheId,
				CallInstId );
		deepDisposeByCallInstIdx( CallInstTenantId,
			CallInstGelCacheId,
			CallInstId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByPrevInstIdx( const int64_t* PrevInstTenantId,
			const int64_t* PrevInstGelCacheId,
			const int64_t* PrevInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByPrevInstIdx( schema->getAuthorization(),
				PrevInstTenantId,
				PrevInstGelCacheId,
				PrevInstGelInstId );
		deepDisposeByPrevInstIdx( PrevInstTenantId,
			PrevInstGelCacheId,
			PrevInstGelInstId );
	}

	void CFGenKbGelCallTableObj::deleteGelCallByNextInstIdx( const int64_t* NextInstTenantId,
			const int64_t* NextInstGelCacheId,
			const int64_t* NextInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->deleteGelCallByNextInstIdx( schema->getAuthorization(),
				NextInstTenantId,
				NextInstGelCacheId,
				NextInstGelInstId );
		deepDisposeByNextInstIdx( NextInstTenantId,
			NextInstGelCacheId,
			NextInstGelInstId );
	}

	void CFGenKbGelCallTableObj::reallyDetachFromIndexesGelCall( cfcore::ICFGenKbGelCallObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelCall" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelCallObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelCallObj* existingObj = searchMembers->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapChainIdx = searchChainIdx->second;
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

			if( indexByCacheIdx != NULL ) {
				cfcore::CFGenKbGelCallByCacheIdxKey keyCacheIdx;
				keyCacheIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyCacheIdx.setRequiredGelCacheId( obj->getRequiredGelCacheId() );
				auto searchCacheIdx = indexByCacheIdx->find( keyCacheIdx );
				if( searchCacheIdx != indexByCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCacheIdx = searchCacheIdx->second;
					if( mapCacheIdx != NULL ) {
						auto removalProbe = mapCacheIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapCacheIdx->end() ) {
							mapCacheIdx->erase( removalProbe );
							if( mapCacheIdx->empty() ) {
								delete mapCacheIdx;
								mapCacheIdx = NULL;
								indexByCacheIdx->erase( searchCacheIdx );
							}
						}
					}
				}
			}

			if( indexBySeqIdx != NULL ) {
				cfcore::CFGenKbGelCallBySeqIdxKey keySeqIdx;
				if( obj->isOptionalSeqInstTenantIdNull() ) {
					keySeqIdx.setOptionalSeqInstTenantIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstTenantIdValue( obj->getOptionalSeqInstTenantIdValue() );
				}
				if( obj->isOptionalSeqInstGelCacheIdNull() ) {
					keySeqIdx.setOptionalSeqInstGelCacheIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstGelCacheIdValue( obj->getOptionalSeqInstGelCacheIdValue() );
				}
				if( obj->isOptionalSeqInstIdNull() ) {
					keySeqIdx.setOptionalSeqInstIdNull();
				}
				else {
					keySeqIdx.setOptionalSeqInstIdValue( obj->getOptionalSeqInstIdValue() );
				}
				auto searchSeqIdx = indexBySeqIdx->find( keySeqIdx );
				if( searchSeqIdx != indexBySeqIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapSeqIdx = searchSeqIdx->second;
					if( mapSeqIdx != NULL ) {
						auto removalProbe = mapSeqIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSeqIdx->end() ) {
							mapSeqIdx->erase( removalProbe );
							if( mapSeqIdx->empty() ) {
								delete mapSeqIdx;
								mapSeqIdx = NULL;
								indexBySeqIdx->erase( searchSeqIdx );
							}
						}
					}
				}
			}

			if( indexByCallInstIdx != NULL ) {
				cfcore::CFGenKbGelCallByCallInstIdxKey keyCallInstIdx;
				if( obj->isOptionalCallInstTenantIdNull() ) {
					keyCallInstIdx.setOptionalCallInstTenantIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstTenantIdValue( obj->getOptionalCallInstTenantIdValue() );
				}
				if( obj->isOptionalCallInstGelCacheIdNull() ) {
					keyCallInstIdx.setOptionalCallInstGelCacheIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstGelCacheIdValue( obj->getOptionalCallInstGelCacheIdValue() );
				}
				if( obj->isOptionalCallInstIdNull() ) {
					keyCallInstIdx.setOptionalCallInstIdNull();
				}
				else {
					keyCallInstIdx.setOptionalCallInstIdValue( obj->getOptionalCallInstIdValue() );
				}
				auto searchCallInstIdx = indexByCallInstIdx->find( keyCallInstIdx );
				if( searchCallInstIdx != indexByCallInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapCallInstIdx = searchCallInstIdx->second;
					if( mapCallInstIdx != NULL ) {
						auto removalProbe = mapCallInstIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapCallInstIdx->end() ) {
							mapCallInstIdx->erase( removalProbe );
							if( mapCallInstIdx->empty() ) {
								delete mapCallInstIdx;
								mapCallInstIdx = NULL;
								indexByCallInstIdx->erase( searchCallInstIdx );
							}
						}
					}
				}
			}

			if( indexByPrevInstIdx != NULL ) {
				cfcore::CFGenKbGelCallByPrevInstIdxKey keyPrevInstIdx;
				if( obj->isOptionalPrevInstTenantIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstTenantIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstTenantIdValue( obj->getOptionalPrevInstTenantIdValue() );
				}
				if( obj->isOptionalPrevInstGelCacheIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelCacheIdValue( obj->getOptionalPrevInstGelCacheIdValue() );
				}
				if( obj->isOptionalPrevInstGelInstIdNull() ) {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdNull();
				}
				else {
					keyPrevInstIdx.setOptionalPrevInstGelInstIdValue( obj->getOptionalPrevInstGelInstIdValue() );
				}
				auto searchPrevInstIdx = indexByPrevInstIdx->find( keyPrevInstIdx );
				if( searchPrevInstIdx != indexByPrevInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapPrevInstIdx = searchPrevInstIdx->second;
					if( mapPrevInstIdx != NULL ) {
						auto removalProbe = mapPrevInstIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPrevInstIdx->end() ) {
							mapPrevInstIdx->erase( removalProbe );
							if( mapPrevInstIdx->empty() ) {
								delete mapPrevInstIdx;
								mapPrevInstIdx = NULL;
								indexByPrevInstIdx->erase( searchPrevInstIdx );
							}
						}
					}
				}
			}

			if( indexByNextInstIdx != NULL ) {
				cfcore::CFGenKbGelCallByNextInstIdxKey keyNextInstIdx;
				if( obj->isOptionalNextInstTenantIdNull() ) {
					keyNextInstIdx.setOptionalNextInstTenantIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstTenantIdValue( obj->getOptionalNextInstTenantIdValue() );
				}
				if( obj->isOptionalNextInstGelCacheIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelCacheIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelCacheIdValue( obj->getOptionalNextInstGelCacheIdValue() );
				}
				if( obj->isOptionalNextInstGelInstIdNull() ) {
					keyNextInstIdx.setOptionalNextInstGelInstIdNull();
				}
				else {
					keyNextInstIdx.setOptionalNextInstGelInstIdValue( obj->getOptionalNextInstGelInstIdValue() );
				}
				auto searchNextInstIdx = indexByNextInstIdx->find( keyNextInstIdx );
				if( searchNextInstIdx != indexByNextInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelCallObj*>* mapNextInstIdx = searchNextInstIdx->second;
					if( mapNextInstIdx != NULL ) {
						auto removalProbe = mapNextInstIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapNextInstIdx->end() ) {
							mapNextInstIdx->erase( removalProbe );
							if( mapNextInstIdx->empty() ) {
								delete mapNextInstIdx;
								mapNextInstIdx = NULL;
								indexByNextInstIdx->erase( searchNextInstIdx );
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
