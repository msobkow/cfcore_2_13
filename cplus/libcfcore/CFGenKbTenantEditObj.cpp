// Description: C++18 edit object instance implementation for CFGenKb Tenant.

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
#include <cfgenkbobj/CFGenKbTenantObj.hpp>
#include <cfgenkbobj/CFGenKbTenantEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbTenantEditObj::CLASS_NAME( "CFGenKbTenantEditObj" );

	CFGenKbTenantEditObj::CFGenKbTenantEditObj( cfcore::ICFGenKbTenantObj* argOrig )
	: ICFGenKbTenantEditObj()
	{
		static const std::string S_ProcName( "CFGenKbTenantEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbTenantBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbTenantBuff*>( origBuff->clone() );
	}

	CFGenKbTenantEditObj::~CFGenKbTenantEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbTenantEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTenantEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTenantBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTenantEditObj::getCreatedAt() {
		return( getTenantBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTenantEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTenantBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTenantEditObj::getUpdatedAt() {
		return( getTenantBuff()->getUpdatedAt() );
	}

	void CFGenKbTenantEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getTenantBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTenantEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getTenantBuff()->setCreatedAt( value );
	}

	void CFGenKbTenantEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getTenantBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbTenantEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getTenantBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbTenantEditObj::getClassCode() const {
		return( cfcore::CFGenKbTenantBuff::CLASS_CODE );
	}

	bool CFGenKbTenantEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTenantEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTenantEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_Id( "Id" );
		static const std::string S_TenantName( "TenantName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTenantEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTenantEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTenantEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTenantEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTenantEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbTenantEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFGenKbTenantEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TenantName, CFGenKbTenantEditObj::getRequiredTenantName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbTenantEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbTenantEditObj::setRequiredRevision( int32_t value ) {
		getTenantBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbTenantEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredTenantName() );
		return( objName );
	}

	const std::string CFGenKbTenantEditObj::getGenDefName() {
		return( cfcore::CFGenKbTenantBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantEditObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantEditObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTenantEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTenantEditObj::getObjQualifiedName() {
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

	std::string CFGenKbTenantEditObj::getObjFullName() {
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbTenantObj* retobj = getSchema()->getTenantTableObj()->realizeTenant( dynamic_cast<cfcore::ICFGenKbTenantObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retval = getOrigAsTenant()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantEditObj::create() {
		cfcore::ICFGenKbTenantObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTenant()->getSchema() )->getTenantTableObj()->createTenant( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantEditObj::update() {
		getSchema()->getTenantTableObj()->updateTenant( this );
		return( NULL );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getTenantTableObj()->deleteTenant( this );
		return( NULL );
	}

	cfcore::ICFGenKbTenantTableObj* CFGenKbTenantEditObj::getTenantTable() {
		return( orig->getSchema()->getTenantTableObj() );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantEditObj::getTenantEdit() {
		return( (cfcore::ICFGenKbTenantEditObj*)this );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbTenantEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantEditObj::getOrigAsTenant() {
		return( dynamic_cast<cfcore::ICFGenKbTenantObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTenantEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbTenantBuff* CFGenKbTenantEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbTenantEditObj::setBuff( cfcore::CFGenKbTenantBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbTenantPKey* CFGenKbTenantEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbTenantEditObj::setPKey( cfcore::CFGenKbTenantPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbTenantEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbTenantEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbTenantEditObj::getRequiredClusterId() {
		return( getTenantBuff()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbTenantEditObj::getRequiredClusterIdReference() {
		return( getTenantBuff()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbTenantEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFGenKbTenantEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbTenantEditObj::getRequiredTenantName() {
		return( getTenantBuff()->getRequiredTenantName() );
	}

	const std::string* CFGenKbTenantEditObj::getRequiredTenantNameReference() {
		return( getTenantBuff()->getRequiredTenantNameReference() );
	}

	void CFGenKbTenantEditObj::setRequiredTenantName( const std::string& value ) {
		if( getTenantBuff()->getRequiredTenantName() != value ) {
			getTenantBuff()->setRequiredTenantName( value );
		}
	}

	cfcore::ICFGenKbClusterObj* CFGenKbTenantEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTenant()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getTenantBuff()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbTenantEditObj::setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getTenantBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTenantEditObj::getOptionalComponentsTSecGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGroupObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTenant()->getSchema() )->getTSecGroupTableObj()->readTSecGroupByTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbRuleCartObj*> CFGenKbTenantEditObj::getOptionalComponentsRuleCart( bool forceRead ) {
		std::vector<cfcore::ICFGenKbRuleCartObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTenant()->getSchema() )->getRuleCartTableObj()->readRuleCartByTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFGenKbTenantEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbTenantPKey* tablePKey = getPKey();
		cfcore::CFGenKbTenantBuff* tableBuff = getTenantBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbTenantEditObj::copyBuffToPKey() {
		cfcore::CFGenKbTenantPKey* tablePKey = getPKey();
		cfcore::CFGenKbTenantBuff* tableBuff = getTenantBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbTenantEditObj::copyBuffToOrig() {
		cfcore::CFGenKbTenantBuff* origBuff = getOrigAsTenant()->getTenantBuff();
		cfcore::CFGenKbTenantBuff* myBuff = getTenantBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbTenantEditObj::copyOrigToBuff() {
		cfcore::CFGenKbTenantBuff* origBuff = getOrigAsTenant()->getTenantBuff();
		cfcore::CFGenKbTenantBuff* myBuff = getTenantBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
