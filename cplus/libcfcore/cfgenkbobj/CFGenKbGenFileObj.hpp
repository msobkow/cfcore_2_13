#pragma once

// Description: C++18 base object instance specification for CFGenKb GenFile.

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
#include <cfgenkb/ICFGenKbPublic.hpp>

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

#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbGenFileObj.hpp>
#include <cfgenkbobj/ICFGenKbSchemaObj.hpp>

namespace cfcore {
	class MssCFEngine;
	class MssCFGenContext;
	class MssCFGelCompiler;
	class MssCFGenFileObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;
	class MssCFGenBindObj;
	class MssCFGenReferenceObj;
	class MssCFGenIteratorObj;
}


namespace cfcore {

	class CFGenKbGenFileObj
	: public CFGenKbGenRuleObj,
	  public virtual ICFGenKbGenFileObj
	{
	protected:
	public:
		static const std::string CLASS_NAME;
		static const classcode_t CLASS_CODE;

		virtual bool isOptionalGenerateOnceNull();
		virtual const std::string& getOptionalGenerateOnceValue();
		virtual const std::string* getOptionalGenerateOnceReference();

		virtual bool isOptionalSourceBundleNull();
		virtual const std::string& getOptionalSourceBundleValue();
		virtual const std::string* getOptionalSourceBundleReference();

		virtual bool isOptionalSourceBundleTenantIdNull();
		virtual const int64_t getOptionalSourceBundleTenantIdValue();
		virtual const int64_t* getOptionalSourceBundleTenantIdReference();

		virtual bool isOptionalSourceBundleGelCacheIdNull();
		virtual const int64_t getOptionalSourceBundleGelCacheIdValue();
		virtual const int64_t* getOptionalSourceBundleGelCacheIdReference();

		virtual bool isOptionalSourceBundleGelIdNull();
		virtual const int64_t getOptionalSourceBundleGelIdValue();
		virtual const int64_t* getOptionalSourceBundleGelIdReference();

		virtual bool isOptionalModuleNameNull();
		virtual const std::string& getOptionalModuleNameValue();
		virtual const std::string* getOptionalModuleNameReference();

		virtual bool isOptionalModuleNameTenantIdNull();
		virtual const int64_t getOptionalModuleNameTenantIdValue();
		virtual const int64_t* getOptionalModuleNameTenantIdReference();

		virtual bool isOptionalModuleNameGelCacheIdNull();
		virtual const int64_t getOptionalModuleNameGelCacheIdValue();
		virtual const int64_t* getOptionalModuleNameGelCacheIdReference();

		virtual bool isOptionalModuleNameGelIdNull();
		virtual const int64_t getOptionalModuleNameGelIdValue();
		virtual const int64_t* getOptionalModuleNameGelIdReference();

		virtual bool isOptionalBasePackageNameNull();
		virtual const std::string& getOptionalBasePackageNameValue();
		virtual const std::string* getOptionalBasePackageNameReference();

		virtual bool isOptionalBasePackageTenantIdNull();
		virtual const int64_t getOptionalBasePackageTenantIdValue();
		virtual const int64_t* getOptionalBasePackageTenantIdReference();

		virtual bool isOptionalBasePackageGelCacheIdNull();
		virtual const int64_t getOptionalBasePackageGelCacheIdValue();
		virtual const int64_t* getOptionalBasePackageGelCacheIdReference();

		virtual bool isOptionalBasePackageGelIdNull();
		virtual const int64_t getOptionalBasePackageGelIdValue();
		virtual const int64_t* getOptionalBasePackageGelIdReference();

		virtual bool isOptionalSubPackageNameNull();
		virtual const std::string& getOptionalSubPackageNameValue();
		virtual const std::string* getOptionalSubPackageNameReference();

		virtual bool isOptionalSubPackageTenantIdNull();
		virtual const int64_t getOptionalSubPackageTenantIdValue();
		virtual const int64_t* getOptionalSubPackageTenantIdReference();

		virtual bool isOptionalSubPackageGelCacheIdNull();
		virtual const int64_t getOptionalSubPackageGelCacheIdValue();
		virtual const int64_t* getOptionalSubPackageGelCacheIdReference();

		virtual bool isOptionalSubPackageGelIdNull();
		virtual const int64_t getOptionalSubPackageGelIdValue();
		virtual const int64_t* getOptionalSubPackageGelIdReference();

		virtual bool isOptionalExpansionClassNameNull();
		virtual const std::string& getOptionalExpansionClassNameValue();
		virtual const std::string* getOptionalExpansionClassNameReference();

		virtual bool isOptionalExpansionClassNameTenantIdNull();
		virtual const int64_t getOptionalExpansionClassNameTenantIdValue();
		virtual const int64_t* getOptionalExpansionClassNameTenantIdReference();

		virtual bool isOptionalExpansionClassNameGelCacheIdNull();
		virtual const int64_t getOptionalExpansionClassNameGelCacheIdValue();
		virtual const int64_t* getOptionalExpansionClassNameGelCacheIdReference();

		virtual bool isOptionalExpansionClassNameGelIdNull();
		virtual const int64_t getOptionalExpansionClassNameGelIdValue();
		virtual const int64_t* getOptionalExpansionClassNameGelIdReference();

		virtual bool isOptionalExpansionKeyNameNull();
		virtual const std::string& getOptionalExpansionKeyNameValue();
		virtual const std::string* getOptionalExpansionKeyNameReference();

		virtual bool isOptionalExpansionKeyNameTenantIdNull();
		virtual const int64_t getOptionalExpansionKeyNameTenantIdValue();
		virtual const int64_t* getOptionalExpansionKeyNameTenantIdReference();

		virtual bool isOptionalExpansionKeyNameGelCacheIdNull();
		virtual const int64_t getOptionalExpansionKeyNameGelCacheIdValue();
		virtual const int64_t* getOptionalExpansionKeyNameGelCacheIdReference();

		virtual bool isOptionalExpansionKeyNameGelIdNull();
		virtual const int64_t getOptionalExpansionKeyNameGelIdValue();
		virtual const int64_t* getOptionalExpansionKeyNameGelIdReference();

		virtual bool isOptionalExpansionFileNameNull();
		virtual const std::string& getOptionalExpansionFileNameValue();
		virtual const std::string* getOptionalExpansionFileNameReference();

		virtual bool isOptionalExpansionFileNameTenantIdNull();
		virtual const int64_t getOptionalExpansionFileNameTenantIdValue();
		virtual const int64_t* getOptionalExpansionFileNameTenantIdReference();

		virtual bool isOptionalExpansionFileNameGelCacheIdNull();
		virtual const int64_t getOptionalExpansionFileNameGelCacheIdValue();
		virtual const int64_t* getOptionalExpansionFileNameGelCacheIdReference();

		virtual bool isOptionalExpansionFileNameGelIdNull();
		virtual const int64_t getOptionalExpansionFileNameGelIdValue();
		virtual const int64_t* getOptionalExpansionFileNameGelIdReference();

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsSrcBundleGel( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsBasePackageGel( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsModuleNameGel( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsSubPackageGel( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpClassGel( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpKeyNameGel( bool forceRead = false );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpFileNameGel( bool forceRead = false );

		CFGenKbGenFileObj();
		CFGenKbGenFileObj( cfcore::ICFGenKbSchemaObj* argSchema );
		virtual const std::string& getClassName() const;
		virtual ~CFGenKbGenFileObj();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t value ) const;

		virtual std::string toString();
		virtual cfcore::CFGenKbGenItemBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGenItemBuff* value );

		inline cfcore::CFGenKbGenFileBuff* getGenFileBuff() {
			if( buff == NULL ) {
				getBuff();
			}
			return( static_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGenFileBuff* getGenFileEditBuff() {
			if( buff == NULL ) {
				getBuff();
			}
			return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		};

		virtual std::string getObjName();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual cfcore::ICFGenKbGenItemObj* realize();

		virtual cfcore::ICFGenKbGenItemObj* read( bool forceRead = false );

		virtual cfcore::ICFGenKbGenItemEditObj* beginEdit();

		virtual cfcore::ICFGenKbGenFileEditObj* getGenFileEdit();


		static ICFGenKbGelExecutableObj* getSrcBundleBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );
		static ICFGenKbGelExecutableObj* getBasePackageBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );
		static ICFGenKbGelExecutableObj* getModuleNameBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );
		static ICFGenKbGelExecutableObj* getSubPackageBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );
		static ICFGenKbGelExecutableObj* getExpClassBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );
		static ICFGenKbGelExecutableObj* getExpKeyNameBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );
		static ICFGenKbGelExecutableObj* getExpFileNameBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile );	};
}
