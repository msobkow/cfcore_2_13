#pragma once

// Description: C++18 Object interface for CFGenKb ToolSet.

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
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

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
	class ICFGenKbToolSetEditObj;
}

#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>

namespace cfcore {

	class ICFGenKbToolSetObj
	: public virtual cflib::ICFLibAnyObj
	{
	public:
		ICFGenKbToolSetObj();
		virtual ~ICFGenKbToolSetObj();
		virtual const std::string& getClassName() const = 0;
		virtual const classcode_t getClassCode() const = 0;
		virtual bool implementsClassCode( const classcode_t value ) const = 0;
		virtual const std::string getGenDefName() = 0;
		virtual cflib::ICFLibAnyObj* getObjScope() = 0;
		virtual std::string getObjName() = 0;
		virtual std::string getObjQualifiedName() = 0;
		virtual std::string getObjFullName() = 0;
		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClassCode, const std::string& objName ) = 0;
		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName ) = 0;
		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClassCode ) = 0;
		virtual std::string toString() = 0;
		virtual int32_t getRequiredRevision() const = 0;
		virtual cfcore::ICFGenKbToolSetObj* realize() = 0;

		virtual cfcore::ICFGenKbToolSetObj* read( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetEditObj* beginEdit() = 0;

		virtual void endEdit() = 0;

		virtual cfcore::ICFGenKbToolSetEditObj* getEdit() = 0;

		virtual cfcore::ICFGenKbToolSetEditObj* getToolSetEdit() = 0;

		virtual cfcore::ICFGenKbToolSetTableObj* getToolSetTable() = 0;

		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;

		virtual cfcore::CFGenKbToolSetBuff* getBuff() = 0;
		virtual void setBuff( cfcore::CFGenKbToolSetBuff* value ) = 0;

		inline cfcore::CFGenKbToolSetBuff* getToolSetBuff() {
			return( static_cast<cfcore::CFGenKbToolSetBuff*>( getBuff() ) );
		};

		inline cfcore::CFGenKbToolSetBuff* getToolSetEditBuff() {
			return( dynamic_cast<cfcore::CFGenKbToolSetBuff*>( getBuff() ) );
		};

		virtual cfcore::CFGenKbToolSetPKey* getPKey() = 0;
		virtual void setPKey( cfcore::CFGenKbToolSetPKey* value ) = 0;

		virtual bool getIsNew() = 0;
		virtual void setIsNew( bool value ) = 0;

		virtual const int16_t getRequiredId() = 0;
		virtual const int16_t* getRequiredIdReference() = 0;

		virtual const std::string& getRequiredName() = 0;
		virtual const std::string* getRequiredNameReference() = 0;

		virtual bool isOptionalDescrNull() = 0;
		virtual const std::string& getOptionalDescrValue() = 0;
		virtual const std::string* getOptionalDescrReference() = 0;

		virtual bool isOptionalRevisionStringNull() = 0;
		virtual const std::string& getOptionalRevisionStringValue() = 0;
		virtual const std::string* getOptionalRevisionStringReference() = 0;

		virtual const bool getRequiredIsSupported() = 0;
		virtual const bool* getRequiredIsSupportedReference() = 0;

		virtual const bool getRequiredGenerate() = 0;
		virtual const bool* getRequiredGenerateReference() = 0;

		virtual const int16_t getRequiredToolId0() = 0;
		virtual const int16_t* getRequiredToolId0Reference() = 0;

		virtual bool isOptionalToolId1Null() = 0;
		virtual const int16_t getOptionalToolId1Value() = 0;
		virtual const int16_t* getOptionalToolId1Reference() = 0;

		virtual bool isOptionalToolId2Null() = 0;
		virtual const int16_t getOptionalToolId2Value() = 0;
		virtual const int16_t* getOptionalToolId2Reference() = 0;

		virtual bool isOptionalToolId3Null() = 0;
		virtual const int16_t getOptionalToolId3Value() = 0;
		virtual const int16_t* getOptionalToolId3Reference() = 0;

		virtual bool isOptionalToolId4Null() = 0;
		virtual const int16_t getOptionalToolId4Value() = 0;
		virtual const int16_t* getOptionalToolId4Reference() = 0;

		virtual bool isOptionalToolId5Null() = 0;
		virtual const int16_t getOptionalToolId5Value() = 0;
		virtual const int16_t* getOptionalToolId5Reference() = 0;

		virtual bool isOptionalToolId6Null() = 0;
		virtual const int16_t getOptionalToolId6Value() = 0;
		virtual const int16_t* getOptionalToolId6Reference() = 0;

		virtual bool isOptionalToolId7Null() = 0;
		virtual const int16_t getOptionalToolId7Value() = 0;
		virtual const int16_t* getOptionalToolId7Reference() = 0;

		virtual cfcore::ICFGenKbToolObj* getRequiredLookupTool0( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool1( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool2( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool3( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool4( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool5( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool6( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolObj* getOptionalLookupTool7( bool forceRead = false ) = 0;

		virtual void copyPKeyToBuff() = 0;

		virtual void copyBuffToPKey() = 0;

	};
}
