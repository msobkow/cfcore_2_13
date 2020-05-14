// Description: C++18 base object instance implementation for CFGenKb GenItem.

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

namespace cfcore {

	const std::string CFGenKbGenItemObj::CLASS_NAME( "CFGenKbGenItemObj" );
	const classcode_t CFGenKbGenItemObj::CLASS_CODE = 0xa920L;

	int32_t CFGenKbGenItemObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbGenItemObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGenItemObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGenItemObj::getRequiredCartridgeId() {
		return( getPKey()->getRequiredCartridgeId() );
	}

	const int64_t* CFGenKbGenItemObj::getRequiredCartridgeIdReference() {
		return( getPKey()->getRequiredCartridgeIdReference() );
	}

	const int64_t CFGenKbGenItemObj::getRequiredItemId() {
		return( getPKey()->getRequiredItemId() );
	}

	const int64_t* CFGenKbGenItemObj::getRequiredItemIdReference() {
		return( getPKey()->getRequiredItemIdReference() );
	}

	const int16_t CFGenKbGenItemObj::getRequiredRuleTypeId() {
		return( getGenItemBuff()->getRequiredRuleTypeId() );
	}

	const int16_t* CFGenKbGenItemObj::getRequiredRuleTypeIdReference() {
		return( getGenItemBuff()->getRequiredRuleTypeIdReference() );
	}

	const std::string& CFGenKbGenItemObj::getRequiredName() {
		return( getGenItemBuff()->getRequiredName() );
	}

	const std::string* CFGenKbGenItemObj::getRequiredNameReference() {
		return( getGenItemBuff()->getRequiredNameReference() );
	}

	const int16_t CFGenKbGenItemObj::getRequiredToolSetId() {
		return( getGenItemBuff()->getRequiredToolSetId() );
	}

	const int16_t* CFGenKbGenItemObj::getRequiredToolSetIdReference() {
		return( getGenItemBuff()->getRequiredToolSetIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalScopeDefIdNull() {
		return( getGenItemBuff()->isOptionalScopeDefIdNull() );
	}

	const int16_t CFGenKbGenItemObj::getOptionalScopeDefIdValue() {
		return( getGenItemBuff()->getOptionalScopeDefIdValue() );
	}

	const int16_t* CFGenKbGenItemObj::getOptionalScopeDefIdReference() {
		return( getGenItemBuff()->getOptionalScopeDefIdReference() );
	}

	const int16_t CFGenKbGenItemObj::getRequiredGenDefId() {
		return( getGenItemBuff()->getRequiredGenDefId() );
	}

	const int16_t* CFGenKbGenItemObj::getRequiredGenDefIdReference() {
		return( getGenItemBuff()->getRequiredGenDefIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalGelExecutableTenantIdNull() {
		return( getGenItemBuff()->isOptionalGelExecutableTenantIdNull() );
	}

	const int64_t CFGenKbGenItemObj::getOptionalGelExecutableTenantIdValue() {
		return( getGenItemBuff()->getOptionalGelExecutableTenantIdValue() );
	}

	const int64_t* CFGenKbGenItemObj::getOptionalGelExecutableTenantIdReference() {
		return( getGenItemBuff()->getOptionalGelExecutableTenantIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalGelExecutableGelCacheIdNull() {
		return( getGenItemBuff()->isOptionalGelExecutableGelCacheIdNull() );
	}

	const int64_t CFGenKbGenItemObj::getOptionalGelExecutableGelCacheIdValue() {
		return( getGenItemBuff()->getOptionalGelExecutableGelCacheIdValue() );
	}

	const int64_t* CFGenKbGenItemObj::getOptionalGelExecutableGelCacheIdReference() {
		return( getGenItemBuff()->getOptionalGelExecutableGelCacheIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalGelExecutableIdNull() {
		return( getGenItemBuff()->isOptionalGelExecutableIdNull() );
	}

	const int64_t CFGenKbGenItemObj::getOptionalGelExecutableIdValue() {
		return( getGenItemBuff()->getOptionalGelExecutableIdValue() );
	}

	const int64_t* CFGenKbGenItemObj::getOptionalGelExecutableIdReference() {
		return( getGenItemBuff()->getOptionalGelExecutableIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalProbeTenantIdNull() {
		return( getGenItemBuff()->isOptionalProbeTenantIdNull() );
	}

	const int64_t CFGenKbGenItemObj::getOptionalProbeTenantIdValue() {
		return( getGenItemBuff()->getOptionalProbeTenantIdValue() );
	}

	const int64_t* CFGenKbGenItemObj::getOptionalProbeTenantIdReference() {
		return( getGenItemBuff()->getOptionalProbeTenantIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalProbeCartridgeIdNull() {
		return( getGenItemBuff()->isOptionalProbeCartridgeIdNull() );
	}

	const int64_t CFGenKbGenItemObj::getOptionalProbeCartridgeIdValue() {
		return( getGenItemBuff()->getOptionalProbeCartridgeIdValue() );
	}

	const int64_t* CFGenKbGenItemObj::getOptionalProbeCartridgeIdReference() {
		return( getGenItemBuff()->getOptionalProbeCartridgeIdReference() );
	}

	bool CFGenKbGenItemObj::isOptionalProbeGenItemIdNull() {
		return( getGenItemBuff()->isOptionalProbeGenItemIdNull() );
	}

	const int64_t CFGenKbGenItemObj::getOptionalProbeGenItemIdValue() {
		return( getGenItemBuff()->getOptionalProbeGenItemIdValue() );
	}

	const int64_t* CFGenKbGenItemObj::getOptionalProbeGenItemIdReference() {
		return( getGenItemBuff()->getOptionalProbeGenItemIdReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbGenItemObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbGenItemObj::getRequiredContainerCartridge( bool forceRead ) {
		cfcore::ICFGenKbRuleCartObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj()->readRuleCartByIdIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredCartridgeId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbGenItemObj::getRequiredLookupRuleType( bool forceRead ) {
		cfcore::ICFGenKbRuleTypeObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleTypeTableObj()->readRuleTypeByIdIdx( getGenItemBuff()->getRequiredRuleTypeId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbGenItemObj::getRequiredLookupToolSet( bool forceRead ) {
		cfcore::ICFGenKbToolSetObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolSetTableObj()->readToolSetByIdIdx( getGenItemBuff()->getRequiredToolSetId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbGenItemObj::getOptionalLookupScopeDef( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = NULL;
		bool anyMissing = false;
			if( getGenItemBuff()->isOptionalScopeDefIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getGenItemBuff()->getOptionalScopeDefIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbGenItemObj::getRequiredLookupGenDef( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getGenItemBuff()->getRequiredGenDefId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelExecutableObj* CFGenKbGenItemObj::getOptionalComponentsGelExec( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGenItemBuff()->getOptionalGelExecutableTenantIdValue(),
					getGenItemBuff()->getOptionalGelExecutableGelCacheIdValue(),
					getGenItemBuff()->getOptionalGelExecutableIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemObj::getOptionalLookupProbe( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj()->readGenItemByItemIdIdx( getGenItemBuff()->getOptionalProbeTenantIdValue(),
					getGenItemBuff()->getOptionalProbeCartridgeIdValue(),
					getGenItemBuff()->getOptionalProbeGenItemIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGenItemObj::CFGenKbGenItemObj()
	: ICFGenKbGenItemObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGenItemObj::CFGenKbGenItemObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGenItemObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGenItemObj::~CFGenKbGenItemObj() {
		schema = NULL;
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}
		if( pKey != NULL ) {
			delete pKey;
			pKey = NULL;
		}

	}

	cfcore::CFGenKbGenItemBuff* CFGenKbGenItemObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGenItemBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGenItem()->readDerivedByItemIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredCartridgeId(),
						getPKey()->getRequiredItemId() );
			}
		}
		return( buff );
	}

	void CFGenKbGenItemObj::setBuff( cfcore::CFGenKbGenItemBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGenItemObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGenItemObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGenItemObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGenItemBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGenItemObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemObj" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGenItemObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbGenItemObj::getGenDefName() {
		return( cfcore::CFGenKbGenItemBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemObj::getScope() {
		cfcore::ICFGenKbRuleCartObj* scope = getRequiredContainerCartridge();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemObj::getObjScope() {
		cfcore::ICFGenKbRuleCartObj* scope = getRequiredContainerCartridge();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGenItemObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGenItemObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGenItemObj::getObjQualifiedName() {
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

	std::string CFGenKbGenItemObj::getObjFullName() {
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

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemObj::realize() {
		cfcore::ICFGenKbGenItemObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj()->realizeGenItem(
			(cfcore::ICFGenKbGenItemObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( retobj ) );
	}

	cfcore::ICFGenKbGenItemObj* CFGenKbGenItemObj::read( bool forceRead ) {
		cfcore::ICFGenKbGenItemObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj()->readGenItemByItemIdIdx( getGenItemBuff()->getRequiredTenantId(),
		getGenItemBuff()->getRequiredCartridgeId(),
		getGenItemBuff()->getRequiredItemId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGenItemObj*>( retobj ) );
	}

	cfcore::ICFGenKbGenItemTableObj* CFGenKbGenItemObj::getGenItemTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGenItemObj::getSchema() {
		return( schema );
	}

	void CFGenKbGenItemObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbGenItemPKey* CFGenKbGenItemObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbGenItemPKey();
		}
		return( pKey );
	}

	void CFGenKbGenItemObj::setPKey( cfcore::CFGenKbGenItemPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbGenItemPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbGenItemObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbGenItemObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGenItemObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj()->lockGenItem( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( edit ) );
	}

	void CFGenKbGenItemObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbGenItemEditObj* CFGenKbGenItemObj::getGenItemEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGenItemEditObj*>( edit ) );
	}

	void CFGenKbGenItemObj::copyPKeyToBuff() {
		cfcore::CFGenKbGenItemPKey* tablePKey = getPKey();
		cfcore::CFGenKbGenItemBuff* tableBuff = getGenItemBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredCartridgeId( tablePKey->getRequiredCartridgeId() );
			tableBuff->setRequiredItemId( tablePKey->getRequiredItemId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbGenItemObj::copyBuffToPKey() {
		cfcore::CFGenKbGenItemPKey* tablePKey = getPKey();
		cfcore::CFGenKbGenItemBuff* tableBuff = getGenItemBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredCartridgeId( tableBuff->getRequiredCartridgeId() );
		tablePKey->setRequiredItemId( tableBuff->getRequiredItemId() );
	}

}
