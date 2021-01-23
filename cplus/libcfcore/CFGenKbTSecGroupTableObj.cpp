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

	const std::string CFGenKbTSecGroupTableObj::CLASS_NAME( "CFGenKbTSecGroupTableObj" );
	const std::string CFGenKbTSecGroupTableObj::TABLE_NAME( "TSecGroup" );
	const std::string CFGenKbTSecGroupTableObj::TABLE_DBNAME( "TSecGrp" );

	CFGenKbTSecGroupTableObj::CFGenKbTSecGroupTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>();
		allTSecGroup = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
			std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>();
		indexByTenantVisIdx = new std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
			std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>();
		indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
			cfcore::ICFGenKbTSecGroupObj*>();
	}

	CFGenKbTSecGroupTableObj::CFGenKbTSecGroupTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>();
		allTSecGroup = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
			std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>();
		indexByTenantVisIdx = new std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
			std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>();
		indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
			cfcore::ICFGenKbTSecGroupObj*>();
	}

	CFGenKbTSecGroupTableObj::~CFGenKbTSecGroupTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByTenantVisIdx != NULL ) {
			delete indexByTenantVisIdx;
			indexByTenantVisIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbTSecGroupObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGroupTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbTSecGroupTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbTSecGroupTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbTSecGroupTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbTSecGroupTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbTSecGroupTableObj::minimizeMemory() {
		if( allTSecGroup != NULL ) {
			allTSecGroup->clear();
			delete allTSecGroup;
			allTSecGroup = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* curByTenantIdx = NULL;
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
		if( indexByTenantVisIdx != NULL ) {
			std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* >::iterator iterByTenantVisIdx = indexByTenantVisIdx->begin();
			std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* >::iterator endByTenantVisIdx = indexByTenantVisIdx->end();
			std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* curByTenantVisIdx = NULL;
			while( iterByTenantVisIdx != endByTenantVisIdx ) {
				curByTenantVisIdx = iterByTenantVisIdx->second;
				if( curByTenantVisIdx != NULL ) {
					curByTenantVisIdx->clear();
					delete curByTenantVisIdx;
					curByTenantVisIdx = NULL;
					iterByTenantVisIdx->second = NULL;
				}
				iterByTenantVisIdx ++;
			}
			indexByTenantVisIdx->clear();
		}
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbTSecGroupObj* cur = NULL;
			cfcore::ICFGenKbTSecGroupEditObj* edit = NULL;
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

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::newInstance() {
		cfcore::ICFGenKbTSecGroupObj* inst = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( new CFGenKbTSecGroupObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupTableObj::newEditInstance( cfcore::ICFGenKbTSecGroupObj* orig ) {
		cfcore::ICFGenKbTSecGroupEditObj* edit = dynamic_cast<cfcore::ICFGenKbTSecGroupEditObj*>( new CFGenKbTSecGroupEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::realizeTSecGroup( cfcore::ICFGenKbTSecGroupObj* Obj ) {
		static const std::string S_ProcName( "realizeTSecGroup" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbTSecGroupObj* obj = Obj;
		cfcore::ICFGenKbTSecGroupObj* existingObj = NULL;
		cfcore::CFGenKbTSecGroupPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbTSecGroupObj* keepObj = NULL;
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
				cfcore::CFGenKbTSecGroupByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByTenantVisIdx != NULL ) {
				cfcore::CFGenKbTSecGroupByTenantVisIdxKey keyTenantVisIdx;
				keyTenantVisIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyTenantVisIdx.setRequiredIsVisible( keepObj->getRequiredIsVisible() );
				auto searchTenantVisIdx = indexByTenantVisIdx->find( keyTenantVisIdx );
				if( searchTenantVisIdx != indexByTenantVisIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantVisIdx = searchTenantVisIdx->second;
					if( mapTenantVisIdx != NULL ) {
						auto removalProbe = mapTenantVisIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantVisIdx->end() ) {
							mapTenantVisIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfcore::CFGenKbTSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbTSecGroupObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbTSecGroupByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByTenantVisIdx != NULL ) {
				static const std::string S_ATenantVisIdxObj( "aTenantVisIdxObj" );
				cfcore::ICFGenKbTSecGroupObj* aTenantVisIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( keepObj );
				if( aTenantVisIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantVisIdxObj );
				}
				cfcore::CFGenKbTSecGroupByTenantVisIdxKey keyTenantVisIdx;
				keyTenantVisIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyTenantVisIdx.setRequiredIsVisible( keepObj->getRequiredIsVisible() );
				auto searchIndexByTenantVisIdx = indexByTenantVisIdx->find( keyTenantVisIdx );
				if( searchIndexByTenantVisIdx != indexByTenantVisIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantVisIdx = searchIndexByTenantVisIdx->second;
					if( mapTenantVisIdx != NULL ) {
						mapTenantVisIdx->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), aTenantVisIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfcore::ICFGenKbTSecGroupObj* aUNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfcore::CFGenKbTSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allTSecGroup != NULL ) {
				allTSecGroup->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbTSecGroupObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbTSecGroupByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByTenantVisIdx != NULL ) {
				static const std::string S_ATenantVisIdxObj( "aTenantVisIdxObj" );
				cfcore::ICFGenKbTSecGroupObj* aTenantVisIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( keepObj );
				if( aTenantVisIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantVisIdxObj );
				}
				cfcore::CFGenKbTSecGroupByTenantVisIdxKey keyTenantVisIdx;
				keyTenantVisIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyTenantVisIdx.setRequiredIsVisible( keepObj->getRequiredIsVisible() );
				auto searchIndexByTenantVisIdx = indexByTenantVisIdx->find( keyTenantVisIdx );
				if( searchIndexByTenantVisIdx != indexByTenantVisIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantVisIdx = searchIndexByTenantVisIdx->second;
					if( mapTenantVisIdx != NULL ) {
						mapTenantVisIdx->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), aTenantVisIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfcore::ICFGenKbTSecGroupObj* aUNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfcore::CFGenKbTSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allTSecGroup != NULL ) {
				allTSecGroup->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbTSecGroupTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbTSecGroupObj*> list;
		cfcore::ICFGenKbTSecGroupObj* existingObj = readCachedTSecGroupByIdIdx( TenantId,
				TSecGroupId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbTSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->reallyDeepDisposeTSecGroup( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGroupTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbTSecGroupObj*> list;
		std::vector<cfcore::ICFGenKbTSecGroupObj*> matchesFound = readCachedTSecGroupByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbTSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->reallyDeepDisposeTSecGroup( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGroupTableObj::deepDisposeByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible ) {
		static const std::string S_ProcName( "deepDisposeByTenantVisIdx" );
		std::vector<cfcore::ICFGenKbTSecGroupObj*> list;
		std::vector<cfcore::ICFGenKbTSecGroupObj*> matchesFound = readCachedTSecGroupByTenantVisIdx( TenantId,
				IsVisible );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbTSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->reallyDeepDisposeTSecGroup( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGroupTableObj::deepDisposeByUNameIdx( const int64_t TenantId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfcore::ICFGenKbTSecGroupObj*> list;
		cfcore::ICFGenKbTSecGroupObj* existingObj = readCachedTSecGroupByUNameIdx( TenantId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbTSecGroupObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->reallyDeepDisposeTSecGroup( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGroupTableObj::reallyDeepDisposeTSecGroup( cfcore::ICFGenKbTSecGroupObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTSecGroup" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbTSecGroupObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->deepDisposeByIncludeIdx( obj->getRequiredTenantId(),
			obj->getRequiredTSecGroupId() );
		dynamic_cast<cfcore::CFGenKbTSecGrpMembTableObj*>( schema->getTSecGrpMembTableObj() )->deepDisposeByGroupIdx( obj->getRequiredTenantId(),
			obj->getRequiredTSecGroupId() );
		dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->deepDisposeByGroupIdx( obj->getRequiredTenantId(),
			obj->getRequiredTSecGroupId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->reallyDetachFromIndexesTSecGroup( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::createTSecGroup( cfcore::ICFGenKbTSecGroupEditObj* Obj ) {
		static const std::string S_ProcName( "createTSecGroup" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTSecGroupObj* obj = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbTSecGroupBuff* buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->createTSecGroup(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
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

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readTSecGroup( cfcore::CFGenKbTSecGroupPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTSecGroup" );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		cfcore::ICFGenKbTSecGroupObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTSecGroupBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredTSecGroupId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
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

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::lockTSecGroup( cfcore::CFGenKbTSecGroupPKey* pkey ) {
		static const std::string S_ProcName( "lockTSecGroup" );
		cfcore::ICFGenKbTSecGroupObj* locked = NULL;
		cfcore::CFGenKbTSecGroupBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTSecGroupTableObj::readAllTSecGroup( bool forceRead ) {
		static const std::string S_ProcName( "readAllTSecGroup" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTSecGroupObj* realized = NULL;
		if( forceRead || ( allTSecGroup == NULL ) ) {
			std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* map = new std::map<cfcore::CFGenKbTSecGroupPKey,cfcore::ICFGenKbTSecGroupObj*>();
			allTSecGroup = map;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbTSecGroupBuff* buff = NULL;
			cfcore::ICFGenKbTSecGroupObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTSecGroup->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTSecGroup->size();
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
		auto valIter = allTSecGroup->begin();
		size_t idx = 0;
		while( valIter != allTSecGroup->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readTSecGroupByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId, bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGroupByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGroupPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredTSecGroupId( TSecGroupId );
		cfcore::ICFGenKbTSecGroupObj* obj = readTSecGroup( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTSecGroupTableObj::readTSecGroupByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGroupByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGroupByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* dict;
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>();
			cfcore::ICFGenKbTSecGroupObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbTSecGroupBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbTSecGroupObj* realized = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbTSecGroupByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTSecGroupTableObj::readTSecGroupByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGroupByTenantVisIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIsVisible( IsVisible );
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* dict;
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* oldDict;
		if( indexByTenantVisIdx == NULL ) {
			indexByTenantVisIdx = new std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>*>();
		}
		auto searchIndexByTenantVisIdx = indexByTenantVisIdx->find( key );
		if( searchIndexByTenantVisIdx != indexByTenantVisIdx->end() ) {
			oldDict = searchIndexByTenantVisIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>();
			cfcore::ICFGenKbTSecGroupObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGroupBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readDerivedByTenantVisIdx( schema->getAuthorization(),
				TenantId,
				IsVisible );
			cfcore::CFGenKbTSecGroupBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbTSecGroupObj* realized = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantVisIdx->erase( searchIndexByTenantVisIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantVisIdx->insert( std::map< cfcore::CFGenKbTSecGroupByTenantVisIdxKey,
				std::map< cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readTSecGroupByUNameIdx( const int64_t TenantId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGroupByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
				cfcore::ICFGenKbTSecGroupObj*>();
		}
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		cfcore::ICFGenKbTSecGroupObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTSecGroupBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readDerivedByUNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::ICFGenKbTSecGroupObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readTSecGroupByLookupUNameIdx( const int64_t TenantId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readTSecGroupByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
				cfcore::ICFGenKbTSecGroupObj*>();
		}
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		cfcore::ICFGenKbTSecGroupObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTSecGroupBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey, cfcore::ICFGenKbTSecGroupObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readCachedTSecGroup( cfcore::CFGenKbTSecGroupPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTSecGroup" );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		cfcore::ICFGenKbTSecGroupObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readCachedTSecGroupByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readCachedTSecGroupByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGroupPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredTSecGroupId( TSecGroupId );
		cfcore::ICFGenKbTSecGroupObj* obj = readCachedTSecGroup( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTSecGroupTableObj::readCachedTSecGroupByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedTSecGroupByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
		cfcore::CFGenKbTSecGroupByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbTSecGroupObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTSecGroupTableObj::readCachedTSecGroupByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible )
	{
		static const std::string S_ProcName( "readCachedTSecGroupByTenantVisIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
		cfcore::CFGenKbTSecGroupByTenantVisIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIsVisible( IsVisible );
		std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* dict;
		if( indexByTenantVisIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantVisIdx = indexByTenantVisIdx->find( key );
		if( searchIndexByTenantVisIdx != indexByTenantVisIdx->end() ) {
			dict = searchIndexByTenantVisIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbTSecGroupObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbTSecGroupObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readCachedTSecGroupByUNameIdx( const int64_t TenantId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedTSecGroupByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
				cfcore::ICFGenKbTSecGroupObj*>();
		}
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::readCachedTSecGroupByLookupUNameIdx( const int64_t TenantId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedTSecGroupByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
				cfcore::ICFGenKbTSecGroupObj*>();
		}
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		cfcore::ICFGenKbTSecGroupObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupTableObj::updateTSecGroup( cfcore::ICFGenKbTSecGroupEditObj* Obj ) {
		static const std::string S_ProcName( "updateTSecGroup" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTSecGroupObj* obj = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbTSecGroupBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->updateTSecGroup( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( Obj->getTSecGroupBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( obj->realize() );
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

	void CFGenKbTSecGroupTableObj::deleteTSecGroup( cfcore::ICFGenKbTSecGroupEditObj* Obj ) {
		cfcore::ICFGenKbTSecGroupObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->deleteTSecGroup( schema->getAuthorization(),
			obj->getTSecGroupBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredTSecGroupId() );
	}

	void CFGenKbTSecGroupTableObj::deleteTSecGroupByIdIdx( const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		cfcore::CFGenKbTSecGroupPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredTSecGroupId( TSecGroupId );
		cfcore::ICFGenKbTSecGroupObj* obj = readTSecGroup( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbTSecGroupEditObj* editObj = dynamic_cast<cfcore::ICFGenKbTSecGroupEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbTSecGroupEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbTSecGroupTableObj::deleteTSecGroupByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->deleteTSecGroupByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbTSecGroupTableObj::deleteTSecGroupByTenantVisIdx( const int64_t TenantId,
			const bool IsVisible )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->deleteTSecGroupByTenantVisIdx( schema->getAuthorization(),
				TenantId,
				IsVisible );
		deepDisposeByTenantVisIdx( TenantId,
			IsVisible );
	}

	void CFGenKbTSecGroupTableObj::deleteTSecGroupByUNameIdx( const int64_t TenantId,
			const std::string& Name )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTSecGroupByUNameIdxKey,
				cfcore::ICFGenKbTSecGroupObj*>();
		}
		cfcore::CFGenKbTSecGroupByUNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbTSecGroupObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->deleteTSecGroupByUNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->deleteTSecGroupByUNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
		}
		deepDisposeByUNameIdx( TenantId,
			Name );
	}

	void CFGenKbTSecGroupTableObj::reallyDetachFromIndexesTSecGroup( cfcore::ICFGenKbTSecGroupObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTSecGroup" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbTSecGroupObj* obj = Obj;
		cfcore::CFGenKbTSecGroupPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbTSecGroupObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbTSecGroupByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByTenantVisIdx != NULL ) {
				cfcore::CFGenKbTSecGroupByTenantVisIdxKey keyTenantVisIdx;
				keyTenantVisIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyTenantVisIdx.setRequiredIsVisible( obj->getRequiredIsVisible() );
				auto searchTenantVisIdx = indexByTenantVisIdx->find( keyTenantVisIdx );
				if( searchTenantVisIdx != indexByTenantVisIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGroupPKey, cfcore::ICFGenKbTSecGroupObj*>* mapTenantVisIdx = searchTenantVisIdx->second;
					if( mapTenantVisIdx != NULL ) {
						auto removalProbe = mapTenantVisIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapTenantVisIdx->end() ) {
							mapTenantVisIdx->erase( removalProbe );
							if( mapTenantVisIdx->empty() ) {
								delete mapTenantVisIdx;
								mapTenantVisIdx = NULL;
								indexByTenantVisIdx->erase( searchTenantVisIdx );
							}
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfcore::CFGenKbTSecGroupByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
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
