// Description: C++18 Table Object implementation for CFGenKb.

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

	const std::string CFGenKbGelExecutableTableObj::CLASS_NAME( "CFGenKbGelExecutableTableObj" );
	const std::string CFGenKbGelExecutableTableObj::TABLE_NAME( "GelExecutable" );
	const std::string CFGenKbGelExecutableTableObj::TABLE_DBNAME( "gelexec" );

	CFGenKbGelExecutableTableObj::CFGenKbGelExecutableTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
		allGelExecutable = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByFirstInstIdx = new std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByLastInstIdx = new std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByGenItemIdx = new std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
	}

	CFGenKbGelExecutableTableObj::CFGenKbGelExecutableTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
		allGelExecutable = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByFirstInstIdx = new std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByLastInstIdx = new std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		indexByGenItemIdx = new std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
	}

	CFGenKbGelExecutableTableObj::~CFGenKbGelExecutableTableObj() {
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
		if( indexByFirstInstIdx != NULL ) {
			delete indexByFirstInstIdx;
			indexByFirstInstIdx = NULL;
		}
		if( indexByLastInstIdx != NULL ) {
			delete indexByLastInstIdx;
			indexByLastInstIdx = NULL;
		}
		if( indexByGenItemIdx != NULL ) {
			delete indexByGenItemIdx;
			indexByGenItemIdx = NULL;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelExecutableTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelExecutableTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelExecutableTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelExecutableTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelExecutableTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelExecutableTableObj::minimizeMemory() {
		if( allGelExecutable != NULL ) {
			allGelExecutable->clear();
			delete allGelExecutable;
			allGelExecutable = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* curByTenantIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* curByGelCacheIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* curByChainIdx = NULL;
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
		if( indexByFirstInstIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator iterByFirstInstIdx = indexByFirstInstIdx->begin();
			std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator endByFirstInstIdx = indexByFirstInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* curByFirstInstIdx = NULL;
			while( iterByFirstInstIdx != endByFirstInstIdx ) {
				curByFirstInstIdx = iterByFirstInstIdx->second;
				if( curByFirstInstIdx != NULL ) {
					curByFirstInstIdx->clear();
					delete curByFirstInstIdx;
					curByFirstInstIdx = NULL;
					iterByFirstInstIdx->second = NULL;
				}
				iterByFirstInstIdx ++;
			}
			indexByFirstInstIdx->clear();
		}
		if( indexByLastInstIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator iterByLastInstIdx = indexByLastInstIdx->begin();
			std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator endByLastInstIdx = indexByLastInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* curByLastInstIdx = NULL;
			while( iterByLastInstIdx != endByLastInstIdx ) {
				curByLastInstIdx = iterByLastInstIdx->second;
				if( curByLastInstIdx != NULL ) {
					curByLastInstIdx->clear();
					delete curByLastInstIdx;
					curByLastInstIdx = NULL;
					iterByLastInstIdx->second = NULL;
				}
				iterByLastInstIdx ++;
			}
			indexByLastInstIdx->clear();
		}
		if( indexByGenItemIdx != NULL ) {
			std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator iterByGenItemIdx = indexByGenItemIdx->begin();
			std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* >::iterator endByGenItemIdx = indexByGenItemIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* curByGenItemIdx = NULL;
			while( iterByGenItemIdx != endByGenItemIdx ) {
				curByGenItemIdx = iterByGenItemIdx->second;
				if( curByGenItemIdx != NULL ) {
					curByGenItemIdx->clear();
					delete curByGenItemIdx;
					curByGenItemIdx = NULL;
					iterByGenItemIdx->second = NULL;
				}
				iterByGenItemIdx ++;
			}
			indexByGenItemIdx->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::newInstance() {
		cfcore::ICFGenKbGelExecutableObj* inst = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( new CFGenKbGelExecutableObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelExecutableEditObj* CFGenKbGelExecutableTableObj::newEditInstance( cfcore::ICFGenKbGelExecutableObj* orig ) {
		cfcore::ICFGenKbGelExecutableEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelExecutableEditObj*>( new CFGenKbGelExecutableEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::realizeGelExecutable( cfcore::ICFGenKbGelExecutableObj* Obj ) {
		static const std::string S_ProcName( "realizeGelExecutable" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelExecutableObj* obj = Obj;
		cfcore::ICFGenKbGelExecutableObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelExecutableObj* keepObj = NULL;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByFirstInstIdx != NULL ) {
				cfcore::CFGenKbGelSequenceByFirstInstIdxKey keyFirstInstIdx;
				if( keepObj->isOptionalFirstInstTenantIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstTenantIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstTenantIdValue( keepObj->getOptionalFirstInstTenantIdValue() );
				}
				if( keepObj->isOptionalFirstInstGelCacheIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( keepObj->getOptionalFirstInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalFirstInstIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstIdValue( keepObj->getOptionalFirstInstIdValue() );
				}
				auto searchFirstInstIdx = indexByFirstInstIdx->find( keyFirstInstIdx );
				if( searchFirstInstIdx != indexByFirstInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapFirstInstIdx = searchFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						auto removalProbe = mapFirstInstIdx->find( *pkey );
						if( removalProbe != mapFirstInstIdx->end() ) {
							mapFirstInstIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByLastInstIdx != NULL ) {
				cfcore::CFGenKbGelSequenceByLastInstIdxKey keyLastInstIdx;
				if( keepObj->isOptionalLastInstTenantIdNull() ) {
					keyLastInstIdx.setOptionalLastInstTenantIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstTenantIdValue( keepObj->getOptionalLastInstTenantIdValue() );
				}
				if( keepObj->isOptionalLastInstGelCacheIdNull() ) {
					keyLastInstIdx.setOptionalLastInstGelCacheIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstGelCacheIdValue( keepObj->getOptionalLastInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalLastInstIdNull() ) {
					keyLastInstIdx.setOptionalLastInstIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstIdValue( keepObj->getOptionalLastInstIdValue() );
				}
				auto searchLastInstIdx = indexByLastInstIdx->find( keyLastInstIdx );
				if( searchLastInstIdx != indexByLastInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapLastInstIdx = searchLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						auto removalProbe = mapLastInstIdx->find( *pkey );
						if( removalProbe != mapLastInstIdx->end() ) {
							mapLastInstIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGenItemIdx != NULL ) {
				cfcore::CFGenKbGelExecutableByGenItemIdxKey keyGenItemIdx;
				keyGenItemIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGenItemIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchGenItemIdx = indexByGenItemIdx->find( keyGenItemIdx );
				if( searchGenItemIdx != indexByGenItemIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGenItemIdx = searchGenItemIdx->second;
					if( mapGenItemIdx != NULL ) {
						auto removalProbe = mapGenItemIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapGenItemIdx->end() ) {
							mapGenItemIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->realizeGelSequence( Obj ) );
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
				cfcore::ICFGenKbGelExecutableObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByFirstInstIdx != NULL ) {
				static const std::string S_AFirstInstIdxObj( "aFirstInstIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aFirstInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
				if( aFirstInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFirstInstIdxObj );
				}
				cfcore::CFGenKbGelSequenceByFirstInstIdxKey keyFirstInstIdx;
				if( keepObj->isOptionalFirstInstTenantIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstTenantIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstTenantIdValue( keepObj->getOptionalFirstInstTenantIdValue() );
				}
				if( keepObj->isOptionalFirstInstGelCacheIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( keepObj->getOptionalFirstInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalFirstInstIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstIdValue( keepObj->getOptionalFirstInstIdValue() );
				}
				auto searchIndexByFirstInstIdx = indexByFirstInstIdx->find( keyFirstInstIdx );
				if( searchIndexByFirstInstIdx != indexByFirstInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapFirstInstIdx = searchIndexByFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						mapFirstInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aFirstInstIdxObj ) );
					}
				}
			}

			if( indexByLastInstIdx != NULL ) {
				static const std::string S_ALastInstIdxObj( "aLastInstIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aLastInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
				if( aLastInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALastInstIdxObj );
				}
				cfcore::CFGenKbGelSequenceByLastInstIdxKey keyLastInstIdx;
				if( keepObj->isOptionalLastInstTenantIdNull() ) {
					keyLastInstIdx.setOptionalLastInstTenantIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstTenantIdValue( keepObj->getOptionalLastInstTenantIdValue() );
				}
				if( keepObj->isOptionalLastInstGelCacheIdNull() ) {
					keyLastInstIdx.setOptionalLastInstGelCacheIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstGelCacheIdValue( keepObj->getOptionalLastInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalLastInstIdNull() ) {
					keyLastInstIdx.setOptionalLastInstIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstIdValue( keepObj->getOptionalLastInstIdValue() );
				}
				auto searchIndexByLastInstIdx = indexByLastInstIdx->find( keyLastInstIdx );
				if( searchIndexByLastInstIdx != indexByLastInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapLastInstIdx = searchIndexByLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						mapLastInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aLastInstIdxObj ) );
					}
				}
			}

			if( indexByGenItemIdx != NULL ) {
				static const std::string S_AGenItemIdxObj( "aGenItemIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aGenItemIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
				if( aGenItemIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGenItemIdxObj );
				}
				cfcore::CFGenKbGelExecutableByGenItemIdxKey keyGenItemIdx;
				keyGenItemIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGenItemIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByGenItemIdx = indexByGenItemIdx->find( keyGenItemIdx );
				if( searchIndexByGenItemIdx != indexByGenItemIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGenItemIdx = searchIndexByGenItemIdx->second;
					if( mapGenItemIdx != NULL ) {
						mapGenItemIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aGenItemIdxObj ) );
					}
				}
			}

			if( allGelExecutable != NULL ) {
				allGelExecutable->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->realizeGelSequence( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByFirstInstIdx != NULL ) {
				static const std::string S_AFirstInstIdxObj( "aFirstInstIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aFirstInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
				if( aFirstInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFirstInstIdxObj );
				}
				cfcore::CFGenKbGelSequenceByFirstInstIdxKey keyFirstInstIdx;
				if( keepObj->isOptionalFirstInstTenantIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstTenantIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstTenantIdValue( keepObj->getOptionalFirstInstTenantIdValue() );
				}
				if( keepObj->isOptionalFirstInstGelCacheIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( keepObj->getOptionalFirstInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalFirstInstIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstIdValue( keepObj->getOptionalFirstInstIdValue() );
				}
				auto searchIndexByFirstInstIdx = indexByFirstInstIdx->find( keyFirstInstIdx );
				if( searchIndexByFirstInstIdx != indexByFirstInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapFirstInstIdx = searchIndexByFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						mapFirstInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aFirstInstIdxObj ) );
					}
				}
			}

			if( indexByLastInstIdx != NULL ) {
				static const std::string S_ALastInstIdxObj( "aLastInstIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aLastInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
				if( aLastInstIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ALastInstIdxObj );
				}
				cfcore::CFGenKbGelSequenceByLastInstIdxKey keyLastInstIdx;
				if( keepObj->isOptionalLastInstTenantIdNull() ) {
					keyLastInstIdx.setOptionalLastInstTenantIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstTenantIdValue( keepObj->getOptionalLastInstTenantIdValue() );
				}
				if( keepObj->isOptionalLastInstGelCacheIdNull() ) {
					keyLastInstIdx.setOptionalLastInstGelCacheIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstGelCacheIdValue( keepObj->getOptionalLastInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalLastInstIdNull() ) {
					keyLastInstIdx.setOptionalLastInstIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstIdValue( keepObj->getOptionalLastInstIdValue() );
				}
				auto searchIndexByLastInstIdx = indexByLastInstIdx->find( keyLastInstIdx );
				if( searchIndexByLastInstIdx != indexByLastInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapLastInstIdx = searchIndexByLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						mapLastInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aLastInstIdxObj ) );
					}
				}
			}

			if( indexByGenItemIdx != NULL ) {
				static const std::string S_AGenItemIdxObj( "aGenItemIdxObj" );
				cfcore::ICFGenKbGelExecutableObj* aGenItemIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( keepObj );
				if( aGenItemIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGenItemIdxObj );
				}
				cfcore::CFGenKbGelExecutableByGenItemIdxKey keyGenItemIdx;
				keyGenItemIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGenItemIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByGenItemIdx = indexByGenItemIdx->find( keyGenItemIdx );
				if( searchIndexByGenItemIdx != indexByGenItemIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGenItemIdx = searchIndexByGenItemIdx->second;
					if( mapGenItemIdx != NULL ) {
						mapGenItemIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), aGenItemIdxObj ) );
					}
				}
			}

			if( allGelExecutable != NULL ) {
				allGelExecutable->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		cfcore::ICFGenKbGelExecutableObj* existingObj = readCachedGelExecutableByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		std::vector<cfcore::ICFGenKbGelExecutableObj*> matchesFound = readCachedGelExecutableByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		std::vector<cfcore::ICFGenKbGelExecutableObj*> matchesFound = readCachedGelExecutableByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		std::vector<cfcore::ICFGenKbGelExecutableObj*> matchesFound = readCachedGelExecutableByChainIdx( ChainInstTenantId,
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
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelExecutableTableObj::reallyDeepDisposeGelExecutable( cfcore::ICFGenKbGelExecutableObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelExecutable" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelExecutableObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->deepDisposeBySeqIdx( obj->getRequiredTenantIdReference(),
			obj->getRequiredGelCacheIdReference(),
			obj->getRequiredGelInstIdReference() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDetachFromIndexesGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj ) );
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) {
		static const std::string S_ProcName( "deepDisposeByFirstInstIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		std::vector<cfcore::ICFGenKbGelExecutableObj*> matchesFound = readCachedGelExecutableByFirstInstIdx( FirstInstTenantId,
				FirstInstGelCacheId,
				FirstInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) {
		static const std::string S_ProcName( "deepDisposeByLastInstIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		std::vector<cfcore::ICFGenKbGelExecutableObj*> matchesFound = readCachedGelExecutableByLastInstIdx( LastInstTenantId,
				LastInstGelCacheId,
				LastInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelExecutableTableObj::deepDisposeByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGenItemIdx" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> list;
		std::vector<cfcore::ICFGenKbGelExecutableObj*> matchesFound = readCachedGelExecutableByGenItemIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelExecutableObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::createGelExecutable( cfcore::ICFGenKbGelExecutableEditObj* Obj ) {
		static const std::string S_ProcName( "createGelExecutable" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelExecutableObj* obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelExecutableBuff* buff = dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->createGelExecutable(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::readGelExecutable( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelExecutable" );
		cfcore::ICFGenKbGelExecutableObj* obj = NULL;
		cfcore::ICFGenKbGelExecutableObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelExecutableBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::lockGelExecutable( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelExecutable" );
		cfcore::ICFGenKbGelExecutableObj* locked = NULL;
		cfcore::CFGenKbGelExecutableBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readAllGelExecutable( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelExecutable" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelExecutableObj* realized = NULL;
		if( forceRead || ( allGelExecutable == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelExecutableObj*>();
			allGelExecutable = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelExecutableBuff* buff = NULL;
			cfcore::ICFGenKbGelExecutableObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelExecutable->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelExecutable->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		auto valIter = allGelExecutable->begin();
		size_t idx = 0;
		while( valIter != allGelExecutable->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::readGelExecutableByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelExecutableObj* obj = readGelExecutable( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readGelExecutableByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelExecutableObj* realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readGelExecutableByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelExecutableObj* realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readGelExecutableByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByChainIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelExecutableObj* realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readGelExecutableByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByFirstInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey key;
		if( FirstInstTenantId == NULL ) {
			key.setOptionalFirstInstTenantIdNull();
		}
		else {
			key.setOptionalFirstInstTenantIdValue( *FirstInstTenantId );
		}
		if( FirstInstGelCacheId == NULL ) {
			key.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			key.setOptionalFirstInstGelCacheIdValue( *FirstInstGelCacheId );
		}
		if( FirstInstId == NULL ) {
			key.setOptionalFirstInstIdNull();
		}
		else {
			key.setOptionalFirstInstIdValue( *FirstInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* oldDict;
		if( indexByFirstInstIdx == NULL ) {
			indexByFirstInstIdx = new std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		}
		auto searchIndexByFirstInstIdx = indexByFirstInstIdx->find( key );
		if( searchIndexByFirstInstIdx != indexByFirstInstIdx->end() ) {
			oldDict = searchIndexByFirstInstIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
			cfcore::ICFGenKbGelSequenceObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readDerivedByFirstInstIdx( schema->getAuthorization(),
				FirstInstTenantId,
				FirstInstGelCacheId,
				FirstInstId );
			cfcore::CFGenKbGelSequenceBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelExecutableObj* realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFirstInstIdx->erase( searchIndexByFirstInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFirstInstIdx->insert( std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readGelExecutableByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByLastInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSequenceByLastInstIdxKey key;
		if( LastInstTenantId == NULL ) {
			key.setOptionalLastInstTenantIdNull();
		}
		else {
			key.setOptionalLastInstTenantIdValue( *LastInstTenantId );
		}
		if( LastInstGelCacheId == NULL ) {
			key.setOptionalLastInstGelCacheIdNull();
		}
		else {
			key.setOptionalLastInstGelCacheIdValue( *LastInstGelCacheId );
		}
		if( LastInstId == NULL ) {
			key.setOptionalLastInstIdNull();
		}
		else {
			key.setOptionalLastInstIdValue( *LastInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* oldDict;
		if( indexByLastInstIdx == NULL ) {
			indexByLastInstIdx = new std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		}
		auto searchIndexByLastInstIdx = indexByLastInstIdx->find( key );
		if( searchIndexByLastInstIdx != indexByLastInstIdx->end() ) {
			oldDict = searchIndexByLastInstIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
			cfcore::ICFGenKbGelSequenceObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readDerivedByLastInstIdx( schema->getAuthorization(),
				LastInstTenantId,
				LastInstGelCacheId,
				LastInstId );
			cfcore::CFGenKbGelSequenceBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelExecutableObj* realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLastInstIdx->erase( searchIndexByLastInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLastInstIdx->insert( std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readGelExecutableByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelExecutableByGenItemIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelExecutableByGenItemIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* oldDict;
		if( indexByGenItemIdx == NULL ) {
			indexByGenItemIdx = new std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>*>();
		}
		auto searchIndexByGenItemIdx = indexByGenItemIdx->find( key );
		if( searchIndexByGenItemIdx != indexByGenItemIdx->end() ) {
			oldDict = searchIndexByGenItemIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>();
			cfcore::ICFGenKbGelExecutableObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelExecutableBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->readDerivedByGenItemIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelExecutableBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelExecutableObj* realized = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGenItemIdx->erase( searchIndexByGenItemIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGenItemIdx->insert( std::map< cfcore::CFGenKbGelExecutableByGenItemIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::readCachedGelExecutable( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelExecutable" );
		cfcore::ICFGenKbGelExecutableObj* obj = NULL;
		cfcore::ICFGenKbGelExecutableObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::readCachedGelExecutableByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelExecutableObj* obj = readCachedGelExecutable( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readCachedGelExecutableByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelExecutableObj* obj;
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

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readCachedGelExecutableByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelExecutableObj* obj;
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

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readCachedGelExecutableByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelExecutableObj* obj;
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

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readCachedGelExecutableByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByFirstInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		cfcore::CFGenKbGelSequenceByFirstInstIdxKey key;
		if( FirstInstTenantId == NULL ) {
			key.setOptionalFirstInstTenantIdNull();
		}
		else {
			key.setOptionalFirstInstTenantIdValue( *FirstInstTenantId );
		}
		if( FirstInstGelCacheId == NULL ) {
			key.setOptionalFirstInstGelCacheIdNull();
		}
		else {
			key.setOptionalFirstInstGelCacheIdValue( *FirstInstGelCacheId );
		}
		if( FirstInstId == NULL ) {
			key.setOptionalFirstInstIdNull();
		}
		else {
			key.setOptionalFirstInstIdValue( *FirstInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		if( indexByFirstInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFirstInstIdx = indexByFirstInstIdx->find( key );
		if( searchIndexByFirstInstIdx != indexByFirstInstIdx->end() ) {
			dict = searchIndexByFirstInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelExecutableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readCachedGelExecutableByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByLastInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		cfcore::CFGenKbGelSequenceByLastInstIdxKey key;
		if( LastInstTenantId == NULL ) {
			key.setOptionalLastInstTenantIdNull();
		}
		else {
			key.setOptionalLastInstTenantIdValue( *LastInstTenantId );
		}
		if( LastInstGelCacheId == NULL ) {
			key.setOptionalLastInstGelCacheIdNull();
		}
		else {
			key.setOptionalLastInstGelCacheIdValue( *LastInstGelCacheId );
		}
		if( LastInstId == NULL ) {
			key.setOptionalLastInstIdNull();
		}
		else {
			key.setOptionalLastInstIdValue( *LastInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		if( indexByLastInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLastInstIdx = indexByLastInstIdx->find( key );
		if( searchIndexByLastInstIdx != indexByLastInstIdx->end() ) {
			dict = searchIndexByLastInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelExecutableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelExecutableObj*> CFGenKbGelExecutableTableObj::readCachedGelExecutableByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelExecutableByGenItemIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
		cfcore::CFGenKbGelExecutableByGenItemIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* dict;
		if( indexByGenItemIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGenItemIdx = indexByGenItemIdx->find( key );
		if( searchIndexByGenItemIdx != indexByGenItemIdx->end() ) {
			dict = searchIndexByGenItemIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelExecutableObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelExecutableObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGelExecutableTableObj::updateGelExecutable( cfcore::ICFGenKbGelExecutableEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelExecutable" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelExecutableObj* obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelExecutableBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->updateGelExecutable( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelExecutableBuff*>( Obj->getGelExecutableBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj->realize() );
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

	void CFGenKbGelExecutableTableObj::deleteGelExecutable( cfcore::ICFGenKbGelExecutableEditObj* Obj ) {
		cfcore::ICFGenKbGelExecutableObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutable( schema->getAuthorization(),
			obj->getGelExecutableBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelExecutableObj* obj = readGelExecutable( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelExecutableEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelExecutableEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelExecutableEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutableByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutableByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutableByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutableByFirstInstIdx( schema->getAuthorization(),
				FirstInstTenantId,
				FirstInstGelCacheId,
				FirstInstId );
		deepDisposeByFirstInstIdx( FirstInstTenantId,
			FirstInstGelCacheId,
			FirstInstId );
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutableByLastInstIdx( schema->getAuthorization(),
				LastInstTenantId,
				LastInstGelCacheId,
				LastInstId );
		deepDisposeByLastInstIdx( LastInstTenantId,
			LastInstGelCacheId,
			LastInstId );
	}

	void CFGenKbGelExecutableTableObj::deleteGelExecutableByGenItemIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->deleteGelExecutableByGenItemIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGenItemIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelExecutableTableObj::reallyDetachFromIndexesGelExecutable( cfcore::ICFGenKbGelExecutableObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelExecutable" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelExecutableObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelExecutableObj* existingObj = searchMembers->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapChainIdx = searchChainIdx->second;
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

			if( indexByFirstInstIdx != NULL ) {
				cfcore::CFGenKbGelSequenceByFirstInstIdxKey keyFirstInstIdx;
				if( obj->isOptionalFirstInstTenantIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstTenantIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstTenantIdValue( obj->getOptionalFirstInstTenantIdValue() );
				}
				if( obj->isOptionalFirstInstGelCacheIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstGelCacheIdValue( obj->getOptionalFirstInstGelCacheIdValue() );
				}
				if( obj->isOptionalFirstInstIdNull() ) {
					keyFirstInstIdx.setOptionalFirstInstIdNull();
				}
				else {
					keyFirstInstIdx.setOptionalFirstInstIdValue( obj->getOptionalFirstInstIdValue() );
				}
				auto searchFirstInstIdx = indexByFirstInstIdx->find( keyFirstInstIdx );
				if( searchFirstInstIdx != indexByFirstInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapFirstInstIdx = searchFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						auto removalProbe = mapFirstInstIdx->find( *pkey );
						if( removalProbe != mapFirstInstIdx->end() ) {
							mapFirstInstIdx->erase( removalProbe );
							if( mapFirstInstIdx->empty() ) {
								delete mapFirstInstIdx;
								mapFirstInstIdx = NULL;
								indexByFirstInstIdx->erase( searchFirstInstIdx );
							}
						}
					}
				}
			}

			if( indexByLastInstIdx != NULL ) {
				cfcore::CFGenKbGelSequenceByLastInstIdxKey keyLastInstIdx;
				if( obj->isOptionalLastInstTenantIdNull() ) {
					keyLastInstIdx.setOptionalLastInstTenantIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstTenantIdValue( obj->getOptionalLastInstTenantIdValue() );
				}
				if( obj->isOptionalLastInstGelCacheIdNull() ) {
					keyLastInstIdx.setOptionalLastInstGelCacheIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstGelCacheIdValue( obj->getOptionalLastInstGelCacheIdValue() );
				}
				if( obj->isOptionalLastInstIdNull() ) {
					keyLastInstIdx.setOptionalLastInstIdNull();
				}
				else {
					keyLastInstIdx.setOptionalLastInstIdValue( obj->getOptionalLastInstIdValue() );
				}
				auto searchLastInstIdx = indexByLastInstIdx->find( keyLastInstIdx );
				if( searchLastInstIdx != indexByLastInstIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapLastInstIdx = searchLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						auto removalProbe = mapLastInstIdx->find( *pkey );
						if( removalProbe != mapLastInstIdx->end() ) {
							mapLastInstIdx->erase( removalProbe );
							if( mapLastInstIdx->empty() ) {
								delete mapLastInstIdx;
								mapLastInstIdx = NULL;
								indexByLastInstIdx->erase( searchLastInstIdx );
							}
						}
					}
				}
			}

			if( indexByGenItemIdx != NULL ) {
				cfcore::CFGenKbGelExecutableByGenItemIdxKey keyGenItemIdx;
				keyGenItemIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyGenItemIdx.setRequiredGelCacheId( obj->getRequiredGelCacheId() );
				auto searchGenItemIdx = indexByGenItemIdx->find( keyGenItemIdx );
				if( searchGenItemIdx != indexByGenItemIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelExecutableObj*>* mapGenItemIdx = searchGenItemIdx->second;
					if( mapGenItemIdx != NULL ) {
						auto removalProbe = mapGenItemIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapGenItemIdx->end() ) {
							mapGenItemIdx->erase( removalProbe );
							if( mapGenItemIdx->empty() ) {
								delete mapGenItemIdx;
								mapGenItemIdx = NULL;
								indexByGenItemIdx->erase( searchGenItemIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDetachFromIndexesGelSequence( Obj );
	}


}
