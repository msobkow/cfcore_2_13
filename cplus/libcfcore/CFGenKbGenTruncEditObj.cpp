// Description: C++18 edit object instance implementation for CFGenKb GenTrunc.

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
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenTruncObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/ICFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>
#include <cfgenkbobj/CFGenKbGenRuleEditObj.hpp>
#include <cfgenkbobj/CFGenKbGenTruncEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbGenTruncEditObj::CLASS_NAME( "CFGenKbGenTruncEditObj" );

	CFGenKbGenTruncEditObj::CFGenKbGenTruncEditObj( cfcore::ICFGenKbGenTruncObj* argOrig )
	: ICFGenKbGenTruncEditObj(),
	  CFGenKbGenRuleEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGenTruncEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGenTruncEditObj::~CFGenKbGenTruncEditObj() {
	}

	const std::string& CFGenKbGenTruncEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenTruncEditObj::getClassCode() const {
		return( cfcore::CFGenKbGenTruncBuff::CLASS_CODE );
	}

	bool CFGenKbGenTruncEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenTruncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGenRuleEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGenTruncEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenTruncEditObj" );
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
		static const std::string S_TruncateAt( "TruncateAt" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TruncateAt, CFGenKbGenTruncEditObj::getRequiredTruncateAt() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGenTruncEditObj::getGenDefName() {
		return( cfcore::CFGenKbGenTruncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenTruncEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGenTruncEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenTruncEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGenTruncEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGenTruncEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenTruncEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGenTruncObj* retobj = getSchema()->getGenTruncTableObj()->realizeGenTrunc( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenTruncEditObj::create() {
		cfcore::ICFGenKbGenTruncObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenTrunc()->getSchema() )->getGenTruncTableObj()->createGenTrunc( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenTruncEditObj::update() {
		getSchema()->getGenTruncTableObj()->updateGenTrunc( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenTruncEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGenTruncTableObj()->deleteGenTrunc( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenTruncTableObj* CFGenKbGenTruncEditObj::getGenTruncTable() {
		return( orig->getSchema()->getGenTruncTableObj() );
	}

	cfcore::ICFGenKbGenTruncEditObj* CFGenKbGenTruncEditObj::getGenTruncEdit() {
		return( (cfcore::ICFGenKbGenTruncEditObj*)this );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenTruncEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGenTruncObj* CFGenKbGenTruncEditObj::getOrigAsGenTrunc() {
		return( dynamic_cast<cfcore::ICFGenKbGenTruncObj*>( orig ) );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenTruncEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGenTruncEditObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( buff != value ) {
			CFGenKbGenRuleEditObj::setBuff( value );
		}
	}

	const int32_t CFGenKbGenTruncEditObj::getRequiredTruncateAt() {
		return( getGenTruncBuff()->getRequiredTruncateAt() );
	}

	const int32_t* CFGenKbGenTruncEditObj::getRequiredTruncateAtReference() {
		return( getGenTruncBuff()->getRequiredTruncateAtReference() );
	}

	void CFGenKbGenTruncEditObj::setRequiredTruncateAt( const int32_t value ) {
		if( getGenTruncBuff()->getRequiredTruncateAt() != value ) {
			getGenTruncBuff()->setRequiredTruncateAt( value );
		}
	}

	void CFGenKbGenTruncEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGenTruncBuff* origBuff = getOrigAsGenTrunc()->getGenTruncBuff();
		cfcore::CFGenKbGenTruncBuff* myBuff = getGenTruncBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGenTruncEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGenTruncBuff* origBuff = getOrigAsGenTrunc()->getGenTruncBuff();
		cfcore::CFGenKbGenTruncBuff* myBuff = getGenTruncBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
