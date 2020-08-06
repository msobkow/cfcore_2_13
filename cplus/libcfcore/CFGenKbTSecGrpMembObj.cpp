// Description: C++18 base object instance implementation for CFGenKb TSecGrpMemb.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbTSecGrpMembObj.hpp>

namespace cfcore {

	const std::string CFGenKbTSecGrpMembObj::CLASS_NAME( "CFGenKbTSecGrpMembObj" );
	const classcode_t CFGenKbTSecGrpMembObj::CLASS_CODE = 0xa913L;

	int32_t CFGenKbTSecGrpMembObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbTSecGrpMembObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbTSecGrpMembObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbTSecGrpMembObj::getRequiredTSecGrpMembId() {
		return( getPKey()->getRequiredTSecGrpMembId() );
	}

	const int64_t* CFGenKbTSecGrpMembObj::getRequiredTSecGrpMembIdReference() {
		return( getPKey()->getRequiredTSecGrpMembIdReference() );
	}

	const int32_t CFGenKbTSecGrpMembObj::getRequiredTSecGroupId() {
		return( getTSecGrpMembBuff()->getRequiredTSecGroupId() );
	}

	const int32_t* CFGenKbTSecGrpMembObj::getRequiredTSecGroupIdReference() {
		return( getTSecGrpMembBuff()->getRequiredTSecGroupIdReference() );
	}

	const uuid_ptr_t CFGenKbTSecGrpMembObj::getRequiredSecUserId() {
		return( getTSecGrpMembBuff()->getRequiredSecUserId() );
	}

	const uuid_ptr_t CFGenKbTSecGrpMembObj::getRequiredSecUserIdReference() {
		return( getTSecGrpMembBuff()->getRequiredSecUserIdReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbTSecGrpMembObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbTSecGroupObj* CFGenKbTSecGrpMembObj::getRequiredContainerGroup( bool forceRead ) {
		cfcore::ICFGenKbTSecGroupObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGroupTableObj()->readTSecGroupByIdIdx( getPKey()->getRequiredTenantId(),
					getTSecGrpMembBuff()->getRequiredTSecGroupId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpMembObj::getRequiredParentUser( bool forceRead ) {
		cfcore::ICFGenKbSecUserObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getRequiredSecUserId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbTSecGrpMembObj::CFGenKbTSecGrpMembObj()
	: ICFGenKbTSecGrpMembObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTSecGrpMembObj::CFGenKbTSecGrpMembObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbTSecGrpMembObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbTSecGrpMembObj::~CFGenKbTSecGrpMembObj() {
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

	cfcore::CFGenKbTSecGrpMembBuff* CFGenKbTSecGrpMembObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbTSecGrpMembBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTSecGrpMemb()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredTSecGrpMembId() );
			}
		}
		return( buff );
	}

	void CFGenKbTSecGrpMembObj::setBuff( cfcore::CFGenKbTSecGrpMembBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbTSecGrpMembObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbTSecGrpMembObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbTSecGrpMembObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbTSecGrpMembBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbTSecGrpMembObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpMembObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpMembId( "TSecGrpMembId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbTSecGrpMembObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbTSecGrpMembObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbTSecGrpMembObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbTSecGrpMembObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbTSecGrpMembObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbTSecGrpMembObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpMembId, CFGenKbTSecGrpMembObj::getRequiredTSecGrpMembId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, CFGenKbTSecGrpMembObj::getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, CFGenKbTSecGrpMembObj::getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbTSecGrpMembObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredTSecGrpMembId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbTSecGrpMembObj::getGenDefName() {
		return( cfcore::CFGenKbTSecGrpMembBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembObj::getScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembObj::getObjScope() {
		cfcore::ICFGenKbTSecGroupObj* scope = getRequiredContainerGroup();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbTSecGrpMembObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbTSecGrpMembObj::getObjQualifiedName() {
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

	std::string CFGenKbTSecGrpMembObj::getObjFullName() {
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

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembObj::realize() {
		cfcore::ICFGenKbTSecGrpMembObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->realizeTSecGrpMemb(
			(cfcore::ICFGenKbTSecGrpMembObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpMembObj*>( retobj ) );
	}

	cfcore::ICFGenKbTSecGrpMembObj* CFGenKbTSecGrpMembObj::read( bool forceRead ) {
		cfcore::ICFGenKbTSecGrpMembObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->readTSecGrpMembByIdIdx( getTSecGrpMembBuff()->getRequiredTenantId(),
		getTSecGrpMembBuff()->getRequiredTSecGrpMembId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpMembObj*>( retobj ) );
	}

	cfcore::ICFGenKbTSecGrpMembTableObj* CFGenKbTSecGrpMembObj::getTSecGrpMembTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbTSecGrpMembObj::getSchema() {
		return( schema );
	}

	void CFGenKbTSecGrpMembObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbTSecGrpMembPKey* CFGenKbTSecGrpMembObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbTSecGrpMembPKey();
		}
		return( pKey );
	}

	void CFGenKbTSecGrpMembObj::setPKey( cfcore::CFGenKbTSecGrpMembPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbTSecGrpMembPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbTSecGrpMembObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbTSecGrpMembObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbTSecGrpMembObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->lockTSecGrpMemb( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTSecGrpMembTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpMembEditObj*>( edit ) );
	}

	void CFGenKbTSecGrpMembObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbTSecGrpMembEditObj* CFGenKbTSecGrpMembObj::getTSecGrpMembEdit() {
		return( dynamic_cast<cfcore::ICFGenKbTSecGrpMembEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpMembObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpMembObj::getCreatedAt() {
		return( getTSecGrpMembBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbTSecGrpMembObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getTSecGrpMembBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpMembObj::getUpdatedAt() {
		return( getTSecGrpMembBuff()->getUpdatedAt() );
	}

	void CFGenKbTSecGrpMembObj::copyPKeyToBuff() {
		cfcore::CFGenKbTSecGrpMembPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpMembBuff* tableBuff = getTSecGrpMembBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredTSecGrpMembId( tablePKey->getRequiredTSecGrpMembId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbTSecGrpMembObj::copyBuffToPKey() {
		cfcore::CFGenKbTSecGrpMembPKey* tablePKey = getPKey();
		cfcore::CFGenKbTSecGrpMembBuff* tableBuff = getTSecGrpMembBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredTSecGrpMembId( tableBuff->getRequiredTSecGrpMembId() );
	}

}
