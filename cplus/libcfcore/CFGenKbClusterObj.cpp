// Description: C++18 base object instance implementation for CFGenKb Cluster.

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

namespace cfcore {

	const std::string CFGenKbClusterObj::CLASS_NAME( "CFGenKbClusterObj" );
	const classcode_t CFGenKbClusterObj::CLASS_CODE = 0xa901L;

	int32_t CFGenKbClusterObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbClusterObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFGenKbClusterObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbClusterObj::getRequiredFullDomName() {
		return( getClusterBuff()->getRequiredFullDomName() );
	}

	const std::string* CFGenKbClusterObj::getRequiredFullDomNameReference() {
		return( getClusterBuff()->getRequiredFullDomNameReference() );
	}

	const std::string& CFGenKbClusterObj::getRequiredDescription() {
		return( getClusterBuff()->getRequiredDescription() );
	}

	const std::string* CFGenKbClusterObj::getRequiredDescriptionReference() {
		return( getClusterBuff()->getRequiredDescriptionReference() );
	}


	std::vector<cfcore::ICFGenKbHostNodeObj*> CFGenKbClusterObj::getOptionalComponentsHostNode( bool forceRead ) {
		std::vector<cfcore::ICFGenKbHostNodeObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbTenantObj*> CFGenKbClusterObj::getOptionalComponentsTenant( bool forceRead ) {
		std::vector<cfcore::ICFGenKbTenantObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecAppObj*> CFGenKbClusterObj::getOptionalComponentsSecApp( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecAppObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecAppTableObj()->readSecAppByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSecGroupObj*> CFGenKbClusterObj::getOptionalComponentsSecGroup( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSecGroupObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecGroupTableObj()->readSecGroupByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	std::vector<cfcore::ICFGenKbSysClusterObj*> CFGenKbClusterObj::getOptionalComponentsSysCluster( bool forceRead ) {
		std::vector<cfcore::ICFGenKbSysClusterObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSysClusterTableObj()->readSysClusterByClusterIdx( getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFGenKbClusterObj::CFGenKbClusterObj()
	: ICFGenKbClusterObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbClusterObj::CFGenKbClusterObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbClusterObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbClusterObj::~CFGenKbClusterObj() {
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

	cfcore::CFGenKbClusterBuff* CFGenKbClusterObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbClusterBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableCluster()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbClusterObj::setBuff( cfcore::CFGenKbClusterBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbClusterObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbClusterObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbClusterObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbClusterObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbClusterObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbClusterObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbClusterObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbClusterObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbClusterObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbClusterObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFGenKbClusterObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_FullDomName, CFGenKbClusterObj::getRequiredFullDomName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFGenKbClusterObj::getRequiredDescription() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbClusterObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredFullDomName() );
		return( objName );
	}

	const std::string CFGenKbClusterObj::getGenDefName() {
		return( cfcore::CFGenKbClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbClusterObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbClusterObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbClusterObj::getObjQualifiedName() {
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

	std::string CFGenKbClusterObj::getObjFullName() {
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

	cfcore::ICFGenKbClusterObj* CFGenKbClusterObj::realize() {
		cfcore::ICFGenKbClusterObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->realizeCluster(
			(cfcore::ICFGenKbClusterObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbClusterObj*>( retobj ) );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbClusterObj::read( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getClusterBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbClusterObj*>( retobj ) );
	}

	cfcore::ICFGenKbClusterTableObj* CFGenKbClusterObj::getClusterTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbClusterObj::getSchema() {
		return( schema );
	}

	void CFGenKbClusterObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbClusterPKey* CFGenKbClusterObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbClusterPKey();
		}
		return( pKey );
	}

	void CFGenKbClusterObj::setPKey( cfcore::CFGenKbClusterPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbClusterPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbClusterObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbClusterObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbClusterObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->lockCluster( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbClusterEditObj*>( edit ) );
	}

	void CFGenKbClusterObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbClusterEditObj* CFGenKbClusterObj::getClusterEdit() {
		return( dynamic_cast<cfcore::ICFGenKbClusterEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbClusterObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbClusterObj::getCreatedAt() {
		return( getClusterBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbClusterObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getClusterBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbClusterObj::getUpdatedAt() {
		return( getClusterBuff()->getUpdatedAt() );
	}

	void CFGenKbClusterObj::copyPKeyToBuff() {
		cfcore::CFGenKbClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbClusterBuff* tableBuff = getClusterBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbClusterObj::copyBuffToPKey() {
		cfcore::CFGenKbClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbClusterBuff* tableBuff = getClusterBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
