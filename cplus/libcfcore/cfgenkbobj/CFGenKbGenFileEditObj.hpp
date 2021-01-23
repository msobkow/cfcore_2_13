#pragma once

// Description: C++18 edit object instance specification for CFGenKb GenFile.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>

namespace cfcore {

	class CFGenKbGenFileEditObj
	: public CFGenKbGenRuleEditObj,
	  public virtual ICFGenKbGenFileEditObj
	{
	public:
		static const std::string CLASS_NAME;
	protected:
	public:
		CFGenKbGenFileEditObj( cfcore::ICFGenKbGenFileObj* argOrig );
		virtual ~CFGenKbGenFileEditObj();

		virtual const std::string& getClassName() const;

		virtual const classcode_t getClassCode() const;
		virtual bool implementsClassCode( const classcode_t value ) const;
		virtual std::string toString();

		virtual const std::string getGenDefName();

		virtual cflib::ICFLibAnyObj* getObjQualifier( const classcode_t* qualifyingClass );

		virtual cflib::ICFLibAnyObj* getNamedObject( const classcode_t* qualifyingClass, const std::string& objName );

		virtual cflib::ICFLibAnyObj* getNamedObject( const std::string& objName );

		virtual std::string getObjQualifiedName();

		virtual std::string getObjFullName();

		virtual ICFGenKbGenItemObj* realize();

		virtual ICFGenKbGenItemObj* create();

		virtual ICFGenKbGenItemEditObj* update();

		virtual ICFGenKbGenItemEditObj* deleteInstance();

		virtual cfcore::ICFGenKbGenFileTableObj* getGenFileTable();

		virtual cfcore::ICFGenKbGenFileEditObj* getGenFileEdit();

		virtual ICFGenKbGenItemEditObj* beginEdit();

		virtual cfcore::ICFGenKbGenFileObj* getOrigAsGenFile();

		virtual cfcore::CFGenKbGenItemBuff* getBuff();
		virtual void setBuff( cfcore::CFGenKbGenItemBuff* value );

		inline cfcore::CFGenKbGenFileBuff* getGenFileBuff() {
			// Buff is always instantiated when constructed over an original object
			return( static_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		};

		inline cfcore::CFGenKbGenFileBuff* getGenFileEditBuff() {
			// Buff is always instantiated when constructed over an original object
			return( dynamic_cast<cfcore::CFGenKbGenFileBuff*>( buff ) );
		};

		virtual bool isOptionalGenerateOnceNull();
		virtual const std::string& getOptionalGenerateOnceValue();
		virtual const std::string* getOptionalGenerateOnceReference();
		virtual void setOptionalGenerateOnceNull();
		virtual void setOptionalGenerateOnceValue( const std::string& value );

		virtual bool isOptionalSourceBundleNull();
		virtual const std::string& getOptionalSourceBundleValue();
		virtual const std::string* getOptionalSourceBundleReference();
		virtual void setOptionalSourceBundleNull();
		virtual void setOptionalSourceBundleValue( const std::string& value );

		virtual bool isOptionalSourceBundleTenantIdNull();
		virtual const int64_t getOptionalSourceBundleTenantIdValue();
		virtual const int64_t* getOptionalSourceBundleTenantIdReference();
		virtual void setOptionalSourceBundleTenantIdNull();
		virtual void setOptionalSourceBundleTenantIdValue( const int64_t value );

		virtual bool isOptionalSourceBundleGelCacheIdNull();
		virtual const int64_t getOptionalSourceBundleGelCacheIdValue();
		virtual const int64_t* getOptionalSourceBundleGelCacheIdReference();
		virtual void setOptionalSourceBundleGelCacheIdNull();
		virtual void setOptionalSourceBundleGelCacheIdValue( const int64_t value );

		virtual bool isOptionalSourceBundleGelIdNull();
		virtual const int64_t getOptionalSourceBundleGelIdValue();
		virtual const int64_t* getOptionalSourceBundleGelIdReference();
		virtual void setOptionalSourceBundleGelIdNull();
		virtual void setOptionalSourceBundleGelIdValue( const int64_t value );

		virtual bool isOptionalModuleNameNull();
		virtual const std::string& getOptionalModuleNameValue();
		virtual const std::string* getOptionalModuleNameReference();
		virtual void setOptionalModuleNameNull();
		virtual void setOptionalModuleNameValue( const std::string& value );

		virtual bool isOptionalModuleNameTenantIdNull();
		virtual const int64_t getOptionalModuleNameTenantIdValue();
		virtual const int64_t* getOptionalModuleNameTenantIdReference();
		virtual void setOptionalModuleNameTenantIdNull();
		virtual void setOptionalModuleNameTenantIdValue( const int64_t value );

		virtual bool isOptionalModuleNameGelCacheIdNull();
		virtual const int64_t getOptionalModuleNameGelCacheIdValue();
		virtual const int64_t* getOptionalModuleNameGelCacheIdReference();
		virtual void setOptionalModuleNameGelCacheIdNull();
		virtual void setOptionalModuleNameGelCacheIdValue( const int64_t value );

		virtual bool isOptionalModuleNameGelIdNull();
		virtual const int64_t getOptionalModuleNameGelIdValue();
		virtual const int64_t* getOptionalModuleNameGelIdReference();
		virtual void setOptionalModuleNameGelIdNull();
		virtual void setOptionalModuleNameGelIdValue( const int64_t value );

		virtual bool isOptionalBasePackageNameNull();
		virtual const std::string& getOptionalBasePackageNameValue();
		virtual const std::string* getOptionalBasePackageNameReference();
		virtual void setOptionalBasePackageNameNull();
		virtual void setOptionalBasePackageNameValue( const std::string& value );

		virtual bool isOptionalBasePackageTenantIdNull();
		virtual const int64_t getOptionalBasePackageTenantIdValue();
		virtual const int64_t* getOptionalBasePackageTenantIdReference();
		virtual void setOptionalBasePackageTenantIdNull();
		virtual void setOptionalBasePackageTenantIdValue( const int64_t value );

		virtual bool isOptionalBasePackageGelCacheIdNull();
		virtual const int64_t getOptionalBasePackageGelCacheIdValue();
		virtual const int64_t* getOptionalBasePackageGelCacheIdReference();
		virtual void setOptionalBasePackageGelCacheIdNull();
		virtual void setOptionalBasePackageGelCacheIdValue( const int64_t value );

		virtual bool isOptionalBasePackageGelIdNull();
		virtual const int64_t getOptionalBasePackageGelIdValue();
		virtual const int64_t* getOptionalBasePackageGelIdReference();
		virtual void setOptionalBasePackageGelIdNull();
		virtual void setOptionalBasePackageGelIdValue( const int64_t value );

		virtual bool isOptionalSubPackageNameNull();
		virtual const std::string& getOptionalSubPackageNameValue();
		virtual const std::string* getOptionalSubPackageNameReference();
		virtual void setOptionalSubPackageNameNull();
		virtual void setOptionalSubPackageNameValue( const std::string& value );

		virtual bool isOptionalSubPackageTenantIdNull();
		virtual const int64_t getOptionalSubPackageTenantIdValue();
		virtual const int64_t* getOptionalSubPackageTenantIdReference();
		virtual void setOptionalSubPackageTenantIdNull();
		virtual void setOptionalSubPackageTenantIdValue( const int64_t value );

		virtual bool isOptionalSubPackageGelCacheIdNull();
		virtual const int64_t getOptionalSubPackageGelCacheIdValue();
		virtual const int64_t* getOptionalSubPackageGelCacheIdReference();
		virtual void setOptionalSubPackageGelCacheIdNull();
		virtual void setOptionalSubPackageGelCacheIdValue( const int64_t value );

		virtual bool isOptionalSubPackageGelIdNull();
		virtual const int64_t getOptionalSubPackageGelIdValue();
		virtual const int64_t* getOptionalSubPackageGelIdReference();
		virtual void setOptionalSubPackageGelIdNull();
		virtual void setOptionalSubPackageGelIdValue( const int64_t value );

		virtual bool isOptionalExpansionClassNameNull();
		virtual const std::string& getOptionalExpansionClassNameValue();
		virtual const std::string* getOptionalExpansionClassNameReference();
		virtual void setOptionalExpansionClassNameNull();
		virtual void setOptionalExpansionClassNameValue( const std::string& value );

		virtual bool isOptionalExpansionClassNameTenantIdNull();
		virtual const int64_t getOptionalExpansionClassNameTenantIdValue();
		virtual const int64_t* getOptionalExpansionClassNameTenantIdReference();
		virtual void setOptionalExpansionClassNameTenantIdNull();
		virtual void setOptionalExpansionClassNameTenantIdValue( const int64_t value );

		virtual bool isOptionalExpansionClassNameGelCacheIdNull();
		virtual const int64_t getOptionalExpansionClassNameGelCacheIdValue();
		virtual const int64_t* getOptionalExpansionClassNameGelCacheIdReference();
		virtual void setOptionalExpansionClassNameGelCacheIdNull();
		virtual void setOptionalExpansionClassNameGelCacheIdValue( const int64_t value );

		virtual bool isOptionalExpansionClassNameGelIdNull();
		virtual const int64_t getOptionalExpansionClassNameGelIdValue();
		virtual const int64_t* getOptionalExpansionClassNameGelIdReference();
		virtual void setOptionalExpansionClassNameGelIdNull();
		virtual void setOptionalExpansionClassNameGelIdValue( const int64_t value );

		virtual bool isOptionalExpansionKeyNameNull();
		virtual const std::string& getOptionalExpansionKeyNameValue();
		virtual const std::string* getOptionalExpansionKeyNameReference();
		virtual void setOptionalExpansionKeyNameNull();
		virtual void setOptionalExpansionKeyNameValue( const std::string& value );

		virtual bool isOptionalExpansionKeyNameTenantIdNull();
		virtual const int64_t getOptionalExpansionKeyNameTenantIdValue();
		virtual const int64_t* getOptionalExpansionKeyNameTenantIdReference();
		virtual void setOptionalExpansionKeyNameTenantIdNull();
		virtual void setOptionalExpansionKeyNameTenantIdValue( const int64_t value );

		virtual bool isOptionalExpansionKeyNameGelCacheIdNull();
		virtual const int64_t getOptionalExpansionKeyNameGelCacheIdValue();
		virtual const int64_t* getOptionalExpansionKeyNameGelCacheIdReference();
		virtual void setOptionalExpansionKeyNameGelCacheIdNull();
		virtual void setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value );

		virtual bool isOptionalExpansionKeyNameGelIdNull();
		virtual const int64_t getOptionalExpansionKeyNameGelIdValue();
		virtual const int64_t* getOptionalExpansionKeyNameGelIdReference();
		virtual void setOptionalExpansionKeyNameGelIdNull();
		virtual void setOptionalExpansionKeyNameGelIdValue( const int64_t value );

		virtual bool isOptionalExpansionFileNameNull();
		virtual const std::string& getOptionalExpansionFileNameValue();
		virtual const std::string* getOptionalExpansionFileNameReference();
		virtual void setOptionalExpansionFileNameNull();
		virtual void setOptionalExpansionFileNameValue( const std::string& value );

		virtual bool isOptionalExpansionFileNameTenantIdNull();
		virtual const int64_t getOptionalExpansionFileNameTenantIdValue();
		virtual const int64_t* getOptionalExpansionFileNameTenantIdReference();
		virtual void setOptionalExpansionFileNameTenantIdNull();
		virtual void setOptionalExpansionFileNameTenantIdValue( const int64_t value );

		virtual bool isOptionalExpansionFileNameGelCacheIdNull();
		virtual const int64_t getOptionalExpansionFileNameGelCacheIdValue();
		virtual const int64_t* getOptionalExpansionFileNameGelCacheIdReference();
		virtual void setOptionalExpansionFileNameGelCacheIdNull();
		virtual void setOptionalExpansionFileNameGelCacheIdValue( const int64_t value );

		virtual bool isOptionalExpansionFileNameGelIdNull();
		virtual const int64_t getOptionalExpansionFileNameGelIdValue();
		virtual const int64_t* getOptionalExpansionFileNameGelIdReference();
		virtual void setOptionalExpansionFileNameGelIdNull();
		virtual void setOptionalExpansionFileNameGelIdValue( const int64_t value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsSrcBundleGel( bool forceRead = false );
		virtual void setOptionalComponentsSrcBundleGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsBasePackageGel( bool forceRead = false );
		virtual void setOptionalComponentsBasePackageGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsModuleNameGel( bool forceRead = false );
		virtual void setOptionalComponentsModuleNameGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsSubPackageGel( bool forceRead = false );
		virtual void setOptionalComponentsSubPackageGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpClassGel( bool forceRead = false );
		virtual void setOptionalComponentsExpClassGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpKeyNameGel( bool forceRead = false );
		virtual void setOptionalComponentsExpKeyNameGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual cfcore::ICFGenKbGelExecutableObj* getOptionalComponentsExpFileNameGel( bool forceRead = false );
		virtual void setOptionalComponentsExpFileNameGel( cfcore::ICFGenKbGelExecutableObj* value );

		virtual void copyBuffToOrig();

		virtual void copyOrigToBuff();

	};
}
