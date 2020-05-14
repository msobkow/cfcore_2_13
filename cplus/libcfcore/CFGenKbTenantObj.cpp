// Description: C++18 base object instance implementation for CFGenKb Tenant.

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
#include <cfgenkbobj/CFGenKbTenantObj.hpp>

namespace cfcore {

	const std::string CFGenKbTenantObj::CLASS_NAME( "CFGenKbTenantObj" );
	const classcode_t CFGenKbTenantObj::CLASS_CODE = 0xa910L;

	int32_t CFGenKbTenantObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbTenantObj::getRequiredClusterId() {
		return( getTenantBuff()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbTenantObj::getRequiredClusterIdReference() {
		return( getTenantBuff()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbTenantObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFGenKbTenantObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbTenantObj::getRequiredTenantName() {
		return( getTenantBuff()->getRequiredTenantName() );
	}

	const std::string* CFGenKbTenantObj::getRequiredTenantNameReference() {
		return( getTenantBuff()->getRequiredTenantNameReference() );
	}


	cfcore::ICFGenKbClusterObj* CFGenKbTenantObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getTenantBuff()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfcore::ICFGenKbTSecGroupObj*> CFGenKbTenantObj::getOptionalComponentsTSecGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGroupObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbRuleCartObj*> CFGenKbTenantObj::getOptionalComponentsRuleCart( bool forceRead ) {
		std::vector<cfcore::ICFGenKbRuleCartObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj()->readRuleCartByTenantIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFGenKbTenantObj::CFGenKbTenantObj()
	: ICFGenKbTenantObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTenantObj::CFGenKbTenantObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbTenantObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTenantObj::~CFGenKbTenantObj() {
		schema = NULL;
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}
		if( pKey != NULL ) {
			delete pKey;
			pKey = NULL;
		}

	}

	cfcore::CFGenKbTenantBuff* CFGenKbTenantObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbTenantBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTenant()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbTenantObj::setBuff( cfcore::CFGenKbTenantBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbTenantObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbTenantObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbTenantObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTenantBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTenantObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTenantObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTenantObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTenantObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTenantObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTenantObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTenantObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbTenantObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFGenKbTenantObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TenantName, CFGenKbTenantObj::getRequiredTenantName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbTenantObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredTenantName() );
		return( objName );
	}

	const std::string CFGenKbTenantObj::getGenDefName() {
		return( cfcore::CFGenKbTenantBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTenantObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTenantObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTenantObj::getObjQualifiedName() {
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

	std::string CFGenKbTenantObj::getObjFullName() {
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

	cfcore::ICFGenKbTenantObj* CFGenKbTenantObj::realize() {
		cfcore::ICFGenKbTenantObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->realizeTenant(
			(cfcore::ICFGenKbTenantObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbTenantObj*>( retobj ) );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbTenantObj::read( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getTenantBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbTenantObj*>( retobj ) );
	}

	cfcore::ICFGenKbTenantTableObj* CFGenKbTenantObj::getTenantTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTenantObj::getSchema() {
		return( schema );
	}

	void CFGenKbTenantObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbTenantPKey* CFGenKbTenantObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbTenantPKey();
		}
		return( pKey );
	}

	void CFGenKbTenantObj::setPKey( cfcore::CFGenKbTenantPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbTenantPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbTenantObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbTenantObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbTenantObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->lockTenant( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbTenantEditObj*>( edit ) );
	}

	void CFGenKbTenantObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbTenantEditObj* CFGenKbTenantObj::getTenantEdit() {
		return( dynamic_cast<cfcore::ICFGenKbTenantEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTenantObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTenantBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTenantObj::getCreatedAt() {
		return( getTenantBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTenantObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTenantBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTenantObj::getUpdatedAt() {
		return( getTenantBuff()->getUpdatedAt() );
	}

	void CFGenKbTenantObj::copyPKeyToBuff() {
		cfcore::CFGenKbTenantPKey* tablePKey = getPKey();
		cfcore::CFGenKbTenantBuff* tableBuff = getTenantBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbTenantObj::copyBuffToPKey() {
		cfcore::CFGenKbTenantPKey* tablePKey = getPKey();
		cfcore::CFGenKbTenantBuff* tableBuff = getTenantBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
