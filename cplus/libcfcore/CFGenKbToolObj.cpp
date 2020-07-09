// Description: C++18 base object instance implementation for CFGenKb Tool.

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
#include <cfgenkbobj/CFGenKbToolObj.hpp>

namespace cfcore {

	const std::string CFGenKbToolObj::CLASS_NAME( "CFGenKbToolObj" );
	const classcode_t CFGenKbToolObj::CLASS_CODE = 0xa927L;

	int32_t CFGenKbToolObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFGenKbToolObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbToolObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbToolObj::getRequiredName() {
		return( getToolBuff()->getRequiredName() );
	}

	const std::string* CFGenKbToolObj::getRequiredNameReference() {
		return( getToolBuff()->getRequiredNameReference() );
	}

	bool CFGenKbToolObj::isOptionalReplacesIdNull() {
		return( getToolBuff()->isOptionalReplacesIdNull() );
	}

	const int16_t CFGenKbToolObj::getOptionalReplacesIdValue() {
		return( getToolBuff()->getOptionalReplacesIdValue() );
	}

	const int16_t* CFGenKbToolObj::getOptionalReplacesIdReference() {
		return( getToolBuff()->getOptionalReplacesIdReference() );
	}

	const bool CFGenKbToolObj::getRequiredIsSupported() {
		return( getToolBuff()->getRequiredIsSupported() );
	}

	const bool* CFGenKbToolObj::getRequiredIsSupportedReference() {
		return( getToolBuff()->getRequiredIsSupportedReference() );
	}


	cfcore::ICFGenKbToolObj* CFGenKbToolObj::getOptionalLookupReplaces( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolBuff()->isOptionalReplacesIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolBuff()->getOptionalReplacesIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbToolObj::CFGenKbToolObj()
	: ICFGenKbToolObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbToolObj::CFGenKbToolObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbToolObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbToolObj::~CFGenKbToolObj() {
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

	cfcore::CFGenKbToolBuff* CFGenKbToolObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbToolBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableTool()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbToolObj::setBuff( cfcore::CFGenKbToolBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbToolObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbToolObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbToolObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbToolObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_ReplacesId( "ReplacesId" );
		static const std::string S_IsSupported( "IsSupported" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbToolObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbToolObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbToolObj::getRequiredName() ) );
		if( ! CFGenKbToolObj::isOptionalReplacesIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ReplacesId, CFGenKbToolObj::getOptionalReplacesIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSupported, CFGenKbToolObj::getRequiredIsSupported() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbToolObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbToolObj::getGenDefName() {
		return( cfcore::CFGenKbToolBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbToolObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbToolObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbToolObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbToolObj::getObjQualifiedName() {
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

	std::string CFGenKbToolObj::getObjFullName() {
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

	cfcore::ICFGenKbToolObj* CFGenKbToolObj::realize() {
		cfcore::ICFGenKbToolObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->realizeTool(
			(cfcore::ICFGenKbToolObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbToolObj*>( retobj ) );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolObj::read( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbToolObj*>( retobj ) );
	}

	cfcore::ICFGenKbToolTableObj* CFGenKbToolObj::getToolTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbToolObj::getSchema() {
		return( schema );
	}

	void CFGenKbToolObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbToolPKey* CFGenKbToolObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbToolPKey();
		}
		return( pKey );
	}

	void CFGenKbToolObj::setPKey( cfcore::CFGenKbToolPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbToolPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbToolObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbToolObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbToolObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->lockTool( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbToolEditObj*>( edit ) );
	}

	void CFGenKbToolObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolObj::getToolEdit() {
		return( dynamic_cast<cfcore::ICFGenKbToolEditObj*>( edit ) );
	}

	void CFGenKbToolObj::copyPKeyToBuff() {
		cfcore::CFGenKbToolPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolBuff* tableBuff = getToolBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbToolObj::copyBuffToPKey() {
		cfcore::CFGenKbToolPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolBuff* tableBuff = getToolBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
