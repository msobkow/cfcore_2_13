// Description: C++18 edit object instance implementation for CFGenKb SecUser.

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
#include <cfgenkbobj/CFGenKbSecUserObj.hpp>
#include <cfgenkbobj/CFGenKbSecUserEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecUserEditObj::CLASS_NAME( "CFGenKbSecUserEditObj" );

	CFGenKbSecUserEditObj::CFGenKbSecUserEditObj( cfcore::ICFGenKbSecUserObj* argOrig )
	: ICFGenKbSecUserEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecUserEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecUserBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecUserBuff*>( origBuff->clone() );
	}

	CFGenKbSecUserEditObj::~CFGenKbSecUserEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecUserEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecUserEditObj::getCreatedAt() {
		return( getSecUserBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecUserEditObj::getUpdatedAt() {
		return( getSecUserBuff()->getUpdatedAt() );
	}

	void CFGenKbSecUserEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecUserBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecUserEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecUserBuff()->setCreatedAt( value );
	}

	void CFGenKbSecUserEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecUserBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecUserEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecUserBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecUserEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecUserBuff::CLASS_CODE );
	}

	bool CFGenKbSecUserEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecUserEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_LoginId( "LoginId" );
		static const std::string S_EMailAddress( "EMailAddress" );
		static const std::string S_EMailConfirmUuid( "EMailConfirmUuid" );
		static const std::string S_DfltDevUserId( "DfltDevUserId" );
		static const std::string S_DfltDevName( "DfltDevName" );
		static const std::string S_PasswordHash( "PasswordHash" );
		static const std::string S_PasswordResetUuid( "PasswordResetUuid" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecUserEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecUserEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecUserEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecUserEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecUserEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecUserEditObj::getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LoginId, CFGenKbSecUserEditObj::getRequiredLoginId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EMailAddress, CFGenKbSecUserEditObj::getRequiredEMailAddress() ) );
		if( ! CFGenKbSecUserEditObj::isOptionalEMailConfirmUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_EMailConfirmUuid, CFGenKbSecUserEditObj::getOptionalEMailConfirmUuidValue() ) );
		}
		if( ! CFGenKbSecUserEditObj::isOptionalDfltDevUserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_DfltDevUserId, CFGenKbSecUserEditObj::getOptionalDfltDevUserIdValue() ) );
		}
		if( ! CFGenKbSecUserEditObj::isOptionalDfltDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DfltDevName, CFGenKbSecUserEditObj::getOptionalDfltDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PasswordHash, CFGenKbSecUserEditObj::getRequiredPasswordHash() ) );
		if( ! CFGenKbSecUserEditObj::isOptionalPasswordResetUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_PasswordResetUuid, CFGenKbSecUserEditObj::getOptionalPasswordResetUuidValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecUserEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecUserEditObj::setRequiredRevision( int32_t value ) {
		getSecUserBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecUserEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredLoginId() );
		return( objName );
	}

	const std::string CFGenKbSecUserEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecUserBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecUserEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserEditObj::getNamedObject( const std::string& objName ) {
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
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->readSecDeviceByLookupNameIdx( getRequiredSecUserId(),
				nextName,
				false );
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

	std::string CFGenKbSecUserEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecUserEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecUserObj* retobj = getSchema()->getSecUserTableObj()->realizeSecUser( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retval = getOrigAsSecUser()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::create() {
		cfcore::ICFGenKbSecUserObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecUserTableObj()->createSecUser( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserEditObj::update() {
		getSchema()->getSecUserTableObj()->updateSecUser( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecUserTableObj()->deleteSecUser( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecUserTableObj* CFGenKbSecUserEditObj::getSecUserTable() {
		return( orig->getSchema()->getSecUserTableObj() );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserEditObj::getSecUserEdit() {
		return( (cfcore::ICFGenKbSecUserEditObj*)this );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecUserEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserEditObj::getOrigAsSecUser() {
		return( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecUserEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecUserBuff* CFGenKbSecUserEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecUserEditObj::setBuff( cfcore::CFGenKbSecUserBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecUserPKey* CFGenKbSecUserEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecUserEditObj::setPKey( cfcore::CFGenKbSecUserPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecUserEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecUserEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getRequiredSecUserId() {
		return( getPKey()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getRequiredSecUserIdReference() {
		return( getPKey()->getRequiredSecUserIdReference() );
	}

	const std::string& CFGenKbSecUserEditObj::getRequiredLoginId() {
		return( getSecUserBuff()->getRequiredLoginId() );
	}

	const std::string* CFGenKbSecUserEditObj::getRequiredLoginIdReference() {
		return( getSecUserBuff()->getRequiredLoginIdReference() );
	}

	void CFGenKbSecUserEditObj::setRequiredLoginId( const std::string& value ) {
		if( getSecUserBuff()->getRequiredLoginId() != value ) {
			getSecUserBuff()->setRequiredLoginId( value );
		}
	}

	const std::string& CFGenKbSecUserEditObj::getRequiredEMailAddress() {
		return( getSecUserBuff()->getRequiredEMailAddress() );
	}

	const std::string* CFGenKbSecUserEditObj::getRequiredEMailAddressReference() {
		return( getSecUserBuff()->getRequiredEMailAddressReference() );
	}

	void CFGenKbSecUserEditObj::setRequiredEMailAddress( const std::string& value ) {
		if( getSecUserBuff()->getRequiredEMailAddress() != value ) {
			getSecUserBuff()->setRequiredEMailAddress( value );
		}
	}

	bool CFGenKbSecUserEditObj::isOptionalEMailConfirmUuidNull() {
		return( getSecUserBuff()->isOptionalEMailConfirmUuidNull() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getOptionalEMailConfirmUuidValue() {
		return( getSecUserBuff()->getOptionalEMailConfirmUuidValue() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getOptionalEMailConfirmUuidReference() {
		return( getSecUserBuff()->getOptionalEMailConfirmUuidReference() );
	}

	void CFGenKbSecUserEditObj::setOptionalEMailConfirmUuidNull() {
		if( ! getSecUserBuff()->isOptionalEMailConfirmUuidNull() ) {
			getSecUserBuff()->setOptionalEMailConfirmUuidNull();
		}
	}

	void CFGenKbSecUserEditObj::setOptionalEMailConfirmUuidValue( const uuid_ptr_t value ) {
		if( getSecUserBuff()->isOptionalEMailConfirmUuidNull() ) {
			getSecUserBuff()->setOptionalEMailConfirmUuidValue( value );
		}
		else if( getSecUserBuff()->getOptionalEMailConfirmUuidValue() != value ) {
			getSecUserBuff()->setOptionalEMailConfirmUuidValue( value );
		}
	}

	bool CFGenKbSecUserEditObj::isOptionalDfltDevUserIdNull() {
		return( getSecUserBuff()->isOptionalDfltDevUserIdNull() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getOptionalDfltDevUserIdValue() {
		return( getSecUserBuff()->getOptionalDfltDevUserIdValue() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getOptionalDfltDevUserIdReference() {
		return( getSecUserBuff()->getOptionalDfltDevUserIdReference() );
	}

	bool CFGenKbSecUserEditObj::isOptionalDfltDevNameNull() {
		return( getSecUserBuff()->isOptionalDfltDevNameNull() );
	}

	const std::string& CFGenKbSecUserEditObj::getOptionalDfltDevNameValue() {
		return( getSecUserBuff()->getOptionalDfltDevNameValue() );
	}

	const std::string* CFGenKbSecUserEditObj::getOptionalDfltDevNameReference() {
		return( getSecUserBuff()->getOptionalDfltDevNameReference() );
	}

	const std::string& CFGenKbSecUserEditObj::getRequiredPasswordHash() {
		return( getSecUserBuff()->getRequiredPasswordHash() );
	}

	const std::string* CFGenKbSecUserEditObj::getRequiredPasswordHashReference() {
		return( getSecUserBuff()->getRequiredPasswordHashReference() );
	}

	void CFGenKbSecUserEditObj::setRequiredPasswordHash( const std::string& value ) {
		if( getSecUserBuff()->getRequiredPasswordHash() != value ) {
			getSecUserBuff()->setRequiredPasswordHash( value );
		}
	}

	bool CFGenKbSecUserEditObj::isOptionalPasswordResetUuidNull() {
		return( getSecUserBuff()->isOptionalPasswordResetUuidNull() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getOptionalPasswordResetUuidValue() {
		return( getSecUserBuff()->getOptionalPasswordResetUuidValue() );
	}

	const uuid_ptr_t CFGenKbSecUserEditObj::getOptionalPasswordResetUuidReference() {
		return( getSecUserBuff()->getOptionalPasswordResetUuidReference() );
	}

	void CFGenKbSecUserEditObj::setOptionalPasswordResetUuidNull() {
		if( ! getSecUserBuff()->isOptionalPasswordResetUuidNull() ) {
			getSecUserBuff()->setOptionalPasswordResetUuidNull();
		}
	}

	void CFGenKbSecUserEditObj::setOptionalPasswordResetUuidValue( const uuid_ptr_t value ) {
		if( getSecUserBuff()->isOptionalPasswordResetUuidNull() ) {
			getSecUserBuff()->setOptionalPasswordResetUuidValue( value );
		}
		else if( getSecUserBuff()->getOptionalPasswordResetUuidValue() != value ) {
			getSecUserBuff()->setOptionalPasswordResetUuidValue( value );
		}
	}

	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecUserEditObj::getOptionalComponentsSecDev( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecDeviceObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecDeviceTableObj()->readSecDeviceByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecUserEditObj::getOptionalLookupDefDev( bool forceRead ) {
		cfcore::ICFGenKbSecDeviceObj* retobj = NULL;
		bool anyMissing = false;

			if( getSecUserBuff()->isOptionalDfltDevUserIdNull() ) {
				anyMissing = true;
			}
			if( getSecUserBuff()->isOptionalDfltDevNameNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecDeviceTableObj()->readSecDeviceByIdIdx( getSecUserBuff()->getOptionalDfltDevUserIdValue(),
					getSecUserBuff()->getOptionalDfltDevNameValue() );
		}
		return( retobj );
	}

	void CFGenKbSecUserEditObj::setOptionalLookupDefDev( cfcore::ICFGenKbSecDeviceObj* value ) {
			
			if( value != NULL ) {
				getSecUserBuff()->setOptionalDfltDevUserIdValue( value->getRequiredSecUserId() );
				getSecUserBuff()->setOptionalDfltDevNameValue( value->getRequiredDevName() );
			}
			else {
				getSecUserBuff()->setOptionalDfltDevUserIdNull();
				getSecUserBuff()->setOptionalDfltDevNameNull();
			}
		}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecUserEditObj::getOptionalComponentsSecSess( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecSessionObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecSessionTableObj()->readSecSessionBySecUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecUserEditObj::getOptionalChildrenSecProxy( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecSessionObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecSessionTableObj()->readSecSessionBySecProxyIdx( getPKey()->getRequiredSecUserIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecUserEditObj::getOptionalChildrenSecGrpMemb( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getSecGrpMembTableObj()->readSecGrpMembByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTSecGrpMembObj*> CFGenKbSecUserEditObj::getOptionalChildrenTSecGrpMemb( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpMembObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecUser()->getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	void CFGenKbSecUserEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecUserPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecUserBuff* tableBuff = getSecUserBuff();
		tableBuff->setRequiredSecUserId( tablePKey->getRequiredSecUserId() );
	}

	void CFGenKbSecUserEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecUserPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecUserBuff* tableBuff = getSecUserBuff();
		tablePKey->setRequiredSecUserId( tableBuff->getRequiredSecUserId() );
	}

	void CFGenKbSecUserEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecUserBuff* origBuff = getOrigAsSecUser()->getSecUserBuff();
		cfcore::CFGenKbSecUserBuff* myBuff = getSecUserBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecUserEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecUserBuff* origBuff = getOrigAsSecUser()->getSecUserBuff();
		cfcore::CFGenKbSecUserBuff* myBuff = getSecUserBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
