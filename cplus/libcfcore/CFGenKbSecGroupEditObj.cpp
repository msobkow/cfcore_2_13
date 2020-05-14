// Description: C++18 edit object instance implementation for CFGenKb SecGroup.

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
#include <cfgenkbobj/CFGenKbSecGroupObj.hpp>
#include <cfgenkbobj/CFGenKbSecGroupEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSecGroupEditObj::CLASS_NAME( "CFGenKbSecGroupEditObj" );

	CFGenKbSecGroupEditObj::CFGenKbSecGroupEditObj( cfcore::ICFGenKbSecGroupObj* argOrig )
	: ICFGenKbSecGroupEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSecGroupEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSecGroupBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSecGroupBuff*>( origBuff->clone() );
	}

	CFGenKbSecGroupEditObj::~CFGenKbSecGroupEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSecGroupEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGroupEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupEditObj::getCreatedAt() {
		return( getSecGroupBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGroupEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupEditObj::getUpdatedAt() {
		return( getSecGroupBuff()->getUpdatedAt() );
	}

	void CFGenKbSecGroupEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getSecGroupBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGroupEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGroupBuff()->setCreatedAt( value );
	}

	void CFGenKbSecGroupEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getSecGroupBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbSecGroupEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getSecGroupBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbSecGroupEditObj::getClassCode() const {
		return( cfcore::CFGenKbSecGroupBuff::CLASS_CODE );
	}

	bool CFGenKbSecGroupEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecGroupEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_Name( "Name" );
		static const std::string S_IsVisible( "IsVisible" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecGroupEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecGroupEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecGroupEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecGroupEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecGroupEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecGroupEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFGenKbSecGroupEditObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbSecGroupEditObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsVisible, CFGenKbSecGroupEditObj::getRequiredIsVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSecGroupEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSecGroupEditObj::setRequiredRevision( int32_t value ) {
		getSecGroupBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSecGroupEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbSecGroupEditObj::getGenDefName() {
		return( cfcore::CFGenKbSecGroupBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupEditObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupEditObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecGroupEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecGroupEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSecGroupEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSecGroupObj* retobj = getSchema()->getSecGroupTableObj()->realizeSecGroup( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecGroupObj* retval = getOrigAsSecGroup()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupEditObj::create() {
		cfcore::ICFGenKbSecGroupObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroup()->getSchema() )->getSecGroupTableObj()->createSecGroup( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupEditObj::update() {
		getSchema()->getSecGroupTableObj()->updateSecGroup( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSecGroupTableObj()->deleteSecGroup( this );
		return( NULL );
	}

	cfcore::ICFGenKbSecGroupTableObj* CFGenKbSecGroupEditObj::getSecGroupTable() {
		return( orig->getSchema()->getSecGroupTableObj() );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupEditObj::getSecGroupEdit() {
		return( (cfcore::ICFGenKbSecGroupEditObj*)this );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSecGroupEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupEditObj::getOrigAsSecGroup() {
		return( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGroupEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSecGroupBuff* CFGenKbSecGroupEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSecGroupEditObj::setBuff( cfcore::CFGenKbSecGroupBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSecGroupPKey* CFGenKbSecGroupEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSecGroupEditObj::setPKey( cfcore::CFGenKbSecGroupPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSecGroupEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSecGroupEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbSecGroupEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecGroupEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int32_t CFGenKbSecGroupEditObj::getRequiredSecGroupId() {
		return( getPKey()->getRequiredSecGroupId() );
	}

	const int32_t* CFGenKbSecGroupEditObj::getRequiredSecGroupIdReference() {
		return( getPKey()->getRequiredSecGroupIdReference() );
	}

	const std::string& CFGenKbSecGroupEditObj::getRequiredName() {
		return( getSecGroupBuff()->getRequiredName() );
	}

	const std::string* CFGenKbSecGroupEditObj::getRequiredNameReference() {
		return( getSecGroupBuff()->getRequiredNameReference() );
	}

	void CFGenKbSecGroupEditObj::setRequiredName( const std::string& value ) {
		if( getSecGroupBuff()->getRequiredName() != value ) {
			getSecGroupBuff()->setRequiredName( value );
		}
	}

	const bool CFGenKbSecGroupEditObj::getRequiredIsVisible() {
		return( getSecGroupBuff()->getRequiredIsVisible() );
	}

	const bool* CFGenKbSecGroupEditObj::getRequiredIsVisibleReference() {
		return( getSecGroupBuff()->getRequiredIsVisibleReference() );
	}

	void CFGenKbSecGroupEditObj::setRequiredIsVisible( const bool value ) {
		if( getSecGroupBuff()->getRequiredIsVisible() != value ) {
			getSecGroupBuff()->setRequiredIsVisible( value );
		}
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSecGroupEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroup()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbSecGroupEditObj::setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getSecGroupBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGroupEditObj::getOptionalComponentsInclude( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroup()->getSchema() )->getSecGrpIncTableObj()->readSecGrpIncByGroupIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGroupEditObj::getOptionalComponentsMember( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroup()->getSchema() )->getSecGrpMembTableObj()->readSecGrpMembByGroupIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGroupEditObj::getRequiredChildrenIncByGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroup()->getSchema() )->getSecGrpIncTableObj()->readSecGrpIncByIncludeIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupEditObj::getOptionalComponentsForm( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSecGroup()->getSchema() )->getSecGroupFormTableObj()->readSecGroupFormByGroupIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	void CFGenKbSecGroupEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGroupBuff* tableBuff = getSecGroupBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredSecGroupId( tablePKey->getRequiredSecGroupId() );
	}

	void CFGenKbSecGroupEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGroupBuff* tableBuff = getSecGroupBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGroupId( tableBuff->getRequiredSecGroupId() );
	}

	void CFGenKbSecGroupEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSecGroupBuff* origBuff = getOrigAsSecGroup()->getSecGroupBuff();
		cfcore::CFGenKbSecGroupBuff* myBuff = getSecGroupBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSecGroupEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSecGroupBuff* origBuff = getOrigAsSecGroup()->getSecGroupBuff();
		cfcore::CFGenKbSecGroupBuff* myBuff = getSecGroupBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
