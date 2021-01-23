// Description: C++18 edit object instance implementation for CFGenKb TSecGrpMemb.

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
#include <cfgenkbobj/CFGenKbTSecGrpMembObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpMembEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbTSecGrpMembEditObj::CLASS_NAME( "CFGenKbTSecGrpMembEditObj" );

	CFGenKbTSecGrpMembEditObj::CFGenKbTSecGrpMembEditObj( cfcore::ICFGenKbTSecGrpMembObj* argOrig )
	: ICFGenKbTSecGrpMembEditObj()
	{
		static const std::string S_ProcName( "CFGenKbTSecGrpMembEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbTSecGrpMembBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbTSecGrpMembBuff*>( origBuff->clone() );
	}

	CFGenKbTSecGrpMembEditObj::~CFGenKbTSecGrpMembEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbTSecGrpMembEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpMembEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpMembEditObj::getCreatedAt() {
		return( getTSecGrpMembBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpMembEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpMembEditObj::getUpdatedAt() {
		return( getTSecGrpMembBuff()->getUpdatedAt() );
	}

	void CFGenKbTSecGrpMembEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTSecGrpMembBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTSecGrpMembEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGrpMembBuff()->setCreatedAt( value );
	}

	void CFGenKbTSecGrpMembEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTSecGrpMembBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTSecGrpMembEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGrpMembBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbTSecGrpMembEditObj::getClassCode() const {
		return( cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE );
	}

	bool CFGenKbTSecGrpMembEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTSecGrpMembEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpMembEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpMembId( "TSecGrpMembId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTSecGrpMembEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTSecGrpMembEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTSecGrpMembEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTSecGrpMembEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTSecGrpMembEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbTSecGrpMembEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpMembId, CFGenKbTSecGrpMembEditObj::getRequiredTSecGrpMembId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFGenKbTSecGrpMembEditObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbTSecGrpMembEditObj::getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbTSecGrpMembEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbTSecGrpMembEditObj::setRequiredRevision( int32_t value ) {
		getTSecGrpMembBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbTSecGrpMembEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredTSecGrpMembId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbTSecGrpMembEditObj::getGenDefName() {
		return( cfcore::CFGenKbTSecGrpMembBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembEditObj::getScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembEditObj::getObjScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTSecGrpMembEditObj::getObjQualifiedName() {
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

	std::string CFGenKbTSecGrpMembEditObj::getObjFullName() {
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

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbTSecGrpMembObj* retobj = getSchema()->getTSecGrpMembTableObj()->realizeTSecGrpMemb( dynamic_cast<cfcore::ICFGenKbTSecGrpMembObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbTSecGrpMembObj* retval = getOrigAsTSecGrpMemb()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembEditObj::create() {
		cfcore::ICFGenKbTSecGrpMembObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpMemb()->getSchema() )->getTSecGrpMembTableObj()->createTSecGrpMemb( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembEditObj::update() {
		getSchema()->getTSecGrpMembTableObj()->updateTSecGrpMemb( this );
		return( NULL );
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTSecGrpMembTableObj()->deleteTSecGrpMemb( this );
		return( NULL );
	}

	cfcore::ICFGenKbTSecGrpMembTableObj* CFGenKbTSecGrpMembEditObj::getTSecGrpMembTable() {
		return( orig->getSchema()->getTSecGrpMembTableObj() );
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembEditObj::getTSecGrpMembEdit() {
		return( (cfcore::ICFGenKbTSecGrpMembEditObj*)this );
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbTSecGrpMembEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembEditObj::getOrigAsTSecGrpMemb() {
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpMembObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGrpMembEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbTSecGrpMembEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbTSecGrpMembEditObj::setBuff( cfcore::CFGenKbTSecGrpMembBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbTSecGrpMembPKey* CFGenKbTSecGrpMembEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbTSecGrpMembEditObj::setPKey( cfcore::CFGenKbTSecGrpMembPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbTSecGrpMembEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbTSecGrpMembEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbTSecGrpMembEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbTSecGrpMembEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbTSecGrpMembEditObj::getRequiredTSecGrpMembId() {
		return( getPKey()->getRequiredTSecGrpMembId() );
	}

	const int64_t* CFGenKbTSecGrpMembEditObj::getRequiredTSecGrpMembIdReference() {
		return( getPKey()->getRequiredTSecGrpMembIdReference() );
	}

	const int32_t CFGenKbTSecGrpMembEditObj::getRequiredTSecGroupId() {
		return( getTSecGrpMembBuff()->getRequiredTSecGroupId() );
	}

	const int32_t* CFGenKbTSecGrpMembEditObj::getRequiredTSecGroupIdReference() {
		return( getTSecGrpMembBuff()->getRequiredTSecGroupIdReference() );
	}

	const uuid_ptr_t CFGenKbTSecGrpMembEditObj::getRequiredSecUserId() {
		return( getTSecGrpMembBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbTSecGrpMembEditObj::getRequiredSecUserIdReference() {
		return( getTSecGrpMembBuff()->getRequiredSecUserIdReference() );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTSecGrpMembEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpMemb()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGrpMembEditObj::setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTSecGrpMembBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGrpMembEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpMemb()->getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpMembBuff()->getRequiredTSecGroupId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGrpMembEditObj::setRequiredContainerGroup( cfcore::ICFGenKbTSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTSecGrpMembBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTSecGrpMembBuff()->setRequiredTSecGroupId( value->getRequiredTSecGroupId() );
			}
		}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpMembEditObj::getRequiredParentUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpMemb()->getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getRequiredSecUserId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGrpMembEditObj::setRequiredParentUser( cfcore::ICFGenKbSecUserObj* value ) {
			
			if( value != NULL ) {
				getTSecGrpMembBuff()->setRequiredSecUserId( value->getRequiredSecUserId() );
			}
			else {
			}
		}

	void CFGenKbTSecGrpMembEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbTSecGrpMembPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpMembBuff* tableBuff = getTSecGrpMembBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredTSecGrpMembId( tablePKey->getRequiredTSecGrpMembId() );
	}

	void CFGenKbTSecGrpMembEditObj::copyBuffToPKey() {
		cfcore::CFGenKbTSecGrpMembPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpMembBuff* tableBuff = getTSecGrpMembBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGrpMembId( tableBuff->getRequiredTSecGrpMembId() );
	}

	void CFGenKbTSecGrpMembEditObj::copyBuffToOrig() {
		cfcore::CFGenKbTSecGrpMembBuff* origBuff = getOrigAsTSecGrpMemb()->getTSecGrpMembBuff();
		cfcore::CFGenKbTSecGrpMembBuff* myBuff = getTSecGrpMembBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbTSecGrpMembEditObj::copyOrigToBuff() {
		cfcore::CFGenKbTSecGrpMembBuff* origBuff = getOrigAsTSecGrpMemb()->getTSecGrpMembBuff();
		cfcore::CFGenKbTSecGrpMembBuff* myBuff = getTSecGrpMembBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
