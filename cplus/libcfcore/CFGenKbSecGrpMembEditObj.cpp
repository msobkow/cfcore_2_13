// Description: C++18 edit object instance implementation for CFGenKb SecGrpMemb.

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
#include <cfgenkbobj/CFGenKbSecGrpMembObj.hpp>
#include <cfgenkbobj/CFGenKbSecGrpMembEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecGrpMembEditObj::CLASS_NAME( "CFGenKbSecGrpMembEditObj" );

	CFGenKbSecGrpMembEditObj::CFGenKbSecGrpMembEditObj( cfcore::ICFGenKbSecGrpMembObj* argOrig )
	: ICFGenKbSecGrpMembEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecGrpMembEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecGrpMembBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecGrpMembBuff*>( origBuff->clone() );
	}

	CFGenKbSecGrpMembEditObj::~CFGenKbSecGrpMembEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecGrpMembEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGrpMembEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpMembBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGrpMembEditObj::getCreatedAt() {
		return( getSecGrpMembBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGrpMembEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpMembBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGrpMembEditObj::getUpdatedAt() {
		return( getSecGrpMembBuff()->getUpdatedAt() );
	}

	void CFGenKbSecGrpMembEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecGrpMembBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGrpMembEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGrpMembBuff()->setCreatedAt( value );
	}

	void CFGenKbSecGrpMembEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecGrpMembBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGrpMembEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGrpMembBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecGrpMembEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE );
	}

	bool CFGenKbSecGrpMembEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecGrpMembBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecGrpMembEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpMembEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGrpMembId( "SecGrpMembId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecGrpMembEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecGrpMembEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecGrpMembEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecGrpMembEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecGrpMembEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecGrpMembEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGrpMembId, CFGenKbSecGrpMembEditObj::getRequiredSecGrpMembId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFGenKbSecGrpMembEditObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbSecGrpMembEditObj::getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecGrpMembEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecGrpMembEditObj::setRequiredRevision( int32_t value ) {
		getSecGrpMembBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecGrpMembEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredSecGrpMembId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbSecGrpMembEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecGrpMembBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpMembEditObj::getScope() {
		cfcore::ICFGenKbSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpMembEditObj::getObjScope() {
		cfcore::ICFGenKbSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpMembEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecGrpMembEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGrpMembEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecGrpMembEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecGrpMembEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecGrpMembObj* retobj = getSchema()->getSecGrpMembTableObj()->realizeSecGrpMemb( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecGrpMembObj* retval = getOrigAsSecGrpMemb()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembEditObj::create() {
		cfcore::ICFGenKbSecGrpMembObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpMemb()->getSchema() )->getSecGrpMembTableObj()->createSecGrpMemb( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecGrpMembEditObj* CFGenKbSecGrpMembEditObj::update() {
		getSchema()->getSecGrpMembTableObj()->updateSecGrpMemb( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGrpMembEditObj* CFGenKbSecGrpMembEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecGrpMembTableObj()->deleteSecGrpMemb( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGrpMembTableObj* CFGenKbSecGrpMembEditObj::getSecGrpMembTable() {
		return( orig->getSchema()->getSecGrpMembTableObj() );
	}

	cfcore::ICFGenKbSecGrpMembEditObj* CFGenKbSecGrpMembEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecGrpMembEditObj* CFGenKbSecGrpMembEditObj::getSecGrpMembEdit() {
		return( (cfcore::ICFGenKbSecGrpMembEditObj*)this );
	}

	cfcore::ICFGenKbSecGrpMembEditObj* CFGenKbSecGrpMembEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecGrpMembEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecGrpMembObj* CFGenKbSecGrpMembEditObj::getOrigAsSecGrpMemb() {
		return( dynamic_cast<cfcore::ICFGenKbSecGrpMembObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGrpMembEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecGrpMembBuff* CFGenKbSecGrpMembEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecGrpMembEditObj::setBuff( cfcore::CFGenKbSecGrpMembBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecGrpMembPKey* CFGenKbSecGrpMembEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecGrpMembEditObj::setPKey( cfcore::CFGenKbSecGrpMembPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecGrpMembEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecGrpMembEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbSecGrpMembEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecGrpMembEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbSecGrpMembEditObj::getRequiredSecGrpMembId() {
		return( getPKey()->getRequiredSecGrpMembId() );
	}

	const int64_t* CFGenKbSecGrpMembEditObj::getRequiredSecGrpMembIdReference() {
		return( getPKey()->getRequiredSecGrpMembIdReference() );
	}

	const int32_t CFGenKbSecGrpMembEditObj::getRequiredSecGroupId() {
		return( getSecGrpMembBuff()->getRequiredSecGroupId() );
	}

	const int32_t* CFGenKbSecGrpMembEditObj::getRequiredSecGroupIdReference() {
		return( getSecGrpMembBuff()->getRequiredSecGroupIdReference() );
	}

	const uuid_ptr_t CFGenKbSecGrpMembEditObj::getRequiredSecUserId() {
		return( getSecGrpMembBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbSecGrpMembEditObj::getRequiredSecUserIdReference() {
		return( getSecGrpMembBuff()->getRequiredSecUserIdReference() );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSecGrpMembEditObj::getRequiredOwnerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpMemb()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbSecGrpMembEditObj::setRequiredOwnerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecGrpMembBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGrpMembEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpMemb()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGrpMembBuff()->getRequiredSecGroupId() );
		}
		return( retobj );
	}

	void CFGenKbSecGrpMembEditObj::setRequiredContainerGroup( cfcore::ICFGenKbSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGrpMembBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGrpMembBuff()->setRequiredSecGroupId( value->getRequiredSecGroupId() );
			}
		}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGrpMembEditObj::getRequiredParentUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGrpMemb()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGrpMembBuff()->getRequiredSecUserId() );
		}
		return( retobj );
	}

	void CFGenKbSecGrpMembEditObj::setRequiredParentUser( cfcore::ICFGenKbSecUserObj* value ) {
			
			if( value != NULL ) {
				getSecGrpMembBuff()->setRequiredSecUserId( value->getRequiredSecUserId() );
			}
			else {
			}
		}

	void CFGenKbSecGrpMembEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecGrpMembPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGrpMembBuff* tableBuff = getSecGrpMembBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecGrpMembId( tablePKey->getRequiredSecGrpMembId() );
	}

	void CFGenKbSecGrpMembEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecGrpMembPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGrpMembBuff* tableBuff = getSecGrpMembBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGrpMembId( tableBuff->getRequiredSecGrpMembId() );
	}

	void CFGenKbSecGrpMembEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecGrpMembBuff* origBuff = getOrigAsSecGrpMemb()->getSecGrpMembBuff();
		cfcore::CFGenKbSecGrpMembBuff* myBuff = getSecGrpMembBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecGrpMembEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecGrpMembBuff* origBuff = getOrigAsSecGrpMemb()->getSecGrpMembBuff();
		cfcore::CFGenKbSecGrpMembBuff* myBuff = getSecGrpMembBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
