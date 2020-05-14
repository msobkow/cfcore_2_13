// Description: C++18 base object instance implementation for CFGenKb SecGroup.

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

namespace cfcore {

	const std::string CFGenKbSecGroupObj::CLASS_NAME( "CFGenKbSecGroupObj" );
	const classcode_t CFGenKbSecGroupObj::CLASS_CODE = 0xa909L;

	int32_t CFGenKbSecGroupObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbSecGroupObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSecGroupObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int32_t CFGenKbSecGroupObj::getRequiredSecGroupId() {
		return( getPKey()->getRequiredSecGroupId() );
	}

	const int32_t* CFGenKbSecGroupObj::getRequiredSecGroupIdReference() {
		return( getPKey()->getRequiredSecGroupIdReference() );
	}

	const std::string& CFGenKbSecGroupObj::getRequiredName() {
		return( getSecGroupBuff()->getRequiredName() );
	}

	const std::string* CFGenKbSecGroupObj::getRequiredNameReference() {
		return( getSecGroupBuff()->getRequiredNameReference() );
	}

	const bool CFGenKbSecGroupObj::getRequiredIsVisible() {
		return( getSecGroupBuff()->getRequiredIsVisible() );
	}

	const bool* CFGenKbSecGroupObj::getRequiredIsVisibleReference() {
		return( getSecGroupBuff()->getRequiredIsVisibleReference() );
	}


	cfcore::ICFGenKbClusterObj* CFGenKbSecGroupObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGroupObj::getOptionalComponentsInclude( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGrpIncTableObj()->readSecGrpIncByGroupIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGrpMembObj*> CFGenKbSecGroupObj::getOptionalComponentsMember( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpMembObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGrpMembTableObj()->readSecGrpMembByGroupIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGrpIncObj*> CFGenKbSecGroupObj::getRequiredChildrenIncByGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGrpIncObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGrpIncTableObj()->readSecGrpIncByIncludeIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGroupFormObj*> CFGenKbSecGroupObj::getOptionalComponentsForm( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGroupFormObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupFormTableObj()->readSecGroupFormByGroupIdx( getPKey()->getRequiredClusterId(),
					getPKey()->getRequiredSecGroupId(),
			forceRead );
		return( retval );
	}

	CFGenKbSecGroupObj::CFGenKbSecGroupObj()
	: ICFGenKbSecGroupObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecGroupObj::CFGenKbSecGroupObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbSecGroupObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSecGroupObj::~CFGenKbSecGroupObj() {
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

	cfcore::CFGenKbSecGroupBuff* CFGenKbSecGroupObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbSecGroupBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSecGroup()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredClusterId(),
						getPKey()->getRequiredSecGroupId() );
			}
		}
		return( buff );
	}

	void CFGenKbSecGroupObj::setBuff( cfcore::CFGenKbSecGroupBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbSecGroupObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecGroupObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecGroupObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSecGroupBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSecGroupObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSecGroupObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbSecGroupObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbSecGroupObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbSecGroupObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbSecGroupObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSecGroupObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, CFGenKbSecGroupObj::getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbSecGroupObj::getRequiredName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsVisible, CFGenKbSecGroupObj::getRequiredIsVisible() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbSecGroupObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbSecGroupObj::getGenDefName() {
		return( cfcore::CFGenKbSecGroupBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSecGroupObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSecGroupObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSecGroupObj::getObjQualifiedName() {
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

	std::string CFGenKbSecGroupObj::getObjFullName() {
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

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupObj::realize() {
		cfcore::ICFGenKbSecGroupObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj()->realizeSecGroup(
			(cfcore::ICFGenKbSecGroupObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecGroupObj* CFGenKbSecGroupObj::read( bool forceRead ) {
		cfcore::ICFGenKbSecGroupObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj()->readSecGroupByIdIdx( getSecGroupBuff()->getRequiredClusterId(),
		getSecGroupBuff()->getRequiredSecGroupId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbSecGroupObj*>( retobj ) );
	}

	cfcore::ICFGenKbSecGroupTableObj* CFGenKbSecGroupObj::getSecGroupTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSecGroupObj::getSchema() {
		return( schema );
	}

	void CFGenKbSecGroupObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbSecGroupPKey* CFGenKbSecGroupObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbSecGroupPKey();
		}
		return( pKey );
	}

	void CFGenKbSecGroupObj::setPKey( cfcore::CFGenKbSecGroupPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbSecGroupPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbSecGroupObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbSecGroupObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbSecGroupObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj()->lockSecGroup( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbSecGroupEditObj*>( edit ) );
	}

	void CFGenKbSecGroupObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbSecGroupEditObj* CFGenKbSecGroupObj::getSecGroupEdit() {
		return( dynamic_cast<cfcore::ICFGenKbSecGroupEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGroupObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupObj::getCreatedAt() {
		return( getSecGroupBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbSecGroupObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getSecGroupBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupObj::getUpdatedAt() {
		return( getSecGroupBuff()->getUpdatedAt() );
	}

	void CFGenKbSecGroupObj::copyPKeyToBuff() {
		cfcore::CFGenKbSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGroupBuff* tableBuff = getSecGroupBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
			tableBuff->setRequiredSecGroupId( tablePKey->getRequiredSecGroupId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbSecGroupObj::copyBuffToPKey() {
		cfcore::CFGenKbSecGroupPKey* tablePKey = getPKey();
		cfcore::CFGenKbSecGroupBuff* tableBuff = getSecGroupBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredSecGroupId( tableBuff->getRequiredSecGroupId() );
	}

}
