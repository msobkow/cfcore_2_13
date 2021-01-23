#pragma once

// Description: C++18 Instance Edit Object interface for CFGenKb GenFile.

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
#include <cfgenkb/CFGenKbGenFileBuff.hpp>

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

#include <cfgenkbobj/ICFGenKbSecUserObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileObj.hpp>

namespace cfcore {

	class ICFGenKbGenFileEditObj
	: public virtual cfcore::ICFGenKbGenRuleEditObj,
	  public virtual cfcore::ICFGenKbGenFileObj
	{
	public:
		static const std::string CLASS_NAME;
		ICFGenKbGenFileEditObj();
		virtual ~ICFGenKbGenFileEditObj();
		virtual const std::string& getClassName() const = 0;

		inline cfcore::CFGenKbGenFileBuff* getGenFileBuff() {
			return( static_cast<cfcore::CFGenKbGenFileBuff*>( getBuff() ) );
		};

		inline cfcore::CFGenKbGenFileBuff* getGenFileEditBuff() {
			return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( getBuff() ) );
		};

		virtual cfcore::ICFGenKbGenFileObj* getOrigAsGenFile() = 0;

		virtual cfcore::ICFGenKbGenItemEditObj* beginEdit() = 0;

		virtual bool isOptionalGenerateOnceNull() = 0;
		virtual const std::string& getOptionalGenerateOnceValue() = 0;
		virtual const std::string* getOptionalGenerateOnceReference() = 0;
		virtual void setOptionalGenerateOnceNull() = 0;
		virtual void setOptionalGenerateOnceValue( const std::string& value ) = 0;

		virtual bool isOptionalSourceBundleNull() = 0;
		virtual const std::string& getOptionalSourceBundleValue() = 0;
		virtual const std::string* getOptionalSourceBundleReference() = 0;
		virtual void setOptionalSourceBundleNull() = 0;
		virtual void setOptionalSourceBundleValue( const std::string& value ) = 0;

		virtual bool isOptionalSourceBundleTenantIdNull() = 0;
		virtual const int64_t getOptionalSourceBundleTenantIdValue() = 0;
		virtual const int64_t* getOptionalSourceBundleTenantIdReference() = 0;
		virtual void setOptionalSourceBundleTenantIdNull() = 0;
		virtual void setOptionalSourceBundleTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalSourceBundleGelCacheIdNull() = 0;
		virtual const int64_t getOptionalSourceBundleGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalSourceBundleGelCacheIdReference() = 0;
		virtual void setOptionalSourceBundleGelCacheIdNull() = 0;
		virtual void setOptionalSourceBundleGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalSourceBundleGelIdNull() = 0;
		virtual const int64_t getOptionalSourceBundleGelIdValue() = 0;
		virtual const int64_t* getOptionalSourceBundleGelIdReference() = 0;
		virtual void setOptionalSourceBundleGelIdNull() = 0;
		virtual void setOptionalSourceBundleGelIdValue( const int64_t value ) = 0;

		virtual bool isOptionalModuleNameNull() = 0;
		virtual const std::string& getOptionalModuleNameValue() = 0;
		virtual const std::string* getOptionalModuleNameReference() = 0;
		virtual void setOptionalModuleNameNull() = 0;
		virtual void setOptionalModuleNameValue( const std::string& value ) = 0;

		virtual bool isOptionalModuleNameTenantIdNull() = 0;
		virtual const int64_t getOptionalModuleNameTenantIdValue() = 0;
		virtual const int64_t* getOptionalModuleNameTenantIdReference() = 0;
		virtual void setOptionalModuleNameTenantIdNull() = 0;
		virtual void setOptionalModuleNameTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalModuleNameGelCacheIdNull() = 0;
		virtual const int64_t getOptionalModuleNameGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalModuleNameGelCacheIdReference() = 0;
		virtual void setOptionalModuleNameGelCacheIdNull() = 0;
		virtual void setOptionalModuleNameGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalModuleNameGelIdNull() = 0;
		virtual const int64_t getOptionalModuleNameGelIdValue() = 0;
		virtual const int64_t* getOptionalModuleNameGelIdReference() = 0;
		virtual void setOptionalModuleNameGelIdNull() = 0;
		virtual void setOptionalModuleNameGelIdValue( const int64_t value ) = 0;

		virtual bool isOptionalBasePackageNameNull() = 0;
		virtual const std::string& getOptionalBasePackageNameValue() = 0;
		virtual const std::string* getOptionalBasePackageNameReference() = 0;
		virtual void setOptionalBasePackageNameNull() = 0;
		virtual void setOptionalBasePackageNameValue( const std::string& value ) = 0;

		virtual bool isOptionalBasePackageTenantIdNull() = 0;
		virtual const int64_t getOptionalBasePackageTenantIdValue() = 0;
		virtual const int64_t* getOptionalBasePackageTenantIdReference() = 0;
		virtual void setOptionalBasePackageTenantIdNull() = 0;
		virtual void setOptionalBasePackageTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalBasePackageGelCacheIdNull() = 0;
		virtual const int64_t getOptionalBasePackageGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalBasePackageGelCacheIdReference() = 0;
		virtual void setOptionalBasePackageGelCacheIdNull() = 0;
		virtual void setOptionalBasePackageGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalBasePackageGelIdNull() = 0;
		virtual const int64_t getOptionalBasePackageGelIdValue() = 0;
		virtual const int64_t* getOptionalBasePackageGelIdReference() = 0;
		virtual void setOptionalBasePackageGelIdNull() = 0;
		virtual void setOptionalBasePackageGelIdValue( const int64_t value ) = 0;

		virtual bool isOptionalSubPackageNameNull() = 0;
		virtual const std::string& getOptionalSubPackageNameValue() = 0;
		virtual const std::string* getOptionalSubPackageNameReference() = 0;
		virtual void setOptionalSubPackageNameNull() = 0;
		virtual void setOptionalSubPackageNameValue( const std::string& value ) = 0;

		virtual bool isOptionalSubPackageTenantIdNull() = 0;
		virtual const int64_t getOptionalSubPackageTenantIdValue() = 0;
		virtual const int64_t* getOptionalSubPackageTenantIdReference() = 0;
		virtual void setOptionalSubPackageTenantIdNull() = 0;
		virtual void setOptionalSubPackageTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalSubPackageGelCacheIdNull() = 0;
		virtual const int64_t getOptionalSubPackageGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalSubPackageGelCacheIdReference() = 0;
		virtual void setOptionalSubPackageGelCacheIdNull() = 0;
		virtual void setOptionalSubPackageGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalSubPackageGelIdNull() = 0;
		virtual const int64_t getOptionalSubPackageGelIdValue() = 0;
		virtual const int64_t* getOptionalSubPackageGelIdReference() = 0;
		virtual void setOptionalSubPackageGelIdNull() = 0;
		virtual void setOptionalSubPackageGelIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionClassNameNull() = 0;
		virtual const std::string& getOptionalExpansionClassNameValue() = 0;
		virtual const std::string* getOptionalExpansionClassNameReference() = 0;
		virtual void setOptionalExpansionClassNameNull() = 0;
		virtual void setOptionalExpansionClassNameValue( const std::string& value ) = 0;

		virtual bool isOptionalExpansionClassNameTenantIdNull() = 0;
		virtual const int64_t getOptionalExpansionClassNameTenantIdValue() = 0;
		virtual const int64_t* getOptionalExpansionClassNameTenantIdReference() = 0;
		virtual void setOptionalExpansionClassNameTenantIdNull() = 0;
		virtual void setOptionalExpansionClassNameTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionClassNameGelCacheIdNull() = 0;
		virtual const int64_t getOptionalExpansionClassNameGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalExpansionClassNameGelCacheIdReference() = 0;
		virtual void setOptionalExpansionClassNameGelCacheIdNull() = 0;
		virtual void setOptionalExpansionClassNameGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionClassNameGelIdNull() = 0;
		virtual const int64_t getOptionalExpansionClassNameGelIdValue() = 0;
		virtual const int64_t* getOptionalExpansionClassNameGelIdReference() = 0;
		virtual void setOptionalExpansionClassNameGelIdNull() = 0;
		virtual void setOptionalExpansionClassNameGelIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionKeyNameNull() = 0;
		virtual const std::string& getOptionalExpansionKeyNameValue() = 0;
		virtual const std::string* getOptionalExpansionKeyNameReference() = 0;
		virtual void setOptionalExpansionKeyNameNull() = 0;
		virtual void setOptionalExpansionKeyNameValue( const std::string& value ) = 0;

		virtual bool isOptionalExpansionKeyNameTenantIdNull() = 0;
		virtual const int64_t getOptionalExpansionKeyNameTenantIdValue() = 0;
		virtual const int64_t* getOptionalExpansionKeyNameTenantIdReference() = 0;
		virtual void setOptionalExpansionKeyNameTenantIdNull() = 0;
		virtual void setOptionalExpansionKeyNameTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionKeyNameGelCacheIdNull() = 0;
		virtual const int64_t getOptionalExpansionKeyNameGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalExpansionKeyNameGelCacheIdReference() = 0;
		virtual void setOptionalExpansionKeyNameGelCacheIdNull() = 0;
		virtual void setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionKeyNameGelIdNull() = 0;
		virtual const int64_t getOptionalExpansionKeyNameGelIdValue() = 0;
		virtual const int64_t* getOptionalExpansionKeyNameGelIdReference() = 0;
		virtual void setOptionalExpansionKeyNameGelIdNull() = 0;
		virtual void setOptionalExpansionKeyNameGelIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionFileNameNull() = 0;
		virtual const std::string& getOptionalExpansionFileNameValue() = 0;
		virtual const std::string* getOptionalExpansionFileNameReference() = 0;
		virtual void setOptionalExpansionFileNameNull() = 0;
		virtual void setOptionalExpansionFileNameValue( const std::string& value ) = 0;

		virtual bool isOptionalExpansionFileNameTenantIdNull() = 0;
		virtual const int64_t getOptionalExpansionFileNameTenantIdValue() = 0;
		virtual const int64_t* getOptionalExpansionFileNameTenantIdReference() = 0;
		virtual void setOptionalExpansionFileNameTenantIdNull() = 0;
		virtual void setOptionalExpansionFileNameTenantIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionFileNameGelCacheIdNull() = 0;
		virtual const int64_t getOptionalExpansionFileNameGelCacheIdValue() = 0;
		virtual const int64_t* getOptionalExpansionFileNameGelCacheIdReference() = 0;
		virtual void setOptionalExpansionFileNameGelCacheIdNull() = 0;
		virtual void setOptionalExpansionFileNameGelCacheIdValue( const int64_t value ) = 0;

		virtual bool isOptionalExpansionFileNameGelIdNull() = 0;
		virtual const int64_t getOptionalExpansionFileNameGelIdValue() = 0;
		virtual const int64_t* getOptionalExpansionFileNameGelIdReference() = 0;
		virtual void setOptionalExpansionFileNameGelIdNull() = 0;
		virtual void setOptionalExpansionFileNameGelIdValue( const int64_t value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsSrcBundleGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsSrcBundleGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsBasePackageGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsBasePackageGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsModuleNameGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsModuleNameGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsSubPackageGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsSubPackageGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpClassGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsExpClassGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpKeyNameGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsExpKeyNameGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpFileNameGel( bool forceRead = false ) = 0;
		virtual void setOptionalComponentsExpFileNameGel( cfcore::ICFGenKbGelExecutableObj* value ) = 0;

	};
}
