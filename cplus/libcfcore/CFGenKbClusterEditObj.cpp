// Description: C++18 edit object instance implementation for CFGenKb Cluster.

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
#include <cfgenkbobj/CFGenKbClusterObj.hpp>
#include <cfgenkbobj/CFGenKbClusterEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbClusterEditObj::CLASS_NAME( "CFGenKbClusterEditObj" );

	CFGenKbClusterEditObj::CFGenKbClusterEditObj( cfcore::ICFGenKbClusterObj* argOrig )
	: ICFGenKbClusterEditObj()
	{
		static const std::string S_ProcName( "CFGenKbClusterEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbClusterBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbClusterBuff*>( origBuff->clone() );
	}

	CFGenKbClusterEditObj::~CFGenKbClusterEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbClusterEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbClusterEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbClusterEditObj::getCreatedAt() {
		return( getClusterBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbClusterEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbClusterEditObj::getUpdatedAt() {
		return( getClusterBuff()->getUpdatedAt() );
	}

	void CFGenKbClusterEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getClusterBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbClusterEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getClusterBuff()->setCreatedAt( value );
	}

	void CFGenKbClusterEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getClusterBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbClusterEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getClusterBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbClusterEditObj::getClassCode() const {
		return( cfcore::CFGenKbClusterBuff::CLASS_CODE );
	}

	bool CFGenKbClusterEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbClusterEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbClusterEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_Id( "Id" );
		static const std::string S_FullDomName( "FullDomName" );
		static const std::string S_Description( "Description" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbClusterEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbClusterEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbClusterEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbClusterEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbClusterEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFGenKbClusterEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullDomName, CFGenKbClusterEditObj::getRequiredFullDomName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFGenKbClusterEditObj::getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbClusterEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbClusterEditObj::setRequiredRevision( int32_t value ) {
		getClusterBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbClusterEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredFullDomName() );
		return( objName );
	}

	const std::string CFGenKbClusterEditObj::getGenDefName() {
		return( cfcore::CFGenKbClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbClusterEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterEditObj::getNamedObject( const std::string& objName ) {
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
			subObj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByLookupHostNameIdx( getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByLookupUNameIdx( getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecAppTableObj()->readSecAppByLookupUJEEMountIdx( getRequiredId(),
				nextName,
				false );
		}
		if( subObj == NULL ) {
			subObj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj()->readSecGroupByLookupUNameIdx( getRequiredId(),
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

	std::string CFGenKbClusterEditObj::getObjQualifiedName() {
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

	std::string CFGenKbClusterEditObj::getObjFullName() {
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

	cfcore::ICFGenKbClusterObj* CFGenKbClusterEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbClusterObj* retobj = getSchema()->getClusterTableObj()->realizeCluster( dynamic_cast<cfcore::ICFGenKbClusterObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retval = getOrigAsCluster()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterEditObj::create() {
		cfcore::ICFGenKbClusterObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsCluster()->getSchema() )->getClusterTableObj()->createCluster( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterEditObj::update() {
		getSchema()->getClusterTableObj()->updateCluster( this );
		return( NULL );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getClusterTableObj()->deleteCluster( this );
		return( NULL );
	}

	cfcore::ICFGenKbClusterTableObj* CFGenKbClusterEditObj::getClusterTable() {
		return( orig->getSchema()->getClusterTableObj() );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterEditObj::getClusterEdit() {
		return( (cfcore::ICFGenKbClusterEditObj*)this );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbClusterEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterEditObj::getOrigAsCluster() {
		return( dynamic_cast<cfcore::ICFGenKbClusterObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbClusterEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbClusterBuff* CFGenKbClusterEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbClusterEditObj::setBuff( cfcore::CFGenKbClusterBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbClusterPKey* CFGenKbClusterEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbClusterEditObj::setPKey( cfcore::CFGenKbClusterPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbClusterEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbClusterEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbClusterEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFGenKbClusterEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbClusterEditObj::getRequiredFullDomName() {
		return( getClusterBuff()->getRequiredFullDomName() );
	}

	const std::string* CFGenKbClusterEditObj::getRequiredFullDomNameReference() {
		return( getClusterBuff()->getRequiredFullDomNameReference() );
	}

	void CFGenKbClusterEditObj::setRequiredFullDomName( const std::string& value ) {
		if( getClusterBuff()->getRequiredFullDomName() != value ) {
			getClusterBuff()->setRequiredFullDomName( value );
		}
	}

	const std::string& CFGenKbClusterEditObj::getRequiredDescription() {
		return( getClusterBuff()->getRequiredDescription() );
	}

	const std::string* CFGenKbClusterEditObj::getRequiredDescriptionReference() {
		return( getClusterBuff()->getRequiredDescriptionReference() );
	}

	void CFGenKbClusterEditObj::setRequiredDescription( const std::string& value ) {
		if( getClusterBuff()->getRequiredDescription() != value ) {
			getClusterBuff()->setRequiredDescription( value );
		}
	}

	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbClusterEditObj::getOptionalComponentsHostNode( bool forceRead ) {
		std::vector<cfcore::ICFGenKbHostNodeObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsCluster()->getSchema() )->getHostNodeTableObj()->readHostNodeByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbClusterEditObj::getOptionalComponentsTenant( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTenantObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsCluster()->getSchema() )->getTenantTableObj()->readTenantByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbClusterEditObj::getOptionalComponentsSecApp( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecAppObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsCluster()->getSchema() )->getSecAppTableObj()->readSecAppByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbClusterEditObj::getOptionalComponentsSecGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGroupObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsCluster()->getSchema() )->getSecGroupTableObj()->readSecGroupByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSysClusterObj*> CFGenKbClusterEditObj::getOptionalComponentsSysCluster( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSysClusterObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsCluster()->getSchema() )->getSysClusterTableObj()->readSysClusterByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFGenKbClusterEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbClusterBuff* tableBuff = getClusterBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbClusterEditObj::copyBuffToPKey() {
		cfcore::CFGenKbClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbClusterBuff* tableBuff = getClusterBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbClusterEditObj::copyBuffToOrig() {
		cfcore::CFGenKbClusterBuff* origBuff = getOrigAsCluster()->getClusterBuff();
		cfcore::CFGenKbClusterBuff* myBuff = getClusterBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbClusterEditObj::copyOrigToBuff() {
		cfcore::CFGenKbClusterBuff* origBuff = getOrigAsCluster()->getClusterBuff();
		cfcore::CFGenKbClusterBuff* myBuff = getClusterBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
