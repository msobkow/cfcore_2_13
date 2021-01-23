// Description: C++18 edit object instance implementation for CFGenKb TSecGrpInc.

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
#include <cfgenkbobj/CFGenKbTSecGrpIncObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpIncEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbTSecGrpIncEditObj::CLASS_NAME( "CFGenKbTSecGrpIncEditObj" );

	CFGenKbTSecGrpIncEditObj::CFGenKbTSecGrpIncEditObj( cfcore::ICFGenKbTSecGrpIncObj* argOrig )
	: ICFGenKbTSecGrpIncEditObj()
	{
		static const std::string S_ProcName( "CFGenKbTSecGrpIncEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbTSecGrpIncBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbTSecGrpIncBuff*>( origBuff->clone() );
	}

	CFGenKbTSecGrpIncEditObj::~CFGenKbTSecGrpIncEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbTSecGrpIncEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpIncEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpIncBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpIncEditObj::getCreatedAt() {
		return( getTSecGrpIncBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpIncEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpIncBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpIncEditObj::getUpdatedAt() {
		return( getTSecGrpIncBuff()->getUpdatedAt() );
	}

	void CFGenKbTSecGrpIncEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTSecGrpIncBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTSecGrpIncEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGrpIncBuff()->setCreatedAt( value );
	}

	void CFGenKbTSecGrpIncEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTSecGrpIncBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTSecGrpIncEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGrpIncBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbTSecGrpIncEditObj::getClassCode() const {
		return( cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE );
	}

	bool CFGenKbTSecGrpIncEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTSecGrpIncEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpIncEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpIncId( "TSecGrpIncId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_IncludeGroupId( "IncludeGroupId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTSecGrpIncEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTSecGrpIncEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTSecGrpIncEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTSecGrpIncEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTSecGrpIncEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbTSecGrpIncEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpIncId, CFGenKbTSecGrpIncEditObj::getRequiredTSecGrpIncId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFGenKbTSecGrpIncEditObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, CFGenKbTSecGrpIncEditObj::getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbTSecGrpIncEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbTSecGrpIncEditObj::setRequiredRevision( int32_t value ) {
		getTSecGrpIncBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbTSecGrpIncEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredTSecGrpIncId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbTSecGrpIncEditObj::getGenDefName() {
		return( cfcore::CFGenKbTSecGrpIncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncEditObj::getScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncEditObj::getObjScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTSecGrpIncEditObj::getObjQualifiedName() {
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

	std::string CFGenKbTSecGrpIncEditObj::getObjFullName() {
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbTSecGrpIncObj* retobj = getSchema()->getTSecGrpIncTableObj()->realizeTSecGrpInc( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbTSecGrpIncObj* retval = getOrigAsTSecGrpInc()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncEditObj::create() {
		cfcore::ICFGenKbTSecGrpIncObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpInc()->getSchema() )->getTSecGrpIncTableObj()->createTSecGrpInc( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncEditObj::update() {
		getSchema()->getTSecGrpIncTableObj()->updateTSecGrpInc( this );
		return( NULL );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTSecGrpIncTableObj()->deleteTSecGrpInc( this );
		return( NULL );
	}

	cfcore::ICFGenKbTSecGrpIncTableObj* CFGenKbTSecGrpIncEditObj::getTSecGrpIncTable() {
		return( orig->getSchema()->getTSecGrpIncTableObj() );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncEditObj::getTSecGrpIncEdit() {
		return( (cfcore::ICFGenKbTSecGrpIncEditObj*)this );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbTSecGrpIncEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncEditObj::getOrigAsTSecGrpInc() {
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGrpIncEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbTSecGrpIncEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbTSecGrpIncEditObj::setBuff( cfcore::CFGenKbTSecGrpIncBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbTSecGrpIncPKey* CFGenKbTSecGrpIncEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbTSecGrpIncEditObj::setPKey( cfcore::CFGenKbTSecGrpIncPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbTSecGrpIncEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbTSecGrpIncEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbTSecGrpIncEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbTSecGrpIncEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbTSecGrpIncEditObj::getRequiredTSecGrpIncId() {
		return( getPKey()->getRequiredTSecGrpIncId() );
	}

	const int64_t* CFGenKbTSecGrpIncEditObj::getRequiredTSecGrpIncIdReference() {
		return( getPKey()->getRequiredTSecGrpIncIdReference() );
	}

	const int32_t CFGenKbTSecGrpIncEditObj::getRequiredTSecGroupId() {
		return( getTSecGrpIncBuff()->getRequiredTSecGroupId() );
	}

	const int32_t* CFGenKbTSecGrpIncEditObj::getRequiredTSecGroupIdReference() {
		return( getTSecGrpIncBuff()->getRequiredTSecGroupIdReference() );
	}

	const int32_t CFGenKbTSecGrpIncEditObj::getRequiredIncludeGroupId() {
		return( getTSecGrpIncBuff()->getRequiredIncludeGroupId() );
	}

	const int32_t* CFGenKbTSecGrpIncEditObj::getRequiredIncludeGroupIdReference() {
		return( getTSecGrpIncBuff()->getRequiredIncludeGroupIdReference() );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTSecGrpIncEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpInc()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGrpIncEditObj::setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTSecGrpIncBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGrpIncEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpInc()->getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpIncBuff()->getRequiredTSecGroupId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGrpIncEditObj::setRequiredContainerGroup( cfcore::ICFGenKbTSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTSecGrpIncBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTSecGrpIncBuff()->setRequiredTSecGroupId( value->getRequiredTSecGroupId() );
			}
		}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGrpIncEditObj::getRequiredParentSubGroup( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGrpInc()->getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpIncBuff()->getRequiredIncludeGroupId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGrpIncEditObj::setRequiredParentSubGroup( cfcore::ICFGenKbTSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getTSecGrpIncBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getTSecGrpIncBuff()->setRequiredIncludeGroupId( value->getRequiredTSecGroupId() );
			}
			else {
			}
		}

	void CFGenKbTSecGrpIncEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbTSecGrpIncPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpIncBuff* tableBuff = getTSecGrpIncBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredTSecGrpIncId( tablePKey->getRequiredTSecGrpIncId() );
	}

	void CFGenKbTSecGrpIncEditObj::copyBuffToPKey() {
		cfcore::CFGenKbTSecGrpIncPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpIncBuff* tableBuff = getTSecGrpIncBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGrpIncId( tableBuff->getRequiredTSecGrpIncId() );
	}

	void CFGenKbTSecGrpIncEditObj::copyBuffToOrig() {
		cfcore::CFGenKbTSecGrpIncBuff* origBuff = getOrigAsTSecGrpInc()->getTSecGrpIncBuff();
		cfcore::CFGenKbTSecGrpIncBuff* myBuff = getTSecGrpIncBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbTSecGrpIncEditObj::copyOrigToBuff() {
		cfcore::CFGenKbTSecGrpIncBuff* origBuff = getOrigAsTSecGrpInc()->getTSecGrpIncBuff();
		cfcore::CFGenKbTSecGrpIncBuff* myBuff = getTSecGrpIncBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
