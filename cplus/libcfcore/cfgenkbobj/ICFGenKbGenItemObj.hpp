#pragma once

// Description: C++18 Object interface for CFGenKb GenItem.

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
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

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
	class ICFGenKbGenItemEditObj;
}

#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>

namespace cfcore {

	class ICFGenKbGenItemObj
	: public virtual cflib::ICFLibAnyObj
	{
	public:
		ICFGenKbGenItemObj();
		virtual ~ICFGenKbGenItemObj();
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
		virtual cfcore::ICFGenKbGenItemObj* realize() = 0;

		virtual cfcore::ICFGenKbGenItemObj* read( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGenItemEditObj* beginEdit() = 0;

		virtual void endEdit() = 0;

		virtual cfcore::ICFGenKbGenItemEditObj* getEdit() = 0;

		virtual cfcore::ICFGenKbGenItemEditObj* getGenItemEdit() = 0;

		virtual cfcore::ICFGenKbGenItemTableObj* getGenItemTable() = 0;

		virtual cfcore::ICFGenKbSchemaObj* getSchema() = 0;

		virtual cfcore::CFGenKbGenItemBuff* getBuff() = 0;
		virtual void setBuff( cfcore::CFGenKbGenItemBuff* value ) = 0;

		inline cfcore::CFGenKbGenItemBuff* getGenItemBuff() {
			return( static_cast<cfcore::CFGenKbGenItemBuff*>( getBuff() ) );
		};

		inline cfcore::CFGenKbGenItemBuff* getGenItemEditBuff() {
			return( dynamic_cast<cfcore::CFGenKbGenItemBuff*>( getBuff() ) );
		};

		virtual cfcore::CFGenKbGenItemPKey* getPKey() = 0;
		virtual void setPKey( cfcore::CFGenKbGenItemPKey* value ) = 0;

		virtual bool getIsNew() = 0;
		virtual void setIsNew( bool value ) = 0;

		virtual const int64_t getRequiredTenantId() = 0;
		virtual const int64_t* getRequiredTenantIdReference() = 0;

		virtual const int64_t getRequiredCartridgeId() = 0;
		virtual const int64_t* getRequiredCartridgeIdReference() = 0;

		virtual const int64_t getRequiredItemId() = 0;
		virtual const int64_t* getRequiredItemIdReference() = 0;

		virtual const int16_t getRequiredRuleTypeId() = 0;
		virtual const int16_t* getRequiredRuleTypeIdReference() = 0;

		virtual const std::string& getRequiredName() = 0;
		virtual const std::string* getRequiredNameReference() = 0;

		virtual const int16_t getRequiredToolSetId() = 0;
		virtual const int16_t* getRequiredToolSetIdReference() = 0;

		virtual bool isOptionalScopeDefIdNull() = 0;
		virtual const int16_t getOptionalScopeDefIdValue() = 0;
		virtual const int16_t* getOptionalScopeDefIdReference() = 0;

		virtual const int16_t getRequiredGenDefId() = 0;
		virtual const int16_t* getRequiredGenDefIdReference() = 0;

		virtual bool isOptionalGelExecutableTenantIdNull() = 0;
		virtual const int64_t getOptionalGelExecutableTenantIdValue() = 0;
		virtual const int64_t* getOptionalGelExecutableTenantIdReference() = 0;

		virtual bool isOptionalGelExecutableGelCacheIdNull() = 0;
		virtual const int64_t getOptionalGelExecutableGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalGelExecutableGelCacheIdReference() = 0;

		virtual bool isOptionalGelExecutableIdNull() = 0;
		virtual const int64_t getOptionalGelExecutableIdValue() = 0;
		virtual const int64_t* getOptionalGelExecutableIdReference() = 0;

		virtual bool isOptionalProbeTenantIdNull() = 0;
		virtual const int64_t getOptionalProbeTenantIdValue() = 0;
		virtual const int64_t* getOptionalProbeTenantIdReference() = 0;

		virtual bool isOptionalProbeCartridgeIdNull() = 0;
		virtual const int64_t getOptionalProbeCartridgeIdValue() = 0;
		virtual const int64_t* getOptionalProbeCartridgeIdReference() = 0;

		virtual bool isOptionalProbeGenItemIdNull() = 0;
		virtual const int64_t getOptionalProbeGenItemIdValue() = 0;
		virtual const int64_t* getOptionalProbeGenItemIdReference() = 0;

		virtual cfcore::ICFGenKbTenantObj* getRequiredOwnerTenant( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbRuleCartObj* getRequiredContainerCartridge( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbRuleTypeObj* getRequiredLookupRuleType( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbToolSetObj* getRequiredLookupToolSet( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbDefClassObj* getOptionalLookupScopeDef( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbDefClassObj* getRequiredLookupGenDef( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsGelExec( bool forceRead = false ) = 0;

		virtual cfcore::ICFGenKbGenItemObj* getOptionalLookupProbe( bool forceRead = false ) = 0;

		virtual void copyPKeyToBuff() = 0;

		virtual void copyBuffToPKey() = 0;

	};
}
