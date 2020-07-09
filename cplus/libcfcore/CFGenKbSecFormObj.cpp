// Description: C++18 base object instance implementation for CFGenKb SecForm.

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

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbSecFormObj.hpp>

namespace cfcore {

	const std::string CFGenKbSecFormObj::CLASS_NAME( "CFGenKbSecFormObj" );
	const classcode_t CFGenKbSecFormObj::CLASS_CODE = 0xa906L;

	int32_t CFGenKbSecFormObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbSecFormObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecFormObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int32_t CFGenKbSecFormObj::getRequiredSecFormId() {
		return( getPKey()->getRequiredSecFormId() );
	}

	const int32_t* CFGenKbSecFormObj::getRequiredSecFormIdReference() {
		return( getPKey()->getRequiredSecFormIdReference() );
	}

	const int32_t CFGenKbSecFormObj::getRequiredSecAppId() {
		return( getSecFormBuff()->getRequiredSecAppId() );
	}

	const int32_t* CFGenKbSecFormObj::getRequiredSecAppIdReference() {
		return( getSecFormBuff()->getRequiredSecAppIdReference() );
	}

	const std::string& CFGenKbSecFormObj::getRequiredJEEServletMapName() {
		return( getSecFormBuff()->getRequiredJEEServletMapName() );
	}

	const std::string* CFGenKbSecFormObj::getRequiredJEEServletMapNameReference() {
		return( getSecFormBuff()->getRequiredJEEServletMapNameReference() );
	}


	cfcore::ICFGenKbClusterObj* CFGenKbSecFormObj::getRequiredOwnerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecFormObj::getRequiredContainerApplication( bool forceRead ) {
		cfcore::ICFGenKbSecAppObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecAppTableObj()->readSecAppByIdIdx( getPKey()->getRequiredClusterId(),
					getSecFormBuff()->getRequiredSecAppId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbSecFormObj::CFGenKbSecFormObj()
	: ICFGenKbSecFormObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecFormObj::CFGenKbSecFormObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbSecFormObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecFormObj::~CFGenKbSecFormObj() {
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

	cfcore::CFGenKbSecFormBuff* CFGenKbSecFormObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbSecFormBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecForm()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredClusterId(),
						getPKey()->getRequiredSecFormId() );
			}
		}
		return( buff );
	}

	void CFGenKbSecFormObj::setBuff( cfcore::CFGenKbSecFormBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbSecFormObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecFormObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecFormObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecFormBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecFormObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecFormObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecFormId( "SecFormId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_JEEServletMapName( "JEEServletMapName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecFormObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecFormObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecFormObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecFormObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecFormObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecFormObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecFormId, CFGenKbSecFormObj::getRequiredSecFormId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, CFGenKbSecFormObj::getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEServletMapName, CFGenKbSecFormObj::getRequiredJEEServletMapName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbSecFormObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredJEEServletMapName() );
		return( objName );
	}

	const std::string CFGenKbSecFormObj::getGenDefName() {
		return( cfcore::CFGenKbSecFormBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecFormObj::getScope() {
		cfcore::ICFGenKbSecAppObj* scope = getRequiredContainerApplication();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecFormObj::getObjScope() {
		cfcore::ICFGenKbSecAppObj* scope = getRequiredContainerApplication();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecFormObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecFormObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecFormObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecFormObj::getObjQualifiedName() {
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

	std::string CFGenKbSecFormObj::getObjFullName() {
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

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormObj::realize() {
		cfcore::ICFGenKbSecFormObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecFormTableObj()->realizeSecForm(
			(cfcore::ICFGenKbSecFormObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecFormObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecFormObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecFormTableObj()->readSecFormByIdIdx( getSecFormBuff()->getRequiredClusterId(),
		getSecFormBuff()->getRequiredSecFormId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbSecFormObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecFormTableObj* CFGenKbSecFormObj::getSecFormTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecFormTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecFormObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecFormObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbSecFormPKey* CFGenKbSecFormObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbSecFormPKey();
		}
		return( pKey );
	}

	void CFGenKbSecFormObj::setPKey( cfcore::CFGenKbSecFormPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbSecFormPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbSecFormObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbSecFormObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbSecFormEditObj* CFGenKbSecFormObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbSecFormObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecFormTableObj()->lockSecForm( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecFormTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbSecFormEditObj*>( edit ) );
	}

	void CFGenKbSecFormObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbSecFormEditObj* CFGenKbSecFormObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbSecFormEditObj* CFGenKbSecFormObj::getSecFormEdit() {
		return( dynamic_cast<cfcore::ICFGenKbSecFormEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecFormObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecFormBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecFormObj::getCreatedAt() {
		return( getSecFormBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecFormObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecFormBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecFormObj::getUpdatedAt() {
		return( getSecFormBuff()->getUpdatedAt() );
	}

	void CFGenKbSecFormObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecFormPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecFormBuff* tableBuff = getSecFormBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
			tableBuff->setRequiredSecFormId( tablePKey->getRequiredSecFormId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbSecFormObj::copyBuffToPKey() {
		cfcore::CFGenKbSecFormPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecFormBuff* tableBuff = getSecFormBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecFormId( tableBuff->getRequiredSecFormId() );
	}

}
