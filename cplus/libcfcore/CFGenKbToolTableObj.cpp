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

	const std::string CFGenKbToolTableObj::CLASS_NAME( "CFGenKbToolTableObj" );
	const std::string CFGenKbToolTableObj::TABLE_NAME( "Tool" );
	const std::string CFGenKbToolTableObj::TABLE_DBNAME( "kbtool" );

	CFGenKbToolTableObj::CFGenKbToolTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>();
		allTool = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
			cfcore::ICFGenKbToolObj*>();
		indexByReplacesIdx = new std::map< cfcore::CFGenKbToolByReplacesIdxKey,
			std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>*>();
	}

	CFGenKbToolTableObj::CFGenKbToolTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>();
		allTool = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
			cfcore::ICFGenKbToolObj*>();
		indexByReplacesIdx = new std::map< cfcore::CFGenKbToolByReplacesIdxKey,
			std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>*>();
	}

	CFGenKbToolTableObj::~CFGenKbToolTableObj() {
		minimizeMemory();
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( indexByReplacesIdx != NULL ) {
			delete indexByReplacesIdx;
			indexByReplacesIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbToolObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbToolTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbToolTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbToolTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbToolTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbToolTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbToolTableObj::minimizeMemory() {
		if( allTool != NULL ) {
			allTool->clear();
			delete allTool;
			allTool = NULL;
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( indexByReplacesIdx != NULL ) {
			std::map< cfcore::CFGenKbToolByReplacesIdxKey,
				std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* >::iterator iterByReplacesIdx = indexByReplacesIdx->begin();
			std::map< cfcore::CFGenKbToolByReplacesIdxKey,
				std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* >::iterator endByReplacesIdx = indexByReplacesIdx->end();
			std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* curByReplacesIdx = NULL;
			while( iterByReplacesIdx != endByReplacesIdx ) {
				curByReplacesIdx = iterByReplacesIdx->second;
				if( curByReplacesIdx != NULL ) {
					curByReplacesIdx->clear();
					delete curByReplacesIdx;
					curByReplacesIdx = NULL;
					iterByReplacesIdx->second = NULL;
				}
				iterByReplacesIdx ++;
			}
			indexByReplacesIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbToolObj* cur = NULL;
			cfcore::ICFGenKbToolEditObj* edit = NULL;
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

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::newInstance() {
		cfcore::ICFGenKbToolObj* inst = dynamic_cast<cfcore::ICFGenKbToolObj*>( new CFGenKbToolObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolTableObj::newEditInstance( cfcore::ICFGenKbToolObj* orig ) {
		cfcore::ICFGenKbToolEditObj* edit = dynamic_cast<cfcore::ICFGenKbToolEditObj*>( new CFGenKbToolEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::realizeTool( cfcore::ICFGenKbToolObj* Obj ) {
		static const std::string S_ProcName( "realizeTool" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbToolObj* obj = Obj;
		cfcore::ICFGenKbToolObj* existingObj = NULL;
		cfcore::CFGenKbToolPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbToolObj* keepObj = NULL;
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
				cfcore::CFGenKbToolByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByReplacesIdx != NULL ) {
				cfcore::CFGenKbToolByReplacesIdxKey keyReplacesIdx;
				if( keepObj->isOptionalReplacesIdNull() ) {
					keyReplacesIdx.setOptionalReplacesIdNull();
				}
				else {
					keyReplacesIdx.setOptionalReplacesIdValue( keepObj->getOptionalReplacesIdValue() );
				}
				auto searchReplacesIdx = indexByReplacesIdx->find( keyReplacesIdx );
				if( searchReplacesIdx != indexByReplacesIdx->end() ) {
					std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* mapReplacesIdx = searchReplacesIdx->second;
					if( mapReplacesIdx != NULL ) {
						auto removalProbe = mapReplacesIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapReplacesIdx->end() ) {
							mapReplacesIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbToolBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbToolObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbToolObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbToolByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolByNameIdxKey, cfcore::ICFGenKbToolObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByReplacesIdx != NULL ) {
				static const std::string S_AReplacesIdxObj( "aReplacesIdxObj" );
				cfcore::ICFGenKbToolObj* aReplacesIdxObj =
					dynamic_cast<cfcore::ICFGenKbToolObj*>( keepObj );
				if( aReplacesIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AReplacesIdxObj );
				}
				cfcore::CFGenKbToolByReplacesIdxKey keyReplacesIdx;
				if( keepObj->isOptionalReplacesIdNull() ) {
					keyReplacesIdx.setOptionalReplacesIdNull();
				}
				else {
					keyReplacesIdx.setOptionalReplacesIdValue( keepObj->getOptionalReplacesIdValue() );
				}
				auto searchIndexByReplacesIdx = indexByReplacesIdx->find( keyReplacesIdx );
				if( searchIndexByReplacesIdx != indexByReplacesIdx->end() ) {
					std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* mapReplacesIdx = searchIndexByReplacesIdx->second;
					if( mapReplacesIdx != NULL ) {
						mapReplacesIdx->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(keepObj->getPKey()), aReplacesIdxObj ) );
					}
				}
			}

			if( allTool != NULL ) {
				allTool->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbToolObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbToolObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbToolByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolByNameIdxKey, cfcore::ICFGenKbToolObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( indexByReplacesIdx != NULL ) {
				static const std::string S_AReplacesIdxObj( "aReplacesIdxObj" );
				cfcore::ICFGenKbToolObj* aReplacesIdxObj =
					dynamic_cast<cfcore::ICFGenKbToolObj*>( keepObj );
				if( aReplacesIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AReplacesIdxObj );
				}
				cfcore::CFGenKbToolByReplacesIdxKey keyReplacesIdx;
				if( keepObj->isOptionalReplacesIdNull() ) {
					keyReplacesIdx.setOptionalReplacesIdNull();
				}
				else {
					keyReplacesIdx.setOptionalReplacesIdValue( keepObj->getOptionalReplacesIdValue() );
				}
				auto searchIndexByReplacesIdx = indexByReplacesIdx->find( keyReplacesIdx );
				if( searchIndexByReplacesIdx != indexByReplacesIdx->end() ) {
					std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* mapReplacesIdx = searchIndexByReplacesIdx->second;
					if( mapReplacesIdx != NULL ) {
						mapReplacesIdx->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(keepObj->getPKey()), aReplacesIdxObj ) );
					}
				}
			}

			if( allTool != NULL ) {
				allTool->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbToolTableObj::deepDisposeByIdIdx( const int16_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbToolObj*> list;
		cfcore::ICFGenKbToolObj* existingObj = readCachedToolByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbToolObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->reallyDeepDisposeTool( dynamic_cast<cfcore::ICFGenKbToolObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolTableObj::deepDisposeByNameIdx( const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfcore::ICFGenKbToolObj*> list;
		cfcore::ICFGenKbToolObj* existingObj = readCachedToolByNameIdx( Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbToolObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->reallyDeepDisposeTool( dynamic_cast<cfcore::ICFGenKbToolObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolTableObj::deepDisposeByReplacesIdx( const int16_t* ReplacesId ) {
		static const std::string S_ProcName( "deepDisposeByReplacesIdx" );
		std::vector<cfcore::ICFGenKbToolObj*> list;
		std::vector<cfcore::ICFGenKbToolObj*> matchesFound = readCachedToolByReplacesIdx( ReplacesId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbToolObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->reallyDeepDisposeTool( dynamic_cast<cfcore::ICFGenKbToolObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbToolTableObj::reallyDeepDisposeTool( cfcore::ICFGenKbToolObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTool" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbToolObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->reallyDetachFromIndexesTool( dynamic_cast<cfcore::ICFGenKbToolObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::createTool( cfcore::ICFGenKbToolEditObj* Obj ) {
		static const std::string S_ProcName( "createTool" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbToolObj* obj = dynamic_cast<cfcore::ICFGenKbToolObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbToolBuff* buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->createTool(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbToolBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
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

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readTool( cfcore::CFGenKbToolPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTool" );
		cfcore::ICFGenKbToolObj* obj = NULL;
		cfcore::ICFGenKbToolObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbToolBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
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

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::lockTool( cfcore::CFGenKbToolPKey* pkey ) {
		static const std::string S_ProcName( "lockTool" );
		cfcore::ICFGenKbToolObj* locked = NULL;
		cfcore::CFGenKbToolBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbToolObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbToolObj*> CFGenKbToolTableObj::readAllTool( bool forceRead ) {
		static const std::string S_ProcName( "readAllTool" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbToolObj* realized = NULL;
		if( forceRead || ( allTool == NULL ) ) {
			std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* map = new std::map<cfcore::CFGenKbToolPKey,cfcore::ICFGenKbToolObj*>();
			allTool = map;
			std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbToolBuff* buff = NULL;
			cfcore::ICFGenKbToolObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTool->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTool->size();
		std::vector<cfcore::ICFGenKbToolObj*> arr;
		auto valIter = allTool->begin();
		size_t idx = 0;
		while( valIter != allTool->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readToolByIdIdx( const int16_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readToolByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbToolObj* obj = readTool( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readToolByNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readToolByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
				cfcore::ICFGenKbToolObj*>();
		}
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolObj* obj = NULL;
		cfcore::ICFGenKbToolObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbToolBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->readDerivedByNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolByNameIdxKey, cfcore::ICFGenKbToolObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbToolObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbToolObj*> CFGenKbToolTableObj::readToolByReplacesIdx( const int16_t* ReplacesId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readToolByReplacesIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolByReplacesIdxKey key;
		if( ReplacesId == NULL ) {
			key.setOptionalReplacesIdNull();
		}
		else {
			key.setOptionalReplacesIdValue( *ReplacesId );
		}
		std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* dict;
		std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* oldDict;
		if( indexByReplacesIdx == NULL ) {
			indexByReplacesIdx = new std::map< cfcore::CFGenKbToolByReplacesIdxKey,
				std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>*>();
		}
		auto searchIndexByReplacesIdx = indexByReplacesIdx->find( key );
		if( searchIndexByReplacesIdx != indexByReplacesIdx->end() ) {
			oldDict = searchIndexByReplacesIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>();
			cfcore::ICFGenKbToolObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbToolBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->readDerivedByReplacesIdx( schema->getAuthorization(),
				ReplacesId );
			cfcore::CFGenKbToolBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbToolObj* realized = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByReplacesIdx->erase( searchIndexByReplacesIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByReplacesIdx->insert( std::map< cfcore::CFGenKbToolByReplacesIdxKey,
				std::map< cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbToolObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readToolByLookupNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readToolByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
				cfcore::ICFGenKbToolObj*>();
		}
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolObj* obj = NULL;
		cfcore::ICFGenKbToolObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbToolBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbToolObj*>( dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbToolByNameIdxKey, cfcore::ICFGenKbToolObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbToolObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readCachedTool( cfcore::CFGenKbToolPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTool" );
		cfcore::ICFGenKbToolObj* obj = NULL;
		cfcore::ICFGenKbToolObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readCachedToolByIdIdx( const int16_t Id )
	{
		static const std::string S_ProcName( "readCachedToolByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbToolPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbToolObj* obj = readCachedTool( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readCachedToolByNameIdx( const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedToolByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
				cfcore::ICFGenKbToolObj*>();
		}
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbToolObj*> CFGenKbToolTableObj::readCachedToolByReplacesIdx( const int16_t* ReplacesId )
	{
		static const std::string S_ProcName( "readCachedToolByReplacesIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbToolObj*> arr;
		cfcore::CFGenKbToolByReplacesIdxKey key;
		if( ReplacesId == NULL ) {
			key.setOptionalReplacesIdNull();
		}
		else {
			key.setOptionalReplacesIdValue( *ReplacesId );
		}
		std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* dict;
		if( indexByReplacesIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByReplacesIdx = indexByReplacesIdx->find( key );
		if( searchIndexByReplacesIdx != indexByReplacesIdx->end() ) {
			dict = searchIndexByReplacesIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbToolObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbToolObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::readCachedToolByLookupNameIdx( const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedToolByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
				cfcore::ICFGenKbToolObj*>();
		}
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolObj* obj = NULL;
		cfcore::ICFGenKbToolObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbToolBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolTableObj::updateTool( cfcore::ICFGenKbToolEditObj* Obj ) {
		static const std::string S_ProcName( "updateTool" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbToolObj* obj = dynamic_cast<cfcore::ICFGenKbToolObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbToolBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->updateTool( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbToolBuff*>( Obj->getToolBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbToolObj*>( dynamic_cast<cfcore::CFGenKbToolTableObj*>( schema->getToolTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbToolObj*>( obj->realize() );
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

	void CFGenKbToolTableObj::deleteTool( cfcore::ICFGenKbToolEditObj* Obj ) {
		cfcore::ICFGenKbToolObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->deleteTool( schema->getAuthorization(),
			obj->getToolBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFGenKbToolTableObj::deleteToolByIdIdx( const int16_t Id )
	{
		cfcore::CFGenKbToolPKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbToolObj* obj = readTool( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbToolEditObj* editObj = dynamic_cast<cfcore::ICFGenKbToolEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbToolEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbToolTableObj::deleteToolByNameIdx( const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbToolByNameIdxKey,
				cfcore::ICFGenKbToolObj*>();
		}
		cfcore::CFGenKbToolByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbToolObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->deleteToolByNameIdx( schema->getAuthorization(),
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->deleteToolByNameIdx( schema->getAuthorization(),
				Name );
		}
		deepDisposeByNameIdx( Name );
	}

	void CFGenKbToolTableObj::deleteToolByReplacesIdx( const int16_t* ReplacesId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->deleteToolByReplacesIdx( schema->getAuthorization(),
				ReplacesId );
		deepDisposeByReplacesIdx( ReplacesId );
	}

	void CFGenKbToolTableObj::reallyDetachFromIndexesTool( cfcore::ICFGenKbToolObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTool" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbToolObj* obj = Obj;
		cfcore::CFGenKbToolPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbToolObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbToolByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( obj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			if( indexByReplacesIdx != NULL ) {
				cfcore::CFGenKbToolByReplacesIdxKey keyReplacesIdx;
				if( obj->isOptionalReplacesIdNull() ) {
					keyReplacesIdx.setOptionalReplacesIdNull();
				}
				else {
					keyReplacesIdx.setOptionalReplacesIdValue( obj->getOptionalReplacesIdValue() );
				}
				auto searchReplacesIdx = indexByReplacesIdx->find( keyReplacesIdx );
				if( searchReplacesIdx != indexByReplacesIdx->end() ) {
					std::map<cfcore::CFGenKbToolPKey, cfcore::ICFGenKbToolObj*>* mapReplacesIdx = searchReplacesIdx->second;
					if( mapReplacesIdx != NULL ) {
						auto removalProbe = mapReplacesIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapReplacesIdx->end() ) {
							mapReplacesIdx->erase( removalProbe );
							if( mapReplacesIdx->empty() ) {
								delete mapReplacesIdx;
								mapReplacesIdx = NULL;
								indexByReplacesIdx->erase( searchReplacesIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
