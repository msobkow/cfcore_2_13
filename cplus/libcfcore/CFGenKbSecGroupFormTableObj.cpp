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

	const std::string CFGenKbSecGroupFormTableObj::CLASS_NAME( "CFGenKbSecGroupFormTableObj" );
	const std::string CFGenKbSecGroupFormTableObj::TABLE_NAME( "SecGroupForm" );
	const std::string CFGenKbSecGroupFormTableObj::TABLE_DBNAME( "SecGrpFrm" );

	CFGenKbSecGroupFormTableObj::CFGenKbSecGroupFormTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>();
		allSecGroupForm = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByAppIdx = new std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByUFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey,
			cfcore::ICFGenKbSecGroupFormObj*>();
	}

	CFGenKbSecGroupFormTableObj::CFGenKbSecGroupFormTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>();
		allSecGroupForm = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByAppIdx = new std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		indexByUFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey,
			cfcore::ICFGenKbSecGroupFormObj*>();
	}

	CFGenKbSecGroupFormTableObj::~CFGenKbSecGroupFormTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByGroupIdx != NULL ) {
			delete indexByGroupIdx;
			indexByGroupIdx = NULL;
		}
		if( indexByAppIdx != NULL ) {
			delete indexByAppIdx;
			indexByAppIdx = NULL;
		}
		if( indexByFormIdx != NULL ) {
			delete indexByFormIdx;
			indexByFormIdx = NULL;
		}
		if( indexByUFormIdx != NULL ) {
			delete indexByUFormIdx;
			indexByUFormIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGroupFormObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGroupFormTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecGroupFormTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecGroupFormTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecGroupFormTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecGroupFormTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecGroupFormTableObj::minimizeMemory() {
		if( allSecGroupForm != NULL ) {
			allSecGroupForm->clear();
			delete allSecGroupForm;
			allSecGroupForm = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* curByClusterIdx = NULL;
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
			std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator iterByGroupIdx = indexByGroupIdx->begin();
			std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator endByGroupIdx = indexByGroupIdx->end();
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* curByGroupIdx = NULL;
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
		if( indexByAppIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator iterByAppIdx = indexByAppIdx->begin();
			std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator endByAppIdx = indexByAppIdx->end();
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* curByAppIdx = NULL;
			while( iterByAppIdx != endByAppIdx ) {
				curByAppIdx = iterByAppIdx->second;
				if( curByAppIdx != NULL ) {
					curByAppIdx->clear();
					delete curByAppIdx;
					curByAppIdx = NULL;
					iterByAppIdx->second = NULL;
				}
				iterByAppIdx ++;
			}
			indexByAppIdx->clear();
		}
		if( indexByFormIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator iterByFormIdx = indexByFormIdx->begin();
			std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* >::iterator endByFormIdx = indexByFormIdx->end();
			std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* curByFormIdx = NULL;
			while( iterByFormIdx != endByFormIdx ) {
				curByFormIdx = iterByFormIdx->second;
				if( curByFormIdx != NULL ) {
					curByFormIdx->clear();
					delete curByFormIdx;
					curByFormIdx = NULL;
					iterByFormIdx->second = NULL;
				}
				iterByFormIdx ++;
			}
			indexByFormIdx->clear();
		}
		if( indexByUFormIdx != NULL ) {
			indexByUFormIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
			cfcore::ICFGenKbSecGroupFormEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::newInstance() {
		cfcore::ICFGenKbSecGroupFormObj* inst = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( new CFGenKbSecGroupFormObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecGroupFormEditObj* CFGenKbSecGroupFormTableObj::newEditInstance( cfcore::ICFGenKbSecGroupFormObj* orig ) {
		cfcore::ICFGenKbSecGroupFormEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecGroupFormEditObj*>( new CFGenKbSecGroupFormEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::realizeSecGroupForm( cfcore::ICFGenKbSecGroupFormObj* Obj ) {
		static const std::string S_ProcName( "realizeSecGroupForm" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGroupFormObj* obj = Obj;
		cfcore::ICFGenKbSecGroupFormObj* existingObj = NULL;
		cfcore::CFGenKbSecGroupFormPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecGroupFormObj* keepObj = NULL;
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
				cfcore::CFGenKbSecGroupFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapGroupIdx = searchGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						auto removalProbe = mapGroupIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapGroupIdx->end() ) {
							mapGroupIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByAppIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByAppIdxKey keyAppIdx;
				keyAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchAppIdx = indexByAppIdx->find( keyAppIdx );
				if( searchAppIdx != indexByAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapAppIdx = searchAppIdx->second;
					if( mapAppIdx != NULL ) {
						auto removalProbe = mapAppIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapAppIdx->end() ) {
							mapAppIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByFormIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByFormIdxKey keyFormIdx;
				keyFormIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyFormIdx.setRequiredSecFormId( keepObj->getRequiredSecFormId() );
				auto searchFormIdx = indexByFormIdx->find( keyFormIdx );
				if( searchFormIdx != indexByFormIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapFormIdx = searchFormIdx->second;
					if( mapFormIdx != NULL ) {
						auto removalProbe = mapFormIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapFormIdx->end() ) {
							mapFormIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUFormIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByUFormIdxKey keyUFormIdx;
				keyUFormIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUFormIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUFormIdx.setRequiredSecFormId( keepObj->getRequiredSecFormId() );
				auto removalProbe = indexByUFormIdx->find( keyUFormIdx );
				if( removalProbe != indexByUFormIdx->end() ) {
					indexByUFormIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByAppIdx != NULL ) {
				static const std::string S_AAppIdxObj( "aAppIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aAppIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aAppIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAppIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByAppIdxKey keyAppIdx;
				keyAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchIndexByAppIdx = indexByAppIdx->find( keyAppIdx );
				if( searchIndexByAppIdx != indexByAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapAppIdx = searchIndexByAppIdx->second;
					if( mapAppIdx != NULL ) {
						mapAppIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aAppIdxObj ) );
					}
				}
			}

			if( indexByFormIdx != NULL ) {
				static const std::string S_AFormIdxObj( "aFormIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aFormIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aFormIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFormIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByFormIdxKey keyFormIdx;
				keyFormIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyFormIdx.setRequiredSecFormId( keepObj->getRequiredSecFormId() );
				auto searchIndexByFormIdx = indexByFormIdx->find( keyFormIdx );
				if( searchIndexByFormIdx != indexByFormIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapFormIdx = searchIndexByFormIdx->second;
					if( mapFormIdx != NULL ) {
						mapFormIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aFormIdxObj ) );
					}
				}
			}

			if( indexByUFormIdx != NULL ) {
				static const std::string S_AUFormIdxObj( "aUFormIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aUFormIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aUFormIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUFormIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByUFormIdxKey keyUFormIdx;
				keyUFormIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUFormIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUFormIdx.setRequiredSecFormId( keepObj->getRequiredSecFormId() );
				indexByUFormIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( keyUFormIdx, aUFormIdxObj ) );
			}

			if( allSecGroupForm != NULL ) {
				allSecGroupForm->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByAppIdx != NULL ) {
				static const std::string S_AAppIdxObj( "aAppIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aAppIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aAppIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAppIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByAppIdxKey keyAppIdx;
				keyAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchIndexByAppIdx = indexByAppIdx->find( keyAppIdx );
				if( searchIndexByAppIdx != indexByAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapAppIdx = searchIndexByAppIdx->second;
					if( mapAppIdx != NULL ) {
						mapAppIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aAppIdxObj ) );
					}
				}
			}

			if( indexByFormIdx != NULL ) {
				static const std::string S_AFormIdxObj( "aFormIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aFormIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aFormIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFormIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByFormIdxKey keyFormIdx;
				keyFormIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyFormIdx.setRequiredSecFormId( keepObj->getRequiredSecFormId() );
				auto searchIndexByFormIdx = indexByFormIdx->find( keyFormIdx );
				if( searchIndexByFormIdx != indexByFormIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapFormIdx = searchIndexByFormIdx->second;
					if( mapFormIdx != NULL ) {
						mapFormIdx->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), aFormIdxObj ) );
					}
				}
			}

			if( indexByUFormIdx != NULL ) {
				static const std::string S_AUFormIdxObj( "aUFormIdxObj" );
				cfcore::ICFGenKbSecGroupFormObj* aUFormIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( keepObj );
				if( aUFormIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUFormIdxObj );
				}
				cfcore::CFGenKbSecGroupFormByUFormIdxKey keyUFormIdx;
				keyUFormIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUFormIdx.setRequiredSecGroupId( keepObj->getRequiredSecGroupId() );
				keyUFormIdx.setRequiredSecFormId( keepObj->getRequiredSecFormId() );
				indexByUFormIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( keyUFormIdx, aUFormIdxObj ) );
			}

			if( allSecGroupForm != NULL ) {
				allSecGroupForm->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecGroupFormTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> list;
		cfcore::ICFGenKbSecGroupFormObj* existingObj = readCachedSecGroupFormByIdIdx( ClusterId,
				SecGroupFormId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDeepDisposeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupFormTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> list;
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> matchesFound = readCachedSecGroupFormByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDeepDisposeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupFormTableObj::deepDisposeByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId ) {
		static const std::string S_ProcName( "deepDisposeByGroupIdx" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> list;
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> matchesFound = readCachedSecGroupFormByGroupIdx( ClusterId,
				SecGroupId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDeepDisposeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupFormTableObj::deepDisposeByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId ) {
		static const std::string S_ProcName( "deepDisposeByAppIdx" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> list;
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> matchesFound = readCachedSecGroupFormByAppIdx( ClusterId,
				SecAppId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDeepDisposeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupFormTableObj::deepDisposeByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId ) {
		static const std::string S_ProcName( "deepDisposeByFormIdx" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> list;
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> matchesFound = readCachedSecGroupFormByFormIdx( ClusterId,
				SecFormId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDeepDisposeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupFormTableObj::deepDisposeByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId ) {
		static const std::string S_ProcName( "deepDisposeByUFormIdx" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> list;
		cfcore::ICFGenKbSecGroupFormObj* existingObj = readCachedSecGroupFormByUFormIdx( ClusterId,
				SecGroupId,
				SecFormId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGroupFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDeepDisposeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupFormTableObj::reallyDeepDisposeSecGroupForm( cfcore::ICFGenKbSecGroupFormObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecGroupForm" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecGroupFormObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->reallyDetachFromIndexesSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::createSecGroupForm( cfcore::ICFGenKbSecGroupFormEditObj* Obj ) {
		static const std::string S_ProcName( "createSecGroupForm" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGroupFormObj* obj = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGroupFormBuff* buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->createSecGroupForm(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::readSecGroupForm( cfcore::CFGenKbSecGroupFormPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGroupForm" );
		cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
		cfcore::ICFGenKbSecGroupFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGroupFormBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecGroupFormId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::lockSecGroupForm( cfcore::CFGenKbSecGroupFormPKey* pkey ) {
		static const std::string S_ProcName( "lockSecGroupForm" );
		cfcore::ICFGenKbSecGroupFormObj* locked = NULL;
		cfcore::CFGenKbSecGroupFormBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readAllSecGroupForm( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecGroupForm" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGroupFormObj* realized = NULL;
		if( forceRead || ( allSecGroupForm == NULL ) ) {
			std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* map = new std::map<cfcore::CFGenKbSecGroupFormPKey,cfcore::ICFGenKbSecGroupFormObj*>();
			allSecGroupForm = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecGroupFormBuff* buff = NULL;
			cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecGroupForm->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecGroupForm->size();
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		auto valIter = allSecGroupForm->begin();
		size_t idx = 0;
		while( valIter != allSecGroupForm->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::pageAllSecGroupForm(const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecGroupForm" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* map = NULL;
		cfcore::CFGenKbSecGroupFormBuff* buff = NULL;
		cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
		cfcore::ICFGenKbSecGroupFormObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecGroupFormPKey,cfcore::ICFGenKbSecGroupFormObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorSecGroupFormId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::readSecGroupFormByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupFormByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGroupFormId( SecGroupFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj = readSecGroupForm( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readSecGroupFormByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>();
			cfcore::ICFGenKbSecGroupFormObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbSecGroupFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGroupFormObj* realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupFormByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* oldDict;
		if( indexByGroupIdx == NULL ) {
			indexByGroupIdx = new std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>();
			cfcore::ICFGenKbSecGroupFormObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readDerivedByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId );
			cfcore::CFGenKbSecGroupFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGroupFormObj* realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGroupIdx->erase( searchIndexByGroupIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGroupIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByGroupIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupFormByAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* oldDict;
		if( indexByAppIdx == NULL ) {
			indexByAppIdx = new std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		}
		auto searchIndexByAppIdx = indexByAppIdx->find( key );
		if( searchIndexByAppIdx != indexByAppIdx->end() ) {
			oldDict = searchIndexByAppIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>();
			cfcore::ICFGenKbSecGroupFormObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readDerivedByAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId );
			cfcore::CFGenKbSecGroupFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGroupFormObj* realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByAppIdx->erase( searchIndexByAppIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByAppIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByAppIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupFormByFormIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecFormId( SecFormId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* oldDict;
		if( indexByFormIdx == NULL ) {
			indexByFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>*>();
		}
		auto searchIndexByFormIdx = indexByFormIdx->find( key );
		if( searchIndexByFormIdx != indexByFormIdx->end() ) {
			oldDict = searchIndexByFormIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>();
			cfcore::ICFGenKbSecGroupFormObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readDerivedByFormIdx( schema->getAuthorization(),
				ClusterId,
				SecFormId );
			cfcore::CFGenKbSecGroupFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGroupFormObj* realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFormIdx->erase( searchIndexByFormIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFormIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByFormIdxKey,
				std::map< cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::readSecGroupFormByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupFormByUFormIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUFormIdx == NULL ) {
			indexByUFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey,
				cfcore::ICFGenKbSecGroupFormObj*>();
		}
		cfcore::CFGenKbSecGroupFormByUFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
		cfcore::ICFGenKbSecGroupFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUFormIdx = indexByUFormIdx->find( key );
			if( searchIndexByUFormIdx != indexByUFormIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUFormIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGroupFormBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->readDerivedByUFormIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				SecFormId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUFormIdx->insert( std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey, cfcore::ICFGenKbSecGroupFormObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::readCachedSecGroupForm( cfcore::CFGenKbSecGroupFormPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGroupForm" );
		cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
		cfcore::ICFGenKbSecGroupFormObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::readCachedSecGroupFormByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId )
	{
		static const std::string S_ProcName( "readCachedSecGroupFormByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGroupFormId( SecGroupFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj = readCachedSecGroupForm( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readCachedSecGroupFormByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecGroupFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		cfcore::CFGenKbSecGroupFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGroupFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readCachedSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readCachedSecGroupFormByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		cfcore::CFGenKbSecGroupFormByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		if( indexByGroupIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGroupIdx = indexByGroupIdx->find( key );
		if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
			dict = searchIndexByGroupIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGroupFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readCachedSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readCachedSecGroupFormByAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		cfcore::CFGenKbSecGroupFormByAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		if( indexByAppIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByAppIdx = indexByAppIdx->find( key );
		if( searchIndexByAppIdx != indexByAppIdx->end() ) {
			dict = searchIndexByAppIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGroupFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::readCachedSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readCachedSecGroupFormByFormIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
		cfcore::CFGenKbSecGroupFormByFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecFormId( SecFormId );
		std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* dict;
		if( indexByFormIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFormIdx = indexByFormIdx->find( key );
		if( searchIndexByFormIdx != indexByFormIdx->end() ) {
			dict = searchIndexByFormIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGroupFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGroupFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::readCachedSecGroupFormByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readCachedSecGroupFormByUFormIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUFormIdx == NULL ) {
			indexByUFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey,
				cfcore::ICFGenKbSecGroupFormObj*>();
		}
		cfcore::CFGenKbSecGroupFormByUFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
		auto searchIndexByUFormIdx = indexByUFormIdx->find( key );
		if( searchIndexByUFormIdx != indexByUFormIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUFormIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::pageSecGroupFormByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageSecGroupFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbSecGroupFormObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorSecGroupFormId );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		cfcore::ICFGenKbSecGroupFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::pageSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageSecGroupFormByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByGroupIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		cfcore::ICFGenKbSecGroupFormObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->pageBuffByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				priorClusterId,
				priorSecGroupFormId );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		cfcore::ICFGenKbSecGroupFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::pageSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageSecGroupFormByAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		cfcore::ICFGenKbSecGroupFormObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->pageBuffByAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				priorClusterId,
				priorSecGroupFormId );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		cfcore::ICFGenKbSecGroupFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupFormTableObj::pageSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId,
			const int64_t* priorClusterId,
			const int64_t* priorSecGroupFormId )
	{
		static const std::string S_ProcName( "pageSecGroupFormByFormIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupFormByFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecGroupFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->pageBuffByFormIdx( schema->getAuthorization(),
				ClusterId,
				SecFormId,
				priorClusterId,
				priorSecGroupFormId );
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecGroupFormBuff* buff;
		cfcore::ICFGenKbSecGroupFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormTableObj::updateSecGroupForm( cfcore::ICFGenKbSecGroupFormEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecGroupForm" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGroupFormObj* obj = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGroupFormBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->updateSecGroupForm( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( Obj->getSecGroupFormBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( obj->realize() );
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

	void CFGenKbSecGroupFormTableObj::deleteSecGroupForm( cfcore::ICFGenKbSecGroupFormEditObj* Obj ) {
		cfcore::ICFGenKbSecGroupFormObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupForm( schema->getAuthorization(),
			obj->getSecGroupFormBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGroupFormId() );
	}

	void CFGenKbSecGroupFormTableObj::deleteSecGroupFormByIdIdx( const int64_t ClusterId,
			const int64_t SecGroupFormId )
	{
		cfcore::CFGenKbSecGroupFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGroupFormId( SecGroupFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj = readSecGroupForm( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecGroupFormEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecGroupFormEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecGroupFormEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecGroupFormTableObj::deleteSecGroupFormByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupFormByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbSecGroupFormTableObj::deleteSecGroupFormByGroupIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupFormByGroupIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId );
		deepDisposeByGroupIdx( ClusterId,
			SecGroupId );
	}

	void CFGenKbSecGroupFormTableObj::deleteSecGroupFormByAppIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupFormByAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId );
		deepDisposeByAppIdx( ClusterId,
			SecAppId );
	}

	void CFGenKbSecGroupFormTableObj::deleteSecGroupFormByFormIdx( const int64_t ClusterId,
			const int32_t SecFormId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupFormByFormIdx( schema->getAuthorization(),
				ClusterId,
				SecFormId );
		deepDisposeByFormIdx( ClusterId,
			SecFormId );
	}

	void CFGenKbSecGroupFormTableObj::deleteSecGroupFormByUFormIdx( const int64_t ClusterId,
			const int32_t SecGroupId,
			const int32_t SecFormId )
	{
		if( indexByUFormIdx == NULL ) {
			indexByUFormIdx = new std::map< cfcore::CFGenKbSecGroupFormByUFormIdxKey,
				cfcore::ICFGenKbSecGroupFormObj*>();
		}
		cfcore::CFGenKbSecGroupFormByUFormIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecGroupId( SecGroupId );
		key.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecGroupFormObj* obj = NULL;
		auto searchIndexByUFormIdx = indexByUFormIdx->find( key );
		if( searchIndexByUFormIdx != indexByUFormIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupFormByUFormIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				SecFormId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroupForm()->deleteSecGroupFormByUFormIdx( schema->getAuthorization(),
				ClusterId,
				SecGroupId,
				SecFormId );
		}
		deepDisposeByUFormIdx( ClusterId,
			SecGroupId,
			SecFormId );
	}

	void CFGenKbSecGroupFormTableObj::reallyDetachFromIndexesSecGroupForm( cfcore::ICFGenKbSecGroupFormObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecGroupForm" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGroupFormObj* obj = Obj;
		cfcore::CFGenKbSecGroupFormPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecGroupFormObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapClusterIdx = searchClusterIdx->second;
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
				cfcore::CFGenKbSecGroupFormByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyGroupIdx.setRequiredSecGroupId( obj->getRequiredSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapGroupIdx = searchGroupIdx->second;
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

			if( indexByAppIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByAppIdxKey keyAppIdx;
				keyAppIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyAppIdx.setRequiredSecAppId( obj->getRequiredSecAppId() );
				auto searchAppIdx = indexByAppIdx->find( keyAppIdx );
				if( searchAppIdx != indexByAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapAppIdx = searchAppIdx->second;
					if( mapAppIdx != NULL ) {
						auto removalProbe = mapAppIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapAppIdx->end() ) {
							mapAppIdx->erase( removalProbe );
							if( mapAppIdx->empty() ) {
								delete mapAppIdx;
								mapAppIdx = NULL;
								indexByAppIdx->erase( searchAppIdx );
							}
						}
					}
				}
			}

			if( indexByFormIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByFormIdxKey keyFormIdx;
				keyFormIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyFormIdx.setRequiredSecFormId( obj->getRequiredSecFormId() );
				auto searchFormIdx = indexByFormIdx->find( keyFormIdx );
				if( searchFormIdx != indexByFormIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupFormPKey, cfcore::ICFGenKbSecGroupFormObj*>* mapFormIdx = searchFormIdx->second;
					if( mapFormIdx != NULL ) {
						auto removalProbe = mapFormIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapFormIdx->end() ) {
							mapFormIdx->erase( removalProbe );
							if( mapFormIdx->empty() ) {
								delete mapFormIdx;
								mapFormIdx = NULL;
								indexByFormIdx->erase( searchFormIdx );
							}
						}
					}
				}
			}

			if( indexByUFormIdx != NULL ) {
				cfcore::CFGenKbSecGroupFormByUFormIdxKey keyUFormIdx;
				keyUFormIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUFormIdx.setRequiredSecGroupId( obj->getRequiredSecGroupId() );
				keyUFormIdx.setRequiredSecFormId( obj->getRequiredSecFormId() );
				auto removalProbe = indexByUFormIdx->find( keyUFormIdx );
				if( removalProbe != indexByUFormIdx->end() ) {
					indexByUFormIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
