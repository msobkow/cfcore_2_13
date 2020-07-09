// Description: C++18 base object instance implementation for CFGenKb SecSession.

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
#include <cfgenkbobj/CFGenKbSecSessionObj.hpp>

namespace cfcore {

	const std::string CFGenKbSecSessionObj::CLASS_NAME( "CFGenKbSecSessionObj" );
	const classcode_t CFGenKbSecSessionObj::CLASS_CODE = 0xa90dL;

	int32_t CFGenKbSecSessionObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const uuid_ptr_t CFGenKbSecSessionObj::getRequiredSecSessionId() {
		return( getPKey()->getRequiredSecSessionId() );
	}

	const uuid_ptr_t CFGenKbSecSessionObj::getRequiredSecSessionIdReference() {
		return( getPKey()->getRequiredSecSessionIdReference() );
	}

	const uuid_ptr_t CFGenKbSecSessionObj::getRequiredSecUserId() {
		return( getSecSessionBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecSessionObj::getRequiredSecUserIdReference() {
		return( getSecSessionBuff()->getRequiredSecUserIdReference() );
	}

	bool CFGenKbSecSessionObj::isOptionalSecDevNameNull() {
		return( getSecSessionBuff()->isOptionalSecDevNameNull() );
	}

	const std::string& CFGenKbSecSessionObj::getOptionalSecDevNameValue() {
		return( getSecSessionBuff()->getOptionalSecDevNameValue() );
	}

	const std::string* CFGenKbSecSessionObj::getOptionalSecDevNameReference() {
		return( getSecSessionBuff()->getOptionalSecDevNameReference() );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecSessionObj::getRequiredStart() {
		return( getSecSessionBuff()->getRequiredStart() );
	}

	const std::chrono::system_clock::time_point* CFGenKbSecSessionObj::getRequiredStartReference() {
		return( getSecSessionBuff()->getRequiredStartReference() );
	}

	bool CFGenKbSecSessionObj::isOptionalFinishNull() {
		return( getSecSessionBuff()->isOptionalFinishNull() );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecSessionObj::getOptionalFinishValue() {
		return( getSecSessionBuff()->getOptionalFinishValue() );
	}

	const std::chrono::system_clock::time_point* CFGenKbSecSessionObj::getOptionalFinishReference() {
		return( getSecSessionBuff()->getOptionalFinishReference() );
	}

	bool CFGenKbSecSessionObj::isOptionalSecProxyIdNull() {
		return( getSecSessionBuff()->isOptionalSecProxyIdNull() );
	}

	const uuid_ptr_t CFGenKbSecSessionObj::getOptionalSecProxyIdValue() {
		return( getSecSessionBuff()->getOptionalSecProxyIdValue() );
	}

	const uuid_ptr_t CFGenKbSecSessionObj::getOptionalSecProxyIdReference() {
		return( getSecSessionBuff()->getOptionalSecProxyIdReference() );
	}


	cfcore::ICFGenKbSecUserObj* CFGenKbSecSessionObj::getRequiredContainerSecUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecSessionBuff()->getRequiredSecUserId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecSessionObj::getRequiredParentSecProxy( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
			if( getSecSessionBuff()->isOptionalSecProxyIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecSessionBuff()->getOptionalSecProxyIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbSecSessionObj::CFGenKbSecSessionObj()
	: ICFGenKbSecSessionObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecSessionObj::CFGenKbSecSessionObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbSecSessionObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecSessionObj::~CFGenKbSecSessionObj() {
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

	cfcore::CFGenKbSecSessionBuff* CFGenKbSecSessionObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbSecSessionBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecSession()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredSecSessionId() );
			}
		}
		return( buff );
	}

	void CFGenKbSecSessionObj::setBuff( cfcore::CFGenKbSecSessionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbSecSessionObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecSessionObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecSessionObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecSessionObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecSessionObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SecSessionId( "SecSessionId" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_SecDevName( "SecDevName" );
		static const std::string S_Start( "Start" );
		static const std::string S_Finish( "Finish" );
		static const std::string S_SecProxyId( "SecProxyId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecSessionObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecSessionId, CFGenKbSecSessionObj::getRequiredSecSessionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecSessionObj::getRequiredSecUserId() ) );
		if( ! CFGenKbSecSessionObj::isOptionalSecDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SecDevName, CFGenKbSecSessionObj::getOptionalSecDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Start, CFGenKbSecSessionObj::getRequiredStart() ) );
		if( ! CFGenKbSecSessionObj::isOptionalFinishNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Finish, CFGenKbSecSessionObj::getOptionalFinishValue() ) );
		}
		if( ! CFGenKbSecSessionObj::isOptionalSecProxyIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecProxyId, CFGenKbSecSessionObj::getOptionalSecProxyIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbSecSessionObj::getObjName() {
		std::string objName( CLASS_NAME );
		const uuid_ptr_t val = getRequiredSecSessionId();
		objName = cflib::CFLibXmlUtil::formatUuid( val );
		return( objName );
	}

	const std::string CFGenKbSecSessionObj::getGenDefName() {
		return( cfcore::CFGenKbSecSessionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionObj::getScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionObj::getObjScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecSessionObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecSessionObj::getObjQualifiedName() {
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

	std::string CFGenKbSecSessionObj::getObjFullName() {
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionObj::realize() {
		cfcore::ICFGenKbSecSessionObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj()->realizeSecSession(
			(cfcore::ICFGenKbSecSessionObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecSessionObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj()->readSecSessionByIdIdx( getSecSessionBuff()->getRequiredSecSessionId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecSessionTableObj* CFGenKbSecSessionObj::getSecSessionTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecSessionObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecSessionObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbSecSessionPKey* CFGenKbSecSessionObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbSecSessionPKey();
		}
		return( pKey );
	}

	void CFGenKbSecSessionObj::setPKey( cfcore::CFGenKbSecSessionPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbSecSessionPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbSecSessionObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbSecSessionObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbSecSessionObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj()->lockSecSession( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecSessionTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbSecSessionEditObj*>( edit ) );
	}

	void CFGenKbSecSessionObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionObj::getSecSessionEdit() {
		return( dynamic_cast<cfcore::ICFGenKbSecSessionEditObj*>( edit ) );
	}

	void CFGenKbSecSessionObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecSessionPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecSessionBuff* tableBuff = getSecSessionBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredSecSessionId( tablePKey->getRequiredSecSessionId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbSecSessionObj::copyBuffToPKey() {
		cfcore::CFGenKbSecSessionPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecSessionBuff* tableBuff = getSecSessionBuff();
		tablePKey->setRequiredSecSessionId( tableBuff->getRequiredSecSessionId() );
	}

}
