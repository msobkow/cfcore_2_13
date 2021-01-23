// Description: C++18 base object instance implementation for CFGenKb GenFile.

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
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGenFileObj.hpp>

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

	const std::string CFGenKbGenFileObj::CLASS_NAME( "CFGenKbGenFileObj" );
	const classcode_t CFGenKbGenFileObj::CLASS_CODE = 0xa932L;

	bool CFGenKbGenFileObj::isOptionalGenerateOnceNull() {
		return( getGenFileBuff()->isOptionalGenerateOnceNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalGenerateOnceValue() {
		return( getGenFileBuff()->getOptionalGenerateOnceValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalGenerateOnceReference() {
		return( getGenFileBuff()->getOptionalGenerateOnceReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSourceBundleNull() {
		return( getGenFileBuff()->isOptionalSourceBundleNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalSourceBundleValue() {
		return( getGenFileBuff()->getOptionalSourceBundleValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalSourceBundleReference() {
		return( getGenFileBuff()->getOptionalSourceBundleReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSourceBundleTenantIdNull() {
		return( getGenFileBuff()->isOptionalSourceBundleTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalSourceBundleTenantIdValue() {
		return( getGenFileBuff()->getOptionalSourceBundleTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalSourceBundleTenantIdReference() {
		return( getGenFileBuff()->getOptionalSourceBundleTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSourceBundleGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalSourceBundleGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalSourceBundleGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalSourceBundleGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalSourceBundleGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalSourceBundleGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSourceBundleGelIdNull() {
		return( getGenFileBuff()->isOptionalSourceBundleGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalSourceBundleGelIdValue() {
		return( getGenFileBuff()->getOptionalSourceBundleGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalSourceBundleGelIdReference() {
		return( getGenFileBuff()->getOptionalSourceBundleGelIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalModuleNameNull() {
		return( getGenFileBuff()->isOptionalModuleNameNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalModuleNameValue() {
		return( getGenFileBuff()->getOptionalModuleNameValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalModuleNameReference() {
		return( getGenFileBuff()->getOptionalModuleNameReference() );
	}

	bool CFGenKbGenFileObj::isOptionalModuleNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalModuleNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalModuleNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalModuleNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalModuleNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalModuleNameTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalModuleNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalModuleNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalModuleNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalModuleNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalModuleNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalModuleNameGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalModuleNameGelIdNull() {
		return( getGenFileBuff()->isOptionalModuleNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalModuleNameGelIdValue() {
		return( getGenFileBuff()->getOptionalModuleNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalModuleNameGelIdReference() {
		return( getGenFileBuff()->getOptionalModuleNameGelIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalBasePackageNameNull() {
		return( getGenFileBuff()->isOptionalBasePackageNameNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalBasePackageNameValue() {
		return( getGenFileBuff()->getOptionalBasePackageNameValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalBasePackageNameReference() {
		return( getGenFileBuff()->getOptionalBasePackageNameReference() );
	}

	bool CFGenKbGenFileObj::isOptionalBasePackageTenantIdNull() {
		return( getGenFileBuff()->isOptionalBasePackageTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalBasePackageTenantIdValue() {
		return( getGenFileBuff()->getOptionalBasePackageTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalBasePackageTenantIdReference() {
		return( getGenFileBuff()->getOptionalBasePackageTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalBasePackageGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalBasePackageGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalBasePackageGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalBasePackageGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalBasePackageGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalBasePackageGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalBasePackageGelIdNull() {
		return( getGenFileBuff()->isOptionalBasePackageGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalBasePackageGelIdValue() {
		return( getGenFileBuff()->getOptionalBasePackageGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalBasePackageGelIdReference() {
		return( getGenFileBuff()->getOptionalBasePackageGelIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSubPackageNameNull() {
		return( getGenFileBuff()->isOptionalSubPackageNameNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalSubPackageNameValue() {
		return( getGenFileBuff()->getOptionalSubPackageNameValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalSubPackageNameReference() {
		return( getGenFileBuff()->getOptionalSubPackageNameReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSubPackageTenantIdNull() {
		return( getGenFileBuff()->isOptionalSubPackageTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalSubPackageTenantIdValue() {
		return( getGenFileBuff()->getOptionalSubPackageTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalSubPackageTenantIdReference() {
		return( getGenFileBuff()->getOptionalSubPackageTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSubPackageGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalSubPackageGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalSubPackageGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalSubPackageGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalSubPackageGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalSubPackageGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalSubPackageGelIdNull() {
		return( getGenFileBuff()->isOptionalSubPackageGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalSubPackageGelIdValue() {
		return( getGenFileBuff()->getOptionalSubPackageGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalSubPackageGelIdReference() {
		return( getGenFileBuff()->getOptionalSubPackageGelIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionClassNameNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalExpansionClassNameValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalExpansionClassNameReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionClassNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionClassNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionClassNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionClassNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionClassNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionClassNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionClassNameGelIdNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionClassNameGelIdValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionClassNameGelIdReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionKeyNameNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalExpansionKeyNameValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalExpansionKeyNameReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionKeyNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionKeyNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionKeyNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionKeyNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionKeyNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionKeyNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionKeyNameGelIdNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionKeyNameGelIdValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionKeyNameGelIdReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionFileNameNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameNull() );
	}

	const std::string& CFGenKbGenFileObj::getOptionalExpansionFileNameValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameValue() );
	}

	const std::string* CFGenKbGenFileObj::getOptionalExpansionFileNameReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionFileNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionFileNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionFileNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameTenantIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionFileNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionFileNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionFileNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdReference() );
	}

	bool CFGenKbGenFileObj::isOptionalExpansionFileNameGelIdNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileObj::getOptionalExpansionFileNameGelIdValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileObj::getOptionalExpansionFileNameGelIdReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelIdReference() );
	}


	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsSrcBundleGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalSourceBundleTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalSourceBundleGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalSourceBundleGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalSourceBundleTenantIdValue(),
					getGenFileBuff()->getOptionalSourceBundleGelCacheIdValue(),
					getGenFileBuff()->getOptionalSourceBundleGelIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsBasePackageGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalBasePackageTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalBasePackageGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalBasePackageGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalBasePackageTenantIdValue(),
					getGenFileBuff()->getOptionalBasePackageGelCacheIdValue(),
					getGenFileBuff()->getOptionalBasePackageGelIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsModuleNameGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalModuleNameTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalModuleNameGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalModuleNameGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalModuleNameTenantIdValue(),
					getGenFileBuff()->getOptionalModuleNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalModuleNameGelIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsSubPackageGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalSubPackageTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalSubPackageGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalSubPackageGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalSubPackageTenantIdValue(),
					getGenFileBuff()->getOptionalSubPackageGelCacheIdValue(),
					getGenFileBuff()->getOptionalSubPackageGelIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsExpClassGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalExpansionClassNameTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalExpansionClassNameGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalExpansionClassNameGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalExpansionClassNameTenantIdValue(),
					getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalExpansionClassNameGelIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsExpKeyNameGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalExpansionKeyNameTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalExpansionKeyNameGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalExpansionKeyNameGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdValue(),
					getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalExpansionKeyNameGelIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getOptionalComponentsExpFileNameGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenFileBuff()->isOptionalExpansionFileNameTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalExpansionFileNameGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenFileBuff()->isOptionalExpansionFileNameGelIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalExpansionFileNameTenantIdValue(),
					getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalExpansionFileNameGelIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGenFileObj::CFGenKbGenFileObj()
	: ICFGenKbGenFileObj(),
	  CFGenKbGenRuleObj()
	{
	}

	CFGenKbGenFileObj::CFGenKbGenFileObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGenFileObj(),
	  CFGenKbGenRuleObj( argSchema )
	{
	}

	CFGenKbGenFileObj::~CFGenKbGenFileObj() {
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenFileObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGenFileBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenFile()->readDerivedByItemIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredCartridgeId(),
						getPKey()->getRequiredItemId() );
			}
		}
		return( buff );
	}

	void CFGenKbGenFileObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGenFileObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenFileObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGenFileObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGenRuleObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGenFileObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_CartridgeId( "CartridgeId" );
		static const std::string S_ItemId( "ItemId" );
		static const std::string S_RuleTypeId( "RuleTypeId" );
		static const std::string S_Name( "Name" );
		static const std::string S_ToolSetId( "ToolSetId" );
		static const std::string S_ScopeDefId( "ScopeDefId" );
		static const std::string S_GenDefId( "GenDefId" );
		static const std::string S_GelExecutableTenantId( "GelExecutableTenantId" );
		static const std::string S_GelExecutableGelCacheId( "GelExecutableGelCacheId" );
		static const std::string S_GelExecutableId( "GelExecutableId" );
		static const std::string S_ProbeTenantId( "ProbeTenantId" );
		static const std::string S_ProbeCartridgeId( "ProbeCartridgeId" );
		static const std::string S_ProbeGenItemId( "ProbeGenItemId" );
		static const std::string S_DefinedNear( "DefinedNear" );
		static const std::string S_Body( "Body" );
		static const std::string S_BodyTenantId( "BodyTenantId" );
		static const std::string S_BodyGelCacheId( "BodyGelCacheId" );
		static const std::string S_BodyGelId( "BodyGelId" );
		static const std::string S_GenerateOnce( "GenerateOnce" );
		static const std::string S_SourceBundle( "SourceBundle" );
		static const std::string S_SourceBundleTenantId( "SourceBundleTenantId" );
		static const std::string S_SourceBundleGelCacheId( "SourceBundleGelCacheId" );
		static const std::string S_SourceBundleGelId( "SourceBundleGelId" );
		static const std::string S_ModuleName( "ModuleName" );
		static const std::string S_ModuleNameTenantId( "ModuleNameTenantId" );
		static const std::string S_ModuleNameGelCacheId( "ModuleNameGelCacheId" );
		static const std::string S_ModuleNameGelId( "ModuleNameGelId" );
		static const std::string S_BasePackageName( "BasePackageName" );
		static const std::string S_BasePackageTenantId( "BasePackageTenantId" );
		static const std::string S_BasePackageGelCacheId( "BasePackageGelCacheId" );
		static const std::string S_BasePackageGelId( "BasePackageGelId" );
		static const std::string S_SubPackageName( "SubPackageName" );
		static const std::string S_SubPackageTenantId( "SubPackageTenantId" );
		static const std::string S_SubPackageGelCacheId( "SubPackageGelCacheId" );
		static const std::string S_SubPackageGelId( "SubPackageGelId" );
		static const std::string S_ExpansionClassName( "ExpansionClassName" );
		static const std::string S_ExpansionClassNameTenantId( "ExpansionClassNameTenantId" );
		static const std::string S_ExpansionClassNameGelCacheId( "ExpansionClassNameGelCacheId" );
		static const std::string S_ExpansionClassNameGelId( "ExpansionClassNameGelId" );
		static const std::string S_ExpansionKeyName( "ExpansionKeyName" );
		static const std::string S_ExpansionKeyNameTenantId( "ExpansionKeyNameTenantId" );
		static const std::string S_ExpansionKeyNameGelCacheId( "ExpansionKeyNameGelCacheId" );
		static const std::string S_ExpansionKeyNameGelId( "ExpansionKeyNameGelId" );
		static const std::string S_ExpansionFileName( "ExpansionFileName" );
		static const std::string S_ExpansionFileNameTenantId( "ExpansionFileNameTenantId" );
		static const std::string S_ExpansionFileNameGelCacheId( "ExpansionFileNameGelCacheId" );
		static const std::string S_ExpansionFileNameGelId( "ExpansionFileNameGelId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGenItemObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGenItemObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CartridgeId, CFGenKbGenItemObj::getRequiredCartridgeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ItemId, CFGenKbGenItemObj::getRequiredItemId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RuleTypeId, CFGenKbGenItemObj::getRequiredRuleTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbGenItemObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolSetId, CFGenKbGenItemObj::getRequiredToolSetId() ) );
		if( ! CFGenKbGenItemObj::isOptionalScopeDefIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ScopeDefId, CFGenKbGenItemObj::getOptionalScopeDefIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_GenDefId, CFGenKbGenItemObj::getRequiredGenDefId() ) );
		if( ! CFGenKbGenItemObj::isOptionalGelExecutableTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableTenantId, CFGenKbGenItemObj::getOptionalGelExecutableTenantIdValue() ) );
		}
		if( ! CFGenKbGenItemObj::isOptionalGelExecutableGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableGelCacheId, CFGenKbGenItemObj::getOptionalGelExecutableGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenItemObj::isOptionalGelExecutableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableId, CFGenKbGenItemObj::getOptionalGelExecutableIdValue() ) );
		}
		if( ! CFGenKbGenItemObj::isOptionalProbeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeTenantId, CFGenKbGenItemObj::getOptionalProbeTenantIdValue() ) );
		}
		if( ! CFGenKbGenItemObj::isOptionalProbeCartridgeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeCartridgeId, CFGenKbGenItemObj::getOptionalProbeCartridgeIdValue() ) );
		}
		if( ! CFGenKbGenItemObj::isOptionalProbeGenItemIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeGenItemId, CFGenKbGenItemObj::getOptionalProbeGenItemIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefinedNear, CFGenKbGenRuleObj::getRequiredDefinedNear() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Body, CFGenKbGenRuleObj::getRequiredBody() ) );
		if( ! CFGenKbGenRuleObj::isOptionalBodyTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyTenantId, CFGenKbGenRuleObj::getOptionalBodyTenantIdValue() ) );
		}
		if( ! CFGenKbGenRuleObj::isOptionalBodyGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelCacheId, CFGenKbGenRuleObj::getOptionalBodyGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenRuleObj::isOptionalBodyGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelId, CFGenKbGenRuleObj::getOptionalBodyGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalGenerateOnceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_GenerateOnce, CFGenKbGenFileObj::getOptionalGenerateOnceValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSourceBundleNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceBundle, CFGenKbGenFileObj::getOptionalSourceBundleValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSourceBundleTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleTenantId, CFGenKbGenFileObj::getOptionalSourceBundleTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSourceBundleGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelCacheId, CFGenKbGenFileObj::getOptionalSourceBundleGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSourceBundleGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelId, CFGenKbGenFileObj::getOptionalSourceBundleGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalModuleNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ModuleName, CFGenKbGenFileObj::getOptionalModuleNameValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalModuleNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameTenantId, CFGenKbGenFileObj::getOptionalModuleNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalModuleNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelCacheId, CFGenKbGenFileObj::getOptionalModuleNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalModuleNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelId, CFGenKbGenFileObj::getOptionalModuleNameGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalBasePackageNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_BasePackageName, CFGenKbGenFileObj::getOptionalBasePackageNameValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalBasePackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageTenantId, CFGenKbGenFileObj::getOptionalBasePackageTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalBasePackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelCacheId, CFGenKbGenFileObj::getOptionalBasePackageGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalBasePackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelId, CFGenKbGenFileObj::getOptionalBasePackageGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSubPackageNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SubPackageName, CFGenKbGenFileObj::getOptionalSubPackageNameValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSubPackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageTenantId, CFGenKbGenFileObj::getOptionalSubPackageTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSubPackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelCacheId, CFGenKbGenFileObj::getOptionalSubPackageGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalSubPackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelId, CFGenKbGenFileObj::getOptionalSubPackageGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionClassNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionClassName, CFGenKbGenFileObj::getOptionalExpansionClassNameValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionClassNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameTenantId, CFGenKbGenFileObj::getOptionalExpansionClassNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionClassNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelCacheId, CFGenKbGenFileObj::getOptionalExpansionClassNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionClassNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelId, CFGenKbGenFileObj::getOptionalExpansionClassNameGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionKeyNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionKeyName, CFGenKbGenFileObj::getOptionalExpansionKeyNameValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionKeyNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameTenantId, CFGenKbGenFileObj::getOptionalExpansionKeyNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionKeyNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelCacheId, CFGenKbGenFileObj::getOptionalExpansionKeyNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionKeyNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelId, CFGenKbGenFileObj::getOptionalExpansionKeyNameGelIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionFileNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionFileName, CFGenKbGenFileObj::getOptionalExpansionFileNameValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionFileNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameTenantId, CFGenKbGenFileObj::getOptionalExpansionFileNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionFileNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelCacheId, CFGenKbGenFileObj::getOptionalExpansionFileNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileObj::isOptionalExpansionFileNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelId, CFGenKbGenFileObj::getOptionalExpansionFileNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGenFileObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbGenFileObj::getGenDefName() {
		return( cfcore::CFGenKbGenFileBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenFileObj::getObjQualifier( const classcode_t* qualifyingClass ) {
		cflib::ICFLibAnyObj* container = this;
		if( qualifyingClass != NULL ) {
			while( container != NULL ) {
				if( container->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
					break;
				}
				else if( container->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
					break;
				}
				else if( container->implementsClassCode( *qualifyingClass ) ) {
					break;
				}
				container = container->getObjScope();
			}
		}
		else {
			while( container != NULL ) {
				if( container->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
					break;
				}
				else if( container->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
					break;
				}
				container = container->getObjScope();
			}
		}
		return( container );
	}

	cflib::ICFLibAnyObj* CFGenKbGenFileObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenFileObj::getNamedObject( const std::string& objName ) {
		std::string nextName;
		std::string remainingName;
		cflib::ICFLibAnyObj* subObj = NULL;
		cflib::ICFLibAnyObj* retObj;
		int32_t nextDot = objName.find( '.' );
		if( nextDot >= 0 ) {
			nextName = objName.substr( 0, nextDot );
			remainingName = objName.substr( nextDot + 1 );
		}
		else {
			nextName.clear();
			nextName.append( objName );
			remainingName.clear();
		}
		if( remainingName.length() <= 0 ) {
			retObj = subObj;
		}
		else if( subObj == NULL ) {
			retObj = NULL;
		}
		else {
			retObj = subObj->getNamedObject( remainingName );
		}
		return( retObj );
	}

	std::string CFGenKbGenFileObj::getObjQualifiedName() {
		const static std::string S_Dot( "." );
		std::string qualName( getObjName() );
		cflib::ICFLibAnyObj* container = getObjScope();
		std::string containerName;
		std::string buildName;
		while( container != NULL ) {
			if( container->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
				container = NULL;
			}
			else {
				containerName = container->getObjName();
				buildName.clear();
				buildName.append( containerName );
				buildName.append( S_Dot );
				buildName.append( qualName );
				qualName.clear();
				qualName.append( buildName );
				container = container->getObjScope();
			}
		}
		return( qualName );
	}

	std::string CFGenKbGenFileObj::getObjFullName() {
		const static std::string S_Dot( "." );
		std::string fullName = getObjName();
		cflib::ICFLibAnyObj* container = getObjScope();
		std::string containerName;
		std::string buildName;
		while( container != NULL ) {
			if( container->getClassCode() == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
				container = NULL;
			}
			else if( container->getClassCode() == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
				container = NULL;
			}
			else {
				containerName = container->getObjName();
				buildName.clear();
				buildName.append( containerName );
				buildName.append( S_Dot );
				buildName.append( fullName );
				fullName.clear();
				fullName.append( buildName );
				container = container->getObjScope();
			}
		}
		return( fullName );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenFileObj::realize() {
		cfcore::ICFGenKbGenFileObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenFileTableObj()->realizeGenFile(
			(cfcore::ICFGenKbGenFileObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( retobj ) );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenFileObj::read( bool forceRead ) {
		cfcore::ICFGenKbGenFileObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenFileTableObj()->readGenFileByItemIdIdx( getGenFileBuff()->getRequiredTenantId(),
		getGenFileBuff()->getRequiredCartridgeId(),
		getGenFileBuff()->getRequiredItemId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( retobj ) );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenFileObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGenFileObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenFileTableObj()->lockGenFile( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenFileTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGenFileEditObj* CFGenKbGenFileObj::getGenFileEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGenFileEditObj*>( edit ) );
	}

}

#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>
#include <msscf/MssCFGelCompiler.hpp>
#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFGenRuleObj.hpp>
#include <msscf/MssCFGenTruncObj.hpp>
#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>

namespace cfcore {

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getSrcBundleBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getSrcBundleBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile SrcBundle GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonSrcBundle( "::SrcBundle" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsSrcBundleGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonSrcBundle );
			const std::string* source = genFile->getOptionalSourceBundleReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsSrcBundleGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsSrcBundleGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getBasePackageBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getBasePackageBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile BasePackage GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonBasePackage( "::BasePackage" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsBasePackageGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonBasePackage );
			const std::string* source = genFile->getOptionalBasePackageNameReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsBasePackageGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsBasePackageGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getModuleNameBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getModuleNameBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile ModuleName GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonModuleName( "::ModuleName" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsModuleNameGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonModuleName );
			const std::string* source = genFile->getOptionalModuleNameReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsModuleNameGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsModuleNameGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getSubPackageBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getSubPackageBinBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile SubPackage GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonSubPackage( "::SubPackage" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsSubPackageGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonSubPackage );
			const std::string* source = genFile->getOptionalSubPackageNameReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsSubPackageGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsSubPackageGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getExpClassBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getExpClassBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile ExpClass GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonExpClass( "::ExpClass" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsExpClassGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonExpClass );
			const std::string* source = genFile->getOptionalExpansionClassNameReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsExpClassGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsExpClassGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getExpKeyNameBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getExpKeyNameBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile ExpKeyName GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonExpKeyName( "::ExpKeyName" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsExpKeyNameGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonExpKeyName );
			const std::string* source = genFile->getOptionalExpansionKeyNameReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsExpKeyNameGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsExpKeyNameGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

	ICFGenKbGelExecutableObj* CFGenKbGenFileObj::getExpFileNameBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenFileObj* genFile ) {
		static const std::string S_ProcName( "GenFileObj.getExpFileNameBin" );
		static const std::string S_Empty( "" );
		static const std::string S_CouldNotCompileGel( "Could not compile ExpFileName GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonExpFileName( "::ExpFileName" );
		ICFGenKbGelExecutableObj* bin = genFile->getOptionalComponentsExpFileNameGel();
		if( bin == NULL ) {
			std::string execName( genFile->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genFile->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genFile->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genFile->getRequiredName() );
			execName.append( S_ColonColonExpFileName );
			const std::string* source = genFile->getOptionalExpansionFileNameReference();
			if( source == NULL ) {
				source = &S_Empty;
			}
			bin = gelCompiler->compileExecutable( execName, *source );
			ICFGenKbGenFileEditObj* editFile = genFile->getGenFileEdit();
			if( editFile != NULL ) {
				editFile->setOptionalComponentsExpFileNameGel( bin );
			}
			else {
				editFile = dynamic_cast<ICFGenKbGenFileEditObj*>( genFile->beginEdit() );
				editFile->setOptionalComponentsExpFileNameGel( bin );
				editFile->update();
				editFile = NULL;
			}
		}
		return( bin );
	}

}
