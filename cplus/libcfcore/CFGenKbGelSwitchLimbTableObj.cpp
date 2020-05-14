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

	const std::string CFGenKbGelSwitchLimbTableObj::CLASS_NAME( "CFGenKbGelSwitchLimbTableObj" );
	const std::string CFGenKbGelSwitchLimbTableObj::TABLE_NAME( "GelSwitchLimb" );
	const std::string CFGenKbGelSwitchLimbTableObj::TABLE_DBNAME( "gellimb" );

	CFGenKbGelSwitchLimbTableObj::CFGenKbGelSwitchLimbTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>();
		allGelSwitchLimb = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
			std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>();
		indexBySwitchIdx = new std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
			std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>();
	}

	CFGenKbGelSwitchLimbTableObj::CFGenKbGelSwitchLimbTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>();
		allGelSwitchLimb = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
			std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>();
		indexBySwitchIdx = new std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
			std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>();
	}

	CFGenKbGelSwitchLimbTableObj::~CFGenKbGelSwitchLimbTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexBySwitchIdx != NULL ) {
			delete indexBySwitchIdx;
			indexBySwitchIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbGelSwitchLimbObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelSwitchLimbTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelSwitchLimbTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelSwitchLimbTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelSwitchLimbTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelSwitchLimbTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelSwitchLimbTableObj::minimizeMemory() {
		if( allGelSwitchLimb != NULL ) {
			allGelSwitchLimb->clear();
			delete allGelSwitchLimb;
			allGelSwitchLimb = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* curByTenantIdx = NULL;
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
		if( indexBySwitchIdx != NULL ) {
			std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* >::iterator iterBySwitchIdx = indexBySwitchIdx->begin();
			std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* >::iterator endBySwitchIdx = indexBySwitchIdx->end();
			std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* curBySwitchIdx = NULL;
			while( iterBySwitchIdx != endBySwitchIdx ) {
				curBySwitchIdx = iterBySwitchIdx->second;
				if( curBySwitchIdx != NULL ) {
					curBySwitchIdx->clear();
					delete curBySwitchIdx;
					curBySwitchIdx = NULL;
					iterBySwitchIdx->second = NULL;
				}
				iterBySwitchIdx ++;
			}
			indexBySwitchIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbGelSwitchLimbObj* cur = NULL;
			cfcore::ICFGenKbGelSwitchLimbEditObj* edit = NULL;
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

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::newInstance() {
		cfcore::ICFGenKbGelSwitchLimbObj* inst = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( new CFGenKbGelSwitchLimbObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbTableObj::newEditInstance( cfcore::ICFGenKbGelSwitchLimbObj* orig ) {
		cfcore::ICFGenKbGelSwitchLimbEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbEditObj*>( new CFGenKbGelSwitchLimbEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::realizeGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbObj* Obj ) {
		static const std::string S_ProcName( "realizeGelSwitchLimb" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelSwitchLimbObj* obj = Obj;
		cfcore::ICFGenKbGelSwitchLimbObj* existingObj = NULL;
		cfcore::CFGenKbGelSwitchLimbPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelSwitchLimbObj* keepObj = NULL;
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
				cfcore::CFGenKbGelSwitchLimbByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySwitchIdx != NULL ) {
				cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey keySwitchIdx;
				keySwitchIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySwitchIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				keySwitchIdx.setRequiredGelInstId( keepObj->getRequiredGelInstId() );
				auto searchSwitchIdx = indexBySwitchIdx->find( keySwitchIdx );
				if( searchSwitchIdx != indexBySwitchIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapSwitchIdx = searchSwitchIdx->second;
					if( mapSwitchIdx != NULL ) {
						auto removalProbe = mapSwitchIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSwitchIdx->end() ) {
							mapSwitchIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelSwitchLimbObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelSwitchLimbByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexBySwitchIdx != NULL ) {
				static const std::string S_ASwitchIdxObj( "aSwitchIdxObj" );
				cfcore::ICFGenKbGelSwitchLimbObj* aSwitchIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( keepObj );
				if( aSwitchIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASwitchIdxObj );
				}
				cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey keySwitchIdx;
				keySwitchIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySwitchIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				keySwitchIdx.setRequiredGelInstId( keepObj->getRequiredGelInstId() );
				auto searchIndexBySwitchIdx = indexBySwitchIdx->find( keySwitchIdx );
				if( searchIndexBySwitchIdx != indexBySwitchIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapSwitchIdx = searchIndexBySwitchIdx->second;
					if( mapSwitchIdx != NULL ) {
						mapSwitchIdx->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), aSwitchIdxObj ) );
					}
				}
			}

			if( allGelSwitchLimb != NULL ) {
				allGelSwitchLimb->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelSwitchLimbObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelSwitchLimbByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexBySwitchIdx != NULL ) {
				static const std::string S_ASwitchIdxObj( "aSwitchIdxObj" );
				cfcore::ICFGenKbGelSwitchLimbObj* aSwitchIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( keepObj );
				if( aSwitchIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASwitchIdxObj );
				}
				cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey keySwitchIdx;
				keySwitchIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keySwitchIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				keySwitchIdx.setRequiredGelInstId( keepObj->getRequiredGelInstId() );
				auto searchIndexBySwitchIdx = indexBySwitchIdx->find( keySwitchIdx );
				if( searchIndexBySwitchIdx != indexBySwitchIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapSwitchIdx = searchIndexBySwitchIdx->second;
					if( mapSwitchIdx != NULL ) {
						mapSwitchIdx->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), aSwitchIdxObj ) );
					}
				}
			}

			if( allGelSwitchLimb != NULL ) {
				allGelSwitchLimb->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbGelSwitchLimbTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> list;
		cfcore::ICFGenKbGelSwitchLimbObj* existingObj = readCachedGelSwitchLimbByPIdx( TenantId,
				GelCacheId,
				GelInstId,
				LimbName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelSwitchLimbObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->reallyDeepDisposeGelSwitchLimb( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSwitchLimbTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> list;
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> matchesFound = readCachedGelSwitchLimbByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSwitchLimbObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->reallyDeepDisposeGelSwitchLimb( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSwitchLimbTableObj::deepDisposeBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeBySwitchIdx" );
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> list;
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> matchesFound = readCachedGelSwitchLimbBySwitchIdx( TenantId,
				GelCacheId,
				GelInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelSwitchLimbObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->reallyDeepDisposeGelSwitchLimb( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelSwitchLimbTableObj::reallyDeepDisposeGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelSwitchLimb" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelSwitchLimbObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->reallyDetachFromIndexesGelSwitchLimb( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::createGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbEditObj* Obj ) {
		static const std::string S_ProcName( "createGelSwitchLimb" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSwitchLimbObj* obj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelSwitchLimbBuff* buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->createGelSwitchLimb(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::readGelSwitchLimb( cfcore::CFGenKbGelSwitchLimbPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelSwitchLimb" );
		cfcore::ICFGenKbGelSwitchLimbObj* obj = NULL;
		cfcore::ICFGenKbGelSwitchLimbObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelSwitchLimbBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId(),
			pkey->getRequiredLimbName() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::lockGelSwitchLimb( cfcore::CFGenKbGelSwitchLimbPKey* pkey ) {
		static const std::string S_ProcName( "lockGelSwitchLimb" );
		cfcore::ICFGenKbGelSwitchLimbObj* locked = NULL;
		cfcore::CFGenKbGelSwitchLimbBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchLimbTableObj::readAllGelSwitchLimb( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelSwitchLimb" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSwitchLimbObj* realized = NULL;
		if( forceRead || ( allGelSwitchLimb == NULL ) ) {
			std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* map = new std::map<cfcore::CFGenKbGelSwitchLimbPKey,cfcore::ICFGenKbGelSwitchLimbObj*>();
			allGelSwitchLimb = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelSwitchLimbBuff* buff = NULL;
			cfcore::ICFGenKbGelSwitchLimbObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelSwitchLimb->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelSwitchLimb->size();
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
		auto valIter = allGelSwitchLimb->begin();
		size_t idx = 0;
		while( valIter != allGelSwitchLimb->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::readGelSwitchLimbByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName, bool forceRead )
	{
		static const std::string S_ProcName( "readGelSwitchLimbByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSwitchLimbPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		pkey.setRequiredLimbName( LimbName );
		cfcore::ICFGenKbGelSwitchLimbObj* obj = readGelSwitchLimb( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchLimbTableObj::readGelSwitchLimbByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSwitchLimbByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* dict;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>();
			cfcore::ICFGenKbGelSwitchLimbObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelSwitchLimbBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSwitchLimbObj* realized = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelSwitchLimbByTenantIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchLimbTableObj::readGelSwitchLimbBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelSwitchLimbBySwitchIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* dict;
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* oldDict;
		if( indexBySwitchIdx == NULL ) {
			indexBySwitchIdx = new std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>*>();
		}
		auto searchIndexBySwitchIdx = indexBySwitchIdx->find( key );
		if( searchIndexBySwitchIdx != indexBySwitchIdx->end() ) {
			oldDict = searchIndexBySwitchIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>();
			cfcore::ICFGenKbGelSwitchLimbObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelSwitchLimbBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->readDerivedBySwitchIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId,
				GelInstId );
			cfcore::CFGenKbGelSwitchLimbBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelSwitchLimbObj* realized = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySwitchIdx->erase( searchIndexBySwitchIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySwitchIdx->insert( std::map< cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey,
				std::map< cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::readCachedGelSwitchLimb( cfcore::CFGenKbGelSwitchLimbPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelSwitchLimb" );
		cfcore::ICFGenKbGelSwitchLimbObj* obj = NULL;
		cfcore::ICFGenKbGelSwitchLimbObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::readCachedGelSwitchLimbByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName )
	{
		static const std::string S_ProcName( "readCachedGelSwitchLimbByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelSwitchLimbPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		pkey.setRequiredLimbName( LimbName );
		cfcore::ICFGenKbGelSwitchLimbObj* obj = readCachedGelSwitchLimb( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchLimbTableObj::readCachedGelSwitchLimbByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelSwitchLimbByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
		cfcore::CFGenKbGelSwitchLimbByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSwitchLimbObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchLimbTableObj::readCachedGelSwitchLimbBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelSwitchLimbBySwitchIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
		cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		key.setRequiredGelInstId( GelInstId );
		std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* dict;
		if( indexBySwitchIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySwitchIdx = indexBySwitchIdx->find( key );
		if( searchIndexBySwitchIdx != indexBySwitchIdx->end() ) {
			dict = searchIndexBySwitchIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelSwitchLimbObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbTableObj::updateGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelSwitchLimb" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelSwitchLimbObj* obj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelSwitchLimbBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->updateGelSwitchLimb( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( Obj->getGelSwitchLimbBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( dynamic_cast<cfcore::CFGenKbGelSwitchLimbTableObj*>( schema->getGelSwitchLimbTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( obj->realize() );
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

	void CFGenKbGelSwitchLimbTableObj::deleteGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbEditObj* Obj ) {
		cfcore::ICFGenKbGelSwitchLimbObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->deleteGelSwitchLimb( schema->getAuthorization(),
			obj->getGelSwitchLimbBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId(),
			obj->getRequiredLimbName() );
	}

	void CFGenKbGelSwitchLimbTableObj::deleteGelSwitchLimbByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId,
			const std::string& LimbName )
	{
		cfcore::CFGenKbGelSwitchLimbPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		pkey.setRequiredLimbName( LimbName );
		cfcore::ICFGenKbGelSwitchLimbObj* obj = readGelSwitchLimb( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelSwitchLimbEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelSwitchLimbEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelSwitchLimbTableObj::deleteGelSwitchLimbByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->deleteGelSwitchLimbByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelSwitchLimbTableObj::deleteGelSwitchLimbBySwitchIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->deleteGelSwitchLimbBySwitchIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId,
				GelInstId );
		deepDisposeBySwitchIdx( TenantId,
			GelCacheId,
			GelInstId );
	}

	void CFGenKbGelSwitchLimbTableObj::reallyDetachFromIndexesGelSwitchLimb( cfcore::ICFGenKbGelSwitchLimbObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelSwitchLimb" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelSwitchLimbObj* obj = Obj;
		cfcore::CFGenKbGelSwitchLimbPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelSwitchLimbObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGelSwitchLimbByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexBySwitchIdx != NULL ) {
				cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey keySwitchIdx;
				keySwitchIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keySwitchIdx.setRequiredGelCacheId( obj->getRequiredGelCacheId() );
				keySwitchIdx.setRequiredGelInstId( obj->getRequiredGelInstId() );
				auto searchSwitchIdx = indexBySwitchIdx->find( keySwitchIdx );
				if( searchSwitchIdx != indexBySwitchIdx->end() ) {
					std::map<cfcore::CFGenKbGelSwitchLimbPKey, cfcore::ICFGenKbGelSwitchLimbObj*>* mapSwitchIdx = searchSwitchIdx->second;
					if( mapSwitchIdx != NULL ) {
						auto removalProbe = mapSwitchIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSwitchIdx->end() ) {
							mapSwitchIdx->erase( removalProbe );
							if( mapSwitchIdx->empty() ) {
								delete mapSwitchIdx;
								mapSwitchIdx = NULL;
								indexBySwitchIdx->erase( searchSwitchIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
