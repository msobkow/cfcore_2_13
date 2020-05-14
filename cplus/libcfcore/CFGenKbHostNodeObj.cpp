// Description: C++18 base object instance implementation for CFGenKb HostNode.

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
#include <cfgenkbobj/CFGenKbHostNodeObj.hpp>

namespace cfcore {

	const std::string CFGenKbHostNodeObj::CLASS_NAME( "CFGenKbHostNodeObj" );
	const classcode_t CFGenKbHostNodeObj::CLASS_CODE = 0xa902L;

	int32_t CFGenKbHostNodeObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbHostNodeObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbHostNodeObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbHostNodeObj::getRequiredHostNodeId() {
		return( getPKey()->getRequiredHostNodeId() );
	}

	const int64_t* CFGenKbHostNodeObj::getRequiredHostNodeIdReference() {
		return( getPKey()->getRequiredHostNodeIdReference() );
	}

	const std::string& CFGenKbHostNodeObj::getRequiredDescription() {
		return( getHostNodeBuff()->getRequiredDescription() );
	}

	const std::string* CFGenKbHostNodeObj::getRequiredDescriptionReference() {
		return( getHostNodeBuff()->getRequiredDescriptionReference() );
	}

	const std::string& CFGenKbHostNodeObj::getRequiredHostName() {
		return( getHostNodeBuff()->getRequiredHostName() );
	}

	const std::string* CFGenKbHostNodeObj::getRequiredHostNameReference() {
		return( getHostNodeBuff()->getRequiredHostNameReference() );
	}


	cfcore::ICFGenKbClusterObj* CFGenKbHostNodeObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbHostNodeObj::CFGenKbHostNodeObj()
	: ICFGenKbHostNodeObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbHostNodeObj::CFGenKbHostNodeObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbHostNodeObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbHostNodeObj::~CFGenKbHostNodeObj() {
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

	cfcore::CFGenKbHostNodeBuff* CFGenKbHostNodeObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbHostNodeBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableHostNode()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredClusterId(),
						getPKey()->getRequiredHostNodeId() );
			}
		}
		return( buff );
	}

	void CFGenKbHostNodeObj::setBuff( cfcore::CFGenKbHostNodeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbHostNodeObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbHostNodeObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbHostNodeObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbHostNodeObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbHostNodeObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_HostNodeId( "HostNodeId" );
		static const std::string S_Description( "Description" );
		static const std::string S_HostName( "HostName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbHostNodeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbHostNodeObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbHostNodeObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbHostNodeObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbHostNodeObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbHostNodeObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, CFGenKbHostNodeObj::getRequiredHostNodeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFGenKbHostNodeObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HostName, CFGenKbHostNodeObj::getRequiredHostName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbHostNodeObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredHostName() );
		return( objName );
	}

	const std::string CFGenKbHostNodeObj::getGenDefName() {
		return( cfcore::CFGenKbHostNodeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbHostNodeObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbHostNodeObj::getObjQualifiedName() {
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

	std::string CFGenKbHostNodeObj::getObjFullName() {
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeObj::realize() {
		cfcore::ICFGenKbHostNodeObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj()->realizeHostNode(
			(cfcore::ICFGenKbHostNodeObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( retobj ) );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeObj::read( bool forceRead ) {
		cfcore::ICFGenKbHostNodeObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj()->readHostNodeByIdIdx( getHostNodeBuff()->getRequiredClusterId(),
		getHostNodeBuff()->getRequiredHostNodeId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( retobj ) );
	}

	cfcore::ICFGenKbHostNodeTableObj* CFGenKbHostNodeObj::getHostNodeTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbHostNodeObj::getSchema() {
		return( schema );
	}

	void CFGenKbHostNodeObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbHostNodePKey* CFGenKbHostNodeObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbHostNodePKey();
		}
		return( pKey );
	}

	void CFGenKbHostNodeObj::setPKey( cfcore::CFGenKbHostNodePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbHostNodePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbHostNodeObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbHostNodeObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbHostNodeObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj()->lockHostNode( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getHostNodeTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbHostNodeEditObj*>( edit ) );
	}

	void CFGenKbHostNodeObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeObj::getHostNodeEdit() {
		return( dynamic_cast<cfcore::ICFGenKbHostNodeEditObj*>( edit ) );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbHostNodeObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbHostNodeObj::getCreatedAt() {
		return( getHostNodeBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbHostNodeObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbHostNodeObj::getUpdatedAt() {
		return( getHostNodeBuff()->getUpdatedAt() );
	}

	void CFGenKbHostNodeObj::copyPKeyToBuff() {
		cfcore::CFGenKbHostNodePKey* tablePKey = getPKey();
		cfcore::CFGenKbHostNodeBuff* tableBuff = getHostNodeBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
			tableBuff->setRequiredHostNodeId( tablePKey->getRequiredHostNodeId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbHostNodeObj::copyBuffToPKey() {
		cfcore::CFGenKbHostNodePKey* tablePKey = getPKey();
		cfcore::CFGenKbHostNodeBuff* tableBuff = getHostNodeBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredHostNodeId( tableBuff->getRequiredHostNodeId() );
	}

}
