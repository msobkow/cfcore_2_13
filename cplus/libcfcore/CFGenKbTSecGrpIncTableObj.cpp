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

	const std::string CFGenKbTSecGrpIncTableObj::CLASS_NAME( "CFGenKbTSecGrpIncTableObj" );
	const std::string CFGenKbTSecGrpIncTableObj::TABLE_NAME( "TSecGrpInc" );
	const std::string CFGenKbTSecGrpIncTableObj::TABLE_DBNAME( "TSecInc" );

	CFGenKbTSecGrpIncTableObj::CFGenKbTSecGrpIncTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>();
		allTSecGrpInc = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		indexByIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		indexByUIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey,
			cfcore::ICFGenKbTSecGrpIncObj*>();
	}

	CFGenKbTSecGrpIncTableObj::CFGenKbTSecGrpIncTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>();
		allTSecGrpInc = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		indexByGroupIdx = new std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		indexByIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		indexByUIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey,
			cfcore::ICFGenKbTSecGrpIncObj*>();
	}

	CFGenKbTSecGrpIncTableObj::~CFGenKbTSecGrpIncTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByGroupIdx != NULL ) {
			delete indexByGroupIdx;
			indexByGroupIdx = NULL;
		}
		if( indexByIncludeIdx != NULL ) {
			delete indexByIncludeIdx;
			indexByIncludeIdx = NULL;
		}
		if( indexByUIncludeIdx != NULL ) {
			delete indexByUIncludeIdx;
			indexByUIncludeIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbTSecGrpIncObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGrpIncTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbTSecGrpIncTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbTSecGrpIncTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbTSecGrpIncTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbTSecGrpIncTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbTSecGrpIncTableObj::minimizeMemory() {
		if( allTSecGrpInc != NULL ) {
			allTSecGrpInc->clear();
			delete allTSecGrpInc;
			allTSecGrpInc = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* curByTenantIdx = NULL;
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
		if( indexByGroupIdx != NULL ) {
			std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* >::iterator iterByGroupIdx = indexByGroupIdx->begin();
			std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* >::iterator endByGroupIdx = indexByGroupIdx->end();
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* curByGroupIdx = NULL;
			while( iterByGroupIdx != endByGroupIdx ) {
				curByGroupIdx = iterByGroupIdx->second;
				if( curByGroupIdx != NULL ) {
					curByGroupIdx->clear();
					delete curByGroupIdx;
					curByGroupIdx = NULL;
					iterByGroupIdx->second = NULL;
				}
				iterByGroupIdx ++;
			}
			indexByGroupIdx->clear();
		}
		if( indexByIncludeIdx != NULL ) {
			std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* >::iterator iterByIncludeIdx = indexByIncludeIdx->begin();
			std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* >::iterator endByIncludeIdx = indexByIncludeIdx->end();
			std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* curByIncludeIdx = NULL;
			while( iterByIncludeIdx != endByIncludeIdx ) {
				curByIncludeIdx = iterByIncludeIdx->second;
				if( curByIncludeIdx != NULL ) {
					curByIncludeIdx->clear();
					delete curByIncludeIdx;
					curByIncludeIdx = NULL;
					iterByIncludeIdx->second = NULL;
				}
				iterByIncludeIdx ++;
			}
			indexByIncludeIdx->clear();
		}
		if( indexByUIncludeIdx != NULL ) {
			indexByUIncludeIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbTSecGrpIncObj* cur = NULL;
			cfcore::ICFGenKbTSecGrpIncEditObj* edit = NULL;
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::newInstance() {
		cfcore::ICFGenKbTSecGrpIncObj* inst = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( new CFGenKbTSecGrpIncObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncTableObj::newEditInstance( cfcore::ICFGenKbTSecGrpIncObj* orig ) {
		cfcore::ICFGenKbTSecGrpIncEditObj* edit = dynamic_cast<cfcore::ICFGenKbTSecGrpIncEditObj*>( new CFGenKbTSecGrpIncEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::realizeTSecGrpInc( cfcore::ICFGenKbTSecGrpIncObj* Obj ) {
		static const std::string S_ProcName( "realizeTSecGrpInc" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbTSecGrpIncObj* obj = Obj;
		cfcore::ICFGenKbTSecGrpIncObj* existingObj = NULL;
		cfcore::CFGenKbTSecGrpIncPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbTSecGrpIncObj* keepObj = NULL;
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
				cfcore::CFGenKbTSecGrpIncByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGroupIdx.setRequiredTSecGroupId( keepObj->getRequiredTSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapGroupIdx = searchGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						auto removalProbe = mapGroupIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapGroupIdx->end() ) {
							mapGroupIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto searchIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapIncludeIdx = searchIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						auto removalProbe = mapIncludeIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapIncludeIdx->end() ) {
							mapIncludeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUIncludeIdx.setRequiredTSecGroupId( keepObj->getRequiredTSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto removalProbe = indexByUIncludeIdx->find( keyUIncludeIdx );
				if( removalProbe != indexByUIncludeIdx->end() ) {
					indexByUIncludeIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGroupIdx.setRequiredTSecGroupId( keepObj->getRequiredTSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				static const std::string S_AIncludeIdxObj( "aIncludeIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIncludeIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto searchIndexByIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapIncludeIdx = searchIndexByIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						mapIncludeIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aIncludeIdxObj ) );
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				static const std::string S_AUIncludeIdxObj( "aUIncludeIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aUIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aUIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUIncludeIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUIncludeIdx.setRequiredTSecGroupId( keepObj->getRequiredTSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				indexByUIncludeIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( keyUIncludeIdx, aUIncludeIdxObj ) );
			}

			if( allTSecGrpInc != NULL ) {
				allTSecGrpInc->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGroupIdx != NULL ) {
				static const std::string S_AGroupIdxObj( "aGroupIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aGroupIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aGroupIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGroupIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGroupIdx.setRequiredTSecGroupId( keepObj->getRequiredTSecGroupId() );
				auto searchIndexByGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapGroupIdx = searchIndexByGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						mapGroupIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aGroupIdxObj ) );
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				static const std::string S_AIncludeIdxObj( "aIncludeIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AIncludeIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				auto searchIndexByIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapIncludeIdx = searchIndexByIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						mapIncludeIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), aIncludeIdxObj ) );
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				static const std::string S_AUIncludeIdxObj( "aUIncludeIdxObj" );
				cfcore::ICFGenKbTSecGrpIncObj* aUIncludeIdxObj =
					dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( keepObj );
				if( aUIncludeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUIncludeIdxObj );
				}
				cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyUIncludeIdx.setRequiredTSecGroupId( keepObj->getRequiredTSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( keepObj->getRequiredIncludeGroupId() );
				indexByUIncludeIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( keyUIncludeIdx, aUIncludeIdxObj ) );
			}

			if( allTSecGrpInc != NULL ) {
				allTSecGrpInc->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbTSecGrpIncTableObj::deepDisposeByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> list;
		cfcore::ICFGenKbTSecGrpIncObj* existingObj = readCachedTSecGrpIncByIdIdx( TenantId,
				TSecGrpIncId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbTSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->reallyDeepDisposeTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGrpIncTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> list;
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> matchesFound = readCachedTSecGrpIncByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbTSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->reallyDeepDisposeTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGrpIncTableObj::deepDisposeByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId ) {
		static const std::string S_ProcName( "deepDisposeByGroupIdx" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> list;
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> matchesFound = readCachedTSecGrpIncByGroupIdx( TenantId,
				TSecGroupId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbTSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->reallyDeepDisposeTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGrpIncTableObj::deepDisposeByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId ) {
		static const std::string S_ProcName( "deepDisposeByIncludeIdx" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> list;
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> matchesFound = readCachedTSecGrpIncByIncludeIdx( TenantId,
				IncludeGroupId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbTSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->reallyDeepDisposeTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGrpIncTableObj::deepDisposeByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId ) {
		static const std::string S_ProcName( "deepDisposeByUIncludeIdx" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> list;
		cfcore::ICFGenKbTSecGrpIncObj* existingObj = readCachedTSecGrpIncByUIncludeIdx( TenantId,
				TSecGroupId,
				IncludeGroupId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbTSecGrpIncObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->reallyDeepDisposeTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbTSecGrpIncTableObj::reallyDeepDisposeTSecGrpInc( cfcore::ICFGenKbTSecGrpIncObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeTSecGrpInc" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbTSecGrpIncObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->reallyDetachFromIndexesTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::createTSecGrpInc( cfcore::ICFGenKbTSecGrpIncEditObj* Obj ) {
		static const std::string S_ProcName( "createTSecGrpInc" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTSecGrpIncObj* obj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbTSecGrpIncBuff* buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->createTSecGrpInc(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::readTSecGrpInc( cfcore::CFGenKbTSecGrpIncPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTSecGrpInc" );
		cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbTSecGrpIncObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTSecGrpIncBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredTSecGrpIncId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::lockTSecGrpInc( cfcore::CFGenKbTSecGrpIncPKey* pkey ) {
		static const std::string S_ProcName( "lockTSecGrpInc" );
		cfcore::ICFGenKbTSecGrpIncObj* locked = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readAllTSecGrpInc( bool forceRead ) {
		static const std::string S_ProcName( "readAllTSecGrpInc" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTSecGrpIncObj* realized = NULL;
		if( forceRead || ( allTSecGrpInc == NULL ) ) {
			std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* map = new std::map<cfcore::CFGenKbTSecGrpIncPKey,cfcore::ICFGenKbTSecGrpIncObj*>();
			allTSecGrpInc = map;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbTSecGrpIncBuff* buff = NULL;
			cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allTSecGrpInc->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allTSecGrpInc->size();
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		auto valIter = allTSecGrpInc->begin();
		size_t idx = 0;
		while( valIter != allTSecGrpInc->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::pageAllTSecGrpInc(const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllTSecGrpInc" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* map = NULL;
		cfcore::CFGenKbTSecGrpIncBuff* buff = NULL;
		cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbTSecGrpIncObj* realized = NULL;
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbTSecGrpIncPKey,cfcore::ICFGenKbTSecGrpIncObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->pageAllBuff( schema->getAuthorization(),
				priorTenantId,
				priorTSecGrpIncId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::readTSecGrpIncByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId, bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGrpIncByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredTSecGrpIncId( TSecGrpIncId );
		cfcore::ICFGenKbTSecGrpIncObj* obj = readTSecGrpInc( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readTSecGrpIncByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGrpIncByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* dict;
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>();
			cfcore::ICFGenKbTSecGrpIncObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbTSecGrpIncBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbTSecGrpIncObj* realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncByTenantIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGrpIncByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* dict;
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* oldDict;
		if( indexByGroupIdx == NULL ) {
			indexByGroupIdx = new std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		}
		auto searchIndexByGroupIdx = indexByGroupIdx->find( key );
		if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
			oldDict = searchIndexByGroupIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>();
			cfcore::ICFGenKbTSecGrpIncObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByGroupIdx( schema->getAuthorization(),
				TenantId,
				TSecGroupId );
			cfcore::CFGenKbTSecGrpIncBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbTSecGrpIncObj* realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGroupIdx->erase( searchIndexByGroupIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGroupIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncByGroupIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGrpIncByIncludeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* dict;
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* oldDict;
		if( indexByIncludeIdx == NULL ) {
			indexByIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>*>();
		}
		auto searchIndexByIncludeIdx = indexByIncludeIdx->find( key );
		if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
			oldDict = searchIndexByIncludeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>();
			cfcore::ICFGenKbTSecGrpIncObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByIncludeIdx( schema->getAuthorization(),
				TenantId,
				IncludeGroupId );
			cfcore::CFGenKbTSecGrpIncBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbTSecGrpIncObj* realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByIncludeIdx->erase( searchIndexByIncludeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByIncludeIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncByIncludeIdxKey,
				std::map< cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::readTSecGrpIncByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId, bool forceRead )
	{
		static const std::string S_ProcName( "readTSecGrpIncByUIncludeIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUIncludeIdx == NULL ) {
			indexByUIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey,
				cfcore::ICFGenKbTSecGrpIncObj*>();
		}
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbTSecGrpIncObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUIncludeIdx = indexByUIncludeIdx->find( key );
			if( searchIndexByUIncludeIdx != indexByUIncludeIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUIncludeIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbTSecGrpIncBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByUIncludeIdx( schema->getAuthorization(),
				TenantId,
				TSecGroupId,
				IncludeGroupId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUIncludeIdx->insert( std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey, cfcore::ICFGenKbTSecGrpIncObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::readCachedTSecGrpInc( cfcore::CFGenKbTSecGrpIncPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readTSecGrpInc" );
		cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
		cfcore::ICFGenKbTSecGrpIncObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::readCachedTSecGrpIncByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId )
	{
		static const std::string S_ProcName( "readCachedTSecGrpIncByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredTSecGrpIncId( TSecGrpIncId );
		cfcore::ICFGenKbTSecGrpIncObj* obj = readCachedTSecGrpInc( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readCachedTSecGrpIncByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedTSecGrpIncByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbTSecGrpIncObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readCachedTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		static const std::string S_ProcName( "readCachedTSecGrpIncByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* dict;
		if( indexByGroupIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGroupIdx = indexByGroupIdx->find( key );
		if( searchIndexByGroupIdx != indexByGroupIdx->end() ) {
			dict = searchIndexByGroupIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbTSecGrpIncObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::readCachedTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readCachedTSecGrpIncByIncludeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* dict;
		if( indexByIncludeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByIncludeIdx = indexByIncludeIdx->find( key );
		if( searchIndexByIncludeIdx != indexByIncludeIdx->end() ) {
			dict = searchIndexByIncludeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbTSecGrpIncObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbTSecGrpIncObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::readCachedTSecGrpIncByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId )
	{
		static const std::string S_ProcName( "readCachedTSecGrpIncByUIncludeIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUIncludeIdx == NULL ) {
			indexByUIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey,
				cfcore::ICFGenKbTSecGrpIncObj*>();
		}
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
		auto searchIndexByUIncludeIdx = indexByUIncludeIdx->find( key );
		if( searchIndexByUIncludeIdx != indexByUIncludeIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUIncludeIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::pageTSecGrpIncByTenantIdx( const int64_t TenantId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageTSecGrpIncByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		cfcore::ICFGenKbTSecGrpIncObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->pageBuffByTenantIdx( schema->getAuthorization(),
				TenantId,
				priorTenantId,
				priorTSecGrpIncId );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		cfcore::ICFGenKbTSecGrpIncObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::pageTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageTSecGrpIncByGroupIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncByGroupIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		cfcore::ICFGenKbTSecGrpIncObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->pageBuffByGroupIdx( schema->getAuthorization(),
				TenantId,
				TSecGroupId,
				priorTenantId,
				priorTSecGrpIncId );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		cfcore::ICFGenKbTSecGrpIncObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGrpIncTableObj::pageTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId,
			const int64_t* priorTenantId,
			const int64_t* priorTSecGrpIncId )
	{
		static const std::string S_ProcName( "pageTSecGrpIncByIncludeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbTSecGrpIncByIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbTSecGrpIncObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbTSecGrpIncBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->pageBuffByIncludeIdx( schema->getAuthorization(),
				TenantId,
				IncludeGroupId,
				priorTenantId,
				priorTSecGrpIncId );
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbTSecGrpIncBuff* buff;
		cfcore::ICFGenKbTSecGrpIncObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncTableObj::updateTSecGrpInc( cfcore::ICFGenKbTSecGrpIncEditObj* Obj ) {
		static const std::string S_ProcName( "updateTSecGrpInc" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbTSecGrpIncObj* obj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbTSecGrpIncBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->updateTSecGrpInc( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( Obj->getTSecGrpIncBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( dynamic_cast<cfcore::CFGenKbTSecGrpIncTableObj*>( schema->getTSecGrpIncTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( obj->realize() );
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

	void CFGenKbTSecGrpIncTableObj::deleteTSecGrpInc( cfcore::ICFGenKbTSecGrpIncEditObj* Obj ) {
		cfcore::ICFGenKbTSecGrpIncObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->deleteTSecGrpInc( schema->getAuthorization(),
			obj->getTSecGrpIncBuff() );
		deepDisposeByIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredTSecGrpIncId() );
	}

	void CFGenKbTSecGrpIncTableObj::deleteTSecGrpIncByIdIdx( const int64_t TenantId,
			const int64_t TSecGrpIncId )
	{
		cfcore::CFGenKbTSecGrpIncPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredTSecGrpIncId( TSecGrpIncId );
		cfcore::ICFGenKbTSecGrpIncObj* obj = readTSecGrpInc( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbTSecGrpIncEditObj* editObj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbTSecGrpIncEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbTSecGrpIncTableObj::deleteTSecGrpIncByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->deleteTSecGrpIncByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbTSecGrpIncTableObj::deleteTSecGrpIncByGroupIdx( const int64_t TenantId,
			const int32_t TSecGroupId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->deleteTSecGrpIncByGroupIdx( schema->getAuthorization(),
				TenantId,
				TSecGroupId );
		deepDisposeByGroupIdx( TenantId,
			TSecGroupId );
	}

	void CFGenKbTSecGrpIncTableObj::deleteTSecGrpIncByIncludeIdx( const int64_t TenantId,
			const int32_t IncludeGroupId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->deleteTSecGrpIncByIncludeIdx( schema->getAuthorization(),
				TenantId,
				IncludeGroupId );
		deepDisposeByIncludeIdx( TenantId,
			IncludeGroupId );
	}

	void CFGenKbTSecGrpIncTableObj::deleteTSecGrpIncByUIncludeIdx( const int64_t TenantId,
			const int32_t TSecGroupId,
			const int32_t IncludeGroupId )
	{
		if( indexByUIncludeIdx == NULL ) {
			indexByUIncludeIdx = new std::map< cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey,
				cfcore::ICFGenKbTSecGrpIncObj*>();
		}
		cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredTSecGroupId( TSecGroupId );
		key.setRequiredIncludeGroupId( IncludeGroupId );
		cfcore::ICFGenKbTSecGrpIncObj* obj = NULL;
		auto searchIndexByUIncludeIdx = indexByUIncludeIdx->find( key );
		if( searchIndexByUIncludeIdx != indexByUIncludeIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->deleteTSecGrpIncByUIncludeIdx( schema->getAuthorization(),
				TenantId,
				TSecGroupId,
				IncludeGroupId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->deleteTSecGrpIncByUIncludeIdx( schema->getAuthorization(),
				TenantId,
				TSecGroupId,
				IncludeGroupId );
		}
		deepDisposeByUIncludeIdx( TenantId,
			TSecGroupId,
			IncludeGroupId );
	}

	void CFGenKbTSecGrpIncTableObj::reallyDetachFromIndexesTSecGrpInc( cfcore::ICFGenKbTSecGrpIncObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesTSecGrpInc" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbTSecGrpIncObj* obj = Obj;
		cfcore::CFGenKbTSecGrpIncPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbTSecGrpIncObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByGroupIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByGroupIdxKey keyGroupIdx;
				keyGroupIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyGroupIdx.setRequiredTSecGroupId( obj->getRequiredTSecGroupId() );
				auto searchGroupIdx = indexByGroupIdx->find( keyGroupIdx );
				if( searchGroupIdx != indexByGroupIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapGroupIdx = searchGroupIdx->second;
					if( mapGroupIdx != NULL ) {
						auto removalProbe = mapGroupIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapGroupIdx->end() ) {
							mapGroupIdx->erase( removalProbe );
							if( mapGroupIdx->empty() ) {
								delete mapGroupIdx;
								mapGroupIdx = NULL;
								indexByGroupIdx->erase( searchGroupIdx );
							}
						}
					}
				}
			}

			if( indexByIncludeIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByIncludeIdxKey keyIncludeIdx;
				keyIncludeIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyIncludeIdx.setRequiredIncludeGroupId( obj->getRequiredIncludeGroupId() );
				auto searchIncludeIdx = indexByIncludeIdx->find( keyIncludeIdx );
				if( searchIncludeIdx != indexByIncludeIdx->end() ) {
					std::map<cfcore::CFGenKbTSecGrpIncPKey, cfcore::ICFGenKbTSecGrpIncObj*>* mapIncludeIdx = searchIncludeIdx->second;
					if( mapIncludeIdx != NULL ) {
						auto removalProbe = mapIncludeIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapIncludeIdx->end() ) {
							mapIncludeIdx->erase( removalProbe );
							if( mapIncludeIdx->empty() ) {
								delete mapIncludeIdx;
								mapIncludeIdx = NULL;
								indexByIncludeIdx->erase( searchIncludeIdx );
							}
						}
					}
				}
			}

			if( indexByUIncludeIdx != NULL ) {
				cfcore::CFGenKbTSecGrpIncByUIncludeIdxKey keyUIncludeIdx;
				keyUIncludeIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyUIncludeIdx.setRequiredTSecGroupId( obj->getRequiredTSecGroupId() );
				keyUIncludeIdx.setRequiredIncludeGroupId( obj->getRequiredIncludeGroupId() );
				auto removalProbe = indexByUIncludeIdx->find( keyUIncludeIdx );
				if( removalProbe != indexByUIncludeIdx->end() ) {
					indexByUIncludeIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
