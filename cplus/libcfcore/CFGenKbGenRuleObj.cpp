// Description: C++18 base object instance implementation for CFGenKb GenRule.

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
#include <cfgenkbobj/ICFGenKbGenItemObj.hpp>
#include <cfgenkbobj/CFGenKbGenItemObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGenRuleObj.hpp>

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

	const std::string CFGenKbGenRuleObj::CLASS_NAME( "CFGenKbGenRuleObj" );
	const classcode_t CFGenKbGenRuleObj::CLASS_CODE = 0xa923L;

	const std::string& CFGenKbGenRuleObj::getRequiredDefinedNear() {
		return( getGenRuleBuff()->getRequiredDefinedNear() );
	}

	const std::string* CFGenKbGenRuleObj::getRequiredDefinedNearReference() {
		return( getGenRuleBuff()->getRequiredDefinedNearReference() );
	}

	const std::string& CFGenKbGenRuleObj::getRequiredBody() {
		return( getGenRuleBuff()->getRequiredBody() );
	}

	const std::string* CFGenKbGenRuleObj::getRequiredBodyReference() {
		return( getGenRuleBuff()->getRequiredBodyReference() );
	}

	bool CFGenKbGenRuleObj::isOptionalBodyTenantIdNull() {
		return( getGenRuleBuff()->isOptionalBodyTenantIdNull() );
	}

	const int64_t CFGenKbGenRuleObj::getOptionalBodyTenantIdValue() {
		return( getGenRuleBuff()->getOptionalBodyTenantIdValue() );
	}

	const int64_t* CFGenKbGenRuleObj::getOptionalBodyTenantIdReference() {
		return( getGenRuleBuff()->getOptionalBodyTenantIdReference() );
	}

	bool CFGenKbGenRuleObj::isOptionalBodyGelCacheIdNull() {
		return( getGenRuleBuff()->isOptionalBodyGelCacheIdNull() );
	}

	const int64_t CFGenKbGenRuleObj::getOptionalBodyGelCacheIdValue() {
		return( getGenRuleBuff()->getOptionalBodyGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenRuleObj::getOptionalBodyGelCacheIdReference() {
		return( getGenRuleBuff()->getOptionalBodyGelCacheIdReference() );
	}

	bool CFGenKbGenRuleObj::isOptionalBodyGelIdNull() {
		return( getGenRuleBuff()->isOptionalBodyGelIdNull() );
	}

	const int64_t CFGenKbGenRuleObj::getOptionalBodyGelIdValue() {
		return( getGenRuleBuff()->getOptionalBodyGelIdValue() );
	}

	const int64_t* CFGenKbGenRuleObj::getOptionalBodyGelIdReference() {
		return( getGenRuleBuff()->getOptionalBodyGelIdReference() );
	}


	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenRuleObj::getOptionalComponentsBodyGel( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenRuleBuff()->getOptionalBodyTenantIdValue(),
					getGenRuleBuff()->getOptionalBodyGelCacheIdValue(),
					getGenRuleBuff()->getOptionalBodyGelIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGenRuleObj::CFGenKbGenRuleObj()
	: ICFGenKbGenRuleObj(),
	  CFGenKbGenItemObj()
	{
	}

	CFGenKbGenRuleObj::CFGenKbGenRuleObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGenRuleObj(),
	  CFGenKbGenItemObj( argSchema )
	{
	}

	CFGenKbGenRuleObj::~CFGenKbGenRuleObj() {
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenRuleObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGenRuleBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenRule()->readDerivedByItemIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredCartridgeId(),
						getPKey()->getRequiredItemId() );
			}
		}
		return( buff );
	}

	void CFGenKbGenRuleObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGenRuleObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenRuleObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGenRuleObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenRuleBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGenItemObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGenRuleObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenRuleObj" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGenRuleObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbGenRuleObj::getGenDefName() {
		return( cfcore::CFGenKbGenRuleBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenRuleObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGenRuleObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenRuleObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGenRuleObj::getObjQualifiedName() {
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

	std::string CFGenKbGenRuleObj::getObjFullName() {
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenRuleObj::realize() {
		cfcore::ICFGenKbGenRuleObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenRuleTableObj()->realizeGenRule(
			(cfcore::ICFGenKbGenRuleObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( retobj ) );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenRuleObj::read( bool forceRead ) {
		cfcore::ICFGenKbGenRuleObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenRuleTableObj()->readGenRuleByItemIdIdx( getGenRuleBuff()->getRequiredTenantId(),
		getGenRuleBuff()->getRequiredCartridgeId(),
		getGenRuleBuff()->getRequiredItemId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( retobj ) );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenRuleObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGenRuleObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenRuleTableObj()->lockGenRule( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenRuleTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGenRuleEditObj* CFGenKbGenRuleObj::getGenRuleEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGenRuleEditObj*>( edit ) );
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

	ICFGenKbGelExecutableObj* CFGenKbGenRuleObj::getBodyBin( MssCFGelCompiler* gelCompiler, ICFGenKbGenRuleObj* genRule ) {
		static const std::string S_ProcName( "GenRule.getBodyBin" );
		static const std::string S_CouldNotCompileBodyGel( "Could not compile Body GEL executable from source \"" );
		static const std::string S_DQuote( "\" near " );
		static const std::string S_Dash( " - " );
		static const std::string S_ColonColon( "::" );
		static const std::string S_Object( "Object" );
		static const std::string S_ColonColonBody( "::Body" );
		ICFGenKbGelExecutableObj* bin = genRule->getOptionalComponentsBodyGel();
		if( bin == NULL ) {
			std::string execName( genRule->getRequiredLookupToolSet()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genRule->getRequiredLookupRuleType()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( ( genRule->getOptionalLookupScopeDef() == NULL ) ? std::string( S_Object ) : genRule->getOptionalLookupScopeDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genRule->getRequiredLookupGenDef()->getRequiredName() );
			execName.append( S_ColonColon );
			execName.append( genRule->getRequiredName() );
			execName.append( S_ColonColonBody );
			std::string source = genRule->getRequiredBody();
			bin = gelCompiler->compileExecutable( execName, source );
			ICFGenKbGenRuleEditObj* editRule = genRule->getGenRuleEdit();
			if( editRule != NULL ) {
				editRule->setOptionalComponentsBodyGel( bin );
			}
			else {
				editRule = dynamic_cast<ICFGenKbGenRuleEditObj*>( genRule->beginEdit() );
				editRule->setOptionalComponentsBodyGel( bin );
				editRule->update();
				editRule = NULL;
			}
		}
		return( bin );
	}

}
