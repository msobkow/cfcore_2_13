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

	const std::string CFGenKbGelBuiltinTableObj::CLASS_NAME( "CFGenKbGelBuiltinTableObj" );
	const std::string CFGenKbGelBuiltinTableObj::TABLE_NAME( "GelBuiltin" );
	const std::string CFGenKbGelBuiltinTableObj::TABLE_DBNAME( "gelbuiltin" );

	CFGenKbGelBuiltinTableObj::CFGenKbGelBuiltinTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>();
		allGelBuiltin = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
	}

	CFGenKbGelBuiltinTableObj::CFGenKbGelBuiltinTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>();
		allGelBuiltin = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
		indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
		indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
	}

	CFGenKbGelBuiltinTableObj::~CFGenKbGelBuiltinTableObj() {
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
			auto membersIter = members->begin();
			while( membersIter != members->end() ) {
				members->erase( membersIter );
				membersIter = members->begin();
			}
			delete members;
			members = NULL;
		}
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelBuiltinTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelBuiltinTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGelBuiltinTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGelBuiltinTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGelBuiltinTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGelBuiltinTableObj::minimizeMemory() {
		if( allGelBuiltin != NULL ) {
			allGelBuiltin->clear();
			delete allGelBuiltin;
			allGelBuiltin = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* curByTenantIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* >::iterator iterByGelCacheIdx = indexByGelCacheIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* >::iterator endByGelCacheIdx = indexByGelCacheIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* curByGelCacheIdx = NULL;
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
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* >::iterator iterByChainIdx = indexByChainIdx->begin();
			std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* >::iterator endByChainIdx = indexByChainIdx->end();
			std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* curByChainIdx = NULL;
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
			members->clear();
		}
	}

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::newInstance() {
		cfcore::ICFGenKbGelBuiltinObj* inst = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( new CFGenKbGelBuiltinObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGelBuiltinEditObj* CFGenKbGelBuiltinTableObj::newEditInstance( cfcore::ICFGenKbGelBuiltinObj* orig ) {
		cfcore::ICFGenKbGelBuiltinEditObj* edit = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( new CFGenKbGelBuiltinEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::realizeGelBuiltin( cfcore::ICFGenKbGelBuiltinObj* Obj ) {
		static const std::string S_ProcName( "realizeGelBuiltin" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelBuiltinObj* obj = Obj;
		cfcore::ICFGenKbGelBuiltinObj* existingObj = NULL;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGelBuiltinObj* keepObj = NULL;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						auto removalProbe = mapGelCacheIdx->find( *pkey );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
						if( removalProbe != mapChainIdx->end() ) {
							mapChainIdx->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( Obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelBuiltinObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelBuiltinObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelBuiltinObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( allGelBuiltin != NULL ) {
				allGelBuiltin->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->realizeGelInstruction( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGelBuiltinObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByGelCacheIdx != NULL ) {
				static const std::string S_AGelCacheIdxObj( "aGelCacheIdxObj" );
				cfcore::ICFGenKbGelBuiltinObj* aGelCacheIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapGelCacheIdx = searchIndexByGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						mapGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), aGelCacheIdxObj ) );
					}
				}
			}

			if( indexByChainIdx != NULL ) {
				static const std::string S_AChainIdxObj( "aChainIdxObj" );
				cfcore::ICFGenKbGelBuiltinObj* aChainIdxObj =
					dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( keepObj );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapChainIdx = searchIndexByChainIdx->second;
					if( mapChainIdx != NULL ) {
						mapChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), aChainIdxObj ) );
					}
				}
			}

			if( allGelBuiltin != NULL ) {
				allGelBuiltin->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGelBuiltinTableObj::deepDisposeByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId ) {
		static const std::string S_ProcName( "deepDisposeByPIdx" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> list;
		cfcore::ICFGenKbGelBuiltinObj* existingObj = readCachedGelBuiltinByPIdx( TenantId,
				GelCacheId,
				GelInstId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGelBuiltinObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelBuiltinTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> list;
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> matchesFound = readCachedGelBuiltinByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelBuiltinObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelBuiltinTableObj::deepDisposeByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId ) {
		static const std::string S_ProcName( "deepDisposeByGelCacheIdx" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> list;
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> matchesFound = readCachedGelBuiltinByGelCacheIdx( TenantId,
				GelCacheId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGelBuiltinObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelBuiltinTableObj::deepDisposeByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId ) {
		static const std::string S_ProcName( "deepDisposeByChainIdx" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> list;
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> matchesFound = readCachedGelBuiltinByChainIdx( ChainInstTenantId,
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
		cfcore::ICFGenKbGelBuiltinObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDeepDisposeGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGelBuiltinTableObj::reallyDeepDisposeGelBuiltin( cfcore::ICFGenKbGelBuiltinObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGelBuiltin" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGelBuiltinObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGelBuiltinBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->reallyDetachFromIndexesGelBuiltin( dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDeepDisposeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( obj ) );
	}

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::createGelBuiltin( cfcore::ICFGenKbGelBuiltinEditObj* Obj ) {
		static const std::string S_ProcName( "createGelBuiltin" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelBuiltinObj* obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelBuiltinBuff* buff = dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->createGelBuiltin(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::readGelBuiltin( cfcore::CFGenKbGelInstructionPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelBuiltin" );
		cfcore::ICFGenKbGelBuiltinObj* obj = NULL;
		cfcore::ICFGenKbGelBuiltinObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGelBuiltinBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->readDerivedByPIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredGelCacheId(),
			pkey->getRequiredGelInstId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
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

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::lockGelBuiltin( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_ProcName( "lockGelBuiltin" );
		cfcore::ICFGenKbGelBuiltinObj* locked = NULL;
		cfcore::CFGenKbGelBuiltinBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readAllGelBuiltin( bool forceRead ) {
		static const std::string S_ProcName( "readAllGelBuiltin" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelBuiltinObj* realized = NULL;
		if( forceRead || ( allGelBuiltin == NULL ) ) {
			std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* map = new std::map<cfcore::CFGenKbGelInstructionPKey,cfcore::ICFGenKbGelBuiltinObj*>();
			allGelBuiltin = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGelBuiltinBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGelBuiltinBuff* buff = NULL;
			cfcore::ICFGenKbGelBuiltinObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGelBuiltin->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGelBuiltin->size();
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
		auto valIter = allGelBuiltin->begin();
		size_t idx = 0;
		while( valIter != allGelBuiltin->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::readGelBuiltinByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId, bool forceRead )
	{
		static const std::string S_ProcName( "readGelBuiltinByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelBuiltinObj* obj = readGelBuiltin( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readGelBuiltinByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelBuiltinByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelBuiltinObj* realized = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGelInstructionByTenantIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readGelBuiltinByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelBuiltinByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* oldDict;
		if( indexByGelCacheIdx == NULL ) {
			indexByGelCacheIdx = new std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelBuiltinObj* realized = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelCacheIdx->erase( searchIndexByGelCacheIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelCacheIdx->insert( std::map< cfcore::CFGenKbGelInstructionByGelCacheIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readGelBuiltinByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGelBuiltinByChainIdx" );
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* dict;
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* oldDict;
		if( indexByChainIdx == NULL ) {
			indexByChainIdx = new std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>();
			cfcore::ICFGenKbGelInstructionObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGelInstructionBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
			cfcore::CFGenKbGelInstructionBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>(
					dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGelBuiltinObj* realized = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByChainIdx->erase( searchIndexByChainIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByChainIdx->insert( std::map< cfcore::CFGenKbGelInstructionByChainIdxKey,
				std::map< cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::readCachedGelBuiltin( cfcore::CFGenKbGelInstructionPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGelBuiltin" );
		cfcore::ICFGenKbGelBuiltinObj* obj = NULL;
		cfcore::ICFGenKbGelBuiltinObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::readCachedGelBuiltinByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		static const std::string S_ProcName( "readCachedGelBuiltinByPIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelBuiltinObj* obj = readCachedGelBuiltin( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readCachedGelBuiltinByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGelBuiltinByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
		cfcore::CFGenKbGelInstructionByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelBuiltinObj* obj;
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

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readCachedGelBuiltinByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		static const std::string S_ProcName( "readCachedGelBuiltinByGelCacheIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
		cfcore::CFGenKbGelInstructionByGelCacheIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredGelCacheId( GelCacheId );
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* dict;
		if( indexByGelCacheIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelCacheIdx = indexByGelCacheIdx->find( key );
		if( searchIndexByGelCacheIdx != indexByGelCacheIdx->end() ) {
			dict = searchIndexByGelCacheIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelBuiltinObj* obj;
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

	std::vector<cfcore::ICFGenKbGelBuiltinObj*> CFGenKbGelBuiltinTableObj::readCachedGelBuiltinByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		static const std::string S_ProcName( "readCachedGelBuiltinByChainIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
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
		std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* dict;
		if( indexByChainIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByChainIdx = indexByChainIdx->find( key );
		if( searchIndexByChainIdx != indexByChainIdx->end() ) {
			dict = searchIndexByChainIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGelBuiltinObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGelBuiltinObj* obj;
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

	cfcore::ICFGenKbGelBuiltinObj* CFGenKbGelBuiltinTableObj::updateGelBuiltin( cfcore::ICFGenKbGelBuiltinEditObj* Obj ) {
		static const std::string S_ProcName( "updateGelBuiltin" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGelBuiltinObj* obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGelBuiltinBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->updateGelBuiltin( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGelBuiltinBuff*>( Obj->getGelBuiltinBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( dynamic_cast<cfcore::CFGenKbGelBuiltinTableObj*>( schema->getGelBuiltinTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGelBuiltinObj*>( obj->realize() );
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

	void CFGenKbGelBuiltinTableObj::deleteGelBuiltin( cfcore::ICFGenKbGelBuiltinEditObj* Obj ) {
		cfcore::ICFGenKbGelBuiltinObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->deleteGelBuiltin( schema->getAuthorization(),
			obj->getGelBuiltinBuff() );
		deepDisposeByPIdx( obj->getRequiredTenantId(),
			obj->getRequiredGelCacheId(),
			obj->getRequiredGelInstId() );
	}

	void CFGenKbGelBuiltinTableObj::deleteGelBuiltinByPIdx( const int64_t TenantId,
			const int64_t GelCacheId,
			const int64_t GelInstId )
	{
		cfcore::CFGenKbGelInstructionPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredGelCacheId( GelCacheId );
		pkey.setRequiredGelInstId( GelInstId );
		cfcore::ICFGenKbGelBuiltinObj* obj = readGelBuiltin( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGelBuiltinEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGelBuiltinEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGelBuiltinTableObj::deleteGelBuiltinByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->deleteGelBuiltinByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGelBuiltinTableObj::deleteGelBuiltinByGelCacheIdx( const int64_t TenantId,
			const int64_t GelCacheId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->deleteGelBuiltinByGelCacheIdx( schema->getAuthorization(),
				TenantId,
				GelCacheId );
		deepDisposeByGelCacheIdx( TenantId,
			GelCacheId );
	}

	void CFGenKbGelBuiltinTableObj::deleteGelBuiltinByChainIdx( const int64_t* ChainInstTenantId,
			const int64_t* ChainInstGelCacheId,
			const int64_t* ChainInstGelInstId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelBuiltin()->deleteGelBuiltinByChainIdx( schema->getAuthorization(),
				ChainInstTenantId,
				ChainInstGelCacheId,
				ChainInstGelInstId );
		deepDisposeByChainIdx( ChainInstTenantId,
			ChainInstGelCacheId,
			ChainInstGelInstId );
	}

	void CFGenKbGelBuiltinTableObj::reallyDetachFromIndexesGelBuiltin( cfcore::ICFGenKbGelBuiltinObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGelBuiltin" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGelBuiltinObj* obj = Obj;
		cfcore::CFGenKbGelInstructionPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGelBuiltinObj* existingObj = searchMembers->second;
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapGelCacheIdx = searchGelCacheIdx->second;
					if( mapGelCacheIdx != NULL ) {
						auto removalProbe = mapGelCacheIdx->find( *pkey );
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
					std::map<cfcore::CFGenKbGelInstructionPKey, cfcore::ICFGenKbGelBuiltinObj*>* mapChainIdx = searchChainIdx->second;
					if( mapChainIdx != NULL ) {
						auto removalProbe = mapChainIdx->find( *pkey );
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
			dynamic_cast<cfcore::CFGenKbGelInstructionTableObj*>( schema->getGelInstructionTableObj() )->reallyDetachFromIndexesGelInstruction( Obj );
	}


}
