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

	const std::string CFGenKbSecSessionTableObj::CLASS_NAME( "CFGenKbSecSessionTableObj" );
	const std::string CFGenKbSecSessionTableObj::TABLE_NAME( "SecSession" );
	const std::string CFGenKbSecSessionTableObj::TABLE_DBNAME( "SecSess" );

	CFGenKbSecSessionTableObj::CFGenKbSecSessionTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>();
		allSecSession = NULL;
		indexBySecUserIdx = new std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		indexBySecDevIdx = new std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		indexByStartIdx = new std::map< cfcore::CFGenKbSecSessionByStartIdxKey,
			cfcore::ICFGenKbSecSessionObj*>();
		indexByFinishIdx = new std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		indexBySecProxyIdx = new std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
	}

	CFGenKbSecSessionTableObj::CFGenKbSecSessionTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>();
		allSecSession = NULL;
		indexBySecUserIdx = new std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		indexBySecDevIdx = new std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		indexByStartIdx = new std::map< cfcore::CFGenKbSecSessionByStartIdxKey,
			cfcore::ICFGenKbSecSessionObj*>();
		indexByFinishIdx = new std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		indexBySecProxyIdx = new std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
	}

	CFGenKbSecSessionTableObj::~CFGenKbSecSessionTableObj() {
		minimizeMemory();
		if( indexBySecUserIdx != NULL ) {
			delete indexBySecUserIdx;
			indexBySecUserIdx = NULL;
		}
		if( indexBySecDevIdx != NULL ) {
			delete indexBySecDevIdx;
			indexBySecDevIdx = NULL;
		}
		if( indexByStartIdx != NULL ) {
			delete indexByStartIdx;
			indexByStartIdx = NULL;
		}
		if( indexByFinishIdx != NULL ) {
			delete indexByFinishIdx;
			indexByFinishIdx = NULL;
		}
		if( indexBySecProxyIdx != NULL ) {
			delete indexBySecProxyIdx;
			indexBySecProxyIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecSessionObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecSessionTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecSessionTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecSessionTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecSessionTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecSessionTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecSessionTableObj::minimizeMemory() {
		if( allSecSession != NULL ) {
			allSecSession->clear();
			delete allSecSession;
			allSecSession = NULL;
		}
		if( indexBySecUserIdx != NULL ) {
			std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator iterBySecUserIdx = indexBySecUserIdx->begin();
			std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator endBySecUserIdx = indexBySecUserIdx->end();
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* curBySecUserIdx = NULL;
			while( iterBySecUserIdx != endBySecUserIdx ) {
				curBySecUserIdx = iterBySecUserIdx->second;
				if( curBySecUserIdx != NULL ) {
					curBySecUserIdx->clear();
					delete curBySecUserIdx;
					curBySecUserIdx = NULL;
					iterBySecUserIdx->second = NULL;
				}
				iterBySecUserIdx ++;
			}
			indexBySecUserIdx->clear();
		}
		if( indexBySecDevIdx != NULL ) {
			std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator iterBySecDevIdx = indexBySecDevIdx->begin();
			std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator endBySecDevIdx = indexBySecDevIdx->end();
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* curBySecDevIdx = NULL;
			while( iterBySecDevIdx != endBySecDevIdx ) {
				curBySecDevIdx = iterBySecDevIdx->second;
				if( curBySecDevIdx != NULL ) {
					curBySecDevIdx->clear();
					delete curBySecDevIdx;
					curBySecDevIdx = NULL;
					iterBySecDevIdx->second = NULL;
				}
				iterBySecDevIdx ++;
			}
			indexBySecDevIdx->clear();
		}
		if( indexByStartIdx != NULL ) {
			indexByStartIdx->clear();
		}
		if( indexByFinishIdx != NULL ) {
			std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator iterByFinishIdx = indexByFinishIdx->begin();
			std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator endByFinishIdx = indexByFinishIdx->end();
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* curByFinishIdx = NULL;
			while( iterByFinishIdx != endByFinishIdx ) {
				curByFinishIdx = iterByFinishIdx->second;
				if( curByFinishIdx != NULL ) {
					curByFinishIdx->clear();
					delete curByFinishIdx;
					curByFinishIdx = NULL;
					iterByFinishIdx->second = NULL;
				}
				iterByFinishIdx ++;
			}
			indexByFinishIdx->clear();
		}
		if( indexBySecProxyIdx != NULL ) {
			std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator iterBySecProxyIdx = indexBySecProxyIdx->begin();
			std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* >::iterator endBySecProxyIdx = indexBySecProxyIdx->end();
			std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* curBySecProxyIdx = NULL;
			while( iterBySecProxyIdx != endBySecProxyIdx ) {
				curBySecProxyIdx = iterBySecProxyIdx->second;
				if( curBySecProxyIdx != NULL ) {
					curBySecProxyIdx->clear();
					delete curBySecProxyIdx;
					curBySecProxyIdx = NULL;
					iterBySecProxyIdx->second = NULL;
				}
				iterBySecProxyIdx ++;
			}
			indexBySecProxyIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecSessionObj* cur = NULL;
			cfcore::ICFGenKbSecSessionEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::newInstance() {
		cfcore::ICFGenKbSecSessionObj* inst = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( new CFGenKbSecSessionObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionTableObj::newEditInstance( cfcore::ICFGenKbSecSessionObj* orig ) {
		cfcore::ICFGenKbSecSessionEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecSessionEditObj*>( new CFGenKbSecSessionEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::realizeSecSession( cfcore::ICFGenKbSecSessionObj* Obj ) {
		static const std::string S_ProcName( "realizeSecSession" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecSessionObj* obj = Obj;
		cfcore::ICFGenKbSecSessionObj* existingObj = NULL;
		cfcore::CFGenKbSecSessionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecSessionObj* keepObj = NULL;
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
			if( indexBySecUserIdx != NULL ) {
				cfcore::CFGenKbSecSessionBySecUserIdxKey keySecUserIdx;
				keySecUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchSecUserIdx = indexBySecUserIdx->find( keySecUserIdx );
				if( searchSecUserIdx != indexBySecUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecUserIdx = searchSecUserIdx->second;
					if( mapSecUserIdx != NULL ) {
						auto removalProbe = mapSecUserIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSecUserIdx->end() ) {
							mapSecUserIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySecDevIdx != NULL ) {
				cfcore::CFGenKbSecSessionBySecDevIdxKey keySecDevIdx;
				keySecDevIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				if( keepObj->isOptionalSecDevNameNull() ) {
					keySecDevIdx.setOptionalSecDevNameNull();
				}
				else {
					keySecDevIdx.setOptionalSecDevNameValue( keepObj->getOptionalSecDevNameValue() );
				}
				auto searchSecDevIdx = indexBySecDevIdx->find( keySecDevIdx );
				if( searchSecDevIdx != indexBySecDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecDevIdx = searchSecDevIdx->second;
					if( mapSecDevIdx != NULL ) {
						auto removalProbe = mapSecDevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSecDevIdx->end() ) {
							mapSecDevIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByStartIdx != NULL ) {
				cfcore::CFGenKbSecSessionByStartIdxKey keyStartIdx;
				keyStartIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				keyStartIdx.setRequiredStart( keepObj->getRequiredStart() );
				auto removalProbe = indexByStartIdx->find( keyStartIdx );
				if( removalProbe != indexByStartIdx->end() ) {
					indexByStartIdx->erase( removalProbe );
				}
			}

			if( indexByFinishIdx != NULL ) {
				cfcore::CFGenKbSecSessionByFinishIdxKey keyFinishIdx;
				keyFinishIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				if( keepObj->isOptionalFinishNull() ) {
					keyFinishIdx.setOptionalFinishNull();
				}
				else {
					keyFinishIdx.setOptionalFinishValue( keepObj->getOptionalFinishValue() );
				}
				auto searchFinishIdx = indexByFinishIdx->find( keyFinishIdx );
				if( searchFinishIdx != indexByFinishIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapFinishIdx = searchFinishIdx->second;
					if( mapFinishIdx != NULL ) {
						auto removalProbe = mapFinishIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapFinishIdx->end() ) {
							mapFinishIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexBySecProxyIdx != NULL ) {
				cfcore::CFGenKbSecSessionBySecProxyIdxKey keySecProxyIdx;
				if( keepObj->isOptionalSecProxyIdNull() ) {
					keySecProxyIdx.setOptionalSecProxyIdNull();
				}
				else {
					keySecProxyIdx.setOptionalSecProxyIdValue( keepObj->getOptionalSecProxyIdValue() );
				}
				auto searchSecProxyIdx = indexBySecProxyIdx->find( keySecProxyIdx );
				if( searchSecProxyIdx != indexBySecProxyIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecProxyIdx = searchSecProxyIdx->second;
					if( mapSecProxyIdx != NULL ) {
						auto removalProbe = mapSecProxyIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapSecProxyIdx->end() ) {
							mapSecProxyIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexBySecUserIdx != NULL ) {
				static const std::string S_ASecUserIdxObj( "aSecUserIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aSecUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aSecUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecUserIdxObj );
				}
				cfcore::CFGenKbSecSessionBySecUserIdxKey keySecUserIdx;
				keySecUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchIndexBySecUserIdx = indexBySecUserIdx->find( keySecUserIdx );
				if( searchIndexBySecUserIdx != indexBySecUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecUserIdx = searchIndexBySecUserIdx->second;
					if( mapSecUserIdx != NULL ) {
						mapSecUserIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aSecUserIdxObj ) );
					}
				}
			}

			if( indexBySecDevIdx != NULL ) {
				static const std::string S_ASecDevIdxObj( "aSecDevIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aSecDevIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aSecDevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecDevIdxObj );
				}
				cfcore::CFGenKbSecSessionBySecDevIdxKey keySecDevIdx;
				keySecDevIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				if( keepObj->isOptionalSecDevNameNull() ) {
					keySecDevIdx.setOptionalSecDevNameNull();
				}
				else {
					keySecDevIdx.setOptionalSecDevNameValue( keepObj->getOptionalSecDevNameValue() );
				}
				auto searchIndexBySecDevIdx = indexBySecDevIdx->find( keySecDevIdx );
				if( searchIndexBySecDevIdx != indexBySecDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecDevIdx = searchIndexBySecDevIdx->second;
					if( mapSecDevIdx != NULL ) {
						mapSecDevIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aSecDevIdxObj ) );
					}
				}
			}

			if( indexByStartIdx != NULL ) {
				static const std::string S_AStartIdxObj( "aStartIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aStartIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aStartIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AStartIdxObj );
				}
				cfcore::CFGenKbSecSessionByStartIdxKey keyStartIdx;
				keyStartIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				keyStartIdx.setRequiredStart( keepObj->getRequiredStart() );
				indexByStartIdx->insert( std::map< cfcore::CFGenKbSecSessionByStartIdxKey, cfcore::ICFGenKbSecSessionObj* >::value_type( keyStartIdx, aStartIdxObj ) );
			}

			if( indexByFinishIdx != NULL ) {
				static const std::string S_AFinishIdxObj( "aFinishIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aFinishIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aFinishIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFinishIdxObj );
				}
				cfcore::CFGenKbSecSessionByFinishIdxKey keyFinishIdx;
				keyFinishIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				if( keepObj->isOptionalFinishNull() ) {
					keyFinishIdx.setOptionalFinishNull();
				}
				else {
					keyFinishIdx.setOptionalFinishValue( keepObj->getOptionalFinishValue() );
				}
				auto searchIndexByFinishIdx = indexByFinishIdx->find( keyFinishIdx );
				if( searchIndexByFinishIdx != indexByFinishIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapFinishIdx = searchIndexByFinishIdx->second;
					if( mapFinishIdx != NULL ) {
						mapFinishIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aFinishIdxObj ) );
					}
				}
			}

			if( indexBySecProxyIdx != NULL ) {
				static const std::string S_ASecProxyIdxObj( "aSecProxyIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aSecProxyIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aSecProxyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecProxyIdxObj );
				}
				cfcore::CFGenKbSecSessionBySecProxyIdxKey keySecProxyIdx;
				if( keepObj->isOptionalSecProxyIdNull() ) {
					keySecProxyIdx.setOptionalSecProxyIdNull();
				}
				else {
					keySecProxyIdx.setOptionalSecProxyIdValue( keepObj->getOptionalSecProxyIdValue() );
				}
				auto searchIndexBySecProxyIdx = indexBySecProxyIdx->find( keySecProxyIdx );
				if( searchIndexBySecProxyIdx != indexBySecProxyIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecProxyIdx = searchIndexBySecProxyIdx->second;
					if( mapSecProxyIdx != NULL ) {
						mapSecProxyIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aSecProxyIdxObj ) );
					}
				}
			}

			if( allSecSession != NULL ) {
				allSecSession->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexBySecUserIdx != NULL ) {
				static const std::string S_ASecUserIdxObj( "aSecUserIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aSecUserIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aSecUserIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecUserIdxObj );
				}
				cfcore::CFGenKbSecSessionBySecUserIdxKey keySecUserIdx;
				keySecUserIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				auto searchIndexBySecUserIdx = indexBySecUserIdx->find( keySecUserIdx );
				if( searchIndexBySecUserIdx != indexBySecUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecUserIdx = searchIndexBySecUserIdx->second;
					if( mapSecUserIdx != NULL ) {
						mapSecUserIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aSecUserIdxObj ) );
					}
				}
			}

			if( indexBySecDevIdx != NULL ) {
				static const std::string S_ASecDevIdxObj( "aSecDevIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aSecDevIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aSecDevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecDevIdxObj );
				}
				cfcore::CFGenKbSecSessionBySecDevIdxKey keySecDevIdx;
				keySecDevIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				if( keepObj->isOptionalSecDevNameNull() ) {
					keySecDevIdx.setOptionalSecDevNameNull();
				}
				else {
					keySecDevIdx.setOptionalSecDevNameValue( keepObj->getOptionalSecDevNameValue() );
				}
				auto searchIndexBySecDevIdx = indexBySecDevIdx->find( keySecDevIdx );
				if( searchIndexBySecDevIdx != indexBySecDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecDevIdx = searchIndexBySecDevIdx->second;
					if( mapSecDevIdx != NULL ) {
						mapSecDevIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aSecDevIdxObj ) );
					}
				}
			}

			if( indexByStartIdx != NULL ) {
				static const std::string S_AStartIdxObj( "aStartIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aStartIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aStartIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AStartIdxObj );
				}
				cfcore::CFGenKbSecSessionByStartIdxKey keyStartIdx;
				keyStartIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				keyStartIdx.setRequiredStart( keepObj->getRequiredStart() );
				indexByStartIdx->insert( std::map< cfcore::CFGenKbSecSessionByStartIdxKey, cfcore::ICFGenKbSecSessionObj* >::value_type( keyStartIdx, aStartIdxObj ) );
			}

			if( indexByFinishIdx != NULL ) {
				static const std::string S_AFinishIdxObj( "aFinishIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aFinishIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aFinishIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AFinishIdxObj );
				}
				cfcore::CFGenKbSecSessionByFinishIdxKey keyFinishIdx;
				keyFinishIdx.setRequiredSecUserId( keepObj->getRequiredSecUserId() );
				if( keepObj->isOptionalFinishNull() ) {
					keyFinishIdx.setOptionalFinishNull();
				}
				else {
					keyFinishIdx.setOptionalFinishValue( keepObj->getOptionalFinishValue() );
				}
				auto searchIndexByFinishIdx = indexByFinishIdx->find( keyFinishIdx );
				if( searchIndexByFinishIdx != indexByFinishIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapFinishIdx = searchIndexByFinishIdx->second;
					if( mapFinishIdx != NULL ) {
						mapFinishIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aFinishIdxObj ) );
					}
				}
			}

			if( indexBySecProxyIdx != NULL ) {
				static const std::string S_ASecProxyIdxObj( "aSecProxyIdxObj" );
				cfcore::ICFGenKbSecSessionObj* aSecProxyIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( keepObj );
				if( aSecProxyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ASecProxyIdxObj );
				}
				cfcore::CFGenKbSecSessionBySecProxyIdxKey keySecProxyIdx;
				if( keepObj->isOptionalSecProxyIdNull() ) {
					keySecProxyIdx.setOptionalSecProxyIdNull();
				}
				else {
					keySecProxyIdx.setOptionalSecProxyIdValue( keepObj->getOptionalSecProxyIdValue() );
				}
				auto searchIndexBySecProxyIdx = indexBySecProxyIdx->find( keySecProxyIdx );
				if( searchIndexBySecProxyIdx != indexBySecProxyIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecProxyIdx = searchIndexBySecProxyIdx->second;
					if( mapSecProxyIdx != NULL ) {
						mapSecProxyIdx->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), aSecProxyIdxObj ) );
					}
				}
			}

			if( allSecSession != NULL ) {
				allSecSession->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecSessionTableObj::deepDisposeByIdIdx( const uuid_ptr_t SecSessionId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> list;
		cfcore::ICFGenKbSecSessionObj* existingObj = readCachedSecSessionByIdIdx( SecSessionId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecSessionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDeepDisposeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecSessionTableObj::deepDisposeBySecUserIdx( const uuid_ptr_t SecUserId ) {
		static const std::string S_ProcName( "deepDisposeBySecUserIdx" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> list;
		std::vector<cfcore::ICFGenKbSecSessionObj*> matchesFound = readCachedSecSessionBySecUserIdx( SecUserId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecSessionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDeepDisposeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecSessionTableObj::deepDisposeBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName ) {
		static const std::string S_ProcName( "deepDisposeBySecDevIdx" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> list;
		std::vector<cfcore::ICFGenKbSecSessionObj*> matchesFound = readCachedSecSessionBySecDevIdx( SecUserId,
				SecDevName );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecSessionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDeepDisposeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecSessionTableObj::deepDisposeByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start ) {
		static const std::string S_ProcName( "deepDisposeByStartIdx" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> list;
		cfcore::ICFGenKbSecSessionObj* existingObj = readCachedSecSessionByStartIdx( SecUserId,
				Start );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecSessionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDeepDisposeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecSessionTableObj::deepDisposeByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish ) {
		static const std::string S_ProcName( "deepDisposeByFinishIdx" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> list;
		std::vector<cfcore::ICFGenKbSecSessionObj*> matchesFound = readCachedSecSessionByFinishIdx( SecUserId,
				Finish );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecSessionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDeepDisposeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecSessionTableObj::deepDisposeBySecProxyIdx( const uuid_ptr_t SecProxyId ) {
		static const std::string S_ProcName( "deepDisposeBySecProxyIdx" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> list;
		std::vector<cfcore::ICFGenKbSecSessionObj*> matchesFound = readCachedSecSessionBySecProxyIdx( SecProxyId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecSessionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDeepDisposeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecSessionTableObj::reallyDeepDisposeSecSession( cfcore::ICFGenKbSecSessionObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecSession" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecSessionObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->reallyDetachFromIndexesSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::createSecSession( cfcore::ICFGenKbSecSessionEditObj* Obj ) {
		static const std::string S_ProcName( "createSecSession" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecSessionObj* obj = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecSessionBuff* buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->createSecSession(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::readSecSession( cfcore::CFGenKbSecSessionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecSession" );
		cfcore::ICFGenKbSecSessionObj* obj = NULL;
		cfcore::ICFGenKbSecSessionObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecSessionBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredSecSessionId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::lockSecSession( cfcore::CFGenKbSecSessionPKey* pkey ) {
		static const std::string S_ProcName( "lockSecSession" );
		cfcore::ICFGenKbSecSessionObj* locked = NULL;
		cfcore::CFGenKbSecSessionBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readAllSecSession( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecSession" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecSessionObj* realized = NULL;
		if( forceRead || ( allSecSession == NULL ) ) {
			std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* map = new std::map<cfcore::CFGenKbSecSessionPKey,cfcore::ICFGenKbSecSessionObj*>();
			allSecSession = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecSessionBuff* buff = NULL;
			cfcore::ICFGenKbSecSessionObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecSession->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecSession->size();
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		auto valIter = allSecSession->begin();
		size_t idx = 0;
		while( valIter != allSecSession->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::pageAllSecSession(const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecSession" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* map = NULL;
		cfcore::CFGenKbSecSessionBuff* buff = NULL;
		cfcore::ICFGenKbSecSessionObj* obj = NULL;
		cfcore::ICFGenKbSecSessionObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecSessionObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecSessionPKey,cfcore::ICFGenKbSecSessionObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->pageAllBuff( schema->getAuthorization(),
				priorSecSessionId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::readSecSessionByIdIdx( const uuid_ptr_t SecSessionId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecSessionByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionPKey pkey;
		pkey.setRequiredSecSessionId( SecSessionId );
		cfcore::ICFGenKbSecSessionObj* obj = readSecSession( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readSecSessionBySecUserIdx( const uuid_ptr_t SecUserId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecSessionBySecUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionBySecUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* oldDict;
		if( indexBySecUserIdx == NULL ) {
			indexBySecUserIdx = new std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		}
		auto searchIndexBySecUserIdx = indexBySecUserIdx->find( key );
		if( searchIndexBySecUserIdx != indexBySecUserIdx->end() ) {
			oldDict = searchIndexBySecUserIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>();
			cfcore::ICFGenKbSecSessionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedBySecUserIdx( schema->getAuthorization(),
				SecUserId );
			cfcore::CFGenKbSecSessionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecSessionObj* realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySecUserIdx->erase( searchIndexBySecUserIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySecUserIdx->insert( std::map< cfcore::CFGenKbSecSessionBySecUserIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecSessionBySecDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionBySecDevIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( SecDevName == NULL ) {
			key.setOptionalSecDevNameNull();
		}
		else {
			key.setOptionalSecDevNameValue( *SecDevName );
		}
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* oldDict;
		if( indexBySecDevIdx == NULL ) {
			indexBySecDevIdx = new std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		}
		auto searchIndexBySecDevIdx = indexBySecDevIdx->find( key );
		if( searchIndexBySecDevIdx != indexBySecDevIdx->end() ) {
			oldDict = searchIndexBySecDevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>();
			cfcore::ICFGenKbSecSessionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedBySecDevIdx( schema->getAuthorization(),
				SecUserId,
				SecDevName );
			cfcore::CFGenKbSecSessionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecSessionObj* realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySecDevIdx->erase( searchIndexBySecDevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySecDevIdx->insert( std::map< cfcore::CFGenKbSecSessionBySecDevIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::readSecSessionByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start, bool forceRead )
	{
		static const std::string S_ProcName( "readSecSessionByStartIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByStartIdx == NULL ) {
			indexByStartIdx = new std::map< cfcore::CFGenKbSecSessionByStartIdxKey,
				cfcore::ICFGenKbSecSessionObj*>();
		}
		cfcore::CFGenKbSecSessionByStartIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredStart( Start );
		cfcore::ICFGenKbSecSessionObj* obj = NULL;
		cfcore::ICFGenKbSecSessionObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByStartIdx = indexByStartIdx->find( key );
			if( searchIndexByStartIdx != indexByStartIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByStartIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecSessionBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedByStartIdx( schema->getAuthorization(),
				SecUserId,
				Start );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByStartIdx->insert( std::map< cfcore::CFGenKbSecSessionByStartIdxKey, cfcore::ICFGenKbSecSessionObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecSessionByFinishIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionByFinishIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( Finish == NULL ) {
			key.setOptionalFinishNull();
		}
		else {
			key.setOptionalFinishValue( *Finish );
		}
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* oldDict;
		if( indexByFinishIdx == NULL ) {
			indexByFinishIdx = new std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		}
		auto searchIndexByFinishIdx = indexByFinishIdx->find( key );
		if( searchIndexByFinishIdx != indexByFinishIdx->end() ) {
			oldDict = searchIndexByFinishIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>();
			cfcore::ICFGenKbSecSessionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedByFinishIdx( schema->getAuthorization(),
				SecUserId,
				Finish );
			cfcore::CFGenKbSecSessionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecSessionObj* realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByFinishIdx->erase( searchIndexByFinishIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByFinishIdx->insert( std::map< cfcore::CFGenKbSecSessionByFinishIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecSessionBySecProxyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionBySecProxyIdxKey key;
		if( SecProxyId == NULL ) {
			key.setOptionalSecProxyIdNull();
		}
		else {
			key.setOptionalSecProxyIdValue( SecProxyId );
		}
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* oldDict;
		if( indexBySecProxyIdx == NULL ) {
			indexBySecProxyIdx = new std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>*>();
		}
		auto searchIndexBySecProxyIdx = indexBySecProxyIdx->find( key );
		if( searchIndexBySecProxyIdx != indexBySecProxyIdx->end() ) {
			oldDict = searchIndexBySecProxyIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>();
			cfcore::ICFGenKbSecSessionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedBySecProxyIdx( schema->getAuthorization(),
				SecProxyId );
			cfcore::CFGenKbSecSessionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecSessionObj* realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexBySecProxyIdx->erase( searchIndexBySecProxyIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexBySecProxyIdx->insert( std::map< cfcore::CFGenKbSecSessionBySecProxyIdxKey,
				std::map< cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::readCachedSecSession( cfcore::CFGenKbSecSessionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecSession" );
		cfcore::ICFGenKbSecSessionObj* obj = NULL;
		cfcore::ICFGenKbSecSessionObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::readCachedSecSessionByIdIdx( const uuid_ptr_t SecSessionId )
	{
		static const std::string S_ProcName( "readCachedSecSessionByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionPKey pkey;
		pkey.setRequiredSecSessionId( SecSessionId );
		cfcore::ICFGenKbSecSessionObj* obj = readCachedSecSession( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readCachedSecSessionBySecUserIdx( const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readCachedSecSessionBySecUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		cfcore::CFGenKbSecSessionBySecUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		if( indexBySecUserIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySecUserIdx = indexBySecUserIdx->find( key );
		if( searchIndexBySecUserIdx != indexBySecUserIdx->end() ) {
			dict = searchIndexBySecUserIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecSessionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readCachedSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName )
	{
		static const std::string S_ProcName( "readCachedSecSessionBySecDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		cfcore::CFGenKbSecSessionBySecDevIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( SecDevName == NULL ) {
			key.setOptionalSecDevNameNull();
		}
		else {
			key.setOptionalSecDevNameValue( *SecDevName );
		}
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		if( indexBySecDevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySecDevIdx = indexBySecDevIdx->find( key );
		if( searchIndexBySecDevIdx != indexBySecDevIdx->end() ) {
			dict = searchIndexBySecDevIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecSessionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::readCachedSecSessionByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start )
	{
		static const std::string S_ProcName( "readCachedSecSessionByStartIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByStartIdx == NULL ) {
			indexByStartIdx = new std::map< cfcore::CFGenKbSecSessionByStartIdxKey,
				cfcore::ICFGenKbSecSessionObj*>();
		}
		cfcore::CFGenKbSecSessionByStartIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredStart( Start );
		cfcore::ICFGenKbSecSessionObj* obj = NULL;
		auto searchIndexByStartIdx = indexByStartIdx->find( key );
		if( searchIndexByStartIdx != indexByStartIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByStartIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readCachedSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish )
	{
		static const std::string S_ProcName( "readCachedSecSessionByFinishIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		cfcore::CFGenKbSecSessionByFinishIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( Finish == NULL ) {
			key.setOptionalFinishNull();
		}
		else {
			key.setOptionalFinishValue( *Finish );
		}
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		if( indexByFinishIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByFinishIdx = indexByFinishIdx->find( key );
		if( searchIndexByFinishIdx != indexByFinishIdx->end() ) {
			dict = searchIndexByFinishIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecSessionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::readCachedSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId )
	{
		static const std::string S_ProcName( "readCachedSecSessionBySecProxyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
		cfcore::CFGenKbSecSessionBySecProxyIdxKey key;
		if( SecProxyId == NULL ) {
			key.setOptionalSecProxyIdNull();
		}
		else {
			key.setOptionalSecProxyIdValue( SecProxyId );
		}
		std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* dict;
		if( indexBySecProxyIdx == NULL ) {
			return( arr );
		}
		auto searchIndexBySecProxyIdx = indexBySecProxyIdx->find( key );
		if( searchIndexBySecProxyIdx != indexBySecProxyIdx->end() ) {
			dict = searchIndexBySecProxyIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecSessionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecSessionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::pageSecSessionBySecUserIdx( const uuid_ptr_t SecUserId,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageSecSessionBySecUserIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionBySecUserIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecSessionObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->pageBuffBySecUserIdx( schema->getAuthorization(),
				SecUserId,
				priorSecSessionId );
		std::vector<cfcore::ICFGenKbSecSessionObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecSessionBuff* buff;
		cfcore::ICFGenKbSecSessionObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::pageSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageSecSessionBySecDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionBySecDevIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( SecDevName == NULL ) {
			key.setOptionalSecDevNameNull();
		}
		else {
			key.setOptionalSecDevNameValue( *SecDevName );
		}
		cfcore::ICFGenKbSecSessionObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->pageBuffBySecDevIdx( schema->getAuthorization(),
				SecUserId,
				SecDevName,
				priorSecSessionId );
		std::vector<cfcore::ICFGenKbSecSessionObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecSessionBuff* buff;
		cfcore::ICFGenKbSecSessionObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::pageSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageSecSessionByFinishIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionByFinishIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		if( Finish == NULL ) {
			key.setOptionalFinishNull();
		}
		else {
			key.setOptionalFinishValue( *Finish );
		}
		cfcore::ICFGenKbSecSessionObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->pageBuffByFinishIdx( schema->getAuthorization(),
				SecUserId,
				Finish,
				priorSecSessionId );
		std::vector<cfcore::ICFGenKbSecSessionObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecSessionBuff* buff;
		cfcore::ICFGenKbSecSessionObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecSessionTableObj::pageSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId,
			const uuid_ptr_t priorSecSessionId )
	{
		static const std::string S_ProcName( "pageSecSessionBySecProxyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecSessionBySecProxyIdxKey key;
		if( SecProxyId == NULL ) {
			key.setOptionalSecProxyIdNull();
		}
		else {
			key.setOptionalSecProxyIdValue( SecProxyId );
		}
		cfcore::ICFGenKbSecSessionObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecSessionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->pageBuffBySecProxyIdx( schema->getAuthorization(),
				SecProxyId,
				priorSecSessionId );
		std::vector<cfcore::ICFGenKbSecSessionObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecSessionBuff* buff;
		cfcore::ICFGenKbSecSessionObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::updateSecSession( cfcore::ICFGenKbSecSessionEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecSession" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecSessionObj* obj = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecSessionBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->updateSecSession( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( Obj->getSecSessionBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( obj->realize() );
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

	void CFGenKbSecSessionTableObj::deleteSecSession( cfcore::ICFGenKbSecSessionEditObj* Obj ) {
		cfcore::ICFGenKbSecSessionObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSession( schema->getAuthorization(),
			obj->getSecSessionBuff() );
		deepDisposeByIdIdx( obj->getRequiredSecSessionId() );
	}

	void CFGenKbSecSessionTableObj::deleteSecSessionByIdIdx( const uuid_ptr_t SecSessionId )
	{
		cfcore::CFGenKbSecSessionPKey pkey;
		pkey.setRequiredSecSessionId( SecSessionId );
		cfcore::ICFGenKbSecSessionObj* obj = readSecSession( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecSessionEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecSessionEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecSessionEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecSessionTableObj::deleteSecSessionBySecUserIdx( const uuid_ptr_t SecUserId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSessionBySecUserIdx( schema->getAuthorization(),
				SecUserId );
		deepDisposeBySecUserIdx( SecUserId );
	}

	void CFGenKbSecSessionTableObj::deleteSecSessionBySecDevIdx( const uuid_ptr_t SecUserId,
			const std::string* SecDevName )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSessionBySecDevIdx( schema->getAuthorization(),
				SecUserId,
				SecDevName );
		deepDisposeBySecDevIdx( SecUserId,
			SecDevName );
	}

	void CFGenKbSecSessionTableObj::deleteSecSessionByStartIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point& Start )
	{
		if( indexByStartIdx == NULL ) {
			indexByStartIdx = new std::map< cfcore::CFGenKbSecSessionByStartIdxKey,
				cfcore::ICFGenKbSecSessionObj*>();
		}
		cfcore::CFGenKbSecSessionByStartIdxKey key;
		key.setRequiredSecUserId( SecUserId );
		key.setRequiredStart( Start );
		cfcore::ICFGenKbSecSessionObj* obj = NULL;
		auto searchIndexByStartIdx = indexByStartIdx->find( key );
		if( searchIndexByStartIdx != indexByStartIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSessionByStartIdx( schema->getAuthorization(),
				SecUserId,
				Start );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSessionByStartIdx( schema->getAuthorization(),
				SecUserId,
				Start );
		}
		deepDisposeByStartIdx( SecUserId,
			Start );
	}

	void CFGenKbSecSessionTableObj::deleteSecSessionByFinishIdx( const uuid_ptr_t SecUserId,
			const std::chrono::system_clock::time_point* Finish )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSessionByFinishIdx( schema->getAuthorization(),
				SecUserId,
				Finish );
		deepDisposeByFinishIdx( SecUserId,
			Finish );
	}

	void CFGenKbSecSessionTableObj::deleteSecSessionBySecProxyIdx( const uuid_ptr_t SecProxyId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->deleteSecSessionBySecProxyIdx( schema->getAuthorization(),
				SecProxyId );
		deepDisposeBySecProxyIdx( SecProxyId );
	}

	void CFGenKbSecSessionTableObj::reallyDetachFromIndexesSecSession( cfcore::ICFGenKbSecSessionObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecSession" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecSessionObj* obj = Obj;
		cfcore::CFGenKbSecSessionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecSessionObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexBySecUserIdx != NULL ) {
				cfcore::CFGenKbSecSessionBySecUserIdxKey keySecUserIdx;
				keySecUserIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				auto searchSecUserIdx = indexBySecUserIdx->find( keySecUserIdx );
				if( searchSecUserIdx != indexBySecUserIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecUserIdx = searchSecUserIdx->second;
					if( mapSecUserIdx != NULL ) {
						auto removalProbe = mapSecUserIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSecUserIdx->end() ) {
							mapSecUserIdx->erase( removalProbe );
							if( mapSecUserIdx->empty() ) {
								delete mapSecUserIdx;
								mapSecUserIdx = NULL;
								indexBySecUserIdx->erase( searchSecUserIdx );
							}
						}
					}
				}
			}

			if( indexBySecDevIdx != NULL ) {
				cfcore::CFGenKbSecSessionBySecDevIdxKey keySecDevIdx;
				keySecDevIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				if( obj->isOptionalSecDevNameNull() ) {
					keySecDevIdx.setOptionalSecDevNameNull();
				}
				else {
					keySecDevIdx.setOptionalSecDevNameValue( obj->getOptionalSecDevNameValue() );
				}
				auto searchSecDevIdx = indexBySecDevIdx->find( keySecDevIdx );
				if( searchSecDevIdx != indexBySecDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecDevIdx = searchSecDevIdx->second;
					if( mapSecDevIdx != NULL ) {
						auto removalProbe = mapSecDevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSecDevIdx->end() ) {
							mapSecDevIdx->erase( removalProbe );
							if( mapSecDevIdx->empty() ) {
								delete mapSecDevIdx;
								mapSecDevIdx = NULL;
								indexBySecDevIdx->erase( searchSecDevIdx );
							}
						}
					}
				}
			}

			if( indexByStartIdx != NULL ) {
				cfcore::CFGenKbSecSessionByStartIdxKey keyStartIdx;
				keyStartIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				keyStartIdx.setRequiredStart( obj->getRequiredStart() );
				auto removalProbe = indexByStartIdx->find( keyStartIdx );
				if( removalProbe != indexByStartIdx->end() ) {
					indexByStartIdx->erase( removalProbe );
				}
			}

			if( indexByFinishIdx != NULL ) {
				cfcore::CFGenKbSecSessionByFinishIdxKey keyFinishIdx;
				keyFinishIdx.setRequiredSecUserId( obj->getRequiredSecUserId() );
				if( obj->isOptionalFinishNull() ) {
					keyFinishIdx.setOptionalFinishNull();
				}
				else {
					keyFinishIdx.setOptionalFinishValue( obj->getOptionalFinishValue() );
				}
				auto searchFinishIdx = indexByFinishIdx->find( keyFinishIdx );
				if( searchFinishIdx != indexByFinishIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapFinishIdx = searchFinishIdx->second;
					if( mapFinishIdx != NULL ) {
						auto removalProbe = mapFinishIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapFinishIdx->end() ) {
							mapFinishIdx->erase( removalProbe );
							if( mapFinishIdx->empty() ) {
								delete mapFinishIdx;
								mapFinishIdx = NULL;
								indexByFinishIdx->erase( searchFinishIdx );
							}
						}
					}
				}
			}

			if( indexBySecProxyIdx != NULL ) {
				cfcore::CFGenKbSecSessionBySecProxyIdxKey keySecProxyIdx;
				if( obj->isOptionalSecProxyIdNull() ) {
					keySecProxyIdx.setOptionalSecProxyIdNull();
				}
				else {
					keySecProxyIdx.setOptionalSecProxyIdValue( obj->getOptionalSecProxyIdValue() );
				}
				auto searchSecProxyIdx = indexBySecProxyIdx->find( keySecProxyIdx );
				if( searchSecProxyIdx != indexBySecProxyIdx->end() ) {
					std::map<cfcore::CFGenKbSecSessionPKey, cfcore::ICFGenKbSecSessionObj*>* mapSecProxyIdx = searchSecProxyIdx->second;
					if( mapSecProxyIdx != NULL ) {
						auto removalProbe = mapSecProxyIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapSecProxyIdx->end() ) {
							mapSecProxyIdx->erase( removalProbe );
							if( mapSecProxyIdx->empty() ) {
								delete mapSecProxyIdx;
								mapSecProxyIdx = NULL;
								indexBySecProxyIdx->erase( searchSecProxyIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}

	static ICFGenKbSecSessionObj* S_systemSession = NULL;

	ICFGenKbSecSessionObj* CFGenKbSecSessionTableObj::getSystemSession() {
		static const std::string S_ProcName( "getSystemSession" );
		static const std::string S_UserObj( "userObj" );
		bool transactionStarted = schema->beginTransaction();
		ICFGenKbSecUserObj* userObj;
		ICFGenKbSecSessionObj* sessionObj = S_systemSession;
		try {
			std::chrono::system_clock::time_point* ts = cflib::CFLib::getUTCTimestamp();
			userObj = schema->getSecUserTableObj()->getSystemUser();
			if( userObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_UserObj );
			}
			if( sessionObj == NULL ) {
				sessionObj = readSecSessionByStartIdx( userObj->getRequiredSecUserId(),
					*ts,
					true );
				if( sessionObj == NULL ) {
					sessionObj = newInstance();
					ICFGenKbSecSessionEditObj* sessionEdit = sessionObj->beginEdit();
					sessionEdit->setRequiredContainerSecUser( userObj );
					sessionEdit->setRequiredStart( *ts );
					sessionEdit->setOptionalFinishNull();
					sessionObj = sessionEdit->create();
					S_systemSession = sessionObj;
				}
			}
			if( transactionStarted ) {
				schema->commit();
			}
			delete ts;
			ts = NULL;
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
		return( sessionObj );
	}


}
