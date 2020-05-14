// Description: C++18 edit object instance implementation for CFGenKb GenRule.

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
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbGenRuleEditObj::CLASS_NAME( "CFGenKbGenRuleEditObj" );

	CFGenKbGenRuleEditObj::CFGenKbGenRuleEditObj( cfcore::ICFGenKbGenRuleObj* argOrig )
	: ICFGenKbGenRuleEditObj(),
	  CFGenKbGenItemEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGenRuleEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGenRuleEditObj::~CFGenKbGenRuleEditObj() {
	}

	const std::string& CFGenKbGenRuleEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenRuleEditObj::getClassCode() const {
		return( cfcore::CFGenKbGenRuleBuff::CLASS_CODE );
	}

	bool CFGenKbGenRuleEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGenItemEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGenRuleEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenRuleEditObj" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGenRuleEditObj::getGenDefName() {
		return( cfcore::CFGenKbGenRuleBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenRuleEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGenRuleEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenRuleEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGenRuleEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGenRuleEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenRuleEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGenRuleObj* retobj = getSchema()->getGenRuleTableObj()->realizeGenRule( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenRuleEditObj::create() {
		cfcore::ICFGenKbGenRuleObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenRule()->getSchema() )->getGenRuleTableObj()->createGenRule( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenRuleEditObj::update() {
		getSchema()->getGenRuleTableObj()->updateGenRule( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenRuleEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGenRuleTableObj()->deleteGenRule( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenRuleTableObj* CFGenKbGenRuleEditObj::getGenRuleTable() {
		return( orig->getSchema()->getGenRuleTableObj() );
	}

	cfcore::ICFGenKbGenRuleEditObj* CFGenKbGenRuleEditObj::getGenRuleEdit() {
		return( (cfcore::ICFGenKbGenRuleEditObj*)this );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenRuleEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGenRuleObj* CFGenKbGenRuleEditObj::getOrigAsGenRule() {
		return( dynamic_cast<cfcore::ICFGenKbGenRuleObj*>( orig ) );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenRuleEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGenRuleEditObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( buff != value ) {
			CFGenKbGenItemEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGenRuleEditObj::getRequiredDefinedNear() {
		return( getGenRuleBuff()->getRequiredDefinedNear() );
	}

	const std::string* CFGenKbGenRuleEditObj::getRequiredDefinedNearReference() {
		return( getGenRuleBuff()->getRequiredDefinedNearReference() );
	}

	void CFGenKbGenRuleEditObj::setRequiredDefinedNear( const std::string& value ) {
		if( getGenRuleBuff()->getRequiredDefinedNear() != value ) {
			getGenRuleBuff()->setRequiredDefinedNear( value );
		}
	}

	const std::string& CFGenKbGenRuleEditObj::getRequiredBody() {
		return( getGenRuleBuff()->getRequiredBody() );
	}

	const std::string* CFGenKbGenRuleEditObj::getRequiredBodyReference() {
		return( getGenRuleBuff()->getRequiredBodyReference() );
	}

	void CFGenKbGenRuleEditObj::setRequiredBody( const std::string& value ) {
		if( getGenRuleBuff()->getRequiredBody() != value ) {
			getGenRuleBuff()->setRequiredBody( value );
		}
	}

	bool CFGenKbGenRuleEditObj::isOptionalBodyTenantIdNull() {
		return( getGenRuleBuff()->isOptionalBodyTenantIdNull() );
	}

	const int64_t CFGenKbGenRuleEditObj::getOptionalBodyTenantIdValue() {
		return( getGenRuleBuff()->getOptionalBodyTenantIdValue() );
	}

	const int64_t* CFGenKbGenRuleEditObj::getOptionalBodyTenantIdReference() {
		return( getGenRuleBuff()->getOptionalBodyTenantIdReference() );
	}

	void CFGenKbGenRuleEditObj::setOptionalBodyTenantIdNull() {
		if( ! getGenRuleBuff()->isOptionalBodyTenantIdNull() ) {
			getGenRuleBuff()->setOptionalBodyTenantIdNull();
		}
	}

	void CFGenKbGenRuleEditObj::setOptionalBodyTenantIdValue( const int64_t value ) {
		if( getGenRuleBuff()->isOptionalBodyTenantIdNull() ) {
			getGenRuleBuff()->setOptionalBodyTenantIdValue( value );
		}
		else if( getGenRuleBuff()->getOptionalBodyTenantIdValue() != value ) {
			getGenRuleBuff()->setOptionalBodyTenantIdValue( value );
		}
	}

	bool CFGenKbGenRuleEditObj::isOptionalBodyGelCacheIdNull() {
		return( getGenRuleBuff()->isOptionalBodyGelCacheIdNull() );
	}

	const int64_t CFGenKbGenRuleEditObj::getOptionalBodyGelCacheIdValue() {
		return( getGenRuleBuff()->getOptionalBodyGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenRuleEditObj::getOptionalBodyGelCacheIdReference() {
		return( getGenRuleBuff()->getOptionalBodyGelCacheIdReference() );
	}

	void CFGenKbGenRuleEditObj::setOptionalBodyGelCacheIdNull() {
		if( ! getGenRuleBuff()->isOptionalBodyGelCacheIdNull() ) {
			getGenRuleBuff()->setOptionalBodyGelCacheIdNull();
		}
	}

	void CFGenKbGenRuleEditObj::setOptionalBodyGelCacheIdValue( const int64_t value ) {
		if( getGenRuleBuff()->isOptionalBodyGelCacheIdNull() ) {
			getGenRuleBuff()->setOptionalBodyGelCacheIdValue( value );
		}
		else if( getGenRuleBuff()->getOptionalBodyGelCacheIdValue() != value ) {
			getGenRuleBuff()->setOptionalBodyGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenRuleEditObj::isOptionalBodyGelIdNull() {
		return( getGenRuleBuff()->isOptionalBodyGelIdNull() );
	}

	const int64_t CFGenKbGenRuleEditObj::getOptionalBodyGelIdValue() {
		return( getGenRuleBuff()->getOptionalBodyGelIdValue() );
	}

	const int64_t* CFGenKbGenRuleEditObj::getOptionalBodyGelIdReference() {
		return( getGenRuleBuff()->getOptionalBodyGelIdReference() );
	}

	void CFGenKbGenRuleEditObj::setOptionalBodyGelIdNull() {
		if( ! getGenRuleBuff()->isOptionalBodyGelIdNull() ) {
			getGenRuleBuff()->setOptionalBodyGelIdNull();
		}
	}

	void CFGenKbGenRuleEditObj::setOptionalBodyGelIdValue( const int64_t value ) {
		if( getGenRuleBuff()->isOptionalBodyGelIdNull() ) {
			getGenRuleBuff()->setOptionalBodyGelIdValue( value );
		}
		else if( getGenRuleBuff()->getOptionalBodyGelIdValue() != value ) {
			getGenRuleBuff()->setOptionalBodyGelIdValue( value );
		}
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenRuleEditObj::getOptionalComponentsBodyGel( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;

			if( getGenRuleBuff()->isOptionalBodyTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenRuleBuff()->isOptionalBodyGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenRuleBuff()->isOptionalBodyGelIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenRule()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenRuleBuff()->getOptionalBodyTenantIdValue(),
					getGenRuleBuff()->getOptionalBodyGelCacheIdValue(),
					getGenRuleBuff()->getOptionalBodyGelIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenRuleEditObj::setOptionalComponentsBodyGel( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenRuleBuff()->setOptionalBodyTenantIdValue( value->getRequiredTenantId() );
				getGenRuleBuff()->setOptionalBodyGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenRuleBuff()->setOptionalBodyGelIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenRuleBuff()->setOptionalBodyTenantIdNull();
				getGenRuleBuff()->setOptionalBodyGelCacheIdNull();
				getGenRuleBuff()->setOptionalBodyGelIdNull();
			}
		}

	void CFGenKbGenRuleEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGenRuleBuff* origBuff = getOrigAsGenRule()->getGenRuleBuff();
		cfcore::CFGenKbGenRuleBuff* myBuff = getGenRuleBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGenRuleEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGenRuleBuff* origBuff = getOrigAsGenRule()->getGenRuleBuff();
		cfcore::CFGenKbGenRuleBuff* myBuff = getGenRuleBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
