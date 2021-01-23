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

	const std::string CFGenKbSecDeviceTableObj::CLASS_NAME( "CFGenKbSecDeviceTableObj" );
	const std::string CFGenKbSecDeviceTableObj::TABLE_NAME( "SecDevice" );
	const std::string CFGenKbSecDeviceTableObj::TABLE_DBNAME( "SecDev" );

	CFGenKbSecDeviceTableObj::CFGenKbSecDeviceTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>();
		allSecDevice = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
			cfcore::ICFGenKbSecDeviceObj*>();
		indexByUserIdx = new std::map< cfcore::CFGenKbSecDeviceByUserIdxKey,
			std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>*>();
	}

	CFGenKbSecDeviceTableObj::CFGenKbSecDeviceTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>();
		allSecDevice = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
			cfcore::ICFGenKbSecDeviceObj*>();
		indexByUserIdx = new std::map< cfcore::CFGenKbSecDeviceByUserIdxKey,
			std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>*>();
	}

	CFGenKbSecDeviceTableObj::~CFGenKbSecDeviceTableObj() {
		minimizeMemory();
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( indexByUserIdx != NULL ) {
			delete indexByUserIdx;
			indexByUserIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecDeviceObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecDeviceTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecDeviceTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecDeviceTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecDeviceTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecDeviceTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecDeviceTableObj::minimizeMemory() {
		if( allSecDevice != NULL ) {
			allSecDevice->clear();
			delete allSecDevice;
			allSecDevice = NULL;
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( indexByUserIdx != NULL ) {
			std::map< cfcore::CFGenKbSecDeviceByUserIdxKey,
				std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* >::iterator iterByUserIdx = indexByUserIdx->begin();
			std::map< cfcore::CFGenKbSecDeviceByUserIdxKey,
				std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* >::iterator endByUserIdx = indexByUserIdx->end();
			std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* curByUserIdx = NULL;
			while( iterByUserIdx != endByUserIdx ) {
				curByUserIdx = iterByUserIdx->second;
				if( curByUserIdx != NULL ) {
					curByUserIdx->clear();
					delete curByUserIdx;
					curByUserIdx = NULL;
					iterByUserIdx->second = NULL;
				}
				iterByUserIdx ++;
			}
			indexByUserIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecDeviceObj* cur = NULL;
			cfcore::ICFGenKbSecDeviceEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::newInstance() {
		cfcore::ICFGenKbSecDeviceObj* inst = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( new CFGenKbSecDeviceObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceTableObj::newEditInstance( cfcore::ICFGenKbSecDeviceObj* orig ) {
		cfcore::ICFGenKbSecDeviceEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecDeviceEditObj*>( new CFGenKbSecDeviceEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::realizeSecDevice( cfcore::ICFGenKbSecDeviceObj* Obj ) {
		static const std::string S_ProcName( "realizeSecDevice" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecDeviceObj* obj = Obj;
		cfcore::ICFGenKbSecDeviceObj* existingObj = NULL;
		cfcore::CFGenKbSecDevicePKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecDeviceObj* keepObj = NULL;
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
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbSecDeviceByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				keyNameIdx.setRequiredDevName( keepObj->getRequiredDevName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByUserIdx != NULL ) {
				cfcore::CFGenKbSecDeviceByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* mapUserIdx = searchUserIdx->second;
					if( mapUserIdx != NULL ) {
						auto removalProbe = mapUserIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapUserIdx->end() ) {
							mapUserIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbSecDeviceObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbSecDeviceByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				keyNameIdx.setRequiredDevName( keepObj->getRequiredDevName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByUserIdx != NULL ) {
				static const std::string S_AUserIdxObj( "aUserIdxObj" );
				cfcore::ICFGenKbSecDeviceObj* aUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( keepObj );
				if( aUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUserIdxObj );
				}
				cfcore::CFGenKbSecDeviceByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchIndexByUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchIndexByUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* mapUserIdx = searchIndexByUserIdx->second;
					if( mapUserIdx != NULL ) {
						mapUserIdx->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(keepObj->getPKey()), aUserIdxObj ) );
					}
				}
			}

			if( allSecDevice != NULL ) {
				allSecDevice->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbSecDeviceObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbSecDeviceByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				keyNameIdx.setRequiredDevName( keepObj->getRequiredDevName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByUserIdx != NULL ) {
				static const std::string S_AUserIdxObj( "aUserIdxObj" );
				cfcore::ICFGenKbSecDeviceObj* aUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( keepObj );
				if( aUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUserIdxObj );
				}
				cfcore::CFGenKbSecDeviceByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchIndexByUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchIndexByUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* mapUserIdx = searchIndexByUserIdx->second;
					if( mapUserIdx != NULL ) {
						mapUserIdx->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(keepObj->getPKey()), aUserIdxObj ) );
					}
				}
			}

			if( allSecDevice != NULL ) {
				allSecDevice->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecDeviceTableObj::deepDisposeByIdIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecDeviceObj*> list;
		cfcore::ICFGenKbSecDeviceObj* existingObj = readCachedSecDeviceByIdIdx( SecUserId,
				DevName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecDeviceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->reallyDeepDisposeSecDevice( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecDeviceTableObj::deepDisposeByNameIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfcore::ICFGenKbSecDeviceObj*> list;
		cfcore::ICFGenKbSecDeviceObj* existingObj = readCachedSecDeviceByNameIdx( SecUserId,
				DevName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecDeviceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->reallyDeepDisposeSecDevice( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecDeviceTableObj::deepDisposeByUserIdx( const uuid_ptr_t SecUserId ) {
		static const std::string S_ProcName( "deepDisposeByUserIdx" );
		std::vector<cfcore::ICFGenKbSecDeviceObj*> list;
		std::vector<cfcore::ICFGenKbSecDeviceObj*> matchesFound = readCachedSecDeviceByUserIdx( SecUserId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecDeviceObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->reallyDeepDisposeSecDevice( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecDeviceTableObj::reallyDeepDisposeSecDevice( cfcore::ICFGenKbSecDeviceObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecDevice" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecDeviceObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->reallyDetachFromIndexesSecDevice( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::createSecDevice( cfcore::ICFGenKbSecDeviceEditObj* Obj ) {
		static const std::string S_ProcName( "createSecDevice" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecDeviceObj* obj = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecDeviceBuff* buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->createSecDevice(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readSecDevice( cfcore::CFGenKbSecDevicePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecDevice" );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecDeviceBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredSecUserId(),
			pkey->getRequiredDevName() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::lockSecDevice( cfcore::CFGenKbSecDevicePKey* pkey ) {
		static const std::string S_ProcName( "lockSecDevice" );
		cfcore::ICFGenKbSecDeviceObj* locked = NULL;
		cfcore::CFGenKbSecDeviceBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecDeviceTableObj::readAllSecDevice( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecDevice" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		if( forceRead || ( allSecDevice == NULL ) ) {
			std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* map = new std::map<cfcore::CFGenKbSecDevicePKey,cfcore::ICFGenKbSecDeviceObj*>();
			allSecDevice = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecDeviceBuff* buff = NULL;
			cfcore::ICFGenKbSecDeviceObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecDevice->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecDevice->size();
		std::vector<cfcore::ICFGenKbSecDeviceObj*> arr;
		auto valIter = allSecDevice->begin();
		size_t idx = 0;
		while( valIter != allSecDevice->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecDeviceTableObj::pageAllSecDevice(const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecDevice" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* map = NULL;
		cfcore::CFGenKbSecDeviceBuff* buff = NULL;
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecDeviceObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecDevicePKey,cfcore::ICFGenKbSecDeviceObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->pageAllBuff( schema->getAuthorization(),
				priorSecUserId,
				priorDevName );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readSecDeviceByIdIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName, bool forceRead )
	{
		static const std::string S_ProcName( "readSecDeviceByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecDevicePKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		pkey.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = readSecDevice( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readSecDeviceByNameIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName, bool forceRead )
	{
		static const std::string S_ProcName( "readSecDeviceByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
				cfcore::ICFGenKbSecDeviceObj*>();
		}
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecDeviceBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->readDerivedByNameIdx( schema->getAuthorization(),
				SecUserId,
				DevName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::ICFGenKbSecDeviceObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecDeviceTableObj::readSecDeviceByUserIdx( const uuid_ptr_t SecUserId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecDeviceByUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecDeviceByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* dict;
		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* oldDict;
		if( indexByUserIdx == NULL ) {
			indexByUserIdx = new std::map< cfcore::CFGenKbSecDeviceByUserIdxKey,
				std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>*>();
		}
		auto searchIndexByUserIdx = indexByUserIdx->find( key );
		if( searchIndexByUserIdx != indexByUserIdx->end() ) {
			oldDict = searchIndexByUserIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>();
			cfcore::ICFGenKbSecDeviceObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->readDerivedByUserIdx( schema->getAuthorization(),
				SecUserId );
			cfcore::CFGenKbSecDeviceBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecDeviceObj* realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByUserIdx->erase( searchIndexByUserIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByUserIdx->insert( std::map< cfcore::CFGenKbSecDeviceByUserIdxKey,
				std::map< cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecDeviceObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readSecDeviceByLookupNameIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecDeviceByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
				cfcore::ICFGenKbSecDeviceObj*>();
		}
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecDeviceBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				SecUserId,
				DevName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbSecDeviceByNameIdxKey, cfcore::ICFGenKbSecDeviceObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readCachedSecDevice( cfcore::CFGenKbSecDevicePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecDevice" );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readCachedSecDeviceByIdIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_ProcName( "readCachedSecDeviceByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecDevicePKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		pkey.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = readCachedSecDevice( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readCachedSecDeviceByNameIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_ProcName( "readCachedSecDeviceByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
				cfcore::ICFGenKbSecDeviceObj*>();
		}
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecDeviceTableObj::readCachedSecDeviceByUserIdx( const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readCachedSecDeviceByUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecDeviceObj*> arr;
		cfcore::CFGenKbSecDeviceByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* dict;
		if( indexByUserIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByUserIdx = indexByUserIdx->find( key );
		if( searchIndexByUserIdx != indexByUserIdx->end() ) {
			dict = searchIndexByUserIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecDeviceObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecDeviceObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::readCachedSecDeviceByLookupNameIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecDeviceByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
				cfcore::ICFGenKbSecDeviceObj*>();
		}
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		cfcore::ICFGenKbSecDeviceObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecDeviceTableObj::pageSecDeviceByUserIdx( const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecUserId,
			const std::string* priorDevName )
	{
		static const std::string S_ProcName( "pageSecDeviceByUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecDeviceByUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecDeviceObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecDeviceBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->pageBuffByUserIdx( schema->getAuthorization(),
				SecUserId,
				priorSecUserId,
				priorDevName );
		std::vector<cfcore::ICFGenKbSecDeviceObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecDeviceBuff* buff;
		cfcore::ICFGenKbSecDeviceObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceTableObj::updateSecDevice( cfcore::ICFGenKbSecDeviceEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecDevice" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecDeviceObj* obj = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecDeviceBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->updateSecDevice( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( Obj->getSecDeviceBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( obj->realize() );
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

	void CFGenKbSecDeviceTableObj::deleteSecDevice( cfcore::ICFGenKbSecDeviceEditObj* Obj ) {
		cfcore::ICFGenKbSecDeviceObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->deleteSecDevice( schema->getAuthorization(),
			obj->getSecDeviceBuff() );
		deepDisposeByIdIdx( obj->getRequiredSecUserId(),
			obj->getRequiredDevName() );
	}

	void CFGenKbSecDeviceTableObj::deleteSecDeviceByIdIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		cfcore::CFGenKbSecDevicePKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		pkey.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = readSecDevice( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecDeviceEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecDeviceEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecDeviceEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecDeviceTableObj::deleteSecDeviceByNameIdx( const uuid_ptr_t SecUserId,
			const std::string& DevName )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbSecDeviceByNameIdxKey,
				cfcore::ICFGenKbSecDeviceObj*>();
		}
		cfcore::CFGenKbSecDeviceByNameIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredDevName( DevName );
		cfcore::ICFGenKbSecDeviceObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->deleteSecDeviceByNameIdx( schema->getAuthorization(),
				SecUserId,
				DevName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->deleteSecDeviceByNameIdx( schema->getAuthorization(),
				SecUserId,
				DevName );
		}
		deepDisposeByNameIdx( SecUserId,
			DevName );
	}

	void CFGenKbSecDeviceTableObj::deleteSecDeviceByUserIdx( const uuid_ptr_t SecUserId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->deleteSecDeviceByUserIdx( schema->getAuthorization(),
				SecUserId );
		deepDisposeByUserIdx( SecUserId );
	}

	void CFGenKbSecDeviceTableObj::reallyDetachFromIndexesSecDevice( cfcore::ICFGenKbSecDeviceObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecDevice" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecDeviceObj* obj = Obj;
		cfcore::CFGenKbSecDevicePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecDeviceObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbSecDeviceByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				keyNameIdx.setRequiredDevName( obj->getRequiredDevName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByUserIdx != NULL ) {
				cfcore::CFGenKbSecDeviceByUserIdxKey keyUserIdx;
				keyUserIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				auto searchUserIdx = indexByUserIdx->find( keyUserIdx );
				if( searchUserIdx != indexByUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecDevicePKey, cfcore::ICFGenKbSecDeviceObj*>* mapUserIdx = searchUserIdx->second;
					if( mapUserIdx != NULL ) {
						auto removalProbe = mapUserIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapUserIdx->end() ) {
							mapUserIdx->erase( removalProbe );
							if( mapUserIdx->empty() ) {
								delete mapUserIdx;
								mapUserIdx = NULL;
								indexByUserIdx->erase( searchUserIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
