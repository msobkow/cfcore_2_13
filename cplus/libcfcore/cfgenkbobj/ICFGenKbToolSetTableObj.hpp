#pragma once

// Description: C++18 Table Object interface for CFGenKb.

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

namespace cfcore {
	class ICFGenKbSchemaObj;
	class ICFGenKbClusterObj;
	class ICFGenKbClusterEditObj;
	class ICFGenKbClusterTableObj;
	class ICFGenKbDefClassObj;
	class ICFGenKbDefClassEditObj;
	class ICFGenKbDefClassTableObj;
	class ICFGenKbGelBoilerplateObj;
	class ICFGenKbGelBoilerplateEditObj;
	class ICFGenKbGelBoilerplateTableObj;
	class ICFGenKbGelBuiltinObj;
	class ICFGenKbGelBuiltinEditObj;
	class ICFGenKbGelBuiltinTableObj;
	class ICFGenKbGelCacheObj;
	class ICFGenKbGelCacheEditObj;
	class ICFGenKbGelCacheTableObj;
	class ICFGenKbGelCallObj;
	class ICFGenKbGelCallEditObj;
	class ICFGenKbGelCallTableObj;
	class ICFGenKbGelConstrainObj;
	class ICFGenKbGelConstrainEditObj;
	class ICFGenKbGelConstrainTableObj;
	class ICFGenKbGelCounterObj;
	class ICFGenKbGelCounterEditObj;
	class ICFGenKbGelCounterTableObj;
	class ICFGenKbGelErrorObj;
	class ICFGenKbGelErrorEditObj;
	class ICFGenKbGelErrorTableObj;
	class ICFGenKbGelExecutableObj;
	class ICFGenKbGelExecutableEditObj;
	class ICFGenKbGelExecutableTableObj;
	class ICFGenKbGelExpansionObj;
	class ICFGenKbGelExpansionEditObj;
	class ICFGenKbGelExpansionTableObj;
	class ICFGenKbGelInstructionObj;
	class ICFGenKbGelInstructionEditObj;
	class ICFGenKbGelInstructionTableObj;
	class ICFGenKbGelIteratorObj;
	class ICFGenKbGelIteratorEditObj;
	class ICFGenKbGelIteratorTableObj;
	class ICFGenKbGelModifierObj;
	class ICFGenKbGelModifierEditObj;
	class ICFGenKbGelModifierTableObj;
	class ICFGenKbGelPopObj;
	class ICFGenKbGelPopEditObj;
	class ICFGenKbGelPopTableObj;
	class ICFGenKbGelPrefixLineObj;
	class ICFGenKbGelPrefixLineEditObj;
	class ICFGenKbGelPrefixLineTableObj;
	class ICFGenKbGelReferenceObj;
	class ICFGenKbGelReferenceEditObj;
	class ICFGenKbGelReferenceTableObj;
	class ICFGenKbGelSequenceObj;
	class ICFGenKbGelSequenceEditObj;
	class ICFGenKbGelSequenceTableObj;
	class ICFGenKbGelSpreadObj;
	class ICFGenKbGelSpreadEditObj;
	class ICFGenKbGelSpreadTableObj;
	class ICFGenKbGelSwitchObj;
	class ICFGenKbGelSwitchEditObj;
	class ICFGenKbGelSwitchTableObj;
	class ICFGenKbGelSwitchLimbObj;
	class ICFGenKbGelSwitchLimbEditObj;
	class ICFGenKbGelSwitchLimbTableObj;
	class ICFGenKbGenBindObj;
	class ICFGenKbGenBindEditObj;
	class ICFGenKbGenBindTableObj;
	class ICFGenKbGenFileObj;
	class ICFGenKbGenFileEditObj;
	class ICFGenKbGenFileTableObj;
	class ICFGenKbGenItemObj;
	class ICFGenKbGenItemEditObj;
	class ICFGenKbGenItemTableObj;
	class ICFGenKbGenIteratorObj;
	class ICFGenKbGenIteratorEditObj;
	class ICFGenKbGenIteratorTableObj;
	class ICFGenKbGenReferenceObj;
	class ICFGenKbGenReferenceEditObj;
	class ICFGenKbGenReferenceTableObj;
	class ICFGenKbGenRuleObj;
	class ICFGenKbGenRuleEditObj;
	class ICFGenKbGenRuleTableObj;
	class ICFGenKbGenTruncObj;
	class ICFGenKbGenTruncEditObj;
	class ICFGenKbGenTruncTableObj;
	class ICFGenKbHostNodeObj;
	class ICFGenKbHostNodeEditObj;
	class ICFGenKbHostNodeTableObj;
	class ICFGenKbRuleCartObj;
	class ICFGenKbRuleCartEditObj;
	class ICFGenKbRuleCartTableObj;
	class ICFGenKbRuleTypeObj;
	class ICFGenKbRuleTypeEditObj;
	class ICFGenKbRuleTypeTableObj;
	class ICFGenKbSecAppObj;
	class ICFGenKbSecAppEditObj;
	class ICFGenKbSecAppTableObj;
	class ICFGenKbSecDeviceObj;
	class ICFGenKbSecDeviceEditObj;
	class ICFGenKbSecDeviceTableObj;
	class ICFGenKbSecFormObj;
	class ICFGenKbSecFormEditObj;
	class ICFGenKbSecFormTableObj;
	class ICFGenKbSecGroupObj;
	class ICFGenKbSecGroupEditObj;
	class ICFGenKbSecGroupTableObj;
	class ICFGenKbSecGroupFormObj;
	class ICFGenKbSecGroupFormEditObj;
	class ICFGenKbSecGroupFormTableObj;
	class ICFGenKbSecGrpIncObj;
	class ICFGenKbSecGrpIncEditObj;
	class ICFGenKbSecGrpIncTableObj;
	class ICFGenKbSecGrpMembObj;
	class ICFGenKbSecGrpMembEditObj;
	class ICFGenKbSecGrpMembTableObj;
	class ICFGenKbSecSessionObj;
	class ICFGenKbSecSessionEditObj;
	class ICFGenKbSecSessionTableObj;
	class ICFGenKbSecUserObj;
	class ICFGenKbSecUserEditObj;
	class ICFGenKbSecUserTableObj;
	class ICFGenKbSysClusterObj;
	class ICFGenKbSysClusterEditObj;
	class ICFGenKbSysClusterTableObj;
	class ICFGenKbTSecGroupObj;
	class ICFGenKbTSecGroupEditObj;
	class ICFGenKbTSecGroupTableObj;
	class ICFGenKbTSecGrpIncObj;
	class ICFGenKbTSecGrpIncEditObj;
	class ICFGenKbTSecGrpIncTableObj;
	class ICFGenKbTSecGrpMembObj;
	class ICFGenKbTSecGrpMembEditObj;
	class ICFGenKbTSecGrpMembTableObj;
	class ICFGenKbTenantObj;
	class ICFGenKbTenantEditObj;
	class ICFGenKbTenantTableObj;
	class ICFGenKbToolObj;
	class ICFGenKbToolEditObj;
	class ICFGenKbToolTableObj;
	class ICFGenKbToolSetObj;
	class ICFGenKbToolSetEditObj;
	class ICFGenKbToolSetTableObj;
}

#include <cfgenkbobj/ICFGenKbToolSetObj.hpp>
#include <cfgenkbobj/ICFGenKbToolSetEditObj.hpp>

namespace cfcore {

	class ICFGenKbToolSetTableObj
	{
	public:
		ICFGenKbToolSetTableObj();
		virtual ~ICFGenKbToolSetTableObj();
		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;
		virtual void setSchema( cfcore::ICFGenKbSchemaObj* value ) = 0;

		virtual void minimizeMemory() = 0;

		virtual const std::string getTableName() = 0;
		virtual const std::string getTableDbName() = 0;
		virtual const classcode_t* getObjQualifyingClassCode() = 0;

		virtual cfcore::ICFGenKbToolSetObj* newInstance() = 0;

		virtual cfcore::ICFGenKbToolSetEditObj* newEditInstance( cfcore::ICFGenKbToolSetObj* orig ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* realizeToolSet( cfcore::ICFGenKbToolSetObj* Obj ) = 0;

		virtual void deepDisposeByIdIdx( const int16_t Id ) = 0;
		virtual void deepDisposeByNameIdx( const std::string& Name ) = 0;
		virtual void deepDisposeByTool0Idx( const int16_t ToolId0 ) = 0;
		virtual void deepDisposeByTool1Idx( const int16_t* ToolId1 ) = 0;
		virtual void deepDisposeByTool2Idx( const int16_t* ToolId2 ) = 0;
		virtual void deepDisposeByTool3Idx( const int16_t* ToolId3 ) = 0;
		virtual void deepDisposeByTool4Idx( const int16_t* ToolId4 ) = 0;
		virtual void deepDisposeByTool5Idx( const int16_t* ToolId5 ) = 0;
		virtual void deepDisposeByTool6Idx( const int16_t* ToolId6 ) = 0;
		virtual void deepDisposeByTool7Idx( const int16_t* ToolId7 ) = 0;
		virtual void reallyDeepDisposeToolSet( cfcore::ICFGenKbToolSetObj* Obj ) = 0;
		virtual cfcore::ICFGenKbToolSetObj* createToolSet( cfcore::ICFGenKbToolSetEditObj* Obj ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readToolSet( cfcore::CFGenKbToolSetPKey* pkey,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* lockToolSet( cfcore::CFGenKbToolSetPKey* pkey ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readAllToolSet( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readToolSetByIdIdx( const int16_t Id,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readToolSetByNameIdx(const std::string& Name,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool0Idx( const int16_t ToolId0,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool1Idx( const int16_t* ToolId1,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool2Idx( const int16_t* ToolId2,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool3Idx( const int16_t* ToolId3,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool4Idx( const int16_t* ToolId4,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool5Idx( const int16_t* ToolId5,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool6Idx( const int16_t* ToolId6,
			bool forceRead = false ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readToolSetByTool7Idx( const int16_t* ToolId7,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readCachedToolSet( cfcore::CFGenKbToolSetPKey* pkey ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readCachedToolSetByIdIdx(const int16_t Id ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readCachedToolSetByNameIdx(const std::string& Name ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool0Idx( const int16_t ToolId0 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool1Idx( const int16_t* ToolId1 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool2Idx( const int16_t* ToolId2 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool3Idx( const int16_t* ToolId3 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool4Idx( const int16_t* ToolId4 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool5Idx( const int16_t* ToolId5 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool6Idx( const int16_t* ToolId6 ) = 0;

		virtual std::vector<cfcore::ICFGenKbToolSetObj*> readCachedToolSetByTool7Idx( const int16_t* ToolId7 ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readToolSetByLookupNameIdx(const std::string& Name,
			bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* readCachedToolSetByLookupNameIdx(const std::string& Name ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* updateToolSet( cfcore::ICFGenKbToolSetEditObj* Obj ) = 0;

		virtual void deleteToolSet( cfcore::ICFGenKbToolSetEditObj* Obj ) = 0;

		virtual void deleteToolSetByIdIdx( const int16_t Id ) = 0;

		virtual void deleteToolSetByNameIdx(const std::string& Name ) = 0;

		virtual void deleteToolSetByTool0Idx( const int16_t ToolId0 ) = 0;

		virtual void deleteToolSetByTool1Idx( const int16_t* ToolId1 ) = 0;

		virtual void deleteToolSetByTool2Idx( const int16_t* ToolId2 ) = 0;

		virtual void deleteToolSetByTool3Idx( const int16_t* ToolId3 ) = 0;

		virtual void deleteToolSetByTool4Idx( const int16_t* ToolId4 ) = 0;

		virtual void deleteToolSetByTool5Idx( const int16_t* ToolId5 ) = 0;

		virtual void deleteToolSetByTool6Idx( const int16_t* ToolId6 ) = 0;

		virtual void deleteToolSetByTool7Idx( const int16_t* ToolId7 ) = 0;

		virtual void reallyDetachFromIndexesToolSet( cfcore::ICFGenKbToolSetObj* Obj ) = 0;

	};
}
