// Description: C++18 edit object instance implementation for CFGenKb HostNode.

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
#include <cfgenkbobj/CFGenKbHostNodeObj.hpp>
#include <cfgenkbobj/CFGenKbHostNodeEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbHostNodeEditObj::CLASS_NAME( "CFGenKbHostNodeEditObj" );

	CFGenKbHostNodeEditObj::CFGenKbHostNodeEditObj( cfcore::ICFGenKbHostNodeObj* argOrig )
	: ICFGenKbHostNodeEditObj()
	{
		static const std::string S_ProcName( "CFGenKbHostNodeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbHostNodeBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbHostNodeBuff*>( origBuff->clone() );
	}

	CFGenKbHostNodeEditObj::~CFGenKbHostNodeEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbHostNodeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbHostNodeEditObj::getCreatedBy() {
		if( createdBy == NULL ) {
			createdBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getCreatedByUserId() );
		}
		return( createdBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbHostNodeEditObj::getCreatedAt() {
		return( getHostNodeBuff()->getCreatedAt() );
	}

	cfcore::ICFGenKbSecUserObj* CFGenKbHostNodeEditObj::getUpdatedBy() {
		if( updatedBy == NULL ) {
			updatedBy = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getSchema() )->getSecUserTableObj()->readSecUserByIdIdx( getHostNodeBuff()->getUpdatedByUserId() );
		}
		return( updatedBy );
	}

	const std::chrono::system_clock::time_point& CFGenKbHostNodeEditObj::getUpdatedAt() {
		return( getHostNodeBuff()->getUpdatedAt() );
	}

	void CFGenKbHostNodeEditObj::setCreatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		createdBy = value;
		if( value != NULL ) {
			getHostNodeBuff()->setCreatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbHostNodeEditObj::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		getHostNodeBuff()->setCreatedAt( value );
	}

	void CFGenKbHostNodeEditObj::setUpdatedBy( cfcore::ICFGenKbSecUserObj* value ) {
		updatedBy = value;
		if( value != NULL ) {
			getHostNodeBuff()->setUpdatedByUserId( value->getRequiredSecUserIdReference() );
		}
	}

	void CFGenKbHostNodeEditObj::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		getHostNodeBuff()->setUpdatedAt( value );
	}

	const classcode_t CFGenKbHostNodeEditObj::getClassCode() const {
		return( cfcore::CFGenKbHostNodeBuff::CLASS_CODE );
	}

	bool CFGenKbHostNodeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbHostNodeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbHostNodeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbHostNodeEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbHostNodeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CreatedBy, CFGenKbHostNodeEditObj::getCreatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, CFGenKbHostNodeEditObj::getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_UpdatedBy, CFGenKbHostNodeEditObj::getUpdatedBy()->toString() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, CFGenKbHostNodeEditObj::getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbHostNodeEditObj::getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HostNodeId, CFGenKbHostNodeEditObj::getRequiredHostNodeId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Description, CFGenKbHostNodeEditObj::getRequiredDescription() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_HostName, CFGenKbHostNodeEditObj::getRequiredHostName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbHostNodeEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbHostNodeEditObj::setRequiredRevision( int32_t value ) {
		getHostNodeBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbHostNodeEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredHostName() );
		return( objName );
	}

	const std::string CFGenKbHostNodeEditObj::getGenDefName() {
		return( cfcore::CFGenKbHostNodeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeEditObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeEditObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbHostNodeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbHostNodeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbHostNodeEditObj::getObjQualifiedName() {
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

	std::string CFGenKbHostNodeEditObj::getObjFullName() {
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

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbHostNodeObj* retobj = getSchema()->getHostNodeTableObj()->realizeHostNode( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbHostNodeObj* retval = getOrigAsHostNode()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeEditObj::create() {
		cfcore::ICFGenKbHostNodeObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsHostNode()->getSchema() )->getHostNodeTableObj()->createHostNode( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeEditObj::update() {
		getSchema()->getHostNodeTableObj()->updateHostNode( this );
		return( NULL );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getHostNodeTableObj()->deleteHostNode( this );
		return( NULL );
	}

	cfcore::ICFGenKbHostNodeTableObj* CFGenKbHostNodeEditObj::getHostNodeTable() {
		return( orig->getSchema()->getHostNodeTableObj() );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeEditObj::getHostNodeEdit() {
		return( (cfcore::ICFGenKbHostNodeEditObj*)this );
	}

	cfcore::ICFGenKbHostNodeEditObj* CFGenKbHostNodeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbHostNodeEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbHostNodeObj* CFGenKbHostNodeEditObj::getOrigAsHostNode() {
		return( dynamic_cast<cfcore::ICFGenKbHostNodeObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbHostNodeEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbHostNodeBuff* CFGenKbHostNodeEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbHostNodeEditObj::setBuff( cfcore::CFGenKbHostNodeBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbHostNodePKey* CFGenKbHostNodeEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbHostNodeEditObj::setPKey( cfcore::CFGenKbHostNodePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbHostNodeEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbHostNodeEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbHostNodeEditObj::getRequiredClusterId() {
		return( getPKey()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbHostNodeEditObj::getRequiredClusterIdReference() {
		return( getPKey()->getRequiredClusterIdReference() );
	}

	const int64_t CFGenKbHostNodeEditObj::getRequiredHostNodeId() {
		return( getPKey()->getRequiredHostNodeId() );
	}

	const int64_t* CFGenKbHostNodeEditObj::getRequiredHostNodeIdReference() {
		return( getPKey()->getRequiredHostNodeIdReference() );
	}

	const std::string& CFGenKbHostNodeEditObj::getRequiredDescription() {
		return( getHostNodeBuff()->getRequiredDescription() );
	}

	const std::string* CFGenKbHostNodeEditObj::getRequiredDescriptionReference() {
		return( getHostNodeBuff()->getRequiredDescriptionReference() );
	}

	void CFGenKbHostNodeEditObj::setRequiredDescription( const std::string& value ) {
		if( getHostNodeBuff()->getRequiredDescription() != value ) {
			getHostNodeBuff()->setRequiredDescription( value );
		}
	}

	const std::string& CFGenKbHostNodeEditObj::getRequiredHostName() {
		return( getHostNodeBuff()->getRequiredHostName() );
	}

	const std::string* CFGenKbHostNodeEditObj::getRequiredHostNameReference() {
		return( getHostNodeBuff()->getRequiredHostNameReference() );
	}

	void CFGenKbHostNodeEditObj::setRequiredHostName( const std::string& value ) {
		if( getHostNodeBuff()->getRequiredHostName() != value ) {
			getHostNodeBuff()->setRequiredHostName( value );
		}
	}

	cfcore::ICFGenKbClusterObj* CFGenKbHostNodeEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsHostNode()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getPKey()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbHostNodeEditObj::setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredClusterId
( value->getRequiredId() );
				getHostNodeBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	void CFGenKbHostNodeEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbHostNodePKey* tablePKey = getPKey();
		cfcore::CFGenKbHostNodeBuff* tableBuff = getHostNodeBuff();
		tableBuff->setRequiredClusterId( tablePKey->getRequiredClusterId() );
		tableBuff->setRequiredHostNodeId( tablePKey->getRequiredHostNodeId() );
	}

	void CFGenKbHostNodeEditObj::copyBuffToPKey() {
		cfcore::CFGenKbHostNodePKey* tablePKey = getPKey();
		cfcore::CFGenKbHostNodeBuff* tableBuff = getHostNodeBuff();
		tablePKey->setRequiredClusterId( tableBuff->getRequiredClusterId() );
		tablePKey->setRequiredHostNodeId( tableBuff->getRequiredHostNodeId() );
	}

	void CFGenKbHostNodeEditObj::copyBuffToOrig() {
		cfcore::CFGenKbHostNodeBuff* origBuff = getOrigAsHostNode()->getHostNodeBuff();
		cfcore::CFGenKbHostNodeBuff* myBuff = getHostNodeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbHostNodeEditObj::copyOrigToBuff() {
		cfcore::CFGenKbHostNodeBuff* origBuff = getOrigAsHostNode()->getHostNodeBuff();
		cfcore::CFGenKbHostNodeBuff* myBuff = getHostNodeBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
