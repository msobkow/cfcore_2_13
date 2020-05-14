// Description: C++18 edit object instance implementation for CFGenKb GenFile.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenFileObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenFileEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbGenFileEditObj::CLASS_NAME( "CFGenKbGenFileEditObj" );

	CFGenKbGenFileEditObj::CFGenKbGenFileEditObj( cfcore::ICFGenKbGenFileObj* argOrig )
	: ICFGenKbGenFileEditObj(),
	  CFGenKbGenRuleEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGenFileEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGenFileEditObj::~CFGenKbGenFileEditObj() {
	}

	const std::string& CFGenKbGenFileEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenFileEditObj::getClassCode() const {
		return( cfcore::CFGenKbGenFileBuff::CLASS_CODE );
	}

	bool CFGenKbGenFileEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenFileBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGenRuleEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGenFileEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenFileEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGenItemEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGenItemEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CartridgeId, CFGenKbGenItemEditObj::getRequiredCartridgeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ItemId, CFGenKbGenItemEditObj::getRequiredItemId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_RuleTypeId, CFGenKbGenItemEditObj::getRequiredRuleTypeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbGenItemEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolSetId, CFGenKbGenItemEditObj::getRequiredToolSetId() ) );
		if( ! CFGenKbGenItemEditObj::isOptionalScopeDefIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ScopeDefId, CFGenKbGenItemEditObj::getOptionalScopeDefIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_GenDefId, CFGenKbGenItemEditObj::getRequiredGenDefId() ) );
		if( ! CFGenKbGenItemEditObj::isOptionalGelExecutableTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableTenantId, CFGenKbGenItemEditObj::getOptionalGelExecutableTenantIdValue() ) );
		}
		if( ! CFGenKbGenItemEditObj::isOptionalGelExecutableGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableGelCacheId, CFGenKbGenItemEditObj::getOptionalGelExecutableGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenItemEditObj::isOptionalGelExecutableIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelExecutableId, CFGenKbGenItemEditObj::getOptionalGelExecutableIdValue() ) );
		}
		if( ! CFGenKbGenItemEditObj::isOptionalProbeTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeTenantId, CFGenKbGenItemEditObj::getOptionalProbeTenantIdValue() ) );
		}
		if( ! CFGenKbGenItemEditObj::isOptionalProbeCartridgeIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeCartridgeId, CFGenKbGenItemEditObj::getOptionalProbeCartridgeIdValue() ) );
		}
		if( ! CFGenKbGenItemEditObj::isOptionalProbeGenItemIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ProbeGenItemId, CFGenKbGenItemEditObj::getOptionalProbeGenItemIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefinedNear, CFGenKbGenRuleEditObj::getRequiredDefinedNear() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Body, CFGenKbGenRuleEditObj::getRequiredBody() ) );
		if( ! CFGenKbGenRuleEditObj::isOptionalBodyTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyTenantId, CFGenKbGenRuleEditObj::getOptionalBodyTenantIdValue() ) );
		}
		if( ! CFGenKbGenRuleEditObj::isOptionalBodyGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelCacheId, CFGenKbGenRuleEditObj::getOptionalBodyGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenRuleEditObj::isOptionalBodyGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BodyGelId, CFGenKbGenRuleEditObj::getOptionalBodyGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalGenerateOnceNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_GenerateOnce, CFGenKbGenFileEditObj::getOptionalGenerateOnceValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSourceBundleNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceBundle, CFGenKbGenFileEditObj::getOptionalSourceBundleValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSourceBundleTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleTenantId, CFGenKbGenFileEditObj::getOptionalSourceBundleTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSourceBundleGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelCacheId, CFGenKbGenFileEditObj::getOptionalSourceBundleGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSourceBundleGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SourceBundleGelId, CFGenKbGenFileEditObj::getOptionalSourceBundleGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalModuleNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ModuleName, CFGenKbGenFileEditObj::getOptionalModuleNameValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalModuleNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameTenantId, CFGenKbGenFileEditObj::getOptionalModuleNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalModuleNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelCacheId, CFGenKbGenFileEditObj::getOptionalModuleNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalModuleNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ModuleNameGelId, CFGenKbGenFileEditObj::getOptionalModuleNameGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalBasePackageNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_BasePackageName, CFGenKbGenFileEditObj::getOptionalBasePackageNameValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalBasePackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageTenantId, CFGenKbGenFileEditObj::getOptionalBasePackageTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalBasePackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelCacheId, CFGenKbGenFileEditObj::getOptionalBasePackageGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalBasePackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_BasePackageGelId, CFGenKbGenFileEditObj::getOptionalBasePackageGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSubPackageNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SubPackageName, CFGenKbGenFileEditObj::getOptionalSubPackageNameValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSubPackageTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageTenantId, CFGenKbGenFileEditObj::getOptionalSubPackageTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSubPackageGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelCacheId, CFGenKbGenFileEditObj::getOptionalSubPackageGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalSubPackageGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SubPackageGelId, CFGenKbGenFileEditObj::getOptionalSubPackageGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionClassNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionClassName, CFGenKbGenFileEditObj::getOptionalExpansionClassNameValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionClassNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameTenantId, CFGenKbGenFileEditObj::getOptionalExpansionClassNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionClassNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelCacheId, CFGenKbGenFileEditObj::getOptionalExpansionClassNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionClassNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionClassNameGelId, CFGenKbGenFileEditObj::getOptionalExpansionClassNameGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionKeyNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionKeyName, CFGenKbGenFileEditObj::getOptionalExpansionKeyNameValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionKeyNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameTenantId, CFGenKbGenFileEditObj::getOptionalExpansionKeyNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionKeyNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelCacheId, CFGenKbGenFileEditObj::getOptionalExpansionKeyNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionKeyNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionKeyNameGelId, CFGenKbGenFileEditObj::getOptionalExpansionKeyNameGelIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionFileNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpansionFileName, CFGenKbGenFileEditObj::getOptionalExpansionFileNameValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionFileNameTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameTenantId, CFGenKbGenFileEditObj::getOptionalExpansionFileNameTenantIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionFileNameGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelCacheId, CFGenKbGenFileEditObj::getOptionalExpansionFileNameGelCacheIdValue() ) );
		}
		if( ! CFGenKbGenFileEditObj::isOptionalExpansionFileNameGelIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ExpansionFileNameGelId, CFGenKbGenFileEditObj::getOptionalExpansionFileNameGelIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGenFileEditObj::getGenDefName() {
		return( cfcore::CFGenKbGenFileBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenFileEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGenFileEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenFileEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGenFileEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGenFileEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenFileEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGenFileObj* retobj = getSchema()->getGenFileTableObj()->realizeGenFile( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenFileEditObj::create() {
		cfcore::ICFGenKbGenFileObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGenFileTableObj()->createGenFile( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenFileEditObj::update() {
		getSchema()->getGenFileTableObj()->updateGenFile( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenFileEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGenFileTableObj()->deleteGenFile( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenFileTableObj* CFGenKbGenFileEditObj::getGenFileTable() {
		return( orig->getSchema()->getGenFileTableObj() );
	}

	cfcore::ICFGenKbGenFileEditObj* CFGenKbGenFileEditObj::getGenFileEdit() {
		return( (cfcore::ICFGenKbGenFileEditObj*)this );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenFileEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGenFileObj* CFGenKbGenFileEditObj::getOrigAsGenFile() {
		return( dynamic_cast<cfcore::ICFGenKbGenFileObj*>( orig ) );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenFileEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGenFileEditObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( buff != value ) {
			CFGenKbGenRuleEditObj::setBuff( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalGenerateOnceNull() {
		return( getGenFileBuff()->isOptionalGenerateOnceNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalGenerateOnceValue() {
		return( getGenFileBuff()->getOptionalGenerateOnceValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalGenerateOnceReference() {
		return( getGenFileBuff()->getOptionalGenerateOnceReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalGenerateOnceNull() {
		if( ! getGenFileBuff()->isOptionalGenerateOnceNull() ) {
			getGenFileBuff()->setOptionalGenerateOnceNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalGenerateOnceValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalGenerateOnceNull() ) {
			getGenFileBuff()->setOptionalGenerateOnceValue( value );
		}
		else if( getGenFileBuff()->getOptionalGenerateOnceValue() != value ) {
			getGenFileBuff()->setOptionalGenerateOnceValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSourceBundleNull() {
		return( getGenFileBuff()->isOptionalSourceBundleNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalSourceBundleValue() {
		return( getGenFileBuff()->getOptionalSourceBundleValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalSourceBundleReference() {
		return( getGenFileBuff()->getOptionalSourceBundleReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleNull() {
		if( ! getGenFileBuff()->isOptionalSourceBundleNull() ) {
			getGenFileBuff()->setOptionalSourceBundleNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalSourceBundleNull() ) {
			getGenFileBuff()->setOptionalSourceBundleValue( value );
		}
		else if( getGenFileBuff()->getOptionalSourceBundleValue() != value ) {
			getGenFileBuff()->setOptionalSourceBundleValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSourceBundleTenantIdNull() {
		return( getGenFileBuff()->isOptionalSourceBundleTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalSourceBundleTenantIdValue() {
		return( getGenFileBuff()->getOptionalSourceBundleTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalSourceBundleTenantIdReference() {
		return( getGenFileBuff()->getOptionalSourceBundleTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalSourceBundleTenantIdNull() ) {
			getGenFileBuff()->setOptionalSourceBundleTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalSourceBundleTenantIdNull() ) {
			getGenFileBuff()->setOptionalSourceBundleTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalSourceBundleTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalSourceBundleTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSourceBundleGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalSourceBundleGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalSourceBundleGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalSourceBundleGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalSourceBundleGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalSourceBundleGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalSourceBundleGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalSourceBundleGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalSourceBundleGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalSourceBundleGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalSourceBundleGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalSourceBundleGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSourceBundleGelIdNull() {
		return( getGenFileBuff()->isOptionalSourceBundleGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalSourceBundleGelIdValue() {
		return( getGenFileBuff()->getOptionalSourceBundleGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalSourceBundleGelIdReference() {
		return( getGenFileBuff()->getOptionalSourceBundleGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleGelIdNull() {
		if( ! getGenFileBuff()->isOptionalSourceBundleGelIdNull() ) {
			getGenFileBuff()->setOptionalSourceBundleGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSourceBundleGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalSourceBundleGelIdNull() ) {
			getGenFileBuff()->setOptionalSourceBundleGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalSourceBundleGelIdValue() != value ) {
			getGenFileBuff()->setOptionalSourceBundleGelIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalModuleNameNull() {
		return( getGenFileBuff()->isOptionalModuleNameNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalModuleNameValue() {
		return( getGenFileBuff()->getOptionalModuleNameValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalModuleNameReference() {
		return( getGenFileBuff()->getOptionalModuleNameReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameNull() {
		if( ! getGenFileBuff()->isOptionalModuleNameNull() ) {
			getGenFileBuff()->setOptionalModuleNameNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalModuleNameNull() ) {
			getGenFileBuff()->setOptionalModuleNameValue( value );
		}
		else if( getGenFileBuff()->getOptionalModuleNameValue() != value ) {
			getGenFileBuff()->setOptionalModuleNameValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalModuleNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalModuleNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalModuleNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalModuleNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalModuleNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalModuleNameTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalModuleNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalModuleNameTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalModuleNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalModuleNameTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalModuleNameTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalModuleNameTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalModuleNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalModuleNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalModuleNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalModuleNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalModuleNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalModuleNameGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalModuleNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalModuleNameGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalModuleNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalModuleNameGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalModuleNameGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalModuleNameGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalModuleNameGelIdNull() {
		return( getGenFileBuff()->isOptionalModuleNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalModuleNameGelIdValue() {
		return( getGenFileBuff()->getOptionalModuleNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalModuleNameGelIdReference() {
		return( getGenFileBuff()->getOptionalModuleNameGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameGelIdNull() {
		if( ! getGenFileBuff()->isOptionalModuleNameGelIdNull() ) {
			getGenFileBuff()->setOptionalModuleNameGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalModuleNameGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalModuleNameGelIdNull() ) {
			getGenFileBuff()->setOptionalModuleNameGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalModuleNameGelIdValue() != value ) {
			getGenFileBuff()->setOptionalModuleNameGelIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalBasePackageNameNull() {
		return( getGenFileBuff()->isOptionalBasePackageNameNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalBasePackageNameValue() {
		return( getGenFileBuff()->getOptionalBasePackageNameValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalBasePackageNameReference() {
		return( getGenFileBuff()->getOptionalBasePackageNameReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageNameNull() {
		if( ! getGenFileBuff()->isOptionalBasePackageNameNull() ) {
			getGenFileBuff()->setOptionalBasePackageNameNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageNameValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalBasePackageNameNull() ) {
			getGenFileBuff()->setOptionalBasePackageNameValue( value );
		}
		else if( getGenFileBuff()->getOptionalBasePackageNameValue() != value ) {
			getGenFileBuff()->setOptionalBasePackageNameValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalBasePackageTenantIdNull() {
		return( getGenFileBuff()->isOptionalBasePackageTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalBasePackageTenantIdValue() {
		return( getGenFileBuff()->getOptionalBasePackageTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalBasePackageTenantIdReference() {
		return( getGenFileBuff()->getOptionalBasePackageTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalBasePackageTenantIdNull() ) {
			getGenFileBuff()->setOptionalBasePackageTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalBasePackageTenantIdNull() ) {
			getGenFileBuff()->setOptionalBasePackageTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalBasePackageTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalBasePackageTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalBasePackageGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalBasePackageGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalBasePackageGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalBasePackageGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalBasePackageGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalBasePackageGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalBasePackageGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalBasePackageGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalBasePackageGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalBasePackageGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalBasePackageGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalBasePackageGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalBasePackageGelIdNull() {
		return( getGenFileBuff()->isOptionalBasePackageGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalBasePackageGelIdValue() {
		return( getGenFileBuff()->getOptionalBasePackageGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalBasePackageGelIdReference() {
		return( getGenFileBuff()->getOptionalBasePackageGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageGelIdNull() {
		if( ! getGenFileBuff()->isOptionalBasePackageGelIdNull() ) {
			getGenFileBuff()->setOptionalBasePackageGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalBasePackageGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalBasePackageGelIdNull() ) {
			getGenFileBuff()->setOptionalBasePackageGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalBasePackageGelIdValue() != value ) {
			getGenFileBuff()->setOptionalBasePackageGelIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSubPackageNameNull() {
		return( getGenFileBuff()->isOptionalSubPackageNameNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalSubPackageNameValue() {
		return( getGenFileBuff()->getOptionalSubPackageNameValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalSubPackageNameReference() {
		return( getGenFileBuff()->getOptionalSubPackageNameReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageNameNull() {
		if( ! getGenFileBuff()->isOptionalSubPackageNameNull() ) {
			getGenFileBuff()->setOptionalSubPackageNameNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageNameValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalSubPackageNameNull() ) {
			getGenFileBuff()->setOptionalSubPackageNameValue( value );
		}
		else if( getGenFileBuff()->getOptionalSubPackageNameValue() != value ) {
			getGenFileBuff()->setOptionalSubPackageNameValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSubPackageTenantIdNull() {
		return( getGenFileBuff()->isOptionalSubPackageTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalSubPackageTenantIdValue() {
		return( getGenFileBuff()->getOptionalSubPackageTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalSubPackageTenantIdReference() {
		return( getGenFileBuff()->getOptionalSubPackageTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalSubPackageTenantIdNull() ) {
			getGenFileBuff()->setOptionalSubPackageTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalSubPackageTenantIdNull() ) {
			getGenFileBuff()->setOptionalSubPackageTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalSubPackageTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalSubPackageTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSubPackageGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalSubPackageGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalSubPackageGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalSubPackageGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalSubPackageGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalSubPackageGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalSubPackageGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalSubPackageGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalSubPackageGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalSubPackageGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalSubPackageGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalSubPackageGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalSubPackageGelIdNull() {
		return( getGenFileBuff()->isOptionalSubPackageGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalSubPackageGelIdValue() {
		return( getGenFileBuff()->getOptionalSubPackageGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalSubPackageGelIdReference() {
		return( getGenFileBuff()->getOptionalSubPackageGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageGelIdNull() {
		if( ! getGenFileBuff()->isOptionalSubPackageGelIdNull() ) {
			getGenFileBuff()->setOptionalSubPackageGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalSubPackageGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalSubPackageGelIdNull() ) {
			getGenFileBuff()->setOptionalSubPackageGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalSubPackageGelIdValue() != value ) {
			getGenFileBuff()->setOptionalSubPackageGelIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionClassNameNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalExpansionClassNameValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalExpansionClassNameReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameNull() {
		if( ! getGenFileBuff()->isOptionalExpansionClassNameNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalExpansionClassNameNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionClassNameValue() != value ) {
			getGenFileBuff()->setOptionalExpansionClassNameValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionClassNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionClassNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionClassNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionClassNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionClassNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionClassNameTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionClassNameTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionClassNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionClassNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionClassNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionClassNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionClassNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionClassNameGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionClassNameGelIdNull() {
		return( getGenFileBuff()->isOptionalExpansionClassNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionClassNameGelIdValue() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionClassNameGelIdReference() {
		return( getGenFileBuff()->getOptionalExpansionClassNameGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameGelIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionClassNameGelIdNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionClassNameGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionClassNameGelIdNull() ) {
			getGenFileBuff()->setOptionalExpansionClassNameGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionClassNameGelIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionClassNameGelIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionKeyNameNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalExpansionKeyNameValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalExpansionKeyNameReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameNull() {
		if( ! getGenFileBuff()->isOptionalExpansionKeyNameNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalExpansionKeyNameNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionKeyNameValue() != value ) {
			getGenFileBuff()->setOptionalExpansionKeyNameValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionKeyNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionKeyNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionKeyNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionKeyNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionKeyNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionKeyNameTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionKeyNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionKeyNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionKeyNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionKeyNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionKeyNameGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionKeyNameGelIdNull() {
		return( getGenFileBuff()->isOptionalExpansionKeyNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionKeyNameGelIdValue() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionKeyNameGelIdReference() {
		return( getGenFileBuff()->getOptionalExpansionKeyNameGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameGelIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionKeyNameGelIdNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionKeyNameGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionKeyNameGelIdNull() ) {
			getGenFileBuff()->setOptionalExpansionKeyNameGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionKeyNameGelIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionKeyNameGelIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionFileNameNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameNull() );
	}

	const std::string& CFGenKbGenFileEditObj::getOptionalExpansionFileNameValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameValue() );
	}

	const std::string* CFGenKbGenFileEditObj::getOptionalExpansionFileNameReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameNull() {
		if( ! getGenFileBuff()->isOptionalExpansionFileNameNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameValue( const std::string& value ) {
		if( getGenFileBuff()->isOptionalExpansionFileNameNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionFileNameValue() != value ) {
			getGenFileBuff()->setOptionalExpansionFileNameValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionFileNameTenantIdNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameTenantIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionFileNameTenantIdValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameTenantIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionFileNameTenantIdReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameTenantIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameTenantIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionFileNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameTenantIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameTenantIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionFileNameTenantIdNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameTenantIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionFileNameTenantIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionFileNameTenantIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionFileNameGelCacheIdNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameGelCacheIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionFileNameGelCacheIdValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionFileNameGelCacheIdReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameGelCacheIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionFileNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameGelCacheIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameGelCacheIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionFileNameGelCacheIdNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameGelCacheIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionFileNameGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenFileEditObj::isOptionalExpansionFileNameGelIdNull() {
		return( getGenFileBuff()->isOptionalExpansionFileNameGelIdNull() );
	}

	const int64_t CFGenKbGenFileEditObj::getOptionalExpansionFileNameGelIdValue() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelIdValue() );
	}

	const int64_t* CFGenKbGenFileEditObj::getOptionalExpansionFileNameGelIdReference() {
		return( getGenFileBuff()->getOptionalExpansionFileNameGelIdReference() );
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameGelIdNull() {
		if( ! getGenFileBuff()->isOptionalExpansionFileNameGelIdNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameGelIdNull();
		}
	}

	void CFGenKbGenFileEditObj::setOptionalExpansionFileNameGelIdValue( const int64_t value ) {
		if( getGenFileBuff()->isOptionalExpansionFileNameGelIdNull() ) {
			getGenFileBuff()->setOptionalExpansionFileNameGelIdValue( value );
		}
		else if( getGenFileBuff()->getOptionalExpansionFileNameGelIdValue() != value ) {
			getGenFileBuff()->setOptionalExpansionFileNameGelIdValue( value );
		}
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsSrcBundleGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalSourceBundleTenantIdValue(),
					getGenFileBuff()->getOptionalSourceBundleGelCacheIdValue(),
					getGenFileBuff()->getOptionalSourceBundleGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsSrcBundleGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalSourceBundleTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalSourceBundleGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalSourceBundleGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalSourceBundleTenantIdNull();
				getGenFileBuff()->setOptionalSourceBundleGelCacheIdNull();
				getGenFileBuff()->setOptionalSourceBundleGelIdNull();
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsBasePackageGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalBasePackageTenantIdValue(),
					getGenFileBuff()->getOptionalBasePackageGelCacheIdValue(),
					getGenFileBuff()->getOptionalBasePackageGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsBasePackageGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalBasePackageTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalBasePackageGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalBasePackageGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalBasePackageTenantIdNull();
				getGenFileBuff()->setOptionalBasePackageGelCacheIdNull();
				getGenFileBuff()->setOptionalBasePackageGelIdNull();
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsModuleNameGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalModuleNameTenantIdValue(),
					getGenFileBuff()->getOptionalModuleNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalModuleNameGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsModuleNameGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalModuleNameTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalModuleNameGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalModuleNameGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalModuleNameTenantIdNull();
				getGenFileBuff()->setOptionalModuleNameGelCacheIdNull();
				getGenFileBuff()->setOptionalModuleNameGelIdNull();
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsSubPackageGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalSubPackageTenantIdValue(),
					getGenFileBuff()->getOptionalSubPackageGelCacheIdValue(),
					getGenFileBuff()->getOptionalSubPackageGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsSubPackageGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalSubPackageTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalSubPackageGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalSubPackageGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalSubPackageTenantIdNull();
				getGenFileBuff()->setOptionalSubPackageGelCacheIdNull();
				getGenFileBuff()->setOptionalSubPackageGelIdNull();
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsExpClassGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalExpansionClassNameTenantIdValue(),
					getGenFileBuff()->getOptionalExpansionClassNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalExpansionClassNameGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsExpClassGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalExpansionClassNameTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalExpansionClassNameGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalExpansionClassNameGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalExpansionClassNameTenantIdNull();
				getGenFileBuff()->setOptionalExpansionClassNameGelCacheIdNull();
				getGenFileBuff()->setOptionalExpansionClassNameGelIdNull();
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsExpKeyNameGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalExpansionKeyNameTenantIdValue(),
					getGenFileBuff()->getOptionalExpansionKeyNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalExpansionKeyNameGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsExpKeyNameGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalExpansionKeyNameTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalExpansionKeyNameGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalExpansionKeyNameGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalExpansionKeyNameTenantIdNull();
				getGenFileBuff()->setOptionalExpansionKeyNameGelCacheIdNull();
				getGenFileBuff()->setOptionalExpansionKeyNameGelIdNull();
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenFileEditObj::getOptionalComponentsExpFileNameGel( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenFile()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenFileBuff()->getOptionalExpansionFileNameTenantIdValue(),
					getGenFileBuff()->getOptionalExpansionFileNameGelCacheIdValue(),
					getGenFileBuff()->getOptionalExpansionFileNameGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenFileEditObj::setOptionalComponentsExpFileNameGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenFileBuff()->setOptionalExpansionFileNameTenantIdValue( value->getRequiredTenantId() );
				getGenFileBuff()->setOptionalExpansionFileNameGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenFileBuff()->setOptionalExpansionFileNameGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenFileBuff()->setOptionalExpansionFileNameTenantIdNull();
				getGenFileBuff()->setOptionalExpansionFileNameGelCacheIdNull();
				getGenFileBuff()->setOptionalExpansionFileNameGelIdNull();
			}
		}

	void CFGenKbGenFileEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGenFileBuff* origBuff = getOrigAsGenFile()->getGenFileBuff();
		cfcore::CFGenKbGenFileBuff* myBuff = getGenFileBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGenFileEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGenFileBuff* origBuff = getOrigAsGenFile()->getGenFileBuff();
		cfcore::CFGenKbGenFileBuff* myBuff = getGenFileBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
