// Description: C++18 base object instance implementation for CFGenKb SecDevice.

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
#include <cfgenkbobj/CFGenKbSecDeviceObj.hpp>

namespace cfcore {

	const std::string CFGenKbSecDeviceObj::CLASS_NAME( "CFGenKbSecDeviceObj" );
	const classcode_t CFGenKbSecDeviceObj::CLASS_CODE = 0xa905L;

	int32_t CFGenKbSecDeviceObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const uuid_ptr_t CFGenKbSecDeviceObj::getRequiredSecUserId() {
		return( getPKey()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecDeviceObj::getRequiredSecUserIdReference() {
		return( getPKey()->getRequiredSecUserIdReference() );
	}

	const std::string& CFGenKbSecDeviceObj::getRequiredDevName() {
		return( getPKey()->getRequiredDevName() );
	}

	const std::string* CFGenKbSecDeviceObj::getRequiredDevNameReference() {
		return( getPKey()->getRequiredDevNameReference() );
	}

	bool CFGenKbSecDeviceObj::isOptionalPubKeyNull() {
		return( getSecDeviceBuff()->isOptionalPubKeyNull() );
	}

	const std::string& CFGenKbSecDeviceObj::getOptionalPubKeyValue() {
		return( getSecDeviceBuff()->getOptionalPubKeyValue() );
	}

	const std::string* CFGenKbSecDeviceObj::getOptionalPubKeyReference() {
		return( getSecDeviceBuff()->getOptionalPubKeyReference() );
	}


	cfcore::ICFGenKbSecUserObj* CFGenKbSecDeviceObj::getRequiredContainerSecUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getPKey()->getRequiredSecUserId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbSecDeviceObj::CFGenKbSecDeviceObj()
	: ICFGenKbSecDeviceObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecDeviceObj::CFGenKbSecDeviceObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbSecDeviceObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecDeviceObj::~CFGenKbSecDeviceObj() {
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

	cfcore::CFGenKbSecDeviceBuff* CFGenKbSecDeviceObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbSecDeviceBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecDevice()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredSecUserId(),
						getPKey()->getRequiredDevName() );
			}
		}
		return( buff );
	}

	void CFGenKbSecDeviceObj::setBuff( cfcore::CFGenKbSecDeviceBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbSecDeviceObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecDeviceObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecDeviceObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecDeviceObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecDeviceObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_DevName( "DevName" );
		static const std::string S_PubKey( "PubKey" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecDeviceObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecDeviceObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecDeviceObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecDeviceObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecDeviceObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecDeviceObj::getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DevName, CFGenKbSecDeviceObj::getRequiredDevName() ) );
		if( ! CFGenKbSecDeviceObj::isOptionalPubKeyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PubKey, CFGenKbSecDeviceObj::getOptionalPubKeyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbSecDeviceObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredDevName() );
		return( objName );
	}

	const std::string CFGenKbSecDeviceObj::getGenDefName() {
		return( cfcore::CFGenKbSecDeviceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceObj::getScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceObj::getObjScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecDeviceObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecDeviceObj::getObjQualifiedName() {
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

	std::string CFGenKbSecDeviceObj::getObjFullName() {
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceObj::realize() {
		cfcore::ICFGenKbSecDeviceObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->realizeSecDevice(
			(cfcore::ICFGenKbSecDeviceObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecDeviceObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->readSecDeviceByIdIdx( getSecDeviceBuff()->getRequiredSecUserId(),
		getSecDeviceBuff()->getRequiredDevName(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecDeviceTableObj* CFGenKbSecDeviceObj::getSecDeviceTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecDeviceObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecDeviceObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbSecDevicePKey* CFGenKbSecDeviceObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbSecDevicePKey();
		}
		return( pKey );
	}

	void CFGenKbSecDeviceObj::setPKey( cfcore::CFGenKbSecDevicePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbSecDevicePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbSecDeviceObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbSecDeviceObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbSecDeviceObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->lockSecDevice( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecDeviceTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbSecDeviceEditObj*>( edit ) );
	}

	void CFGenKbSecDeviceObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceObj::getSecDeviceEdit() {
		return( dynamic_cast<cfcore::ICFGenKbSecDeviceEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecDeviceObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecDeviceBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecDeviceObj::getCreatedAt() {
		return( getSecDeviceBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecDeviceObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecDeviceBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecDeviceObj::getUpdatedAt() {
		return( getSecDeviceBuff()->getUpdatedAt() );
	}

	void CFGenKbSecDeviceObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecDevicePKey* tablePKey = getPKey();
		cfcore::CFGenKbSecDeviceBuff* tableBuff = getSecDeviceBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredSecUserId( tablePKey->getRequiredSecUserId() );
			tableBuff->setRequiredDevName( tablePKey->getRequiredDevName() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbSecDeviceObj::copyBuffToPKey() {
		cfcore::CFGenKbSecDevicePKey* tablePKey = getPKey();
		cfcore::CFGenKbSecDeviceBuff* tableBuff = getSecDeviceBuff();
		tablePKey->setRequiredSecUserId( tableBuff->getRequiredSecUserId() );
		tablePKey->setRequiredDevName( tableBuff->getRequiredDevName() );
	}

}
