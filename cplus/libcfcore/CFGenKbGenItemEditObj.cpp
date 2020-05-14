// Description: C++18 edit object instance implementation for CFGenKb GenItem.

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
#include <cfgenkbobj/CFGenKbGenItemEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbGenItemEditObj::CLASS_NAME( "CFGenKbGenItemEditObj" );

	CFGenKbGenItemEditObj::CFGenKbGenItemEditObj( cfcore::ICFGenKbGenItemObj* argOrig )
	: ICFGenKbGenItemEditObj()
	{
		static const std::string S_ProcName( "CFGenKbGenItemEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbGenItemBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbGenItemBuff*>( origBuff->clone() );
	}

	CFGenKbGenItemEditObj::~CFGenKbGenItemEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbGenItemEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenItemEditObj::getClassCode() const {
		return( cfcore::CFGenKbGenItemBuff::CLASS_CODE );
	}

	bool CFGenKbGenItemEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGenItemEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemEditObj" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbGenItemEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbGenItemEditObj::setRequiredRevision( int32_t value ) {
		getGenItemBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbGenItemEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbGenItemEditObj::getGenDefName() {
		return( cfcore::CFGenKbGenItemBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemEditObj::getScope() {
		cfcore::ICFGenKbRuleCartObj* scope = getRequiredContainerCartridge();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemEditObj::getObjScope() {
		cfcore::ICFGenKbRuleCartObj* scope = getRequiredContainerCartridge();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGenItemEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGenItemEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGenItemEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGenItemObj* retobj = getSchema()->getGenItemTableObj()->realizeGenItem( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbGenItemObj* retval = getOrigAsGenItem()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemEditObj::create() {
		cfcore::ICFGenKbGenItemObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getGenItemTableObj()->createGenItem( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemEditObj::update() {
		getSchema()->getGenItemTableObj()->updateGenItem( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGenItemTableObj()->deleteGenItem( this );
		return( NULL );
	}

	cfcore::ICFGenKbGenItemTableObj* CFGenKbGenItemEditObj::getGenItemTable() {
		return( orig->getSchema()->getGenItemTableObj() );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemEditObj::getGenItemEdit() {
		return( (cfcore::ICFGenKbGenItemEditObj*)this );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbGenItemEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemEditObj::getOrigAsGenItem() {
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGenItemEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenItemEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGenItemEditObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbGenItemPKey* CFGenKbGenItemEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbGenItemEditObj::setPKey( cfcore::CFGenKbGenItemPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbGenItemEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbGenItemEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbGenItemEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGenItemEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGenItemEditObj::getRequiredCartridgeId() {
		return( getPKey()->getRequiredCartridgeId() );
	}

	const int64_t* CFGenKbGenItemEditObj::getRequiredCartridgeIdReference() {
		return( getPKey()->getRequiredCartridgeIdReference() );
	}

	const int64_t CFGenKbGenItemEditObj::getRequiredItemId() {
		return( getPKey()->getRequiredItemId() );
	}

	const int64_t* CFGenKbGenItemEditObj::getRequiredItemIdReference() {
		return( getPKey()->getRequiredItemIdReference() );
	}

	const int16_t CFGenKbGenItemEditObj::getRequiredRuleTypeId() {
		return( getGenItemBuff()->getRequiredRuleTypeId() );
	}

	const int16_t* CFGenKbGenItemEditObj::getRequiredRuleTypeIdReference() {
		return( getGenItemBuff()->getRequiredRuleTypeIdReference() );
	}

	const std::string& CFGenKbGenItemEditObj::getRequiredName() {
		return( getGenItemBuff()->getRequiredName() );
	}

	const std::string* CFGenKbGenItemEditObj::getRequiredNameReference() {
		return( getGenItemBuff()->getRequiredNameReference() );
	}

	void CFGenKbGenItemEditObj::setRequiredName( const std::string& value ) {
		if( getGenItemBuff()->getRequiredName() != value ) {
			getGenItemBuff()->setRequiredName( value );
		}
	}

	const int16_t CFGenKbGenItemEditObj::getRequiredToolSetId() {
		return( getGenItemBuff()->getRequiredToolSetId() );
	}

	const int16_t* CFGenKbGenItemEditObj::getRequiredToolSetIdReference() {
		return( getGenItemBuff()->getRequiredToolSetIdReference() );
	}

	bool CFGenKbGenItemEditObj::isOptionalScopeDefIdNull() {
		return( getGenItemBuff()->isOptionalScopeDefIdNull() );
	}

	const int16_t CFGenKbGenItemEditObj::getOptionalScopeDefIdValue() {
		return( getGenItemBuff()->getOptionalScopeDefIdValue() );
	}

	const int16_t* CFGenKbGenItemEditObj::getOptionalScopeDefIdReference() {
		return( getGenItemBuff()->getOptionalScopeDefIdReference() );
	}

	const int16_t CFGenKbGenItemEditObj::getRequiredGenDefId() {
		return( getGenItemBuff()->getRequiredGenDefId() );
	}

	const int16_t* CFGenKbGenItemEditObj::getRequiredGenDefIdReference() {
		return( getGenItemBuff()->getRequiredGenDefIdReference() );
	}

	bool CFGenKbGenItemEditObj::isOptionalGelExecutableTenantIdNull() {
		return( getGenItemBuff()->isOptionalGelExecutableTenantIdNull() );
	}

	const int64_t CFGenKbGenItemEditObj::getOptionalGelExecutableTenantIdValue() {
		return( getGenItemBuff()->getOptionalGelExecutableTenantIdValue() );
	}

	const int64_t* CFGenKbGenItemEditObj::getOptionalGelExecutableTenantIdReference() {
		return( getGenItemBuff()->getOptionalGelExecutableTenantIdReference() );
	}

	void CFGenKbGenItemEditObj::setOptionalGelExecutableTenantIdNull() {
		if( ! getGenItemBuff()->isOptionalGelExecutableTenantIdNull() ) {
			getGenItemBuff()->setOptionalGelExecutableTenantIdNull();
		}
	}

	void CFGenKbGenItemEditObj::setOptionalGelExecutableTenantIdValue( const int64_t value ) {
		if( getGenItemBuff()->isOptionalGelExecutableTenantIdNull() ) {
			getGenItemBuff()->setOptionalGelExecutableTenantIdValue( value );
		}
		else if( getGenItemBuff()->getOptionalGelExecutableTenantIdValue() != value ) {
			getGenItemBuff()->setOptionalGelExecutableTenantIdValue( value );
		}
	}

	bool CFGenKbGenItemEditObj::isOptionalGelExecutableGelCacheIdNull() {
		return( getGenItemBuff()->isOptionalGelExecutableGelCacheIdNull() );
	}

	const int64_t CFGenKbGenItemEditObj::getOptionalGelExecutableGelCacheIdValue() {
		return( getGenItemBuff()->getOptionalGelExecutableGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenItemEditObj::getOptionalGelExecutableGelCacheIdReference() {
		return( getGenItemBuff()->getOptionalGelExecutableGelCacheIdReference() );
	}

	void CFGenKbGenItemEditObj::setOptionalGelExecutableGelCacheIdNull() {
		if( ! getGenItemBuff()->isOptionalGelExecutableGelCacheIdNull() ) {
			getGenItemBuff()->setOptionalGelExecutableGelCacheIdNull();
		}
	}

	void CFGenKbGenItemEditObj::setOptionalGelExecutableGelCacheIdValue( const int64_t value ) {
		if( getGenItemBuff()->isOptionalGelExecutableGelCacheIdNull() ) {
			getGenItemBuff()->setOptionalGelExecutableGelCacheIdValue( value );
		}
		else if( getGenItemBuff()->getOptionalGelExecutableGelCacheIdValue() != value ) {
			getGenItemBuff()->setOptionalGelExecutableGelCacheIdValue( value );
		}
	}

	bool CFGenKbGenItemEditObj::isOptionalGelExecutableIdNull() {
		return( getGenItemBuff()->isOptionalGelExecutableIdNull() );
	}

	const int64_t CFGenKbGenItemEditObj::getOptionalGelExecutableIdValue() {
		return( getGenItemBuff()->getOptionalGelExecutableIdValue() );
	}

	const int64_t* CFGenKbGenItemEditObj::getOptionalGelExecutableIdReference() {
		return( getGenItemBuff()->getOptionalGelExecutableIdReference() );
	}

	void CFGenKbGenItemEditObj::setOptionalGelExecutableIdNull() {
		if( ! getGenItemBuff()->isOptionalGelExecutableIdNull() ) {
			getGenItemBuff()->setOptionalGelExecutableIdNull();
		}
	}

	void CFGenKbGenItemEditObj::setOptionalGelExecutableIdValue( const int64_t value ) {
		if( getGenItemBuff()->isOptionalGelExecutableIdNull() ) {
			getGenItemBuff()->setOptionalGelExecutableIdValue( value );
		}
		else if( getGenItemBuff()->getOptionalGelExecutableIdValue() != value ) {
			getGenItemBuff()->setOptionalGelExecutableIdValue( value );
		}
	}

	bool CFGenKbGenItemEditObj::isOptionalProbeTenantIdNull() {
		return( getGenItemBuff()->isOptionalProbeTenantIdNull() );
	}

	const int64_t CFGenKbGenItemEditObj::getOptionalProbeTenantIdValue() {
		return( getGenItemBuff()->getOptionalProbeTenantIdValue() );
	}

	const int64_t* CFGenKbGenItemEditObj::getOptionalProbeTenantIdReference() {
		return( getGenItemBuff()->getOptionalProbeTenantIdReference() );
	}

	bool CFGenKbGenItemEditObj::isOptionalProbeCartridgeIdNull() {
		return( getGenItemBuff()->isOptionalProbeCartridgeIdNull() );
	}

	const int64_t CFGenKbGenItemEditObj::getOptionalProbeCartridgeIdValue() {
		return( getGenItemBuff()->getOptionalProbeCartridgeIdValue() );
	}

	const int64_t* CFGenKbGenItemEditObj::getOptionalProbeCartridgeIdReference() {
		return( getGenItemBuff()->getOptionalProbeCartridgeIdReference() );
	}

	bool CFGenKbGenItemEditObj::isOptionalProbeGenItemIdNull() {
		return( getGenItemBuff()->isOptionalProbeGenItemIdNull() );
	}

	const int64_t CFGenKbGenItemEditObj::getOptionalProbeGenItemIdValue() {
		return( getGenItemBuff()->getOptionalProbeGenItemIdValue() );
	}

	const int64_t* CFGenKbGenItemEditObj::getOptionalProbeGenItemIdReference() {
		return( getGenItemBuff()->getOptionalProbeGenItemIdReference() );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbGenItemEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getGenItemBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbRuleCartObj* CFGenKbGenItemEditObj::getRequiredContainerCartridge( bool forceRead ) {
		cfcore::ICFGenKbRuleCartObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getRuleCartTableObj()->readRuleCartByIdIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredCartridgeId() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setRequiredContainerCartridge( cfcore::ICFGenKbRuleCartObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getGenItemBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getPKey()->setRequiredCartridgeId
( value->getRequiredId() );
				getGenItemBuff()->setRequiredCartridgeId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbGenItemEditObj::getRequiredLookupRuleType( bool forceRead ) {
		cfcore::ICFGenKbRuleTypeObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getRuleTypeTableObj()->readRuleTypeByIdIdx( getGenItemBuff()->getRequiredRuleTypeId() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setRequiredLookupRuleType( cfcore::ICFGenKbRuleTypeObj* value ) {
			
			if( value != NULL ) {
				getGenItemBuff()->setRequiredRuleTypeId( value->getRequiredId() );
			}
			else {
			}
		}

	cfcore::ICFGenKbToolSetObj* CFGenKbGenItemEditObj::getRequiredLookupToolSet( bool forceRead ) {
		cfcore::ICFGenKbToolSetObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getToolSetTableObj()->readToolSetByIdIdx( getGenItemBuff()->getRequiredToolSetId() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setRequiredLookupToolSet( cfcore::ICFGenKbToolSetObj* value ) {
			
			if( value != NULL ) {
				getGenItemBuff()->setRequiredToolSetId( value->getRequiredId() );
			}
			else {
			}
		}

	cfcore::ICFGenKbDefClassObj* CFGenKbGenItemEditObj::getOptionalLookupScopeDef( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = NULL;
		bool anyMissing = false;

			if( getGenItemBuff()->isOptionalScopeDefIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getGenItemBuff()->getOptionalScopeDefIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setOptionalLookupScopeDef( cfcore::ICFGenKbDefClassObj* value ) {
			
			if( value != NULL ) {
				getGenItemBuff()->setOptionalScopeDefIdValue( value->getRequiredId() );
			}
			else {
				getGenItemBuff()->setOptionalScopeDefIdNull();
			}
		}

	cfcore::ICFGenKbDefClassObj* CFGenKbGenItemEditObj::getRequiredLookupGenDef( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getGenItemBuff()->getRequiredGenDefId() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setRequiredLookupGenDef( cfcore::ICFGenKbDefClassObj* value ) {
			
			if( value != NULL ) {
				getGenItemBuff()->setRequiredGenDefId( value->getRequiredId() );
			}
			else {
			}
		}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenItemEditObj::getOptionalComponentsGelExec( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = NULL;
		bool anyMissing = false;

			if( getGenItemBuff()->isOptionalGelExecutableTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenItemBuff()->isOptionalGelExecutableGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGenItemBuff()->isOptionalGelExecutableIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenItemBuff()->getOptionalGelExecutableTenantIdValue(),
					getGenItemBuff()->getOptionalGelExecutableGelCacheIdValue(),
					getGenItemBuff()->getOptionalGelExecutableIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setOptionalComponentsGelExec( cfcore::ICFGenKbGelExecutableObj* value ) {
			
			if( value != NULL ) {
				getGenItemBuff()->setOptionalGelExecutableTenantIdValue( value->getRequiredTenantId() );
				getGenItemBuff()->setOptionalGelExecutableGelCacheIdValue( value->getRequiredGelCacheId() );
				getGenItemBuff()->setOptionalGelExecutableIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGenItemBuff()->setOptionalGelExecutableTenantIdNull();
				getGenItemBuff()->setOptionalGelExecutableGelCacheIdNull();
				getGenItemBuff()->setOptionalGelExecutableIdNull();
			}
		}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemEditObj::getOptionalLookupProbe( bool forceRead ) {
		cfcore::ICFGenKbGenItemObj* retobj = NULL;
		bool anyMissing = false;

			if( getGenItemBuff()->isOptionalProbeTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGenItemBuff()->isOptionalProbeCartridgeIdNull() ) {
				anyMissing = true;
			}
			if( getGenItemBuff()->isOptionalProbeGenItemIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGenItem()->getSchema() )->getGenItemTableObj()->readGenItemByItemIdIdx( getGenItemBuff()->getOptionalProbeTenantIdValue(),
					getGenItemBuff()->getOptionalProbeCartridgeIdValue(),
					getGenItemBuff()->getOptionalProbeGenItemIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGenItemEditObj::setOptionalLookupProbe( cfcore::ICFGenKbGenItemObj* value ) {
			
			if( value != NULL ) {
				getGenItemBuff()->setOptionalProbeTenantIdValue( value->getRequiredTenantId() );
				getGenItemBuff()->setOptionalProbeCartridgeIdValue( value->getRequiredCartridgeId() );
				getGenItemBuff()->setOptionalProbeGenItemIdValue( value->getRequiredItemId() );
			}
			else {
				getGenItemBuff()->setOptionalProbeTenantIdNull();
				getGenItemBuff()->setOptionalProbeCartridgeIdNull();
				getGenItemBuff()->setOptionalProbeGenItemIdNull();
			}
		}

	void CFGenKbGenItemEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbGenItemPKey* tablePKey = getPKey();
		cfcore::CFGenKbGenItemBuff* tableBuff = getGenItemBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredCartridgeId( tablePKey->getRequiredCartridgeId() );
		tableBuff->setRequiredItemId( tablePKey->getRequiredItemId() );
	}

	void CFGenKbGenItemEditObj::copyBuffToPKey() {
		cfcore::CFGenKbGenItemPKey* tablePKey = getPKey();
		cfcore::CFGenKbGenItemBuff* tableBuff = getGenItemBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredCartridgeId( tableBuff->getRequiredCartridgeId() );
		tablePKey->setRequiredItemId( tableBuff->getRequiredItemId() );
	}

	void CFGenKbGenItemEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGenItemBuff* origBuff = getOrigAsGenItem()->getGenItemBuff();
		cfcore::CFGenKbGenItemBuff* myBuff = getGenItemBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGenItemEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGenItemBuff* origBuff = getOrigAsGenItem()->getGenItemBuff();
		cfcore::CFGenKbGenItemBuff* myBuff = getGenItemBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
