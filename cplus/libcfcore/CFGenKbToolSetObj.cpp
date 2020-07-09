// Description: C++18 base object instance implementation for CFGenKb ToolSet.

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
#include <cfgenkbobj/CFGenKbToolSetObj.hpp>

namespace cfcore {

	const std::string CFGenKbToolSetObj::CLASS_NAME( "CFGenKbToolSetObj" );
	const classcode_t CFGenKbToolSetObj::CLASS_CODE = 0xa928L;

	int32_t CFGenKbToolSetObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int16_t CFGenKbToolSetObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbToolSetObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbToolSetObj::getRequiredName() {
		return( getToolSetBuff()->getRequiredName() );
	}

	const std::string* CFGenKbToolSetObj::getRequiredNameReference() {
		return( getToolSetBuff()->getRequiredNameReference() );
	}

	bool CFGenKbToolSetObj::isOptionalDescrNull() {
		return( getToolSetBuff()->isOptionalDescrNull() );
	}

	const std::string& CFGenKbToolSetObj::getOptionalDescrValue() {
		return( getToolSetBuff()->getOptionalDescrValue() );
	}

	const std::string* CFGenKbToolSetObj::getOptionalDescrReference() {
		return( getToolSetBuff()->getOptionalDescrReference() );
	}

	bool CFGenKbToolSetObj::isOptionalRevisionStringNull() {
		return( getToolSetBuff()->isOptionalRevisionStringNull() );
	}

	const std::string& CFGenKbToolSetObj::getOptionalRevisionStringValue() {
		return( getToolSetBuff()->getOptionalRevisionStringValue() );
	}

	const std::string* CFGenKbToolSetObj::getOptionalRevisionStringReference() {
		return( getToolSetBuff()->getOptionalRevisionStringReference() );
	}

	const bool CFGenKbToolSetObj::getRequiredIsSupported() {
		return( getToolSetBuff()->getRequiredIsSupported() );
	}

	const bool* CFGenKbToolSetObj::getRequiredIsSupportedReference() {
		return( getToolSetBuff()->getRequiredIsSupportedReference() );
	}

	const bool CFGenKbToolSetObj::getRequiredGenerate() {
		return( getToolSetBuff()->getRequiredGenerate() );
	}

	const bool* CFGenKbToolSetObj::getRequiredGenerateReference() {
		return( getToolSetBuff()->getRequiredGenerateReference() );
	}

	const int16_t CFGenKbToolSetObj::getRequiredToolId0() {
		return( getToolSetBuff()->getRequiredToolId0() );
	}

	const int16_t* CFGenKbToolSetObj::getRequiredToolId0Reference() {
		return( getToolSetBuff()->getRequiredToolId0Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId1Null() {
		return( getToolSetBuff()->isOptionalToolId1Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId1Value() {
		return( getToolSetBuff()->getOptionalToolId1Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId1Reference() {
		return( getToolSetBuff()->getOptionalToolId1Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId2Null() {
		return( getToolSetBuff()->isOptionalToolId2Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId2Value() {
		return( getToolSetBuff()->getOptionalToolId2Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId2Reference() {
		return( getToolSetBuff()->getOptionalToolId2Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId3Null() {
		return( getToolSetBuff()->isOptionalToolId3Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId3Value() {
		return( getToolSetBuff()->getOptionalToolId3Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId3Reference() {
		return( getToolSetBuff()->getOptionalToolId3Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId4Null() {
		return( getToolSetBuff()->isOptionalToolId4Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId4Value() {
		return( getToolSetBuff()->getOptionalToolId4Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId4Reference() {
		return( getToolSetBuff()->getOptionalToolId4Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId5Null() {
		return( getToolSetBuff()->isOptionalToolId5Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId5Value() {
		return( getToolSetBuff()->getOptionalToolId5Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId5Reference() {
		return( getToolSetBuff()->getOptionalToolId5Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId6Null() {
		return( getToolSetBuff()->isOptionalToolId6Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId6Value() {
		return( getToolSetBuff()->getOptionalToolId6Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId6Reference() {
		return( getToolSetBuff()->getOptionalToolId6Reference() );
	}

	bool CFGenKbToolSetObj::isOptionalToolId7Null() {
		return( getToolSetBuff()->isOptionalToolId7Null() );
	}

	const int16_t CFGenKbToolSetObj::getOptionalToolId7Value() {
		return( getToolSetBuff()->getOptionalToolId7Value() );
	}

	const int16_t* CFGenKbToolSetObj::getOptionalToolId7Reference() {
		return( getToolSetBuff()->getOptionalToolId7Reference() );
	}


	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getRequiredLookupTool0( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getRequiredToolId0(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool1( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId1Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId1Value(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool2( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId2Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId2Value(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool3( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId3Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId3Value(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool4( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId4Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId4Value(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool5( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId5Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId5Value(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool6( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId6Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId6Value(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetObj::getOptionalLookupTool7( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
			if( getToolSetBuff()->isOptionalToolId7Null() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId7Value(), forceRead );
		}
		return( retobj );
	}

	CFGenKbToolSetObj::CFGenKbToolSetObj()
	: ICFGenKbToolSetObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbToolSetObj::CFGenKbToolSetObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbToolSetObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbToolSetObj::~CFGenKbToolSetObj() {
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

	cfcore::CFGenKbToolSetBuff* CFGenKbToolSetObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbToolSetBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableToolSet()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbToolSetObj::setBuff( cfcore::CFGenKbToolSetBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbToolSetObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbToolSetObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbToolSetObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbToolSetObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_RevisionString( "RevisionString" );
		static const std::string S_IsSupported( "IsSupported" );
		static const std::string S_Generate( "Generate" );
		static const std::string S_ToolId0( "ToolId0" );
		static const std::string S_ToolId1( "ToolId1" );
		static const std::string S_ToolId2( "ToolId2" );
		static const std::string S_ToolId3( "ToolId3" );
		static const std::string S_ToolId4( "ToolId4" );
		static const std::string S_ToolId5( "ToolId5" );
		static const std::string S_ToolId6( "ToolId6" );
		static const std::string S_ToolId7( "ToolId7" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbToolSetObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbToolSetObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbToolSetObj::getRequiredName() ) );
		if( ! CFGenKbToolSetObj::isOptionalDescrNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Descr, CFGenKbToolSetObj::getOptionalDescrValue() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalRevisionStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RevisionString, CFGenKbToolSetObj::getOptionalRevisionStringValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSupported, CFGenKbToolSetObj::getRequiredIsSupported() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_Generate, CFGenKbToolSetObj::getRequiredGenerate() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId0, CFGenKbToolSetObj::getRequiredToolId0() ) );
		if( ! CFGenKbToolSetObj::isOptionalToolId1Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId1, CFGenKbToolSetObj::getOptionalToolId1Value() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalToolId2Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId2, CFGenKbToolSetObj::getOptionalToolId2Value() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalToolId3Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId3, CFGenKbToolSetObj::getOptionalToolId3Value() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalToolId4Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId4, CFGenKbToolSetObj::getOptionalToolId4Value() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalToolId5Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId5, CFGenKbToolSetObj::getOptionalToolId5Value() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalToolId6Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId6, CFGenKbToolSetObj::getOptionalToolId6Value() ) );
		}
		if( ! CFGenKbToolSetObj::isOptionalToolId7Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId7, CFGenKbToolSetObj::getOptionalToolId7Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbToolSetObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbToolSetObj::getGenDefName() {
		return( cfcore::CFGenKbToolSetBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbToolSetObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbToolSetObj::getObjQualifiedName() {
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

	std::string CFGenKbToolSetObj::getObjFullName() {
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

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetObj::realize() {
		cfcore::ICFGenKbToolSetObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolSetTableObj()->realizeToolSet(
			(cfcore::ICFGenKbToolSetObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( retobj ) );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetObj::read( bool forceRead ) {
		cfcore::ICFGenKbToolSetObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolSetTableObj()->readToolSetByIdIdx( getToolSetBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( retobj ) );
	}

	cfcore::ICFGenKbToolSetTableObj* CFGenKbToolSetObj::getToolSetTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolSetTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbToolSetObj::getSchema() {
		return( schema );
	}

	void CFGenKbToolSetObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbToolSetPKey* CFGenKbToolSetObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbToolSetPKey();
		}
		return( pKey );
	}

	void CFGenKbToolSetObj::setPKey( cfcore::CFGenKbToolSetPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbToolSetPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbToolSetObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbToolSetObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbToolSetObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolSetTableObj()->lockToolSet( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getToolSetTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbToolSetEditObj*>( edit ) );
	}

	void CFGenKbToolSetObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetObj::getToolSetEdit() {
		return( dynamic_cast<cfcore::ICFGenKbToolSetEditObj*>( edit ) );
	}

	void CFGenKbToolSetObj::copyPKeyToBuff() {
		cfcore::CFGenKbToolSetPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolSetBuff* tableBuff = getToolSetBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbToolSetObj::copyBuffToPKey() {
		cfcore::CFGenKbToolSetPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolSetBuff* tableBuff = getToolSetBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
