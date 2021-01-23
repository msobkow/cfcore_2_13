// Description: C++18 edit object instance implementation for CFGenKb SecDevice.

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
#include <cfgenkbobj/CFGenKbSecDeviceObj.hpp>
#include <cfgenkbobj/CFGenKbSecDeviceEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecDeviceEditObj::CLASS_NAME( "CFGenKbSecDeviceEditObj" );

	CFGenKbSecDeviceEditObj::CFGenKbSecDeviceEditObj( cfcore::ICFGenKbSecDeviceObj* argOrig )
	: ICFGenKbSecDeviceEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecDeviceEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecDeviceBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecDeviceBuff*>( origBuff->clone() );
	}

	CFGenKbSecDeviceEditObj::~CFGenKbSecDeviceEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecDeviceEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecDeviceEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecDeviceBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecDeviceEditObj::getCreatedAt() {
		return( getSecDeviceBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecDeviceEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecDeviceBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecDeviceEditObj::getUpdatedAt() {
		return( getSecDeviceBuff()->getUpdatedAt() );
	}

	void CFGenKbSecDeviceEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecDeviceBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecDeviceEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecDeviceBuff()->setCreatedAt( value );
	}

	void CFGenKbSecDeviceEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecDeviceBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecDeviceEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecDeviceBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecDeviceEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecDeviceBuff::CLASS_CODE );
	}

	bool CFGenKbSecDeviceEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecDeviceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecDeviceEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecDeviceEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecDeviceEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecDeviceEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecDeviceEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecDeviceEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecDeviceEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecDeviceEditObj::getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DevName, CFGenKbSecDeviceEditObj::getRequiredDevName() ) );
		if( ! CFGenKbSecDeviceEditObj::isOptionalPubKeyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PubKey, CFGenKbSecDeviceEditObj::getOptionalPubKeyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecDeviceEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecDeviceEditObj::setRequiredRevision( int32_t value ) {
		getSecDeviceBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecDeviceEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredDevName() );
		return( objName );
	}

	const std::string CFGenKbSecDeviceEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecDeviceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceEditObj::getScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceEditObj::getObjScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecDeviceEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecDeviceEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecDeviceEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecDeviceEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecDeviceObj* retobj = getSchema()->getSecDeviceTableObj()->realizeSecDevice( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecDeviceObj* retval = getOrigAsSecDevice()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceEditObj::create() {
		cfcore::ICFGenKbSecDeviceObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecDevice()->getSchema() )->getSecDeviceTableObj()->createSecDevice( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceEditObj::update() {
		getSchema()->getSecDeviceTableObj()->updateSecDevice( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecDeviceTableObj()->deleteSecDevice( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecDeviceTableObj* CFGenKbSecDeviceEditObj::getSecDeviceTable() {
		return( orig->getSchema()->getSecDeviceTableObj() );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceEditObj::getSecDeviceEdit() {
		return( (cfcore::ICFGenKbSecDeviceEditObj*)this );
	}

	cfcore::ICFGenKbSecDeviceEditObj* CFGenKbSecDeviceEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecDeviceEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecDeviceObj* CFGenKbSecDeviceEditObj::getOrigAsSecDevice() {
		return( dynamic_cast<cfcore::ICFGenKbSecDeviceObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecDeviceEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecDeviceBuff* CFGenKbSecDeviceEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecDeviceEditObj::setBuff( cfcore::CFGenKbSecDeviceBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecDevicePKey* CFGenKbSecDeviceEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecDeviceEditObj::setPKey( cfcore::CFGenKbSecDevicePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecDeviceEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecDeviceEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const uuid_ptr_t CFGenKbSecDeviceEditObj::getRequiredSecUserId() {
		return( getPKey()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecDeviceEditObj::getRequiredSecUserIdReference() {
		return( getPKey()->getRequiredSecUserIdReference() );
	}

	const std::string& CFGenKbSecDeviceEditObj::getRequiredDevName() {
		return( getPKey()->getRequiredDevName() );
	}

	const std::string* CFGenKbSecDeviceEditObj::getRequiredDevNameReference() {
		return( getPKey()->getRequiredDevNameReference() );
	}

	void CFGenKbSecDeviceEditObj::setRequiredDevName( const std::string& value ) {
		if( getPKey()->getRequiredDevName() != value ) {
			getPKey()->setRequiredDevName( value );
		}
		if( getSecDeviceBuff()->getRequiredDevName() != value ) {
			getSecDeviceBuff()->setRequiredDevName( value );
		}
	}

	bool CFGenKbSecDeviceEditObj::isOptionalPubKeyNull() {
		return( getSecDeviceBuff()->isOptionalPubKeyNull() );
	}

	const std::string& CFGenKbSecDeviceEditObj::getOptionalPubKeyValue() {
		return( getSecDeviceBuff()->getOptionalPubKeyValue() );
	}

	const std::string* CFGenKbSecDeviceEditObj::getOptionalPubKeyReference() {
		return( getSecDeviceBuff()->getOptionalPubKeyReference() );
	}

	void CFGenKbSecDeviceEditObj::setOptionalPubKeyNull() {
		if( ! getSecDeviceBuff()->isOptionalPubKeyNull() ) {
			getSecDeviceBuff()->setOptionalPubKeyNull();
		}
	}

	void CFGenKbSecDeviceEditObj::setOptionalPubKeyValue( const std::string& value ) {
		if( getSecDeviceBuff()->isOptionalPubKeyNull() ) {
			getSecDeviceBuff()->setOptionalPubKeyValue( value );
		}
		else if( getSecDeviceBuff()->getOptionalPubKeyValue() != value ) {
			getSecDeviceBuff()->setOptionalPubKeyValue( value );
		}
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecDeviceEditObj::getRequiredContainerSecUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecDevice()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getPKey()->getRequiredSecUserId() );
		}
		return( retobj );
	}

	void CFGenKbSecDeviceEditObj::setRequiredContainerSecUser( cfcore::ICFGenKbSecUserObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredSecUserId
( value->getRequiredSecUserId() );
				getSecDeviceBuff()->setRequiredSecUserId( value->getRequiredSecUserId() );
			}
		}

	void CFGenKbSecDeviceEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecDevicePKey* tablePKey = getPKey();
		cfcore::CFGenKbSecDeviceBuff* tableBuff = getSecDeviceBuff();
		tableBuff->setRequiredSecUserId( tablePKey->getRequiredSecUserId() );
		tableBuff->setRequiredDevName( tablePKey->getRequiredDevName() );
	}

	void CFGenKbSecDeviceEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecDevicePKey* tablePKey = getPKey();
		cfcore::CFGenKbSecDeviceBuff* tableBuff = getSecDeviceBuff();
		tablePKey->setRequiredSecUserId( tableBuff->getRequiredSecUserId() );
		tablePKey->setRequiredDevName( tableBuff->getRequiredDevName() );
	}

	void CFGenKbSecDeviceEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecDeviceBuff* origBuff = getOrigAsSecDevice()->getSecDeviceBuff();
		cfcore::CFGenKbSecDeviceBuff* myBuff = getSecDeviceBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecDeviceEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecDeviceBuff* origBuff = getOrigAsSecDevice()->getSecDeviceBuff();
		cfcore::CFGenKbSecDeviceBuff* myBuff = getSecDeviceBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
