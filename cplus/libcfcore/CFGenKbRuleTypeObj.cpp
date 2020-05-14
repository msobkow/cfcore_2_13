// Description: C++18 base object instance implementation for CFGenKb RuleType.

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
#include <cfgenkbobj/CFGenKbRuleTypeObj.hpp>

namespace cfcore {

	const std::string CFGenKbRuleTypeObj::CLASS_NAME( "CFGenKbRuleTypeObj" );
	const classcode_t CFGenKbRuleTypeObj::CLASS_CODE = 0xa926L;

	int32_t CFGenKbRuleTypeObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFGenKbRuleTypeObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbRuleTypeObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbRuleTypeObj::getRequiredName() {
		return( getRuleTypeBuff()->getRequiredName() );
	}

	const std::string* CFGenKbRuleTypeObj::getRequiredNameReference() {
		return( getRuleTypeBuff()->getRequiredNameReference() );
	}


	CFGenKbRuleTypeObj::CFGenKbRuleTypeObj()
	: ICFGenKbRuleTypeObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbRuleTypeObj::CFGenKbRuleTypeObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbRuleTypeObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbRuleTypeObj::~CFGenKbRuleTypeObj() {
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

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRuleTypeObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbRuleTypeBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleType()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbRuleTypeObj::setBuff( cfcore::CFGenKbRuleTypeBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbRuleTypeObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbRuleTypeObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbRuleTypeObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbRuleTypeObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleTypeObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbRuleTypeObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbRuleTypeObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbRuleTypeObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbRuleTypeObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbRuleTypeObj::getGenDefName() {
		return( cfcore::CFGenKbRuleTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbRuleTypeObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbRuleTypeObj::getObjQualifiedName() {
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

	std::string CFGenKbRuleTypeObj::getObjFullName() {
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

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeObj::realize() {
		cfcore::ICFGenKbRuleTypeObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleTypeTableObj()->realizeRuleType(
			(cfcore::ICFGenKbRuleTypeObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( retobj ) );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeObj::read( bool forceRead ) {
		cfcore::ICFGenKbRuleTypeObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleTypeTableObj()->readRuleTypeByIdIdx( getRuleTypeBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( retobj ) );
	}

	cfcore::ICFGenKbRuleTypeTableObj* CFGenKbRuleTypeObj::getRuleTypeTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleTypeTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbRuleTypeObj::getSchema() {
		return( schema );
	}

	void CFGenKbRuleTypeObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbRuleTypePKey* CFGenKbRuleTypeObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbRuleTypePKey();
		}
		return( pKey );
	}

	void CFGenKbRuleTypeObj::setPKey( cfcore::CFGenKbRuleTypePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbRuleTypePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbRuleTypeObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbRuleTypeObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbRuleTypeObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleTypeTableObj()->lockRuleType( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleTypeTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbRuleTypeEditObj*>( edit ) );
	}

	void CFGenKbRuleTypeObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeObj::getRuleTypeEdit() {
		return( dynamic_cast<cfcore::ICFGenKbRuleTypeEditObj*>( edit ) );
	}

	void CFGenKbRuleTypeObj::copyPKeyToBuff() {
		cfcore::CFGenKbRuleTypePKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleTypeBuff* tableBuff = getRuleTypeBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbRuleTypeObj::copyBuffToPKey() {
		cfcore::CFGenKbRuleTypePKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleTypeBuff* tableBuff = getRuleTypeBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
