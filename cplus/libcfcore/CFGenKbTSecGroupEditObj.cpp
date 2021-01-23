// Description: C++18 edit object instance implementation for CFGenKb TSecGroup.

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
#include <cfgenkbobj/CFGenKbTSecGroupObj.hpp>
#include <cfgenkbobj/CFGenKbTSecGroupEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbTSecGroupEditObj::CLASS_NAME( "CFGenKbTSecGroupEditObj" );

	CFGenKbTSecGroupEditObj::CFGenKbTSecGroupEditObj( cfcore::ICFGenKbTSecGroupObj* argOrig )
	: ICFGenKbTSecGroupEditObj()
	{
		static const std::string S_ProcName( "CFGenKbTSecGroupEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbTSecGroupBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbTSecGroupBuff*>( origBuff->clone() );
	}

	CFGenKbTSecGroupEditObj::~CFGenKbTSecGroupEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbTSecGroupEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGroupEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGroupBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGroupEditObj::getCreatedAt() {
		return( getTSecGroupBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGroupEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGroupBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGroupEditObj::getUpdatedAt() {
		return( getTSecGroupBuff()->getUpdatedAt() );
	}

	void CFGenKbTSecGroupEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTSecGroupBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTSecGroupEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGroupBuff()->setCreatedAt( value );
	}

	void CFGenKbTSecGroupEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTSecGroupBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTSecGroupEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTSecGroupBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbTSecGroupEditObj::getClassCode() const {
		return( cfcore::CFGenKbTSecGroupBuff::CLASS_CODE );
	}

	bool CFGenKbTSecGroupEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTSecGroupEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGroupEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_Name( "Name" );
		static const std::string S_IsVisible( "IsVisible" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTSecGroupEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTSecGroupEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTSecGroupEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTSecGroupEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTSecGroupEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbTSecGroupEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFGenKbTSecGroupEditObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbTSecGroupEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsVisible, CFGenKbTSecGroupEditObj::getRequiredIsVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbTSecGroupEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbTSecGroupEditObj::setRequiredRevision( int32_t value ) {
		getTSecGroupBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbTSecGroupEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbTSecGroupEditObj::getGenDefName() {
		return( cfcore::CFGenKbTSecGroupBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupEditObj::getScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupEditObj::getObjScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTSecGroupEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTSecGroupEditObj::getObjQualifiedName() {
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

	std::string CFGenKbTSecGroupEditObj::getObjFullName() {
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

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbTSecGroupObj* retobj = getSchema()->getTSecGroupTableObj()->realizeTSecGroup( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retval = getOrigAsTSecGroup()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupEditObj::create() {
		cfcore::ICFGenKbTSecGroupObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGroupTableObj()->createTSecGroup( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupEditObj::update() {
		getSchema()->getTSecGroupTableObj()->updateTSecGroup( this );
		return( NULL );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTSecGroupTableObj()->deleteTSecGroup( this );
		return( NULL );
	}

	cfcore::ICFGenKbTSecGroupTableObj* CFGenKbTSecGroupEditObj::getTSecGroupTable() {
		return( orig->getSchema()->getTSecGroupTableObj() );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupEditObj::getTSecGroupEdit() {
		return( (cfcore::ICFGenKbTSecGroupEditObj*)this );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbTSecGroupEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupEditObj::getOrigAsTSecGroup() {
		return( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGroupEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbTSecGroupBuff* CFGenKbTSecGroupEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbTSecGroupEditObj::setBuff( cfcore::CFGenKbTSecGroupBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbTSecGroupPKey* CFGenKbTSecGroupEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbTSecGroupEditObj::setPKey( cfcore::CFGenKbTSecGroupPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbTSecGroupEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbTSecGroupEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbTSecGroupEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbTSecGroupEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int32_t CFGenKbTSecGroupEditObj::getRequiredTSecGroupId() {
		return( getPKey()->getRequiredTSecGroupId() );
	}

	const int32_t* CFGenKbTSecGroupEditObj::getRequiredTSecGroupIdReference() {
		return( getPKey()->getRequiredTSecGroupIdReference() );
	}

	const std::string& CFGenKbTSecGroupEditObj::getRequiredName() {
		return( getTSecGroupBuff()->getRequiredName() );
	}

	const std::string* CFGenKbTSecGroupEditObj::getRequiredNameReference() {
		return( getTSecGroupBuff()->getRequiredNameReference() );
	}

	void CFGenKbTSecGroupEditObj::setRequiredName( const std::string& value ) {
		if( getTSecGroupBuff()->getRequiredName() != value ) {
			getTSecGroupBuff()->setRequiredName( value );
		}
	}

	const bool CFGenKbTSecGroupEditObj::getRequiredIsVisible() {
		return( getTSecGroupBuff()->getRequiredIsVisible() );
	}

	const bool* CFGenKbTSecGroupEditObj::getRequiredIsVisibleReference() {
		return( getTSecGroupBuff()->getRequiredIsVisibleReference() );
	}

	void CFGenKbTSecGroupEditObj::setRequiredIsVisible( const bool value ) {
		if( getTSecGroupBuff()->getRequiredIsVisible() != value ) {
			getTSecGroupBuff()->setRequiredIsVisible( value );
		}
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTSecGroupEditObj::getRequiredContainerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbTSecGroupEditObj::setRequiredContainerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getTSecGroupBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGroupEditObj::getOptionalComponentsInclude( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByGroupIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTSecGrpMembObj*> CFGenKbTSecGroupEditObj::getOptionalComponentsMember( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpMembObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByGroupIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGroupEditObj::getRequiredChildrenIncByGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTSecGroup()->getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByIncludeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	void CFGenKbTSecGroupEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbTSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGroupBuff* tableBuff = getTSecGroupBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredTSecGroupId( tablePKey->getRequiredTSecGroupId() );
	}

	void CFGenKbTSecGroupEditObj::copyBuffToPKey() {
		cfcore::CFGenKbTSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGroupBuff* tableBuff = getTSecGroupBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGroupId( tableBuff->getRequiredTSecGroupId() );
	}

	void CFGenKbTSecGroupEditObj::copyBuffToOrig() {
		cfcore::CFGenKbTSecGroupBuff* origBuff = getOrigAsTSecGroup()->getTSecGroupBuff();
		cfcore::CFGenKbTSecGroupBuff* myBuff = getTSecGroupBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbTSecGroupEditObj::copyOrigToBuff() {
		cfcore::CFGenKbTSecGroupBuff* origBuff = getOrigAsTSecGroup()->getTSecGroupBuff();
		cfcore::CFGenKbTSecGroupBuff* myBuff = getTSecGroupBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
