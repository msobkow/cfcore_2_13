// Description: C++18 base object instance implementation for CFGenKb GelSwitchLimb.

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
#include <cfgenkbobj/CFGenKbGelSwitchLimbObj.hpp>

namespace cfcore {

	const std::string CFGenKbGelSwitchLimbObj::CLASS_NAME( "CFGenKbGelSwitchLimbObj" );
	const classcode_t CFGenKbGelSwitchLimbObj::CLASS_CODE = 0xa91fL;

	int32_t CFGenKbGelSwitchLimbObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbGelSwitchLimbObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGelSwitchLimbObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGelSwitchLimbObj::getRequiredGelCacheId() {
		return( getPKey()->getRequiredGelCacheId() );
	}

	const int64_t* CFGenKbGelSwitchLimbObj::getRequiredGelCacheIdReference() {
		return( getPKey()->getRequiredGelCacheIdReference() );
	}

	const int64_t CFGenKbGelSwitchLimbObj::getRequiredGelInstId() {
		return( getPKey()->getRequiredGelInstId() );
	}

	const int64_t* CFGenKbGelSwitchLimbObj::getRequiredGelInstIdReference() {
		return( getPKey()->getRequiredGelInstIdReference() );
	}

	const std::string& CFGenKbGelSwitchLimbObj::getRequiredLimbName() {
		return( getPKey()->getRequiredLimbName() );
	}

	const std::string* CFGenKbGelSwitchLimbObj::getRequiredLimbNameReference() {
		return( getPKey()->getRequiredLimbNameReference() );
	}

	const std::string& CFGenKbGelSwitchLimbObj::getRequiredLimbExpansion() {
		return( getGelSwitchLimbBuff()->getRequiredLimbExpansion() );
	}

	const std::string* CFGenKbGelSwitchLimbObj::getRequiredLimbExpansionReference() {
		return( getGelSwitchLimbBuff()->getRequiredLimbExpansionReference() );
	}


	cfcore::ICFGenKbGelSwitchObj* CFGenKbGelSwitchLimbObj::getRequiredParentSwitch( bool forceRead ) {
		cfcore::ICFGenKbGelSwitchObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchTableObj()->readGelSwitchByPIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredGelCacheId(),
					getPKey()->getRequiredGelInstId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbTenantObj* CFGenKbGelSwitchLimbObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelSwitchLimbObj::CFGenKbGelSwitchLimbObj()
	: ICFGenKbGelSwitchLimbObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGelSwitchLimbObj::CFGenKbGelSwitchLimbObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelSwitchLimbObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGelSwitchLimbObj::~CFGenKbGelSwitchLimbObj() {
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

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbGelSwitchLimbObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelSwitchLimbBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitchLimb()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId(),
						getPKey()->getRequiredLimbName() );
			}
		}
		return( buff );
	}

	void CFGenKbGelSwitchLimbObj::setBuff( cfcore::CFGenKbGelSwitchLimbBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelSwitchLimbObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSwitchLimbObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSwitchLimbObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGelSwitchLimbObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchLimbObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_LimbName( "LimbName" );
		static const std::string S_LimbExpansion( "LimbExpansion" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGelSwitchLimbObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGelSwitchLimbObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, CFGenKbGelSwitchLimbObj::getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, CFGenKbGelSwitchLimbObj::getRequiredGelInstId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbName, CFGenKbGelSwitchLimbObj::getRequiredLimbName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbExpansion, CFGenKbGelSwitchLimbObj::getRequiredLimbExpansion() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelSwitchLimbObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredLimbName() );
		return( objName );
	}

	const std::string CFGenKbGelSwitchLimbObj::getGenDefName() {
		return( cfcore::CFGenKbGelSwitchLimbBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSwitchLimbObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSwitchLimbObj::getObjFullName() {
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

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbObj::realize() {
		cfcore::ICFGenKbGelSwitchLimbObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchLimbTableObj()->realizeGelSwitchLimb(
			(cfcore::ICFGenKbGelSwitchLimbObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelSwitchLimbObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchLimbTableObj()->readGelSwitchLimbByPIdx( getGelSwitchLimbBuff()->getRequiredTenantId(),
		getGelSwitchLimbBuff()->getRequiredGelCacheId(),
		getGelSwitchLimbBuff()->getRequiredGelInstId(),
		getGelSwitchLimbBuff()->getRequiredLimbName(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelSwitchLimbTableObj* CFGenKbGelSwitchLimbObj::getGelSwitchLimbTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchLimbTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelSwitchLimbObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelSwitchLimbObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbGelSwitchLimbPKey* CFGenKbGelSwitchLimbObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbGelSwitchLimbPKey();
		}
		return( pKey );
	}

	void CFGenKbGelSwitchLimbObj::setPKey( cfcore::CFGenKbGelSwitchLimbPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbGelSwitchLimbPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbGelSwitchLimbObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbGelSwitchLimbObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelSwitchLimbObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchLimbTableObj()->lockGelSwitchLimb( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchLimbTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbEditObj*>( edit ) );
	}

	void CFGenKbGelSwitchLimbObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbObj::getGelSwitchLimbEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbEditObj*>( edit ) );
	}

	void CFGenKbGelSwitchLimbObj::copyPKeyToBuff() {
		cfcore::CFGenKbGelSwitchLimbPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelSwitchLimbBuff* tableBuff = getGelSwitchLimbBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredGelCacheId( tablePKey->getRequiredGelCacheId() );
			tableBuff->setRequiredGelInstId( tablePKey->getRequiredGelInstId() );
			tableBuff->setRequiredLimbName( tablePKey->getRequiredLimbName() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbGelSwitchLimbObj::copyBuffToPKey() {
		cfcore::CFGenKbGelSwitchLimbPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelSwitchLimbBuff* tableBuff = getGelSwitchLimbBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredGelCacheId( tableBuff->getRequiredGelCacheId() );
		tablePKey->setRequiredGelInstId( tableBuff->getRequiredGelInstId() );
		tablePKey->setRequiredLimbName( tableBuff->getRequiredLimbName() );
	}

}
