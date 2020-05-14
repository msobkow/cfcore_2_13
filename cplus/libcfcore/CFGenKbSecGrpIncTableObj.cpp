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

	const std::string CFGenKbSecGrpIncTableObj::CLASS_NAME( "CFGenKbSecGrpIncTableObj" );
	const std::string CFGenKbSecGrpIncTableObj::TABLE_NAME( "SecGrpInc" );
	const std::string CFGenKbSecGrpIncTableObj::TABLE_DBNAME( "SecInc" );

	CFGenKbSecGrpIncTableObj::CFGenKbSecGrpIncTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>();
		allSecGrpInc = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGrpIncByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbSecGrpIncByGroupIdxKey,
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		indexByIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		indexByUIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey,
			cfcore::ICFGenKbSecGrpIncObj*>();
	}

	CFGenKbSecGrpIncTableObj::CFGenKbSecGrpIncTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>();
		allSecGrpInc = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGrpIncByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbSecGrpIncByGroupIdxKey,
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		indexByIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		indexByUIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey,
			cfcore::ICFGenKbSecGrpIncObj*>();
	}

	CFGenKbSecGrpIncTableObj::~CFGenKbSecGrpIncTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByGroupIdx != NULL ) {
			delete indexByGroupIdx;
			indexByGroupIdx = NULL;
		}
		if( indexByIncludeIdx != NULL ) {
			delete indexByIncludeIdx;
			indexByIncludeIdx = NULL;
		}
		if( indexByUIncludeIdx != NULL ) {
			delete indexByUIncludeIdx;
			indexByUIncludeIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGrpIncObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGrpIncTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecGrpIncTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecGrpIncTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecGrpIncTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecGrpIncTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecGrpIncTableObj::minimizeMemory() {
		if( allSecGrpInc != NULL ) {
			allSecGrpInc->clear();
			delete allSecGrpInc;
			allSecGrpInc = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGrpIncByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbSecGrpIncByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* curByClusterIdx = NULL;
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
			std::map< cfcore::CFGenKbSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* >::iterator iterByGroupIdx = indexByGroupIdx->begin();
			std::map< cfcore::CFGenKbSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* >::iterator endByGroupIdx = indexByGroupIdx->end();
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* curByGroupIdx = NULL;
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
		if( indexByIncludeIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* >::iterator iterByIncludeIdx = indexByIncludeIdx->begin();
			std::map< cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* >::iterator endByIncludeIdx = indexByIncludeIdx->end();
			std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* curByIncludeIdx = NULL;
			while( iterByIncludeIdx != endByIncludeIdx ) {
				curByIncludeIdx = iterByIncludeIdx->second;
				if( curByIncludeIdx != NULL ) {
					curByIncludeIdx->clear();
					delete curByIncludeIdx;
					curByIncludeIdx = NULL;
					iterByIncludeIdx->second = NULL;
				}
				iterByIncludeIdx ++;
			}
			indexByIncludeIdx->clear();
		}
		if( indexByUIncludeIdx != NULL ) {
			indexByUIncludeIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGrpIncObj* cur = NULL;
			cfcore::ICFGenKbSecGrpIncEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::newInstance() {
		cfcore::ICFGenKbSecGrpIncObj* inst = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( new CFGenKbSecGrpIncObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecGrpIncEditObj* CFGenKbSecGrpIncTableObj::newEditInstance( cfcore::ICFGenKbSecGrpIncObj* orig ) {
		cfcore::ICFGenKbSecGrpIncEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecGrpIncEditObj*>( new CFGenKbSecGrpIncEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::realizeSecGrpInc( cfcore::ICFGenKbSecGrpIncObj* Obj ) {
		static const std::string S_ProcName( "realizeSecGrpInc" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGrpIncObj* obj = Obj;
		cfcore::ICFGenKbSecGrpIncObj* existingObj = NULL;
		cfcore::CFGenKbSecGrpIncPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecGrpIncObj* keepObj = NULL;
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
				cfcore::CFGenKbSecGrpIncByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				cfcore::CFGenKbSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapGroupIdx = searchGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						auto removalProbe = mapGroupIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapGroupIdx->end() ) {
							mapGroupIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				cfcore::CFGenKbSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto searchIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapIncludeIdx = searchIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						auto removalProbe = mapIncludeIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIncludeIdx->end() ) {
							mapIncludeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				cfcore::CFGenKbSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUIncludeIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto removalProbe = indexByUIncludeIdx->find( keyUIncludeIdx );
				if( removalProbe != indexByUIncludeIdx->end() ) {
					indexByUIncludeIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				static const std::string S_AIncludeIdxObj( "aIncludeIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIncludeIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto searchIndexByIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapIncludeIdx = searchIndexByIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						mapIncludeIdx->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aIncludeIdxObj ) );
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				static const std::string S_AUIncludeIdxObj( "aUIncludeIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aUIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aUIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUIncludeIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUIncludeIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				indexByUIncludeIdx->insert( std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( keyUIncludeIdx, aUIncludeIdxObj ) );
			}

			if( allSecGrpInc != NULL ) {
				allSecGrpInc->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				static const std::string S_AIncludeIdxObj( "aIncludeIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIncludeIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto searchIndexByIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapIncludeIdx = searchIndexByIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						mapIncludeIdx->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aIncludeIdxObj ) );
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				static const std::string S_AUIncludeIdxObj( "aUIncludeIdxObj" );
				cfcore::ICFGenKbSecGrpIncObj* aUIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( keepObj );
				if( aUIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUIncludeIdxObj );
				}
				cfcore::CFGenKbSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUIncludeIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				indexByUIncludeIdx->insert( std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( keyUIncludeIdx, aUIncludeIdxObj ) );
			}

			if( allSecGrpInc != NULL ) {
				allSecGrpInc->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecGrpIncTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpIncId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> list;
		cfcore::ICFGenKbSecGrpIncObj* existingObj = readCachedSecGrpIncByIdIdx( ClusterId,
				SecGrpIncId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->reallyDeepDisposeSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpIncTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> list;
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> matchesFound = readCachedSecGrpIncByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->reallyDeepDisposeSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpIncTableObj::deepDisposeByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId ) {
		static const std::string S_ProcName( "deepDisposeByGroupIdx" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> list;
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> matchesFound = readCachedSecGrpIncByGroupIdx( ClusterId,
				SecGroupId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->reallyDeepDisposeSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpIncTableObj::deepDisposeByIncludeIdx( const int64_t ClusterId,
			const int32_t IncludeGroupId ) {
		static const std::string S_ProcName( "deepDisposeByIncludeIdx" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> list;
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> matchesFound = readCachedSecGrpIncByIncludeIdx( ClusterId,
				IncludeGroupId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->reallyDeepDisposeSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpIncTableObj::deepDisposeByUIncludeIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId ) {
		static const std::string S_ProcName( "deepDisposeByUIncludeIdx" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> list;
		cfcore::ICFGenKbSecGrpIncObj* existingObj = readCachedSecGrpIncByUIncludeIdx( ClusterId,
				SecGroupId,
				IncludeGroupId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->reallyDeepDisposeSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGrpIncTableObj::reallyDeepDisposeSecGrpInc( cfcore::ICFGenKbSecGrpIncObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecGrpInc" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecGrpIncObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->reallyDetachFromIndexesSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::createSecGrpInc( cfcore::ICFGenKbSecGrpIncEditObj* Obj ) {
		static const std::string S_ProcName( "createSecGrpInc" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGrpIncObj* obj = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGrpIncBuff* buff = dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->createSecGrpInc(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::readSecGrpInc( cfcore::CFGenKbSecGrpIncPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGrpInc" );
		cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbSecGrpIncObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGrpIncBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecGrpIncId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::lockSecGrpInc( cfcore::CFGenKbSecGrpIncPKey* pkey ) {
		static const std::string S_ProcName( "lockSecGrpInc" );
		cfcore::ICFGenKbSecGrpIncObj* locked = NULL;
		cfcore::CFGenKbSecGrpIncBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readAllSecGrpInc( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecGrpInc" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGrpIncObj* realized = NULL;
		if( forceRead || ( allSecGrpInc == NULL ) ) {
			std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* map = new std::map<cfcore::CFGenKbSecGrpIncPKey,cfcore::ICFGenKbSecGrpIncObj*>();
			allSecGrpInc = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecGrpIncBuff* buff = NULL;
			cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecGrpInc->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecGrpInc->size();
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		auto valIter = allSecGrpInc->begin();
		size_t idx = 0;
		while( valIter != allSecGrpInc->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::pageAllSecGrpInc(const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecGrpInc" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* map = NULL;
		cfcore::CFGenKbSecGrpIncBuff* buff = NULL;
		cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbSecGrpIncObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecGrpIncPKey,cfcore::ICFGenKbSecGrpIncObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorSecGrpIncId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::readSecGrpIncByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpIncId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpIncByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGrpIncId( SecGrpIncId );
		cfcore::ICFGenKbSecGrpIncObj* obj = readSecGrpInc( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readSecGrpIncByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpIncByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* dict;
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbSecGrpIncByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>();
			cfcore::ICFGenKbSecGrpIncObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbSecGrpIncBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGrpIncObj* realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbSecGrpIncByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readSecGrpIncByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpIncByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* dict;
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* oldDict;
		if( indexByGroupIdx == NULL ) {
			indexByGroupIdx = new std::map< cfcore::CFGenKbSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>();
			cfcore::ICFGenKbSecGrpIncObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->readDerivedByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId );
			cfcore::CFGenKbSecGrpIncBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGrpIncObj* realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGroupIdx->erase( searchIndexByGroupIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGroupIdx->insert( std::map< cfcore::CFGenKbSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readSecGrpIncByIncludeIdx( const int64_t ClusterId,
			const int32_t IncludeGroupId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpIncByIncludeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncByIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* dict;
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* oldDict;
		if( indexByIncludeIdx == NULL ) {
			indexByIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>*>();
		}
		auto searchIndexByIncludeIdx = indexByIncludeIdx->find( key );
		if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
			oldDict = searchIndexByIncludeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>();
			cfcore::ICFGenKbSecGrpIncObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->readDerivedByIncludeIdx( schema->getAuthorization(),
				ClusterId,
				IncludeGroupId );
			cfcore::CFGenKbSecGrpIncBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGrpIncObj* realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIncludeIdx->erase( searchIndexByIncludeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIncludeIdx->insert( std::map< cfcore::CFGenKbSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::readSecGrpIncByUIncludeIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGrpIncByUIncludeIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUIncludeIdx == NULL ) {
			indexByUIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey,
				cfcore::ICFGenKbSecGrpIncObj*>();
		}
		cfcore::CFGenKbSecGrpIncByUIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbSecGrpIncObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUIncludeIdx = indexByUIncludeIdx->find( key );
			if( searchIndexByUIncludeIdx != indexByUIncludeIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUIncludeIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGrpIncBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->readDerivedByUIncludeIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				IncludeGroupId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUIncludeIdx->insert( std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey, cfcore::ICFGenKbSecGrpIncObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::readCachedSecGrpInc( cfcore::CFGenKbSecGrpIncPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGrpInc" );
		cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbSecGrpIncObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::readCachedSecGrpIncByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpIncId )
	{
		static const std::string S_ProcName( "readCachedSecGrpIncByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGrpIncId( SecGrpIncId );
		cfcore::ICFGenKbSecGrpIncObj* obj = readCachedSecGrpInc( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readCachedSecGrpIncByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecGrpIncByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		cfcore::CFGenKbSecGrpIncByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGrpIncObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readCachedSecGrpIncByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readCachedSecGrpIncByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		cfcore::CFGenKbSecGrpIncByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* dict;
		if( indexByGroupIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGroupIdx = indexByGroupIdx->find( key );
		if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
			dict = searchIndexByGroupIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGrpIncObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::readCachedSecGrpIncByIncludeIdx( const int64_t ClusterId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readCachedSecGrpIncByIncludeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
		cfcore::CFGenKbSecGrpIncByIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* dict;
		if( indexByIncludeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIncludeIdx = indexByIncludeIdx->find( key );
		if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
			dict = searchIndexByIncludeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGrpIncObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGrpIncObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::readCachedSecGrpIncByUIncludeIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readCachedSecGrpIncByUIncludeIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUIncludeIdx == NULL ) {
			indexByUIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey,
				cfcore::ICFGenKbSecGrpIncObj*>();
		}
		cfcore::CFGenKbSecGrpIncByUIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
		auto searchIndexByUIncludeIdx = indexByUIncludeIdx->find( key );
		if( searchIndexByUIncludeIdx != indexByUIncludeIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUIncludeIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::pageSecGrpIncByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageSecGrpIncByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbSecGrpIncObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorSecGrpIncId );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGrpIncBuff* buff;
		cfcore::ICFGenKbSecGrpIncObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::pageSecGrpIncByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageSecGrpIncByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		cfcore::ICFGenKbSecGrpIncObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->pageBuffByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				priorClusterId,
				priorSecGrpIncId );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGrpIncBuff* buff;
		cfcore::ICFGenKbSecGrpIncObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGrpIncTableObj::pageSecGrpIncByIncludeIdx( const int64_t ClusterId,
			const int32_t IncludeGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGrpIncId )
	{
		static const std::string S_ProcName( "pageSecGrpIncByIncludeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGrpIncByIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbSecGrpIncObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->pageBuffByIncludeIdx( schema->getAuthorization(),
				ClusterId,
				IncludeGroupId,
				priorClusterId,
				priorSecGrpIncId );
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGrpIncBuff* buff;
		cfcore::ICFGenKbSecGrpIncObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncTableObj::updateSecGrpInc( cfcore::ICFGenKbSecGrpIncEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecGrpInc" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGrpIncObj* obj = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGrpIncBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->updateSecGrpInc( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( Obj->getSecGrpIncBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( obj->realize() );
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

	void CFGenKbSecGrpIncTableObj::deleteSecGrpInc( cfcore::ICFGenKbSecGrpIncEditObj* Obj ) {
		cfcore::ICFGenKbSecGrpIncObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->deleteSecGrpInc( schema->getAuthorization(),
			obj->getSecGrpIncBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGrpIncId() );
	}

	void CFGenKbSecGrpIncTableObj::deleteSecGrpIncByIdIdx( const int64_t ClusterId,
			const int64_t SecGrpIncId )
	{
		cfcore::CFGenKbSecGrpIncPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGrpIncId( SecGrpIncId );
		cfcore::ICFGenKbSecGrpIncObj* obj = readSecGrpInc( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecGrpIncEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecGrpIncEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecGrpIncEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecGrpIncTableObj::deleteSecGrpIncByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->deleteSecGrpIncByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbSecGrpIncTableObj::deleteSecGrpIncByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->deleteSecGrpIncByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId );
		deepDisposeByGroupIdx( ClusterId,
			SecGroupId );
	}

	void CFGenKbSecGrpIncTableObj::deleteSecGrpIncByIncludeIdx( const int64_t ClusterId,
			const int32_t IncludeGroupId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->deleteSecGrpIncByIncludeIdx( schema->getAuthorization(),
				ClusterId,
				IncludeGroupId );
		deepDisposeByIncludeIdx( ClusterId,
			IncludeGroupId );
	}

	void CFGenKbSecGrpIncTableObj::deleteSecGrpIncByUIncludeIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t IncludeGroupId )
	{
		if( indexByUIncludeIdx == NULL ) {
			indexByUIncludeIdx = new std::map< cfcore::CFGenKbSecGrpIncByUIncludeIdxKey,
				cfcore::ICFGenKbSecGrpIncObj*>();
		}
		cfcore::CFGenKbSecGrpIncByUIncludeIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbSecGrpIncObj* obj = NULL;
		auto searchIndexByUIncludeIdx = indexByUIncludeIdx->find( key );
		if( searchIndexByUIncludeIdx != indexByUIncludeIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->deleteSecGrpIncByUIncludeIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				IncludeGroupId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGrpInc()->deleteSecGrpIncByUIncludeIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				IncludeGroupId );
		}
		deepDisposeByUIncludeIdx( ClusterId,
			SecGroupId,
			IncludeGroupId );
	}

	void CFGenKbSecGrpIncTableObj::reallyDetachFromIndexesSecGrpInc( cfcore::ICFGenKbSecGrpIncObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecGrpInc" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGrpIncObj* obj = Obj;
		cfcore::CFGenKbSecGrpIncPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecGrpIncObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecGrpIncByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapClusterIdx = searchClusterIdx->second;
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
				cfcore::CFGenKbSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( obj->getRequiredSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapGroupIdx = searchGroupIdx->second;
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

			if( indexByIncludeIdx != NULL ) {
				cfcore::CFGenKbSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyIncludeIdx.setRequiredIncludeGroupId( obj->getRequiredIncludeGroupId() );
				auto searchIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbSecGrpIncPKey, cfcore::ICFGenKbSecGrpIncObj*>* mapIncludeIdx = searchIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						auto removalProbe = mapIncludeIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIncludeIdx->end() ) {
							mapIncludeIdx->erase( removalProbe );
							if( mapIncludeIdx->empty() ) {
								delete mapIncludeIdx;
								mapIncludeIdx = NULL;
								indexByIncludeIdx->erase( searchIncludeIdx );
							}
						}
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				cfcore::CFGenKbSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUIncludeIdx.setRequiredSecGroupId( obj->getRequiredSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( obj->getRequiredIncludeGroupId() );
				auto removalProbe = indexByUIncludeIdx->find( keyUIncludeIdx );
				if( removalProbe != indexByUIncludeIdx->end() ) {
					indexByUIncludeIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
