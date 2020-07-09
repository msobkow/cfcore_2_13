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

	const std::string CFGenKbRuleTypeTableObj::CLASS_NAME( "CFGenKbRuleTypeTableObj" );
	const std::string CFGenKbRuleTypeTableObj::TABLE_NAME( "RuleType" );
	const std::string CFGenKbRuleTypeTableObj::TABLE_DBNAME( "kbruletype" );

	CFGenKbRuleTypeTableObj::CFGenKbRuleTypeTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj*>();
		allRuleType = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
			cfcore::ICFGenKbRuleTypeObj*>();
	}

	CFGenKbRuleTypeTableObj::CFGenKbRuleTypeTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj*>();
		allRuleType = NULL;
		indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
			cfcore::ICFGenKbRuleTypeObj*>();
	}

	CFGenKbRuleTypeTableObj::~CFGenKbRuleTypeTableObj() {
		minimizeMemory();
		if( indexByNameIdx != NULL ) {
			delete indexByNameIdx;
			indexByNameIdx = NULL;
		}
		if( members != NULL ) {
			cfcore::ICFGenKbRuleTypeObj* curMember;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbRuleTypeTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbRuleTypeTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbRuleTypeTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbRuleTypeTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbRuleTypeTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbRuleTypeTableObj::minimizeMemory() {
		if( allRuleType != NULL ) {
			allRuleType->clear();
			delete allRuleType;
			allRuleType = NULL;
		}
		if( indexByNameIdx != NULL ) {
			indexByNameIdx->clear();
		}
		if( members != NULL ) {
			cfcore::ICFGenKbRuleTypeObj* cur = NULL;
			cfcore::ICFGenKbRuleTypeEditObj* edit = NULL;
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

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::newInstance() {
		cfcore::ICFGenKbRuleTypeObj* inst = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( new CFGenKbRuleTypeObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeTableObj::newEditInstance( cfcore::ICFGenKbRuleTypeObj* orig ) {
		cfcore::ICFGenKbRuleTypeEditObj* edit = dynamic_cast<cfcore::ICFGenKbRuleTypeEditObj*>( new CFGenKbRuleTypeEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::realizeRuleType( cfcore::ICFGenKbRuleTypeObj* Obj ) {
		static const std::string S_ProcName( "realizeRuleType" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbRuleTypeObj* obj = Obj;
		cfcore::ICFGenKbRuleTypeObj* existingObj = NULL;
		cfcore::CFGenKbRuleTypePKey* pkey = obj->getPKey();
		cfcore::ICFGenKbRuleTypeObj* keepObj = NULL;
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
				cfcore::CFGenKbRuleTypeByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				auto removalProbe = indexByNameIdx->find( keyNameIdx );
				if( removalProbe != indexByNameIdx->end() ) {
					indexByNameIdx->erase( removalProbe );
				}
			}

			keepObj->setBuff( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( Obj->getBuff()->clone() ) );
			// Attach new object to alternate and duplicate indexes -- PKey stays stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbRuleTypeObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbRuleTypeByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::ICFGenKbRuleTypeObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allRuleType != NULL ) {
				allRuleType->insert( std::map< cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			keepObj->setIsNew( false );
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByNameIdx != NULL ) {
				static const std::string S_ANameIdxObj( "aNameIdxObj" );
				cfcore::ICFGenKbRuleTypeObj* aNameIdxObj =
					dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( keepObj );
				if( aNameIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ANameIdxObj );
				}
				cfcore::CFGenKbRuleTypeByNameIdxKey keyNameIdx;
				keyNameIdx.setRequiredName( keepObj->getRequiredName() );
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::ICFGenKbRuleTypeObj* >::value_type( keyNameIdx, aNameIdxObj ) );
			}

			if( allRuleType != NULL ) {
				allRuleType->insert( std::map< cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
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

	void CFGenKbRuleTypeTableObj::deepDisposeByIdIdx( const int16_t Id ) {
		static const std::string S_ProcName( "deepDisposeByIdIdx" );
		std::vector<cfcore::ICFGenKbRuleTypeObj*> list;
		cfcore::ICFGenKbRuleTypeObj* existingObj = readCachedRuleTypeByIdIdx( Id );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbRuleTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->reallyDeepDisposeRuleType( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbRuleTypeTableObj::deepDisposeByNameIdx( const std::string& Name ) {
		static const std::string S_ProcName( "deepDisposeByNameIdx" );
		std::vector<cfcore::ICFGenKbRuleTypeObj*> list;
		cfcore::ICFGenKbRuleTypeObj* existingObj = readCachedRuleTypeByNameIdx( Name );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbRuleTypeObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->reallyDeepDisposeRuleType( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbRuleTypeTableObj::reallyDeepDisposeRuleType( cfcore::ICFGenKbRuleTypeObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeRuleType" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbRuleTypeObj* obj = Obj;
		
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->reallyDetachFromIndexesRuleType( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj ) );
		}

		if( obj->getEdit() != NULL ) {
			obj->endEdit();
		}
		delete obj;
		obj = NULL;
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::createRuleType( cfcore::ICFGenKbRuleTypeEditObj* Obj ) {
		static const std::string S_ProcName( "createRuleType" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbRuleTypeObj* obj = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbRuleTypeBuff* buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->createRuleType(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj->realize() );
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

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readRuleType( cfcore::CFGenKbRuleTypePKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRuleType" );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		cfcore::ICFGenKbRuleTypeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbRuleTypeBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->readDerivedByIdIdx( schema->getAuthorization(),
			pkey->getRequiredId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->newInstance();
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj->realize() );
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

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::lockRuleType( cfcore::CFGenKbRuleTypePKey* pkey ) {
		static const std::string S_ProcName( "lockRuleType" );
		cfcore::ICFGenKbRuleTypeObj* locked = NULL;
		cfcore::CFGenKbRuleTypeBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->newInstance();
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbRuleTypeObj*> CFGenKbRuleTypeTableObj::readAllRuleType( bool forceRead ) {
		static const std::string S_ProcName( "readAllRuleType" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbRuleTypeObj* realized = NULL;
		if( forceRead || ( allRuleType == NULL ) ) {
			std::map<cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj*>* map = new std::map<cfcore::CFGenKbRuleTypePKey,cfcore::ICFGenKbRuleTypeObj*>();
			allRuleType = map;
			std::TCFLibOwningVector<cfcore::CFGenKbRuleTypeBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbRuleTypeBuff* buff = NULL;
			cfcore::ICFGenKbRuleTypeObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = newInstance();
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allRuleType->insert( std::map< cfcore::CFGenKbRuleTypePKey, cfcore::ICFGenKbRuleTypeObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allRuleType->size();
		std::vector<cfcore::ICFGenKbRuleTypeObj*> arr;
		auto valIter = allRuleType->begin();
		size_t idx = 0;
		while( valIter != allRuleType->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readRuleTypeByIdIdx( const int16_t Id, bool forceRead )
	{
		static const std::string S_ProcName( "readRuleTypeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbRuleTypePKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbRuleTypeObj* obj = readRuleType( &pkey, forceRead );
		return( obj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readRuleTypeByNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_ProcName( "readRuleTypeByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
				cfcore::ICFGenKbRuleTypeObj*>();
		}
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		cfcore::ICFGenKbRuleTypeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByNameIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbRuleTypeBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->readDerivedByNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->newInstance();
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::ICFGenKbRuleTypeObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readRuleTypeByLookupNameIdx( const std::string& Name, bool forceRead )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readRuleTypeByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
				cfcore::ICFGenKbRuleTypeObj*>();
		}
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		cfcore::ICFGenKbRuleTypeObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByNameIdx = indexByNameIdx->find( key );
			if( searchIndexByNameIdx != indexByNameIdx->end() ) {
				obj = searchIndexByNameIdx->second;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbRuleTypeBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->readDerivedByLookupNameIdx( schema->getAuthorization(),
				Name );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->newInstance() );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByNameIdx->insert( std::map< cfcore::CFGenKbRuleTypeByNameIdxKey, cfcore::ICFGenKbRuleTypeObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readCachedRuleType( cfcore::CFGenKbRuleTypePKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readRuleType" );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		cfcore::ICFGenKbRuleTypeObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readCachedRuleTypeByIdIdx( const int16_t Id )
	{
		static const std::string S_ProcName( "readCachedRuleTypeByIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbRuleTypePKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbRuleTypeObj* obj = readCachedRuleType( &pkey );
		return( obj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readCachedRuleTypeByNameIdx( const std::string& Name )
	{
		static const std::string S_ProcName( "readCachedRuleTypeByNameIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
				cfcore::ICFGenKbRuleTypeObj*>();
		}
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::readCachedRuleTypeByLookupNameIdx( const std::string& Name )
	{
		static const std::string S_Realized( "realized" );
		static const std::string S_Obj( "obj" );
		static const std::string S_ProcName( "readCachedRuleTypeByLookupNameIdx" );
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
				cfcore::ICFGenKbRuleTypeObj*>();
		}
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		cfcore::ICFGenKbRuleTypeObj* realized = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			obj = searchIndexByNameIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeTableObj::updateRuleType( cfcore::ICFGenKbRuleTypeEditObj* Obj ) {
		static const std::string S_ProcName( "updateRuleType" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbRuleTypeObj* obj = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbRuleTypeBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->updateRuleType( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( Obj->getRuleTypeBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( dynamic_cast<cfcore::CFGenKbRuleTypeTableObj*>( schema->getRuleTypeTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( obj->realize() );
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

	void CFGenKbRuleTypeTableObj::deleteRuleType( cfcore::ICFGenKbRuleTypeEditObj* Obj ) {
		cfcore::ICFGenKbRuleTypeObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->deleteRuleType( schema->getAuthorization(),
			obj->getRuleTypeBuff() );
		deepDisposeByIdIdx( obj->getRequiredId() );
	}

	void CFGenKbRuleTypeTableObj::deleteRuleTypeByIdIdx( const int16_t Id )
	{
		cfcore::CFGenKbRuleTypePKey pkey;
		pkey.setRequiredId( Id );
		cfcore::ICFGenKbRuleTypeObj* obj = readRuleType( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbRuleTypeEditObj* editObj = dynamic_cast<cfcore::ICFGenKbRuleTypeEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbRuleTypeEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbRuleTypeTableObj::deleteRuleTypeByNameIdx( const std::string& Name )
	{
		if( indexByNameIdx == NULL ) {
			indexByNameIdx = new std::map< cfcore::CFGenKbRuleTypeByNameIdxKey,
				cfcore::ICFGenKbRuleTypeObj*>();
		}
		cfcore::CFGenKbRuleTypeByNameIdxKey key;
		key.setRequiredName( Name );
		cfcore::ICFGenKbRuleTypeObj* obj = NULL;
		auto searchIndexByNameIdx = indexByNameIdx->find( key );
		if( searchIndexByNameIdx != indexByNameIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->deleteRuleTypeByNameIdx( schema->getAuthorization(),
				Name );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->deleteRuleTypeByNameIdx( schema->getAuthorization(),
				Name );
		}
		deepDisposeByNameIdx( Name );
	}

	void CFGenKbRuleTypeTableObj::reallyDetachFromIndexesRuleType( cfcore::ICFGenKbRuleTypeObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesRuleType" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbRuleTypeObj* obj = Obj;
		cfcore::CFGenKbRuleTypePKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbRuleTypeObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByNameIdx != NULL ) {
				cfcore::CFGenKbRuleTypeByNameIdxKey keyNameIdx;
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
