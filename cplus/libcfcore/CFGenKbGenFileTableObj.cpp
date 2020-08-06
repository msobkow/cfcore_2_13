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

	const std::string CFGenKbGenFileTableObj::CLASS_NAME( "CFGenKbGenFileTableObj" );
	const std::string CFGenKbGenFileTableObj::TABLE_NAME( "GenFile" );
	const std::string CFGenKbGenFileTableObj::TABLE_DBNAME( "kbgenfile" );

	CFGenKbGenFileTableObj::CFGenKbGenFileTableObj() {
		schema = NULL;
		members = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
		allGenFile = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenFileObj*>();
		indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByBodyIdx = new std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXSrcBundle = new std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXModName = new std::map< cfcore::CFGenKbGenFileByXModNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXBasePkg = new std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXSubPkg = new std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXExpClsName = new std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXExpKeyName = new std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXExpFileName = new std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
	}

	CFGenKbGenFileTableObj::CFGenKbGenFileTableObj( cfcore::ICFGenKbSchemaObj* argSchema ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( argSchema );
		members = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
		allGenFile = NULL;
		indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
			cfcore::ICFGenKbGenFileObj*>();
		indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByBodyIdx = new std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXSrcBundle = new std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXModName = new std::map< cfcore::CFGenKbGenFileByXModNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXBasePkg = new std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXSubPkg = new std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXExpClsName = new std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXExpKeyName = new std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		indexByXExpFileName = new std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
	}

	CFGenKbGenFileTableObj::~CFGenKbGenFileTableObj() {
		minimizeMemory();
		if( indexByTenantIdx != NULL ) {
			delete indexByTenantIdx;
			indexByTenantIdx = NULL;
		}
		if( indexByCartIdx != NULL ) {
			delete indexByCartIdx;
			indexByCartIdx = NULL;
		}
		if( indexByRuleTypeIdx != NULL ) {
			delete indexByRuleTypeIdx;
			indexByRuleTypeIdx = NULL;
		}
		if( indexByToolSetIdx != NULL ) {
			delete indexByToolSetIdx;
			indexByToolSetIdx = NULL;
		}
		if( indexByScopeIdx != NULL ) {
			delete indexByScopeIdx;
			indexByScopeIdx = NULL;
		}
		if( indexByGenDefIdx != NULL ) {
			delete indexByGenDefIdx;
			indexByGenDefIdx = NULL;
		}
		if( indexByAltIdx != NULL ) {
			delete indexByAltIdx;
			indexByAltIdx = NULL;
		}
		if( indexByGelExecIdx != NULL ) {
			delete indexByGelExecIdx;
			indexByGelExecIdx = NULL;
		}
		if( indexByProbeIdx != NULL ) {
			delete indexByProbeIdx;
			indexByProbeIdx = NULL;
		}
		if( indexByBodyIdx != NULL ) {
			delete indexByBodyIdx;
			indexByBodyIdx = NULL;
		}
		if( indexByXSrcBundle != NULL ) {
			delete indexByXSrcBundle;
			indexByXSrcBundle = NULL;
		}
		if( indexByXModName != NULL ) {
			delete indexByXModName;
			indexByXModName = NULL;
		}
		if( indexByXBasePkg != NULL ) {
			delete indexByXBasePkg;
			indexByXBasePkg = NULL;
		}
		if( indexByXSubPkg != NULL ) {
			delete indexByXSubPkg;
			indexByXSubPkg = NULL;
		}
		if( indexByXExpClsName != NULL ) {
			delete indexByXExpClsName;
			indexByXExpClsName = NULL;
		}
		if( indexByXExpKeyName != NULL ) {
			delete indexByXExpKeyName;
			indexByXExpKeyName = NULL;
		}
		if( indexByXExpFileName != NULL ) {
			delete indexByXExpFileName;
			indexByXExpFileName = NULL;
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

	cfcore::ICFGenKbSchemaObj* CFGenKbGenFileTableObj::getSchema() {
		return( schema );
	}

	void CFGenKbGenFileTableObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( value );
	}

	const std::string CFGenKbGenFileTableObj::getTableName() {
		return( TABLE_NAME );
	}

	const std::string CFGenKbGenFileTableObj::getTableDbName() {
		return( TABLE_DBNAME );
	}
	const classcode_t* CFGenKbGenFileTableObj::getObjQualifyingClassCode() {
		return( NULL );
	}


	void CFGenKbGenFileTableObj::minimizeMemory() {
		if( allGenFile != NULL ) {
			allGenFile->clear();
			delete allGenFile;
			allGenFile = NULL;
		}
		if( indexByTenantIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByTenantIdx = indexByTenantIdx->begin();
			std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByTenantIdx = indexByTenantIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByTenantIdx = NULL;
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
		if( indexByCartIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByCartIdx = indexByCartIdx->begin();
			std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByCartIdx = indexByCartIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByCartIdx = NULL;
			while( iterByCartIdx != endByCartIdx ) {
				curByCartIdx = iterByCartIdx->second;
				if( curByCartIdx != NULL ) {
					curByCartIdx->clear();
					delete curByCartIdx;
					curByCartIdx = NULL;
					iterByCartIdx->second = NULL;
				}
				iterByCartIdx ++;
			}
			indexByCartIdx->clear();
		}
		if( indexByRuleTypeIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByRuleTypeIdx = indexByRuleTypeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByRuleTypeIdx = indexByRuleTypeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByRuleTypeIdx = NULL;
			while( iterByRuleTypeIdx != endByRuleTypeIdx ) {
				curByRuleTypeIdx = iterByRuleTypeIdx->second;
				if( curByRuleTypeIdx != NULL ) {
					curByRuleTypeIdx->clear();
					delete curByRuleTypeIdx;
					curByRuleTypeIdx = NULL;
					iterByRuleTypeIdx->second = NULL;
				}
				iterByRuleTypeIdx ++;
			}
			indexByRuleTypeIdx->clear();
		}
		if( indexByToolSetIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByToolSetIdx = indexByToolSetIdx->begin();
			std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByToolSetIdx = indexByToolSetIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByToolSetIdx = NULL;
			while( iterByToolSetIdx != endByToolSetIdx ) {
				curByToolSetIdx = iterByToolSetIdx->second;
				if( curByToolSetIdx != NULL ) {
					curByToolSetIdx->clear();
					delete curByToolSetIdx;
					curByToolSetIdx = NULL;
					iterByToolSetIdx->second = NULL;
				}
				iterByToolSetIdx ++;
			}
			indexByToolSetIdx->clear();
		}
		if( indexByScopeIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByScopeIdx = indexByScopeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByScopeIdx = indexByScopeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByScopeIdx = NULL;
			while( iterByScopeIdx != endByScopeIdx ) {
				curByScopeIdx = iterByScopeIdx->second;
				if( curByScopeIdx != NULL ) {
					curByScopeIdx->clear();
					delete curByScopeIdx;
					curByScopeIdx = NULL;
					iterByScopeIdx->second = NULL;
				}
				iterByScopeIdx ++;
			}
			indexByScopeIdx->clear();
		}
		if( indexByGenDefIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByGenDefIdx = indexByGenDefIdx->begin();
			std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByGenDefIdx = indexByGenDefIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByGenDefIdx = NULL;
			while( iterByGenDefIdx != endByGenDefIdx ) {
				curByGenDefIdx = iterByGenDefIdx->second;
				if( curByGenDefIdx != NULL ) {
					curByGenDefIdx->clear();
					delete curByGenDefIdx;
					curByGenDefIdx = NULL;
					iterByGenDefIdx->second = NULL;
				}
				iterByGenDefIdx ++;
			}
			indexByGenDefIdx->clear();
		}
		if( indexByAltIdx != NULL ) {
			indexByAltIdx->clear();
		}
		if( indexByGelExecIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByGelExecIdx = indexByGelExecIdx->begin();
			std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByGelExecIdx = indexByGelExecIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByGelExecIdx = NULL;
			while( iterByGelExecIdx != endByGelExecIdx ) {
				curByGelExecIdx = iterByGelExecIdx->second;
				if( curByGelExecIdx != NULL ) {
					curByGelExecIdx->clear();
					delete curByGelExecIdx;
					curByGelExecIdx = NULL;
					iterByGelExecIdx->second = NULL;
				}
				iterByGelExecIdx ++;
			}
			indexByGelExecIdx->clear();
		}
		if( indexByProbeIdx != NULL ) {
			std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByProbeIdx = indexByProbeIdx->begin();
			std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByProbeIdx = indexByProbeIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByProbeIdx = NULL;
			while( iterByProbeIdx != endByProbeIdx ) {
				curByProbeIdx = iterByProbeIdx->second;
				if( curByProbeIdx != NULL ) {
					curByProbeIdx->clear();
					delete curByProbeIdx;
					curByProbeIdx = NULL;
					iterByProbeIdx->second = NULL;
				}
				iterByProbeIdx ++;
			}
			indexByProbeIdx->clear();
		}
		if( indexByBodyIdx != NULL ) {
			std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByBodyIdx = indexByBodyIdx->begin();
			std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByBodyIdx = indexByBodyIdx->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByBodyIdx = NULL;
			while( iterByBodyIdx != endByBodyIdx ) {
				curByBodyIdx = iterByBodyIdx->second;
				if( curByBodyIdx != NULL ) {
					curByBodyIdx->clear();
					delete curByBodyIdx;
					curByBodyIdx = NULL;
					iterByBodyIdx->second = NULL;
				}
				iterByBodyIdx ++;
			}
			indexByBodyIdx->clear();
		}
		if( indexByXSrcBundle != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXSrcBundle = indexByXSrcBundle->begin();
			std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXSrcBundle = indexByXSrcBundle->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXSrcBundle = NULL;
			while( iterByXSrcBundle != endByXSrcBundle ) {
				curByXSrcBundle = iterByXSrcBundle->second;
				if( curByXSrcBundle != NULL ) {
					curByXSrcBundle->clear();
					delete curByXSrcBundle;
					curByXSrcBundle = NULL;
					iterByXSrcBundle->second = NULL;
				}
				iterByXSrcBundle ++;
			}
			indexByXSrcBundle->clear();
		}
		if( indexByXModName != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXModNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXModName = indexByXModName->begin();
			std::map< cfcore::CFGenKbGenFileByXModNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXModName = indexByXModName->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXModName = NULL;
			while( iterByXModName != endByXModName ) {
				curByXModName = iterByXModName->second;
				if( curByXModName != NULL ) {
					curByXModName->clear();
					delete curByXModName;
					curByXModName = NULL;
					iterByXModName->second = NULL;
				}
				iterByXModName ++;
			}
			indexByXModName->clear();
		}
		if( indexByXBasePkg != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXBasePkg = indexByXBasePkg->begin();
			std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXBasePkg = indexByXBasePkg->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXBasePkg = NULL;
			while( iterByXBasePkg != endByXBasePkg ) {
				curByXBasePkg = iterByXBasePkg->second;
				if( curByXBasePkg != NULL ) {
					curByXBasePkg->clear();
					delete curByXBasePkg;
					curByXBasePkg = NULL;
					iterByXBasePkg->second = NULL;
				}
				iterByXBasePkg ++;
			}
			indexByXBasePkg->clear();
		}
		if( indexByXSubPkg != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXSubPkg = indexByXSubPkg->begin();
			std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXSubPkg = indexByXSubPkg->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXSubPkg = NULL;
			while( iterByXSubPkg != endByXSubPkg ) {
				curByXSubPkg = iterByXSubPkg->second;
				if( curByXSubPkg != NULL ) {
					curByXSubPkg->clear();
					delete curByXSubPkg;
					curByXSubPkg = NULL;
					iterByXSubPkg->second = NULL;
				}
				iterByXSubPkg ++;
			}
			indexByXSubPkg->clear();
		}
		if( indexByXExpClsName != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXExpClsName = indexByXExpClsName->begin();
			std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXExpClsName = indexByXExpClsName->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXExpClsName = NULL;
			while( iterByXExpClsName != endByXExpClsName ) {
				curByXExpClsName = iterByXExpClsName->second;
				if( curByXExpClsName != NULL ) {
					curByXExpClsName->clear();
					delete curByXExpClsName;
					curByXExpClsName = NULL;
					iterByXExpClsName->second = NULL;
				}
				iterByXExpClsName ++;
			}
			indexByXExpClsName->clear();
		}
		if( indexByXExpKeyName != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXExpKeyName = indexByXExpKeyName->begin();
			std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXExpKeyName = indexByXExpKeyName->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXExpKeyName = NULL;
			while( iterByXExpKeyName != endByXExpKeyName ) {
				curByXExpKeyName = iterByXExpKeyName->second;
				if( curByXExpKeyName != NULL ) {
					curByXExpKeyName->clear();
					delete curByXExpKeyName;
					curByXExpKeyName = NULL;
					iterByXExpKeyName->second = NULL;
				}
				iterByXExpKeyName ++;
			}
			indexByXExpKeyName->clear();
		}
		if( indexByXExpFileName != NULL ) {
			std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator iterByXExpFileName = indexByXExpFileName->begin();
			std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* >::iterator endByXExpFileName = indexByXExpFileName->end();
			std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* curByXExpFileName = NULL;
			while( iterByXExpFileName != endByXExpFileName ) {
				curByXExpFileName = iterByXExpFileName->second;
				if( curByXExpFileName != NULL ) {
					curByXExpFileName->clear();
					delete curByXExpFileName;
					curByXExpFileName = NULL;
					iterByXExpFileName->second = NULL;
				}
				iterByXExpFileName ++;
			}
			indexByXExpFileName->clear();
		}
		if( members != NULL ) {
			members->clear();
		}
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::newInstance() {
		cfcore::ICFGenKbGenFileObj* inst = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( new CFGenKbGenFileObj( schema ) );
		return( inst );
	}

	cfcore::ICFGenKbGenFileEditObj* CFGenKbGenFileTableObj::newEditInstance( cfcore::ICFGenKbGenFileObj* orig ) {
		cfcore::ICFGenKbGenFileEditObj* edit = dynamic_cast<cfcore::ICFGenKbGenFileEditObj*>( new CFGenKbGenFileEditObj( orig ));
		return( edit );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::realizeGenFile( cfcore::ICFGenKbGenFileObj* Obj ) {
		static const std::string S_ProcName( "realizeGenFile" );
		static const std::string S_ExistingObj( "existingObj" );
		static const std::string S_KeepObj( "keepObj" );
		static const std::string S_Obj( "Obj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGenFileObj* obj = Obj;
		cfcore::ICFGenKbGenFileObj* existingObj = NULL;
		cfcore::CFGenKbGenItemPKey* pkey = obj->getPKey();
		cfcore::ICFGenKbGenFileObj* keepObj = NULL;
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
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapTenantIdx = searchTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						auto removalProbe = mapTenantIdx->find( *pkey );
						if( removalProbe != mapTenantIdx->end() ) {
							mapTenantIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( keepObj->getRequiredCartridgeId() );
				auto searchCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapCartIdx = searchCartIdx->second;
					if( mapCartIdx != NULL ) {
						auto removalProbe = mapCartIdx->find( *pkey );
						if( removalProbe != mapCartIdx->end() ) {
							mapCartIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( keepObj->getRequiredRuleTypeId() );
				auto searchRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapRuleTypeIdx = searchRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						auto removalProbe = mapRuleTypeIdx->find( *pkey );
						if( removalProbe != mapRuleTypeIdx->end() ) {
							mapRuleTypeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				auto searchToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapToolSetIdx = searchToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						auto removalProbe = mapToolSetIdx->find( *pkey );
						if( removalProbe != mapToolSetIdx->end() ) {
							mapToolSetIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				auto searchScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *pkey );
						if( removalProbe != mapScopeIdx->end() ) {
							mapScopeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto searchGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGenDefIdx = searchGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						auto removalProbe = mapGenDefIdx->find( *pkey );
						if( removalProbe != mapGenDefIdx->end() ) {
							mapGenDefIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( keepObj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto removalProbe = indexByAltIdx->find( keyAltIdx );
				if( removalProbe != indexByAltIdx->end() ) {
					indexByAltIdx->erase( removalProbe );
				}
			}

			if( indexByGelExecIdx != NULL ) {
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( keepObj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( keepObj->getOptionalGelExecutableTenantIdValue() );
				}
				if( keepObj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( keepObj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( keepObj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( keepObj->getOptionalGelExecutableIdValue() );
				}
				auto searchGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGelExecIdx = searchGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						auto removalProbe = mapGelExecIdx->find( *pkey );
						if( removalProbe != mapGelExecIdx->end() ) {
							mapGelExecIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( keepObj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( keepObj->getOptionalProbeTenantIdValue() );
				}
				if( keepObj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( keepObj->getOptionalProbeCartridgeIdValue() );
				}
				if( keepObj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( keepObj->getOptionalProbeGenItemIdValue() );
				}
				auto searchProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapProbeIdx = searchProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						auto removalProbe = mapProbeIdx->find( *pkey );
						if( removalProbe != mapProbeIdx->end() ) {
							mapProbeIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByBodyIdx != NULL ) {
				cfcore::CFGenKbGenRuleByBodyIdxKey keyBodyIdx;
				if( keepObj->isOptionalBodyTenantIdNull() ) {
					keyBodyIdx.setOptionalBodyTenantIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyTenantIdValue( keepObj->getOptionalBodyTenantIdValue() );
				}
				if( keepObj->isOptionalBodyGelCacheIdNull() ) {
					keyBodyIdx.setOptionalBodyGelCacheIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelCacheIdValue( keepObj->getOptionalBodyGelCacheIdValue() );
				}
				if( keepObj->isOptionalBodyGelIdNull() ) {
					keyBodyIdx.setOptionalBodyGelIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelIdValue( keepObj->getOptionalBodyGelIdValue() );
				}
				auto searchBodyIdx = indexByBodyIdx->find( keyBodyIdx );
				if( searchBodyIdx != indexByBodyIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapBodyIdx = searchBodyIdx->second;
					if( mapBodyIdx != NULL ) {
						auto removalProbe = mapBodyIdx->find( *pkey );
						if( removalProbe != mapBodyIdx->end() ) {
							mapBodyIdx->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXSrcBundle != NULL ) {
				cfcore::CFGenKbGenFileByXSrcBundleKey keyXSrcBundle;
				if( keepObj->isOptionalSourceBundleTenantIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleTenantIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleTenantIdValue( keepObj->getOptionalSourceBundleTenantIdValue() );
				}
				if( keepObj->isOptionalSourceBundleGelCacheIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( keepObj->getOptionalSourceBundleGelCacheIdValue() );
				}
				if( keepObj->isOptionalSourceBundleGelIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelIdValue( keepObj->getOptionalSourceBundleGelIdValue() );
				}
				auto searchXSrcBundle = indexByXSrcBundle->find( keyXSrcBundle );
				if( searchXSrcBundle != indexByXSrcBundle->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSrcBundle = searchXSrcBundle->second;
					if( mapXSrcBundle != NULL ) {
						auto removalProbe = mapXSrcBundle->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXSrcBundle->end() ) {
							mapXSrcBundle->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXModName != NULL ) {
				cfcore::CFGenKbGenFileByXModNameKey keyXModName;
				if( keepObj->isOptionalModuleNameTenantIdNull() ) {
					keyXModName.setOptionalModuleNameTenantIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameTenantIdValue( keepObj->getOptionalModuleNameTenantIdValue() );
				}
				if( keepObj->isOptionalModuleNameGelCacheIdNull() ) {
					keyXModName.setOptionalModuleNameGelCacheIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelCacheIdValue( keepObj->getOptionalModuleNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalModuleNameGelIdNull() ) {
					keyXModName.setOptionalModuleNameGelIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelIdValue( keepObj->getOptionalModuleNameGelIdValue() );
				}
				auto searchXModName = indexByXModName->find( keyXModName );
				if( searchXModName != indexByXModName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXModName = searchXModName->second;
					if( mapXModName != NULL ) {
						auto removalProbe = mapXModName->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXModName->end() ) {
							mapXModName->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXBasePkg != NULL ) {
				cfcore::CFGenKbGenFileByXBasePkgKey keyXBasePkg;
				if( keepObj->isOptionalBasePackageTenantIdNull() ) {
					keyXBasePkg.setOptionalBasePackageTenantIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageTenantIdValue( keepObj->getOptionalBasePackageTenantIdValue() );
				}
				if( keepObj->isOptionalBasePackageGelCacheIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelCacheIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelCacheIdValue( keepObj->getOptionalBasePackageGelCacheIdValue() );
				}
				if( keepObj->isOptionalBasePackageGelIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelIdValue( keepObj->getOptionalBasePackageGelIdValue() );
				}
				auto searchXBasePkg = indexByXBasePkg->find( keyXBasePkg );
				if( searchXBasePkg != indexByXBasePkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXBasePkg = searchXBasePkg->second;
					if( mapXBasePkg != NULL ) {
						auto removalProbe = mapXBasePkg->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXBasePkg->end() ) {
							mapXBasePkg->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXSubPkg != NULL ) {
				cfcore::CFGenKbGenFileByXSubPkgKey keyXSubPkg;
				if( keepObj->isOptionalSubPackageTenantIdNull() ) {
					keyXSubPkg.setOptionalSubPackageTenantIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageTenantIdValue( keepObj->getOptionalSubPackageTenantIdValue() );
				}
				if( keepObj->isOptionalSubPackageGelCacheIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelCacheIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelCacheIdValue( keepObj->getOptionalSubPackageGelCacheIdValue() );
				}
				if( keepObj->isOptionalSubPackageGelIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelIdValue( keepObj->getOptionalSubPackageGelIdValue() );
				}
				auto searchXSubPkg = indexByXSubPkg->find( keyXSubPkg );
				if( searchXSubPkg != indexByXSubPkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSubPkg = searchXSubPkg->second;
					if( mapXSubPkg != NULL ) {
						auto removalProbe = mapXSubPkg->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXSubPkg->end() ) {
							mapXSubPkg->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXExpClsName != NULL ) {
				cfcore::CFGenKbGenFileByXExpClsNameKey keyXExpClsName;
				if( keepObj->isOptionalExpansionClassNameTenantIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdValue( keepObj->getOptionalExpansionClassNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionClassNameGelCacheIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( keepObj->getOptionalExpansionClassNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionClassNameGelIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelIdValue( keepObj->getOptionalExpansionClassNameGelIdValue() );
				}
				auto searchXExpClsName = indexByXExpClsName->find( keyXExpClsName );
				if( searchXExpClsName != indexByXExpClsName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpClsName = searchXExpClsName->second;
					if( mapXExpClsName != NULL ) {
						auto removalProbe = mapXExpClsName->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXExpClsName->end() ) {
							mapXExpClsName->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXExpKeyName != NULL ) {
				cfcore::CFGenKbGenFileByXExpKeyNameKey keyXExpKeyName;
				if( keepObj->isOptionalExpansionKeyNameTenantIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( keepObj->getOptionalExpansionKeyNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionKeyNameGelCacheIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( keepObj->getOptionalExpansionKeyNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionKeyNameGelIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( keepObj->getOptionalExpansionKeyNameGelIdValue() );
				}
				auto searchXExpKeyName = indexByXExpKeyName->find( keyXExpKeyName );
				if( searchXExpKeyName != indexByXExpKeyName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpKeyName = searchXExpKeyName->second;
					if( mapXExpKeyName != NULL ) {
						auto removalProbe = mapXExpKeyName->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXExpKeyName->end() ) {
							mapXExpKeyName->erase( removalProbe );
						}
					}
				}
			}

			if( indexByXExpFileName != NULL ) {
				cfcore::CFGenKbGenFileByXExpFileNameKey keyXExpFileName;
				if( keepObj->isOptionalExpansionFileNameTenantIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdValue( keepObj->getOptionalExpansionFileNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionFileNameGelCacheIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( keepObj->getOptionalExpansionFileNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionFileNameGelIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelIdValue( keepObj->getOptionalExpansionFileNameGelIdValue() );
				}
				auto searchXExpFileName = indexByXExpFileName->find( keyXExpFileName );
				if( searchXExpFileName != indexByXExpFileName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpFileName = searchXExpFileName->second;
					if( mapXExpFileName != NULL ) {
						auto removalProbe = mapXExpFileName->find( *(keepObj->getPKey()) );
						if( removalProbe != mapXExpFileName->end() ) {
							mapXExpFileName->erase( removalProbe );
						}
					}
				}
			}

			// Retain the current keepObj instead of realizing the new instance.
			keepObj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->realizeGenRule( Obj ) );
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
				cfcore::ICFGenKbGenFileObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				static const std::string S_ACartIdxObj( "aCartIdxObj" );
				cfcore::ICFGenKbGenFileObj* aCartIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aCartIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACartIdxObj );
				}
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( keepObj->getRequiredCartridgeId() );
				auto searchIndexByCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchIndexByCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapCartIdx = searchIndexByCartIdx->second;
					if( mapCartIdx != NULL ) {
						mapCartIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aCartIdxObj ) );
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				static const std::string S_ARuleTypeIdxObj( "aRuleTypeIdxObj" );
				cfcore::ICFGenKbGenFileObj* aRuleTypeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aRuleTypeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARuleTypeIdxObj );
				}
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( keepObj->getRequiredRuleTypeId() );
				auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapRuleTypeIdx = searchIndexByRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						mapRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aRuleTypeIdxObj ) );
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				static const std::string S_AToolSetIdxObj( "aToolSetIdxObj" );
				cfcore::ICFGenKbGenFileObj* aToolSetIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aToolSetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToolSetIdxObj );
				}
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				auto searchIndexByToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapToolSetIdx = searchIndexByToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						mapToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aToolSetIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfcore::ICFGenKbGenFileObj* aScopeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aScopeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AScopeIdxObj );
				}
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				auto searchIndexByScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				static const std::string S_AGenDefIdxObj( "aGenDefIdxObj" );
				cfcore::ICFGenKbGenFileObj* aGenDefIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aGenDefIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGenDefIdxObj );
				}
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto searchIndexByGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGenDefIdx = searchIndexByGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						mapGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aGenDefIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGenFileObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aAltIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIdxObj );
				}
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( keepObj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenFileObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( indexByGelExecIdx != NULL ) {
				static const std::string S_AGelExecIdxObj( "aGelExecIdxObj" );
				cfcore::ICFGenKbGenFileObj* aGelExecIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aGelExecIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelExecIdxObj );
				}
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( keepObj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( keepObj->getOptionalGelExecutableTenantIdValue() );
				}
				if( keepObj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( keepObj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( keepObj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( keepObj->getOptionalGelExecutableIdValue() );
				}
				auto searchIndexByGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGelExecIdx = searchIndexByGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						mapGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aGelExecIdxObj ) );
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				static const std::string S_AProbeIdxObj( "aProbeIdxObj" );
				cfcore::ICFGenKbGenFileObj* aProbeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aProbeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AProbeIdxObj );
				}
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( keepObj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( keepObj->getOptionalProbeTenantIdValue() );
				}
				if( keepObj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( keepObj->getOptionalProbeCartridgeIdValue() );
				}
				if( keepObj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( keepObj->getOptionalProbeGenItemIdValue() );
				}
				auto searchIndexByProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapProbeIdx = searchIndexByProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						mapProbeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aProbeIdxObj ) );
					}
				}
			}

			if( indexByBodyIdx != NULL ) {
				static const std::string S_ABodyIdxObj( "aBodyIdxObj" );
				cfcore::ICFGenKbGenFileObj* aBodyIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aBodyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABodyIdxObj );
				}
				cfcore::CFGenKbGenRuleByBodyIdxKey keyBodyIdx;
				if( keepObj->isOptionalBodyTenantIdNull() ) {
					keyBodyIdx.setOptionalBodyTenantIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyTenantIdValue( keepObj->getOptionalBodyTenantIdValue() );
				}
				if( keepObj->isOptionalBodyGelCacheIdNull() ) {
					keyBodyIdx.setOptionalBodyGelCacheIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelCacheIdValue( keepObj->getOptionalBodyGelCacheIdValue() );
				}
				if( keepObj->isOptionalBodyGelIdNull() ) {
					keyBodyIdx.setOptionalBodyGelIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelIdValue( keepObj->getOptionalBodyGelIdValue() );
				}
				auto searchIndexByBodyIdx = indexByBodyIdx->find( keyBodyIdx );
				if( searchIndexByBodyIdx != indexByBodyIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapBodyIdx = searchIndexByBodyIdx->second;
					if( mapBodyIdx != NULL ) {
						mapBodyIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aBodyIdxObj ) );
					}
				}
			}

			if( indexByXSrcBundle != NULL ) {
				static const std::string S_AXSrcBundleObj( "aXSrcBundleObj" );
				cfcore::ICFGenKbGenFileObj* aXSrcBundleObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXSrcBundleObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXSrcBundleObj );
				}
				cfcore::CFGenKbGenFileByXSrcBundleKey keyXSrcBundle;
				if( keepObj->isOptionalSourceBundleTenantIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleTenantIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleTenantIdValue( keepObj->getOptionalSourceBundleTenantIdValue() );
				}
				if( keepObj->isOptionalSourceBundleGelCacheIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( keepObj->getOptionalSourceBundleGelCacheIdValue() );
				}
				if( keepObj->isOptionalSourceBundleGelIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelIdValue( keepObj->getOptionalSourceBundleGelIdValue() );
				}
				auto searchIndexByXSrcBundle = indexByXSrcBundle->find( keyXSrcBundle );
				if( searchIndexByXSrcBundle != indexByXSrcBundle->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSrcBundle = searchIndexByXSrcBundle->second;
					if( mapXSrcBundle != NULL ) {
						mapXSrcBundle->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXSrcBundleObj ) );
					}
				}
			}

			if( indexByXModName != NULL ) {
				static const std::string S_AXModNameObj( "aXModNameObj" );
				cfcore::ICFGenKbGenFileObj* aXModNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXModNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXModNameObj );
				}
				cfcore::CFGenKbGenFileByXModNameKey keyXModName;
				if( keepObj->isOptionalModuleNameTenantIdNull() ) {
					keyXModName.setOptionalModuleNameTenantIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameTenantIdValue( keepObj->getOptionalModuleNameTenantIdValue() );
				}
				if( keepObj->isOptionalModuleNameGelCacheIdNull() ) {
					keyXModName.setOptionalModuleNameGelCacheIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelCacheIdValue( keepObj->getOptionalModuleNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalModuleNameGelIdNull() ) {
					keyXModName.setOptionalModuleNameGelIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelIdValue( keepObj->getOptionalModuleNameGelIdValue() );
				}
				auto searchIndexByXModName = indexByXModName->find( keyXModName );
				if( searchIndexByXModName != indexByXModName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXModName = searchIndexByXModName->second;
					if( mapXModName != NULL ) {
						mapXModName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXModNameObj ) );
					}
				}
			}

			if( indexByXBasePkg != NULL ) {
				static const std::string S_AXBasePkgObj( "aXBasePkgObj" );
				cfcore::ICFGenKbGenFileObj* aXBasePkgObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXBasePkgObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXBasePkgObj );
				}
				cfcore::CFGenKbGenFileByXBasePkgKey keyXBasePkg;
				if( keepObj->isOptionalBasePackageTenantIdNull() ) {
					keyXBasePkg.setOptionalBasePackageTenantIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageTenantIdValue( keepObj->getOptionalBasePackageTenantIdValue() );
				}
				if( keepObj->isOptionalBasePackageGelCacheIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelCacheIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelCacheIdValue( keepObj->getOptionalBasePackageGelCacheIdValue() );
				}
				if( keepObj->isOptionalBasePackageGelIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelIdValue( keepObj->getOptionalBasePackageGelIdValue() );
				}
				auto searchIndexByXBasePkg = indexByXBasePkg->find( keyXBasePkg );
				if( searchIndexByXBasePkg != indexByXBasePkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXBasePkg = searchIndexByXBasePkg->second;
					if( mapXBasePkg != NULL ) {
						mapXBasePkg->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXBasePkgObj ) );
					}
				}
			}

			if( indexByXSubPkg != NULL ) {
				static const std::string S_AXSubPkgObj( "aXSubPkgObj" );
				cfcore::ICFGenKbGenFileObj* aXSubPkgObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXSubPkgObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXSubPkgObj );
				}
				cfcore::CFGenKbGenFileByXSubPkgKey keyXSubPkg;
				if( keepObj->isOptionalSubPackageTenantIdNull() ) {
					keyXSubPkg.setOptionalSubPackageTenantIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageTenantIdValue( keepObj->getOptionalSubPackageTenantIdValue() );
				}
				if( keepObj->isOptionalSubPackageGelCacheIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelCacheIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelCacheIdValue( keepObj->getOptionalSubPackageGelCacheIdValue() );
				}
				if( keepObj->isOptionalSubPackageGelIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelIdValue( keepObj->getOptionalSubPackageGelIdValue() );
				}
				auto searchIndexByXSubPkg = indexByXSubPkg->find( keyXSubPkg );
				if( searchIndexByXSubPkg != indexByXSubPkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSubPkg = searchIndexByXSubPkg->second;
					if( mapXSubPkg != NULL ) {
						mapXSubPkg->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXSubPkgObj ) );
					}
				}
			}

			if( indexByXExpClsName != NULL ) {
				static const std::string S_AXExpClsNameObj( "aXExpClsNameObj" );
				cfcore::ICFGenKbGenFileObj* aXExpClsNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXExpClsNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXExpClsNameObj );
				}
				cfcore::CFGenKbGenFileByXExpClsNameKey keyXExpClsName;
				if( keepObj->isOptionalExpansionClassNameTenantIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdValue( keepObj->getOptionalExpansionClassNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionClassNameGelCacheIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( keepObj->getOptionalExpansionClassNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionClassNameGelIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelIdValue( keepObj->getOptionalExpansionClassNameGelIdValue() );
				}
				auto searchIndexByXExpClsName = indexByXExpClsName->find( keyXExpClsName );
				if( searchIndexByXExpClsName != indexByXExpClsName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpClsName = searchIndexByXExpClsName->second;
					if( mapXExpClsName != NULL ) {
						mapXExpClsName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXExpClsNameObj ) );
					}
				}
			}

			if( indexByXExpKeyName != NULL ) {
				static const std::string S_AXExpKeyNameObj( "aXExpKeyNameObj" );
				cfcore::ICFGenKbGenFileObj* aXExpKeyNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXExpKeyNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXExpKeyNameObj );
				}
				cfcore::CFGenKbGenFileByXExpKeyNameKey keyXExpKeyName;
				if( keepObj->isOptionalExpansionKeyNameTenantIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( keepObj->getOptionalExpansionKeyNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionKeyNameGelCacheIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( keepObj->getOptionalExpansionKeyNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionKeyNameGelIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( keepObj->getOptionalExpansionKeyNameGelIdValue() );
				}
				auto searchIndexByXExpKeyName = indexByXExpKeyName->find( keyXExpKeyName );
				if( searchIndexByXExpKeyName != indexByXExpKeyName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpKeyName = searchIndexByXExpKeyName->second;
					if( mapXExpKeyName != NULL ) {
						mapXExpKeyName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXExpKeyNameObj ) );
					}
				}
			}

			if( indexByXExpFileName != NULL ) {
				static const std::string S_AXExpFileNameObj( "aXExpFileNameObj" );
				cfcore::ICFGenKbGenFileObj* aXExpFileNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXExpFileNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXExpFileNameObj );
				}
				cfcore::CFGenKbGenFileByXExpFileNameKey keyXExpFileName;
				if( keepObj->isOptionalExpansionFileNameTenantIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdValue( keepObj->getOptionalExpansionFileNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionFileNameGelCacheIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( keepObj->getOptionalExpansionFileNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionFileNameGelIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelIdValue( keepObj->getOptionalExpansionFileNameGelIdValue() );
				}
				auto searchIndexByXExpFileName = indexByXExpFileName->find( keyXExpFileName );
				if( searchIndexByXExpFileName != indexByXExpFileName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpFileName = searchIndexByXExpFileName->second;
					if( mapXExpFileName != NULL ) {
						mapXExpFileName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXExpFileNameObj ) );
					}
				}
			}

			if( allGenFile != NULL ) {
				allGenFile->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		else {
			keepObj = obj;
			// Retain the new obj because there is no current keepObj from the instance cache
			keepObj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->realizeGenRule( obj ) );
			if( keepObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_KeepObj );
			}
			pkey = keepObj->getPKey();
			// Attach new object to PKey, all, alternate, and duplicate indexes
			members->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			// Attach new object to alternate and duplicate indexes -- PKey stay stable

			if( indexByTenantIdx != NULL ) {
				static const std::string S_ATenantIdxObj( "aTenantIdxObj" );
				cfcore::ICFGenKbGenFileObj* aTenantIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aTenantIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ATenantIdxObj );
				}
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				auto searchIndexByTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapTenantIdx = searchIndexByTenantIdx->second;
					if( mapTenantIdx != NULL ) {
						mapTenantIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aTenantIdxObj ) );
					}
				}
			}

			if( indexByCartIdx != NULL ) {
				static const std::string S_ACartIdxObj( "aCartIdxObj" );
				cfcore::ICFGenKbGenFileObj* aCartIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aCartIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ACartIdxObj );
				}
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( keepObj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( keepObj->getRequiredCartridgeId() );
				auto searchIndexByCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchIndexByCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapCartIdx = searchIndexByCartIdx->second;
					if( mapCartIdx != NULL ) {
						mapCartIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aCartIdxObj ) );
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				static const std::string S_ARuleTypeIdxObj( "aRuleTypeIdxObj" );
				cfcore::ICFGenKbGenFileObj* aRuleTypeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aRuleTypeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ARuleTypeIdxObj );
				}
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( keepObj->getRequiredRuleTypeId() );
				auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapRuleTypeIdx = searchIndexByRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						mapRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aRuleTypeIdxObj ) );
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				static const std::string S_AToolSetIdxObj( "aToolSetIdxObj" );
				cfcore::ICFGenKbGenFileObj* aToolSetIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aToolSetIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AToolSetIdxObj );
				}
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				auto searchIndexByToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapToolSetIdx = searchIndexByToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						mapToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aToolSetIdxObj ) );
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				static const std::string S_AScopeIdxObj( "aScopeIdxObj" );
				cfcore::ICFGenKbGenFileObj* aScopeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aScopeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AScopeIdxObj );
				}
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				auto searchIndexByScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapScopeIdx = searchIndexByScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						mapScopeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aScopeIdxObj ) );
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				static const std::string S_AGenDefIdxObj( "aGenDefIdxObj" );
				cfcore::ICFGenKbGenFileObj* aGenDefIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aGenDefIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGenDefIdxObj );
				}
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				auto searchIndexByGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGenDefIdx = searchIndexByGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						mapGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aGenDefIdxObj ) );
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				static const std::string S_AAltIdxObj( "aAltIdxObj" );
				cfcore::ICFGenKbGenFileObj* aAltIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aAltIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AAltIdxObj );
				}
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( keepObj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( keepObj->getRequiredToolSetId() );
				if( keepObj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( keepObj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( keepObj->getRequiredGenDefId() );
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenFileObj* >::value_type( keyAltIdx, aAltIdxObj ) );
			}

			if( indexByGelExecIdx != NULL ) {
				static const std::string S_AGelExecIdxObj( "aGelExecIdxObj" );
				cfcore::ICFGenKbGenFileObj* aGelExecIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aGelExecIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AGelExecIdxObj );
				}
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( keepObj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( keepObj->getOptionalGelExecutableTenantIdValue() );
				}
				if( keepObj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( keepObj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( keepObj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( keepObj->getOptionalGelExecutableIdValue() );
				}
				auto searchIndexByGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGelExecIdx = searchIndexByGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						mapGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aGelExecIdxObj ) );
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				static const std::string S_AProbeIdxObj( "aProbeIdxObj" );
				cfcore::ICFGenKbGenFileObj* aProbeIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aProbeIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AProbeIdxObj );
				}
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( keepObj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( keepObj->getOptionalProbeTenantIdValue() );
				}
				if( keepObj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( keepObj->getOptionalProbeCartridgeIdValue() );
				}
				if( keepObj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( keepObj->getOptionalProbeGenItemIdValue() );
				}
				auto searchIndexByProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapProbeIdx = searchIndexByProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						mapProbeIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aProbeIdxObj ) );
					}
				}
			}

			if( indexByBodyIdx != NULL ) {
				static const std::string S_ABodyIdxObj( "aBodyIdxObj" );
				cfcore::ICFGenKbGenFileObj* aBodyIdxObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aBodyIdxObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_ABodyIdxObj );
				}
				cfcore::CFGenKbGenRuleByBodyIdxKey keyBodyIdx;
				if( keepObj->isOptionalBodyTenantIdNull() ) {
					keyBodyIdx.setOptionalBodyTenantIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyTenantIdValue( keepObj->getOptionalBodyTenantIdValue() );
				}
				if( keepObj->isOptionalBodyGelCacheIdNull() ) {
					keyBodyIdx.setOptionalBodyGelCacheIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelCacheIdValue( keepObj->getOptionalBodyGelCacheIdValue() );
				}
				if( keepObj->isOptionalBodyGelIdNull() ) {
					keyBodyIdx.setOptionalBodyGelIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelIdValue( keepObj->getOptionalBodyGelIdValue() );
				}
				auto searchIndexByBodyIdx = indexByBodyIdx->find( keyBodyIdx );
				if( searchIndexByBodyIdx != indexByBodyIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapBodyIdx = searchIndexByBodyIdx->second;
					if( mapBodyIdx != NULL ) {
						mapBodyIdx->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aBodyIdxObj ) );
					}
				}
			}

			if( indexByXSrcBundle != NULL ) {
				static const std::string S_AXSrcBundleObj( "aXSrcBundleObj" );
				cfcore::ICFGenKbGenFileObj* aXSrcBundleObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXSrcBundleObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXSrcBundleObj );
				}
				cfcore::CFGenKbGenFileByXSrcBundleKey keyXSrcBundle;
				if( keepObj->isOptionalSourceBundleTenantIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleTenantIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleTenantIdValue( keepObj->getOptionalSourceBundleTenantIdValue() );
				}
				if( keepObj->isOptionalSourceBundleGelCacheIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( keepObj->getOptionalSourceBundleGelCacheIdValue() );
				}
				if( keepObj->isOptionalSourceBundleGelIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelIdValue( keepObj->getOptionalSourceBundleGelIdValue() );
				}
				auto searchIndexByXSrcBundle = indexByXSrcBundle->find( keyXSrcBundle );
				if( searchIndexByXSrcBundle != indexByXSrcBundle->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSrcBundle = searchIndexByXSrcBundle->second;
					if( mapXSrcBundle != NULL ) {
						mapXSrcBundle->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXSrcBundleObj ) );
					}
				}
			}

			if( indexByXModName != NULL ) {
				static const std::string S_AXModNameObj( "aXModNameObj" );
				cfcore::ICFGenKbGenFileObj* aXModNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXModNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXModNameObj );
				}
				cfcore::CFGenKbGenFileByXModNameKey keyXModName;
				if( keepObj->isOptionalModuleNameTenantIdNull() ) {
					keyXModName.setOptionalModuleNameTenantIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameTenantIdValue( keepObj->getOptionalModuleNameTenantIdValue() );
				}
				if( keepObj->isOptionalModuleNameGelCacheIdNull() ) {
					keyXModName.setOptionalModuleNameGelCacheIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelCacheIdValue( keepObj->getOptionalModuleNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalModuleNameGelIdNull() ) {
					keyXModName.setOptionalModuleNameGelIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelIdValue( keepObj->getOptionalModuleNameGelIdValue() );
				}
				auto searchIndexByXModName = indexByXModName->find( keyXModName );
				if( searchIndexByXModName != indexByXModName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXModName = searchIndexByXModName->second;
					if( mapXModName != NULL ) {
						mapXModName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXModNameObj ) );
					}
				}
			}

			if( indexByXBasePkg != NULL ) {
				static const std::string S_AXBasePkgObj( "aXBasePkgObj" );
				cfcore::ICFGenKbGenFileObj* aXBasePkgObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXBasePkgObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXBasePkgObj );
				}
				cfcore::CFGenKbGenFileByXBasePkgKey keyXBasePkg;
				if( keepObj->isOptionalBasePackageTenantIdNull() ) {
					keyXBasePkg.setOptionalBasePackageTenantIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageTenantIdValue( keepObj->getOptionalBasePackageTenantIdValue() );
				}
				if( keepObj->isOptionalBasePackageGelCacheIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelCacheIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelCacheIdValue( keepObj->getOptionalBasePackageGelCacheIdValue() );
				}
				if( keepObj->isOptionalBasePackageGelIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelIdValue( keepObj->getOptionalBasePackageGelIdValue() );
				}
				auto searchIndexByXBasePkg = indexByXBasePkg->find( keyXBasePkg );
				if( searchIndexByXBasePkg != indexByXBasePkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXBasePkg = searchIndexByXBasePkg->second;
					if( mapXBasePkg != NULL ) {
						mapXBasePkg->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXBasePkgObj ) );
					}
				}
			}

			if( indexByXSubPkg != NULL ) {
				static const std::string S_AXSubPkgObj( "aXSubPkgObj" );
				cfcore::ICFGenKbGenFileObj* aXSubPkgObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXSubPkgObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXSubPkgObj );
				}
				cfcore::CFGenKbGenFileByXSubPkgKey keyXSubPkg;
				if( keepObj->isOptionalSubPackageTenantIdNull() ) {
					keyXSubPkg.setOptionalSubPackageTenantIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageTenantIdValue( keepObj->getOptionalSubPackageTenantIdValue() );
				}
				if( keepObj->isOptionalSubPackageGelCacheIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelCacheIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelCacheIdValue( keepObj->getOptionalSubPackageGelCacheIdValue() );
				}
				if( keepObj->isOptionalSubPackageGelIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelIdValue( keepObj->getOptionalSubPackageGelIdValue() );
				}
				auto searchIndexByXSubPkg = indexByXSubPkg->find( keyXSubPkg );
				if( searchIndexByXSubPkg != indexByXSubPkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSubPkg = searchIndexByXSubPkg->second;
					if( mapXSubPkg != NULL ) {
						mapXSubPkg->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXSubPkgObj ) );
					}
				}
			}

			if( indexByXExpClsName != NULL ) {
				static const std::string S_AXExpClsNameObj( "aXExpClsNameObj" );
				cfcore::ICFGenKbGenFileObj* aXExpClsNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXExpClsNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXExpClsNameObj );
				}
				cfcore::CFGenKbGenFileByXExpClsNameKey keyXExpClsName;
				if( keepObj->isOptionalExpansionClassNameTenantIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdValue( keepObj->getOptionalExpansionClassNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionClassNameGelCacheIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( keepObj->getOptionalExpansionClassNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionClassNameGelIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelIdValue( keepObj->getOptionalExpansionClassNameGelIdValue() );
				}
				auto searchIndexByXExpClsName = indexByXExpClsName->find( keyXExpClsName );
				if( searchIndexByXExpClsName != indexByXExpClsName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpClsName = searchIndexByXExpClsName->second;
					if( mapXExpClsName != NULL ) {
						mapXExpClsName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXExpClsNameObj ) );
					}
				}
			}

			if( indexByXExpKeyName != NULL ) {
				static const std::string S_AXExpKeyNameObj( "aXExpKeyNameObj" );
				cfcore::ICFGenKbGenFileObj* aXExpKeyNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXExpKeyNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXExpKeyNameObj );
				}
				cfcore::CFGenKbGenFileByXExpKeyNameKey keyXExpKeyName;
				if( keepObj->isOptionalExpansionKeyNameTenantIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( keepObj->getOptionalExpansionKeyNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionKeyNameGelCacheIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( keepObj->getOptionalExpansionKeyNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionKeyNameGelIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( keepObj->getOptionalExpansionKeyNameGelIdValue() );
				}
				auto searchIndexByXExpKeyName = indexByXExpKeyName->find( keyXExpKeyName );
				if( searchIndexByXExpKeyName != indexByXExpKeyName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpKeyName = searchIndexByXExpKeyName->second;
					if( mapXExpKeyName != NULL ) {
						mapXExpKeyName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXExpKeyNameObj ) );
					}
				}
			}

			if( indexByXExpFileName != NULL ) {
				static const std::string S_AXExpFileNameObj( "aXExpFileNameObj" );
				cfcore::ICFGenKbGenFileObj* aXExpFileNameObj =
					dynamic_cast<cfcore::ICFGenKbGenFileObj*>( keepObj );
				if( aXExpFileNameObj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_AXExpFileNameObj );
				}
				cfcore::CFGenKbGenFileByXExpFileNameKey keyXExpFileName;
				if( keepObj->isOptionalExpansionFileNameTenantIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdValue( keepObj->getOptionalExpansionFileNameTenantIdValue() );
				}
				if( keepObj->isOptionalExpansionFileNameGelCacheIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( keepObj->getOptionalExpansionFileNameGelCacheIdValue() );
				}
				if( keepObj->isOptionalExpansionFileNameGelIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelIdValue( keepObj->getOptionalExpansionFileNameGelIdValue() );
				}
				auto searchIndexByXExpFileName = indexByXExpFileName->find( keyXExpFileName );
				if( searchIndexByXExpFileName != indexByXExpFileName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpFileName = searchIndexByXExpFileName->second;
					if( mapXExpFileName != NULL ) {
						mapXExpFileName->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), aXExpFileNameObj ) );
					}
				}
			}

			if( allGenFile != NULL ) {
				allGenFile->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(keepObj->getPKey()), keepObj ) );
			}
		}
		return( keepObj );
	}

	void CFGenKbGenFileTableObj::deepDisposeByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId ) {
		static const std::string S_ProcName( "deepDisposeByItemIdIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		cfcore::ICFGenKbGenFileObj* existingObj = readCachedGenFileByItemIdIdx( TenantId,
				CartridgeId,
				ItemId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByTenantIdx( const int64_t TenantId ) {
		static const std::string S_ProcName( "deepDisposeByTenantIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByTenantIdx( TenantId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId ) {
		static const std::string S_ProcName( "deepDisposeByCartIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByCartIdx( TenantId,
				CartridgeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByRuleTypeIdx( const int16_t RuleTypeId ) {
		static const std::string S_ProcName( "deepDisposeByRuleTypeIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByRuleTypeIdx( RuleTypeId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByToolSetIdx( const int16_t ToolSetId ) {
		static const std::string S_ProcName( "deepDisposeByToolSetIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByToolSetIdx( ToolSetId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByScopeIdx( const int16_t* ScopeDefId ) {
		static const std::string S_ProcName( "deepDisposeByScopeIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByScopeIdx( ScopeDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByGenDefIdx( const int16_t GenDefId ) {
		static const std::string S_ProcName( "deepDisposeByGenDefIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByGenDefIdx( GenDefId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId ) {
		static const std::string S_ProcName( "deepDisposeByAltIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		cfcore::ICFGenKbGenFileObj* existingObj = readCachedGenFileByAltIdx( Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		if( existingObj != NULL ) {
			list.push_back( existingObj );
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId ) {
		static const std::string S_ProcName( "deepDisposeByGelExecIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByGelExecIdx( GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId ) {
		static const std::string S_ProcName( "deepDisposeByProbeIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByProbeIdx( ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::reallyDeepDisposeGenFile( cfcore::ICFGenKbGenFileObj* Obj ) {
		static const std::string S_ProcName( "reallyDeepDisposeGenFile" );

		if( Obj == NULL ) {
			return;
		}

		cfcore::ICFGenKbGenFileObj* obj = Obj;
		
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalSourceBundleTenantIdValue(),
			obj->getOptionalSourceBundleGelCacheIdValue(),
			obj->getOptionalSourceBundleGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalBasePackageTenantIdValue(),
			obj->getOptionalBasePackageGelCacheIdValue(),
			obj->getOptionalBasePackageGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalModuleNameTenantIdValue(),
			obj->getOptionalModuleNameGelCacheIdValue(),
			obj->getOptionalModuleNameGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalSubPackageTenantIdValue(),
			obj->getOptionalSubPackageGelCacheIdValue(),
			obj->getOptionalSubPackageGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalExpansionClassNameTenantIdValue(),
			obj->getOptionalExpansionClassNameGelCacheIdValue(),
			obj->getOptionalExpansionClassNameGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalExpansionKeyNameTenantIdValue(),
			obj->getOptionalExpansionKeyNameGelCacheIdValue(),
			obj->getOptionalExpansionKeyNameGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalExpansionFileNameTenantIdValue(),
			obj->getOptionalExpansionFileNameGelCacheIdValue(),
			obj->getOptionalExpansionFileNameGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalBodyTenantIdValue(),
			obj->getOptionalBodyGelCacheIdValue(),
			obj->getOptionalBodyGelIdValue() );
			dynamic_cast<cfcore::CFGenKbGelExecutableTableObj*>( schema->getGelExecutableTableObj() )->deepDisposeByPIdx( obj->getOptionalGelExecutableTenantIdValue(),
			obj->getOptionalGelExecutableGelCacheIdValue(),
			obj->getOptionalGelExecutableIdValue() );
		classcode_t classCode = obj->getClassCode();
		if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDetachFromIndexesGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj ) );
		}

		dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDeepDisposeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( obj ) );
	}

	void CFGenKbGenFileTableObj::deepDisposeByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId ) {
		static const std::string S_ProcName( "deepDisposeByBodyIdx" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByBodyIdx( BodyTenantId,
				BodyGelCacheId,
				BodyGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId ) {
		static const std::string S_ProcName( "deepDisposeByXSrcBundle" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXSrcBundle( SourceBundleTenantId,
				SourceBundleGelCacheId,
				SourceBundleGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId ) {
		static const std::string S_ProcName( "deepDisposeByXModName" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXModName( ModuleNameTenantId,
				ModuleNameGelCacheId,
				ModuleNameGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId ) {
		static const std::string S_ProcName( "deepDisposeByXBasePkg" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXBasePkg( BasePackageTenantId,
				BasePackageGelCacheId,
				BasePackageGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId ) {
		static const std::string S_ProcName( "deepDisposeByXSubPkg" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXSubPkg( SubPackageTenantId,
				SubPackageGelCacheId,
				SubPackageGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId ) {
		static const std::string S_ProcName( "deepDisposeByXExpClsName" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXExpClsName( ExpansionClassNameTenantId,
				ExpansionClassNameGelCacheId,
				ExpansionClassNameGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId ) {
		static const std::string S_ProcName( "deepDisposeByXExpKeyName" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXExpKeyName( ExpansionKeyNameTenantId,
				ExpansionKeyNameGelCacheId,
				ExpansionKeyNameGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	void CFGenKbGenFileTableObj::deepDisposeByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId ) {
		static const std::string S_ProcName( "deepDisposeByXExpFileName" );
		std::vector<cfcore::ICFGenKbGenFileObj*> list;
		std::vector<cfcore::ICFGenKbGenFileObj*> matchesFound = readCachedGenFileByXExpFileName( ExpansionFileNameTenantId,
				ExpansionFileNameGelCacheId,
				ExpansionFileNameGelId );
		auto iterMatches = matchesFound.begin();
		auto endMatches = matchesFound.end();
		while( iterMatches != endMatches ) {
			if( *iterMatches != NULL ) {
				list.push_back( *iterMatches );
			}
			iterMatches ++;
		}
		cfcore::ICFGenKbGenFileObj* cur = NULL;
		classcode_t classCode;
		auto listIter = list.begin();
		auto listEnd = list.end();
		while( listIter != listEnd ) {
			cur = *listIter;
			if( cur != NULL ) {
				classCode = cur->getClassCode();
				if( classCode == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
					dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->reallyDeepDisposeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( cur ) );
				}
			}
			listIter ++;
		}
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::createGenFile( cfcore::ICFGenKbGenFileEditObj* Obj ) {
		static const std::string S_ProcName( "createGenFile" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Cloneable( "cloneable" );
		static const std::string S_ClonedBuff( "clonedbuff" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenFileObj* obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGenFileBuff* buff = dynamic_cast<cfcore::CFGenKbGenFileBuff*>( Obj->getBuff()->clone() );
			// C++18 version of create returns a new buffer instance and takes over ownership of the passed-in buffer
			// MSS TODO WORKING The xmsg client will need to return the buffer instance created by processing
			// the response message, while xmsg rqst will have to delete the backing store instance
			// it receives after preparing the reply message so that memory doesn't leak on every request.
			cflib::ICFLibCloneableObj* cloneable = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->createGenFile(
				schema->getAuthorization(),
				buff );
			if( cloneable == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Cloneable );
			}
			Obj->endEdit();
			obj->setBuff( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( cloneable ) );
			obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
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

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::readGenFile( cfcore::CFGenKbGenItemPKey* pkey, bool forceRead ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGenFile" );
		cfcore::ICFGenKbGenFileObj* obj = NULL;
		cfcore::ICFGenKbGenFileObj* realized = NULL;
		if( ! forceRead ) {
			auto searchMembers = members->find( *pkey );
			if( searchMembers != members->end() ) {
				// obj could be NULL if cache misses is enabled
				obj = searchMembers->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGenFileBuff* readBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByItemIdIdx( schema->getAuthorization(),
			pkey->getRequiredTenantId(),
			pkey->getRequiredCartridgeId(),
			pkey->getRequiredItemId() );
			if( readBuff != NULL ) {
			obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( readBuff->getClassCode() ) );
				obj->setBuff( readBuff );
				realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
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

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::lockGenFile( cfcore::CFGenKbGenItemPKey* pkey ) {
		static const std::string S_ProcName( "lockGenFile" );
		cfcore::ICFGenKbGenFileObj* locked = NULL;
		cfcore::CFGenKbGenFileBuff* lockBuff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->lockDerived( schema->getAuthorization(), pkey );
		if( lockBuff != NULL ) {
			locked = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( lockBuff->getClassCode() ) );
			locked->setBuff( lockBuff );
			locked = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( locked->realize() );
		}
		else {
			return( NULL );
		}
		return( locked );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readAllGenFile( bool forceRead ) {
		static const std::string S_ProcName( "readAllGenFile" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Realized( "realized" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenFileObj* realized = NULL;
		if( forceRead || ( allGenFile == NULL ) ) {
			std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* map = new std::map<cfcore::CFGenKbGenItemPKey,cfcore::ICFGenKbGenFileObj*>();
			allGenFile = map;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readAllDerived( schema->getAuthorization() );
			cfcore::CFGenKbGenFileBuff* buff = NULL;
			cfcore::ICFGenKbGenFileObj* obj = NULL;
			try {
				for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
					buff = buffList[ idx ];
					buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
					obj->setBuff( buff );
					realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
					if( realized == NULL ) {
						throw cflib::CFLibNullArgumentException( CLASS_NAME,
							S_ProcName,
							0,
							S_Realized );
					}
					allGenFile->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
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
		size_t len = allGenFile->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		auto valIter = allGenFile->begin();
		size_t idx = 0;
		while( valIter != allGenFile->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::readGenFileByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId, bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByItemIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenFileObj* obj = readGenFile( &pkey, forceRead );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByTenantIdx( const int64_t TenantId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByTenantIdx == NULL ) {
			indexByTenantIdx = new std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
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
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByTenantIdx( schema->getAuthorization(),
				TenantId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByTenantIdx->erase( searchIndexByTenantIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByTenantIdx->insert( std::map< cfcore::CFGenKbGenItemByTenantIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByCartIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByCartIdx == NULL ) {
			indexByCartIdx = new std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByCartIdx = indexByCartIdx->find( key );
		if( searchIndexByCartIdx != indexByCartIdx->end() ) {
			oldDict = searchIndexByCartIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByCartIdx( schema->getAuthorization(),
				TenantId,
				CartridgeId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByCartIdx->erase( searchIndexByCartIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByCartIdx->insert( std::map< cfcore::CFGenKbGenItemByCartIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByRuleTypeIdx( const int16_t RuleTypeId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByRuleTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByRuleTypeIdx == NULL ) {
			indexByRuleTypeIdx = new std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( key );
		if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
			oldDict = searchIndexByRuleTypeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByRuleTypeIdx( schema->getAuthorization(),
				RuleTypeId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByRuleTypeIdx->erase( searchIndexByRuleTypeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByRuleTypeIdx->insert( std::map< cfcore::CFGenKbGenItemByRuleTypeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByToolSetIdx( const int16_t ToolSetId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByToolSetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByToolSetIdx == NULL ) {
			indexByToolSetIdx = new std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByToolSetIdx = indexByToolSetIdx->find( key );
		if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
			oldDict = searchIndexByToolSetIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByToolSetIdx( schema->getAuthorization(),
				ToolSetId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByToolSetIdx->erase( searchIndexByToolSetIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByToolSetIdx->insert( std::map< cfcore::CFGenKbGenItemByToolSetIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByScopeIdx( const int16_t* ScopeDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByScopeIdx == NULL ) {
			indexByScopeIdx = new std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			oldDict = searchIndexByScopeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByScopeIdx( schema->getAuthorization(),
				ScopeDefId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByScopeIdx->erase( searchIndexByScopeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByScopeIdx->insert( std::map< cfcore::CFGenKbGenItemByScopeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByGenDefIdx( const int16_t GenDefId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByGenDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByGenDefIdx == NULL ) {
			indexByGenDefIdx = new std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByGenDefIdx = indexByGenDefIdx->find( key );
		if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
			oldDict = searchIndexByGenDefIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByGenDefIdx( schema->getAuthorization(),
				GenDefId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGenDefIdx->erase( searchIndexByGenDefIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGenDefIdx->insert( std::map< cfcore::CFGenKbGenItemByGenDefIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::readGenFileByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId, bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenFileObj*>();
		}
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::ICFGenKbGenFileObj* obj = NULL;
		cfcore::ICFGenKbGenFileObj* realized = NULL;
		if( ! forceRead ) {
			auto searchIndexByAltIdx = indexByAltIdx->find( key );
			if( searchIndexByAltIdx != indexByAltIdx->end() ) {
				// Note: obj may be null if cache misses is enabled
				obj = searchIndexByAltIdx->second;
				realized = obj;
			}
		}
		if( forceRead || ( obj == NULL ) ) {
			cfcore::CFGenKbGenItemBuff* buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
			if( buff != NULL ) {
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				obj->setBuff( buff );
				realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				indexByAltIdx->insert( std::map< cfcore::CFGenKbGenItemByAltIdxKey, cfcore::ICFGenKbGenFileObj*>::value_type( key, dynamic_cast<cfcore::ICFGenKbGenFileObj*>( realized ) ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = realized;
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByGelExecIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( GelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *GelExecutableTenantId );
		}
		if( GelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *GelExecutableGelCacheId );
		}
		if( GelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *GelExecutableId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByGelExecIdx == NULL ) {
			indexByGelExecIdx = new std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByGelExecIdx = indexByGelExecIdx->find( key );
		if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
			oldDict = searchIndexByGelExecIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByGelExecIdx( schema->getAuthorization(),
				GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByGelExecIdx->erase( searchIndexByGelExecIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByGelExecIdx->insert( std::map< cfcore::CFGenKbGenItemByGelExecIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByProbeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( ProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *ProbeTenantId );
		}
		if( ProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *ProbeCartridgeId );
		}
		if( ProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *ProbeGenItemId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByProbeIdx == NULL ) {
			indexByProbeIdx = new std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByProbeIdx = indexByProbeIdx->find( key );
		if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
			oldDict = searchIndexByProbeIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenItemObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenItemBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByProbeIdx( schema->getAuthorization(),
				ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
			cfcore::CFGenKbGenItemBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByProbeIdx->erase( searchIndexByProbeIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByProbeIdx->insert( std::map< cfcore::CFGenKbGenItemByProbeIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByBodyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenRuleByBodyIdxKey key;
		if( BodyTenantId == NULL ) {
			key.setOptionalBodyTenantIdNull();
		}
		else {
			key.setOptionalBodyTenantIdValue( *BodyTenantId );
		}
		if( BodyGelCacheId == NULL ) {
			key.setOptionalBodyGelCacheIdNull();
		}
		else {
			key.setOptionalBodyGelCacheIdValue( *BodyGelCacheId );
		}
		if( BodyGelId == NULL ) {
			key.setOptionalBodyGelIdNull();
		}
		else {
			key.setOptionalBodyGelIdValue( *BodyGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByBodyIdx == NULL ) {
			indexByBodyIdx = new std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByBodyIdx = indexByBodyIdx->find( key );
		if( searchIndexByBodyIdx != indexByBodyIdx->end() ) {
			oldDict = searchIndexByBodyIdx->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenRuleObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenRuleBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenRule()->readDerivedByBodyIdx( schema->getAuthorization(),
				BodyTenantId,
				BodyGelCacheId,
				BodyGelId );
			cfcore::CFGenKbGenRuleBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByBodyIdx->erase( searchIndexByBodyIdx );
				delete oldDict;
				oldDict = NULL;
			}
			indexByBodyIdx->insert( std::map< cfcore::CFGenKbGenRuleByBodyIdxKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXSrcBundle" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXSrcBundleKey key;
		if( SourceBundleTenantId == NULL ) {
			key.setOptionalSourceBundleTenantIdNull();
		}
		else {
			key.setOptionalSourceBundleTenantIdValue( *SourceBundleTenantId );
		}
		if( SourceBundleGelCacheId == NULL ) {
			key.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			key.setOptionalSourceBundleGelCacheIdValue( *SourceBundleGelCacheId );
		}
		if( SourceBundleGelId == NULL ) {
			key.setOptionalSourceBundleGelIdNull();
		}
		else {
			key.setOptionalSourceBundleGelIdValue( *SourceBundleGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXSrcBundle == NULL ) {
			indexByXSrcBundle = new std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXSrcBundle = indexByXSrcBundle->find( key );
		if( searchIndexByXSrcBundle != indexByXSrcBundle->end() ) {
			oldDict = searchIndexByXSrcBundle->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXSrcBundle( schema->getAuthorization(),
				SourceBundleTenantId,
				SourceBundleGelCacheId,
				SourceBundleGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXSrcBundle->erase( searchIndexByXSrcBundle );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXSrcBundle->insert( std::map< cfcore::CFGenKbGenFileByXSrcBundleKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXModName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXModNameKey key;
		if( ModuleNameTenantId == NULL ) {
			key.setOptionalModuleNameTenantIdNull();
		}
		else {
			key.setOptionalModuleNameTenantIdValue( *ModuleNameTenantId );
		}
		if( ModuleNameGelCacheId == NULL ) {
			key.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			key.setOptionalModuleNameGelCacheIdValue( *ModuleNameGelCacheId );
		}
		if( ModuleNameGelId == NULL ) {
			key.setOptionalModuleNameGelIdNull();
		}
		else {
			key.setOptionalModuleNameGelIdValue( *ModuleNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXModName == NULL ) {
			indexByXModName = new std::map< cfcore::CFGenKbGenFileByXModNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXModName = indexByXModName->find( key );
		if( searchIndexByXModName != indexByXModName->end() ) {
			oldDict = searchIndexByXModName->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXModName( schema->getAuthorization(),
				ModuleNameTenantId,
				ModuleNameGelCacheId,
				ModuleNameGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXModName->erase( searchIndexByXModName );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXModName->insert( std::map< cfcore::CFGenKbGenFileByXModNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXBasePkg" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXBasePkgKey key;
		if( BasePackageTenantId == NULL ) {
			key.setOptionalBasePackageTenantIdNull();
		}
		else {
			key.setOptionalBasePackageTenantIdValue( *BasePackageTenantId );
		}
		if( BasePackageGelCacheId == NULL ) {
			key.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			key.setOptionalBasePackageGelCacheIdValue( *BasePackageGelCacheId );
		}
		if( BasePackageGelId == NULL ) {
			key.setOptionalBasePackageGelIdNull();
		}
		else {
			key.setOptionalBasePackageGelIdValue( *BasePackageGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXBasePkg == NULL ) {
			indexByXBasePkg = new std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXBasePkg = indexByXBasePkg->find( key );
		if( searchIndexByXBasePkg != indexByXBasePkg->end() ) {
			oldDict = searchIndexByXBasePkg->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXBasePkg( schema->getAuthorization(),
				BasePackageTenantId,
				BasePackageGelCacheId,
				BasePackageGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXBasePkg->erase( searchIndexByXBasePkg );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXBasePkg->insert( std::map< cfcore::CFGenKbGenFileByXBasePkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXSubPkg" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXSubPkgKey key;
		if( SubPackageTenantId == NULL ) {
			key.setOptionalSubPackageTenantIdNull();
		}
		else {
			key.setOptionalSubPackageTenantIdValue( *SubPackageTenantId );
		}
		if( SubPackageGelCacheId == NULL ) {
			key.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			key.setOptionalSubPackageGelCacheIdValue( *SubPackageGelCacheId );
		}
		if( SubPackageGelId == NULL ) {
			key.setOptionalSubPackageGelIdNull();
		}
		else {
			key.setOptionalSubPackageGelIdValue( *SubPackageGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXSubPkg == NULL ) {
			indexByXSubPkg = new std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXSubPkg = indexByXSubPkg->find( key );
		if( searchIndexByXSubPkg != indexByXSubPkg->end() ) {
			oldDict = searchIndexByXSubPkg->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXSubPkg( schema->getAuthorization(),
				SubPackageTenantId,
				SubPackageGelCacheId,
				SubPackageGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXSubPkg->erase( searchIndexByXSubPkg );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXSubPkg->insert( std::map< cfcore::CFGenKbGenFileByXSubPkgKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXExpClsName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXExpClsNameKey key;
		if( ExpansionClassNameTenantId == NULL ) {
			key.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionClassNameTenantIdValue( *ExpansionClassNameTenantId );
		}
		if( ExpansionClassNameGelCacheId == NULL ) {
			key.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelCacheIdValue( *ExpansionClassNameGelCacheId );
		}
		if( ExpansionClassNameGelId == NULL ) {
			key.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelIdValue( *ExpansionClassNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXExpClsName == NULL ) {
			indexByXExpClsName = new std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXExpClsName = indexByXExpClsName->find( key );
		if( searchIndexByXExpClsName != indexByXExpClsName->end() ) {
			oldDict = searchIndexByXExpClsName->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXExpClsName( schema->getAuthorization(),
				ExpansionClassNameTenantId,
				ExpansionClassNameGelCacheId,
				ExpansionClassNameGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXExpClsName->erase( searchIndexByXExpClsName );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXExpClsName->insert( std::map< cfcore::CFGenKbGenFileByXExpClsNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXExpKeyName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXExpKeyNameKey key;
		if( ExpansionKeyNameTenantId == NULL ) {
			key.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameTenantIdValue( *ExpansionKeyNameTenantId );
		}
		if( ExpansionKeyNameGelCacheId == NULL ) {
			key.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelCacheIdValue( *ExpansionKeyNameGelCacheId );
		}
		if( ExpansionKeyNameGelId == NULL ) {
			key.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelIdValue( *ExpansionKeyNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXExpKeyName == NULL ) {
			indexByXExpKeyName = new std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXExpKeyName = indexByXExpKeyName->find( key );
		if( searchIndexByXExpKeyName != indexByXExpKeyName->end() ) {
			oldDict = searchIndexByXExpKeyName->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXExpKeyName( schema->getAuthorization(),
				ExpansionKeyNameTenantId,
				ExpansionKeyNameGelCacheId,
				ExpansionKeyNameGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXExpKeyName->erase( searchIndexByXExpKeyName );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXExpKeyName->insert( std::map< cfcore::CFGenKbGenFileByXExpKeyNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readGenFileByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId,
		bool forceRead )
	{
		static const std::string S_ProcName( "readGenFileByXExpFileName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenFileByXExpFileNameKey key;
		if( ExpansionFileNameTenantId == NULL ) {
			key.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionFileNameTenantIdValue( *ExpansionFileNameTenantId );
		}
		if( ExpansionFileNameGelCacheId == NULL ) {
			key.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelCacheIdValue( *ExpansionFileNameGelCacheId );
		}
		if( ExpansionFileNameGelId == NULL ) {
			key.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelIdValue( *ExpansionFileNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* oldDict;
		if( indexByXExpFileName == NULL ) {
			indexByXExpFileName = new std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>*>();
		}
		auto searchIndexByXExpFileName = indexByXExpFileName->find( key );
		if( searchIndexByXExpFileName != indexByXExpFileName->end() ) {
			oldDict = searchIndexByXExpFileName->second;
		}
		else {
			oldDict = NULL;
		}
		if( ( oldDict != NULL ) && ( ! forceRead ) ) {
			dict = oldDict;
		}
		else {
			dict = new std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>();
			cfcore::ICFGenKbGenFileObj* obj;
			std::TCFLibOwningVector<cfcore::CFGenKbGenFileBuff*> buffList = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByXExpFileName( schema->getAuthorization(),
				ExpansionFileNameTenantId,
				ExpansionFileNameGelCacheId,
				ExpansionFileNameGelId );
			cfcore::CFGenKbGenFileBuff* buff;
			for( size_t idx = 0; idx < buffList.size(); idx ++ ) {
				buff = buffList[ idx ];
				buffList[ idx ] = NULL;
				obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>(
					dynamic_cast<cfcore::CFGenKbGenItemTableObj*>( schema->getGenItemTableObj() )->constructByClassCode( buff->getClassCode() ) );
				if( obj == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Obj );
				}
				obj->setBuff( buff );
				cfcore::ICFGenKbGenFileObj* realized = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
				if( realized == NULL ) {
					throw cflib::CFLibNullArgumentException( CLASS_NAME,
						S_ProcName,
						0,
						S_Realized );
				}
				dict->insert( std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >::value_type( *(realized->getPKey()), realized ) );
				// No need to delete obj -- realize() auto-destructs the instance it decided to discard
				obj = NULL;
			}
			if( oldDict != NULL ) {
				indexByXExpFileName->erase( searchIndexByXExpFileName );
				delete oldDict;
				oldDict = NULL;
			}
			indexByXExpFileName->insert( std::map< cfcore::CFGenKbGenFileByXExpFileNameKey,
				std::map< cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj* >* >::value_type( key, dict ) );
		}
		size_t len = dict->size();
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		arr.reserve( len );
		auto valIter = dict->begin();
		while( valIter != dict->end() ) {
			arr.push_back( valIter->second );
			valIter ++;
		}
		return( arr );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::readCachedGenFile( cfcore::CFGenKbGenItemPKey* pkey ) {
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		static const std::string S_ProcName( "readGenFile" );
		cfcore::ICFGenKbGenFileObj* obj = NULL;
		cfcore::ICFGenKbGenFileObj* realized = NULL;
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			// obj could be NULL if cache misses is enabled
			obj = searchMembers->second;
			realized = obj;
		}
		return( realized );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::readCachedGenFileByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		static const std::string S_ProcName( "readCachedGenFileByItemIdIdx" );
		static const std::string S_Realized( "realized" );
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenFileObj* obj = readCachedGenFile( &pkey );
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByTenantIdx( const int64_t TenantId )
	{
		static const std::string S_ProcName( "readCachedGenFileByTenantIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByTenantIdxKey key;
		key.setRequiredTenantId( TenantId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByTenantIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByTenantIdx = indexByTenantIdx->find( key );
		if( searchIndexByTenantIdx != indexByTenantIdx->end() ) {
			dict = searchIndexByTenantIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId )
	{
		static const std::string S_ProcName( "readCachedGenFileByCartIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByCartIdxKey key;
		key.setRequiredTenantId( TenantId );
		key.setRequiredCartridgeId( CartridgeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByCartIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByCartIdx = indexByCartIdx->find( key );
		if( searchIndexByCartIdx != indexByCartIdx->end() ) {
			dict = searchIndexByCartIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByRuleTypeIdx( const int16_t RuleTypeId )
	{
		static const std::string S_ProcName( "readCachedGenFileByRuleTypeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByRuleTypeIdxKey key;
		key.setRequiredRuleTypeId( RuleTypeId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByRuleTypeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByRuleTypeIdx = indexByRuleTypeIdx->find( key );
		if( searchIndexByRuleTypeIdx != indexByRuleTypeIdx->end() ) {
			dict = searchIndexByRuleTypeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByToolSetIdx( const int16_t ToolSetId )
	{
		static const std::string S_ProcName( "readCachedGenFileByToolSetIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByToolSetIdxKey key;
		key.setRequiredToolSetId( ToolSetId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByToolSetIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByToolSetIdx = indexByToolSetIdx->find( key );
		if( searchIndexByToolSetIdx != indexByToolSetIdx->end() ) {
			dict = searchIndexByToolSetIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByScopeIdx( const int16_t* ScopeDefId )
	{
		static const std::string S_ProcName( "readCachedGenFileByScopeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByScopeIdxKey key;
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByScopeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByScopeIdx = indexByScopeIdx->find( key );
		if( searchIndexByScopeIdx != indexByScopeIdx->end() ) {
			dict = searchIndexByScopeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByGenDefIdx( const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readCachedGenFileByGenDefIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByGenDefIdxKey key;
		key.setRequiredGenDefId( GenDefId );
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByGenDefIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGenDefIdx = indexByGenDefIdx->find( key );
		if( searchIndexByGenDefIdx != indexByGenDefIdx->end() ) {
			dict = searchIndexByGenDefIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::readCachedGenFileByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		static const std::string S_ProcName( "readCachedGenFileByAltIdx" );
		static const std::string S_Realized( "realized" );
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenFileObj*>();
		}
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::ICFGenKbGenFileObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			// Note: obj may be null if cache misses is enabled
			obj = searchIndexByAltIdx->second;
		}
		else {
			for( auto iterMembers = members->begin(); ( obj == NULL ) && ( iterMembers != members->end() ); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) != key ) {
						obj = NULL;
					}
				}
			}
		}
		return( obj );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		static const std::string S_ProcName( "readCachedGenFileByGelExecIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByGelExecIdxKey key;
		if( GelExecutableTenantId == NULL ) {
			key.setOptionalGelExecutableTenantIdNull();
		}
		else {
			key.setOptionalGelExecutableTenantIdValue( *GelExecutableTenantId );
		}
		if( GelExecutableGelCacheId == NULL ) {
			key.setOptionalGelExecutableGelCacheIdNull();
		}
		else {
			key.setOptionalGelExecutableGelCacheIdValue( *GelExecutableGelCacheId );
		}
		if( GelExecutableId == NULL ) {
			key.setOptionalGelExecutableIdNull();
		}
		else {
			key.setOptionalGelExecutableIdValue( *GelExecutableId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByGelExecIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByGelExecIdx = indexByGelExecIdx->find( key );
		if( searchIndexByGelExecIdx != indexByGelExecIdx->end() ) {
			dict = searchIndexByGelExecIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		static const std::string S_ProcName( "readCachedGenFileByProbeIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenItemByProbeIdxKey key;
		if( ProbeTenantId == NULL ) {
			key.setOptionalProbeTenantIdNull();
		}
		else {
			key.setOptionalProbeTenantIdValue( *ProbeTenantId );
		}
		if( ProbeCartridgeId == NULL ) {
			key.setOptionalProbeCartridgeIdNull();
		}
		else {
			key.setOptionalProbeCartridgeIdValue( *ProbeCartridgeId );
		}
		if( ProbeGenItemId == NULL ) {
			key.setOptionalProbeGenItemIdNull();
		}
		else {
			key.setOptionalProbeGenItemIdValue( *ProbeGenItemId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByProbeIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByProbeIdx = indexByProbeIdx->find( key );
		if( searchIndexByProbeIdx != indexByProbeIdx->end() ) {
			dict = searchIndexByProbeIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenItemBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByBodyIdx" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenRuleByBodyIdxKey key;
		if( BodyTenantId == NULL ) {
			key.setOptionalBodyTenantIdNull();
		}
		else {
			key.setOptionalBodyTenantIdValue( *BodyTenantId );
		}
		if( BodyGelCacheId == NULL ) {
			key.setOptionalBodyGelCacheIdNull();
		}
		else {
			key.setOptionalBodyGelCacheIdValue( *BodyGelCacheId );
		}
		if( BodyGelId == NULL ) {
			key.setOptionalBodyGelIdNull();
		}
		else {
			key.setOptionalBodyGelIdValue( *BodyGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByBodyIdx == NULL ) {
			return( arr );
		}
		auto searchIndexByBodyIdx = indexByBodyIdx->find( key );
		if( searchIndexByBodyIdx != indexByBodyIdx->end() ) {
			dict = searchIndexByBodyIdx->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenRuleBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXSrcBundle" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXSrcBundleKey key;
		if( SourceBundleTenantId == NULL ) {
			key.setOptionalSourceBundleTenantIdNull();
		}
		else {
			key.setOptionalSourceBundleTenantIdValue( *SourceBundleTenantId );
		}
		if( SourceBundleGelCacheId == NULL ) {
			key.setOptionalSourceBundleGelCacheIdNull();
		}
		else {
			key.setOptionalSourceBundleGelCacheIdValue( *SourceBundleGelCacheId );
		}
		if( SourceBundleGelId == NULL ) {
			key.setOptionalSourceBundleGelIdNull();
		}
		else {
			key.setOptionalSourceBundleGelIdValue( *SourceBundleGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXSrcBundle == NULL ) {
			return( arr );
		}
		auto searchIndexByXSrcBundle = indexByXSrcBundle->find( key );
		if( searchIndexByXSrcBundle != indexByXSrcBundle->end() ) {
			dict = searchIndexByXSrcBundle->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXModName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXModNameKey key;
		if( ModuleNameTenantId == NULL ) {
			key.setOptionalModuleNameTenantIdNull();
		}
		else {
			key.setOptionalModuleNameTenantIdValue( *ModuleNameTenantId );
		}
		if( ModuleNameGelCacheId == NULL ) {
			key.setOptionalModuleNameGelCacheIdNull();
		}
		else {
			key.setOptionalModuleNameGelCacheIdValue( *ModuleNameGelCacheId );
		}
		if( ModuleNameGelId == NULL ) {
			key.setOptionalModuleNameGelIdNull();
		}
		else {
			key.setOptionalModuleNameGelIdValue( *ModuleNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXModName == NULL ) {
			return( arr );
		}
		auto searchIndexByXModName = indexByXModName->find( key );
		if( searchIndexByXModName != indexByXModName->end() ) {
			dict = searchIndexByXModName->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXBasePkg" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXBasePkgKey key;
		if( BasePackageTenantId == NULL ) {
			key.setOptionalBasePackageTenantIdNull();
		}
		else {
			key.setOptionalBasePackageTenantIdValue( *BasePackageTenantId );
		}
		if( BasePackageGelCacheId == NULL ) {
			key.setOptionalBasePackageGelCacheIdNull();
		}
		else {
			key.setOptionalBasePackageGelCacheIdValue( *BasePackageGelCacheId );
		}
		if( BasePackageGelId == NULL ) {
			key.setOptionalBasePackageGelIdNull();
		}
		else {
			key.setOptionalBasePackageGelIdValue( *BasePackageGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXBasePkg == NULL ) {
			return( arr );
		}
		auto searchIndexByXBasePkg = indexByXBasePkg->find( key );
		if( searchIndexByXBasePkg != indexByXBasePkg->end() ) {
			dict = searchIndexByXBasePkg->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXSubPkg" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXSubPkgKey key;
		if( SubPackageTenantId == NULL ) {
			key.setOptionalSubPackageTenantIdNull();
		}
		else {
			key.setOptionalSubPackageTenantIdValue( *SubPackageTenantId );
		}
		if( SubPackageGelCacheId == NULL ) {
			key.setOptionalSubPackageGelCacheIdNull();
		}
		else {
			key.setOptionalSubPackageGelCacheIdValue( *SubPackageGelCacheId );
		}
		if( SubPackageGelId == NULL ) {
			key.setOptionalSubPackageGelIdNull();
		}
		else {
			key.setOptionalSubPackageGelIdValue( *SubPackageGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXSubPkg == NULL ) {
			return( arr );
		}
		auto searchIndexByXSubPkg = indexByXSubPkg->find( key );
		if( searchIndexByXSubPkg != indexByXSubPkg->end() ) {
			dict = searchIndexByXSubPkg->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXExpClsName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXExpClsNameKey key;
		if( ExpansionClassNameTenantId == NULL ) {
			key.setOptionalExpansionClassNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionClassNameTenantIdValue( *ExpansionClassNameTenantId );
		}
		if( ExpansionClassNameGelCacheId == NULL ) {
			key.setOptionalExpansionClassNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelCacheIdValue( *ExpansionClassNameGelCacheId );
		}
		if( ExpansionClassNameGelId == NULL ) {
			key.setOptionalExpansionClassNameGelIdNull();
		}
		else {
			key.setOptionalExpansionClassNameGelIdValue( *ExpansionClassNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXExpClsName == NULL ) {
			return( arr );
		}
		auto searchIndexByXExpClsName = indexByXExpClsName->find( key );
		if( searchIndexByXExpClsName != indexByXExpClsName->end() ) {
			dict = searchIndexByXExpClsName->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXExpKeyName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXExpKeyNameKey key;
		if( ExpansionKeyNameTenantId == NULL ) {
			key.setOptionalExpansionKeyNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameTenantIdValue( *ExpansionKeyNameTenantId );
		}
		if( ExpansionKeyNameGelCacheId == NULL ) {
			key.setOptionalExpansionKeyNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelCacheIdValue( *ExpansionKeyNameGelCacheId );
		}
		if( ExpansionKeyNameGelId == NULL ) {
			key.setOptionalExpansionKeyNameGelIdNull();
		}
		else {
			key.setOptionalExpansionKeyNameGelIdValue( *ExpansionKeyNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXExpKeyName == NULL ) {
			return( arr );
		}
		auto searchIndexByXExpKeyName = indexByXExpKeyName->find( key );
		if( searchIndexByXExpKeyName != indexByXExpKeyName->end() ) {
			dict = searchIndexByXExpKeyName->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	std::vector<cfcore::ICFGenKbGenFileObj*> CFGenKbGenFileTableObj::readCachedGenFileByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId )
	{
		static const std::string S_ProcName( "readCachedGenFileByXExpFileName" );
		static const std::string S_Idx( "idx" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Realized( "realized" );
		std::vector<cfcore::ICFGenKbGenFileObj*> arr;
		cfcore::CFGenKbGenFileByXExpFileNameKey key;
		if( ExpansionFileNameTenantId == NULL ) {
			key.setOptionalExpansionFileNameTenantIdNull();
		}
		else {
			key.setOptionalExpansionFileNameTenantIdValue( *ExpansionFileNameTenantId );
		}
		if( ExpansionFileNameGelCacheId == NULL ) {
			key.setOptionalExpansionFileNameGelCacheIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelCacheIdValue( *ExpansionFileNameGelCacheId );
		}
		if( ExpansionFileNameGelId == NULL ) {
			key.setOptionalExpansionFileNameGelIdNull();
		}
		else {
			key.setOptionalExpansionFileNameGelIdValue( *ExpansionFileNameGelId );
		}
		std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* dict;
		if( indexByXExpFileName == NULL ) {
			return( arr );
		}
		auto searchIndexByXExpFileName = indexByXExpFileName->find( key );
		if( searchIndexByXExpFileName != indexByXExpFileName->end() ) {
			dict = searchIndexByXExpFileName->second;
			size_t len = dict->size();
			std::vector<cfcore::ICFGenKbGenFileObj*> arr;
			arr.reserve( len );
			auto valIter = dict->begin();
			while( valIter != dict->end() ) {
				arr.push_back( valIter->second );
				valIter ++;
			}
		}
		else {
			cfcore::ICFGenKbGenFileObj* obj;
			for( auto iterMembers = members->begin(); iterMembers != members->end(); iterMembers ++ ) {
				obj = iterMembers->second;
				if( obj != NULL ) {
					if( *(dynamic_cast<cfcore::CFGenKbGenFileBuff*>( obj->getBuff() ) ) == key ) {
						arr.push_back( obj );
					}
				}
			}
		}
		return( arr );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileTableObj::updateGenFile( cfcore::ICFGenKbGenFileEditObj* Obj ) {
		static const std::string S_ProcName( "updateGenFile" );
		static const std::string S_Obj( "obj" );
		static const std::string S_Updated( "updated" );
		CFLIB_EXCEPTION_DECLINFO
		cfcore::ICFGenKbGenFileObj* obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( Obj->getOrig() );
		try {
			cfcore::CFGenKbGenFileBuff* updated = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->updateGenFile( schema->getAuthorization(),
				dynamic_cast<cfcore::CFGenKbGenFileBuff*>( Obj->getGenFileBuff()->clone() ) );
			if( updated == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_Updated );
			}
			obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( dynamic_cast<cfcore::CFGenKbGenFileTableObj*>( schema->getGenFileTableObj() )->newInstance() );
			obj->setBuff( updated );
			obj = dynamic_cast<cfcore::ICFGenKbGenFileObj*>( obj->realize() );
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

	void CFGenKbGenFileTableObj::deleteGenFile( cfcore::ICFGenKbGenFileEditObj* Obj ) {
		cfcore::ICFGenKbGenFileObj* obj = Obj;
		dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFile( schema->getAuthorization(),
			obj->getGenFileBuff() );
		deepDisposeByItemIdIdx( obj->getRequiredTenantId(),
			obj->getRequiredCartridgeId(),
			obj->getRequiredItemId() );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByItemIdIdx( const int64_t TenantId,
			const int64_t CartridgeId,
			const int64_t ItemId )
	{
		cfcore::CFGenKbGenItemPKey pkey;
		pkey.setRequiredTenantId( TenantId );
		pkey.setRequiredCartridgeId( CartridgeId );
		pkey.setRequiredItemId( ItemId );
		cfcore::ICFGenKbGenFileObj* obj = readGenFile( &pkey, true );
		if( obj != NULL ) {
			cfcore::ICFGenKbGenFileEditObj* editObj = dynamic_cast<cfcore::ICFGenKbGenFileEditObj*>( obj->getEdit() );
			if( editObj == NULL ) {
				editObj = dynamic_cast<cfcore::ICFGenKbGenFileEditObj*>( obj->beginEdit() );
			}
			if( editObj != NULL ) {
				editObj->deleteInstance();
				editObj = NULL;
			}
		}
	}

	void CFGenKbGenFileTableObj::deleteGenFileByTenantIdx( const int64_t TenantId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByTenantIdx( schema->getAuthorization(),
				TenantId );
		deepDisposeByTenantIdx( TenantId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByCartIdx( const int64_t TenantId,
			const int64_t CartridgeId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByCartIdx( schema->getAuthorization(),
				TenantId,
				CartridgeId );
		deepDisposeByCartIdx( TenantId,
			CartridgeId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByRuleTypeIdx( const int16_t RuleTypeId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByRuleTypeIdx( schema->getAuthorization(),
				RuleTypeId );
		deepDisposeByRuleTypeIdx( RuleTypeId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByToolSetIdx( const int16_t ToolSetId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByToolSetIdx( schema->getAuthorization(),
				ToolSetId );
		deepDisposeByToolSetIdx( ToolSetId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByScopeIdx( const int16_t* ScopeDefId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByScopeIdx( schema->getAuthorization(),
				ScopeDefId );
		deepDisposeByScopeIdx( ScopeDefId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByGenDefIdx( const int16_t GenDefId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByGenDefIdx( schema->getAuthorization(),
				GenDefId );
		deepDisposeByGenDefIdx( GenDefId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByAltIdx( const std::string& Name,
			const int16_t ToolSetId,
			const int16_t* ScopeDefId,
			const int16_t GenDefId )
	{
		if( indexByAltIdx == NULL ) {
			indexByAltIdx = new std::map< cfcore::CFGenKbGenItemByAltIdxKey,
				cfcore::ICFGenKbGenFileObj*>();
		}
		cfcore::CFGenKbGenItemByAltIdxKey key;
		key.setRequiredName( Name );
		key.setRequiredToolSetId( ToolSetId );
		if( ScopeDefId == NULL ) {
			key.setOptionalScopeDefIdNull();
		}
		else {
			key.setOptionalScopeDefIdValue( *ScopeDefId );
		}
		key.setRequiredGenDefId( GenDefId );
		cfcore::ICFGenKbGenFileObj* obj = NULL;
		auto searchIndexByAltIdx = indexByAltIdx->find( key );
		if( searchIndexByAltIdx != indexByAltIdx->end() ) {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		}
		else {
			dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByAltIdx( schema->getAuthorization(),
				Name,
				ToolSetId,
				ScopeDefId,
				GenDefId );
		}
		deepDisposeByAltIdx( Name,
			ToolSetId,
			ScopeDefId,
			GenDefId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByGelExecIdx( const int64_t* GelExecutableTenantId,
			const int64_t* GelExecutableGelCacheId,
			const int64_t* GelExecutableId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByGelExecIdx( schema->getAuthorization(),
				GelExecutableTenantId,
				GelExecutableGelCacheId,
				GelExecutableId );
		deepDisposeByGelExecIdx( GelExecutableTenantId,
			GelExecutableGelCacheId,
			GelExecutableId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByProbeIdx( const int64_t* ProbeTenantId,
			const int64_t* ProbeCartridgeId,
			const int64_t* ProbeGenItemId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByProbeIdx( schema->getAuthorization(),
				ProbeTenantId,
				ProbeCartridgeId,
				ProbeGenItemId );
		deepDisposeByProbeIdx( ProbeTenantId,
			ProbeCartridgeId,
			ProbeGenItemId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByBodyIdx( const int64_t* BodyTenantId,
			const int64_t* BodyGelCacheId,
			const int64_t* BodyGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByBodyIdx( schema->getAuthorization(),
				BodyTenantId,
				BodyGelCacheId,
				BodyGelId );
		deepDisposeByBodyIdx( BodyTenantId,
			BodyGelCacheId,
			BodyGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXSrcBundle( const int64_t* SourceBundleTenantId,
			const int64_t* SourceBundleGelCacheId,
			const int64_t* SourceBundleGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXSrcBundle( schema->getAuthorization(),
				SourceBundleTenantId,
				SourceBundleGelCacheId,
				SourceBundleGelId );
		deepDisposeByXSrcBundle( SourceBundleTenantId,
			SourceBundleGelCacheId,
			SourceBundleGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXModName( const int64_t* ModuleNameTenantId,
			const int64_t* ModuleNameGelCacheId,
			const int64_t* ModuleNameGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXModName( schema->getAuthorization(),
				ModuleNameTenantId,
				ModuleNameGelCacheId,
				ModuleNameGelId );
		deepDisposeByXModName( ModuleNameTenantId,
			ModuleNameGelCacheId,
			ModuleNameGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXBasePkg( const int64_t* BasePackageTenantId,
			const int64_t* BasePackageGelCacheId,
			const int64_t* BasePackageGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXBasePkg( schema->getAuthorization(),
				BasePackageTenantId,
				BasePackageGelCacheId,
				BasePackageGelId );
		deepDisposeByXBasePkg( BasePackageTenantId,
			BasePackageGelCacheId,
			BasePackageGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXSubPkg( const int64_t* SubPackageTenantId,
			const int64_t* SubPackageGelCacheId,
			const int64_t* SubPackageGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXSubPkg( schema->getAuthorization(),
				SubPackageTenantId,
				SubPackageGelCacheId,
				SubPackageGelId );
		deepDisposeByXSubPkg( SubPackageTenantId,
			SubPackageGelCacheId,
			SubPackageGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXExpClsName( const int64_t* ExpansionClassNameTenantId,
			const int64_t* ExpansionClassNameGelCacheId,
			const int64_t* ExpansionClassNameGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXExpClsName( schema->getAuthorization(),
				ExpansionClassNameTenantId,
				ExpansionClassNameGelCacheId,
				ExpansionClassNameGelId );
		deepDisposeByXExpClsName( ExpansionClassNameTenantId,
			ExpansionClassNameGelCacheId,
			ExpansionClassNameGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXExpKeyName( const int64_t* ExpansionKeyNameTenantId,
			const int64_t* ExpansionKeyNameGelCacheId,
			const int64_t* ExpansionKeyNameGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXExpKeyName( schema->getAuthorization(),
				ExpansionKeyNameTenantId,
				ExpansionKeyNameGelCacheId,
				ExpansionKeyNameGelId );
		deepDisposeByXExpKeyName( ExpansionKeyNameTenantId,
			ExpansionKeyNameGelCacheId,
			ExpansionKeyNameGelId );
	}

	void CFGenKbGenFileTableObj::deleteGenFileByXExpFileName( const int64_t* ExpansionFileNameTenantId,
			const int64_t* ExpansionFileNameGelCacheId,
			const int64_t* ExpansionFileNameGelId )
	{
		dynamic_cast<cfcore::ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->deleteGenFileByXExpFileName( schema->getAuthorization(),
				ExpansionFileNameTenantId,
				ExpansionFileNameGelCacheId,
				ExpansionFileNameGelId );
		deepDisposeByXExpFileName( ExpansionFileNameTenantId,
			ExpansionFileNameGelCacheId,
			ExpansionFileNameGelId );
	}

	void CFGenKbGenFileTableObj::reallyDetachFromIndexesGenFile( cfcore::ICFGenKbGenFileObj* Obj ) {
		static const std::string S_ProcName( "reallyDetachFromIndexesGenFile" );
		static const std::string S_Obj( "Obj" );
		static const std::string S_ExistingObj( "ExistingObj" );
		if( Obj == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_Obj );
		}
		cfcore::ICFGenKbGenFileObj* obj = Obj;
		cfcore::CFGenKbGenItemPKey* pkey = obj->getPKey();
		auto searchMembers = members->find( *pkey );
		if( searchMembers != members->end() ) {
			cfcore::ICFGenKbGenFileObj* existingObj = searchMembers->second;
			if( existingObj == NULL ) {
				throw cflib::CFLibNullArgumentException( CLASS_NAME,
					S_ProcName,
					0,
					S_ExistingObj );
			}
			if( indexByTenantIdx != NULL ) {
				cfcore::CFGenKbGenItemByTenantIdxKey keyTenantIdx;
				keyTenantIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				auto searchTenantIdx = indexByTenantIdx->find( keyTenantIdx );
				if( searchTenantIdx != indexByTenantIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapTenantIdx = searchTenantIdx->second;
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

			if( indexByCartIdx != NULL ) {
				cfcore::CFGenKbGenItemByCartIdxKey keyCartIdx;
				keyCartIdx.setRequiredTenantId( obj->getRequiredTenantId() );
				keyCartIdx.setRequiredCartridgeId( obj->getRequiredCartridgeId() );
				auto searchCartIdx = indexByCartIdx->find( keyCartIdx );
				if( searchCartIdx != indexByCartIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapCartIdx = searchCartIdx->second;
					if( mapCartIdx != NULL ) {
						auto removalProbe = mapCartIdx->find( *pkey );
						if( removalProbe != mapCartIdx->end() ) {
							mapCartIdx->erase( removalProbe );
							if( mapCartIdx->empty() ) {
								delete mapCartIdx;
								mapCartIdx = NULL;
								indexByCartIdx->erase( searchCartIdx );
							}
						}
					}
				}
			}

			if( indexByRuleTypeIdx != NULL ) {
				cfcore::CFGenKbGenItemByRuleTypeIdxKey keyRuleTypeIdx;
				keyRuleTypeIdx.setRequiredRuleTypeId( obj->getRequiredRuleTypeId() );
				auto searchRuleTypeIdx = indexByRuleTypeIdx->find( keyRuleTypeIdx );
				if( searchRuleTypeIdx != indexByRuleTypeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapRuleTypeIdx = searchRuleTypeIdx->second;
					if( mapRuleTypeIdx != NULL ) {
						auto removalProbe = mapRuleTypeIdx->find( *pkey );
						if( removalProbe != mapRuleTypeIdx->end() ) {
							mapRuleTypeIdx->erase( removalProbe );
							if( mapRuleTypeIdx->empty() ) {
								delete mapRuleTypeIdx;
								mapRuleTypeIdx = NULL;
								indexByRuleTypeIdx->erase( searchRuleTypeIdx );
							}
						}
					}
				}
			}

			if( indexByToolSetIdx != NULL ) {
				cfcore::CFGenKbGenItemByToolSetIdxKey keyToolSetIdx;
				keyToolSetIdx.setRequiredToolSetId( obj->getRequiredToolSetId() );
				auto searchToolSetIdx = indexByToolSetIdx->find( keyToolSetIdx );
				if( searchToolSetIdx != indexByToolSetIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapToolSetIdx = searchToolSetIdx->second;
					if( mapToolSetIdx != NULL ) {
						auto removalProbe = mapToolSetIdx->find( *pkey );
						if( removalProbe != mapToolSetIdx->end() ) {
							mapToolSetIdx->erase( removalProbe );
							if( mapToolSetIdx->empty() ) {
								delete mapToolSetIdx;
								mapToolSetIdx = NULL;
								indexByToolSetIdx->erase( searchToolSetIdx );
							}
						}
					}
				}
			}

			if( indexByScopeIdx != NULL ) {
				cfcore::CFGenKbGenItemByScopeIdxKey keyScopeIdx;
				if( obj->isOptionalScopeDefIdNull() ) {
					keyScopeIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyScopeIdx.setOptionalScopeDefIdValue( obj->getOptionalScopeDefIdValue() );
				}
				auto searchScopeIdx = indexByScopeIdx->find( keyScopeIdx );
				if( searchScopeIdx != indexByScopeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapScopeIdx = searchScopeIdx->second;
					if( mapScopeIdx != NULL ) {
						auto removalProbe = mapScopeIdx->find( *pkey );
						if( removalProbe != mapScopeIdx->end() ) {
							mapScopeIdx->erase( removalProbe );
							if( mapScopeIdx->empty() ) {
								delete mapScopeIdx;
								mapScopeIdx = NULL;
								indexByScopeIdx->erase( searchScopeIdx );
							}
						}
					}
				}
			}

			if( indexByGenDefIdx != NULL ) {
				cfcore::CFGenKbGenItemByGenDefIdxKey keyGenDefIdx;
				keyGenDefIdx.setRequiredGenDefId( obj->getRequiredGenDefId() );
				auto searchGenDefIdx = indexByGenDefIdx->find( keyGenDefIdx );
				if( searchGenDefIdx != indexByGenDefIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGenDefIdx = searchGenDefIdx->second;
					if( mapGenDefIdx != NULL ) {
						auto removalProbe = mapGenDefIdx->find( *pkey );
						if( removalProbe != mapGenDefIdx->end() ) {
							mapGenDefIdx->erase( removalProbe );
							if( mapGenDefIdx->empty() ) {
								delete mapGenDefIdx;
								mapGenDefIdx = NULL;
								indexByGenDefIdx->erase( searchGenDefIdx );
							}
						}
					}
				}
			}

			if( indexByAltIdx != NULL ) {
				cfcore::CFGenKbGenItemByAltIdxKey keyAltIdx;
				keyAltIdx.setRequiredName( obj->getRequiredName() );
				keyAltIdx.setRequiredToolSetId( obj->getRequiredToolSetId() );
				if( obj->isOptionalScopeDefIdNull() ) {
					keyAltIdx.setOptionalScopeDefIdNull();
				}
				else {
					keyAltIdx.setOptionalScopeDefIdValue( obj->getOptionalScopeDefIdValue() );
				}
				keyAltIdx.setRequiredGenDefId( obj->getRequiredGenDefId() );
				auto removalProbe = indexByAltIdx->find( keyAltIdx );
				if( removalProbe != indexByAltIdx->end() ) {
					indexByAltIdx->erase( removalProbe );
				}
			}

			if( indexByGelExecIdx != NULL ) {
				cfcore::CFGenKbGenItemByGelExecIdxKey keyGelExecIdx;
				if( obj->isOptionalGelExecutableTenantIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableTenantIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableTenantIdValue( obj->getOptionalGelExecutableTenantIdValue() );
				}
				if( obj->isOptionalGelExecutableGelCacheIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableGelCacheIdValue( obj->getOptionalGelExecutableGelCacheIdValue() );
				}
				if( obj->isOptionalGelExecutableIdNull() ) {
					keyGelExecIdx.setOptionalGelExecutableIdNull();
				}
				else {
					keyGelExecIdx.setOptionalGelExecutableIdValue( obj->getOptionalGelExecutableIdValue() );
				}
				auto searchGelExecIdx = indexByGelExecIdx->find( keyGelExecIdx );
				if( searchGelExecIdx != indexByGelExecIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapGelExecIdx = searchGelExecIdx->second;
					if( mapGelExecIdx != NULL ) {
						auto removalProbe = mapGelExecIdx->find( *pkey );
						if( removalProbe != mapGelExecIdx->end() ) {
							mapGelExecIdx->erase( removalProbe );
							if( mapGelExecIdx->empty() ) {
								delete mapGelExecIdx;
								mapGelExecIdx = NULL;
								indexByGelExecIdx->erase( searchGelExecIdx );
							}
						}
					}
				}
			}

			if( indexByProbeIdx != NULL ) {
				cfcore::CFGenKbGenItemByProbeIdxKey keyProbeIdx;
				if( obj->isOptionalProbeTenantIdNull() ) {
					keyProbeIdx.setOptionalProbeTenantIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeTenantIdValue( obj->getOptionalProbeTenantIdValue() );
				}
				if( obj->isOptionalProbeCartridgeIdNull() ) {
					keyProbeIdx.setOptionalProbeCartridgeIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeCartridgeIdValue( obj->getOptionalProbeCartridgeIdValue() );
				}
				if( obj->isOptionalProbeGenItemIdNull() ) {
					keyProbeIdx.setOptionalProbeGenItemIdNull();
				}
				else {
					keyProbeIdx.setOptionalProbeGenItemIdValue( obj->getOptionalProbeGenItemIdValue() );
				}
				auto searchProbeIdx = indexByProbeIdx->find( keyProbeIdx );
				if( searchProbeIdx != indexByProbeIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapProbeIdx = searchProbeIdx->second;
					if( mapProbeIdx != NULL ) {
						auto removalProbe = mapProbeIdx->find( *pkey );
						if( removalProbe != mapProbeIdx->end() ) {
							mapProbeIdx->erase( removalProbe );
							if( mapProbeIdx->empty() ) {
								delete mapProbeIdx;
								mapProbeIdx = NULL;
								indexByProbeIdx->erase( searchProbeIdx );
							}
						}
					}
				}
			}

			if( indexByBodyIdx != NULL ) {
				cfcore::CFGenKbGenRuleByBodyIdxKey keyBodyIdx;
				if( obj->isOptionalBodyTenantIdNull() ) {
					keyBodyIdx.setOptionalBodyTenantIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyTenantIdValue( obj->getOptionalBodyTenantIdValue() );
				}
				if( obj->isOptionalBodyGelCacheIdNull() ) {
					keyBodyIdx.setOptionalBodyGelCacheIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelCacheIdValue( obj->getOptionalBodyGelCacheIdValue() );
				}
				if( obj->isOptionalBodyGelIdNull() ) {
					keyBodyIdx.setOptionalBodyGelIdNull();
				}
				else {
					keyBodyIdx.setOptionalBodyGelIdValue( obj->getOptionalBodyGelIdValue() );
				}
				auto searchBodyIdx = indexByBodyIdx->find( keyBodyIdx );
				if( searchBodyIdx != indexByBodyIdx->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapBodyIdx = searchBodyIdx->second;
					if( mapBodyIdx != NULL ) {
						auto removalProbe = mapBodyIdx->find( *pkey );
						if( removalProbe != mapBodyIdx->end() ) {
							mapBodyIdx->erase( removalProbe );
							if( mapBodyIdx->empty() ) {
								delete mapBodyIdx;
								mapBodyIdx = NULL;
								indexByBodyIdx->erase( searchBodyIdx );
							}
						}
					}
				}
			}

			if( indexByXSrcBundle != NULL ) {
				cfcore::CFGenKbGenFileByXSrcBundleKey keyXSrcBundle;
				if( obj->isOptionalSourceBundleTenantIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleTenantIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleTenantIdValue( obj->getOptionalSourceBundleTenantIdValue() );
				}
				if( obj->isOptionalSourceBundleGelCacheIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelCacheIdValue( obj->getOptionalSourceBundleGelCacheIdValue() );
				}
				if( obj->isOptionalSourceBundleGelIdNull() ) {
					keyXSrcBundle.setOptionalSourceBundleGelIdNull();
				}
				else {
					keyXSrcBundle.setOptionalSourceBundleGelIdValue( obj->getOptionalSourceBundleGelIdValue() );
				}
				auto searchXSrcBundle = indexByXSrcBundle->find( keyXSrcBundle );
				if( searchXSrcBundle != indexByXSrcBundle->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSrcBundle = searchXSrcBundle->second;
					if( mapXSrcBundle != NULL ) {
						auto removalProbe = mapXSrcBundle->find( *(obj->getPKey()) );
						if( removalProbe != mapXSrcBundle->end() ) {
							mapXSrcBundle->erase( removalProbe );
							if( mapXSrcBundle->empty() ) {
								delete mapXSrcBundle;
								mapXSrcBundle = NULL;
								indexByXSrcBundle->erase( searchXSrcBundle );
							}
						}
					}
				}
			}

			if( indexByXModName != NULL ) {
				cfcore::CFGenKbGenFileByXModNameKey keyXModName;
				if( obj->isOptionalModuleNameTenantIdNull() ) {
					keyXModName.setOptionalModuleNameTenantIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameTenantIdValue( obj->getOptionalModuleNameTenantIdValue() );
				}
				if( obj->isOptionalModuleNameGelCacheIdNull() ) {
					keyXModName.setOptionalModuleNameGelCacheIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelCacheIdValue( obj->getOptionalModuleNameGelCacheIdValue() );
				}
				if( obj->isOptionalModuleNameGelIdNull() ) {
					keyXModName.setOptionalModuleNameGelIdNull();
				}
				else {
					keyXModName.setOptionalModuleNameGelIdValue( obj->getOptionalModuleNameGelIdValue() );
				}
				auto searchXModName = indexByXModName->find( keyXModName );
				if( searchXModName != indexByXModName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXModName = searchXModName->second;
					if( mapXModName != NULL ) {
						auto removalProbe = mapXModName->find( *(obj->getPKey()) );
						if( removalProbe != mapXModName->end() ) {
							mapXModName->erase( removalProbe );
							if( mapXModName->empty() ) {
								delete mapXModName;
								mapXModName = NULL;
								indexByXModName->erase( searchXModName );
							}
						}
					}
				}
			}

			if( indexByXBasePkg != NULL ) {
				cfcore::CFGenKbGenFileByXBasePkgKey keyXBasePkg;
				if( obj->isOptionalBasePackageTenantIdNull() ) {
					keyXBasePkg.setOptionalBasePackageTenantIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageTenantIdValue( obj->getOptionalBasePackageTenantIdValue() );
				}
				if( obj->isOptionalBasePackageGelCacheIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelCacheIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelCacheIdValue( obj->getOptionalBasePackageGelCacheIdValue() );
				}
				if( obj->isOptionalBasePackageGelIdNull() ) {
					keyXBasePkg.setOptionalBasePackageGelIdNull();
				}
				else {
					keyXBasePkg.setOptionalBasePackageGelIdValue( obj->getOptionalBasePackageGelIdValue() );
				}
				auto searchXBasePkg = indexByXBasePkg->find( keyXBasePkg );
				if( searchXBasePkg != indexByXBasePkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXBasePkg = searchXBasePkg->second;
					if( mapXBasePkg != NULL ) {
						auto removalProbe = mapXBasePkg->find( *(obj->getPKey()) );
						if( removalProbe != mapXBasePkg->end() ) {
							mapXBasePkg->erase( removalProbe );
							if( mapXBasePkg->empty() ) {
								delete mapXBasePkg;
								mapXBasePkg = NULL;
								indexByXBasePkg->erase( searchXBasePkg );
							}
						}
					}
				}
			}

			if( indexByXSubPkg != NULL ) {
				cfcore::CFGenKbGenFileByXSubPkgKey keyXSubPkg;
				if( obj->isOptionalSubPackageTenantIdNull() ) {
					keyXSubPkg.setOptionalSubPackageTenantIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageTenantIdValue( obj->getOptionalSubPackageTenantIdValue() );
				}
				if( obj->isOptionalSubPackageGelCacheIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelCacheIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelCacheIdValue( obj->getOptionalSubPackageGelCacheIdValue() );
				}
				if( obj->isOptionalSubPackageGelIdNull() ) {
					keyXSubPkg.setOptionalSubPackageGelIdNull();
				}
				else {
					keyXSubPkg.setOptionalSubPackageGelIdValue( obj->getOptionalSubPackageGelIdValue() );
				}
				auto searchXSubPkg = indexByXSubPkg->find( keyXSubPkg );
				if( searchXSubPkg != indexByXSubPkg->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXSubPkg = searchXSubPkg->second;
					if( mapXSubPkg != NULL ) {
						auto removalProbe = mapXSubPkg->find( *(obj->getPKey()) );
						if( removalProbe != mapXSubPkg->end() ) {
							mapXSubPkg->erase( removalProbe );
							if( mapXSubPkg->empty() ) {
								delete mapXSubPkg;
								mapXSubPkg = NULL;
								indexByXSubPkg->erase( searchXSubPkg );
							}
						}
					}
				}
			}

			if( indexByXExpClsName != NULL ) {
				cfcore::CFGenKbGenFileByXExpClsNameKey keyXExpClsName;
				if( obj->isOptionalExpansionClassNameTenantIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameTenantIdValue( obj->getOptionalExpansionClassNameTenantIdValue() );
				}
				if( obj->isOptionalExpansionClassNameGelCacheIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelCacheIdValue( obj->getOptionalExpansionClassNameGelCacheIdValue() );
				}
				if( obj->isOptionalExpansionClassNameGelIdNull() ) {
					keyXExpClsName.setOptionalExpansionClassNameGelIdNull();
				}
				else {
					keyXExpClsName.setOptionalExpansionClassNameGelIdValue( obj->getOptionalExpansionClassNameGelIdValue() );
				}
				auto searchXExpClsName = indexByXExpClsName->find( keyXExpClsName );
				if( searchXExpClsName != indexByXExpClsName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpClsName = searchXExpClsName->second;
					if( mapXExpClsName != NULL ) {
						auto removalProbe = mapXExpClsName->find( *(obj->getPKey()) );
						if( removalProbe != mapXExpClsName->end() ) {
							mapXExpClsName->erase( removalProbe );
							if( mapXExpClsName->empty() ) {
								delete mapXExpClsName;
								mapXExpClsName = NULL;
								indexByXExpClsName->erase( searchXExpClsName );
							}
						}
					}
				}
			}

			if( indexByXExpKeyName != NULL ) {
				cfcore::CFGenKbGenFileByXExpKeyNameKey keyXExpKeyName;
				if( obj->isOptionalExpansionKeyNameTenantIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameTenantIdValue( obj->getOptionalExpansionKeyNameTenantIdValue() );
				}
				if( obj->isOptionalExpansionKeyNameGelCacheIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelCacheIdValue( obj->getOptionalExpansionKeyNameGelCacheIdValue() );
				}
				if( obj->isOptionalExpansionKeyNameGelIdNull() ) {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdNull();
				}
				else {
					keyXExpKeyName.setOptionalExpansionKeyNameGelIdValue( obj->getOptionalExpansionKeyNameGelIdValue() );
				}
				auto searchXExpKeyName = indexByXExpKeyName->find( keyXExpKeyName );
				if( searchXExpKeyName != indexByXExpKeyName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpKeyName = searchXExpKeyName->second;
					if( mapXExpKeyName != NULL ) {
						auto removalProbe = mapXExpKeyName->find( *(obj->getPKey()) );
						if( removalProbe != mapXExpKeyName->end() ) {
							mapXExpKeyName->erase( removalProbe );
							if( mapXExpKeyName->empty() ) {
								delete mapXExpKeyName;
								mapXExpKeyName = NULL;
								indexByXExpKeyName->erase( searchXExpKeyName );
							}
						}
					}
				}
			}

			if( indexByXExpFileName != NULL ) {
				cfcore::CFGenKbGenFileByXExpFileNameKey keyXExpFileName;
				if( obj->isOptionalExpansionFileNameTenantIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameTenantIdValue( obj->getOptionalExpansionFileNameTenantIdValue() );
				}
				if( obj->isOptionalExpansionFileNameGelCacheIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelCacheIdValue( obj->getOptionalExpansionFileNameGelCacheIdValue() );
				}
				if( obj->isOptionalExpansionFileNameGelIdNull() ) {
					keyXExpFileName.setOptionalExpansionFileNameGelIdNull();
				}
				else {
					keyXExpFileName.setOptionalExpansionFileNameGelIdValue( obj->getOptionalExpansionFileNameGelIdValue() );
				}
				auto searchXExpFileName = indexByXExpFileName->find( keyXExpFileName );
				if( searchXExpFileName != indexByXExpFileName->end() ) {
					std::map<cfcore::CFGenKbGenItemPKey, cfcore::ICFGenKbGenFileObj*>* mapXExpFileName = searchXExpFileName->second;
					if( mapXExpFileName != NULL ) {
						auto removalProbe = mapXExpFileName->find( *(obj->getPKey()) );
						if( removalProbe != mapXExpFileName->end() ) {
							mapXExpFileName->erase( removalProbe );
							if( mapXExpFileName->empty() ) {
								delete mapXExpFileName;
								mapXExpFileName = NULL;
								indexByXExpFileName->erase( searchXExpFileName );
							}
						}
					}
				}
			}

			members->erase( searchMembers );
		}
			dynamic_cast<cfcore::CFGenKbGenRuleTableObj*>( schema->getGenRuleTableObj() )->reallyDetachFromIndexesGenRule( Obj );
	}


}
