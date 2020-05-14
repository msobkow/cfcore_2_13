// Description: C++18 edit object instance implementation for CFGenKb SecSession.

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
#include <cfgenkbobj/CFGenKbSecSessionObj.hpp>
#include <cfgenkbobj/CFGenKbSecSessionEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecSessionEditObj::CLASS_NAME( "CFGenKbSecSessionEditObj" );

	CFGenKbSecSessionEditObj::CFGenKbSecSessionEditObj( cfcore::ICFGenKbSecSessionObj* argOrig )
	: ICFGenKbSecSessionEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecSessionEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecSessionBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecSessionBuff*>( origBuff->clone() );
	}

	CFGenKbSecSessionEditObj::~CFGenKbSecSessionEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecSessionEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecSessionEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecSessionBuff::CLASS_CODE );
	}

	bool CFGenKbSecSessionEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecSessionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecSessionEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecSessionEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SecSessionId( "SecSessionId" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_SecDevName( "SecDevName" );
		static const std::string S_Start( "Start" );
		static const std::string S_Finish( "Finish" );
		static const std::string S_SecProxyId( "SecProxyId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecSessionEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecSessionId, CFGenKbSecSessionEditObj::getRequiredSecSessionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecSessionEditObj::getRequiredSecUserId() ) );
		if( ! CFGenKbSecSessionEditObj::isOptionalSecDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SecDevName, CFGenKbSecSessionEditObj::getOptionalSecDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Start, CFGenKbSecSessionEditObj::getRequiredStart() ) );
		if( ! CFGenKbSecSessionEditObj::isOptionalFinishNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Finish, CFGenKbSecSessionEditObj::getOptionalFinishValue() ) );
		}
		if( ! CFGenKbSecSessionEditObj::isOptionalSecProxyIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecProxyId, CFGenKbSecSessionEditObj::getOptionalSecProxyIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecSessionEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecSessionEditObj::setRequiredRevision( int32_t value ) {
		getSecSessionBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecSessionEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		const uuid_ptr_t val = getRequiredSecSessionId();
		objName = cflib::CFLibXmlUtil::formatUuid( val );
		return( objName );
	}

	const std::string CFGenKbSecSessionEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecSessionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionEditObj::getScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionEditObj::getObjScope() {
		cfcore::ICFGenKbSecUserObj* scope = getRequiredContainerSecUser();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecSessionEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecSessionEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecSessionEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecSessionEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecSessionObj* retobj = getSchema()->getSecSessionTableObj()->realizeSecSession( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecSessionObj* retval = getOrigAsSecSession()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionEditObj::create() {
		cfcore::ICFGenKbSecSessionObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecSession()->getSchema() )->getSecSessionTableObj()->createSecSession( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionEditObj::update() {
		getSchema()->getSecSessionTableObj()->updateSecSession( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecSessionTableObj()->deleteSecSession( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecSessionTableObj* CFGenKbSecSessionEditObj::getSecSessionTable() {
		return( orig->getSchema()->getSecSessionTableObj() );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionEditObj::getSecSessionEdit() {
		return( (cfcore::ICFGenKbSecSessionEditObj*)this );
	}

	cfcore::ICFGenKbSecSessionEditObj* CFGenKbSecSessionEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecSessionEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecSessionObj* CFGenKbSecSessionEditObj::getOrigAsSecSession() {
		return( dynamic_cast<cfcore::ICFGenKbSecSessionObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecSessionEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecSessionBuff* CFGenKbSecSessionEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecSessionEditObj::setBuff( cfcore::CFGenKbSecSessionBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecSessionPKey* CFGenKbSecSessionEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecSessionEditObj::setPKey( cfcore::CFGenKbSecSessionPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecSessionEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecSessionEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const uuid_ptr_t CFGenKbSecSessionEditObj::getRequiredSecSessionId() {
		return( getPKey()->getRequiredSecSessionId() );
	}

	const uuid_ptr_t CFGenKbSecSessionEditObj::getRequiredSecSessionIdReference() {
		return( getPKey()->getRequiredSecSessionIdReference() );
	}

	const uuid_ptr_t CFGenKbSecSessionEditObj::getRequiredSecUserId() {
		return( getSecSessionBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecSessionEditObj::getRequiredSecUserIdReference() {
		return( getSecSessionBuff()->getRequiredSecUserIdReference() );
	}

	bool CFGenKbSecSessionEditObj::isOptionalSecDevNameNull() {
		return( getSecSessionBuff()->isOptionalSecDevNameNull() );
	}

	const std::string& CFGenKbSecSessionEditObj::getOptionalSecDevNameValue() {
		return( getSecSessionBuff()->getOptionalSecDevNameValue() );
	}

	const std::string* CFGenKbSecSessionEditObj::getOptionalSecDevNameReference() {
		return( getSecSessionBuff()->getOptionalSecDevNameReference() );
	}

	void CFGenKbSecSessionEditObj::setOptionalSecDevNameNull() {
		if( ! getSecSessionBuff()->isOptionalSecDevNameNull() ) {
			getSecSessionBuff()->setOptionalSecDevNameNull();
		}
	}

	void CFGenKbSecSessionEditObj::setOptionalSecDevNameValue( const std::string& value ) {
		if( getSecSessionBuff()->isOptionalSecDevNameNull() ) {
			getSecSessionBuff()->setOptionalSecDevNameValue( value );
		}
		else if( getSecSessionBuff()->getOptionalSecDevNameValue() != value ) {
			getSecSessionBuff()->setOptionalSecDevNameValue( value );
		}
	}

	const std::chrono::system_clock::time_point& CFGenKbSecSessionEditObj::getRequiredStart() {
		return( getSecSessionBuff()->getRequiredStart() );
	}

	const std::chrono::system_clock::time_point* CFGenKbSecSessionEditObj::getRequiredStartReference() {
		return( getSecSessionBuff()->getRequiredStartReference() );
	}

	void CFGenKbSecSessionEditObj::setRequiredStart( const std::chrono::system_clock::time_point& value ) {
		if( getSecSessionBuff()->getRequiredStart() != value ) {
			getSecSessionBuff()->setRequiredStart( value );
		}
	}

	bool CFGenKbSecSessionEditObj::isOptionalFinishNull() {
		return( getSecSessionBuff()->isOptionalFinishNull() );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecSessionEditObj::getOptionalFinishValue() {
		return( getSecSessionBuff()->getOptionalFinishValue() );
	}

	const std::chrono::system_clock::time_point* CFGenKbSecSessionEditObj::getOptionalFinishReference() {
		return( getSecSessionBuff()->getOptionalFinishReference() );
	}

	void CFGenKbSecSessionEditObj::setOptionalFinishNull() {
		if( ! getSecSessionBuff()->isOptionalFinishNull() ) {
			getSecSessionBuff()->setOptionalFinishNull();
		}
	}

	void CFGenKbSecSessionEditObj::setOptionalFinishValue( const std::chrono::system_clock::time_point& value ) {
		if( getSecSessionBuff()->isOptionalFinishNull() ) {
			getSecSessionBuff()->setOptionalFinishValue( value );
		}
		else if( getSecSessionBuff()->getOptionalFinishValue() != value ) {
			getSecSessionBuff()->setOptionalFinishValue( value );
		}
	}

	bool CFGenKbSecSessionEditObj::isOptionalSecProxyIdNull() {
		return( getSecSessionBuff()->isOptionalSecProxyIdNull() );
	}

	const uuid_ptr_t CFGenKbSecSessionEditObj::getOptionalSecProxyIdValue() {
		return( getSecSessionBuff()->getOptionalSecProxyIdValue() );
	}

	const uuid_ptr_t CFGenKbSecSessionEditObj::getOptionalSecProxyIdReference() {
		return( getSecSessionBuff()->getOptionalSecProxyIdReference() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecSessionEditObj::getRequiredContainerSecUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecSession()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecSessionBuff()->getRequiredSecUserId() );
		}
		return( retobj );
	}

	void CFGenKbSecSessionEditObj::setRequiredContainerSecUser( cfcore::ICFGenKbSecUserObj* value ) {
			
			if( value != NULL ) {
				getSecSessionBuff()->setRequiredSecUserId( value->getRequiredSecUserId() );
			}
		}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecSessionEditObj::getRequiredParentSecProxy( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;

			if( getSecSessionBuff()->isOptionalSecProxyIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecSession()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecSessionBuff()->getOptionalSecProxyIdValue() );
		}
		return( retobj );
	}

	void CFGenKbSecSessionEditObj::setRequiredParentSecProxy( cfcore::ICFGenKbSecUserObj* value ) {
			
			if( value != NULL ) {
				getSecSessionBuff()->setOptionalSecProxyIdValue( value->getRequiredSecUserId() );
			}
			else {
				getSecSessionBuff()->setOptionalSecProxyIdNull();
			}
		}

	void CFGenKbSecSessionEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecSessionPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecSessionBuff* tableBuff = getSecSessionBuff();
		tableBuff->setRequiredSecSessionId( tablePKey->getRequiredSecSessionId() );
	}

	void CFGenKbSecSessionEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecSessionPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecSessionBuff* tableBuff = getSecSessionBuff();
		tablePKey->setRequiredSecSessionId( tableBuff->getRequiredSecSessionId() );
	}

	void CFGenKbSecSessionEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecSessionBuff* origBuff = getOrigAsSecSession()->getSecSessionBuff();
		cfcore::CFGenKbSecSessionBuff* myBuff = getSecSessionBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecSessionEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecSessionBuff* origBuff = getOrigAsSecSession()->getSecSessionBuff();
		cfcore::CFGenKbSecSessionBuff* myBuff = getSecSessionBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
