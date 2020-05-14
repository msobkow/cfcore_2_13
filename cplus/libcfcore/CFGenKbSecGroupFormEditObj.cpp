// Description: C++18 edit object instance implementation for CFGenKb SecGroupForm.

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
#include <cfgenkbobj/CFGenKbSecGroupFormObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupFormEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecGroupFormEditObj::CLASS_NAME( "CFGenKbSecGroupFormEditObj" );

	CFGenKbSecGroupFormEditObj::CFGenKbSecGroupFormEditObj( cfcore::ICFGenKbSecGroupFormObj* argOrig )
	: ICFGenKbSecGroupFormEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecGroupFormEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecGroupFormBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecGroupFormBuff*>( origBuff->clone() );
	}

	CFGenKbSecGroupFormEditObj::~CFGenKbSecGroupFormEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecGroupFormEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGroupFormEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupFormBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupFormEditObj::getCreatedAt() {
		return( getSecGroupFormBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGroupFormEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupFormBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupFormEditObj::getUpdatedAt() {
		return( getSecGroupFormBuff()->getUpdatedAt() );
	}

	void CFGenKbSecGroupFormEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecGroupFormBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGroupFormEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGroupFormBuff()->setCreatedAt( value );
	}

	void CFGenKbSecGroupFormEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecGroupFormBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGroupFormEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGroupFormBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecGroupFormEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE );
	}

	bool CFGenKbSecGroupFormEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecGroupFormBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecGroupFormEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupFormEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupFormId( "SecGroupFormId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_SecFormId( "SecFormId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecGroupFormEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecGroupFormEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecGroupFormEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecGroupFormEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecGroupFormEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecGroupFormEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGroupFormId, CFGenKbSecGroupFormEditObj::getRequiredSecGroupFormId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFGenKbSecGroupFormEditObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, CFGenKbSecGroupFormEditObj::getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecFormId, CFGenKbSecGroupFormEditObj::getRequiredSecFormId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecGroupFormEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecGroupFormEditObj::setRequiredRevision( int32_t value ) {
		getSecGroupFormBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecGroupFormEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredSecGroupFormId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbSecGroupFormEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecGroupFormBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupFormEditObj::getScope() {
		cfcore::ICFGenKbSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupFormEditObj::getObjScope() {
		cfcore::ICFGenKbSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupFormEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecGroupFormEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupFormEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecGroupFormEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecGroupFormEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecGroupFormObj* retobj = getSchema()->getSecGroupFormTableObj()->realizeSecGroupForm( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecGroupFormObj* retval = getOrigAsSecGroupForm()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormEditObj::create() {
		cfcore::ICFGenKbSecGroupFormObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecGroupFormTableObj()->createSecGroupForm( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecGroupFormEditObj* CFGenKbSecGroupFormEditObj::update() {
		getSchema()->getSecGroupFormTableObj()->updateSecGroupForm( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGroupFormEditObj* CFGenKbSecGroupFormEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecGroupFormTableObj()->deleteSecGroupForm( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGroupFormTableObj* CFGenKbSecGroupFormEditObj::getSecGroupFormTable() {
		return( orig->getSchema()->getSecGroupFormTableObj() );
	}

	cfcore::ICFGenKbSecGroupFormEditObj* CFGenKbSecGroupFormEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecGroupFormEditObj* CFGenKbSecGroupFormEditObj::getSecGroupFormEdit() {
		return( (cfcore::ICFGenKbSecGroupFormEditObj*)this );
	}

	cfcore::ICFGenKbSecGroupFormEditObj* CFGenKbSecGroupFormEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecGroupFormEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecGroupFormObj* CFGenKbSecGroupFormEditObj::getOrigAsSecGroupForm() {
		return( dynamic_cast<cfcore::ICFGenKbSecGroupFormObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGroupFormEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecGroupFormBuff* CFGenKbSecGroupFormEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecGroupFormEditObj::setBuff( cfcore::CFGenKbSecGroupFormBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecGroupFormPKey* CFGenKbSecGroupFormEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecGroupFormEditObj::setPKey( cfcore::CFGenKbSecGroupFormPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecGroupFormEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecGroupFormEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbSecGroupFormEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecGroupFormEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbSecGroupFormEditObj::getRequiredSecGroupFormId() {
		return( getPKey()->getRequiredSecGroupFormId() );
	}

	const int64_t* CFGenKbSecGroupFormEditObj::getRequiredSecGroupFormIdReference() {
		return( getPKey()->getRequiredSecGroupFormIdReference() );
	}

	const int32_t CFGenKbSecGroupFormEditObj::getRequiredSecGroupId() {
		return( getSecGroupFormBuff()->getRequiredSecGroupId() );
	}

	const int32_t* CFGenKbSecGroupFormEditObj::getRequiredSecGroupIdReference() {
		return( getSecGroupFormBuff()->getRequiredSecGroupIdReference() );
	}

	const int32_t CFGenKbSecGroupFormEditObj::getRequiredSecAppId() {
		return( getSecGroupFormBuff()->getRequiredSecAppId() );
	}

	const int32_t* CFGenKbSecGroupFormEditObj::getRequiredSecAppIdReference() {
		return( getSecGroupFormBuff()->getRequiredSecAppIdReference() );
	}

	const int32_t CFGenKbSecGroupFormEditObj::getRequiredSecFormId() {
		return( getSecGroupFormBuff()->getRequiredSecFormId() );
	}

	const int32_t* CFGenKbSecGroupFormEditObj::getRequiredSecFormIdReference() {
		return( getSecGroupFormBuff()->getRequiredSecFormIdReference() );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSecGroupFormEditObj::getRequiredOwnerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbSecGroupFormEditObj::setRequiredOwnerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecGroupFormBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupFormEditObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGroupFormBuff()->getRequiredSecGroupId() );
		}
		return( retobj );
	}

	void CFGenKbSecGroupFormEditObj::setRequiredContainerGroup( cfcore::ICFGenKbSecGroupObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGroupFormBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGroupFormBuff()->setRequiredSecGroupId( value->getRequiredSecGroupId() );
			}
		}

	cfcore::ICFGenKbSecAppObj* CFGenKbSecGroupFormEditObj::getRequiredParentApp( bool forceRead ) {
		cfcore::ICFGenKbSecAppObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecAppTableObj()->readSecAppByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGroupFormBuff()->getRequiredSecAppId() );
		}
		return( retobj );
	}

	void CFGenKbSecGroupFormEditObj::setRequiredParentApp( cfcore::ICFGenKbSecAppObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGroupFormBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGroupFormBuff()->setRequiredSecAppId( value->getRequiredSecAppId() );
			}
			else {
			}
		}

	cfcore::ICFGenKbSecFormObj* CFGenKbSecGroupFormEditObj::getRequiredParentForm( bool forceRead ) {
		cfcore::ICFGenKbSecFormObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroupForm()->getSchema() )->getSecFormTableObj()->readSecFormByIdIdx( getPKey()->getRequiredClusterId(),
					getSecGroupFormBuff()->getRequiredSecFormId() );
		}
		return( retobj );
	}

	void CFGenKbSecGroupFormEditObj::setRequiredParentForm( cfcore::ICFGenKbSecFormObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredClusterId() );
				getSecGroupFormBuff()->setRequiredClusterId( value->getRequiredClusterId() );
				getSecGroupFormBuff()->setRequiredSecFormId( value->getRequiredSecFormId() );
			}
			else {
			}
		}

	void CFGenKbSecGroupFormEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecGroupFormPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGroupFormBuff* tableBuff = getSecGroupFormBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecGroupFormId( tablePKey->getRequiredSecGroupFormId() );
	}

	void CFGenKbSecGroupFormEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecGroupFormPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGroupFormBuff* tableBuff = getSecGroupFormBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGroupFormId( tableBuff->getRequiredSecGroupFormId() );
	}

	void CFGenKbSecGroupFormEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecGroupFormBuff* origBuff = getOrigAsSecGroupForm()->getSecGroupFormBuff();
		cfcore::CFGenKbSecGroupFormBuff* myBuff = getSecGroupFormBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecGroupFormEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecGroupFormBuff* origBuff = getOrigAsSecGroupForm()->getSecGroupFormBuff();
		cfcore::CFGenKbSecGroupFormBuff* myBuff = getSecGroupFormBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
