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

	const std::string CFGenKbGelSequenceTableObj::CLASS_NAME( "CFGenKbGelSequenceTableObj" );
	const std::string CFGenKbGelSequenceTableObj::TABLE_NAME( "GelSequence" );
	const std::string CFGenKbGelSequenceTableObj::TABLE_DBNAME( "gelsequence" );

	CFGenKbGelSequenceTableObj::CFGenKbGelSequenceTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
		allGelSequence = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByFirstInstIdx = new std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByLastInstIdx = new std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
	}

	CFGenKbGelSequenceTableObj::CFGenKbGelSequenceTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
		allGelSequence = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByFirstInstIdx = new std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
		indexByLastInstIdx = new std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
	}

	CFGenKbGelSequenceTableObj::~CFGenKbGelSequenceTableObj() {
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelSequenceTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelSequenceTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelSequenceTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelSequenceTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelSequenceTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelSequenceTableObj::minimizeMemory() {
		if( allGelSequence != NULL ) {
			allGelSequence->clear();
			delete allGelSequence;
			allGelSequence = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* curByTenantIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* curByGelCacheIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* curByChainIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator iterByFirstInstIdx = indexByFirstInstIdx->begin();
			std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator endByFirstInstIdx = indexByFirstInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* curByFirstInstIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator iterByLastInstIdx = indexByLastInstIdx->begin();
			std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* >::iterator endByLastInstIdx = indexByLastInstIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* curByLastInstIdx = NULL;
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
		if( members != NULL ) {
			members->clear();
		}
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::newInstance() {
		cfcore::ICFGenKbGelSequenceObj* inst = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( new CFGenKbGelSequenceObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelSequenceEditObj* CFGenKbGelSequenceTableObj::newEditInstance( cfcore::ICFGenKbGelSequenceObj* orig ) {
		cfcore::ICFGenKbGelSequenceEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelSequenceEditObj*>( new CFGenKbGelSequenceEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::realizeGelSequence( cfcore::ICFGenKbGelSequenceObj* Obj ) {
		static const std::string S_ProcName( "realizeGelSequence" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelSequenceObj* obj = Obj;
		cfcore::ICFGenKbGelSequenceObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelSequenceObj* keepObj = NULL;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapChainIdx = searchChainIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapFirstInstIdx = searchFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						auto removalProbe = mapFirstInstIdx->find( *(keepObj->getPKey()) );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapLastInstIdx = searchLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						auto removalProbe = mapLastInstIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapLastInstIdx->end() ) {
							mapLastInstIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( Obj ) );
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
				cfcore::ICFGenKbGelSequenceObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByFirstInstIdx != NULL ) {
				static const std::string S_AFirstInstIdxObj( "aFirstInstIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aFirstInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapFirstInstIdx = searchIndexByFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						mapFirstInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aFirstInstIdxObj ) );
					}
				}
			}

			if( indexByLastInstIdx != NULL ) {
				static const std::string S_ALastInstIdxObj( "aLastInstIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aLastInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapLastInstIdx = searchIndexByLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						mapLastInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aLastInstIdxObj ) );
					}
				}
			}

			if( allGelSequence != NULL ) {
				allGelSequence->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( indexByFirstInstIdx != NULL ) {
				static const std::string S_AFirstInstIdxObj( "aFirstInstIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aFirstInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapFirstInstIdx = searchIndexByFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						mapFirstInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aFirstInstIdxObj ) );
					}
				}
			}

			if( indexByLastInstIdx != NULL ) {
				static const std::string S_ALastInstIdxObj( "aLastInstIdxObj" );
				cfcore::ICFGenKbGelSequenceObj* aLastInstIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapLastInstIdx = searchIndexByLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						mapLastInstIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), aLastInstIdxObj ) );
					}
				}
			}

			if( allGelSequence != NULL ) {
				allGelSequence->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGelSequenceTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> list;
		cfcore::ICFGenKbGelSequenceObj* existingObj = readCachedGelSequenceByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelSequenceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSequenceTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> list;
		std::vector<cfcore::ICFGenKbGelSequenceObj*> matchesFound = readCachedGelSequenceByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSequenceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSequenceTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> list;
		std::vector<cfcore::ICFGenKbGelSequenceObj*> matchesFound = readCachedGelSequenceByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSequenceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSequenceTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> list;
		std::vector<cfcore::ICFGenKbGelSequenceObj*> matchesFound = readCachedGelSequenceByChainIdx( ChainInstTenantId,
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
		cfcore::ICFGenKbGelSequenceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSequenceTableObj::reallyDeepDisposeGelSequence( cfcore::ICFGenKbGelSequenceObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelSequence" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelSequenceObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->deepDisposeBySeqIdx( obj->getRequiredTenantIdReference(),
			obj->getRequiredGelCacheIdReference(),
			obj->getRequiredGelInstIdReference() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDetachFromIndexesGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDetachFromIndexesGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj ) );
	}

	void CFGenKbGelSequenceTableObj::deepDisposeByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId ) {
		static const std::string S_ProcName( "deepDisposeByFirstInstIdx" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> list;
		std::vector<cfcore::ICFGenKbGelSequenceObj*> matchesFound = readCachedGelSequenceByFirstInstIdx( FirstInstTenantId,
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
		cfcore::ICFGenKbGelSequenceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSequenceTableObj::deepDisposeByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId ) {
		static const std::string S_ProcName( "deepDisposeByLastInstIdx" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> list;
		std::vector<cfcore::ICFGenKbGelSequenceObj*> matchesFound = readCachedGelSequenceByLastInstIdx( LastInstTenantId,
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
		cfcore::ICFGenKbGelSequenceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::createGelSequence( cfcore::ICFGenKbGelSequenceEditObj* Obj ) {
		static const std::string S_ProcName( "createGelSequence" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSequenceObj* obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelSequenceBuff* buff = dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->createGelSequence(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::readGelSequence( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelSequence" );
		cfcore::ICFGenKbGelSequenceObj* obj = NULL;
		cfcore::ICFGenKbGelSequenceObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelSequenceBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::lockGelSequence( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelSequence" );
		cfcore::ICFGenKbGelSequenceObj* locked = NULL;
		cfcore::CFGenKbGelSequenceBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readAllGelSequence( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelSequence" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSequenceObj* realized = NULL;
		if( forceRead || ( allGelSequence == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelSequenceObj*>();
			allGelSequence = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelSequenceBuff* buff = NULL;
			cfcore::ICFGenKbGelSequenceObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelSequence->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelSequence->size();
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		auto valIter = allGelSequence->begin();
		size_t idx = 0;
		while( valIter != allGelSequence->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::readGelSequenceByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelSequenceByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelSequenceObj* obj = readGelSequence( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readGelSequenceByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSequenceByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSequenceObj* realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readGelSequenceByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSequenceByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSequenceObj* realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readGelSequenceByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSequenceByChainIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSequenceObj* realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readGelSequenceByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSequenceByFirstInstIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* oldDict;
		if( indexByFirstInstIdx == NULL ) {
			indexByFirstInstIdx = new std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
			cfcore::ICFGenKbGelSequenceObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readDerivedByFirstInstIdx( schema->getAuthorization(),
				FirstInstTenantId,
				FirstInstGelCacheId,
				FirstInstId );
			cfcore::CFGenKbGelSequenceBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSequenceObj* realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFirstInstIdx->erase( searchIndexByFirstInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFirstInstIdx->insert( std::map< cfcore::CFGenKbGelSequenceByFirstInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readGelSequenceByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSequenceByLastInstIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* oldDict;
		if( indexByLastInstIdx == NULL ) {
			indexByLastInstIdx = new std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>();
			cfcore::ICFGenKbGelSequenceObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSequenceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readDerivedByLastInstIdx( schema->getAuthorization(),
				LastInstTenantId,
				LastInstGelCacheId,
				LastInstId );
			cfcore::CFGenKbGelSequenceBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSequenceObj* realized = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByLastInstIdx->erase( searchIndexByLastInstIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByLastInstIdx->insert( std::map< cfcore::CFGenKbGelSequenceByLastInstIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::readCachedGelSequence( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelSequence" );
		cfcore::ICFGenKbGelSequenceObj* obj = NULL;
		cfcore::ICFGenKbGelSequenceObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::readCachedGelSequenceByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelSequenceByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelSequenceObj* obj = readCachedGelSequence( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readCachedGelSequenceByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelSequenceByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSequenceObj* obj;
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

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readCachedGelSequenceByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelSequenceByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSequenceObj* obj;
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

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readCachedGelSequenceByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelSequenceByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSequenceObj* obj;
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

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readCachedGelSequenceByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		static const std::string S_ProcName( "readCachedGelSequenceByFirstInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		if( indexByFirstInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFirstInstIdx = indexByFirstInstIdx->find( key );
		if( searchIndexByFirstInstIdx != indexByFirstInstIdx->end() ) {
			dict = searchIndexByFirstInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSequenceObj* obj;
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

	std::vector<cfcore::ICFGenKbGelSequenceObj*> CFGenKbGelSequenceTableObj::readCachedGelSequenceByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		static const std::string S_ProcName( "readCachedGelSequenceByLastInstIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* dict;
		if( indexByLastInstIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByLastInstIdx = indexByLastInstIdx->find( key );
		if( searchIndexByLastInstIdx != indexByLastInstIdx->end() ) {
			dict = searchIndexByLastInstIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSequenceObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSequenceObj* obj;
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

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceTableObj::updateGelSequence( cfcore::ICFGenKbGelSequenceEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelSequence" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSequenceObj* obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelSequenceBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->updateGelSequence( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelSequenceBuff*>( Obj->getGelSequenceBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj->realize() );
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

	void CFGenKbGelSequenceTableObj::deleteGelSequence( cfcore::ICFGenKbGelSequenceEditObj* Obj ) {
		cfcore::ICFGenKbGelSequenceObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->deleteGelSequence( schema->getAuthorization(),
			obj->getGelSequenceBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelSequenceTableObj::deleteGelSequenceByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelSequenceObj* obj = readGelSequence( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelSequenceEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelSequenceEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelSequenceEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelSequenceTableObj::deleteGelSequenceByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->deleteGelSequenceByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelSequenceTableObj::deleteGelSequenceByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->deleteGelSequenceByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelSequenceTableObj::deleteGelSequenceByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->deleteGelSequenceByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelSequenceTableObj::deleteGelSequenceByFirstInstIdx( const int64_t* FirstInstTenantId,
			const int64_t* FirstInstGelCacheId,
			const int64_t* FirstInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->deleteGelSequenceByFirstInstIdx( schema->getAuthorization(),
				FirstInstTenantId,
				FirstInstGelCacheId,
				FirstInstId );
		deepDisposeByFirstInstIdx( FirstInstTenantId,
			FirstInstGelCacheId,
			FirstInstId );
	}

	void CFGenKbGelSequenceTableObj::deleteGelSequenceByLastInstIdx( const int64_t* LastInstTenantId,
			const int64_t* LastInstGelCacheId,
			const int64_t* LastInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->deleteGelSequenceByLastInstIdx( schema->getAuthorization(),
				LastInstTenantId,
				LastInstGelCacheId,
				LastInstId );
		deepDisposeByLastInstIdx( LastInstTenantId,
			LastInstGelCacheId,
			LastInstId );
	}

	void CFGenKbGelSequenceTableObj::reallyDetachFromIndexesGelSequence( cfcore::ICFGenKbGelSequenceObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelSequence" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelSequenceObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelSequenceObj* existingObj = searchMembers->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapTenantIdx = searchTenantIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapChainIdx = searchChainIdx->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapFirstInstIdx = searchFirstInstIdx->second;
					if( mapFirstInstIdx != NULL ) {
						auto removalProbe = mapFirstInstIdx->find( *(obj->getPKey()) );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelSequenceObj*>* mapLastInstIdx = searchLastInstIdx->second;
					if( mapLastInstIdx != NULL ) {
						auto removalProbe = mapLastInstIdx->find( *(obj->getPKey()) );
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

			members->erase( searchMembers );
		}
			dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDetachFromIndexesGelInstruction( Obj );
	}


}
