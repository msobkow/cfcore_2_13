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

	const std::string CFGenKbClusterTableObj::CLASS_NAME( "CFGenKbClusterTableObj" );
	const std::string CFGenKbClusterTableObj::TABLE_NAME( "Cluster" );
	const std::string CFGenKbClusterTableObj::TABLE_DBNAME( "clus" );

	CFGenKbClusterTableObj::CFGenKbClusterTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj*>();
		allCluster = NULL;
		indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
			cfcore::ICFGenKbClusterObj*>();
		indexByUDescrIdx = new std::map< cfcore::CFGenKbClusterByUDescrIdxKey,
			cfcore::ICFGenKbClusterObj*>();
	}

	CFGenKbClusterTableObj::CFGenKbClusterTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj*>();
		allCluster = NULL;
		indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
			cfcore::ICFGenKbClusterObj*>();
		indexByUDescrIdx = new std::map< cfcore::CFGenKbClusterByUDescrIdxKey,
			cfcore::ICFGenKbClusterObj*>();
	}

	CFGenKbClusterTableObj::~CFGenKbClusterTableObj() {
		minimizeMemory();
		if( indexByUDomNameIdx != NULL ) {
			delete indexByUDomNameIdx;
			indexByUDomNameIdx = NULL;
		}
		if( indexByUDescrIdx != NULL ) {
			delete indexByUDescrIdx;
			indexByUDescrIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbClusterObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbClusterTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbClusterTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbClusterTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbClusterTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbClusterTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbClusterTableObj::minimizeMemory() {
		if( allCluster != NULL ) {
			allCluster->clear();
			delete allCluster;
			allCluster = NULL;
		}
		if( indexByUDomNameIdx != NULL ) {
			indexByUDomNameIdx->clear();
		}
		if( indexByUDescrIdx != NULL ) {
			indexByUDescrIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbClusterObj* cur = NULL;
			cfcore::ICFGenKbClusterEditObj* edit = NULL;
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

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::newInstance() {
		cfcore::ICFGenKbClusterObj* inst = dynamic_cast<cfcore::ICFGenKbClusterObj*>( new CFGenKbClusterObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterTableObj::newEditInstance( cfcore::ICFGenKbClusterObj* orig ) {
		cfcore::ICFGenKbClusterEditObj* edit = dynamic_cast<cfcore::ICFGenKbClusterEditObj*>( new CFGenKbClusterEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::realizeCluster( cfcore::ICFGenKbClusterObj* Obj ) {
		static const std::string S_ProcName( "realizeCluster" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbClusterObj* obj = Obj;
		cfcore::ICFGenKbClusterObj* existingObj = NULL;
		cfcore::CFGenKbClusterPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbClusterObj* keepObj = NULL;
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
			if( indexByUDomNameIdx != NULL ) {
				cfcore::CFGenKbClusterByUDomNameIdxKey keyUDomNameIdx;
				keyUDomNameIdx.setRequiredFullDomName( keepObj->getRequiredFullDomName() );
				auto removalProbe = indexByUDomNameIdx->find( keyUDomNameIdx );
				if( removalProbe != indexByUDomNameIdx->end() ) {
					indexByUDomNameIdx->erase( removalProbe );
				}
			}

			if( indexByUDescrIdx != NULL ) {
				cfcore::CFGenKbClusterByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredDescription( keepObj->getRequiredDescription() );
				auto removalProbe = indexByUDescrIdx->find( keyUDescrIdx );
				if( removalProbe != indexByUDescrIdx->end() ) {
					indexByUDescrIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbClusterBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByUDomNameIdx != NULL ) {
				static const std::string S_AUDomNameIdxObj( "aUDomNameIdxObj" );
				cfcore::ICFGenKbClusterObj* aUDomNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbClusterObj*>( keepObj );
				if( aUDomNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUDomNameIdxObj );
				}
				cfcore::CFGenKbClusterByUDomNameIdxKey keyUDomNameIdx;
				keyUDomNameIdx.setRequiredFullDomName( keepObj->getRequiredFullDomName() );
				indexByUDomNameIdx->insert( std::map< cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::ICFGenKbClusterObj* >::value_type( keyUDomNameIdx, aUDomNameIdxObj ) );
			}

			if( indexByUDescrIdx != NULL ) {
				static const std::string S_AUDescrIdxObj( "aUDescrIdxObj" );
				cfcore::ICFGenKbClusterObj* aUDescrIdxObj =
					dynamic_cast<cfcore::ICFGenKbClusterObj*>( keepObj );
				if( aUDescrIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUDescrIdxObj );
				}
				cfcore::CFGenKbClusterByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredDescription( keepObj->getRequiredDescription() );
				indexByUDescrIdx->insert( std::map< cfcore::CFGenKbClusterByUDescrIdxKey, cfcore::ICFGenKbClusterObj* >::value_type( keyUDescrIdx, aUDescrIdxObj ) );
			}

			if( allCluster != NULL ) {
				allCluster->insert( std::map< cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByUDomNameIdx != NULL ) {
				static const std::string S_AUDomNameIdxObj( "aUDomNameIdxObj" );
				cfcore::ICFGenKbClusterObj* aUDomNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbClusterObj*>( keepObj );
				if( aUDomNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUDomNameIdxObj );
				}
				cfcore::CFGenKbClusterByUDomNameIdxKey keyUDomNameIdx;
				keyUDomNameIdx.setRequiredFullDomName( keepObj->getRequiredFullDomName() );
				indexByUDomNameIdx->insert( std::map< cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::ICFGenKbClusterObj* >::value_type( keyUDomNameIdx, aUDomNameIdxObj ) );
			}

			if( indexByUDescrIdx != NULL ) {
				static const std::string S_AUDescrIdxObj( "aUDescrIdxObj" );
				cfcore::ICFGenKbClusterObj* aUDescrIdxObj =
					dynamic_cast<cfcore::ICFGenKbClusterObj*>( keepObj );
				if( aUDescrIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUDescrIdxObj );
				}
				cfcore::CFGenKbClusterByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredDescription( keepObj->getRequiredDescription() );
				indexByUDescrIdx->insert( std::map< cfcore::CFGenKbClusterByUDescrIdxKey, cfcore::ICFGenKbClusterObj* >::value_type( keyUDescrIdx, aUDescrIdxObj ) );
			}

			if( allCluster != NULL ) {
				allCluster->insert( std::map< cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbClusterTableObj::deepDisposeByIdIdx( const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbClusterObj*> list;
		cfcore::ICFGenKbClusterObj* existingObj = readCachedClusterByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbClusterObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->reallyDeepDisposeCluster( dynamic_cast<cfcore::ICFGenKbClusterObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbClusterTableObj::deepDisposeByUDomNameIdx( const std::string& FullDomName ) {
		static const std::string S_ProcName( "deepDisposeByUDomNameIdx" );
		std::vector<cfcore::ICFGenKbClusterObj*> list;
		cfcore::ICFGenKbClusterObj* existingObj = readCachedClusterByUDomNameIdx( FullDomName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbClusterObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->reallyDeepDisposeCluster( dynamic_cast<cfcore::ICFGenKbClusterObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbClusterTableObj::deepDisposeByUDescrIdx( const std::string& Description ) {
		static const std::string S_ProcName( "deepDisposeByUDescrIdx" );
		std::vector<cfcore::ICFGenKbClusterObj*> list;
		cfcore::ICFGenKbClusterObj* existingObj = readCachedClusterByUDescrIdx( Description );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbClusterObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->reallyDeepDisposeCluster( dynamic_cast<cfcore::ICFGenKbClusterObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbClusterTableObj::reallyDeepDisposeCluster( cfcore::ICFGenKbClusterObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeCluster" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbClusterObj* obj = Obj;
		
		cfcore::ICFGenKbSecGroupObj* objDelSecGroupForms;
		std::vector<cfcore::ICFGenKbSecGroupObj*> arrDelSecGroupForms = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->readCachedSecGroupByClusterIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator iterArrDelSecGroupForms = arrDelSecGroupForms.begin();
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator endArrDelSecGroupForms = arrDelSecGroupForms.end();
		while( iterArrDelSecGroupForms != endArrDelSecGroupForms ) {
			objDelSecGroupForms = *iterArrDelSecGroupForms;
			iterArrDelSecGroupForms ++;
			dynamic_cast<cfcore::CFGenKbSecGroupFormTableObj*>( schema->getSecGroupFormTableObj() )->deepDisposeByGroupIdx( objDelSecGroupForms->getRequiredClusterId(),
				objDelSecGroupForms->getRequiredSecGroupId() );
		}
		cfcore::ICFGenKbSecGroupObj* objDelSecGrpIncByGroup;
		std::vector<cfcore::ICFGenKbSecGroupObj*> arrDelSecGrpIncByGroup = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->readCachedSecGroupByClusterIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator iterArrDelSecGrpIncByGroup = arrDelSecGrpIncByGroup.begin();
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator endArrDelSecGrpIncByGroup = arrDelSecGrpIncByGroup.end();
		while( iterArrDelSecGrpIncByGroup != endArrDelSecGrpIncByGroup ) {
			objDelSecGrpIncByGroup = *iterArrDelSecGrpIncByGroup;
			iterArrDelSecGrpIncByGroup ++;
			dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->deepDisposeByIncludeIdx( objDelSecGrpIncByGroup->getRequiredClusterId(),
				objDelSecGrpIncByGroup->getRequiredSecGroupId() );
		}
		cfcore::ICFGenKbSecGroupObj* objDelSecGrpMembs;
		std::vector<cfcore::ICFGenKbSecGroupObj*> arrDelSecGrpMembs = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->readCachedSecGroupByClusterIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator iterArrDelSecGrpMembs = arrDelSecGrpMembs.begin();
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator endArrDelSecGrpMembs = arrDelSecGrpMembs.end();
		while( iterArrDelSecGrpMembs != endArrDelSecGrpMembs ) {
			objDelSecGrpMembs = *iterArrDelSecGrpMembs;
			iterArrDelSecGrpMembs ++;
			dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->deepDisposeByGroupIdx( objDelSecGrpMembs->getRequiredClusterId(),
				objDelSecGrpMembs->getRequiredSecGroupId() );
		}
		cfcore::ICFGenKbSecGroupObj* objDelSecGrpIncs;
		std::vector<cfcore::ICFGenKbSecGroupObj*> arrDelSecGrpIncs = dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->readCachedSecGroupByClusterIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator iterArrDelSecGrpIncs = arrDelSecGrpIncs.begin();
		std::vector<cfcore::ICFGenKbSecGroupObj*>::iterator endArrDelSecGrpIncs = arrDelSecGrpIncs.end();
		while( iterArrDelSecGrpIncs != endArrDelSecGrpIncs ) {
			objDelSecGrpIncs = *iterArrDelSecGrpIncs;
			iterArrDelSecGrpIncs ++;
			dynamic_cast<cfcore::CFGenKbSecGrpIncTableObj*>( schema->getSecGrpIncTableObj() )->deepDisposeByGroupIdx( objDelSecGrpIncs->getRequiredClusterId(),
				objDelSecGrpIncs->getRequiredSecGroupId() );
		}
		dynamic_cast<cfcore::CFGenKbSecGroupTableObj*>( schema->getSecGroupTableObj() )->deepDisposeByClusterIdx( obj->getRequiredId() );
		cfcore::ICFGenKbSecAppObj* objDelSecAppForms;
		std::vector<cfcore::ICFGenKbSecAppObj*> arrDelSecAppForms = dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->readCachedSecAppByClusterIdx( obj->getRequiredId() );
		std::vector<cfcore::ICFGenKbSecAppObj*>::iterator iterArrDelSecAppForms = arrDelSecAppForms.begin();
		std::vector<cfcore::ICFGenKbSecAppObj*>::iterator endArrDelSecAppForms = arrDelSecAppForms.end();
		while( iterArrDelSecAppForms != endArrDelSecAppForms ) {
			objDelSecAppForms = *iterArrDelSecAppForms;
			iterArrDelSecAppForms ++;
			dynamic_cast<cfcore::CFGenKbSecFormTableObj*>( schema->getSecFormTableObj() )->deepDisposeBySecAppIdx( objDelSecAppForms->getRequiredClusterId(),
				objDelSecAppForms->getRequiredSecAppId() );
		}
		dynamic_cast<cfcore::CFGenKbSecAppTableObj*>( schema->getSecAppTableObj() )->deepDisposeByClusterIdx( obj->getRequiredId() );
		dynamic_cast<cfcore::CFGenKbTenantTableObj*>( schema->getTenantTableObj() )->deepDisposeByClusterIdx( obj->getRequiredId() );
		dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->deepDisposeByClusterIdx( obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->reallyDetachFromIndexesCluster( dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::createCluster( cfcore::ICFGenKbClusterEditObj* Obj ) {
		static const std::string S_ProcName( "createCluster" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbClusterObj* obj = dynamic_cast<cfcore::ICFGenKbClusterObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbClusterBuff* buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->createCluster(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbClusterBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
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

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readCluster( cfcore::CFGenKbClusterPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readCluster" );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbClusterBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
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

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::lockCluster( cfcore::CFGenKbClusterPKey* pkey ) {
		static const std::string S_ProcName( "lockCluster" );
		cfcore::ICFGenKbClusterObj* locked = NULL;
		cfcore::CFGenKbClusterBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbClusterObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbClusterObj*> CFGenKbClusterTableObj::readAllCluster( bool forceRead ) {
		static const std::string S_ProcName( "readAllCluster" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbClusterObj* realized = NULL;
		if( forceRead || ( allCluster == NULL ) ) {
			std::map<cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj*>* map = new std::map<cfcore::CFGenKbClusterPKey,cfcore::ICFGenKbClusterObj*>();
			allCluster = map;
			std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbClusterBuff* buff = NULL;
			cfcore::ICFGenKbClusterObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allCluster->insert( std::map< cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allCluster->size();
		std::vector<cfcore::ICFGenKbClusterObj*> arr;
		auto valIter = allCluster->begin();
		size_t idx = 0;
		while( valIter != allCluster->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbClusterObj*> CFGenKbClusterTableObj::pageAllCluster(const int64_t* priorId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllCluster" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbClusterPKey, cfcore::ICFGenKbClusterObj*>* map = NULL;
		cfcore::CFGenKbClusterBuff* buff = NULL;
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		std::vector<cfcore::ICFGenKbClusterObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbClusterPKey,cfcore::ICFGenKbClusterObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbClusterBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->pageAllBuff( schema->getAuthorization(),
				priorId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
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

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readClusterByIdIdx( const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readClusterByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbClusterPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbClusterObj* obj = readCluster( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readClusterByUDomNameIdx( const std::string& FullDomName, bool forceRead )
	{
		static const std::string S_ProcName( "readClusterByUDomNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUDomNameIdx == NULL ) {
			indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUDomNameIdx = indexByUDomNameIdx->find( key );
			if( searchIndexByUDomNameIdx != indexByUDomNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUDomNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbClusterBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->readDerivedByUDomNameIdx( schema->getAuthorization(),
				FullDomName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUDomNameIdx->insert( std::map< cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::ICFGenKbClusterObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbClusterObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readClusterByUDescrIdx( const std::string& Description, bool forceRead )
	{
		static const std::string S_ProcName( "readClusterByUDescrIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUDescrIdx == NULL ) {
			indexByUDescrIdx = new std::map< cfcore::CFGenKbClusterByUDescrIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDescrIdxKey key;
		key.setRequiredDescription( Description );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUDescrIdx = indexByUDescrIdx->find( key );
			if( searchIndexByUDescrIdx != indexByUDescrIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUDescrIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbClusterBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->readDerivedByUDescrIdx( schema->getAuthorization(),
				Description );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUDescrIdx->insert( std::map< cfcore::CFGenKbClusterByUDescrIdxKey, cfcore::ICFGenKbClusterObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbClusterObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readClusterByLookupUDomNameIdx( const std::string& FullDomName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readClusterByLookupUDomNameIdx" );
		if( indexByUDomNameIdx == NULL ) {
			indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUDomNameIdx = indexByUDomNameIdx->find( key );
			if( searchIndexByUDomNameIdx != indexByUDomNameIdx->end() ) {
				obj = searchIndexByUDomNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbClusterBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->readDerivedByLookupUDomNameIdx( schema->getAuthorization(),
				FullDomName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbClusterObj*>( dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUDomNameIdx->insert( std::map< cfcore::CFGenKbClusterByUDomNameIdxKey, cfcore::ICFGenKbClusterObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbClusterObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readCachedCluster( cfcore::CFGenKbClusterPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readCluster" );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readCachedClusterByIdIdx( const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedClusterByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbClusterPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbClusterObj* obj = readCachedCluster( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readCachedClusterByUDomNameIdx( const std::string& FullDomName )
	{
		static const std::string S_ProcName( "readCachedClusterByUDomNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUDomNameIdx == NULL ) {
			indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		auto searchIndexByUDomNameIdx = indexByUDomNameIdx->find( key );
		if( searchIndexByUDomNameIdx != indexByUDomNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUDomNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbClusterBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readCachedClusterByUDescrIdx( const std::string& Description )
	{
		static const std::string S_ProcName( "readCachedClusterByUDescrIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUDescrIdx == NULL ) {
			indexByUDescrIdx = new std::map< cfcore::CFGenKbClusterByUDescrIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDescrIdxKey key;
		key.setRequiredDescription( Description );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		auto searchIndexByUDescrIdx = indexByUDescrIdx->find( key );
		if( searchIndexByUDescrIdx != indexByUDescrIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUDescrIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbClusterBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::readCachedClusterByLookupUDomNameIdx( const std::string& FullDomName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedClusterByLookupUDomNameIdx" );
		if( indexByUDomNameIdx == NULL ) {
			indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		cfcore::ICFGenKbClusterObj* realized = NULL;
		auto searchIndexByUDomNameIdx = indexByUDomNameIdx->find( key );
		if( searchIndexByUDomNameIdx != indexByUDomNameIdx->end() ) {
			obj = searchIndexByUDomNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbClusterBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterTableObj::updateCluster( cfcore::ICFGenKbClusterEditObj* Obj ) {
		static const std::string S_ProcName( "updateCluster" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbClusterObj* obj = dynamic_cast<cfcore::ICFGenKbClusterObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbClusterBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->updateCluster( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbClusterBuff*>( Obj->getClusterBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbClusterObj*>( dynamic_cast<cfcore::CFGenKbClusterTableObj*>( schema->getClusterTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbClusterObj*>( obj->realize() );
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

	void CFGenKbClusterTableObj::deleteCluster( cfcore::ICFGenKbClusterEditObj* Obj ) {
		cfcore::ICFGenKbClusterObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->deleteCluster( schema->getAuthorization(),
			obj->getClusterBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFGenKbClusterTableObj::deleteClusterByIdIdx( const int64_t Id )
	{
		cfcore::CFGenKbClusterPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbClusterObj* obj = readCluster( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbClusterEditObj* editObj = dynamic_cast<cfcore::ICFGenKbClusterEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbClusterEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbClusterTableObj::deleteClusterByUDomNameIdx( const std::string& FullDomName )
	{
		if( indexByUDomNameIdx == NULL ) {
			indexByUDomNameIdx = new std::map< cfcore::CFGenKbClusterByUDomNameIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDomNameIdxKey key;
		key.setRequiredFullDomName( FullDomName );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		auto searchIndexByUDomNameIdx = indexByUDomNameIdx->find( key );
		if( searchIndexByUDomNameIdx != indexByUDomNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->deleteClusterByUDomNameIdx( schema->getAuthorization(),
				FullDomName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->deleteClusterByUDomNameIdx( schema->getAuthorization(),
				FullDomName );
		}
		deepDisposeByUDomNameIdx( FullDomName );
	}

	void CFGenKbClusterTableObj::deleteClusterByUDescrIdx( const std::string& Description )
	{
		if( indexByUDescrIdx == NULL ) {
			indexByUDescrIdx = new std::map< cfcore::CFGenKbClusterByUDescrIdxKey,
				cfcore::ICFGenKbClusterObj*>();
		}
		cfcore::CFGenKbClusterByUDescrIdxKey key;
		key.setRequiredDescription( Description );
		cfcore::ICFGenKbClusterObj* obj = NULL;
		auto searchIndexByUDescrIdx = indexByUDescrIdx->find( key );
		if( searchIndexByUDescrIdx != indexByUDescrIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->deleteClusterByUDescrIdx( schema->getAuthorization(),
				Description );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->deleteClusterByUDescrIdx( schema->getAuthorization(),
				Description );
		}
		deepDisposeByUDescrIdx( Description );
	}

	void CFGenKbClusterTableObj::reallyDetachFromIndexesCluster( cfcore::ICFGenKbClusterObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesCluster" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbClusterObj* obj = Obj;
		cfcore::CFGenKbClusterPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbClusterObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByUDomNameIdx != NULL ) {
				cfcore::CFGenKbClusterByUDomNameIdxKey keyUDomNameIdx;
				keyUDomNameIdx.setRequiredFullDomName( obj->getRequiredFullDomName() );
				auto removalProbe = indexByUDomNameIdx->find( keyUDomNameIdx );
				if( removalProbe != indexByUDomNameIdx->end() ) {
					indexByUDomNameIdx->erase( removalProbe );
				}
			}

			if( indexByUDescrIdx != NULL ) {
				cfcore::CFGenKbClusterByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredDescription( obj->getRequiredDescription() );
				auto removalProbe = indexByUDescrIdx->find( keyUDescrIdx );
				if( removalProbe != indexByUDescrIdx->end() ) {
					indexByUDescrIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}

	ICFGenKbClusterObj* CFGenKbClusterTableObj::getSystemCluster() {
		static const std::string S_System( "system" );
		bool transactionStarted = schema->beginTransaction();
		ICFGenKbClusterObj* clusterObj;
		try {
			clusterObj = readClusterByUDomNameIdx( S_System );
			if( clusterObj == NULL ) {
				clusterObj = readClusterByUDomNameIdx( S_System, true );
				if( clusterObj == NULL ) {
					clusterObj = newInstance();
					ICFGenKbClusterEditObj* clusterEdit = clusterObj->beginEdit();
					clusterEdit->setRequiredFullDomName( S_System );
					clusterEdit->setRequiredDescription( S_System );
					clusterObj = clusterEdit->create();
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
		return( clusterObj );
	}


}
