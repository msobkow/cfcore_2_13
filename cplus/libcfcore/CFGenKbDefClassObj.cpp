// Description: C++18 base object instance implementation for CFGenKb DefClass.

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
#include <cfgenkbobj/CFGenKbDefClassObj.hpp>

namespace cfcore {

	const std::string CFGenKbDefClassObj::CLASS_NAME( "CFGenKbDefClassObj" );
	const classcode_t CFGenKbDefClassObj::CLASS_CODE = 0xa914L;

	int32_t CFGenKbDefClassObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFGenKbDefClassObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbDefClassObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbDefClassObj::getRequiredName() {
		return( getDefClassBuff()->getRequiredName() );
	}

	const std::string* CFGenKbDefClassObj::getRequiredNameReference() {
		return( getDefClassBuff()->getRequiredNameReference() );
	}

	bool CFGenKbDefClassObj::isOptionalBaseIdNull() {
		return( getDefClassBuff()->isOptionalBaseIdNull() );
	}

	const int16_t CFGenKbDefClassObj::getOptionalBaseIdValue() {
		return( getDefClassBuff()->getOptionalBaseIdValue() );
	}

	const int16_t* CFGenKbDefClassObj::getOptionalBaseIdReference() {
		return( getDefClassBuff()->getOptionalBaseIdReference() );
	}


	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassObj::getOptionalParentBaseDefClass( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = NULL;
		bool anyMissing = false;
			if( getDefClassBuff()->isOptionalBaseIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getDefClassBuff()->getOptionalBaseIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbDefClassObj::CFGenKbDefClassObj()
	: ICFGenKbDefClassObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbDefClassObj::CFGenKbDefClassObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbDefClassObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbDefClassObj::~CFGenKbDefClassObj() {
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

	cfcore::CFGenKbDefClassBuff* CFGenKbDefClassObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbDefClassBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableDefClass()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbDefClassObj::setBuff( cfcore::CFGenKbDefClassBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbDefClassObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbDefClassObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbDefClassObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbDefClassObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbDefClassObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_BaseId( "BaseId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbDefClassObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbDefClassObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbDefClassObj::getRequiredName() ) );
		if( ! CFGenKbDefClassObj::isOptionalBaseIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_BaseId, CFGenKbDefClassObj::getOptionalBaseIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbDefClassObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbDefClassObj::getGenDefName() {
		return( cfcore::CFGenKbDefClassBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbDefClassObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbDefClassObj::getObjQualifiedName() {
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

	std::string CFGenKbDefClassObj::getObjFullName() {
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

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassObj::realize() {
		cfcore::ICFGenKbDefClassObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->realizeDefClass(
			(cfcore::ICFGenKbDefClassObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( retobj ) );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassObj::read( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getDefClassBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( retobj ) );
	}

	cfcore::ICFGenKbDefClassTableObj* CFGenKbDefClassObj::getDefClassTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbDefClassObj::getSchema() {
		return( schema );
	}

	void CFGenKbDefClassObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbDefClassPKey* CFGenKbDefClassObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbDefClassPKey();
		}
		return( pKey );
	}

	void CFGenKbDefClassObj::setPKey( cfcore::CFGenKbDefClassPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbDefClassPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbDefClassObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbDefClassObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbDefClassObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->lockDefClass( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getDefClassTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbDefClassEditObj*>( edit ) );
	}

	void CFGenKbDefClassObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassObj::getDefClassEdit() {
		return( dynamic_cast<cfcore::ICFGenKbDefClassEditObj*>( edit ) );
	}

	void CFGenKbDefClassObj::copyPKeyToBuff() {
		cfcore::CFGenKbDefClassPKey* tablePKey = getPKey();
		cfcore::CFGenKbDefClassBuff* tableBuff = getDefClassBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbDefClassObj::copyBuffToPKey() {
		cfcore::CFGenKbDefClassPKey* tablePKey = getPKey();
		cfcore::CFGenKbDefClassBuff* tableBuff = getDefClassBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
