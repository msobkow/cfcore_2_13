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

	const std::string CFGenKbRuleCartTableObj::CLASS_NAME( "CFGenKbRuleCartTableObj" );
	const std::string CFGenKbRuleCartTableObj::TABLE_NAME( "RuleCart" );
	const std::string CFGenKbRuleCartTableObj::TABLE_DBNAME( "kbrulecart" );

	CFGenKbRuleCartTableObj::CFGenKbRuleCartTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>();
		allRuleCart = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbRuleCartByTenantIdxKey,
			std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>*>();
		indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
			cfcore::ICFGenKbRuleCartObj*>();
	}

	CFGenKbRuleCartTableObj::CFGenKbRuleCartTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>();
		allRuleCart = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbRuleCartByTenantIdxKey,
			std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>*>();
		indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
			cfcore::ICFGenKbRuleCartObj*>();
	}

	CFGenKbRuleCartTableObj::~CFGenKbRuleCartTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbRuleCartObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbRuleCartTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbRuleCartTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbRuleCartTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbRuleCartTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbRuleCartTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbRuleCartTableObj::minimizeMemory() {
		if( allRuleCart != NULL ) {
			allRuleCart->clear();
			delete allRuleCart;
			allRuleCart = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbRuleCartByTenantIdxKey,
				std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbRuleCartByTenantIdxKey,
				std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* curByTenantIdx = NULL;
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
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbRuleCartObj* cur = NULL;
			cfcore::ICFGenKbRuleCartEditObj* edit = NULL;
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

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::newInstance() {
		cfcore::ICFGenKbRuleCartObj* inst = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( new CFGenKbRuleCartObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartTableObj::newEditInstance( cfcore::ICFGenKbRuleCartObj* orig ) {
		cfcore::ICFGenKbRuleCartEditObj* edit = dynamic_cast<cfcore::ICFGenKbRuleCartEditObj*>( new CFGenKbRuleCartEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::realizeRuleCart( cfcore::ICFGenKbRuleCartObj* Obj ) {
		static const std::string S_ProcName( "realizeRuleCart" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbRuleCartObj* obj = Obj;
		cfcore::ICFGenKbRuleCartObj* existingObj = NULL;
		cfcore::CFGenKbRuleCartPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbRuleCartObj* keepObj = NULL;
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
				cfcore::CFGenKbRuleCartByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbRuleCartByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbRuleCartObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbRuleCartByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbRuleCartObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbRuleCartByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleCartByNameIdxKey, cfcore::ICFGenKbRuleCartObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allRuleCart != NULL ) {
				allRuleCart->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbRuleCartObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbRuleCartByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbRuleCartObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbRuleCartByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleCartByNameIdxKey, cfcore::ICFGenKbRuleCartObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allRuleCart != NULL ) {
				allRuleCart->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbRuleCartTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbRuleCartObj*> list;
		cfcore::ICFGenKbRuleCartObj* existingObj = readCachedRuleCartByIdIdx( TenantId,
				Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbRuleCartObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbRuleCartBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->reallyDeepDisposeRuleCart( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbRuleCartTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbRuleCartObj*> list;
		std::vector<cfcore::ICFGenKbRuleCartObj*> matchesFound = readCachedRuleCartByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbRuleCartObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbRuleCartBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->reallyDeepDisposeRuleCart( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbRuleCartTableObj::deepDisposeByNameIdx( const int64_t TenantId,
			const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfcore::ICFGenKbRuleCartObj*> list;
		cfcore::ICFGenKbRuleCartObj* existingObj = readCachedRuleCartByNameIdx( TenantId,
				Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbRuleCartObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbRuleCartBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->reallyDeepDisposeRuleCart( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbRuleCartTableObj::reallyDeepDisposeRuleCart( cfcore::ICFGenKbRuleCartObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeRuleCart" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbRuleCartObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->deepDisposeByCartIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbRuleCartBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->reallyDetachFromIndexesRuleCart( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::createRuleCart( cfcore::ICFGenKbRuleCartEditObj* Obj ) {
		static const std::string S_ProcName( "createRuleCart" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbRuleCartObj* obj = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbRuleCartBuff* buff = dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->createRuleCart(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
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

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readRuleCart( cfcore::CFGenKbRuleCartPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRuleCart" );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		cfcore::ICFGenKbRuleCartObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbRuleCartBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
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

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::lockRuleCart( cfcore::CFGenKbRuleCartPKey* pkey ) {
		static const std::string S_ProcName( "lockRuleCart" );
		cfcore::ICFGenKbRuleCartObj* locked = NULL;
		cfcore::CFGenKbRuleCartBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbRuleCartObj*> CFGenKbRuleCartTableObj::readAllRuleCart( bool forceRead ) {
		static const std::string S_ProcName( "readAllRuleCart" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbRuleCartObj* realized = NULL;
		if( forceRead || ( allRuleCart == NULL ) ) {
			std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* map = new std::map<cfcore::CFGenKbRuleCartPKey,cfcore::ICFGenKbRuleCartObj*>();
			allRuleCart = map;
			std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbRuleCartBuff* buff = NULL;
			cfcore::ICFGenKbRuleCartObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allRuleCart->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allRuleCart->size();
		std::vector<cfcore::ICFGenKbRuleCartObj*> arr;
		auto valIter = allRuleCart->begin();
		size_t idx = 0;
		while( valIter != allRuleCart->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readRuleCartByIdIdx( const int64_t TenantId,
			const int64_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readRuleCartByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbRuleCartPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbRuleCartObj* obj = readRuleCart( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbRuleCartObj*> CFGenKbRuleCartTableObj::readRuleCartByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readRuleCartByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbRuleCartByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* dict;
		std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbRuleCartByTenantIdxKey,
				std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>();
			cfcore::ICFGenKbRuleCartObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbRuleCartBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbRuleCartBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbRuleCartObj* realized = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbRuleCartByTenantIdxKey,
				std::map< cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbRuleCartObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readRuleCartByNameIdx( const int64_t TenantId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readRuleCartByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
				cfcore::ICFGenKbRuleCartObj*>();
		}
		cfcore::CFGenKbRuleCartByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		cfcore::ICFGenKbRuleCartObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbRuleCartBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->readDerivedByNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleCartByNameIdxKey, cfcore::ICFGenKbRuleCartObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readRuleCartByLookupNameIdx( const int64_t TenantId,
			const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readRuleCartByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
				cfcore::ICFGenKbRuleCartObj*>();
		}
		cfcore::CFGenKbRuleCartByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		cfcore::ICFGenKbRuleCartObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbRuleCartBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleCartByNameIdxKey, cfcore::ICFGenKbRuleCartObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readCachedRuleCart( cfcore::CFGenKbRuleCartPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRuleCart" );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		cfcore::ICFGenKbRuleCartObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readCachedRuleCartByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		static const std::string S_ProcName( "readCachedRuleCartByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbRuleCartPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbRuleCartObj* obj = readCachedRuleCart( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbRuleCartObj*> CFGenKbRuleCartTableObj::readCachedRuleCartByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedRuleCartByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbRuleCartObj*> arr;
		cfcore::CFGenKbRuleCartByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbRuleCartObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbRuleCartObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readCachedRuleCartByNameIdx( const int64_t TenantId,
			const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedRuleCartByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
				cfcore::ICFGenKbRuleCartObj*>();
		}
		cfcore::CFGenKbRuleCartByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::readCachedRuleCartByLookupNameIdx( const int64_t TenantId,
			const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedRuleCartByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
				cfcore::ICFGenKbRuleCartObj*>();
		}
		cfcore::CFGenKbRuleCartByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		cfcore::ICFGenKbRuleCartObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartTableObj::updateRuleCart( cfcore::ICFGenKbRuleCartEditObj* Obj ) {
		static const std::string S_ProcName( "updateRuleCart" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbRuleCartObj* obj = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbRuleCartBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->updateRuleCart( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( Obj->getRuleCartBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( dynamic_cast<cfcore::CFGenKbRuleCartTableObj*>( schema->getRuleCartTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( obj->realize() );
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

	void CFGenKbRuleCartTableObj::deleteRuleCart( cfcore::ICFGenKbRuleCartEditObj* Obj ) {
		cfcore::ICFGenKbRuleCartObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->deleteRuleCart( schema->getAuthorization(),
			obj->getRuleCartBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredId() );
	}

	void CFGenKbRuleCartTableObj::deleteRuleCartByIdIdx( const int64_t TenantId,
			const int64_t Id )
	{
		cfcore::CFGenKbRuleCartPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbRuleCartObj* obj = readRuleCart( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbRuleCartEditObj* editObj = dynamic_cast<cfcore::ICFGenKbRuleCartEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbRuleCartEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbRuleCartTableObj::deleteRuleCartByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->deleteRuleCartByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbRuleCartTableObj::deleteRuleCartByNameIdx( const int64_t TenantId,
			const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleCartByNameIdxKey,
				cfcore::ICFGenKbRuleCartObj*>();
		}
		cfcore::CFGenKbRuleCartByNameIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleCartObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->deleteRuleCartByNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->deleteRuleCartByNameIdx( schema->getAuthorization(),
				TenantId,
				Name );
		}
		deepDisposeByNameIdx( TenantId,
			Name );
	}

	void CFGenKbRuleCartTableObj::reallyDetachFromIndexesRuleCart( cfcore::ICFGenKbRuleCartObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesRuleCart" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbRuleCartObj* obj = Obj;
		cfcore::CFGenKbRuleCartPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbRuleCartObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbRuleCartByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbRuleCartPKey, cfcore::ICFGenKbRuleCartObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbRuleCartByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
