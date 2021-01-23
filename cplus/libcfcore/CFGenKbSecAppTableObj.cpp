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

	const std::string CFGenKbSecAppTableObj::CLASS_NAME( "CFGenKbSecAppTableObj" );
	const std::string CFGenKbSecAppTableObj::TABLE_NAME( "SecApp" );
	const std::string CFGenKbSecAppTableObj::TABLE_DBNAME( "SecApp" );

	CFGenKbSecAppTableObj::CFGenKbSecAppTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>();
		allSecApp = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecAppByClusterIdxKey,
			std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>*>();
		indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
			cfcore::ICFGenKbSecAppObj*>();
	}

	CFGenKbSecAppTableObj::CFGenKbSecAppTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>();
		allSecApp = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbSecAppByClusterIdxKey,
			std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>*>();
		indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
			cfcore::ICFGenKbSecAppObj*>();
	}

	CFGenKbSecAppTableObj::~CFGenKbSecAppTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByUJEEMountIdx != NULL ) {
			delete indexByUJEEMountIdx;
			indexByUJEEMountIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecAppObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecAppTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecAppTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecAppTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecAppTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecAppTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecAppTableObj::minimizeMemory() {
		if( allSecApp != NULL ) {
			allSecApp->clear();
			delete allSecApp;
			allSecApp = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbSecAppByClusterIdxKey,
				std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbSecAppByClusterIdxKey,
				std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* curByClusterIdx = NULL;
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
		if( indexByUJEEMountIdx != NULL ) {
			indexByUJEEMountIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecAppObj* cur = NULL;
			cfcore::ICFGenKbSecAppEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::newInstance() {
		cfcore::ICFGenKbSecAppObj* inst = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( new CFGenKbSecAppObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecAppEditObj* CFGenKbSecAppTableObj::newEditInstance( cfcore::ICFGenKbSecAppObj* orig ) {
		cfcore::ICFGenKbSecAppEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecAppEditObj*>( new CFGenKbSecAppEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::realizeSecApp( cfcore::ICFGenKbSecAppObj* Obj ) {
		static const std::string S_ProcName( "realizeSecApp" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecAppObj* obj = Obj;
		cfcore::ICFGenKbSecAppObj* existingObj = NULL;
		cfcore::CFGenKbSecAppPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecAppObj* keepObj = NULL;
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
				cfcore::CFGenKbSecAppByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUJEEMountIdx != NULL ) {
				cfcore::CFGenKbSecAppByUJEEMountIdxKey keyUJEEMountIdx;
				keyUJEEMountIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEMountIdx.setRequiredJEEMountName( keepObj->getRequiredJEEMountName() );
				auto removalProbe = indexByUJEEMountIdx->find( keyUJEEMountIdx );
				if( removalProbe != indexByUJEEMountIdx->end() ) {
					indexByUJEEMountIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecAppObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecAppObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecAppByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUJEEMountIdx != NULL ) {
				static const std::string S_AUJEEMountIdxObj( "aUJEEMountIdxObj" );
				cfcore::ICFGenKbSecAppObj* aUJEEMountIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecAppObj*>( keepObj );
				if( aUJEEMountIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUJEEMountIdxObj );
				}
				cfcore::CFGenKbSecAppByUJEEMountIdxKey keyUJEEMountIdx;
				keyUJEEMountIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEMountIdx.setRequiredJEEMountName( keepObj->getRequiredJEEMountName() );
				indexByUJEEMountIdx->insert( std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::ICFGenKbSecAppObj* >::value_type( keyUJEEMountIdx, aUJEEMountIdxObj ) );
			}

			if( allSecApp != NULL ) {
				allSecApp->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbSecAppObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecAppObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbSecAppByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUJEEMountIdx != NULL ) {
				static const std::string S_AUJEEMountIdxObj( "aUJEEMountIdxObj" );
				cfcore::ICFGenKbSecAppObj* aUJEEMountIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecAppObj*>( keepObj );
				if( aUJEEMountIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUJEEMountIdxObj );
				}
				cfcore::CFGenKbSecAppByUJEEMountIdxKey keyUJEEMountIdx;
				keyUJEEMountIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUJEEMountIdx.setRequiredJEEMountName( keepObj->getRequiredJEEMountName() );
				indexByUJEEMountIdx->insert( std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::ICFGenKbSecAppObj* >::value_type( keyUJEEMountIdx, aUJEEMountIdxObj ) );
			}

			if( allSecApp != NULL ) {
				allSecApp->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecAppTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int32_t SecAppId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecAppObj*> list;
		cfcore::ICFGenKbSecAppObj* existingObj = readCachedSecAppByIdIdx( ClusterId,
				SecAppId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecAppObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->reallyDeepDisposeSecApp( dynamic_cast<cfcore::ICFGenKbSecAppObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecAppTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbSecAppObj*> list;
		std::vector<cfcore::ICFGenKbSecAppObj*> matchesFound = readCachedSecAppByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecAppObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->reallyDeepDisposeSecApp( dynamic_cast<cfcore::ICFGenKbSecAppObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecAppTableObj::deepDisposeByUJEEMountIdx( const int64_t ClusterId,
			const std::string& JEEMountName ) {
		static const std::string S_ProcName( "deepDisposeByUJEEMountIdx" );
		std::vector<cfcore::ICFGenKbSecAppObj*> list;
		cfcore::ICFGenKbSecAppObj* existingObj = readCachedSecAppByUJEEMountIdx( ClusterId,
				JEEMountName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecAppObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->reallyDeepDisposeSecApp( dynamic_cast<cfcore::ICFGenKbSecAppObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecAppTableObj::reallyDeepDisposeSecApp( cfcore::ICFGenKbSecAppObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecApp" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecAppObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->deepDisposeBySecAppIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecAppId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->reallyDetachFromIndexesSecApp( dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::createSecApp( cfcore::ICFGenKbSecAppEditObj* Obj ) {
		static const std::string S_ProcName( "createSecApp" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecAppObj* obj = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecAppBuff* buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->createSecApp(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecAppBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readSecApp( cfcore::CFGenKbSecAppPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecApp" );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecAppBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredSecAppId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::lockSecApp( cfcore::CFGenKbSecAppPKey* pkey ) {
		static const std::string S_ProcName( "lockSecApp" );
		cfcore::ICFGenKbSecAppObj* locked = NULL;
		cfcore::CFGenKbSecAppBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbSecAppTableObj::readAllSecApp( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecApp" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		if( forceRead || ( allSecApp == NULL ) ) {
			std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* map = new std::map<cfcore::CFGenKbSecAppPKey,cfcore::ICFGenKbSecAppObj*>();
			allSecApp = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecAppBuff* buff = NULL;
			cfcore::ICFGenKbSecAppObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecApp->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecApp->size();
		std::vector<cfcore::ICFGenKbSecAppObj*> arr;
		auto valIter = allSecApp->begin();
		size_t idx = 0;
		while( valIter != allSecApp->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbSecAppTableObj::pageAllSecApp(const int64_t* priorClusterId,
			const int32_t* priorSecAppId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecApp" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* map = NULL;
		cfcore::CFGenKbSecAppBuff* buff = NULL;
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecAppObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecAppPKey,cfcore::ICFGenKbSecAppObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorSecAppId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readSecAppByIdIdx( const int64_t ClusterId,
			const int32_t SecAppId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecAppByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecAppPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecAppId( SecAppId );
		cfcore::ICFGenKbSecAppObj* obj = readSecApp( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbSecAppTableObj::readSecAppByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecAppByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecAppByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* dict;
		std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbSecAppByClusterIdxKey,
				std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>();
			cfcore::ICFGenKbSecAppObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbSecAppBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecAppObj* realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbSecAppByClusterIdxKey,
				std::map< cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecAppObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readSecAppByUJEEMountIdx( const int64_t ClusterId,
			const std::string& JEEMountName, bool forceRead )
	{
		static const std::string S_ProcName( "readSecAppByUJEEMountIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUJEEMountIdx == NULL ) {
			indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
				cfcore::ICFGenKbSecAppObj*>();
		}
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredJEEMountName( JEEMountName );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUJEEMountIdx = indexByUJEEMountIdx->find( key );
			if( searchIndexByUJEEMountIdx != indexByUJEEMountIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUJEEMountIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecAppBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->readDerivedByUJEEMountIdx( schema->getAuthorization(),
				ClusterId,
				JEEMountName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUJEEMountIdx->insert( std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::ICFGenKbSecAppObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecAppObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readSecAppByLookupUJEEMountIdx( const int64_t ClusterId,
			const std::string& JEEMountName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecAppByLookupUJEEMountIdx" );
		if( indexByUJEEMountIdx == NULL ) {
			indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
				cfcore::ICFGenKbSecAppObj*>();
		}
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredJEEMountName( JEEMountName );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUJEEMountIdx = indexByUJEEMountIdx->find( key );
			if( searchIndexByUJEEMountIdx != indexByUJEEMountIdx->end() ) {
				obj = searchIndexByUJEEMountIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecAppBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->readDerivedByLookupUJEEMountIdx( schema->getAuthorization(),
				ClusterId,
				JEEMountName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUJEEMountIdx->insert( std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey, cfcore::ICFGenKbSecAppObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecAppObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readCachedSecApp( cfcore::CFGenKbSecAppPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecApp" );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readCachedSecAppByIdIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		static const std::string S_ProcName( "readCachedSecAppByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecAppPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecAppId( SecAppId );
		cfcore::ICFGenKbSecAppObj* obj = readCachedSecApp( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbSecAppTableObj::readCachedSecAppByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedSecAppByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecAppObj*> arr;
		cfcore::CFGenKbSecAppByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecAppObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecAppObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecAppBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readCachedSecAppByUJEEMountIdx( const int64_t ClusterId,
			const std::string& JEEMountName )
	{
		static const std::string S_ProcName( "readCachedSecAppByUJEEMountIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUJEEMountIdx == NULL ) {
			indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
				cfcore::ICFGenKbSecAppObj*>();
		}
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredJEEMountName( JEEMountName );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		auto searchIndexByUJEEMountIdx = indexByUJEEMountIdx->find( key );
		if( searchIndexByUJEEMountIdx != indexByUJEEMountIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUJEEMountIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecAppBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::readCachedSecAppByLookupUJEEMountIdx( const int64_t ClusterId,
			const std::string& JEEMountName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecAppByLookupUJEEMountIdx" );
		if( indexByUJEEMountIdx == NULL ) {
			indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
				cfcore::ICFGenKbSecAppObj*>();
		}
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredJEEMountName( JEEMountName );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		cfcore::ICFGenKbSecAppObj* realized = NULL;
		auto searchIndexByUJEEMountIdx = indexByUJEEMountIdx->find( key );
		if( searchIndexByUJEEMountIdx != indexByUJEEMountIdx->end() ) {
			obj = searchIndexByUJEEMountIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecAppBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbSecAppTableObj::pageSecAppByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int32_t* priorSecAppId )
	{
		static const std::string S_ProcName( "pageSecAppByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecAppByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbSecAppObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecAppBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorSecAppId );
		std::vector<cfcore::ICFGenKbSecAppObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecAppBuff* buff;
		cfcore::ICFGenKbSecAppObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppTableObj::updateSecApp( cfcore::ICFGenKbSecAppEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecApp" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecAppObj* obj = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecAppBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->updateSecApp( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecAppBuff*>( Obj->getSecAppBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecAppObj*>( obj->realize() );
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

	void CFGenKbSecAppTableObj::deleteSecApp( cfcore::ICFGenKbSecAppEditObj* Obj ) {
		cfcore::ICFGenKbSecAppObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->deleteSecApp( schema->getAuthorization(),
			obj->getSecAppBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredSecAppId() );
	}

	void CFGenKbSecAppTableObj::deleteSecAppByIdIdx( const int64_t ClusterId,
			const int32_t SecAppId )
	{
		cfcore::CFGenKbSecAppPKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredSecAppId( SecAppId );
		cfcore::ICFGenKbSecAppObj* obj = readSecApp( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecAppEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecAppEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecAppEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecAppTableObj::deleteSecAppByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->deleteSecAppByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbSecAppTableObj::deleteSecAppByUJEEMountIdx( const int64_t ClusterId,
			const std::string& JEEMountName )
	{
		if( indexByUJEEMountIdx == NULL ) {
			indexByUJEEMountIdx = new std::map< cfcore::CFGenKbSecAppByUJEEMountIdxKey,
				cfcore::ICFGenKbSecAppObj*>();
		}
		cfcore::CFGenKbSecAppByUJEEMountIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredJEEMountName( JEEMountName );
		cfcore::ICFGenKbSecAppObj* obj = NULL;
		auto searchIndexByUJEEMountIdx = indexByUJEEMountIdx->find( key );
		if( searchIndexByUJEEMountIdx != indexByUJEEMountIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->deleteSecAppByUJEEMountIdx( schema->getAuthorization(),
				ClusterId,
				JEEMountName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecApp()->deleteSecAppByUJEEMountIdx( schema->getAuthorization(),
				ClusterId,
				JEEMountName );
		}
		deepDisposeByUJEEMountIdx( ClusterId,
			JEEMountName );
	}

	void CFGenKbSecAppTableObj::reallyDetachFromIndexesSecApp( cfcore::ICFGenKbSecAppObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecApp" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecAppObj* obj = Obj;
		cfcore::CFGenKbSecAppPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecAppObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbSecAppByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbSecAppPKey, cfcore::ICFGenKbSecAppObj*>* mapClusterIdx = searchClusterIdx->second;
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

			if( indexByUJEEMountIdx != NULL ) {
				cfcore::CFGenKbSecAppByUJEEMountIdxKey keyUJEEMountIdx;
				keyUJEEMountIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUJEEMountIdx.setRequiredJEEMountName( obj->getRequiredJEEMountName() );
				auto removalProbe = indexByUJEEMountIdx->find( keyUJEEMountIdx );
				if( removalProbe != indexByUJEEMountIdx->end() ) {
					indexByUJEEMountIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
