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

	const std::string CFGenKbSecUserTableObj::CLASS_NAME( "CFGenKbSecUserTableObj" );
	const std::string CFGenKbSecUserTableObj::TABLE_NAME( "SecUser" );
	const std::string CFGenKbSecUserTableObj::TABLE_DBNAME( "SecUser" );

	CFGenKbSecUserTableObj::CFGenKbSecUserTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>();
		allSecUser = NULL;
		indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
			cfcore::ICFGenKbSecUserObj*>();
		indexByEMConfIdx = new std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		indexByPwdResetIdx = new std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		indexByDefDevIdx = new std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
	}

	CFGenKbSecUserTableObj::CFGenKbSecUserTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>();
		allSecUser = NULL;
		indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
			cfcore::ICFGenKbSecUserObj*>();
		indexByEMConfIdx = new std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		indexByPwdResetIdx = new std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		indexByDefDevIdx = new std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
	}

	CFGenKbSecUserTableObj::~CFGenKbSecUserTableObj() {
		minimizeMemory();
		if( indexByULoginIdx != NULL ) {
			delete indexByULoginIdx;
			indexByULoginIdx = NULL;
		}
		if( indexByEMConfIdx != NULL ) {
			delete indexByEMConfIdx;
			indexByEMConfIdx = NULL;
		}
		if( indexByPwdResetIdx != NULL ) {
			delete indexByPwdResetIdx;
			indexByPwdResetIdx = NULL;
		}
		if( indexByDefDevIdx != NULL ) {
			delete indexByDefDevIdx;
			indexByDefDevIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecUserObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbSecUserTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecUserTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbSecUserTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbSecUserTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbSecUserTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbSecUserTableObj::minimizeMemory() {
		if( allSecUser != NULL ) {
			allSecUser->clear();
			delete allSecUser;
			allSecUser = NULL;
		}
		if( indexByULoginIdx != NULL ) {
			indexByULoginIdx->clear();
		}
		if( indexByEMConfIdx != NULL ) {
			std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* >::iterator iterByEMConfIdx = indexByEMConfIdx->begin();
			std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* >::iterator endByEMConfIdx = indexByEMConfIdx->end();
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* curByEMConfIdx = NULL;
			while( iterByEMConfIdx != endByEMConfIdx ) {
				curByEMConfIdx = iterByEMConfIdx->second;
				if( curByEMConfIdx != NULL ) {
					curByEMConfIdx->clear();
					delete curByEMConfIdx;
					curByEMConfIdx = NULL;
					iterByEMConfIdx->second = NULL;
				}
				iterByEMConfIdx ++;
			}
			indexByEMConfIdx->clear();
		}
		if( indexByPwdResetIdx != NULL ) {
			std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* >::iterator iterByPwdResetIdx = indexByPwdResetIdx->begin();
			std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* >::iterator endByPwdResetIdx = indexByPwdResetIdx->end();
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* curByPwdResetIdx = NULL;
			while( iterByPwdResetIdx != endByPwdResetIdx ) {
				curByPwdResetIdx = iterByPwdResetIdx->second;
				if( curByPwdResetIdx != NULL ) {
					curByPwdResetIdx->clear();
					delete curByPwdResetIdx;
					curByPwdResetIdx = NULL;
					iterByPwdResetIdx->second = NULL;
				}
				iterByPwdResetIdx ++;
			}
			indexByPwdResetIdx->clear();
		}
		if( indexByDefDevIdx != NULL ) {
			std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* >::iterator iterByDefDevIdx = indexByDefDevIdx->begin();
			std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* >::iterator endByDefDevIdx = indexByDefDevIdx->end();
			std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* curByDefDevIdx = NULL;
			while( iterByDefDevIdx != endByDefDevIdx ) {
				curByDefDevIdx = iterByDefDevIdx->second;
				if( curByDefDevIdx != NULL ) {
					curByDefDevIdx->clear();
					delete curByDefDevIdx;
					curByDefDevIdx = NULL;
					iterByDefDevIdx->second = NULL;
				}
				iterByDefDevIdx ++;
			}
			indexByDefDevIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbSecUserObj* cur = NULL;
			cfcore::ICFGenKbSecUserEditObj* edit = NULL;
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::newInstance() {
		cfcore::ICFGenKbSecUserObj* inst = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( new CFGenKbSecUserObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserTableObj::newEditInstance( cfcore::ICFGenKbSecUserObj* orig ) {
		cfcore::ICFGenKbSecUserEditObj* edit = dynamic_cast<cfcore::ICFGenKbSecUserEditObj*>( new CFGenKbSecUserEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::realizeSecUser( cfcore::ICFGenKbSecUserObj* Obj ) {
		static const std::string S_ProcName( "realizeSecUser" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecUserObj* obj = Obj;
		cfcore::ICFGenKbSecUserObj* existingObj = NULL;
		cfcore::CFGenKbSecUserPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbSecUserObj* keepObj = NULL;
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
			if( indexByULoginIdx != NULL ) {
				cfcore::CFGenKbSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( keepObj->getRequiredLoginId() );
				auto removalProbe = indexByULoginIdx->find( keyULoginIdx );
				if( removalProbe != indexByULoginIdx->end() ) {
					indexByULoginIdx->erase( removalProbe );
				}
			}

			if( indexByEMConfIdx != NULL ) {
				cfcore::CFGenKbSecUserByEMConfIdxKey keyEMConfIdx;
				if( keepObj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( keepObj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapEMConfIdx = searchEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						auto removalProbe = mapEMConfIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapEMConfIdx->end() ) {
							mapEMConfIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				cfcore::CFGenKbSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( keepObj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( keepObj->getOptionalPasswordResetUuidValue() );
				}
				auto searchPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapPwdResetIdx = searchPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						auto removalProbe = mapPwdResetIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapPwdResetIdx->end() ) {
							mapPwdResetIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				cfcore::CFGenKbSecUserByDefDevIdxKey keyDefDevIdx;
				if( keepObj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( keepObj->getOptionalDfltDevUserIdValue() );
				}
				if( keepObj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( keepObj->getOptionalDfltDevNameValue() );
				}
				auto searchDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapDefDevIdx = searchDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						auto removalProbe = mapDefDevIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapDefDevIdx->end() ) {
							mapDefDevIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByULoginIdx != NULL ) {
				static const std::string S_AULoginIdxObj( "aULoginIdxObj" );
				cfcore::ICFGenKbSecUserObj* aULoginIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aULoginIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AULoginIdxObj );
				}
				cfcore::CFGenKbSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( keepObj->getRequiredLoginId() );
				indexByULoginIdx->insert( std::map< cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::ICFGenKbSecUserObj* >::value_type( keyULoginIdx, aULoginIdxObj ) );
			}

			if( indexByEMConfIdx != NULL ) {
				static const std::string S_AEMConfIdxObj( "aEMConfIdxObj" );
				cfcore::ICFGenKbSecUserObj* aEMConfIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aEMConfIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEMConfIdxObj );
				}
				cfcore::CFGenKbSecUserByEMConfIdxKey keyEMConfIdx;
				if( keepObj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( keepObj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchIndexByEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapEMConfIdx = searchIndexByEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						mapEMConfIdx->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), aEMConfIdxObj ) );
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				static const std::string S_APwdResetIdxObj( "aPwdResetIdxObj" );
				cfcore::ICFGenKbSecUserObj* aPwdResetIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aPwdResetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APwdResetIdxObj );
				}
				cfcore::CFGenKbSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( keepObj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( keepObj->getOptionalPasswordResetUuidValue() );
				}
				auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapPwdResetIdx = searchIndexByPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						mapPwdResetIdx->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), aPwdResetIdxObj ) );
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				static const std::string S_ADefDevIdxObj( "aDefDevIdxObj" );
				cfcore::ICFGenKbSecUserObj* aDefDevIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aDefDevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefDevIdxObj );
				}
				cfcore::CFGenKbSecUserByDefDevIdxKey keyDefDevIdx;
				if( keepObj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( keepObj->getOptionalDfltDevUserIdValue() );
				}
				if( keepObj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( keepObj->getOptionalDfltDevNameValue() );
				}
				auto searchIndexByDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapDefDevIdx = searchIndexByDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						mapDefDevIdx->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), aDefDevIdxObj ) );
					}
				}
			}

			if( allSecUser != NULL ) {
				allSecUser->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByULoginIdx != NULL ) {
				static const std::string S_AULoginIdxObj( "aULoginIdxObj" );
				cfcore::ICFGenKbSecUserObj* aULoginIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aULoginIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AULoginIdxObj );
				}
				cfcore::CFGenKbSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( keepObj->getRequiredLoginId() );
				indexByULoginIdx->insert( std::map< cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::ICFGenKbSecUserObj* >::value_type( keyULoginIdx, aULoginIdxObj ) );
			}

			if( indexByEMConfIdx != NULL ) {
				static const std::string S_AEMConfIdxObj( "aEMConfIdxObj" );
				cfcore::ICFGenKbSecUserObj* aEMConfIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aEMConfIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AEMConfIdxObj );
				}
				cfcore::CFGenKbSecUserByEMConfIdxKey keyEMConfIdx;
				if( keepObj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( keepObj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchIndexByEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapEMConfIdx = searchIndexByEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						mapEMConfIdx->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), aEMConfIdxObj ) );
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				static const std::string S_APwdResetIdxObj( "aPwdResetIdxObj" );
				cfcore::ICFGenKbSecUserObj* aPwdResetIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aPwdResetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_APwdResetIdxObj );
				}
				cfcore::CFGenKbSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( keepObj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( keepObj->getOptionalPasswordResetUuidValue() );
				}
				auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapPwdResetIdx = searchIndexByPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						mapPwdResetIdx->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), aPwdResetIdxObj ) );
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				static const std::string S_ADefDevIdxObj( "aDefDevIdxObj" );
				cfcore::ICFGenKbSecUserObj* aDefDevIdxObj =
					dynamic_cast<cfcore::ICFGenKbSecUserObj*>( keepObj );
				if( aDefDevIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ADefDevIdxObj );
				}
				cfcore::CFGenKbSecUserByDefDevIdxKey keyDefDevIdx;
				if( keepObj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( keepObj->getOptionalDfltDevUserIdValue() );
				}
				if( keepObj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( keepObj->getOptionalDfltDevNameValue() );
				}
				auto searchIndexByDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapDefDevIdx = searchIndexByDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						mapDefDevIdx->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), aDefDevIdxObj ) );
					}
				}
			}

			if( allSecUser != NULL ) {
				allSecUser->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbSecUserTableObj::deepDisposeByIdIdx( const uuid_ptr_t SecUserId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbSecUserObj*> list;
		cfcore::ICFGenKbSecUserObj* existingObj = readCachedSecUserByIdIdx( SecUserId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecUserTableObj::deepDisposeByULoginIdx( const std::string& LoginId ) {
		static const std::string S_ProcName( "deepDisposeByULoginIdx" );
		std::vector<cfcore::ICFGenKbSecUserObj*> list;
		cfcore::ICFGenKbSecUserObj* existingObj = readCachedSecUserByULoginIdx( LoginId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecUserTableObj::deepDisposeByEMConfIdx( const uuid_ptr_t EMailConfirmUuid ) {
		static const std::string S_ProcName( "deepDisposeByEMConfIdx" );
		std::vector<cfcore::ICFGenKbSecUserObj*> list;
		std::vector<cfcore::ICFGenKbSecUserObj*> matchesFound = readCachedSecUserByEMConfIdx( EMailConfirmUuid );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecUserTableObj::deepDisposeByPwdResetIdx( const uuid_ptr_t PasswordResetUuid ) {
		static const std::string S_ProcName( "deepDisposeByPwdResetIdx" );
		std::vector<cfcore::ICFGenKbSecUserObj*> list;
		std::vector<cfcore::ICFGenKbSecUserObj*> matchesFound = readCachedSecUserByPwdResetIdx( PasswordResetUuid );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecUserTableObj::deepDisposeByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName ) {
		static const std::string S_ProcName( "deepDisposeByDefDevIdx" );
		std::vector<cfcore::ICFGenKbSecUserObj*> list;
		std::vector<cfcore::ICFGenKbSecUserObj*> matchesFound = readCachedSecUserByDefDevIdx( DfltDevUserId,
				DfltDevName );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbSecUserObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDeepDisposeSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbSecUserTableObj::reallyDeepDisposeSecUser( cfcore::ICFGenKbSecUserObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeSecUser" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbSecUserObj* obj = Obj;
		
		dynamic_cast<cfcore::CFGenKbTSecGrpMembTableObj*>( schema->getTSecGrpMembTableObj() )->deepDisposeByUserIdx( obj->getRequiredSecUserId() );
		dynamic_cast<cfcore::CFGenKbSecGrpMembTableObj*>( schema->getSecGrpMembTableObj() )->deepDisposeByUserIdx( obj->getRequiredSecUserId() );
		dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->deepDisposeBySecUserIdx( obj->getRequiredSecUserId() );
		dynamic_cast<cfcore::CFGenKbSecSessionTableObj*>( schema->getSecSessionTableObj() )->deepDisposeBySecProxyIdx( obj->getRequiredSecUserIdReference() );
		dynamic_cast<cfcore::CFGenKbSecDeviceTableObj*>( schema->getSecDeviceTableObj() )->deepDisposeByUserIdx( obj->getRequiredSecUserId() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->reallyDetachFromIndexesSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::createSecUser( cfcore::ICFGenKbSecUserEditObj* Obj ) {
		static const std::string S_ProcName( "createSecUser" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecUserObj* obj = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecUserBuff* buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->createSecUser(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbSecUserBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readSecUser( cfcore::CFGenKbSecUserPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecUser" );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecUserBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredSecUserId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::lockSecUser( cfcore::CFGenKbSecUserPKey* pkey ) {
		static const std::string S_ProcName( "lockSecUser" );
		cfcore::ICFGenKbSecUserObj* locked = NULL;
		cfcore::CFGenKbSecUserBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readAllSecUser( bool forceRead ) {
		static const std::string S_ProcName( "readAllSecUser" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		if( forceRead || ( allSecUser == NULL ) ) {
			std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* map = new std::map<cfcore::CFGenKbSecUserPKey,cfcore::ICFGenKbSecUserObj*>();
			allSecUser = map;
			std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbSecUserBuff* buff = NULL;
			cfcore::ICFGenKbSecUserObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allSecUser->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allSecUser->size();
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		auto valIter = allSecUser->begin();
		size_t idx = 0;
		while( valIter != allSecUser->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::pageAllSecUser(const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllSecUser" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* map = NULL;
		cfcore::CFGenKbSecUserBuff* buff = NULL;
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		std::vector<cfcore::ICFGenKbSecUserObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbSecUserPKey,cfcore::ICFGenKbSecUserObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->pageAllBuff( schema->getAuthorization(),
				priorSecUserId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readSecUserByIdIdx( const uuid_ptr_t SecUserId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserPKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecUserObj* obj = readSecUser( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readSecUserByULoginIdx( const std::string& LoginId, bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByULoginIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
				cfcore::ICFGenKbSecUserObj*>();
		}
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
			if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByULoginIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecUserBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByULoginIdx( schema->getAuthorization(),
				LoginId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByULoginIdx->insert( std::map< cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::ICFGenKbSecUserObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecUserObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByEMConfIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* dict;
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* oldDict;
		if( indexByEMConfIdx == NULL ) {
			indexByEMConfIdx = new std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		}
		auto searchIndexByEMConfIdx = indexByEMConfIdx->find( key );
		if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
			oldDict = searchIndexByEMConfIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>();
			cfcore::ICFGenKbSecUserObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByEMConfIdx( schema->getAuthorization(),
				EMailConfirmUuid );
			cfcore::CFGenKbSecUserBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecUserObj* realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByEMConfIdx->erase( searchIndexByEMConfIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByEMConfIdx->insert( std::map< cfcore::CFGenKbSecUserByEMConfIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByPwdResetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* dict;
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* oldDict;
		if( indexByPwdResetIdx == NULL ) {
			indexByPwdResetIdx = new std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		}
		auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( key );
		if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
			oldDict = searchIndexByPwdResetIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>();
			cfcore::ICFGenKbSecUserObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByPwdResetIdx( schema->getAuthorization(),
				PasswordResetUuid );
			cfcore::CFGenKbSecUserBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecUserObj* realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByPwdResetIdx->erase( searchIndexByPwdResetIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByPwdResetIdx->insert( std::map< cfcore::CFGenKbSecUserByPwdResetIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
		bool forceRead )
	{
		static const std::string S_ProcName( "readSecUserByDefDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* dict;
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* oldDict;
		if( indexByDefDevIdx == NULL ) {
			indexByDefDevIdx = new std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>*>();
		}
		auto searchIndexByDefDevIdx = indexByDefDevIdx->find( key );
		if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
			oldDict = searchIndexByDefDevIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>();
			cfcore::ICFGenKbSecUserObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByDefDevIdx( schema->getAuthorization(),
				DfltDevUserId,
				DfltDevName );
			cfcore::CFGenKbSecUserBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbSecUserObj* realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByDefDevIdx->erase( searchIndexByDefDevIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByDefDevIdx->insert( std::map< cfcore::CFGenKbSecUserByDefDevIdxKey,
				std::map< cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readSecUserByLookupULoginIdx( const std::string& LoginId, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readSecUserByLookupULoginIdx" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
				cfcore::ICFGenKbSecUserObj*>();
		}
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
			if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
				obj = searchIndexByULoginIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbSecUserBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByLookupULoginIdx( schema->getAuthorization(),
				LoginId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByULoginIdx->insert( std::map< cfcore::CFGenKbSecUserByULoginIdxKey, cfcore::ICFGenKbSecUserObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbSecUserObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readCachedSecUser( cfcore::CFGenKbSecUserPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readSecUser" );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readCachedSecUserByIdIdx( const uuid_ptr_t SecUserId )
	{
		static const std::string S_ProcName( "readCachedSecUserByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserPKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecUserObj* obj = readCachedSecUser( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readCachedSecUserByULoginIdx( const std::string& LoginId )
	{
		static const std::string S_ProcName( "readCachedSecUserByULoginIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
				cfcore::ICFGenKbSecUserObj*>();
		}
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
		if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByULoginIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecUserBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readCachedSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid )
	{
		static const std::string S_ProcName( "readCachedSecUserByEMConfIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		cfcore::CFGenKbSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* dict;
		if( indexByEMConfIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByEMConfIdx = indexByEMConfIdx->find( key );
		if( searchIndexByEMConfIdx != indexByEMConfIdx->end() ) {
			dict = searchIndexByEMConfIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecUserObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecUserObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecUserBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readCachedSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid )
	{
		static const std::string S_ProcName( "readCachedSecUserByPwdResetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		cfcore::CFGenKbSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* dict;
		if( indexByPwdResetIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByPwdResetIdx = indexByPwdResetIdx->find( key );
		if( searchIndexByPwdResetIdx != indexByPwdResetIdx->end() ) {
			dict = searchIndexByPwdResetIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecUserObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecUserObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecUserBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::readCachedSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName )
	{
		static const std::string S_ProcName( "readCachedSecUserByDefDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbSecUserObj*> arr;
		cfcore::CFGenKbSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* dict;
		if( indexByDefDevIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByDefDevIdx = indexByDefDevIdx->find( key );
		if( searchIndexByDefDevIdx != indexByDefDevIdx->end() ) {
			dict = searchIndexByDefDevIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbSecUserObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbSecUserObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecUserBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::readCachedSecUserByLookupULoginIdx( const std::string& LoginId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedSecUserByLookupULoginIdx" );
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
				cfcore::ICFGenKbSecUserObj*>();
		}
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		cfcore::ICFGenKbSecUserObj* realized = NULL;
		auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
		if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
			obj = searchIndexByULoginIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbSecUserBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::pageSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageSecUserByEMConfIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserByEMConfIdxKey key;
		if( EMailConfirmUuid == NULL ) {
			key.setOptionalEMailConfirmUuidNull();
		}
		else {
			key.setOptionalEMailConfirmUuidValue( EMailConfirmUuid );
		}
		cfcore::ICFGenKbSecUserObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->pageBuffByEMConfIdx( schema->getAuthorization(),
				EMailConfirmUuid,
				priorSecUserId );
		std::vector<cfcore::ICFGenKbSecUserObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecUserBuff* buff;
		cfcore::ICFGenKbSecUserObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::pageSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageSecUserByPwdResetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserByPwdResetIdxKey key;
		if( PasswordResetUuid == NULL ) {
			key.setOptionalPasswordResetUuidNull();
		}
		else {
			key.setOptionalPasswordResetUuidValue( PasswordResetUuid );
		}
		cfcore::ICFGenKbSecUserObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->pageBuffByPwdResetIdx( schema->getAuthorization(),
				PasswordResetUuid,
				priorSecUserId );
		std::vector<cfcore::ICFGenKbSecUserObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecUserBuff* buff;
		cfcore::ICFGenKbSecUserObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	std::vector<cfcore::ICFGenKbSecUserObj*> CFGenKbSecUserTableObj::pageSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName,
			const uuid_ptr_t priorSecUserId )
	{
		static const std::string S_ProcName( "pageSecUserByDefDevIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbSecUserByDefDevIdxKey key;
		if( DfltDevUserId == NULL ) {
			key.setOptionalDfltDevUserIdNull();
		}
		else {
			key.setOptionalDfltDevUserIdValue( DfltDevUserId );
		}
		if( DfltDevName == NULL ) {
			key.setOptionalDfltDevNameNull();
		}
		else {
			key.setOptionalDfltDevNameValue( *DfltDevName );
		}
		cfcore::ICFGenKbSecUserObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbSecUserBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->pageBuffByDefDevIdx( schema->getAuthorization(),
				DfltDevUserId,
				DfltDevName,
				priorSecUserId );
		std::vector<cfcore::ICFGenKbSecUserObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbSecUserBuff* buff;
		cfcore::ICFGenKbSecUserObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserTableObj::updateSecUser( cfcore::ICFGenKbSecUserEditObj* Obj ) {
		static const std::string S_ProcName( "updateSecUser" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbSecUserObj* obj = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbSecUserBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->updateSecUser( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbSecUserBuff*>( Obj->getSecUserBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( dynamic_cast<cfcore::CFGenKbSecUserTableObj*>( schema->getSecUserTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbSecUserObj*>( obj->realize() );
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

	void CFGenKbSecUserTableObj::deleteSecUser( cfcore::ICFGenKbSecUserEditObj* Obj ) {
		cfcore::ICFGenKbSecUserObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUser( schema->getAuthorization(),
			obj->getSecUserBuff() );
		deepDisposeByIdIdx( obj->getRequiredSecUserId() );
	}

	void CFGenKbSecUserTableObj::deleteSecUserByIdIdx( const uuid_ptr_t SecUserId )
	{
		cfcore::CFGenKbSecUserPKey pkey;
		pkey.setRequiredSecUserId( SecUserId );
		cfcore::ICFGenKbSecUserObj* obj = readSecUser( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbSecUserEditObj* editObj = dynamic_cast<cfcore::ICFGenKbSecUserEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbSecUserEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbSecUserTableObj::deleteSecUserByULoginIdx( const std::string& LoginId )
	{
		if( indexByULoginIdx == NULL ) {
			indexByULoginIdx = new std::map< cfcore::CFGenKbSecUserByULoginIdxKey,
				cfcore::ICFGenKbSecUserObj*>();
		}
		cfcore::CFGenKbSecUserByULoginIdxKey key;
		key.setRequiredLoginId( LoginId );
		cfcore::ICFGenKbSecUserObj* obj = NULL;
		auto searchIndexByULoginIdx = indexByULoginIdx->find( key );
		if( searchIndexByULoginIdx != indexByULoginIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByULoginIdx( schema->getAuthorization(),
				LoginId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByULoginIdx( schema->getAuthorization(),
				LoginId );
		}
		deepDisposeByULoginIdx( LoginId );
	}

	void CFGenKbSecUserTableObj::deleteSecUserByEMConfIdx( const uuid_ptr_t EMailConfirmUuid )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByEMConfIdx( schema->getAuthorization(),
				EMailConfirmUuid );
		deepDisposeByEMConfIdx( EMailConfirmUuid );
	}

	void CFGenKbSecUserTableObj::deleteSecUserByPwdResetIdx( const uuid_ptr_t PasswordResetUuid )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByPwdResetIdx( schema->getAuthorization(),
				PasswordResetUuid );
		deepDisposeByPwdResetIdx( PasswordResetUuid );
	}

	void CFGenKbSecUserTableObj::deleteSecUserByDefDevIdx( const uuid_ptr_t DfltDevUserId,
			const std::string* DfltDevName )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->deleteSecUserByDefDevIdx( schema->getAuthorization(),
				DfltDevUserId,
				DfltDevName );
		deepDisposeByDefDevIdx( DfltDevUserId,
			DfltDevName );
	}

	void CFGenKbSecUserTableObj::reallyDetachFromIndexesSecUser( cfcore::ICFGenKbSecUserObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesSecUser" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbSecUserObj* obj = Obj;
		cfcore::CFGenKbSecUserPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbSecUserObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByULoginIdx != NULL ) {
				cfcore::CFGenKbSecUserByULoginIdxKey keyULoginIdx;
				keyULoginIdx.setRequiredLoginId( obj->getRequiredLoginId() );
				auto removalProbe = indexByULoginIdx->find( keyULoginIdx );
				if( removalProbe != indexByULoginIdx->end() ) {
					indexByULoginIdx->erase( removalProbe );
				}
			}

			if( indexByEMConfIdx != NULL ) {
				cfcore::CFGenKbSecUserByEMConfIdxKey keyEMConfIdx;
				if( obj->isOptionalEMailConfirmUuidNull() ) {
					keyEMConfIdx.setOptionalEMailConfirmUuidNull();
				}
				else {
					keyEMConfIdx.setOptionalEMailConfirmUuidValue( obj->getOptionalEMailConfirmUuidValue() );
				}
				auto searchEMConfIdx = indexByEMConfIdx->find( keyEMConfIdx );
				if( searchEMConfIdx != indexByEMConfIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapEMConfIdx = searchEMConfIdx->second;
					if( mapEMConfIdx != NULL ) {
						auto removalProbe = mapEMConfIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapEMConfIdx->end() ) {
							mapEMConfIdx->erase( removalProbe );
							if( mapEMConfIdx->empty() ) {
								delete mapEMConfIdx;
								mapEMConfIdx = NULL;
								indexByEMConfIdx->erase( searchEMConfIdx );
							}
						}
					}
				}
			}

			if( indexByPwdResetIdx != NULL ) {
				cfcore::CFGenKbSecUserByPwdResetIdxKey keyPwdResetIdx;
				if( obj->isOptionalPasswordResetUuidNull() ) {
					keyPwdResetIdx.setOptionalPasswordResetUuidNull();
				}
				else {
					keyPwdResetIdx.setOptionalPasswordResetUuidValue( obj->getOptionalPasswordResetUuidValue() );
				}
				auto searchPwdResetIdx = indexByPwdResetIdx->find( keyPwdResetIdx );
				if( searchPwdResetIdx != indexByPwdResetIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapPwdResetIdx = searchPwdResetIdx->second;
					if( mapPwdResetIdx != NULL ) {
						auto removalProbe = mapPwdResetIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapPwdResetIdx->end() ) {
							mapPwdResetIdx->erase( removalProbe );
							if( mapPwdResetIdx->empty() ) {
								delete mapPwdResetIdx;
								mapPwdResetIdx = NULL;
								indexByPwdResetIdx->erase( searchPwdResetIdx );
							}
						}
					}
				}
			}

			if( indexByDefDevIdx != NULL ) {
				cfcore::CFGenKbSecUserByDefDevIdxKey keyDefDevIdx;
				if( obj->isOptionalDfltDevUserIdNull() ) {
					keyDefDevIdx.setOptionalDfltDevUserIdNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevUserIdValue( obj->getOptionalDfltDevUserIdValue() );
				}
				if( obj->isOptionalDfltDevNameNull() ) {
					keyDefDevIdx.setOptionalDfltDevNameNull();
				}
				else {
					keyDefDevIdx.setOptionalDfltDevNameValue( obj->getOptionalDfltDevNameValue() );
				}
				auto searchDefDevIdx = indexByDefDevIdx->find( keyDefDevIdx );
				if( searchDefDevIdx != indexByDefDevIdx->end() ) {
					std::map<cfcore::CFGenKbSecUserPKey, cfcore::ICFGenKbSecUserObj*>* mapDefDevIdx = searchDefDevIdx->second;
					if( mapDefDevIdx != NULL ) {
						auto removalProbe = mapDefDevIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapDefDevIdx->end() ) {
							mapDefDevIdx->erase( removalProbe );
							if( mapDefDevIdx->empty() ) {
								delete mapDefDevIdx;
								mapDefDevIdx = NULL;
								indexByDefDevIdx->erase( searchDefDevIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}

	ICFGenKbSecUserObj* CFGenKbSecUserTableObj::getSystemUser() {
		static const std::string S_System( "system" );
		bool transactionStarted = schema->beginTransaction();
		ICFGenKbSecUserObj* secUserObj;
		try {
			secUserObj = schema->getSecUserTableObj()->readSecUserByULoginIdx( S_System );
			if( secUserObj == NULL ) {
				secUserObj = schema->getSecUserTableObj()->readSecUserByULoginIdx( S_System, true );
				if( secUserObj == NULL ) {
					secUserObj = newInstance();
					ICFGenKbSecUserEditObj* secUserEdit = secUserObj->beginEdit();
					secUserEdit->setRequiredEMailAddress( S_System );
					secUserObj = secUserEdit->create();
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
		return( secUserObj );
	}


}
