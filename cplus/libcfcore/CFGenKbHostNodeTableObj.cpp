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

	const std::string CFGenKbHostNodeTableObj::CLASS_NAME( "CFGenKbHostNodeTableObj" );
	const std::string CFGenKbHostNodeTableObj::TABLE_NAME( "HostNode" );
	const std::string CFGenKbHostNodeTableObj::TABLE_DBNAME( "HostNode" );

	CFGenKbHostNodeTableObj::CFGenKbHostNodeTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>();
		allHostNode = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
			std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>*>();
		indexByUDescrIdx = new std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey,
			cfcore::ICFGenKbHostNodeObj*>();
		indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
			cfcore::ICFGenKbHostNodeObj*>();
	}

	CFGenKbHostNodeTableObj::CFGenKbHostNodeTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>();
		allHostNode = NULL;
		indexByClusterIdx = new std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
			std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>*>();
		indexByUDescrIdx = new std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey,
			cfcore::ICFGenKbHostNodeObj*>();
		indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
			cfcore::ICFGenKbHostNodeObj*>();
	}

	CFGenKbHostNodeTableObj::~CFGenKbHostNodeTableObj() {
		minimizeMemory();
		if( indexByClusterIdx != NULL ) {
			delete indexByClusterIdx;
			indexByClusterIdx = NULL;
		}
		if( indexByUDescrIdx != NULL ) {
			delete indexByUDescrIdx;
			indexByUDescrIdx = NULL;
		}
		if( indexByHostNameIdx != NULL ) {
			delete indexByHostNameIdx;
			indexByHostNameIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbHostNodeObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbHostNodeTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbHostNodeTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbHostNodeTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbHostNodeTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbHostNodeTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbHostNodeTableObj::minimizeMemory() {
		if( allHostNode != NULL ) {
			allHostNode->clear();
			delete allHostNode;
			allHostNode = NULL;
		}
		if( indexByClusterIdx != NULL ) {
			std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
				std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* >::iterator iterByClusterIdx = indexByClusterIdx->begin();
			std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
				std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* >::iterator endByClusterIdx = indexByClusterIdx->end();
			std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* curByClusterIdx = NULL;
			while( iterByClusterIdx != endByClusterIdx ) {
				curByClusterIdx = iterByClusterIdx->second;
				if( curByClusterIdx != NULL ) {
					curByClusterIdx->clear();
					delete curByClusterIdx;
					curByClusterIdx = NULL;
					iterByClusterIdx->second = NULL;
				}
				iterByClusterIdx ++;
			}
			indexByClusterIdx->clear();
		}
		if( indexByUDescrIdx != NULL ) {
			indexByUDescrIdx->clear();
		}
		if( indexByHostNameIdx != NULL ) {
			indexByHostNameIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbHostNodeObj* cur = NULL;
			cfcore::ICFGenKbHostNodeEditObj* edit = NULL;
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::newInstance() {
		cfcore::ICFGenKbHostNodeObj* inst = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( new CFGenKbHostNodeObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeTableObj::newEditInstance( cfcore::ICFGenKbHostNodeObj* orig ) {
		cfcore::ICFGenKbHostNodeEditObj* edit = dynamic_cast<cfcore::ICFGenKbHostNodeEditObj*>( new CFGenKbHostNodeEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::realizeHostNode( cfcore::ICFGenKbHostNodeObj* Obj ) {
		static const std::string S_ProcName( "realizeHostNode" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbHostNodeObj* obj = Obj;
		cfcore::ICFGenKbHostNodeObj* existingObj = NULL;
		cfcore::CFGenKbHostNodePKey* pkey = obj->getPKey();
		cfcore::ICFGenKbHostNodeObj* keepObj = NULL;
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
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbHostNodeByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(keepObj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByUDescrIdx != NULL ) {
				cfcore::CFGenKbHostNodeByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUDescrIdx.setRequiredDescription( keepObj->getRequiredDescription() );
				auto removalProbe = indexByUDescrIdx->find( keyUDescrIdx );
				if( removalProbe != indexByUDescrIdx->end() ) {
					indexByUDescrIdx->erase( removalProbe );
				}
			}

			if( indexByHostNameIdx != NULL ) {
				cfcore::CFGenKbHostNodeByHostNameIdxKey keyHostNameIdx;
				keyHostNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyHostNameIdx.setRequiredHostName( keepObj->getRequiredHostName() );
				auto removalProbe = indexByHostNameIdx->find( keyHostNameIdx );
				if( removalProbe != indexByHostNameIdx->end() ) {
					indexByHostNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbHostNodeObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbHostNodeByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUDescrIdx != NULL ) {
				static const std::string S_AUDescrIdxObj( "aUDescrIdxObj" );
				cfcore::ICFGenKbHostNodeObj* aUDescrIdxObj =
					dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( keepObj );
				if( aUDescrIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUDescrIdxObj );
				}
				cfcore::CFGenKbHostNodeByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUDescrIdx.setRequiredDescription( keepObj->getRequiredDescription() );
				indexByUDescrIdx->insert( std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey, cfcore::ICFGenKbHostNodeObj* >::value_type( keyUDescrIdx, aUDescrIdxObj ) );
			}

			if( indexByHostNameIdx != NULL ) {
				static const std::string S_AHostNameIdxObj( "aHostNameIdxObj" );
				cfcore::ICFGenKbHostNodeObj* aHostNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( keepObj );
				if( aHostNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AHostNameIdxObj );
				}
				cfcore::CFGenKbHostNodeByHostNameIdxKey keyHostNameIdx;
				keyHostNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyHostNameIdx.setRequiredHostName( keepObj->getRequiredHostName() );
				indexByHostNameIdx->insert( std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::ICFGenKbHostNodeObj* >::value_type( keyHostNameIdx, aHostNameIdxObj ) );
			}

			if( allHostNode != NULL ) {
				allHostNode->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByClusterIdx != NULL ) {
				static const std::string S_AClusterIdxObj( "aClusterIdxObj" );
				cfcore::ICFGenKbHostNodeObj* aClusterIdxObj =
					dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( keepObj );
				if( aClusterIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AClusterIdxObj );
				}
				cfcore::CFGenKbHostNodeByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				auto searchIndexByClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* mapClusterIdx = searchIndexByClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						mapClusterIdx->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(keepObj->getPKey()), aClusterIdxObj ) );
					}
				}
			}

			if( indexByUDescrIdx != NULL ) {
				static const std::string S_AUDescrIdxObj( "aUDescrIdxObj" );
				cfcore::ICFGenKbHostNodeObj* aUDescrIdxObj =
					dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( keepObj );
				if( aUDescrIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AUDescrIdxObj );
				}
				cfcore::CFGenKbHostNodeByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyUDescrIdx.setRequiredDescription( keepObj->getRequiredDescription() );
				indexByUDescrIdx->insert( std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey, cfcore::ICFGenKbHostNodeObj* >::value_type( keyUDescrIdx, aUDescrIdxObj ) );
			}

			if( indexByHostNameIdx != NULL ) {
				static const std::string S_AHostNameIdxObj( "aHostNameIdxObj" );
				cfcore::ICFGenKbHostNodeObj* aHostNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( keepObj );
				if( aHostNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AHostNameIdxObj );
				}
				cfcore::CFGenKbHostNodeByHostNameIdxKey keyHostNameIdx;
				keyHostNameIdx.setRequiredClusterId( keepObj->getRequiredClusterId() );
				keyHostNameIdx.setRequiredHostName( keepObj->getRequiredHostName() );
				indexByHostNameIdx->insert( std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::ICFGenKbHostNodeObj* >::value_type( keyHostNameIdx, aHostNameIdxObj ) );
			}

			if( allHostNode != NULL ) {
				allHostNode->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbHostNodeTableObj::deepDisposeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbHostNodeObj*> list;
		cfcore::ICFGenKbHostNodeObj* existingObj = readCachedHostNodeByIdIdx( ClusterId,
				HostNodeId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbHostNodeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->reallyDeepDisposeHostNode( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbHostNodeTableObj::deepDisposeByClusterIdx( const int64_t ClusterId ) {
		static const std::string S_ProcName( "deepDisposeByClusterIdx" );
		std::vector<cfcore::ICFGenKbHostNodeObj*> list;
		std::vector<cfcore::ICFGenKbHostNodeObj*> matchesFound = readCachedHostNodeByClusterIdx( ClusterId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbHostNodeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->reallyDeepDisposeHostNode( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbHostNodeTableObj::deepDisposeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description ) {
		static const std::string S_ProcName( "deepDisposeByUDescrIdx" );
		std::vector<cfcore::ICFGenKbHostNodeObj*> list;
		cfcore::ICFGenKbHostNodeObj* existingObj = readCachedHostNodeByUDescrIdx( ClusterId,
				Description );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbHostNodeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->reallyDeepDisposeHostNode( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbHostNodeTableObj::deepDisposeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName ) {
		static const std::string S_ProcName( "deepDisposeByHostNameIdx" );
		std::vector<cfcore::ICFGenKbHostNodeObj*> list;
		cfcore::ICFGenKbHostNodeObj* existingObj = readCachedHostNodeByHostNameIdx( ClusterId,
				HostName );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbHostNodeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->reallyDeepDisposeHostNode( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbHostNodeTableObj::reallyDeepDisposeHostNode( cfcore::ICFGenKbHostNodeObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeHostNode" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbHostNodeObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->reallyDetachFromIndexesHostNode( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::createHostNode( cfcore::ICFGenKbHostNodeEditObj* Obj ) {
		static const std::string S_ProcName( "createHostNode" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbHostNodeObj* obj = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbHostNodeBuff* buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->createHostNode(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readHostNode( cfcore::CFGenKbHostNodePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readHostNode" );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbHostNodeBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredClusterId(),
			pkey->getRequiredHostNodeId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::lockHostNode( cfcore::CFGenKbHostNodePKey* pkey ) {
		static const std::string S_ProcName( "lockHostNode" );
		cfcore::ICFGenKbHostNodeObj* locked = NULL;
		cfcore::CFGenKbHostNodeBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbHostNodeTableObj::readAllHostNode( bool forceRead ) {
		static const std::string S_ProcName( "readAllHostNode" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		if( forceRead || ( allHostNode == NULL ) ) {
			std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* map = new std::map<cfcore::CFGenKbHostNodePKey,cfcore::ICFGenKbHostNodeObj*>();
			allHostNode = map;
			std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbHostNodeBuff* buff = NULL;
			cfcore::ICFGenKbHostNodeObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allHostNode->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allHostNode->size();
		std::vector<cfcore::ICFGenKbHostNodeObj*> arr;
		auto valIter = allHostNode->begin();
		size_t idx = 0;
		while( valIter != allHostNode->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbHostNodeTableObj::pageAllHostNode(const int64_t* priorClusterId,
			const int64_t* priorHostNodeId )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "pageAllHostNode" );
		CFLIB_EXCEPTION_DECLINFO
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* map = NULL;
		cfcore::CFGenKbHostNodeBuff* buff = NULL;
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		std::vector<cfcore::ICFGenKbHostNodeObj*> arrayList;
		try {
			map = new std::map<cfcore::CFGenKbHostNodePKey,cfcore::ICFGenKbHostNodeObj*>();
			std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->pageAllBuff( schema->getAuthorization(),
				priorClusterId,
				priorHostNodeId );
			arrayList.reserve( buffList.size() );
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readHostNodeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId, bool forceRead )
	{
		static const std::string S_ProcName( "readHostNodeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbHostNodePKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredHostNodeId( HostNodeId );
		cfcore::ICFGenKbHostNodeObj* obj = readHostNode( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbHostNodeTableObj::readHostNodeByClusterIdx( const int64_t ClusterId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readHostNodeByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* dict;
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* oldDict;
		if( indexByClusterIdx == NULL ) {
			indexByClusterIdx = new std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
				std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>*>();
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			oldDict = searchIndexByClusterIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>();
			cfcore::ICFGenKbHostNodeObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByClusterIdx( schema->getAuthorization(),
				ClusterId );
			cfcore::CFGenKbHostNodeBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbHostNodeObj* realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByClusterIdx->erase( searchIndexByClusterIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByClusterIdx->insert( std::map< cfcore::CFGenKbHostNodeByClusterIdxKey,
				std::map< cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbHostNodeObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readHostNodeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description, bool forceRead )
	{
		static const std::string S_ProcName( "readHostNodeByUDescrIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUDescrIdx == NULL ) {
			indexByUDescrIdx = new std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredDescription( Description );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByUDescrIdx = indexByUDescrIdx->find( key );
			if( searchIndexByUDescrIdx != indexByUDescrIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByUDescrIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbHostNodeBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByUDescrIdx( schema->getAuthorization(),
				ClusterId,
				Description );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByUDescrIdx->insert( std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey, cfcore::ICFGenKbHostNodeObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readHostNodeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName, bool forceRead )
	{
		static const std::string S_ProcName( "readHostNodeByHostNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByHostNameIdx == NULL ) {
			indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByHostNameIdx = indexByHostNameIdx->find( key );
			if( searchIndexByHostNameIdx != indexByHostNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByHostNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbHostNodeBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByHostNameIdx( schema->getAuthorization(),
				ClusterId,
				HostName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByHostNameIdx->insert( std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::ICFGenKbHostNodeObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readHostNodeByLookupHostNameIdx( const int64_t ClusterId,
			const std::string& HostName, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readHostNodeByLookupHostNameIdx" );
		if( indexByHostNameIdx == NULL ) {
			indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByHostNameIdx = indexByHostNameIdx->find( key );
			if( searchIndexByHostNameIdx != indexByHostNameIdx->end() ) {
				obj = searchIndexByHostNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbHostNodeBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByLookupHostNameIdx( schema->getAuthorization(),
				ClusterId,
				HostName );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByHostNameIdx->insert( std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey, cfcore::ICFGenKbHostNodeObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readCachedHostNode( cfcore::CFGenKbHostNodePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readHostNode" );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readCachedHostNodeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId )
	{
		static const std::string S_ProcName( "readCachedHostNodeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbHostNodePKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredHostNodeId( HostNodeId );
		cfcore::ICFGenKbHostNodeObj* obj = readCachedHostNode( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbHostNodeTableObj::readCachedHostNodeByClusterIdx( const int64_t ClusterId )
	{
		static const std::string S_ProcName( "readCachedHostNodeByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbHostNodeObj*> arr;
		cfcore::CFGenKbHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* dict;
		if( indexByClusterIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByClusterIdx = indexByClusterIdx->find( key );
		if( searchIndexByClusterIdx != indexByClusterIdx->end() ) {
			dict = searchIndexByClusterIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbHostNodeObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbHostNodeObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readCachedHostNodeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description )
	{
		static const std::string S_ProcName( "readCachedHostNodeByUDescrIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByUDescrIdx == NULL ) {
			indexByUDescrIdx = new std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredDescription( Description );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		auto searchIndexByUDescrIdx = indexByUDescrIdx->find( key );
		if( searchIndexByUDescrIdx != indexByUDescrIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByUDescrIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readCachedHostNodeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName )
	{
		static const std::string S_ProcName( "readCachedHostNodeByHostNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByHostNameIdx == NULL ) {
			indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		auto searchIndexByHostNameIdx = indexByHostNameIdx->find( key );
		if( searchIndexByHostNameIdx != indexByHostNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByHostNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::readCachedHostNodeByLookupHostNameIdx( const int64_t ClusterId,
			const std::string& HostName )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedHostNodeByLookupHostNameIdx" );
		if( indexByHostNameIdx == NULL ) {
			indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		cfcore::ICFGenKbHostNodeObj* realized = NULL;
		auto searchIndexByHostNameIdx = indexByHostNameIdx->find( key );
		if( searchIndexByHostNameIdx != indexByHostNameIdx->end() ) {
			obj = searchIndexByHostNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbHostNodeTableObj::pageHostNodeByClusterIdx( const int64_t ClusterId,
			const int64_t* priorClusterId,
			const int64_t* priorHostNodeId )
	{
		static const std::string S_ProcName( "pageHostNodeByClusterIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbHostNodeByClusterIdxKey key;
		key.setRequiredClusterId( ClusterId );
		cfcore::ICFGenKbHostNodeObj* obj;
		std::TCFLibOwningVector<cfcore::CFGenKbHostNodeBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->pageBuffByClusterIdx( schema->getAuthorization(),
				ClusterId,
				priorClusterId,
				priorHostNodeId );
		std::vector<cfcore::ICFGenKbHostNodeObj*> retList;
		retList.reserve( buffList.size() );
		cfcore::CFGenKbHostNodeBuff* buff;
		cfcore::ICFGenKbHostNodeObj* realized;
		for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
			buff = buffList[ idx ];
			buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance();
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
			obj->setBuff( buff );
			realized = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeTableObj::updateHostNode( cfcore::ICFGenKbHostNodeEditObj* Obj ) {
		static const std::string S_ProcName( "updateHostNode" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbHostNodeObj* obj = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbHostNodeBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->updateHostNode( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( Obj->getHostNodeBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( dynamic_cast<cfcore::CFGenKbHostNodeTableObj*>( schema->getHostNodeTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( obj->realize() );
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

	void CFGenKbHostNodeTableObj::deleteHostNode( cfcore::ICFGenKbHostNodeEditObj* Obj ) {
		cfcore::ICFGenKbHostNodeObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->deleteHostNode( schema->getAuthorization(),
			obj->getHostNodeBuff() );
		deepDisposeByIdIdx( obj->getRequiredClusterId(),
			obj->getRequiredHostNodeId() );
	}

	void CFGenKbHostNodeTableObj::deleteHostNodeByIdIdx( const int64_t ClusterId,
			const int64_t HostNodeId )
	{
		cfcore::CFGenKbHostNodePKey pkey;
		pkey.setRequiredClusterId( ClusterId );
		pkey.setRequiredHostNodeId( HostNodeId );
		cfcore::ICFGenKbHostNodeObj* obj = readHostNode( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbHostNodeEditObj* editObj = dynamic_cast<cfcore::ICFGenKbHostNodeEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbHostNodeEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbHostNodeTableObj::deleteHostNodeByClusterIdx( const int64_t ClusterId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->deleteHostNodeByClusterIdx( schema->getAuthorization(),
				ClusterId );
		deepDisposeByClusterIdx( ClusterId );
	}

	void CFGenKbHostNodeTableObj::deleteHostNodeByUDescrIdx( const int64_t ClusterId,
			const std::string& Description )
	{
		if( indexByUDescrIdx == NULL ) {
			indexByUDescrIdx = new std::map< cfcore::CFGenKbHostNodeByUDescrIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByUDescrIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredDescription( Description );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		auto searchIndexByUDescrIdx = indexByUDescrIdx->find( key );
		if( searchIndexByUDescrIdx != indexByUDescrIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->deleteHostNodeByUDescrIdx( schema->getAuthorization(),
				ClusterId,
				Description );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->deleteHostNodeByUDescrIdx( schema->getAuthorization(),
				ClusterId,
				Description );
		}
		deepDisposeByUDescrIdx( ClusterId,
			Description );
	}

	void CFGenKbHostNodeTableObj::deleteHostNodeByHostNameIdx( const int64_t ClusterId,
			const std::string& HostName )
	{
		if( indexByHostNameIdx == NULL ) {
			indexByHostNameIdx = new std::map< cfcore::CFGenKbHostNodeByHostNameIdxKey,
				cfcore::ICFGenKbHostNodeObj*>();
		}
		cfcore::CFGenKbHostNodeByHostNameIdxKey key;
		key.setRequiredClusterId( ClusterId );
		key.setRequiredHostName( HostName );
		cfcore::ICFGenKbHostNodeObj* obj = NULL;
		auto searchIndexByHostNameIdx = indexByHostNameIdx->find( key );
		if( searchIndexByHostNameIdx != indexByHostNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->deleteHostNodeByHostNameIdx( schema->getAuthorization(),
				ClusterId,
				HostName );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->deleteHostNodeByHostNameIdx( schema->getAuthorization(),
				ClusterId,
				HostName );
		}
		deepDisposeByHostNameIdx( ClusterId,
			HostName );
	}

	void CFGenKbHostNodeTableObj::reallyDetachFromIndexesHostNode( cfcore::ICFGenKbHostNodeObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesHostNode" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbHostNodeObj* obj = Obj;
		cfcore::CFGenKbHostNodePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbHostNodeObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByClusterIdx != NULL ) {
				cfcore::CFGenKbHostNodeByClusterIdxKey keyClusterIdx;
				keyClusterIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				auto searchClusterIdx = indexByClusterIdx->find( keyClusterIdx );
				if( searchClusterIdx != indexByClusterIdx->end() ) {
					std::map<cfcore::CFGenKbHostNodePKey, cfcore::ICFGenKbHostNodeObj*>* mapClusterIdx = searchClusterIdx->second;
					if( mapClusterIdx != NULL ) {
						auto removalProbe = mapClusterIdx->find( *(obj->getPKey()) );
						if( removalProbe != mapClusterIdx->end() ) {
							mapClusterIdx->erase( removalProbe );
							if( mapClusterIdx->empty() ) {
								delete mapClusterIdx;
								mapClusterIdx = NULL;
								indexByClusterIdx->erase( searchClusterIdx );
							}
						}
					}
				}
			}

			if( indexByUDescrIdx != NULL ) {
				cfcore::CFGenKbHostNodeByUDescrIdxKey keyUDescrIdx;
				keyUDescrIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyUDescrIdx.setRequiredDescription( obj->getRequiredDescription() );
				auto removalProbe = indexByUDescrIdx->find( keyUDescrIdx );
				if( removalProbe != indexByUDescrIdx->end() ) {
					indexByUDescrIdx->erase( removalProbe );
				}
			}

			if( indexByHostNameIdx != NULL ) {
				cfcore::CFGenKbHostNodeByHostNameIdxKey keyHostNameIdx;
				keyHostNameIdx.setRequiredClusterId( obj->getRequiredClusterId() );
				keyHostNameIdx.setRequiredHostName( obj->getRequiredHostName() );
				auto removalProbe = indexByHostNameIdx->find( keyHostNameIdx );
				if( removalProbe != indexByHostNameIdx->end() ) {
					indexByHostNameIdx->erase( removalProbe );
				}
			}

			members->erase( searchMembers );
		}
	}


}
