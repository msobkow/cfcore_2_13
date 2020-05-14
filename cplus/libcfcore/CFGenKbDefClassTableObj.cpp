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

	const std::string CFGenKbDefClassTableObj::CLASS_NAME( "CFGenKbDefClassTableObj" );
	const std::string CFGenKbDefClassTableObj::TABLE_NAME( "DefClass" );
	const std::string CFGenKbDefClassTableObj::TABLE_DBNAME( "kbdefclass" );

	CFGenKbDefClassTableObj::CFGenKbDefClassTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>();
		allDefClass = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
			cfcore::ICFGenKbDefClassObj*>();
		indexByBaseIdx = new std::map< cfcore::CFGenKbDefClassByBaseIdxKey,
			std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>*>();
	}

	CFGenKbDefClassTableObj::CFGenKbDefClassTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>();
		allDefClass = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
			cfcore::ICFGenKbDefClassObj*>();
		indexByBaseIdx = new std::map< cfcore::CFGenKbDefClassByBaseIdxKey,
			std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>*>();
	}

	CFGenKbDefClassTableObj::~CFGenKbDefClassTableObj() {
		minimizeMemory();
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( indexByBaseIdx != NULL ) {
			delete indexByBaseIdx;
			indexByBaseIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbDefClassObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbDefClassTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbDefClassTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbDefClassTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbDefClassTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbDefClassTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbDefClassTableObj::minimizeMemory() {
		if( allDefClass != NULL ) {
			allDefClass->clear();
			delete allDefClass;
			allDefClass = NULL;
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( indexByBaseIdx != NULL ) {
			std::map< cfcore::CFGenKbDefClassByBaseIdxKey,
				std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* >::iterator iterByBaseIdx = indexByBaseIdx->begin();
			std::map< cfcore::CFGenKbDefClassByBaseIdxKey,
				std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* >::iterator endByBaseIdx = indexByBaseIdx->end();
			std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* curByBaseIdx = NULL;
			while( iterByBaseIdx != endByBaseIdx ) {
				curByBaseIdx = iterByBaseIdx->second;
				if( curByBaseIdx != NULL ) {
					curByBaseIdx->clear();
					delete curByBaseIdx;
					curByBaseIdx = NULL;
					iterByBaseIdx->second = NULL;
				}
				iterByBaseIdx ++;
			}
			indexByBaseIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbDefClassObj* cur = NULL;
			cfcore::ICFGenKbDefClassEditObj* edit = NULL;
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

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::newInstance() {
		cfcore::ICFGenKbDefClassObj* inst = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( new CFGenKbDefClassObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassTableObj::newEditInstance( cfcore::ICFGenKbDefClassObj* orig ) {
		cfcore::ICFGenKbDefClassEditObj* edit = dynamic_cast<cfcore::ICFGenKbDefClassEditObj*>( new CFGenKbDefClassEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::realizeDefClass( cfcore::ICFGenKbDefClassObj* Obj ) {
		static const std::string S_ProcName( "realizeDefClass" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbDefClassObj* obj = Obj;
		cfcore::ICFGenKbDefClassObj* existingObj = NULL;
		cfcore::CFGenKbDefClassPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbDefClassObj* keepObj = NULL;
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
				cfcore::CFGenKbDefClassByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByBaseIdx != NULL ) {
				cfcore::CFGenKbDefClassByBaseIdxKey keyBaseIdx;
				if( keepObj->isOptionalBaseIdNull() ) {
					keyBaseIdx.setOptionalBaseIdNull();
				}
				else {
					keyBaseIdx.setOptionalBaseIdValue( keepObj->getOptionalBaseIdValue() );
				}
				auto searchBaseIdx = indexByBaseIdx->find( keyBaseIdx );
				if( searchBaseIdx != indexByBaseIdx->end() ) {
					std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* mapBaseIdx = searchBaseIdx->second;
					if( mapBaseIdx != NULL ) {
						auto removalProbe = mapBaseIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapBaseIdx->end() ) {
							mapBaseIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbDefClassObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbDefClassObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbDefClassByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbDefClassByNameIdxKey, cfcore::ICFGenKbDefClassObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByBaseIdx != NULL ) {
				static const std::string S_ABaseIdxObj( "aBaseIdxObj" );
				cfcore::ICFGenKbDefClassObj* aBaseIdxObj =
					dynamic_cast<cfcore::ICFGenKbDefClassObj*>( keepObj );
				if( aBaseIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABaseIdxObj );
				}
				cfcore::CFGenKbDefClassByBaseIdxKey keyBaseIdx;
				if( keepObj->isOptionalBaseIdNull() ) {
					keyBaseIdx.setOptionalBaseIdNull();
				}
				else {
					keyBaseIdx.setOptionalBaseIdValue( keepObj->getOptionalBaseIdValue() );
				}
				auto searchIndexByBaseIdx = indexByBaseIdx->find( keyBaseIdx );
				if( searchIndexByBaseIdx != indexByBaseIdx->end() ) {
					std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* mapBaseIdx = searchIndexByBaseIdx->second;
					if( mapBaseIdx != NULL ) {
						mapBaseIdx->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(keepObj->getPKey()), aBaseIdxObj ) );
					}
				}
			}

			if( allDefClass != NULL ) {
				allDefClass->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbDefClassObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbDefClassObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbDefClassByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbDefClassByNameIdxKey, cfcore::ICFGenKbDefClassObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByBaseIdx != NULL ) {
				static const std::string S_ABaseIdxObj( "aBaseIdxObj" );
				cfcore::ICFGenKbDefClassObj* aBaseIdxObj =
					dynamic_cast<cfcore::ICFGenKbDefClassObj*>( keepObj );
				if( aBaseIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABaseIdxObj );
				}
				cfcore::CFGenKbDefClassByBaseIdxKey keyBaseIdx;
				if( keepObj->isOptionalBaseIdNull() ) {
					keyBaseIdx.setOptionalBaseIdNull();
				}
				else {
					keyBaseIdx.setOptionalBaseIdValue( keepObj->getOptionalBaseIdValue() );
				}
				auto searchIndexByBaseIdx = indexByBaseIdx->find( keyBaseIdx );
				if( searchIndexByBaseIdx != indexByBaseIdx->end() ) {
					std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* mapBaseIdx = searchIndexByBaseIdx->second;
					if( mapBaseIdx != NULL ) {
						mapBaseIdx->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(keepObj->getPKey()), aBaseIdxObj ) );
					}
				}
			}

			if( allDefClass != NULL ) {
				allDefClass->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbDefClassTableObj::deepDisposeByIdIdx( const int16_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbDefClassObj*> list;
		cfcore::ICFGenKbDefClassObj* existingObj = readCachedDefClassByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbDefClassObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->reallyDeepDisposeDefClass( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbDefClassTableObj::deepDisposeByNameIdx( const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfcore::ICFGenKbDefClassObj*> list;
		cfcore::ICFGenKbDefClassObj* existingObj = readCachedDefClassByNameIdx( Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbDefClassObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->reallyDeepDisposeDefClass( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbDefClassTableObj::deepDisposeByBaseIdx( const int16_t* BaseId ) {
		static const std::string S_ProcName( "deepDisposeByBaseIdx" );
		std::vector<cfcore::ICFGenKbDefClassObj*> list;
		std::vector<cfcore::ICFGenKbDefClassObj*> matchesFound = readCachedDefClassByBaseIdx( BaseId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbDefClassObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->reallyDeepDisposeDefClass( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbDefClassTableObj::reallyDeepDisposeDefClass( cfcore::ICFGenKbDefClassObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeDefClass" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbDefClassObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->reallyDetachFromIndexesDefClass( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::createDefClass( cfcore::ICFGenKbDefClassEditObj* Obj ) {
		static const std::string S_ProcName( "createDefClass" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbDefClassObj* obj = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbDefClassBuff* buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->createDefClass(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbDefClassBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
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

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readDefClass( cfcore::CFGenKbDefClassPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readDefClass" );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		cfcore::ICFGenKbDefClassObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbDefClassBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
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

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::lockDefClass( cfcore::CFGenKbDefClassPKey* pkey ) {
		static const std::string S_ProcName( "lockDefClass" );
		cfcore::ICFGenKbDefClassObj* locked = NULL;
		cfcore::CFGenKbDefClassBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbDefClassObj*> CFGenKbDefClassTableObj::readAllDefClass( bool forceRead ) {
		static const std::string S_ProcName( "readAllDefClass" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbDefClassObj* realized = NULL;
		if( forceRead || ( allDefClass == NULL ) ) {
			std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* map = new std::map<cfcore::CFGenKbDefClassPKey,cfcore::ICFGenKbDefClassObj*>();
			allDefClass = map;
			std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbDefClassBuff* buff = NULL;
			cfcore::ICFGenKbDefClassObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allDefClass->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allDefClass->size();
		std::vector<cfcore::ICFGenKbDefClassObj*> arr;
		auto valIter = allDefClass->begin();
		size_t idx = 0;
		while( valIter != allDefClass->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readDefClassByIdIdx( const int16_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readDefClassByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbDefClassPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbDefClassObj* obj = readDefClass( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readDefClassByNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readDefClassByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
				cfcore::ICFGenKbDefClassObj*>();
		}
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		cfcore::ICFGenKbDefClassObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbDefClassBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->readDerivedByNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbDefClassByNameIdxKey, cfcore::ICFGenKbDefClassObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbDefClassObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbDefClassObj*> CFGenKbDefClassTableObj::readDefClassByBaseIdx( const int16_t* BaseId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readDefClassByBaseIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbDefClassByBaseIdxKey key;
		if( BaseId == NULL ) {
			key.setOptionalBaseIdNull();
		}
		else {
			key.setOptionalBaseIdValue( *BaseId );
		}
		std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* dict;
		std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* oldDict;
		if( indexByBaseIdx == NULL ) {
			indexByBaseIdx = new std::map< cfcore::CFGenKbDefClassByBaseIdxKey,
				std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>*>();
		}
		auto searchIndexByBaseIdx = indexByBaseIdx->find( key );
		if( searchIndexByBaseIdx != indexByBaseIdx->end() ) {
			oldDict = searchIndexByBaseIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>();
			cfcore::ICFGenKbDefClassObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbDefClassBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->readDerivedByBaseIdx( schema->getAuthorization(),
				BaseId );
			cfcore::CFGenKbDefClassBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbDefClassObj* realized = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByBaseIdx->erase( searchIndexByBaseIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByBaseIdx->insert( std::map< cfcore::CFGenKbDefClassByBaseIdxKey,
				std::map< cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbDefClassObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readDefClassByLookupNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readDefClassByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
				cfcore::ICFGenKbDefClassObj*>();
		}
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		cfcore::ICFGenKbDefClassObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbDefClassBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbDefClassByNameIdxKey, cfcore::ICFGenKbDefClassObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbDefClassObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readCachedDefClass( cfcore::CFGenKbDefClassPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readDefClass" );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		cfcore::ICFGenKbDefClassObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readCachedDefClassByIdIdx( const int16_t Id )
	{
		static const std::string S_ProcName( "readCachedDefClassByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbDefClassPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbDefClassObj* obj = readCachedDefClass( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readCachedDefClassByNameIdx( const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedDefClassByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
				cfcore::ICFGenKbDefClassObj*>();
		}
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbDefClassBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbDefClassObj*> CFGenKbDefClassTableObj::readCachedDefClassByBaseIdx( const int16_t* BaseId )
	{
		static const std::string S_ProcName( "readCachedDefClassByBaseIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbDefClassObj*> arr;
		cfcore::CFGenKbDefClassByBaseIdxKey key;
		if( BaseId == NULL ) {
			key.setOptionalBaseIdNull();
		}
		else {
			key.setOptionalBaseIdValue( *BaseId );
		}
		std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* dict;
		if( indexByBaseIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByBaseIdx = indexByBaseIdx->find( key );
		if( searchIndexByBaseIdx != indexByBaseIdx->end() ) {
			dict = searchIndexByBaseIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbDefClassObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbDefClassObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbDefClassBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::readCachedDefClassByLookupNameIdx( const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedDefClassByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
				cfcore::ICFGenKbDefClassObj*>();
		}
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		cfcore::ICFGenKbDefClassObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbDefClassBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassTableObj::updateDefClass( cfcore::ICFGenKbDefClassEditObj* Obj ) {
		static const std::string S_ProcName( "updateDefClass" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbDefClassObj* obj = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbDefClassBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->updateDefClass( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbDefClassBuff*>( Obj->getDefClassBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( dynamic_cast<cfcore::CFGenKbDefClassTableObj*>( schema->getDefClassTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbDefClassObj*>( obj->realize() );
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

	void CFGenKbDefClassTableObj::deleteDefClass( cfcore::ICFGenKbDefClassEditObj* Obj ) {
		cfcore::ICFGenKbDefClassObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->deleteDefClass( schema->getAuthorization(),
			obj->getDefClassBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFGenKbDefClassTableObj::deleteDefClassByIdIdx( const int16_t Id )
	{
		cfcore::CFGenKbDefClassPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbDefClassObj* obj = readDefClass( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbDefClassEditObj* editObj = dynamic_cast<cfcore::ICFGenKbDefClassEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbDefClassEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbDefClassTableObj::deleteDefClassByNameIdx( const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbDefClassByNameIdxKey,
				cfcore::ICFGenKbDefClassObj*>();
		}
		cfcore::CFGenKbDefClassByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbDefClassObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->deleteDefClassByNameIdx( schema->getAuthorization(),
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->deleteDefClassByNameIdx( schema->getAuthorization(),
				Name );
		}
		deepDisposeByNameIdx( Name );
	}

	void CFGenKbDefClassTableObj::deleteDefClassByBaseIdx( const int16_t* BaseId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->deleteDefClassByBaseIdx( schema->getAuthorization(),
				BaseId );
		deepDisposeByBaseIdx( BaseId );
	}

	void CFGenKbDefClassTableObj::reallyDetachFromIndexesDefClass( cfcore::ICFGenKbDefClassObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesDefClass" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbDefClassObj* obj = Obj;
		cfcore::CFGenKbDefClassPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbDefClassObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbDefClassByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByBaseIdx != NULL ) {
				cfcore::CFGenKbDefClassByBaseIdxKey keyBaseIdx;
				if( obj->isOptionalBaseIdNull() ) {
					keyBaseIdx.setOptionalBaseIdNull();
				}
				else {
					keyBaseIdx.setOptionalBaseIdValue( obj->getOptionalBaseIdValue() );
				}
				auto searchBaseIdx = indexByBaseIdx->find( keyBaseIdx );
				if( searchBaseIdx != indexByBaseIdx->end() ) {
					std::map<cfcore::CFGenKbDefClassPKey, cfcore::ICFGenKbDefClassObj*>* mapBaseIdx = searchBaseIdx->second;
					if( mapBaseIdx != NULL ) {
						auto removalProbe = mapBaseIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapBaseIdx->end() ) {
							mapBaseIdx->erase( removalProbe );
							if( mapBaseIdx->empty() ) {
								delete mapBaseIdx;
								mapBaseIdx = NULL;
								indexByBaseIdx->erase( searchBaseIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
