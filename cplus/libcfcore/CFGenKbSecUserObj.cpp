// Description: C++18 base object instance implementation for CFGenKb SecUser.

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
#include <cfgenkbobj/CFGenKbSecUserObj.hpp>

namespace cfcore {

	const std::string CFGenKbSecUserObj::CLASS_NAME( "CFGenKbSecUserObj" );
	const classcode_t CFGenKbSecUserObj::CLASS_CODE = 0xa90eL;

	int32_t CFGenKbSecUserObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getRequiredSecUserId() {
		return( getPKey()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getRequiredSecUserIdReference() {
		return( getPKey()->getRequiredSecUserIdReference() );
	}

	const std::string& CFGenKbSecUserObj::getRequiredLoginId() {
		return( getSecUserBuff()->getRequiredLoginId() );
	}

	const std::string* CFGenKbSecUserObj::getRequiredLoginIdReference() {
		return( getSecUserBuff()->getRequiredLoginIdReference() );
	}

	const std::string& CFGenKbSecUserObj::getRequiredEMailAddress() {
		return( getSecUserBuff()->getRequiredEMailAddress() );
	}

	const std::string* CFGenKbSecUserObj::getRequiredEMailAddressReference() {
		return( getSecUserBuff()->getRequiredEMailAddressReference() );
	}

	bool CFGenKbSecUserObj::isOptionalEMailConfirmUuidNull() {
		return( getSecUserBuff()->isOptionalEMailConfirmUuidNull() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getOptionalEMailConfirmUuidValue() {
		return( getSecUserBuff()->getOptionalEMailConfirmUuidValue() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getOptionalEMailConfirmUuidReference() {
		return( getSecUserBuff()->getOptionalEMailConfirmUuidReference() );
	}

	bool CFGenKbSecUserObj::isOptionalDfltDevUserIdNull() {
		return( getSecUserBuff()->isOptionalDfltDevUserIdNull() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getOptionalDfltDevUserIdValue() {
		return( getSecUserBuff()->getOptionalDfltDevUserIdValue() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getOptionalDfltDevUserIdReference() {
		return( getSecUserBuff()->getOptionalDfltDevUserIdReference() );
	}

	bool CFGenKbSecUserObj::isOptionalDfltDevNameNull() {
		return( getSecUserBuff()->isOptionalDfltDevNameNull() );
	}

	const std::string& CFGenKbSecUserObj::getOptionalDfltDevNameValue() {
		return( getSecUserBuff()->getOptionalDfltDevNameValue() );
	}

	const std::string* CFGenKbSecUserObj::getOptionalDfltDevNameReference() {
		return( getSecUserBuff()->getOptionalDfltDevNameReference() );
	}

	const std::string& CFGenKbSecUserObj::getRequiredPasswordHash() {
		return( getSecUserBuff()->getRequiredPasswordHash() );
	}

	const std::string* CFGenKbSecUserObj::getRequiredPasswordHashReference() {
		return( getSecUserBuff()->getRequiredPasswordHashReference() );
	}

	bool CFGenKbSecUserObj::isOptionalPasswordResetUuidNull() {
		return( getSecUserBuff()->isOptionalPasswordResetUuidNull() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getOptionalPasswordResetUuidValue() {
		return( getSecUserBuff()->getOptionalPasswordResetUuidValue() );
	}

	const uuid_ptr_t CFGenKbSecUserObj::getOptionalPasswordResetUuidReference() {
		return( getSecUserBuff()->getOptionalPasswordResetUuidReference() );
	}


	std::vector<cfcore::ICFGenKbSecDeviceObj*> CFGenKbSecUserObj::getOptionalComponentsSecDev( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecDeviceObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->readSecDeviceByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecUserObj::getOptionalLookupDefDev( bool forceRead ) {
		cfcore::ICFGenKbSecDeviceObj* retobj = NULL;
		bool anyMissing = false;
			if( getSecUserBuff()->isOptionalDfltDevUserIdNull() ) {
				anyMissing = true;
			}
			if( getSecUserBuff()->isOptionalDfltDevNameNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->readSecDeviceByIdIdx( getSecUserBuff()->getOptionalDfltDevUserIdValue(),
					getSecUserBuff()->getOptionalDfltDevNameValue(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecUserObj::getOptionalComponentsSecSess( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecSessionObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj()->readSecSessionBySecUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecSessionObj*> CFGenKbSecUserObj::getOptionalChildrenSecProxy( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecSessionObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj()->readSecSessionBySecProxyIdx( getPKey()->getRequiredSecUserIdReference(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecUserObj::getOptionalChildrenSecGrpMemb( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGrpMembTableObj()->readSecGrpMembByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTSecGrpMembObj*> CFGenKbSecUserObj::getOptionalChildrenTSecGrpMemb( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpMembObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByUserIdx( getPKey()->getRequiredSecUserId(),
			forceRead );
		return( retval );
	}

	CFGenKbSecUserObj::CFGenKbSecUserObj()
	: ICFGenKbSecUserObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecUserObj::CFGenKbSecUserObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbSecUserObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecUserObj::~CFGenKbSecUserObj() {
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

	cfcore::CFGenKbSecUserBuff* CFGenKbSecUserObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbSecUserBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecUser()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredSecUserId() );
			}
		}
		return( buff );
	}

	void CFGenKbSecUserObj::setBuff( cfcore::CFGenKbSecUserBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbSecUserObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecUserObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecUserObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecUserBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecUserObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecUserObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecUserObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecUserObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecUserObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecUserObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecUserObj::getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LoginId, CFGenKbSecUserObj::getRequiredLoginId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EMailAddress, CFGenKbSecUserObj::getRequiredEMailAddress() ) );
		if( ! CFGenKbSecUserObj::isOptionalEMailConfirmUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_EMailConfirmUuid, CFGenKbSecUserObj::getOptionalEMailConfirmUuidValue() ) );
		}
		if( ! CFGenKbSecUserObj::isOptionalDfltDevUserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_DfltDevUserId, CFGenKbSecUserObj::getOptionalDfltDevUserIdValue() ) );
		}
		if( ! CFGenKbSecUserObj::isOptionalDfltDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DfltDevName, CFGenKbSecUserObj::getOptionalDfltDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PasswordHash, CFGenKbSecUserObj::getRequiredPasswordHash() ) );
		if( ! CFGenKbSecUserObj::isOptionalPasswordResetUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_PasswordResetUuid, CFGenKbSecUserObj::getOptionalPasswordResetUuidValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbSecUserObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredLoginId() );
		return( objName );
	}

	const std::string CFGenKbSecUserObj::getGenDefName() {
		return( cfcore::CFGenKbSecUserBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecUserObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecUserObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecUserObj::getObjQualifiedName() {
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

	std::string CFGenKbSecUserObj::getObjFullName() {
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

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserObj::realize() {
		cfcore::ICFGenKbSecUserObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->realizeSecUser(
			(cfcore::ICFGenKbSecUserObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getRequiredSecUserId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbSecUserObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecUserTableObj* CFGenKbSecUserObj::getSecUserTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecUserObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecUserObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbSecUserPKey* CFGenKbSecUserObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbSecUserPKey();
		}
		return( pKey );
	}

	void CFGenKbSecUserObj::setPKey( cfcore::CFGenKbSecUserPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbSecUserPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbSecUserObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbSecUserObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbSecUserObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->lockSecUser( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbSecUserEditObj*>( edit ) );
	}

	void CFGenKbSecUserObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbSecUserEditObj* CFGenKbSecUserObj::getSecUserEdit() {
		return( dynamic_cast<cfcore::ICFGenKbSecUserEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecUserObj::getCreatedAt() {
		return( getSecUserBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecUserObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecUserBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecUserObj::getUpdatedAt() {
		return( getSecUserBuff()->getUpdatedAt() );
	}

	void CFGenKbSecUserObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecUserPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecUserBuff* tableBuff = getSecUserBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredSecUserId( tablePKey->getRequiredSecUserId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbSecUserObj::copyBuffToPKey() {
		cfcore::CFGenKbSecUserPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecUserBuff* tableBuff = getSecUserBuff();
		tablePKey->setRequiredSecUserId( tableBuff->getRequiredSecUserId() );
	}

}
