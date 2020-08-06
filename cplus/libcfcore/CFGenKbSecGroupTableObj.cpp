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

	const std::string CFGenKbSecGroupTableObj::CLASS_NAME( "CFGenKbSecGroupTableObj" );
	const std::string CFGenKbSecGroupTableObj::TABLE_NAME( "SecGroup" );
	const std::string CFGenKbSecGroupTableObj::TABLE_DBNAME( "SecGrp" );

	CFGenKbSecGroupTableObj::CFGenKbSecGroupTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>();
		allSecGroup = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>();
		indexByClusterVisIdx = new std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
			std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>();
		indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
			cfcore::ICFGenKbSecGroupObj*>();
	}

	CFGenKbSecGroupTableObj::CFGenKbSecGroupTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>();
		allSecGroup = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
			std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>();
		indexByClusterVisIdx = new std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
			std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>();
		indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
			cfcore::ICFGenKbSecGroupObj*>();
	}

	CFGenKbSecGroupTableObj::~CFGenKbSecGroupTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByClusterVisIdx != NULL ) {
			delete indexByClusterVisIdx;
			indexByClusterVisIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGroupObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGroupTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecGroupTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecGroupTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecGroupTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecGroupTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecGroupTableObj::minimizeMemory() {
		if( allSecGroup != NULL ) {
			allSecGroup->clear();
			delete allSecGroup;
			allSecGroup = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* curByClusterIdx = NULL;
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
		if( indexByClusterVisIdx != NULL ) {
			std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* >::iterator iterByClusterVisIdx = indexByClusterVisIdx->begin();
			std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* >::iterator endByClusterVisIdx = indexByClusterVisIdx->end();
			std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* curByClusterVisIdx = NULL;
			while( iterByClusterVisIdx != endByClusterVisIdx ) {
				curByClusterVisIdx = iterByClusterVisIdx->second;
				if( curByClusterVisIdx != NULL ) {
					curByClusterVisIdx->clear();
					delete curByClusterVisIdx;
					curByClusterVisIdx = NULL;
					iterByClusterVisIdx->second = NULL;
				}
				iterByClusterVisIdx ++;
			}
			indexByClusterVisIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecGroupObj* cur = NULL;
			cfcore::ICFGenKbSecGroupEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::newInstance() {
		cfcore::ICFGenKbSecGroupObj* inst = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( new CFGenKbSecGroupObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupTableObj::newEditInstance( cfcore::ICFGenKbSecGroupObj* orig ) {
		cfcore::ICFGenKbSecGroupEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecGroupEditObj*>( new CFGenKbSecGroupEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::realizeSecGroup( cfcore::ICFGenKbSecGroupObj* Obj ) {
		static const std::string S_ProcName( "realizeSecGroup" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGroupObj* obj = Obj;
		cfcore::ICFGenKbSecGroupObj* existingObj = NULL;
		cfcore::CFGenKbSecGroupPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecGroupObj* keepObj = NULL;
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
				cfcore::CFGenKbSecGroupByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByClusterVisIdx != NULL ) {
				cfcore::CFGenKbSecGroupByClusterVisIdxKey keyClusterVisIdx;
				keyClusterVisIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyClusterVisIdx.setRequiredIsVisible( keepObj->getRequiredIsVisible() );
				auto searchClusterVisIdx = indexByClusterVisIdx->find( keyClusterVisIdx );
				if( searchClusterVisIdx != indexByClusterVisIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterVisIdx = searchClusterVisIdx->second;
					if( mapClusterVisIdx != NULL ) {
						auto removalProbe = mapClusterVisIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterVisIdx->end() ) {
							mapClusterVisIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfcore::CFGenKbSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGroupObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGroupByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByClusterVisIdx != NULL ) {
				static const std::string S_AClusterVisIdxObj( "aClusterVisIdxObj" );
				cfcore::ICFGenKbSecGroupObj* aClusterVisIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( keepObj );
				if( aClusterVisIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterVisIdxObj );
				}
				cfcore::CFGenKbSecGroupByClusterVisIdxKey keyClusterVisIdx;
				keyClusterVisIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyClusterVisIdx.setRequiredIsVisible( keepObj->getRequiredIsVisible() );
				auto searchIndexByClusterVisIdx = indexByClusterVisIdx->find( keyClusterVisIdx );
				if( searchIndexByClusterVisIdx != indexByClusterVisIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterVisIdx = searchIndexByClusterVisIdx->second;
					if( mapClusterVisIdx != NULL ) {
						mapClusterVisIdx->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), aClusterVisIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfcore::ICFGenKbSecGroupObj* aUNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfcore::CFGenKbSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::ICFGenKbSecGroupObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allSecGroup != NULL ) {
				allSecGroup->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecGroupObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecGroupByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByClusterVisIdx != NULL ) {
				static const std::string S_AClusterVisIdxObj( "aClusterVisIdxObj" );
				cfcore::ICFGenKbSecGroupObj* aClusterVisIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( keepObj );
				if( aClusterVisIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterVisIdxObj );
				}
				cfcore::CFGenKbSecGroupByClusterVisIdxKey keyClusterVisIdx;
				keyClusterVisIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyClusterVisIdx.setRequiredIsVisible( keepObj->getRequiredIsVisible() );
				auto searchIndexByClusterVisIdx = indexByClusterVisIdx->find( keyClusterVisIdx );
				if( searchIndexByClusterVisIdx != indexByClusterVisIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterVisIdx = searchIndexByClusterVisIdx->second;
					if( mapClusterVisIdx != NULL ) {
						mapClusterVisIdx->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), aClusterVisIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfcore::ICFGenKbSecGroupObj* aUNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfcore::CFGenKbSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::ICFGenKbSecGroupObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allSecGroup != NULL ) {
				allSecGroup->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecGroupTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecGroupObj*> list;
		cfcore::ICFGenKbSecGroupObj* existingObj = readCachedSecGroupByIdIdx( ClusterId,
				SecGroupId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->reallyDeepDisposeSecGroup( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbSecGroupObj*> list;
		std::vector<cfcore::ICFGenKbSecGroupObj*> matchesFound = readCachedSecGroupByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->reallyDeepDisposeSecGroup( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupTableObj::deepDisposeByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible ) {
		static const std::string S_ProcName( "deepDisposeByClusterVisIdx" );
		std::vector<cfcore::ICFGenKbSecGroupObj*> list;
		std::vector<cfcore::ICFGenKbSecGroupObj*> matchesFound = readCachedSecGroupByClusterVisIdx( ClusterId,
				IsVisible );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->reallyDeepDisposeSecGroup( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupTableObj::deepDisposeByUNameIdx( const int64_t ClusterId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfcore::ICFGenKbSecGroupObj*> list;
		cfcore::ICFGenKbSecGroupObj* existingObj = readCachedSecGroupByUNameIdx( ClusterId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->reallyDeepDisposeSecGroup( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecGroupTableObj::reallyDeepDisposeSecGroup( cfcore::ICFGenKbSecGroupObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecGroup" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecGroupObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->deepDisposeByGroupIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGroupId() );
		dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->deepDisposeByIncludeIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGroupId() );
		dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->deepDisposeByGroupIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGroupId() );
		dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->deepDisposeByGroupIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGroupId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->reallyDetachFromIndexesSecGroup( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::createSecGroup( cfcore::ICFGenKbSecGroupEditObj* Obj ) {
		static const std::string S_ProcName( "createSecGroup" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGroupObj* obj = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGroupBuff* buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->createSecGroup(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readSecGroup( cfcore::CFGenKbSecGroupPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGroup" );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		cfcore::ICFGenKbSecGroupObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGroupBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecGroupId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::lockSecGroup( cfcore::CFGenKbSecGroupPKey* pkey ) {
		static const std::string S_ProcName( "lockSecGroup" );
		cfcore::ICFGenKbSecGroupObj* locked = NULL;
		cfcore::CFGenKbSecGroupBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbSecGroupTableObj::readAllSecGroup( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecGroup" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGroupObj* realized = NULL;
		if( forceRead || ( allSecGroup == NULL ) ) {
			std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* map = new std::map<cfcore::CFGenKbSecGroupPKey,cfcore::ICFGenKbSecGroupObj*>();
			allSecGroup = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecGroupBuff* buff = NULL;
			cfcore::ICFGenKbSecGroupObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecGroup->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecGroup->size();
		std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
		auto valIter = allSecGroup->begin();
		size_t idx = 0;
		while( valIter != allSecGroup->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readSecGroupByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGroupId( SecGroupId );
		cfcore::ICFGenKbSecGroupObj* obj = readSecGroup( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbSecGroupTableObj::readSecGroupByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* dict;
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>();
			cfcore::ICFGenKbSecGroupObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbSecGroupBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGroupObj* realized = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbSecGroupByClusterIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbSecGroupTableObj::readSecGroupByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupByClusterVisIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupByClusterVisIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIsVisible( IsVisible );
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* dict;
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* oldDict;
		if( indexByClusterVisIdx == NULL ) {
			indexByClusterVisIdx = new std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>*>();
		}
		auto searchIndexByClusterVisIdx = indexByClusterVisIdx->find( key );
		if( searchIndexByClusterVisIdx != indexByClusterVisIdx->end() ) {
			oldDict = searchIndexByClusterVisIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>();
			cfcore::ICFGenKbSecGroupObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecGroupBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readDerivedByClusterVisIdx( schema->getAuthorization(),
				ClusterId,
				IsVisible );
			cfcore::CFGenKbSecGroupBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecGroupObj* realized = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterVisIdx->erase( searchIndexByClusterVisIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterVisIdx->insert( std::map< cfcore::CFGenKbSecGroupByClusterVisIdxKey,
				std::map< cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readSecGroupByUNameIdx( const int64_t ClusterId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readSecGroupByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
				cfcore::ICFGenKbSecGroupObj*>();
		}
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		cfcore::ICFGenKbSecGroupObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGroupBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readDerivedByUNameIdx( schema->getAuthorization(),
				ClusterId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::ICFGenKbSecGroupObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readSecGroupByLookupUNameIdx( const int64_t ClusterId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecGroupByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
				cfcore::ICFGenKbSecGroupObj*>();
		}
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		cfcore::ICFGenKbSecGroupObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecGroupBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				ClusterId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbSecGroupByUNameIdxKey, cfcore::ICFGenKbSecGroupObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readCachedSecGroup( cfcore::CFGenKbSecGroupPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecGroup" );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		cfcore::ICFGenKbSecGroupObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readCachedSecGroupByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		static const std::string S_ProcName( "readCachedSecGroupByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecGroupPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGroupId( SecGroupId );
		cfcore::ICFGenKbSecGroupObj* obj = readCachedSecGroup( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbSecGroupTableObj::readCachedSecGroupByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecGroupByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
		cfcore::CFGenKbSecGroupByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGroupObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbSecGroupTableObj::readCachedSecGroupByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible )
	{
		static const std::string S_ProcName( "readCachedSecGroupByClusterVisIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
		cfcore::CFGenKbSecGroupByClusterVisIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredIsVisible( IsVisible );
		std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* dict;
		if( indexByClusterVisIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterVisIdx = indexByClusterVisIdx->find( key );
		if( searchIndexByClusterVisIdx != indexByClusterVisIdx->end() ) {
			dict = searchIndexByClusterVisIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecGroupObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecGroupObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readCachedSecGroupByUNameIdx( const int64_t ClusterId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedSecGroupByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
				cfcore::ICFGenKbSecGroupObj*>();
		}
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::readCachedSecGroupByLookupUNameIdx( const int64_t ClusterId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecGroupByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
				cfcore::ICFGenKbSecGroupObj*>();
		}
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		cfcore::ICFGenKbSecGroupObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupTableObj::updateSecGroup( cfcore::ICFGenKbSecGroupEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecGroup" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecGroupObj* obj = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecGroupBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->updateSecGroup( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( Obj->getSecGroupBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( obj->realize() );
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

	void CFGenKbSecGroupTableObj::deleteSecGroup( cfcore::ICFGenKbSecGroupEditObj* Obj ) {
		cfcore::ICFGenKbSecGroupObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->deleteSecGroup( schema->getAuthorization(),
			obj->getSecGroupBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecGroupId() );
	}

	void CFGenKbSecGroupTableObj::deleteSecGroupByIdIdx( const int64_t ClusterId,
			const int32_t SecGroupId )
	{
		cfcore::CFGenKbSecGroupPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecGroupId( SecGroupId );
		cfcore::ICFGenKbSecGroupObj* obj = readSecGroup( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecGroupEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecGroupEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecGroupEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecGroupTableObj::deleteSecGroupByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->deleteSecGroupByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbSecGroupTableObj::deleteSecGroupByClusterVisIdx( const int64_t ClusterId,
			const bool IsVisible )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->deleteSecGroupByClusterVisIdx( schema->getAuthorization(),
				ClusterId,
				IsVisible );
		deepDisposeByClusterVisIdx( ClusterId,
			IsVisible );
	}

	void CFGenKbSecGroupTableObj::deleteSecGroupByUNameIdx( const int64_t ClusterId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbSecGroupByUNameIdxKey,
				cfcore::ICFGenKbSecGroupObj*>();
		}
		cfcore::CFGenKbSecGroupByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbSecGroupObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->deleteSecGroupByUNameIdx( schema->getAuthorization(),
				ClusterId,
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->deleteSecGroupByUNameIdx( schema->getAuthorization(),
				ClusterId,
				Name );
		}
		deepDisposeByUNameIdx( ClusterId,
			Name );
	}

	void CFGenKbSecGroupTableObj::reallyDetachFromIndexesSecGroup( cfcore::ICFGenKbSecGroupObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecGroup" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecGroupObj* obj = Obj;
		cfcore::CFGenKbSecGroupPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecGroupObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecGroupByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterIdx = searchClusterIdx->second;
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

			if( indexByClusterVisIdx != NULL ) {
				cfcore::CFGenKbSecGroupByClusterVisIdxKey keyClusterVisIdx;
				keyClusterVisIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyClusterVisIdx.setRequiredIsVisible( obj->getRequiredIsVisible() );
				auto searchClusterVisIdx = indexByClusterVisIdx->find( keyClusterVisIdx );
				if( searchClusterVisIdx != indexByClusterVisIdx->end() ) {
					std::map<cfcore::CFGenKbSecGroupPKey, cfcore::ICFGenKbSecGroupObj*>* mapClusterVisIdx = searchClusterVisIdx->second;
					if( mapClusterVisIdx != NULL ) {
						auto removalProbe = mapClusterVisIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapClusterVisIdx->end() ) {
							mapClusterVisIdx->erase( removalProbe );
							if( mapClusterVisIdx->empty() ) {
								delete mapClusterVisIdx;
								mapClusterVisIdx = NULL;
								indexByClusterVisIdx->erase( searchClusterVisIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfcore::CFGenKbSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
