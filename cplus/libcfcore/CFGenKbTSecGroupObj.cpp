// Description: C++18 base object instance implementation for CFGenKb TSecGroup.

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
#include <cfgenkbobj/CFGenKbTSecGroupObj.hpp>

namespace cfcore {

	const std::string CFGenKbTSecGroupObj::CLASS_NAME( "CFGenKbTSecGroupObj" );
	const classcode_t CFGenKbTSecGroupObj::CLASS_CODE = 0xa911L;

	int32_t CFGenKbTSecGroupObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbTSecGroupObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbTSecGroupObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int32_t CFGenKbTSecGroupObj::getRequiredTSecGroupId() {
		return( getPKey()->getRequiredTSecGroupId() );
	}

	const int32_t* CFGenKbTSecGroupObj::getRequiredTSecGroupIdReference() {
		return( getPKey()->getRequiredTSecGroupIdReference() );
	}

	const std::string& CFGenKbTSecGroupObj::getRequiredName() {
		return( getTSecGroupBuff()->getRequiredName() );
	}

	const std::string* CFGenKbTSecGroupObj::getRequiredNameReference() {
		return( getTSecGroupBuff()->getRequiredNameReference() );
	}

	const bool CFGenKbTSecGroupObj::getRequiredIsVisible() {
		return( getTSecGroupBuff()->getRequiredIsVisible() );
	}

	const bool* CFGenKbTSecGroupObj::getRequiredIsVisibleReference() {
		return( getTSecGroupBuff()->getRequiredIsVisibleReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbTSecGroupObj::getRequiredContainerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGroupObj::getOptionalComponentsInclude( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByGroupIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTSecGrpMembObj*> CFGenKbTSecGroupObj::getOptionalComponentsMember( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpMembObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByGroupIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTSecGrpIncObj*> CFGenKbTSecGroupObj::getRequiredChildrenIncByGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTSecGrpIncObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByIncludeIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredTSecGroupId(),
			forceRead );
		return( retval );
	}

	CFGenKbTSecGroupObj::CFGenKbTSecGroupObj()
	: ICFGenKbTSecGroupObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTSecGroupObj::CFGenKbTSecGroupObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbTSecGroupObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTSecGroupObj::~CFGenKbTSecGroupObj() {
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

	cfcore::CFGenKbTSecGroupBuff* CFGenKbTSecGroupObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbTSecGroupBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGroup()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredTSecGroupId() );
			}
		}
		return( buff );
	}

	void CFGenKbTSecGroupObj::setBuff( cfcore::CFGenKbTSecGroupBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbTSecGroupObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbTSecGroupObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbTSecGroupObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTSecGroupBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTSecGroupObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGroupObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTSecGroupObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTSecGroupObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTSecGroupObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTSecGroupObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTSecGroupObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbTSecGroupObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFGenKbTSecGroupObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbTSecGroupObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsVisible, CFGenKbTSecGroupObj::getRequiredIsVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbTSecGroupObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbTSecGroupObj::getGenDefName() {
		return( cfcore::CFGenKbTSecGroupBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupObj::getScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupObj::getObjScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTSecGroupObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGroupObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTSecGroupObj::getObjQualifiedName() {
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

	std::string CFGenKbTSecGroupObj::getObjFullName() {
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

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupObj::realize() {
		cfcore::ICFGenKbTSecGroupObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->realizeTSecGroup(
			(cfcore::ICFGenKbTSecGroupObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( retobj ) );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGroupObj::read( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getTSecGroupBuff()->getRequiredTenantId(),
		getTSecGroupBuff()->getRequiredTSecGroupId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbTSecGroupObj*>( retobj ) );
	}

	cfcore::ICFGenKbTSecGroupTableObj* CFGenKbTSecGroupObj::getTSecGroupTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGroupObj::getSchema() {
		return( schema );
	}

	void CFGenKbTSecGroupObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbTSecGroupPKey* CFGenKbTSecGroupObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbTSecGroupPKey();
		}
		return( pKey );
	}

	void CFGenKbTSecGroupObj::setPKey( cfcore::CFGenKbTSecGroupPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbTSecGroupPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbTSecGroupObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbTSecGroupObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbTSecGroupObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->lockTSecGroup( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbTSecGroupEditObj*>( edit ) );
	}

	void CFGenKbTSecGroupObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbTSecGroupEditObj* CFGenKbTSecGroupObj::getTSecGroupEdit() {
		return( dynamic_cast<cfcore::ICFGenKbTSecGroupEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGroupObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGroupBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGroupObj::getCreatedAt() {
		return( getTSecGroupBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGroupObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGroupBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGroupObj::getUpdatedAt() {
		return( getTSecGroupBuff()->getUpdatedAt() );
	}

	void CFGenKbTSecGroupObj::copyPKeyToBuff() {
		cfcore::CFGenKbTSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGroupBuff* tableBuff = getTSecGroupBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredTSecGroupId( tablePKey->getRequiredTSecGroupId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbTSecGroupObj::copyBuffToPKey() {
		cfcore::CFGenKbTSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGroupBuff* tableBuff = getTSecGroupBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGroupId( tableBuff->getRequiredTSecGroupId() );
	}

}
