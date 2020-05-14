// Description: C++18 base object instance implementation for CFGenKb TSecGrpInc.

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
#include <cfgenkbobj/CFGenKbTSecGrpIncObj.hpp>

namespace cfcore {

	const std::string CFGenKbTSecGrpIncObj::CLASS_NAME( "CFGenKbTSecGrpIncObj" );
	const classcode_t CFGenKbTSecGrpIncObj::CLASS_CODE = 0xa912L;

	int32_t CFGenKbTSecGrpIncObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbTSecGrpIncObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbTSecGrpIncObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbTSecGrpIncObj::getRequiredTSecGrpIncId() {
		return( getPKey()->getRequiredTSecGrpIncId() );
	}

	const int64_t* CFGenKbTSecGrpIncObj::getRequiredTSecGrpIncIdReference() {
		return( getPKey()->getRequiredTSecGrpIncIdReference() );
	}

	const int32_t CFGenKbTSecGrpIncObj::getRequiredTSecGroupId() {
		return( getTSecGrpIncBuff()->getRequiredTSecGroupId() );
	}

	const int32_t* CFGenKbTSecGrpIncObj::getRequiredTSecGroupIdReference() {
		return( getTSecGrpIncBuff()->getRequiredTSecGroupIdReference() );
	}

	const int32_t CFGenKbTSecGrpIncObj::getRequiredIncludeGroupId() {
		return( getTSecGrpIncBuff()->getRequiredIncludeGroupId() );
	}

	const int32_t* CFGenKbTSecGrpIncObj::getRequiredIncludeGroupIdReference() {
		return( getTSecGrpIncBuff()->getRequiredIncludeGroupIdReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbTSecGrpIncObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGrpIncObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpIncBuff()->getRequiredTSecGroupId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGrpIncObj::getRequiredParentSubGroup( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpIncBuff()->getRequiredIncludeGroupId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbTSecGrpIncObj::CFGenKbTSecGrpIncObj()
	: ICFGenKbTSecGrpIncObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTSecGrpIncObj::CFGenKbTSecGrpIncObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbTSecGrpIncObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTSecGrpIncObj::~CFGenKbTSecGrpIncObj() {
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

	cfcore::CFGenKbTSecGrpIncBuff* CFGenKbTSecGrpIncObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbTSecGrpIncBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpInc()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredTSecGrpIncId() );
			}
		}
		return( buff );
	}

	void CFGenKbTSecGrpIncObj::setBuff( cfcore::CFGenKbTSecGrpIncBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbTSecGrpIncObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbTSecGrpIncObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbTSecGrpIncObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTSecGrpIncBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTSecGrpIncObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpIncObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTSecGrpIncObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTSecGrpIncObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTSecGrpIncObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTSecGrpIncObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTSecGrpIncObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbTSecGrpIncObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpIncId, CFGenKbTSecGrpIncObj::getRequiredTSecGrpIncId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFGenKbTSecGrpIncObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, CFGenKbTSecGrpIncObj::getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbTSecGrpIncObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredTSecGrpIncId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbTSecGrpIncObj::getGenDefName() {
		return( cfcore::CFGenKbTSecGrpIncBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncObj::getScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncObj::getObjScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpIncObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTSecGrpIncObj::getObjQualifiedName() {
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

	std::string CFGenKbTSecGrpIncObj::getObjFullName() {
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

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncObj::realize() {
		cfcore::ICFGenKbTSecGrpIncObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->realizeTSecGrpInc(
			(cfcore::ICFGenKbTSecGrpIncObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( retobj ) );
	}

	cfcore::ICFGenKbTSecGrpIncObj* CFGenKbTSecGrpIncObj::read( bool forceRead ) {
		cfcore::ICFGenKbTSecGrpIncObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->readTSecGrpIncByIdIdx( getTSecGrpIncBuff()->getRequiredTenantId(),
		getTSecGrpIncBuff()->getRequiredTSecGrpIncId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpIncObj*>( retobj ) );
	}

	cfcore::ICFGenKbTSecGrpIncTableObj* CFGenKbTSecGrpIncObj::getTSecGrpIncTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGrpIncObj::getSchema() {
		return( schema );
	}

	void CFGenKbTSecGrpIncObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbTSecGrpIncPKey* CFGenKbTSecGrpIncObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbTSecGrpIncPKey();
		}
		return( pKey );
	}

	void CFGenKbTSecGrpIncObj::setPKey( cfcore::CFGenKbTSecGrpIncPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbTSecGrpIncPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbTSecGrpIncObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbTSecGrpIncObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbTSecGrpIncObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->lockTSecGrpInc( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpIncTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpIncEditObj*>( edit ) );
	}

	void CFGenKbTSecGrpIncObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbTSecGrpIncEditObj* CFGenKbTSecGrpIncObj::getTSecGrpIncEdit() {
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpIncEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpIncObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpIncBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpIncObj::getCreatedAt() {
		return( getTSecGrpIncBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpIncObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpIncBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpIncObj::getUpdatedAt() {
		return( getTSecGrpIncBuff()->getUpdatedAt() );
	}

	void CFGenKbTSecGrpIncObj::copyPKeyToBuff() {
		cfcore::CFGenKbTSecGrpIncPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpIncBuff* tableBuff = getTSecGrpIncBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredTSecGrpIncId( tablePKey->getRequiredTSecGrpIncId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbTSecGrpIncObj::copyBuffToPKey() {
		cfcore::CFGenKbTSecGrpIncPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpIncBuff* tableBuff = getTSecGrpIncBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGrpIncId( tableBuff->getRequiredTSecGrpIncId() );
	}

}
