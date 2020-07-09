#pragma once

// Description: C++18 specification for a GenFile buffer object.

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

#include <cfgenkb/CFGenKbGenRuleBuff.hpp>
#include <cfgenkb/ICFGenKbSchema.hpp>

namespace cfcore {

	class CFGenKbGenItemPKey;
	class CFGenKbGenFileByXSrcBundleKey;
	class CFGenKbGenFileByXModNameKey;
	class CFGenKbGenFileByXBasePkgKey;
	class CFGenKbGenFileByXSubPkgKey;
	class CFGenKbGenFileByXExpClsNameKey;
	class CFGenKbGenFileByXExpKeyNameKey;
	class CFGenKbGenFileByXExpFileNameKey;

	class CFGenKbGenFileBuff : public CFGenKbGenRuleBuff
	{
	public:
		static const std::string GENDEFNAME;
		static const classcode_t CLASS_CODE;
		static const std::string CLASS_NAME;
		static const std::string COLNAME_GENERATEONCE;
		static const std::string COLNAME_SOURCEBUNDLE;
		static const std::string COLNAME_SOURCEBUNDLETENANTID;
		static const std::string COLNAME_SOURCEBUNDLEGELCACHEID;
		static const std::string COLNAME_SOURCEBUNDLEGELID;
		static const std::string COLNAME_MODULENAME;
		static const std::string COLNAME_MODULENAMETENANTID;
		static const std::string COLNAME_MODULENAMEGELCACHEID;
		static const std::string COLNAME_MODULENAMEGELID;
		static const std::string COLNAME_BASEPACKAGENAME;
		static const std::string COLNAME_BASEPACKAGETENANTID;
		static const std::string COLNAME_BASEPACKAGEGELCACHEID;
		static const std::string COLNAME_BASEPACKAGEGELID;
		static const std::string COLNAME_SUBPACKAGENAME;
		static const std::string COLNAME_SUBPACKAGETENANTID;
		static const std::string COLNAME_SUBPACKAGEGELCACHEID;
		static const std::string COLNAME_SUBPACKAGEGELID;
		static const std::string COLNAME_EXPANSIONCLASSNAME;
		static const std::string COLNAME_EXPANSIONCLASSNAMETENANTID;
		static const std::string COLNAME_EXPANSIONCLASSNAMEGELCACHEID;
		static const std::string COLNAME_EXPANSIONCLASSNAMEGELID;
		static const std::string COLNAME_EXPANSIONKEYNAME;
		static const std::string COLNAME_EXPANSIONKEYNAMETENANTID;
		static const std::string COLNAME_EXPANSIONKEYNAMEGELCACHEID;
		static const std::string COLNAME_EXPANSIONKEYNAMEGELID;
		static const std::string COLNAME_EXPANSIONFILENAME;
		static const std::string COLNAME_EXPANSIONFILENAMETENANTID;
		static const std::string COLNAME_EXPANSIONFILENAMEGELCACHEID;
		static const std::string COLNAME_EXPANSIONFILENAMEGELID;
		static const int64_t TENANTID_INIT_VALUE;
		static const int64_t CARTRIDGEID_INIT_VALUE;
		static const int64_t ITEMID_INIT_VALUE;
		static const std::string GENERATEONCE_INIT_VALUE;
		static const std::string SOURCEBUNDLE_INIT_VALUE;
		static const int64_t SOURCEBUNDLETENANTID_INIT_VALUE;
		static const int64_t SOURCEBUNDLEGELCACHEID_INIT_VALUE;
		static const int64_t SOURCEBUNDLEGELID_INIT_VALUE;
		static const std::string MODULENAME_INIT_VALUE;
		static const int64_t MODULENAMETENANTID_INIT_VALUE;
		static const int64_t MODULENAMEGELCACHEID_INIT_VALUE;
		static const int64_t MODULENAMEGELID_INIT_VALUE;
		static const std::string BASEPACKAGENAME_INIT_VALUE;
		static const int64_t BASEPACKAGETENANTID_INIT_VALUE;
		static const int64_t BASEPACKAGEGELCACHEID_INIT_VALUE;
		static const int64_t BASEPACKAGEGELID_INIT_VALUE;
		static const std::string SUBPACKAGENAME_INIT_VALUE;
		static const int64_t SUBPACKAGETENANTID_INIT_VALUE;
		static const int64_t SUBPACKAGEGELCACHEID_INIT_VALUE;
		static const int64_t SUBPACKAGEGELID_INIT_VALUE;
		static const std::string EXPANSIONCLASSNAME_INIT_VALUE;
		static const int64_t EXPANSIONCLASSNAMETENANTID_INIT_VALUE;
		static const int64_t EXPANSIONCLASSNAMEGELCACHEID_INIT_VALUE;
		static const int64_t EXPANSIONCLASSNAMEGELID_INIT_VALUE;
		static const std::string EXPANSIONKEYNAME_INIT_VALUE;
		static const int64_t EXPANSIONKEYNAMETENANTID_INIT_VALUE;
		static const int64_t EXPANSIONKEYNAMEGELCACHEID_INIT_VALUE;
		static const int64_t EXPANSIONKEYNAMEGELID_INIT_VALUE;
		static const std::string EXPANSIONFILENAME_INIT_VALUE;
		static const int64_t EXPANSIONFILENAMETENANTID_INIT_VALUE;
		static const int64_t EXPANSIONFILENAMEGELCACHEID_INIT_VALUE;
		static const int64_t EXPANSIONFILENAMEGELID_INIT_VALUE;
		static const int64_t TENANTID_MIN_VALUE;
		static const int64_t CARTRIDGEID_MIN_VALUE;
		static const int64_t ITEMID_MIN_VALUE;
		static const int64_t SOURCEBUNDLETENANTID_MIN_VALUE;
		static const int64_t SOURCEBUNDLEGELCACHEID_MIN_VALUE;
		static const int64_t SOURCEBUNDLEGELID_MIN_VALUE;
		static const int64_t MODULENAMETENANTID_MIN_VALUE;
		static const int64_t MODULENAMEGELCACHEID_MIN_VALUE;
		static const int64_t MODULENAMEGELID_MIN_VALUE;
		static const int64_t BASEPACKAGETENANTID_MIN_VALUE;
		static const int64_t BASEPACKAGEGELCACHEID_MIN_VALUE;
		static const int64_t BASEPACKAGEGELID_MIN_VALUE;
		static const int64_t SUBPACKAGETENANTID_MIN_VALUE;
		static const int64_t SUBPACKAGEGELCACHEID_MIN_VALUE;
		static const int64_t SUBPACKAGEGELID_MIN_VALUE;
		static const int64_t EXPANSIONCLASSNAMETENANTID_MIN_VALUE;
		static const int64_t EXPANSIONCLASSNAMEGELCACHEID_MIN_VALUE;
		static const int64_t EXPANSIONCLASSNAMEGELID_MIN_VALUE;
		static const int64_t EXPANSIONKEYNAMETENANTID_MIN_VALUE;
		static const int64_t EXPANSIONKEYNAMEGELCACHEID_MIN_VALUE;
		static const int64_t EXPANSIONKEYNAMEGELID_MIN_VALUE;
		static const int64_t EXPANSIONFILENAMETENANTID_MIN_VALUE;
		static const int64_t EXPANSIONFILENAMEGELCACHEID_MIN_VALUE;
		static const int64_t EXPANSIONFILENAMEGELID_MIN_VALUE;
		static const int64_t ITEMID_MAX_VALUE;
		static const std::string::size_type GENERATEONCE_MAX_LEN;
		static const std::string::size_type SOURCEBUNDLE_MAX_LEN;
		static const std::string::size_type MODULENAME_MAX_LEN;
		static const std::string::size_type BASEPACKAGENAME_MAX_LEN;
		static const std::string::size_type SUBPACKAGENAME_MAX_LEN;
		static const std::string::size_type EXPANSIONCLASSNAME_MAX_LEN;
		static const std::string::size_type EXPANSIONKEYNAME_MAX_LEN;
		static const std::string::size_type EXPANSIONFILENAME_MAX_LEN;
	protected:
		std::string* optionalGenerateOnce;
		std::string* optionalSourceBundle;
		cflib::CFLibNullableInt64 optionalSourceBundleTenantId;
		cflib::CFLibNullableInt64 optionalSourceBundleGelCacheId;
		cflib::CFLibNullableInt64 optionalSourceBundleGelId;
		std::string* optionalModuleName;
		cflib::CFLibNullableInt64 optionalModuleNameTenantId;
		cflib::CFLibNullableInt64 optionalModuleNameGelCacheId;
		cflib::CFLibNullableInt64 optionalModuleNameGelId;
		std::string* optionalBasePackageName;
		cflib::CFLibNullableInt64 optionalBasePackageTenantId;
		cflib::CFLibNullableInt64 optionalBasePackageGelCacheId;
		cflib::CFLibNullableInt64 optionalBasePackageGelId;
		std::string* optionalSubPackageName;
		cflib::CFLibNullableInt64 optionalSubPackageTenantId;
		cflib::CFLibNullableInt64 optionalSubPackageGelCacheId;
		cflib::CFLibNullableInt64 optionalSubPackageGelId;
		std::string* optionalExpansionClassName;
		cflib::CFLibNullableInt64 optionalExpansionClassNameTenantId;
		cflib::CFLibNullableInt64 optionalExpansionClassNameGelCacheId;
		cflib::CFLibNullableInt64 optionalExpansionClassNameGelId;
		std::string* optionalExpansionKeyName;
		cflib::CFLibNullableInt64 optionalExpansionKeyNameTenantId;
		cflib::CFLibNullableInt64 optionalExpansionKeyNameGelCacheId;
		cflib::CFLibNullableInt64 optionalExpansionKeyNameGelId;
		std::string* optionalExpansionFileName;
		cflib::CFLibNullableInt64 optionalExpansionFileNameTenantId;
		cflib::CFLibNullableInt64 optionalExpansionFileNameGelCacheId;
		cflib::CFLibNullableInt64 optionalExpansionFileNameGelId;
	public:
		CFGenKbGenFileBuff();
		CFGenKbGenFileBuff( const CFGenKbGenFileBuff& src );
		virtual ~CFGenKbGenFileBuff();

		virtual const std::string& getClassName() const;
		virtual cflib::ICFLibCloneableObj* clone();
		virtual const classcode_t getClassCode() const;

		virtual bool implementsClassCode( const classcode_t argClassCode );
		virtual const std::string& getOptionalGenerateOnceValue() const;
		virtual const std::string* getOptionalGenerateOnceReference() const;
		virtual const bool isOptionalGenerateOnceNull() const;
		virtual void setOptionalGenerateOnceNull();
		virtual void setOptionalGenerateOnceValue( const std::string& value );

		virtual const std::string& getOptionalSourceBundleValue() const;
		virtual const std::string* getOptionalSourceBundleReference() const;
		virtual const bool isOptionalSourceBundleNull() const;
		virtual void setOptionalSourceBundleNull();
		virtual void setOptionalSourceBundleValue( const std::string& value );

		virtual const int64_t getOptionalSourceBundleTenantIdValue() const;
		virtual const int64_t* getOptionalSourceBundleTenantIdReference() const;
		virtual const bool isOptionalSourceBundleTenantIdNull() const;
		virtual void setOptionalSourceBundleTenantIdNull();
		virtual void setOptionalSourceBundleTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalSourceBundleGelCacheIdValue() const;
		virtual const int64_t* getOptionalSourceBundleGelCacheIdReference() const;
		virtual const bool isOptionalSourceBundleGelCacheIdNull() const;
		virtual void setOptionalSourceBundleGelCacheIdNull();
		virtual void setOptionalSourceBundleGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalSourceBundleGelIdValue() const;
		virtual const int64_t* getOptionalSourceBundleGelIdReference() const;
		virtual const bool isOptionalSourceBundleGelIdNull() const;
		virtual void setOptionalSourceBundleGelIdNull();
		virtual void setOptionalSourceBundleGelIdValue( const int64_t value );

		virtual const std::string& getOptionalModuleNameValue() const;
		virtual const std::string* getOptionalModuleNameReference() const;
		virtual const bool isOptionalModuleNameNull() const;
		virtual void setOptionalModuleNameNull();
		virtual void setOptionalModuleNameValue( const std::string& value );

		virtual const int64_t getOptionalModuleNameTenantIdValue() const;
		virtual const int64_t* getOptionalModuleNameTenantIdReference() const;
		virtual const bool isOptionalModuleNameTenantIdNull() const;
		virtual void setOptionalModuleNameTenantIdNull();
		virtual void setOptionalModuleNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalModuleNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalModuleNameGelCacheIdReference() const;
		virtual const bool isOptionalModuleNameGelCacheIdNull() const;
		virtual void setOptionalModuleNameGelCacheIdNull();
		virtual void setOptionalModuleNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalModuleNameGelIdValue() const;
		virtual const int64_t* getOptionalModuleNameGelIdReference() const;
		virtual const bool isOptionalModuleNameGelIdNull() const;
		virtual void setOptionalModuleNameGelIdNull();
		virtual void setOptionalModuleNameGelIdValue( const int64_t value );

		virtual const std::string& getOptionalBasePackageNameValue() const;
		virtual const std::string* getOptionalBasePackageNameReference() const;
		virtual const bool isOptionalBasePackageNameNull() const;
		virtual void setOptionalBasePackageNameNull();
		virtual void setOptionalBasePackageNameValue( const std::string& value );

		virtual const int64_t getOptionalBasePackageTenantIdValue() const;
		virtual const int64_t* getOptionalBasePackageTenantIdReference() const;
		virtual const bool isOptionalBasePackageTenantIdNull() const;
		virtual void setOptionalBasePackageTenantIdNull();
		virtual void setOptionalBasePackageTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalBasePackageGelCacheIdValue() const;
		virtual const int64_t* getOptionalBasePackageGelCacheIdReference() const;
		virtual const bool isOptionalBasePackageGelCacheIdNull() const;
		virtual void setOptionalBasePackageGelCacheIdNull();
		virtual void setOptionalBasePackageGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalBasePackageGelIdValue() const;
		virtual const int64_t* getOptionalBasePackageGelIdReference() const;
		virtual const bool isOptionalBasePackageGelIdNull() const;
		virtual void setOptionalBasePackageGelIdNull();
		virtual void setOptionalBasePackageGelIdValue( const int64_t value );

		virtual const std::string& getOptionalSubPackageNameValue() const;
		virtual const std::string* getOptionalSubPackageNameReference() const;
		virtual const bool isOptionalSubPackageNameNull() const;
		virtual void setOptionalSubPackageNameNull();
		virtual void setOptionalSubPackageNameValue( const std::string& value );

		virtual const int64_t getOptionalSubPackageTenantIdValue() const;
		virtual const int64_t* getOptionalSubPackageTenantIdReference() const;
		virtual const bool isOptionalSubPackageTenantIdNull() const;
		virtual void setOptionalSubPackageTenantIdNull();
		virtual void setOptionalSubPackageTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalSubPackageGelCacheIdValue() const;
		virtual const int64_t* getOptionalSubPackageGelCacheIdReference() const;
		virtual const bool isOptionalSubPackageGelCacheIdNull() const;
		virtual void setOptionalSubPackageGelCacheIdNull();
		virtual void setOptionalSubPackageGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalSubPackageGelIdValue() const;
		virtual const int64_t* getOptionalSubPackageGelIdReference() const;
		virtual const bool isOptionalSubPackageGelIdNull() const;
		virtual void setOptionalSubPackageGelIdNull();
		virtual void setOptionalSubPackageGelIdValue( const int64_t value );

		virtual const std::string& getOptionalExpansionClassNameValue() const;
		virtual const std::string* getOptionalExpansionClassNameReference() const;
		virtual const bool isOptionalExpansionClassNameNull() const;
		virtual void setOptionalExpansionClassNameNull();
		virtual void setOptionalExpansionClassNameValue( const std::string& value );

		virtual const int64_t getOptionalExpansionClassNameTenantIdValue() const;
		virtual const int64_t* getOptionalExpansionClassNameTenantIdReference() const;
		virtual const bool isOptionalExpansionClassNameTenantIdNull() const;
		virtual void setOptionalExpansionClassNameTenantIdNull();
		virtual void setOptionalExpansionClassNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionClassNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalExpansionClassNameGelCacheIdReference() const;
		virtual const bool isOptionalExpansionClassNameGelCacheIdNull() const;
		virtual void setOptionalExpansionClassNameGelCacheIdNull();
		virtual void setOptionalExpansionClassNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionClassNameGelIdValue() const;
		virtual const int64_t* getOptionalExpansionClassNameGelIdReference() const;
		virtual const bool isOptionalExpansionClassNameGelIdNull() const;
		virtual void setOptionalExpansionClassNameGelIdNull();
		virtual void setOptionalExpansionClassNameGelIdValue( const int64_t value );

		virtual const std::string& getOptionalExpansionKeyNameValue() const;
		virtual const std::string* getOptionalExpansionKeyNameReference() const;
		virtual const bool isOptionalExpansionKeyNameNull() const;
		virtual void setOptionalExpansionKeyNameNull();
		virtual void setOptionalExpansionKeyNameValue( const std::string& value );

		virtual const int64_t getOptionalExpansionKeyNameTenantIdValue() const;
		virtual const int64_t* getOptionalExpansionKeyNameTenantIdReference() const;
		virtual const bool isOptionalExpansionKeyNameTenantIdNull() const;
		virtual void setOptionalExpansionKeyNameTenantIdNull();
		virtual void setOptionalExpansionKeyNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionKeyNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalExpansionKeyNameGelCacheIdReference() const;
		virtual const bool isOptionalExpansionKeyNameGelCacheIdNull() const;
		virtual void setOptionalExpansionKeyNameGelCacheIdNull();
		virtual void setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionKeyNameGelIdValue() const;
		virtual const int64_t* getOptionalExpansionKeyNameGelIdReference() const;
		virtual const bool isOptionalExpansionKeyNameGelIdNull() const;
		virtual void setOptionalExpansionKeyNameGelIdNull();
		virtual void setOptionalExpansionKeyNameGelIdValue( const int64_t value );

		virtual const std::string& getOptionalExpansionFileNameValue() const;
		virtual const std::string* getOptionalExpansionFileNameReference() const;
		virtual const bool isOptionalExpansionFileNameNull() const;
		virtual void setOptionalExpansionFileNameNull();
		virtual void setOptionalExpansionFileNameValue( const std::string& value );

		virtual const int64_t getOptionalExpansionFileNameTenantIdValue() const;
		virtual const int64_t* getOptionalExpansionFileNameTenantIdReference() const;
		virtual const bool isOptionalExpansionFileNameTenantIdNull() const;
		virtual void setOptionalExpansionFileNameTenantIdNull();
		virtual void setOptionalExpansionFileNameTenantIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionFileNameGelCacheIdValue() const;
		virtual const int64_t* getOptionalExpansionFileNameGelCacheIdReference() const;
		virtual const bool isOptionalExpansionFileNameGelCacheIdNull() const;
		virtual void setOptionalExpansionFileNameGelCacheIdNull();
		virtual void setOptionalExpansionFileNameGelCacheIdValue( const int64_t value );

		virtual const int64_t getOptionalExpansionFileNameGelIdValue() const;
		virtual const int64_t* getOptionalExpansionFileNameGelIdReference() const;
		virtual const bool isOptionalExpansionFileNameGelIdNull() const;
		virtual void setOptionalExpansionFileNameGelIdNull();
		virtual void setOptionalExpansionFileNameGelIdValue( const int64_t value );

		virtual size_t hashCode() const;

		bool operator <( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator <( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator <( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator <( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator <( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator <( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator <( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator <( const CFGenKbGenItemPKey& rhs );
		bool operator <( const CFGenKbGenFileBuff& rhs );

		bool operator <=( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator <=( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator <=( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator <=( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator <=( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator <=( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator <=( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator <=( const CFGenKbGenItemPKey& rhs );
		bool operator <=( const CFGenKbGenFileBuff& rhs );

		bool operator ==( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator ==( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator ==( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator ==( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator ==( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator ==( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator ==( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator ==( const CFGenKbGenItemPKey& rhs );
		bool operator ==( const CFGenKbGenFileBuff& rhs );

		bool operator !=( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator !=( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator !=( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator !=( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator !=( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator !=( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator !=( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator !=( const CFGenKbGenItemPKey& rhs );
		bool operator !=( const CFGenKbGenFileBuff& rhs );

		bool operator >=( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator >=( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator >=( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator >=( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator >=( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator >=( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator >=( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator >=( const CFGenKbGenItemPKey& rhs );
		bool operator >=( const CFGenKbGenFileBuff& rhs );

		bool operator >( const CFGenKbGenFileByXSrcBundleKey& rhs );
		bool operator >( const CFGenKbGenFileByXModNameKey& rhs );
		bool operator >( const CFGenKbGenFileByXBasePkgKey& rhs );
		bool operator >( const CFGenKbGenFileByXSubPkgKey& rhs );
		bool operator >( const CFGenKbGenFileByXExpClsNameKey& rhs );
		bool operator >( const CFGenKbGenFileByXExpKeyNameKey& rhs );
		bool operator >( const CFGenKbGenFileByXExpFileNameKey& rhs );
		bool operator >( const CFGenKbGenItemPKey& rhs );
		bool operator >( const CFGenKbGenFileBuff& rhs );
		cfcore::CFGenKbGenFileBuff operator =( cfcore::CFGenKbGenFileBuff& src );

		virtual std::string toString();
	};
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator <=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator ==(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator !=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >=(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSrcBundleKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXModNameKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXBasePkgKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXSubPkgKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpClsNameKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpKeyNameKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileByXExpFileNameKey& rhs );

	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenItemPKey& rhs );
	bool operator >(const  cfcore::CFGenKbGenFileBuff& lhs, const cfcore::CFGenKbGenFileBuff& rhs );

	template<> struct hash<cfcore::CFGenKbGenFileBuff> {
		typedef cfcore::CFGenKbGenFileBuff argument_type;
		typedef size_t result_type;
		result_type operator()(argument_type const& s) const {
			return( s.hashCode() );
		}
	};

}

