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

	const std::string CFGenKbGelCacheTableObj::CLASS_NAME( "CFGenKbGelCacheTableObj" );
	const std::string CFGenKbGelCacheTableObj::TABLE_NAME( "GelCache" );
	const std::string CFGenKbGelCacheTableObj::TABLE_DBNAME( "gelcache" );

	CFGenKbGelCacheTableObj::CFGenKbGelCacheTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>();
		allGelCache = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
			std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGelCacheByAltIdxKey,
			cfcore::ICFGenKbGelCacheObj*>();
	}

	CFGenKbGelCacheTableObj::CFGenKbGelCacheTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>();
		allGelCache = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
			std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGelCacheByAltIdxKey,
			cfcore::ICFGenKbGelCacheObj*>();
	}

	CFGenKbGelCacheTableObj::~CFGenKbGelCacheTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByAltIdx != NULL ) {
			delete indexByAltIdx;
			indexByAltIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbGelCacheObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelCacheTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelCacheTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelCacheTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelCacheTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelCacheTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelCacheTableObj::minimizeMemory() {
		if( allGelCache != NULL ) {
			allGelCache->clear();
			delete allGelCache;
			allGelCache = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
				std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
				std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* curByTenantIdx = NULL;
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
		if( indexByAltIdx != NULL ) {
			indexByAltIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbGelCacheObj* cur = NULL;
			cfcore::ICFGenKbGelCacheEditObj* edit = NULL;
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

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::newInstance() {
		cfcore::ICFGenKbGelCacheObj* inst = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( new CFGenKbGelCacheObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheTableObj::newEditInstance( cfcore::ICFGenKbGelCacheObj* orig ) {
		cfcore::ICFGenKbGelCacheEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelCacheEditObj*>( new CFGenKbGelCacheEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::realizeGelCache( cfcore::ICFGenKbGelCacheObj* Obj ) {
		static const std::string S_ProcName( "realizeGelCache" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelCacheObj* obj = Obj;
		cfcore::ICFGenKbGelCacheObj* existingObj = NULL;
		cfcore::CFGenKbGelCachePKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelCacheObj* keepObj = NULL;
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
				cfcore::CFGenKbGelCacheByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				cfcore::CFGenKbGelCacheByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyAltIdx.setRequiredCacheName( keepObj->getRequiredCacheName() );
				auto removalProbe = indexByAltIdx->find( keyAltIdx );
				if( removalProbe != indexByAltIdx->end() ) {
					indexByAltIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelCacheObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelCacheByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGelCacheObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( keepObj );
				if( aAltIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIdxObj );
				}
				cfcore::CFGenKbGelCacheByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyAltIdx.setRequiredCacheName( keepObj->getRequiredCacheName() );
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGelCacheByAltIdxKey, cfcore::ICFGenKbGelCacheObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( allGelCache != NULL ) {
				allGelCache->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelCacheObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelCacheByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGelCacheObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( keepObj );
				if( aAltIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIdxObj );
				}
				cfcore::CFGenKbGelCacheByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyAltIdx.setRequiredCacheName( keepObj->getRequiredCacheName() );
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGelCacheByAltIdxKey, cfcore::ICFGenKbGelCacheObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( allGelCache != NULL ) {
				allGelCache->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbGelCacheTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbGelCacheObj*> list;
		cfcore::ICFGenKbGelCacheObj* existingObj = readCachedGelCacheByIdIdx( TenantId,
				GelCacheId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelCacheObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->reallyDeepDisposeGelCache( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCacheTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelCacheObj*> list;
		std::vector<cfcore::ICFGenKbGelCacheObj*> matchesFound = readCachedGelCacheByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelCacheObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->reallyDeepDisposeGelCache( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCacheTableObj::deepDisposeByAltIdx( const int64_t TenantId,
			const std::string& CacheName ) {
		static const std::string S_ProcName( "deepDisposeByAltIdx" );
		std::vector<cfcore::ICFGenKbGelCacheObj*> list;
		cfcore::ICFGenKbGelCacheObj* existingObj = readCachedGelCacheByAltIdx( TenantId,
				CacheName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelCacheObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->reallyDeepDisposeGelCache( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelCacheTableObj::reallyDeepDisposeGelCache( cfcore::ICFGenKbGelCacheObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelCache" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelCacheObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->reallyDetachFromIndexesGelCache( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::createGelCache( cfcore::ICFGenKbGelCacheEditObj* Obj ) {
		static const std::string S_ProcName( "createGelCache" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelCacheObj* obj = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelCacheBuff* buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->createGelCache(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::readGelCache( cfcore::CFGenKbGelCachePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelCache" );
		cfcore::ICFGenKbGelCacheObj* obj = NULL;
		cfcore::ICFGenKbGelCacheObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelCacheBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::lockGelCache( cfcore::CFGenKbGelCachePKey* pkey ) {
		static const std::string S_ProcName( "lockGelCache" );
		cfcore::ICFGenKbGelCacheObj* locked = NULL;
		cfcore::CFGenKbGelCacheBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelCacheObj*> CFGenKbGelCacheTableObj::readAllGelCache( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelCache" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelCacheObj* realized = NULL;
		if( forceRead || ( allGelCache == NULL ) ) {
			std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* map = new std::map<cfcore::CFGenKbGelCachePKey,cfcore::ICFGenKbGelCacheObj*>();
			allGelCache = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelCacheBuff* buff = NULL;
			cfcore::ICFGenKbGelCacheObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelCache->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelCache->size();
		std::vector<cfcore::ICFGenKbGelCacheObj*> arr;
		auto valIter = allGelCache->begin();
		size_t idx = 0;
		while( valIter != allGelCache->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::readGelCacheByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelCacheByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCachePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		cfcore::ICFGenKbGelCacheObj* obj = readGelCache( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelCacheObj*> CFGenKbGelCacheTableObj::readGelCacheByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelCacheByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCacheByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* dict;
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
				std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>();
			cfcore::ICFGenKbGelCacheObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelCacheBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelCacheBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelCacheObj* realized = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelCacheByTenantIdxKey,
				std::map< cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelCacheObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::readGelCacheByAltIdx( const int64_t TenantId,
			const std::string& CacheName, bool forceRead )
	{
		static const std::string S_ProcName( "readGelCacheByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGelCacheByAltIdxKey,
				cfcore::ICFGenKbGelCacheObj*>();
		}
		cfcore::CFGenKbGelCacheByAltIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCacheName( CacheName );
		cfcore::ICFGenKbGelCacheObj* obj = NULL;
		cfcore::ICFGenKbGelCacheObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByAltIdx = indexByAltIdx->find( key );
			if( searchIndexByAltIdx != indexByAltIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByAltIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelCacheBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->readDerivedByAltIdx( schema->getAuthorization(),
				TenantId,
				CacheName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGelCacheByAltIdxKey, cfcore::ICFGenKbGelCacheObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::readCachedGelCache( cfcore::CFGenKbGelCachePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelCache" );
		cfcore::ICFGenKbGelCacheObj* obj = NULL;
		cfcore::ICFGenKbGelCacheObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::readCachedGelCacheByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelCacheByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelCachePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		cfcore::ICFGenKbGelCacheObj* obj = readCachedGelCache( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelCacheObj*> CFGenKbGelCacheTableObj::readCachedGelCacheByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelCacheByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelCacheObj*> arr;
		cfcore::CFGenKbGelCacheByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelCacheObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelCacheObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::readCachedGelCacheByAltIdx( const int64_t TenantId,
			const std::string& CacheName )
	{
		static const std::string S_ProcName( "readCachedGelCacheByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGelCacheByAltIdxKey,
				cfcore::ICFGenKbGelCacheObj*>();
		}
		cfcore::CFGenKbGelCacheByAltIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCacheName( CacheName );
		cfcore::ICFGenKbGelCacheObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByAltIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheTableObj::updateGelCache( cfcore::ICFGenKbGelCacheEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelCache" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelCacheObj* obj = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelCacheBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->updateGelCache( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( Obj->getGelCacheBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( dynamic_cast<cfcore::CFGenKbGelCacheTableObj*>( schema->getGelCacheTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( obj->realize() );
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

	void CFGenKbGelCacheTableObj::deleteGelCache( cfcore::ICFGenKbGelCacheEditObj* Obj ) {
		cfcore::ICFGenKbGelCacheObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->deleteGelCache( schema->getAuthorization(),
			obj->getGelCacheBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId() );
	}

	void CFGenKbGelCacheTableObj::deleteGelCacheByIdIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		cfcore::CFGenKbGelCachePKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		cfcore::ICFGenKbGelCacheObj* obj = readGelCache( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelCacheEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelCacheEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelCacheEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelCacheTableObj::deleteGelCacheByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->deleteGelCacheByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelCacheTableObj::deleteGelCacheByAltIdx( const int64_t TenantId,
			const std::string& CacheName )
	{
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGelCacheByAltIdxKey,
				cfcore::ICFGenKbGelCacheObj*>();
		}
		cfcore::CFGenKbGelCacheByAltIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCacheName( CacheName );
		cfcore::ICFGenKbGelCacheObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->deleteGelCacheByAltIdx( schema->getAuthorization(),
				TenantId,
				CacheName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->deleteGelCacheByAltIdx( schema->getAuthorization(),
				TenantId,
				CacheName );
		}
		deepDisposeByAltIdx( TenantId,
			CacheName );
	}

	void CFGenKbGelCacheTableObj::reallyDetachFromIndexesGelCache( cfcore::ICFGenKbGelCacheObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelCache" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelCacheObj* obj = Obj;
		cfcore::CFGenKbGelCachePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelCacheObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGelCacheByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelCachePKey, cfcore::ICFGenKbGelCacheObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByAltIdx != NULL ) {
				cfcore::CFGenKbGelCacheByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyAltIdx.setRequiredCacheName( obj->getRequiredCacheName() );
				auto removalProbe = indexByAltIdx->find( keyAltIdx );
				if( removalProbe != indexByAltIdx->end() ) {
					indexByAltIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
