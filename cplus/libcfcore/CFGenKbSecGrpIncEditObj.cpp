// Description: C++18 edit object instance implementation for CFGenKb SecGrpInc.

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
#include <cfgenkbobj/CFGenKbSecGrpIncObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpIncEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecGrpIncEditObj::CLASS_NAME( "CFGenKbSecGrpIncEditObj" );

	CFGenKbSecGrpIncEditObj::CFGenKbSecGrpIncEditObj( cfcore::ICFGenKbSecGrpIncObj* argOrig )
	: ICFGenKbSecGrpIncEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecGrpIncEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecGrpIncBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecGrpIncBuff*>( origBuff->clone() );
	}

	CFGenKbSecGrpIncEditObj::~CFGenKbSecGrpIncEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecGrpIncEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGrpIncEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpIncBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGrpIncEditObj::getCreatedAt() {
		return( getSecGrpIncBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGrpIncEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpIncBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGrpIncEditObj::getUpdatedAt() {
		return( getSecGrpIncBuff()->getUpdatedAt() );
	}

	void CFGenKbSecGrpIncEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecGrpIncBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGrpIncEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGrpIncBuff()->setCreatedAt( value );
	}

	void CFGenKbSecGrpIncEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecGrpIncBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGrpIncEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGrpIncBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecGrpIncEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE );
	}

	bool CFGenKbSecGrpIncEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecGrpIncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecGrpIncEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpIncEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGrpIncId( "SecGrpIncId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_IncludeGroupId( "IncludeGroupId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecGrpIncEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecGrpIncEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecGrpIncEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecGrpIncEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecGrpIncEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecGrpIncEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGrpIncId, CFGenKbSecGrpIncEditObj::getRequiredSecGrpIncId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFGenKbSecGrpIncEditObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, CFGenKbSecGrpIncEditObj::getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecGrpIncEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecGrpIncEditObj::setRequiredRevision( int32_t value ) {
		getSecGrpIncBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecGrpIncEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredSecGrpIncId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbSecGrpIncEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecGrpIncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpIncEditObj::getScope() {
		cfcore::ICFGenKbSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpIncEditObj::getObjScope() {
		cfcore::ICFGenKbSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpIncEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecGrpIncEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpIncEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecGrpIncEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecGrpIncEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecGrpIncObj* retobj = getSchema()->getSecGrpIncTableObj()->realizeSecGrpInc( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecGrpIncObj* retval = getOrigAsSecGrpInc()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncEditObj::create() {
		cfcore::ICFGenKbSecGrpIncObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getSecGrpIncTableObj()->createSecGrpInc( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecGrpIncEditObj* CFGenKbSecGrpIncEditObj::update() {
		getSchema()->getSecGrpIncTableObj()->updateSecGrpInc( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGrpIncEditObj* CFGenKbSecGrpIncEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecGrpIncTableObj()->deleteSecGrpInc( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGrpIncTableObj* CFGenKbSecGrpIncEditObj::getSecGrpIncTable() {
		return( orig->getSchema()->getSecGrpIncTableObj() );
	}

	cfcore::ICFGenKbSecGrpIncEditObj* CFGenKbSecGrpIncEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecGrpIncEditObj* CFGenKbSecGrpIncEditObj::getSecGrpIncEdit() {
		return( (cfcore::ICFGenKbSecGrpIncEditObj*)this );
	}

	cfcore::ICFGenKbSecGrpIncEditObj* CFGenKbSecGrpIncEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecGrpIncEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecGrpIncObj* CFGenKbSecGrpIncEditObj::getOrigAsSecGrpInc() {
		return( dynamic_cast<cfcore::ICFGenKbSecGrpIncObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGrpIncEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecGrpIncBuff* CFGenKbSecGrpIncEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecGrpIncEditObj::setBuff( cfcore::CFGenKbSecGrpIncBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecGrpIncPKey* CFGenKbSecGrpIncEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecGrpIncEditObj::setPKey( cfcore::CFGenKbSecGrpIncPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecGrpIncEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecGrpIncEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbSecGrpIncEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecGrpIncEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbSecGrpIncEditObj::getRequiredSecGrpIncId() {
		return( getPKey()->getRequiredSecGrpIncId() );
	}

	const int64_t* CFGenKbSecGrpIncEditObj::getRequiredSecGrpIncIdReference() {
		return( getPKey()->getRequiredSecGrpIncIdReference() );
	}

	const int32_t CFGenKbSecGrpIncEditObj::getRequiredSecGroupId() {
		return( getSecGrpIncBuff()->getRequiredSecGroupId() );
	}

	const int32_t* CFGenKbSecGrpIncEditObj::getRequiredSecGroupIdReference() {
		return( getSecGrpIncBuff()->getRequiredSecGroupIdReference() );
	}

	const int32_t CFGenKbSecGrpIncEditObj::getRequiredIncludeGroupId() {
		return( getSecGrpIncBuff()->getRequiredIncludeGroupId() );
	}

	const int32_t* CFGenKbSecGrpIncEditObj::getRequiredIncludeGroupIdReference() {
		return( getSecGrpIncBuff()->getRequiredIncludeGroupIdReference() );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSecGrpIncEditObj::getRequiredOwnerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbSecGrpIncEditObj::setRequiredOwnerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecGrpIncBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGrpIncEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGrpIncBuff()->getRequiredSecGroupId() );
		}
		return( retobj );
	}

	void CFGenKbSecGrpIncEditObj::setRequiredContainerGroup( cfcore::ICFGenKbSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGrpIncBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGrpIncBuff()->setRequiredSecGroupId( value->getRequiredSecGroupId() );
			}
		}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGrpIncEditObj::getRequiredParentSubGroup( bool forceRead ) {
		cfcore::ICFGenKbSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpInc()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGrpIncBuff()->getRequiredIncludeGroupId() );
		}
		return( retobj );
	}

	void CFGenKbSecGrpIncEditObj::setRequiredParentSubGroup( cfcore::ICFGenKbSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGrpIncBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGrpIncBuff()->setRequiredIncludeGroupId( value->getRequiredSecGroupId() );
			}
			else {
			}
		}

	void CFGenKbSecGrpIncEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecGrpIncPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGrpIncBuff* tableBuff = getSecGrpIncBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecGrpIncId( tablePKey->getRequiredSecGrpIncId() );
	}

	void CFGenKbSecGrpIncEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecGrpIncPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGrpIncBuff* tableBuff = getSecGrpIncBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGrpIncId( tableBuff->getRequiredSecGrpIncId() );
	}

	void CFGenKbSecGrpIncEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecGrpIncBuff* origBuff = getOrigAsSecGrpInc()->getSecGrpIncBuff();
		cfcore::CFGenKbSecGrpIncBuff* myBuff = getSecGrpIncBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecGrpIncEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecGrpIncBuff* origBuff = getOrigAsSecGrpInc()->getSecGrpIncBuff();
		cfcore::CFGenKbSecGrpIncBuff* myBuff = getSecGrpIncBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
