// Description: C++18 edit object instance implementation for CFGenKb SecApp.

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
#include <cfgenkbobj/CFGenKbSecAppObj.hpp>
#include <cfgenkbobj/CFGenKbSecAppEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecAppEditObj::CLASS_NAME( "CFGenKbSecAppEditObj" );

	CFGenKbSecAppEditObj::CFGenKbSecAppEditObj( cfcore::ICFGenKbSecAppObj* argOrig )
	: ICFGenKbSecAppEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecAppEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecAppBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecAppBuff*>( origBuff->clone() );
	}

	CFGenKbSecAppEditObj::~CFGenKbSecAppEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecAppEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecAppEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecAppBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecAppEditObj::getCreatedAt() {
		return( getSecAppBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecAppEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecAppBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecAppEditObj::getUpdatedAt() {
		return( getSecAppBuff()->getUpdatedAt() );
	}

	void CFGenKbSecAppEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecAppBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecAppEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecAppBuff()->setCreatedAt( value );
	}

	void CFGenKbSecAppEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecAppBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecAppEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecAppBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecAppEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecAppBuff::CLASS_CODE );
	}

	bool CFGenKbSecAppEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecAppBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecAppEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecAppEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_JEEMountName( "JEEMountName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecAppEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecAppEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecAppEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecAppEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecAppEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecAppEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, CFGenKbSecAppEditObj::getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEMountName, CFGenKbSecAppEditObj::getRequiredJEEMountName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecAppEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecAppEditObj::setRequiredRevision( int32_t value ) {
		getSecAppBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecAppEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredJEEMountName() );
		return( objName );
	}

	const std::string CFGenKbSecAppEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecAppBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecAppEditObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecAppEditObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecAppEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecAppEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecAppEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecFormTableObj()->readSecFormByLookupUJEEServletIdx( getRequiredClusterId(),
			getRequiredSecAppId(),
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

	std::string CFGenKbSecAppEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecAppEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecAppObj* retobj = getSchema()->getSecAppTableObj()->realizeSecApp( dynamic_cast<cfcore::ICFGenKbSecAppObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecAppObj* retval = getOrigAsSecApp()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppEditObj::create() {
		cfcore::ICFGenKbSecAppObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecApp()->getSchema() )->getSecAppTableObj()->createSecApp( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecAppEditObj* CFGenKbSecAppEditObj::update() {
		getSchema()->getSecAppTableObj()->updateSecApp( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecAppEditObj* CFGenKbSecAppEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecAppTableObj()->deleteSecApp( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecAppTableObj* CFGenKbSecAppEditObj::getSecAppTable() {
		return( orig->getSchema()->getSecAppTableObj() );
	}

	cfcore::ICFGenKbSecAppEditObj* CFGenKbSecAppEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecAppEditObj* CFGenKbSecAppEditObj::getSecAppEdit() {
		return( (cfcore::ICFGenKbSecAppEditObj*)this );
	}

	cfcore::ICFGenKbSecAppEditObj* CFGenKbSecAppEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecAppEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecAppEditObj::getOrigAsSecApp() {
		return( dynamic_cast<cfcore::ICFGenKbSecAppObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecAppEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecAppBuff* CFGenKbSecAppEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecAppEditObj::setBuff( cfcore::CFGenKbSecAppBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecAppPKey* CFGenKbSecAppEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecAppEditObj::setPKey( cfcore::CFGenKbSecAppPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecAppEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecAppEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbSecAppEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecAppEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int32_t CFGenKbSecAppEditObj::getRequiredSecAppId() {
		return( getPKey()->getRequiredSecAppId() );
	}

	const int32_t* CFGenKbSecAppEditObj::getRequiredSecAppIdReference() {
		return( getPKey()->getRequiredSecAppIdReference() );
	}

	const std::string& CFGenKbSecAppEditObj::getRequiredJEEMountName() {
		return( getSecAppBuff()->getRequiredJEEMountName() );
	}

	const std::string* CFGenKbSecAppEditObj::getRequiredJEEMountNameReference() {
		return( getSecAppBuff()->getRequiredJEEMountNameReference() );
	}

	void CFGenKbSecAppEditObj::setRequiredJEEMountName( const std::string& value ) {
		if( getSecAppBuff()->getRequiredJEEMountName() != value ) {
			getSecAppBuff()->setRequiredJEEMountName( value );
		}
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSecAppEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecApp()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbSecAppEditObj::setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecAppBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	std::vector<cfcore::ICFGenKbSecFormObj*> CFGenKbSecAppEditObj::getOptionalComponentsForm( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecFormObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecApp()->getSchema() )->getSecFormTableObj()->readSecFormBySecAppIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecAppId(),
			forceRead );
		return( retval );
	}

	void CFGenKbSecAppEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecAppPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecAppBuff* tableBuff = getSecAppBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecAppId( tablePKey->getRequiredSecAppId() );
	}

	void CFGenKbSecAppEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecAppPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecAppBuff* tableBuff = getSecAppBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecAppId( tableBuff->getRequiredSecAppId() );
	}

	void CFGenKbSecAppEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecAppBuff* origBuff = getOrigAsSecApp()->getSecAppBuff();
		cfcore::CFGenKbSecAppBuff* myBuff = getSecAppBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecAppEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecAppBuff* origBuff = getOrigAsSecApp()->getSecAppBuff();
		cfcore::CFGenKbSecAppBuff* myBuff = getSecAppBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
