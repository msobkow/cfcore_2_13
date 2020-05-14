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

	const std::string CFGenKbSecGrpMembTableObj::CLASS_NAME( "CFGenKbSecGrpMembTableObj" );
	const std::string CFGenKbSecGrpMembTableObj::TABLE_NAME( "SecGrpMemb" );
	const std::string CFGenKbSecGrpMembTableObj::TABLE_DBNAME( "SecMemb" );

	CFGenKbSecGrpMembTableObj::CFGenKbSecGrpMembTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>();
		allSecGrpMemb = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGrpMembByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbSecGrpMembByGroupIdxKey,
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		indexByUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUserIdxKey,
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		indexByUUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey,
			cfcore::ICFGenKbSecGrpMembObj*>();
	}

	CFGenKbSecGrpMembTableObj::CFGenKbSecGrpMembTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>();
		allSecGrpMemb = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGrpMembByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbSecGrpMembByGroupIdxKey,
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		indexByUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUserIdxKey,
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		indexByUUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey,
			cfcore::ICFGenKbSecGrpMembObj*>();
	}

	CFGenKbSecGrpMembTableObj::~CFGenKbSecGrpMembTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByGroupIdx != NULL ) {
			delete indexByGroupIdx;
			indexByGroupIdx = NULL;
		}
		if( indexByUserIdx != NULL ) {
			delete indexByUserIdx;
			indexByUserIdx = NULL;
		}
		if( indexByUUserIdx != NULL ) {
			delete indexByUUserIdx;
			indexByUUserIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGrpMembObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGrpMembTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecGrpMembTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecGrpMembTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecGrpMembTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecGrpMembTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecGrpMembTableObj::minimizeMemory() {
		if( allSecGrpMemb != NULL ) {
			allSecGrpMemb->clear();
			delete allSecGrpMemb;
			allSecGrpMemb = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGrpMembByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbSecGrpMembByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* curByClusterIdx = NULL;
			while( iterByClusterIdx != endByClusterIdx ) {
				curByClusterIdx = iterByClusterIdx->second;
				if( curByClusterIdx != NULL ) {
					curByClusterIdx->clear();
					delete curByClusterIdx;
					curByClusterIdx = NULL;
					iterByClusterIdx->second = NULL;
				}
				iterByClusterIdx ++;
			}
			indexByClusterIdx->clear();
		}
		if( indexByGroupIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGrpMembByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* >::iterator iterByGroupIdx = indexByGroupIdx->begin();
			std::map< cfcore::CFGenKbSecGrpMembByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* >::iterator endByGroupIdx = indexByGroupIdx->end();
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* curByGroupIdx = NULL;
			while( iterByGroupIdx != endByGroupIdx ) {
				curByGroupIdx = iterByGroupIdx->second;
				if( curByGroupIdx != NULL ) {
					curByGroupIdx->clear();
					delete curByGroupIdx;
					curByGroupIdx = NULL;
					iterByGroupIdx->second = NULL;
				}
				iterByGroupIdx ++;
			}
			indexByGroupIdx->clear();
		}
		if( indexByUserIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGrpMembByUserIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* >::iterator iterByUserIdx = indexByUserIdx->begin();
			std::map< cfcore::CFGenKbSecGrpMembByUserIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* >::iterator endByUserIdx = indexByUserIdx->end();
			std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* curByUserIdx = NULL;
			while( iterByUserIdx != endByUserIdx ) {
				curByUserIdx = iterByUserIdx->second;
				if( curByUserIdx != NULL ) {
					curByUserIdx->clear();
					delete curByUserIdx;
					curByUserIdx = NULL;
					iterByUserIdx->second = NULL;
				}
				iterByUserIdx ++;
			}
			indexByUserIdx->clear();
		}
		if( indexByUUserIdx != NULL ) {
			indexByUUserIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGrpMembObj* cur = NULL;
			cfcore::ICFGenKbSecGrpMembEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::newInstance() {
		cfcore::ICFGenKbSecGrpMembObj* inst = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( new CFGenKbSecGrpMembObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecGrpMembEditObj* CFGenKbSecGrpMembTableObj::newEditInstance( cfcore::ICFGenKbSecGrpMembObj* orig ) {
		cfcore::ICFGenKbSecGrpMembEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecGrpMembEditObj*>( new CFGenKbSecGrpMembEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::realizeSecGrpMemb( cfcore::ICFGenKbSecGrpMembObj* Obj ) {
		static const std::string S_ProcName( "realizeSecGrpMemb" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGrpMembObj* obj = Obj;
		cfcore::ICFGenKbSecGrpMembObj* existingObj = NULL;
		cfcore::CFGenKbSecGrpMembPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecGrpMembObj* keepObj = NULL;
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
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapGroupIdx = searchGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						auto removalProbe = mapGroupIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapGroupIdx->end() ) {
							mapGroupIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUserIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapUserIdx = searchUserIdx->second;
					if( mapUserIdx != NULL ) {
						auto removalProbe = mapUserIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapUserIdx->end() ) {
							mapUserIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUUserIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByUUserIdxKey keyUUserIdx;
				keyUUserIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUUserIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto removalProbe = indexByUUserIdx->find( keyUUserIdx );
				if( removalProbe != indexByUUserIdx->end() ) {
					indexByUUserIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByUserIdx != NULL ) {
				static const std::string S_AUserIdxObj( "aUserIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUserIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchIndexByUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchIndexByUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapUserIdx = searchIndexByUserIdx->second;
					if( mapUserIdx != NULL ) {
						mapUserIdx->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), aUserIdxObj ) );
					}
				}
			}

			if( indexByUUserIdx != NULL ) {
				static const std::string S_AUUserIdxObj( "aUUserIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aUUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aUUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUUserIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByUUserIdxKey keyUUserIdx;
				keyUUserIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUUserIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				indexByUUserIdx->insert( std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( keyUUserIdx, aUUserIdxObj ) );
			}

			if( allSecGrpMemb != NULL ) {
				allSecGrpMemb->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByUserIdx != NULL ) {
				static const std::string S_AUserIdxObj( "aUserIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUserIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchIndexByUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchIndexByUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapUserIdx = searchIndexByUserIdx->second;
					if( mapUserIdx != NULL ) {
						mapUserIdx->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), aUserIdxObj ) );
					}
				}
			}

			if( indexByUUserIdx != NULL ) {
				static const std::string S_AUUserIdxObj( "aUUserIdxObj" );
				cfcore::ICFGenKbSecGrpMembObj* aUUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( keepObj );
				if( aUUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUUserIdxObj );
				}
				cfcore::CFGenKbSecGrpMembByUUserIdxKey keyUUserIdx;
				keyUUserIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUUserIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				indexByUUserIdx->insert( std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( keyUUserIdx, aUUserIdxObj ) );
			}

			if( allSecGrpMemb != NULL ) {
				allSecGrpMemb->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecGrpMembTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpMembId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> list;
		cfcore::ICFGenKbSecGrpMembObj* existingObj = readCachedSecGrpMembByIdIdx( ClusterId,
				SecGrpMembId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGrpMembObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->reallyDeepDisposeSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpMembTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> list;
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> matchesFound = readCachedSecGrpMembByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGrpMembObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->reallyDeepDisposeSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpMembTableObj::deepDisposeByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId ) {
		static const std::string S_ProcName( "deepDisposeByGroupIdx" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> list;
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> matchesFound = readCachedSecGrpMembByGroupIdx( ClusterId,
				SecGroupId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGrpMembObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->reallyDeepDisposeSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpMembTableObj::deepDisposeByUserIdx( const uuid_ptr_t SecUserId ) {
		static const std::string S_ProcName( "deepDisposeByUserIdx" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> list;
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> matchesFound = readCachedSecGrpMembByUserIdx( SecUserId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGrpMembObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->reallyDeepDisposeSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpMembTableObj::deepDisposeByUUserIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId ) {
		static const std::string S_ProcName( "deepDisposeByUUserIdx" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> list;
		cfcore::ICFGenKbSecGrpMembObj* existingObj = readCachedSecGrpMembByUUserIdx( ClusterId,
				SecGroupId,
				SecUserId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGrpMembObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->reallyDeepDisposeSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpMembTableObj::reallyDeepDisposeSecGrpMemb( cfcore::ICFGenKbSecGrpMembObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecGrpMemb" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecGrpMembObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->reallyDetachFromIndexesSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::createSecGrpMemb( cfcore::ICFGenKbSecGrpMembEditObj* Obj ) {
		static const std::string S_ProcName( "createSecGrpMemb" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGrpMembObj* obj = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGrpMembBuff* buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->createSecGrpMemb(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::readSecGrpMemb( cfcore::CFGenKbSecGrpMembPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGrpMemb" );
		cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
		cfcore::ICFGenKbSecGrpMembObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGrpMembBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecGrpMembId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::lockSecGrpMemb( cfcore::CFGenKbSecGrpMembPKey* pkey ) {
		static const std::string S_ProcName( "lockSecGrpMemb" );
		cfcore::ICFGenKbSecGrpMembObj* locked = NULL;
		cfcore::CFGenKbSecGrpMembBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readAllSecGrpMemb( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecGrpMemb" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGrpMembObj* realized = NULL;
		if( forceRead || ( allSecGrpMemb == NULL ) ) {
			std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* map = new std::map<cfcore::CFGenKbSecGrpMembPKey,cfcore::ICFGenKbSecGrpMembObj*>();
			allSecGrpMemb = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecGrpMembBuff* buff = NULL;
			cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecGrpMemb->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecGrpMemb->size();
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		auto valIter = allSecGrpMemb->begin();
		size_t idx = 0;
		while( valIter != allSecGrpMemb->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::pageAllSecGrpMemb(const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecGrpMemb" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* map = NULL;
		cfcore::CFGenKbSecGrpMembBuff* buff = NULL;
		cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
		cfcore::ICFGenKbSecGrpMembObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecGrpMembPKey,cfcore::ICFGenKbSecGrpMembObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorSecGrpMembId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
				arrayList.push_back( realized );
				realized = NULL;
			}
		}
		CFLIB_EXCEPTION_CATCH_FALLTHROUGH

		if( ( obj != NULL ) && obj->getIsNew() ) {
			delete obj;
			obj = NULL;
		}

		CFLIB_EXCEPTION_RETHROW_CFLIBEXCEPTION

		return( arrayList );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::readSecGrpMembByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpMembId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpMembByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGrpMembId( SecGrpMembId );
		cfcore::ICFGenKbSecGrpMembObj* obj = readSecGrpMemb( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readSecGrpMembByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpMembByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* dict;
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbSecGrpMembByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			oldDict = searchIndexByClusterIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>();
			cfcore::ICFGenKbSecGrpMembObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbSecGrpMembBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGrpMembObj* realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbSecGrpMembByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readSecGrpMembByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpMembByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* dict;
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* oldDict;
		if( indexByGroupIdx == NULL ) {
			indexByGroupIdx = new std::map< cfcore::CFGenKbSecGrpMembByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		}
		auto searchIndexByGroupIdx = indexByGroupIdx->find( key );
		if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
			oldDict = searchIndexByGroupIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>();
			cfcore::ICFGenKbSecGrpMembObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->readDerivedByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId );
			cfcore::CFGenKbSecGrpMembBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGrpMembObj* realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGroupIdx->erase( searchIndexByGroupIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGroupIdx->insert( std::map< cfcore::CFGenKbSecGrpMembByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readSecGrpMembByUserIdx( const uuid_ptr_t SecUserId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpMembByUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* dict;
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* oldDict;
		if( indexByUserIdx == NULL ) {
			indexByUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUserIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>*>();
		}
		auto searchIndexByUserIdx = indexByUserIdx->find( key );
		if( searchIndexByUserIdx != indexByUserIdx->end() ) {
			oldDict = searchIndexByUserIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>();
			cfcore::ICFGenKbSecGrpMembObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->readDerivedByUserIdx( schema->getAuthorization(),
				SecUserId );
			cfcore::CFGenKbSecGrpMembBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGrpMembObj* realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByUserIdx->erase( searchIndexByUserIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByUserIdx->insert( std::map< cfcore::CFGenKbSecGrpMembByUserIdxKey,
				std::map< cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::readSecGrpMembByUUserIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpMembByUUserIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUUserIdx == NULL ) {
			indexByUUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey,
				cfcore::ICFGenKbSecGrpMembObj*>();
		}
		cfcore::CFGenKbSecGrpMembByUUserIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
		cfcore::ICFGenKbSecGrpMembObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUUserIdx = indexByUUserIdx->find( key );
			if( searchIndexByUUserIdx != indexByUUserIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUUserIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGrpMembBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->readDerivedByUUserIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				SecUserId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUUserIdx->insert( std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey, cfcore::ICFGenKbSecGrpMembObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::readCachedSecGrpMemb( cfcore::CFGenKbSecGrpMembPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGrpMemb" );
		cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
		cfcore::ICFGenKbSecGrpMembObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::readCachedSecGrpMembByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpMembId )
	{
		static const std::string S_ProcName( "readCachedSecGrpMembByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGrpMembId( SecGrpMembId );
		cfcore::ICFGenKbSecGrpMembObj* obj = readCachedSecGrpMemb( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readCachedSecGrpMembByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecGrpMembByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		cfcore::CFGenKbSecGrpMembByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGrpMembObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readCachedSecGrpMembByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readCachedSecGrpMembByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		cfcore::CFGenKbSecGrpMembByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* dict;
		if( indexByGroupIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGroupIdx = indexByGroupIdx->find( key );
		if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
			dict = searchIndexByGroupIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGrpMembObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::readCachedSecGrpMembByUserIdx( const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readCachedSecGrpMembByUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
		cfcore::CFGenKbSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* dict;
		if( indexByUserIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByUserIdx = indexByUserIdx->find( key );
		if( searchIndexByUserIdx != indexByUserIdx->end() ) {
			dict = searchIndexByUserIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGrpMembObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGrpMembObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::readCachedSecGrpMembByUUserIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readCachedSecGrpMembByUUserIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUUserIdx == NULL ) {
			indexByUUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey,
				cfcore::ICFGenKbSecGrpMembObj*>();
		}
		cfcore::CFGenKbSecGrpMembByUUserIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
		auto searchIndexByUUserIdx = indexByUUserIdx->find( key );
		if( searchIndexByUUserIdx != indexByUUserIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUUserIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::pageSecGrpMembByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageSecGrpMembByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbSecGrpMembObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorSecGrpMembId );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		cfcore::ICFGenKbSecGrpMembObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
			if( realized == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Realized );
			}
			// No need to delete obj -- realize() auto-destructs the instance it decided to discard
			obj = NULL;
			retList.push_back( realized );
		}
		return( retList );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::pageSecGrpMembByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageSecGrpMembByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		cfcore::ICFGenKbSecGrpMembObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->pageBuffByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				priorClusterId,
				priorSecGrpMembId );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		cfcore::ICFGenKbSecGrpMembObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
			if( realized == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Realized );
			}
			// No need to delete obj -- realize() auto-destructs the instance it decided to discard
			obj = NULL;
			retList.push_back( realized );
		}
		return( retList );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGrpMembTableObj::pageSecGrpMembByUserIdx( const uuid_ptr_t SecUserId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpMembId )
	{
		static const std::string S_ProcName( "pageSecGrpMembByUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpMembByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecGrpMembObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpMembBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->pageBuffByUserIdx( schema->getAuthorization(),
				SecUserId,
				priorClusterId,
				priorSecGrpMembId );
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGrpMembBuff* buff;
		cfcore::ICFGenKbSecGrpMembObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
			if( realized == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Realized );
			}
			// No need to delete obj -- realize() auto-destructs the instance it decided to discard
			obj = NULL;
			retList.push_back( realized );
		}
		return( retList );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembTableObj::updateSecGrpMemb( cfcore::ICFGenKbSecGrpMembEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecGrpMemb" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGrpMembObj* obj = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGrpMembBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->updateSecGrpMemb( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( Obj->getSecGrpMembBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( obj->realize() );
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

	void CFGenKbSecGrpMembTableObj::deleteSecGrpMemb( cfcore::ICFGenKbSecGrpMembEditObj* Obj ) {
		cfcore::ICFGenKbSecGrpMembObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->deleteSecGrpMemb( schema->getAuthorization(),
			obj->getSecGrpMembBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGrpMembId() );
	}

	void CFGenKbSecGrpMembTableObj::deleteSecGrpMembByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpMembId )
	{
		cfcore::CFGenKbSecGrpMembPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGrpMembId( SecGrpMembId );
		cfcore::ICFGenKbSecGrpMembObj* obj = readSecGrpMemb( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecGrpMembEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecGrpMembEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecGrpMembEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecGrpMembTableObj::deleteSecGrpMembByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->deleteSecGrpMembByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbSecGrpMembTableObj::deleteSecGrpMembByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->deleteSecGrpMembByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId );
		deepDisposeByGroupIdx( ClusterId,
			SecGroupId );
	}

	void CFGenKbSecGrpMembTableObj::deleteSecGrpMembByUserIdx( const uuid_ptr_t SecUserId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->deleteSecGrpMembByUserIdx( schema->getAuthorization(),
				SecUserId );
		deepDisposeByUserIdx( SecUserId );
	}

	void CFGenKbSecGrpMembTableObj::deleteSecGrpMembByUUserIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const uuid_ptr_t SecUserId )
	{
		if( indexByUUserIdx == NULL ) {
			indexByUUserIdx = new std::map< cfcore::CFGenKbSecGrpMembByUUserIdxKey,
				cfcore::ICFGenKbSecGrpMembObj*>();
		}
		cfcore::CFGenKbSecGrpMembByUUserIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecGrpMembObj* obj = NULL;
		auto searchIndexByUUserIdx = indexByUUserIdx->find( key );
		if( searchIndexByUUserIdx != indexByUUserIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->deleteSecGrpMembByUUserIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				SecUserId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpMemb()->deleteSecGrpMembByUUserIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				SecUserId );
		}
		deepDisposeByUUserIdx( ClusterId,
			SecGroupId,
			SecUserId );
	}

	void CFGenKbSecGrpMembTableObj::reallyDetachFromIndexesSecGrpMemb( cfcore::ICFGenKbSecGrpMembObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecGrpMemb" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGrpMembObj* obj = Obj;
		cfcore::CFGenKbSecGrpMembPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecGrpMembObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
							if( mapClusterIdx->empty() ) {
								delete mapClusterIdx;
								mapClusterIdx = NULL;
								indexByClusterIdx->erase( searchClusterIdx );
							}
						}
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( obj->getRequiredSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapGroupIdx = searchGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						auto removalProbe = mapGroupIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapGroupIdx->end() ) {
							mapGroupIdx->erase( removalProbe );
							if( mapGroupIdx->empty() ) {
								delete mapGroupIdx;
								mapGroupIdx = NULL;
								indexByGroupIdx->erase( searchGroupIdx );
							}
						}
					}
				}
			}

			if( indexByUserIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				auto searchUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpMembPKey, cfcore::ICFGenKbSecGrpMembObj*>* mapUserIdx = searchUserIdx->second;
					if( mapUserIdx != NULL ) {
						auto removalProbe = mapUserIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapUserIdx->end() ) {
							mapUserIdx->erase( removalProbe );
							if( mapUserIdx->empty() ) {
								delete mapUserIdx;
								mapUserIdx = NULL;
								indexByUserIdx->erase( searchUserIdx );
							}
						}
					}
				}
			}

			if( indexByUUserIdx != NULL ) {
				cfcore::CFGenKbSecGrpMembByUUserIdxKey keyUUserIdx;
				keyUUserIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUUserIdx.setRequiredSecGroupId( obj->getRequiredSecGroupId() );
				keyUUserIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				auto removalProbe = indexByUUserIdx->find( keyUUserIdx );
				if( removalProbe != indexByUUserIdx->end() ) {
					indexByUUserIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
