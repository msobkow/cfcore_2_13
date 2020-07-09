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

	const std::string CFGenKbGelInstructionTableObj::CLASS_NAME( "CFGenKbGelInstructionTableObj" );
	const std::string CFGenKbGelInstructionTableObj::TABLE_NAME( "GelInstruction" );
	const std::string CFGenKbGelInstructionTableObj::TABLE_DBNAME( "gelinst" );

	CFGenKbGelInstructionTableObj::CFGenKbGelInstructionTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>();
		allGelInstruction = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
	}

	CFGenKbGelInstructionTableObj::CFGenKbGelInstructionTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>();
		allGelInstruction = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
	}

	CFGenKbGelInstructionTableObj::~CFGenKbGelInstructionTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByGelCacheIdx != NULL ) {
			delete indexByGelCacheIdx;
			indexByGelCacheIdx = NULL;
		}
		if( indexByChainIdx != NULL ) {
			delete indexByChainIdx;
			indexByChainIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbGelInstructionObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGelInstructionTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelInstructionTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelInstructionTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelInstructionTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelInstructionTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelInstructionTableObj::minimizeMemory() {
		if( allGelInstruction != NULL ) {
			allGelInstruction->clear();
			delete allGelInstruction;
			allGelInstruction = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* curByTenantIdx = NULL;
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
		if( indexByGelCacheIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* curByGelCacheIdx = NULL;
			while( iterByGelCacheIdx != endByGelCacheIdx ) {
				curByGelCacheIdx = iterByGelCacheIdx->second;
				if( curByGelCacheIdx != NULL ) {
					curByGelCacheIdx->clear();
					delete curByGelCacheIdx;
					curByGelCacheIdx = NULL;
					iterByGelCacheIdx->second = NULL;
				}
				iterByGelCacheIdx ++;
			}
			indexByGelCacheIdx->clear();
		}
		if( indexByChainIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* curByChainIdx = NULL;
			while( iterByChainIdx != endByChainIdx ) {
				curByChainIdx = iterByChainIdx->second;
				if( curByChainIdx != NULL ) {
					curByChainIdx->clear();
					delete curByChainIdx;
					curByChainIdx = NULL;
					iterByChainIdx->second = NULL;
				}
				iterByChainIdx ++;
			}
			indexByChainIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbGelInstructionObj* cur = NULL;
			cfcore::ICFGenKbGelInstructionEditObj* edit = NULL;
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::newInstance() {
		cfcore::ICFGenKbGelInstructionObj* inst = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( new CFGenKbGelInstructionObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionTableObj::newEditInstance( cfcore::ICFGenKbGelInstructionObj* orig ) {
		cfcore::ICFGenKbGelInstructionEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( new CFGenKbGelInstructionEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::constructByClassCode( const classcode_t argClassCode ) {
		static const std::string S_ProcName( "constructByClassCode" );
		static const std::string S_Obj( "obj" );
		cfcore::ICFGenKbGelInstructionObj* obj = NULL;
		if( argClassCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelPopTableObj*>( schema->getGelPopTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelPrefixLineTableObj*>( schema->getGelPrefixLineTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelReferenceTableObj*>( schema->getGelReferenceTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelSwitchTableObj*>( schema->getGelSwitchTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelBoilerplateTableObj*>( schema->getGelBoilerplateTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelErrorTableObj*>( schema->getGelErrorTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelConstrainTableObj*>( schema->getGelConstrainTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelCounterTableObj*>( schema->getGelCounterTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelExpansionTableObj*>( schema->getGelExpansionTableObj() )->newInstance();
		}
		else if( argClassCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
			obj = dynamic_cast<cfcore::CFGenKbGelModifierTableObj*>( schema->getGelModifierTableObj() )->newInstance();
		}
		if( obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_Obj );
		}
		return( obj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::realizeGelInstruction( cfcore::ICFGenKbGelInstructionObj* Obj ) {
		static const std::string S_ProcName( "realizeGelInstruction" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelInstructionObj* obj = Obj;
		cfcore::ICFGenKbGelInstructionObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelInstructionObj* keepObj = NULL;
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
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						auto removalProbe = mapGelCacheIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapGelCacheIdx->end() ) {
							mapGelCacheIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( keepObj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( keepObj->getOptionalChainInstTenantIdValue() );
				}
				if( keepObj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( keepObj->getOptionalChainInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( keepObj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
						}
					}
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelInstructionObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelInstructionObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( keepObj );
				if( aGelCacheIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelCacheIdxObj );
				}
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelInstructionObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( keepObj );
				if( aChainIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AChainIdxObj );
				}
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( keepObj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( keepObj->getOptionalChainInstTenantIdValue() );
				}
				if( keepObj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( keepObj->getOptionalChainInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( keepObj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchIndexByChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchIndexByChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( allGelInstruction != NULL ) {
				allGelInstruction->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelInstructionObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelInstructionObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( keepObj );
				if( aGelCacheIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelCacheIdxObj );
				}
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( keepObj->getRequiredGelCacheId() );
				auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelInstructionObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( keepObj );
				if( aChainIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AChainIdxObj );
				}
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( keepObj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( keepObj->getOptionalChainInstTenantIdValue() );
				}
				if( keepObj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( keepObj->getOptionalChainInstGelCacheIdValue() );
				}
				if( keepObj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( keepObj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchIndexByChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchIndexByChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( allGelInstruction != NULL ) {
				allGelInstruction->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbGelInstructionTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> list;
		cfcore::ICFGenKbGelInstructionObj* existingObj = readCachedGelInstructionByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelInstructionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPopTableObj*>( schema->getGelPopTableObj() )->reallyDeepDisposeGelPop( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPrefixLineTableObj*>( schema->getGelPrefixLineTableObj() )->reallyDeepDisposeGelPrefixLine( dynamic_cast<cfcore::ICFGenKbGelPrefixLineObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelReferenceTableObj*>( schema->getGelReferenceTableObj() )->reallyDeepDisposeGelReference( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchTableObj*>( schema->getGelSwitchTableObj() )->reallyDeepDisposeGelSwitch( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBoilerplateTableObj*>( schema->getGelBoilerplateTableObj() )->reallyDeepDisposeGelBoilerplate( dynamic_cast<cfcore::ICFGenKbGelBoilerplateObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelErrorTableObj*>( schema->getGelErrorTableObj() )->reallyDeepDisposeGelError( dynamic_cast<cfcore::ICFGenKbGelErrorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelConstrainTableObj*>( schema->getGelConstrainTableObj() )->reallyDeepDisposeGelConstrain( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCounterTableObj*>( schema->getGelCounterTableObj() )->reallyDeepDisposeGelCounter( dynamic_cast<cfcore::ICFGenKbGelCounterObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExpansionTableObj*>( schema->getGelExpansionTableObj() )->reallyDeepDisposeGelExpansion( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelModifierTableObj*>( schema->getGelModifierTableObj() )->reallyDeepDisposeGelModifier( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelInstructionTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> list;
		std::vector<cfcore::ICFGenKbGelInstructionObj*> matchesFound = readCachedGelInstructionByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelInstructionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPopTableObj*>( schema->getGelPopTableObj() )->reallyDeepDisposeGelPop( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPrefixLineTableObj*>( schema->getGelPrefixLineTableObj() )->reallyDeepDisposeGelPrefixLine( dynamic_cast<cfcore::ICFGenKbGelPrefixLineObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelReferenceTableObj*>( schema->getGelReferenceTableObj() )->reallyDeepDisposeGelReference( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchTableObj*>( schema->getGelSwitchTableObj() )->reallyDeepDisposeGelSwitch( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBoilerplateTableObj*>( schema->getGelBoilerplateTableObj() )->reallyDeepDisposeGelBoilerplate( dynamic_cast<cfcore::ICFGenKbGelBoilerplateObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelErrorTableObj*>( schema->getGelErrorTableObj() )->reallyDeepDisposeGelError( dynamic_cast<cfcore::ICFGenKbGelErrorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelConstrainTableObj*>( schema->getGelConstrainTableObj() )->reallyDeepDisposeGelConstrain( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCounterTableObj*>( schema->getGelCounterTableObj() )->reallyDeepDisposeGelCounter( dynamic_cast<cfcore::ICFGenKbGelCounterObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExpansionTableObj*>( schema->getGelExpansionTableObj() )->reallyDeepDisposeGelExpansion( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelModifierTableObj*>( schema->getGelModifierTableObj() )->reallyDeepDisposeGelModifier( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelInstructionTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> list;
		std::vector<cfcore::ICFGenKbGelInstructionObj*> matchesFound = readCachedGelInstructionByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelInstructionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPopTableObj*>( schema->getGelPopTableObj() )->reallyDeepDisposeGelPop( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPrefixLineTableObj*>( schema->getGelPrefixLineTableObj() )->reallyDeepDisposeGelPrefixLine( dynamic_cast<cfcore::ICFGenKbGelPrefixLineObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelReferenceTableObj*>( schema->getGelReferenceTableObj() )->reallyDeepDisposeGelReference( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchTableObj*>( schema->getGelSwitchTableObj() )->reallyDeepDisposeGelSwitch( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBoilerplateTableObj*>( schema->getGelBoilerplateTableObj() )->reallyDeepDisposeGelBoilerplate( dynamic_cast<cfcore::ICFGenKbGelBoilerplateObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelErrorTableObj*>( schema->getGelErrorTableObj() )->reallyDeepDisposeGelError( dynamic_cast<cfcore::ICFGenKbGelErrorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelConstrainTableObj*>( schema->getGelConstrainTableObj() )->reallyDeepDisposeGelConstrain( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCounterTableObj*>( schema->getGelCounterTableObj() )->reallyDeepDisposeGelCounter( dynamic_cast<cfcore::ICFGenKbGelCounterObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExpansionTableObj*>( schema->getGelExpansionTableObj() )->reallyDeepDisposeGelExpansion( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelModifierTableObj*>( schema->getGelModifierTableObj() )->reallyDeepDisposeGelModifier( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelInstructionTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> list;
		std::vector<cfcore::ICFGenKbGelInstructionObj*> matchesFound = readCachedGelInstructionByChainIdx( ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelInstructionObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDeepDisposeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDeepDisposeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPopTableObj*>( schema->getGelPopTableObj() )->reallyDeepDisposeGelPop( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelPrefixLineTableObj*>( schema->getGelPrefixLineTableObj() )->reallyDeepDisposeGelPrefixLine( dynamic_cast<cfcore::ICFGenKbGelPrefixLineObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelReferenceTableObj*>( schema->getGelReferenceTableObj() )->reallyDeepDisposeGelReference( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDeepDisposeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDeepDisposeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDeepDisposeGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelSwitchTableObj*>( schema->getGelSwitchTableObj() )->reallyDeepDisposeGelSwitch( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBoilerplateTableObj*>( schema->getGelBoilerplateTableObj() )->reallyDeepDisposeGelBoilerplate( dynamic_cast<cfcore::ICFGenKbGelBoilerplateObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelErrorTableObj*>( schema->getGelErrorTableObj() )->reallyDeepDisposeGelError( dynamic_cast<cfcore::ICFGenKbGelErrorObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelConstrainTableObj*>( schema->getGelConstrainTableObj() )->reallyDeepDisposeGelConstrain( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelCounterTableObj*>( schema->getGelCounterTableObj() )->reallyDeepDisposeGelCounter( dynamic_cast<cfcore::ICFGenKbGelCounterObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelExpansionTableObj*>( schema->getGelExpansionTableObj() )->reallyDeepDisposeGelExpansion( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( cur ) );
				}
				else if( classCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelModifierTableObj*>( schema->getGelModifierTableObj() )->reallyDeepDisposeGelModifier( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelInstructionTableObj::reallyDeepDisposeGelInstruction( cfcore::ICFGenKbGelInstructionObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelInstruction" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelInstructionObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDetachFromIndexesGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelIteratorTableObj*>( schema->getGelIteratorTableObj() )->reallyDetachFromIndexesGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelSpreadTableObj*>( schema->getGelSpreadTableObj() )->reallyDetachFromIndexesGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelPopTableObj*>( schema->getGelPopTableObj() )->reallyDetachFromIndexesGelPop( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelPrefixLineTableObj*>( schema->getGelPrefixLineTableObj() )->reallyDetachFromIndexesGelPrefixLine( dynamic_cast<cfcore::ICFGenKbGelPrefixLineObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelReferenceTableObj*>( schema->getGelReferenceTableObj() )->reallyDetachFromIndexesGelReference( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelCallTableObj*>( schema->getGelCallTableObj() )->reallyDetachFromIndexesGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelSequenceTableObj*>( schema->getGelSequenceTableObj() )->reallyDetachFromIndexesGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->reallyDetachFromIndexesGelExecutable( dynamic_cast<cfcore::ICFGenKbGelExecutableObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelSwitchTableObj*>( schema->getGelSwitchTableObj() )->reallyDetachFromIndexesGelSwitch( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelBoilerplateBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelBoilerplateTableObj*>( schema->getGelBoilerplateTableObj() )->reallyDetachFromIndexesGelBoilerplate( dynamic_cast<cfcore::ICFGenKbGelBoilerplateObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelErrorTableObj*>( schema->getGelErrorTableObj() )->reallyDetachFromIndexesGelError( dynamic_cast<cfcore::ICFGenKbGelErrorObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDetachFromIndexesGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelConstrainTableObj*>( schema->getGelConstrainTableObj() )->reallyDetachFromIndexesGelConstrain( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelCounterBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelCounterTableObj*>( schema->getGelCounterTableObj() )->reallyDetachFromIndexesGelCounter( dynamic_cast<cfcore::ICFGenKbGelCounterObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelExpansionTableObj*>( schema->getGelExpansionTableObj() )->reallyDetachFromIndexesGelExpansion( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( obj ) );
		}
		else if( classCode == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelModifierTableObj*>( schema->getGelModifierTableObj() )->reallyDetachFromIndexesGelModifier( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::createGelInstruction( cfcore::ICFGenKbGelInstructionEditObj* Obj ) {
		static const std::string S_ProcName( "createGelInstruction" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelInstructionObj* obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelInstructionBuff* buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->createGelInstruction(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::readGelInstruction( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelInstruction" );
		cfcore::ICFGenKbGelInstructionObj* obj = NULL;
		cfcore::ICFGenKbGelInstructionObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelInstructionBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::lockGelInstruction( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelInstruction" );
		cfcore::ICFGenKbGelInstructionObj* locked = NULL;
		cfcore::CFGenKbGelInstructionBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readAllGelInstruction( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelInstruction" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelInstructionObj* realized = NULL;
		if( forceRead || ( allGelInstruction == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelInstructionObj*>();
			allGelInstruction = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelInstructionBuff* buff = NULL;
			cfcore::ICFGenKbGelInstructionObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelInstruction->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelInstruction->size();
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		auto valIter = allGelInstruction->begin();
		size_t idx = 0;
		while( valIter != allGelInstruction->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::readGelInstructionByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelInstructionByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelInstructionObj* obj = readGelInstruction( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readGelInstructionByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelInstructionByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelInstructionObj* realized = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readGelInstructionByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelInstructionByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			oldDict = searchIndexByGelCacheIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelInstructionObj* realized = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readGelInstructionByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelInstructionByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( ChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *ChainInstTenantId );
		}
		if( ChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *ChainInstGelCacheId );
		}
		if( ChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *ChainInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>*>();
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			oldDict = searchIndexByChainIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelInstructionObj* realized = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::readCachedGelInstruction( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelInstruction" );
		cfcore::ICFGenKbGelInstructionObj* obj = NULL;
		cfcore::ICFGenKbGelInstructionObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::readCachedGelInstructionByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelInstructionByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelInstructionObj* obj = readCachedGelInstruction( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readCachedGelInstructionByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelInstructionByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelInstructionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readCachedGelInstructionByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelInstructionByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelInstructionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelInstructionObj*> CFGenKbGelInstructionTableObj::readCachedGelInstructionByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelInstructionByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
		cfcore::CFGenKbGelInstructionByChainIdxKey key;
		if( ChainInstTenantId == NULL ) {
			key.setOptionalChainInstTenantIdNull();
		}
		else {
			key.setOptionalChainInstTenantIdValue( *ChainInstTenantId );
		}
		if( ChainInstGelCacheId == NULL ) {
			key.setOptionalChainInstGelCacheIdNull();
		}
		else {
			key.setOptionalChainInstGelCacheIdValue( *ChainInstGelCacheId );
		}
		if( ChainInstGelInstId == NULL ) {
			key.setOptionalChainInstGelInstIdNull();
		}
		else {
			key.setOptionalChainInstGelInstIdValue( *ChainInstGelInstId );
		}
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelInstructionObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelInstructionObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionTableObj::updateGelInstruction( cfcore::ICFGenKbGelInstructionEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelInstruction" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelInstructionObj* obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelInstructionBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->updateGelInstruction( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( Obj->getGelInstructionBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj->realize() );
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

	void CFGenKbGelInstructionTableObj::deleteGelInstruction( cfcore::ICFGenKbGelInstructionEditObj* Obj ) {
		cfcore::ICFGenKbGelInstructionObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->deleteGelInstruction( schema->getAuthorization(),
			obj->getGelInstructionBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelInstructionTableObj::deleteGelInstructionByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelInstructionObj* obj = readGelInstruction( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelInstructionEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelInstructionTableObj::deleteGelInstructionByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->deleteGelInstructionByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelInstructionTableObj::deleteGelInstructionByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->deleteGelInstructionByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelInstructionTableObj::deleteGelInstructionByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->deleteGelInstructionByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelInstructionTableObj::reallyDetachFromIndexesGelInstruction( cfcore::ICFGenKbGelInstructionObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelInstruction" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelInstructionObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelInstructionObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByGelCacheIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByGelCacheIdxKey keyGelCacheIdx;
				keyGelCacheIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyGelCacheIdx.setRequiredGelCacheId( obj->getRequiredGelCacheId() );
				auto searchGelCacheIdx = indexByGelCacheIdx->find( keyGelCacheIdx );
				if( searchGelCacheIdx != indexByGelCacheIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						auto removalProbe = mapGelCacheIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapGelCacheIdx->end() ) {
							mapGelCacheIdx->erase( removalProbe );
							if( mapGelCacheIdx->empty() ) {
								delete mapGelCacheIdx;
								mapGelCacheIdx = NULL;
								indexByGelCacheIdx->erase( searchGelCacheIdx );
							}
						}
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				cfcore::CFGenKbGelInstructionByChainIdxKey keyChainIdx;
				if( obj->isOptionalChainInstTenantIdNull() ) {
					keyChainIdx.setOptionalChainInstTenantIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstTenantIdValue( obj->getOptionalChainInstTenantIdValue() );
				}
				if( obj->isOptionalChainInstGelCacheIdNull() ) {
					keyChainIdx.setOptionalChainInstGelCacheIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelCacheIdValue( obj->getOptionalChainInstGelCacheIdValue() );
				}
				if( obj->isOptionalChainInstGelInstIdNull() ) {
					keyChainIdx.setOptionalChainInstGelInstIdNull();
				}
				else {
					keyChainIdx.setOptionalChainInstGelInstIdValue( obj->getOptionalChainInstGelInstIdValue() );
				}
				auto searchChainIdx = indexByChainIdx->find( keyChainIdx );
				if( searchChainIdx != indexByChainIdx->end() ) {
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelInstructionObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
							if( mapChainIdx->empty() ) {
								delete mapChainIdx;
								mapChainIdx = NULL;
								indexByChainIdx->erase( searchChainIdx );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
	}


}
