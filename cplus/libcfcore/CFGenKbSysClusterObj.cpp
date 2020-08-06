// Description: C++18 base object instance implementation for CFGenKb SysCluster.

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
#include <cfgenkbobj/CFGenKbSysClusterObj.hpp>

namespace cfcore {

	const std::string CFGenKbSysClusterObj::CLASS_NAME( "CFGenKbSysClusterObj" );
	const classcode_t CFGenKbSysClusterObj::CLASS_CODE = 0xa90fL;

	int32_t CFGenKbSysClusterObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int32_t CFGenKbSysClusterObj::getRequiredSingletonId() {
		return( getPKey()->getRequiredSingletonId() );
	}

	const int32_t* CFGenKbSysClusterObj::getRequiredSingletonIdReference() {
		return( getPKey()->getRequiredSingletonIdReference() );
	}

	const int64_t CFGenKbSysClusterObj::getRequiredClusterId() {
		return( getSysClusterBuff()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSysClusterObj::getRequiredClusterIdReference() {
		return( getSysClusterBuff()->getRequiredClusterIdReference() );
	}


	cfcore::ICFGenKbClusterObj* CFGenKbSysClusterObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getClusterTableObj()->readClusterByIdIdx( getSysClusterBuff()->getRequiredClusterId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbSysClusterObj::CFGenKbSysClusterObj()
	: ICFGenKbSysClusterObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSysClusterObj::CFGenKbSysClusterObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbSysClusterObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbSysClusterObj::~CFGenKbSysClusterObj() {
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

	cfcore::CFGenKbSysClusterBuff* CFGenKbSysClusterObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbSysClusterBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableSysCluster()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredSingletonId() );
			}
		}
		return( buff );
	}

	void CFGenKbSysClusterObj::setBuff( cfcore::CFGenKbSysClusterBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbSysClusterObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSysClusterObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSysClusterObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSysClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSysClusterObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSysClusterObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SingletonId( "SingletonId" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSysClusterObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SingletonId, CFGenKbSysClusterObj::getRequiredSingletonId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSysClusterObj::getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbSysClusterObj::getObjName() {
		std::string objName( CLASS_NAME );
		int32_t val = getRequiredSingletonId();
		objName = cflib::CFLibXmlUtil::formatInt32( val );
		return( objName );
	}

	const std::string CFGenKbSysClusterObj::getGenDefName() {
		return( cfcore::CFGenKbSysClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSysClusterObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSysClusterObj::getObjQualifiedName() {
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

	std::string CFGenKbSysClusterObj::getObjFullName() {
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

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterObj::realize() {
		cfcore::ICFGenKbSysClusterObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSysClusterTableObj()->realizeSysCluster(
			(cfcore::ICFGenKbSysClusterObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbSysClusterObj*>( retobj ) );
	}

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterObj::read( bool forceRead ) {
		cfcore::ICFGenKbSysClusterObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSysClusterTableObj()->readSysClusterByIdIdx( getSysClusterBuff()->getRequiredSingletonId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbSysClusterObj*>( retobj ) );
	}

	cfcore::ICFGenKbSysClusterTableObj* CFGenKbSysClusterObj::getSysClusterTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSysClusterTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSysClusterObj::getSchema() {
		return( schema );
	}

	void CFGenKbSysClusterObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbSysClusterPKey* CFGenKbSysClusterObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbSysClusterPKey();
		}
		return( pKey );
	}

	void CFGenKbSysClusterObj::setPKey( cfcore::CFGenKbSysClusterPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbSysClusterPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbSysClusterObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbSysClusterObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbSysClusterObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSysClusterTableObj()->lockSysCluster( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getSysClusterTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbSysClusterEditObj*>( edit ) );
	}

	void CFGenKbSysClusterObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterObj::getSysClusterEdit() {
		return( dynamic_cast<cfcore::ICFGenKbSysClusterEditObj*>( edit ) );
	}

	void CFGenKbSysClusterObj::copyPKeyToBuff() {
		cfcore::CFGenKbSysClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbSysClusterBuff* tableBuff = getSysClusterBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredSingletonId( tablePKey->getRequiredSingletonId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbSysClusterObj::copyBuffToPKey() {
		cfcore::CFGenKbSysClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbSysClusterBuff* tableBuff = getSysClusterBuff();
		tablePKey->setRequiredSingletonId( tableBuff->getRequiredSingletonId() );
	}

}
