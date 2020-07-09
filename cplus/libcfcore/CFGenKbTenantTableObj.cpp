// Description: C++18 Table Object implementation for CFGenKb.

/*
 *	org.msscf.msscf.CFCore
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

	const std::string CFGenKbTenantTableObj::CLASS_NAME( "CFGenKbTenantTableObj" );
	const std::string CFGenKbTenantTableObj::TABLE_NAME( "Tenant" );
	const std::string CFGenKbTenantTableObj::TABLE_DBNAME( "tenant" );

	CFGenKbTenantTableObj::CFGenKbTenantTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>();
		allTenant = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbTenantByClusterIdxKey,
			std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>*>();
		indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
			cfcore::ICFGenKbTenantObj*>();
	}

	CFGenKbTenantTableObj::CFGenKbTenantTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>();
		allTenant = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbTenantByClusterIdxKey,
			std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>*>();
		indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
			cfcore::ICFGenKbTenantObj*>();
	}

	CFGenKbTenantTableObj::~CFGenKbTenantTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByUNameIdx != NULL ) {
			delete indexByUNameIdx;
			indexByUNameIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbTenantObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbTenantTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbTenantTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbTenantTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbTenantTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbTenantTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbTenantTableObj::minimizeMemory() {
		if( allTenant != NULL ) {
			allTenant->clear();
			delete allTenant;
			allTenant = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbTenantByClusterIdxKey,
				std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbTenantByClusterIdxKey,
				std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* curByClusterIdx = NULL;
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
		if( indexByUNameIdx != NULL ) {
			indexByUNameIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbTenantObj* cur = NULL;
			cfcore::ICFGenKbTenantEditObj* edit = NULL;
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::newInstance() {
		cfcore::ICFGenKbTenantObj* inst = dynamic_cast<cfcore::ICFGenKbTenantObj*>( new CFGenKbTenantObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantTableObj::newEditInstance( cfcore::ICFGenKbTenantObj* orig ) {
		cfcore::ICFGenKbTenantEditObj* edit = dynamic_cast<cfcore::ICFGenKbTenantEditObj*>( new CFGenKbTenantEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::realizeTenant( cfcore::ICFGenKbTenantObj* Obj ) {
		static const std::string S_ProcName( "realizeTenant" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbTenantObj* obj = Obj;
		cfcore::ICFGenKbTenantObj* existingObj = NULL;
		cfcore::CFGenKbTenantPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbTenantObj* keepObj = NULL;
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
				cfcore::CFGenKbTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				cfcore::CFGenKbTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( keepObj->getRequiredTenantName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbTenantBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbTenantObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbTenantObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfcore::ICFGenKbTenantObj* aUNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbTenantObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfcore::CFGenKbTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( keepObj->getRequiredTenantName() );
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTenantByUNameIdxKey, cfcore::ICFGenKbTenantObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allTenant != NULL ) {
				allTenant->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbTenantObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbTenantObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUNameIdx != NULL ) {
				static const std::string S_AUNameIdxObj( "aUNameIdxObj" );
				cfcore::ICFGenKbTenantObj* aUNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbTenantObj*>( keepObj );
				if( aUNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUNameIdxObj );
				}
				cfcore::CFGenKbTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( keepObj->getRequiredTenantName() );
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTenantByUNameIdxKey, cfcore::ICFGenKbTenantObj* >::value_type( keyUNameIdx, aUNameIdxObj ) );
			}

			if( allTenant != NULL ) {
				allTenant->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbTenantTableObj::deepDisposeByIdIdx( const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbTenantObj*> list;
		cfcore::ICFGenKbTenantObj* existingObj = readCachedTenantByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbTenantObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->reallyDeepDisposeTenant( dynamic_cast<cfcore::ICFGenKbTenantObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTenantTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbTenantObj*> list;
		std::vector<cfcore::ICFGenKbTenantObj*> matchesFound = readCachedTenantByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbTenantObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->reallyDeepDisposeTenant( dynamic_cast<cfcore::ICFGenKbTenantObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTenantTableObj::deepDisposeByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName ) {
		static const std::string S_ProcName( "deepDisposeByUNameIdx" );
		std::vector<cfcore::ICFGenKbTenantObj*> list;
		cfcore::ICFGenKbTenantObj* existingObj = readCachedTenantByUNameIdx( ClusterId,
				TenantName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbTenantObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->reallyDeepDisposeTenant( dynamic_cast<cfcore::ICFGenKbTenantObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTenantTableObj::reallyDeepDisposeTenant( cfcore::ICFGenKbTenantObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTenant" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbTenantObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->deepDisposeByTenantIdx( obj->getRequiredId() );
		cfcore::ICFGenKbTSecGroupObj* objDelIncludedByGroup;
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arrDelIncludedByGroup = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->readCachedTSecGroupByTenantIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbTSecGroupObj*>::iterator iterArrDelIncludedByGroup = arrDelIncludedByGroup.begin();
		std::vector<cfcore::ICFGenKbTSecGroupObj*>::iterator endArrDelIncludedByGroup = arrDelIncludedByGroup.end();
		while( iterArrDelIncludedByGroup != endArrDelIncludedByGroup ) {
			objDelIncludedByGroup = *iterArrDelIncludedByGroup;
			iterArrDelIncludedByGroup ++;
			dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->deepDisposeByIncludeIdx( objDelIncludedByGroup->getRequiredTenantId(),
				objDelIncludedByGroup->getRequiredTSecGroupId() );
		}
		cfcore::ICFGenKbTSecGroupObj* objDelGrpMembs;
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arrDelGrpMembs = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->readCachedTSecGroupByTenantIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbTSecGroupObj*>::iterator iterArrDelGrpMembs = arrDelGrpMembs.begin();
		std::vector<cfcore::ICFGenKbTSecGroupObj*>::iterator endArrDelGrpMembs = arrDelGrpMembs.end();
		while( iterArrDelGrpMembs != endArrDelGrpMembs ) {
			objDelGrpMembs = *iterArrDelGrpMembs;
			iterArrDelGrpMembs ++;
			dynamic_cast<cfcore::CFGenKbTSecGrpMembTableObj*>( schema->getTSecGrpMembTableObj() )->deepDisposeByGroupIdx( objDelGrpMembs->getRequiredTenantId(),
				objDelGrpMembs->getRequiredTSecGroupId() );
		}
		cfcore::ICFGenKbTSecGroupObj* objDelGrpIncs;
		std::vector<cfcore::ICFGenKbTSecGroupObj*> arrDelGrpIncs = dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->readCachedTSecGroupByTenantIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbTSecGroupObj*>::iterator iterArrDelGrpIncs = arrDelGrpIncs.begin();
		std::vector<cfcore::ICFGenKbTSecGroupObj*>::iterator endArrDelGrpIncs = arrDelGrpIncs.end();
		while( iterArrDelGrpIncs != endArrDelGrpIncs ) {
			objDelGrpIncs = *iterArrDelGrpIncs;
			iterArrDelGrpIncs ++;
			dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->deepDisposeByGroupIdx( objDelGrpIncs->getRequiredTenantId(),
				objDelGrpIncs->getRequiredTSecGroupId() );
		}
		dynamic_cast<cfcore::CFGenKbTSecGroupTableObj*>( schema->getTSecGroupTableObj() )->deepDisposeByTenantIdx( obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->reallyDetachFromIndexesTenant( dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::createTenant( cfcore::ICFGenKbTenantEditObj* Obj ) {
		static const std::string S_ProcName( "createTenant" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTenantObj* obj = dynamic_cast<cfcore::ICFGenKbTenantObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbTenantBuff* buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->createTenant(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbTenantBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readTenant( cfcore::CFGenKbTenantPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTenant" );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		cfcore::ICFGenKbTenantObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTenantBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::lockTenant( cfcore::CFGenKbTenantPKey* pkey ) {
		static const std::string S_ProcName( "lockTenant" );
		cfcore::ICFGenKbTenantObj* locked = NULL;
		cfcore::CFGenKbTenantBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbTenantObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbTenantTableObj::readAllTenant( bool forceRead ) {
		static const std::string S_ProcName( "readAllTenant" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTenantObj* realized = NULL;
		if( forceRead || ( allTenant == NULL ) ) {
			std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* map = new std::map<cfcore::CFGenKbTenantPKey,cfcore::ICFGenKbTenantObj*>();
			allTenant = map;
			std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbTenantBuff* buff = NULL;
			cfcore::ICFGenKbTenantObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTenant->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTenant->size();
		std::vector<cfcore::ICFGenKbTenantObj*> arr;
		auto valIter = allTenant->begin();
		size_t idx = 0;
		while( valIter != allTenant->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbTenantTableObj::pageAllTenant(const int64_t* priorId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllTenant" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* map = NULL;
		cfcore::CFGenKbTenantBuff* buff = NULL;
		cfcore::ICFGenKbTenantObj* obj = NULL;
		cfcore::ICFGenKbTenantObj* realized = NULL;
		std::vector<cfcore::ICFGenKbTenantObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbTenantPKey,cfcore::ICFGenKbTenantObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->pageAllBuff( schema->getAuthorization(),
				priorId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readTenantByIdIdx( const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readTenantByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTenantPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbTenantObj* obj = readTenant( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbTenantTableObj::readTenantByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTenantByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* dict;
		std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbTenantByClusterIdxKey,
				std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>();
			cfcore::ICFGenKbTenantObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbTenantBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbTenantObj* realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbTenantByClusterIdxKey,
				std::map< cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbTenantObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName, bool forceRead )
	{
		static const std::string S_ProcName( "readTenantByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
				cfcore::ICFGenKbTenantObj*>();
		}
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		cfcore::ICFGenKbTenantObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTenantBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTenantByUNameIdxKey, cfcore::ICFGenKbTenantObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbTenantObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readTenantByLookupUNameIdx( const int64_t ClusterId,
			const std::string& TenantName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readTenantByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
				cfcore::ICFGenKbTenantObj*>();
		}
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		cfcore::ICFGenKbTenantObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
			if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
				obj = searchIndexByUNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTenantBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByLookupUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbTenantObj*>( dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUNameIdx->insert( std::map< cfcore::CFGenKbTenantByUNameIdxKey, cfcore::ICFGenKbTenantObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbTenantObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readCachedTenant( cfcore::CFGenKbTenantPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTenant" );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		cfcore::ICFGenKbTenantObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readCachedTenantByIdIdx( const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedTenantByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTenantPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbTenantObj* obj = readCachedTenant( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbTenantTableObj::readCachedTenantByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedTenantByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbTenantObj*> arr;
		cfcore::CFGenKbTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbTenantObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbTenantObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTenantBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readCachedTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName )
	{
		static const std::string S_ProcName( "readCachedTenantByUNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
				cfcore::ICFGenKbTenantObj*>();
		}
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTenantBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::readCachedTenantByLookupUNameIdx( const int64_t ClusterId,
			const std::string& TenantName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedTenantByLookupUNameIdx" );
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
				cfcore::ICFGenKbTenantObj*>();
		}
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		cfcore::ICFGenKbTenantObj* realized = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			obj = searchIndexByUNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTenantBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbTenantTableObj::pageTenantByClusterIdx( const int64_t ClusterId,
			const int64_t* priorId )
	{
		static const std::string S_ProcName( "pageTenantByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTenantByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbTenantObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbTenantBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorId );
		std::vector<cfcore::ICFGenKbTenantObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbTenantBuff* buff;
		cfcore::ICFGenKbTenantObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantTableObj::updateTenant( cfcore::ICFGenKbTenantEditObj* Obj ) {
		static const std::string S_ProcName( "updateTenant" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTenantObj* obj = dynamic_cast<cfcore::ICFGenKbTenantObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbTenantBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->updateTenant( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbTenantBuff*>( Obj->getTenantBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbTenantObj*>( dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbTenantObj*>( obj->realize() );
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

	void CFGenKbTenantTableObj::deleteTenant( cfcore::ICFGenKbTenantEditObj* Obj ) {
		cfcore::ICFGenKbTenantObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenant( schema->getAuthorization(),
			obj->getTenantBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFGenKbTenantTableObj::deleteTenantByIdIdx( const int64_t Id )
	{
		cfcore::CFGenKbTenantPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbTenantObj* obj = readTenant( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbTenantEditObj* editObj = dynamic_cast<cfcore::ICFGenKbTenantEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbTenantEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbTenantTableObj::deleteTenantByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenantByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbTenantTableObj::deleteTenantByUNameIdx( const int64_t ClusterId,
			const std::string& TenantName )
	{
		if( indexByUNameIdx == NULL ) {
			indexByUNameIdx = new std::map< cfcore::CFGenKbTenantByUNameIdxKey,
				cfcore::ICFGenKbTenantObj*>();
		}
		cfcore::CFGenKbTenantByUNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredTenantName( TenantName );
		cfcore::ICFGenKbTenantObj* obj = NULL;
		auto searchIndexByUNameIdx = indexByUNameIdx->find( key );
		if( searchIndexByUNameIdx != indexByUNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenantByUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->deleteTenantByUNameIdx( schema->getAuthorization(),
				ClusterId,
				TenantName );
		}
		deepDisposeByUNameIdx( ClusterId,
			TenantName );
	}

	void CFGenKbTenantTableObj::reallyDetachFromIndexesTenant( cfcore::ICFGenKbTenantObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTenant" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbTenantObj* obj = Obj;
		cfcore::CFGenKbTenantPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbTenantObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbTenantByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbTenantPKey, cfcore::ICFGenKbTenantObj*>* mapClusterIdx = searchClusterIdx->second;
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

			if( indexByUNameIdx != NULL ) {
				cfcore::CFGenKbTenantByUNameIdxKey keyUNameIdx;
				keyUNameIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUNameIdx.setRequiredTenantName( obj->getRequiredTenantName() );
				auto removalProbe = indexByUNameIdx->find( keyUNameIdx );
				if( removalProbe != indexByUNameIdx->end() ) {
					indexByUNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}

	ICFGenKbTenantObj* CFGenKbTenantTableObj::getSystemTenant() {
		static const std::string S_System( "system" );
		bool transactionStarted = schema->beginTransaction();
		ICFGenKbTenantObj* tenantObj;
		try {
			ICFGenKbClusterObj* clusterObj = schema->getClusterTableObj()->getSystemCluster();
			tenantObj = readTenantByUNameIdx( clusterObj->getRequiredId(), S_System );
			if( tenantObj == NULL ) {
				tenantObj = readTenantByUNameIdx( clusterObj->getRequiredId(), S_System, true );
				if( tenantObj == NULL ) {
					tenantObj = newInstance();
					ICFGenKbTenantEditObj* tenantEdit = tenantObj->beginEdit();
					tenantEdit->setRequiredContainerCluster( clusterObj );
					tenantEdit->setRequiredTenantName( S_System );
					tenantObj = tenantEdit->create();
				}
			}
			if( transactionStarted ) {
				schema->commit();
			}
		}
		catch( std::exception& e ) {
			if( transactionStarted ) {
				try {
					schema->rollback();
				}
				catch( ... ) {
				}
			}
			throw e;
		}
		return( tenantObj );
	}


}
