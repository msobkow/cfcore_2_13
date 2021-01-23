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

	const std::string CFGenKbSecFormTableObj::CLASS_NAME( "CFGenKbSecFormTableObj" );
	const std::string CFGenKbSecFormTableObj::TABLE_NAME( "SecForm" );
	const std::string CFGenKbSecFormTableObj::TABLE_DBNAME( "SecForm" );

	CFGenKbSecFormTableObj::CFGenKbSecFormTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>();
		allSecForm = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecFormByClusterIdxKey,
			std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>*>();
		indexBySecAppIdx = new std::map< cfcore::CFGenKbSecFormBySecAppIdxKey,
			std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>*>();
		indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
			cfcore::ICFGenKbSecFormObj*>();
	}

	CFGenKbSecFormTableObj::CFGenKbSecFormTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>();
		allSecForm = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecFormByClusterIdxKey,
			std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>*>();
		indexBySecAppIdx = new std::map< cfcore::CFGenKbSecFormBySecAppIdxKey,
			std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>*>();
		indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
			cfcore::ICFGenKbSecFormObj*>();
	}

	CFGenKbSecFormTableObj::~CFGenKbSecFormTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexBySecAppIdx != NULL ) {
			delete indexBySecAppIdx;
			indexBySecAppIdx = NULL;
		}
		if( indexByUJEEServletIdx != NULL ) {
			delete indexByUJEEServletIdx;
			indexByUJEEServletIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecFormObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecFormTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecFormTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecFormTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecFormTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecFormTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecFormTableObj::minimizeMemory() {
		if( allSecForm != NULL ) {
			allSecForm->clear();
			delete allSecForm;
			allSecForm = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbSecFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbSecFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* curByClusterIdx = NULL;
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
		if( indexBySecAppIdx != NULL ) {
			std::map< cfcore::CFGenKbSecFormBySecAppIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* >::iterator iterBySecAppIdx = indexBySecAppIdx->begin();
			std::map< cfcore::CFGenKbSecFormBySecAppIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* >::iterator endBySecAppIdx = indexBySecAppIdx->end();
			std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* curBySecAppIdx = NULL;
			while( iterBySecAppIdx != endBySecAppIdx ) {
				curBySecAppIdx = iterBySecAppIdx->second;
				if( curBySecAppIdx != NULL ) {
					curBySecAppIdx->clear();
					delete curBySecAppIdx;
					curBySecAppIdx = NULL;
					iterBySecAppIdx->second = NULL;
				}
				iterBySecAppIdx ++;
			}
			indexBySecAppIdx->clear();
		}
		if( indexByUJEEServletIdx != NULL ) {
			indexByUJEEServletIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecFormObj* cur = NULL;
			cfcore::ICFGenKbSecFormEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::newInstance() {
		cfcore::ICFGenKbSecFormObj* inst = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( new CFGenKbSecFormObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecFormEditObj* CFGenKbSecFormTableObj::newEditInstance( cfcore::ICFGenKbSecFormObj* orig ) {
		cfcore::ICFGenKbSecFormEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecFormEditObj*>( new CFGenKbSecFormEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::realizeSecForm( cfcore::ICFGenKbSecFormObj* Obj ) {
		static const std::string S_ProcName( "realizeSecForm" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecFormObj* obj = Obj;
		cfcore::ICFGenKbSecFormObj* existingObj = NULL;
		cfcore::CFGenKbSecFormPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecFormObj* keepObj = NULL;
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
				cfcore::CFGenKbSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				cfcore::CFGenKbSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchSecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchSecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapSecAppIdx = searchSecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						auto removalProbe = mapSecAppIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSecAppIdx->end() ) {
							mapSecAppIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				cfcore::CFGenKbSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( keepObj->getRequiredJEEServletMapName() );
				auto removalProbe = indexByUJEEServletIdx->find( keyUJEEServletIdx );
				if( removalProbe != indexByUJEEServletIdx->end() ) {
					indexByUJEEServletIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecFormObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecFormObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				static const std::string S_ASecAppIdxObj( "aSecAppIdxObj" );
				cfcore::ICFGenKbSecFormObj* aSecAppIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecFormObj*>( keepObj );
				if( aSecAppIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecAppIdxObj );
				}
				cfcore::CFGenKbSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchIndexBySecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapSecAppIdx = searchIndexBySecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						mapSecAppIdx->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), aSecAppIdxObj ) );
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				static const std::string S_AUJEEServletIdxObj( "aUJEEServletIdxObj" );
				cfcore::ICFGenKbSecFormObj* aUJEEServletIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecFormObj*>( keepObj );
				if( aUJEEServletIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUJEEServletIdxObj );
				}
				cfcore::CFGenKbSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( keepObj->getRequiredJEEServletMapName() );
				indexByUJEEServletIdx->insert( std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::ICFGenKbSecFormObj* >::value_type( keyUJEEServletIdx, aUJEEServletIdxObj ) );
			}

			if( allSecForm != NULL ) {
				allSecForm->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecFormObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecFormObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexBySecAppIdx != NULL ) {
				static const std::string S_ASecAppIdxObj( "aSecAppIdxObj" );
				cfcore::ICFGenKbSecFormObj* aSecAppIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecFormObj*>( keepObj );
				if( aSecAppIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecAppIdxObj );
				}
				cfcore::CFGenKbSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				auto searchIndexBySecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapSecAppIdx = searchIndexBySecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						mapSecAppIdx->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), aSecAppIdxObj ) );
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				static const std::string S_AUJEEServletIdxObj( "aUJEEServletIdxObj" );
				cfcore::ICFGenKbSecFormObj* aUJEEServletIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecFormObj*>( keepObj );
				if( aUJEEServletIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUJEEServletIdxObj );
				}
				cfcore::CFGenKbSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( keepObj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( keepObj->getRequiredJEEServletMapName() );
				indexByUJEEServletIdx->insert( std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::ICFGenKbSecFormObj* >::value_type( keyUJEEServletIdx, aUJEEServletIdxObj ) );
			}

			if( allSecForm != NULL ) {
				allSecForm->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecFormTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecFormObj*> list;
		cfcore::ICFGenKbSecFormObj* existingObj = readCachedSecFormByIdIdx( ClusterId,
				SecFormId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecFormTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbSecFormObj*> list;
		std::vector<cfcore::ICFGenKbSecFormObj*> matchesFound = readCachedSecFormByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecFormTableObj::deepDisposeBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId ) {
		static const std::string S_ProcName( "deepDisposeBySecAppIdx" );
		std::vector<cfcore::ICFGenKbSecFormObj*> list;
		std::vector<cfcore::ICFGenKbSecFormObj*> matchesFound = readCachedSecFormBySecAppIdx( ClusterId,
				SecAppId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecFormTableObj::deepDisposeByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName ) {
		static const std::string S_ProcName( "deepDisposeByUJEEServletIdx" );
		std::vector<cfcore::ICFGenKbSecFormObj*> list;
		cfcore::ICFGenKbSecFormObj* existingObj = readCachedSecFormByUJEEServletIdx( ClusterId,
				SecAppId,
				JEEServletMapName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecFormObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDeepDisposeSecForm( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecFormTableObj::reallyDeepDisposeSecForm( cfcore::ICFGenKbSecFormObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecForm" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecFormObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->reallyDetachFromIndexesSecForm( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::createSecForm( cfcore::ICFGenKbSecFormEditObj* Obj ) {
		static const std::string S_ProcName( "createSecForm" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecFormObj* obj = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecFormBuff* buff = dynamic_cast<cfcore::CFGenKbSecFormBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->createSecForm(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecFormBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readSecForm( cfcore::CFGenKbSecFormPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecForm" );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecFormBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecFormId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::lockSecForm( cfcore::CFGenKbSecFormPKey* pkey ) {
		static const std::string S_ProcName( "lockSecForm" );
		cfcore::ICFGenKbSecFormObj* locked = NULL;
		cfcore::CFGenKbSecFormBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::readAllSecForm( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecForm" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		if( forceRead || ( allSecForm == NULL ) ) {
			std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* map = new std::map<cfcore::CFGenKbSecFormPKey,cfcore::ICFGenKbSecFormObj*>();
			allSecForm = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecFormBuff* buff = NULL;
			cfcore::ICFGenKbSecFormObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecForm->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecForm->size();
		std::vector<cfcore::ICFGenKbSecFormObj*> arr;
		auto valIter = allSecForm->begin();
		size_t idx = 0;
		while( valIter != allSecForm->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::pageAllSecForm(const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecForm" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* map = NULL;
		cfcore::CFGenKbSecFormBuff* buff = NULL;
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecFormObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecFormPKey,cfcore::ICFGenKbSecFormObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorSecFormId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readSecFormByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecFormObj* obj = readSecForm( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::readSecFormByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* dict;
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbSecFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>();
			cfcore::ICFGenKbSecFormObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbSecFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecFormObj* realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbSecFormByClusterIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::readSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormBySecAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* dict;
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* oldDict;
		if( indexBySecAppIdx == NULL ) {
			indexBySecAppIdx = new std::map< cfcore::CFGenKbSecFormBySecAppIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>*>();
		}
		auto searchIndexBySecAppIdx = indexBySecAppIdx->find( key );
		if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
			oldDict = searchIndexBySecAppIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>();
			cfcore::ICFGenKbSecFormObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedBySecAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId );
			cfcore::CFGenKbSecFormBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecFormObj* realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySecAppIdx->erase( searchIndexBySecAppIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySecAppIdx->insert( std::map< cfcore::CFGenKbSecFormBySecAppIdxKey,
				std::map< cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecFormObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readSecFormByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName, bool forceRead )
	{
		static const std::string S_ProcName( "readSecFormByUJEEServletIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
				cfcore::ICFGenKbSecFormObj*>();
		}
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
			if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUJEEServletIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecFormBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUJEEServletIdx->insert( std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::ICFGenKbSecFormObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecFormObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readSecFormByLookupUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecFormByLookupUJEEServletIdx" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
				cfcore::ICFGenKbSecFormObj*>();
		}
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
			if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
				obj = searchIndexByUJEEServletIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecFormBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByLookupUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUJEEServletIdx->insert( std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey, cfcore::ICFGenKbSecFormObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecFormObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readCachedSecForm( cfcore::CFGenKbSecFormPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecForm" );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readCachedSecFormByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId )
	{
		static const std::string S_ProcName( "readCachedSecFormByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecFormObj* obj = readCachedSecForm( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::readCachedSecFormByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecFormObj*> arr;
		cfcore::CFGenKbSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::readCachedSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readCachedSecFormBySecAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecFormObj*> arr;
		cfcore::CFGenKbSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* dict;
		if( indexBySecAppIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySecAppIdx = indexBySecAppIdx->find( key );
		if( searchIndexBySecAppIdx != indexBySecAppIdx->end() ) {
			dict = searchIndexBySecAppIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecFormObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecFormObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecFormBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readCachedSecFormByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		static const std::string S_ProcName( "readCachedSecFormByUJEEServletIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
				cfcore::ICFGenKbSecFormObj*>();
		}
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
		if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUJEEServletIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecFormBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::readCachedSecFormByLookupUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecFormByLookupUJEEServletIdx" );
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
				cfcore::ICFGenKbSecFormObj*>();
		}
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		cfcore::ICFGenKbSecFormObj* realized = NULL;
		auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
		if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
			obj = searchIndexByUJEEServletIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecFormBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::pageSecFormByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageSecFormByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecFormByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbSecFormObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorSecFormId );
		std::vector<cfcore::ICFGenKbSecFormObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecFormBuff* buff;
		cfcore::ICFGenKbSecFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecFormTableObj::pageSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const int64_t* priorClusterId,
			const int32_t* priorSecFormId )
	{
		static const std::string S_ProcName( "pageSecFormBySecAppIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecFormBySecAppIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		cfcore::ICFGenKbSecFormObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecFormBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->pageBuffBySecAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				priorClusterId,
				priorSecFormId );
		std::vector<cfcore::ICFGenKbSecFormObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecFormBuff* buff;
		cfcore::ICFGenKbSecFormObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormTableObj::updateSecForm( cfcore::ICFGenKbSecFormEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecForm" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecFormObj* obj = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecFormBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->updateSecForm( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecFormBuff*>( Obj->getSecFormBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecFormObj*>( obj->realize() );
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

	void CFGenKbSecFormTableObj::deleteSecForm( cfcore::ICFGenKbSecFormEditObj* Obj ) {
		cfcore::ICFGenKbSecFormObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecForm( schema->getAuthorization(),
			obj->getSecFormBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecFormId() );
	}

	void CFGenKbSecFormTableObj::deleteSecFormByIdIdx( const int64_t ClusterId,
			const int32_t SecFormId )
	{
		cfcore::CFGenKbSecFormPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecFormId( SecFormId );
		cfcore::ICFGenKbSecFormObj* obj = readSecForm( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecFormEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecFormEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecFormEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecFormTableObj::deleteSecFormByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbSecFormTableObj::deleteSecFormBySecAppIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormBySecAppIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId );
		deepDisposeBySecAppIdx( ClusterId,
			SecAppId );
	}

	void CFGenKbSecFormTableObj::deleteSecFormByUJEEServletIdx( const int64_t ClusterId,
			const int32_t SecAppId,
			const std::string& JEEServletMapName )
	{
		if( indexByUJEEServletIdx == NULL ) {
			indexByUJEEServletIdx = new std::map< cfcore::CFGenKbSecFormByUJEEServletIdxKey,
				cfcore::ICFGenKbSecFormObj*>();
		}
		cfcore::CFGenKbSecFormByUJEEServletIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredSecAppId( SecAppId );
		key.setRequiredJEEServletMapName( JEEServletMapName );
		cfcore::ICFGenKbSecFormObj* obj = NULL;
		auto searchIndexByUJEEServletIdx = indexByUJEEServletIdx->find( key );
		if( searchIndexByUJEEServletIdx != indexByUJEEServletIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormByUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->deleteSecFormByUJEEServletIdx( schema->getAuthorization(),
				ClusterId,
				SecAppId,
				JEEServletMapName );
		}
		deepDisposeByUJEEServletIdx( ClusterId,
			SecAppId,
			JEEServletMapName );
	}

	void CFGenKbSecFormTableObj::reallyDetachFromIndexesSecForm( cfcore::ICFGenKbSecFormObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecForm" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecFormObj* obj = Obj;
		cfcore::CFGenKbSecFormPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecFormObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecFormByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapClusterIdx = searchClusterIdx->second;
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

			if( indexBySecAppIdx != NULL ) {
				cfcore::CFGenKbSecFormBySecAppIdxKey keySecAppIdx;
				keySecAppIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keySecAppIdx.setRequiredSecAppId( obj->getRequiredSecAppId() );
				auto searchSecAppIdx = indexBySecAppIdx->find( keySecAppIdx );
				if( searchSecAppIdx != indexBySecAppIdx->end() ) {
					std::map<cfcore::CFGenKbSecFormPKey, cfcore::ICFGenKbSecFormObj*>* mapSecAppIdx = searchSecAppIdx->second;
					if( mapSecAppIdx != NULL ) {
						auto removalProbe = mapSecAppIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSecAppIdx->end() ) {
							mapSecAppIdx->erase( removalProbe );
							if( mapSecAppIdx->empty() ) {
								delete mapSecAppIdx;
								mapSecAppIdx = NULL;
								indexBySecAppIdx->erase( searchSecAppIdx );
							}
						}
					}
				}
			}

			if( indexByUJEEServletIdx != NULL ) {
				cfcore::CFGenKbSecFormByUJEEServletIdxKey keyUJEEServletIdx;
				keyUJEEServletIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUJEEServletIdx.setRequiredSecAppId( obj->getRequiredSecAppId() );
				keyUJEEServletIdx.setRequiredJEEServletMapName( obj->getRequiredJEEServletMapName() );
				auto removalProbe = indexByUJEEServletIdx->find( keyUJEEServletIdx );
				if( removalProbe != indexByUJEEServletIdx->end() ) {
					indexByUJEEServletIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
