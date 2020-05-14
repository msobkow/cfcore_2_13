// Description: C++18 edit object instance implementation for CFGenKb ToolSet.

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
#include <cfgenkbobj/CFGenKbToolSetObj.hpp>
#include <cfgenkbobj/CFGenKbToolSetEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbToolSetEditObj::CLASS_NAME( "CFGenKbToolSetEditObj" );

	CFGenKbToolSetEditObj::CFGenKbToolSetEditObj( cfcore::ICFGenKbToolSetObj* argOrig )
	: ICFGenKbToolSetEditObj()
	{
		static const std::string S_ProcName( "CFGenKbToolSetEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbToolSetBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbToolSetBuff*>( origBuff->clone() );
	}

	CFGenKbToolSetEditObj::~CFGenKbToolSetEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbToolSetEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbToolSetEditObj::getClassCode() const {
		return( cfcore::CFGenKbToolSetBuff::CLASS_CODE );
	}

	bool CFGenKbToolSetEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbToolSetBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbToolSetEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbToolSetEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbToolSetEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbToolSetEditObj::getRequiredName() ) );
		if( ! CFGenKbToolSetEditObj::isOptionalDescrNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Descr, CFGenKbToolSetEditObj::getOptionalDescrValue() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalRevisionStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RevisionString, CFGenKbToolSetEditObj::getOptionalRevisionStringValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSupported, CFGenKbToolSetEditObj::getRequiredIsSupported() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_Generate, CFGenKbToolSetEditObj::getRequiredGenerate() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId0, CFGenKbToolSetEditObj::getRequiredToolId0() ) );
		if( ! CFGenKbToolSetEditObj::isOptionalToolId1Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId1, CFGenKbToolSetEditObj::getOptionalToolId1Value() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalToolId2Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId2, CFGenKbToolSetEditObj::getOptionalToolId2Value() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalToolId3Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId3, CFGenKbToolSetEditObj::getOptionalToolId3Value() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalToolId4Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId4, CFGenKbToolSetEditObj::getOptionalToolId4Value() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalToolId5Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId5, CFGenKbToolSetEditObj::getOptionalToolId5Value() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalToolId6Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId6, CFGenKbToolSetEditObj::getOptionalToolId6Value() ) );
		}
		if( ! CFGenKbToolSetEditObj::isOptionalToolId7Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId7, CFGenKbToolSetEditObj::getOptionalToolId7Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbToolSetEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbToolSetEditObj::setRequiredRevision( int32_t value ) {
		getToolSetBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbToolSetEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbToolSetEditObj::getGenDefName() {
		return( cfcore::CFGenKbToolSetBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbToolSetEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbToolSetEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbToolSetEditObj::getObjQualifiedName() {
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

	std::string CFGenKbToolSetEditObj::getObjFullName() {
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

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbToolSetObj* retobj = getSchema()->getToolSetTableObj()->realizeToolSet( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbToolSetObj* retval = getOrigAsToolSet()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetEditObj::create() {
		cfcore::ICFGenKbToolSetObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolSetTableObj()->createToolSet( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetEditObj::update() {
		getSchema()->getToolSetTableObj()->updateToolSet( this );
		return( NULL );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getToolSetTableObj()->deleteToolSet( this );
		return( NULL );
	}

	cfcore::ICFGenKbToolSetTableObj* CFGenKbToolSetEditObj::getToolSetTable() {
		return( orig->getSchema()->getToolSetTableObj() );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetEditObj::getToolSetEdit() {
		return( (cfcore::ICFGenKbToolSetEditObj*)this );
	}

	cfcore::ICFGenKbToolSetEditObj* CFGenKbToolSetEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbToolSetEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbToolSetObj* CFGenKbToolSetEditObj::getOrigAsToolSet() {
		return( dynamic_cast<cfcore::ICFGenKbToolSetObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbToolSetEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbToolSetBuff* CFGenKbToolSetEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbToolSetEditObj::setBuff( cfcore::CFGenKbToolSetBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbToolSetPKey* CFGenKbToolSetEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbToolSetEditObj::setPKey( cfcore::CFGenKbToolSetPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbToolSetEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbToolSetEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFGenKbToolSetEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbToolSetEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbToolSetEditObj::getRequiredName() {
		return( getToolSetBuff()->getRequiredName() );
	}

	const std::string* CFGenKbToolSetEditObj::getRequiredNameReference() {
		return( getToolSetBuff()->getRequiredNameReference() );
	}

	void CFGenKbToolSetEditObj::setRequiredName( const std::string& value ) {
		if( getToolSetBuff()->getRequiredName() != value ) {
			getToolSetBuff()->setRequiredName( value );
		}
	}

	bool CFGenKbToolSetEditObj::isOptionalDescrNull() {
		return( getToolSetBuff()->isOptionalDescrNull() );
	}

	const std::string& CFGenKbToolSetEditObj::getOptionalDescrValue() {
		return( getToolSetBuff()->getOptionalDescrValue() );
	}

	const std::string* CFGenKbToolSetEditObj::getOptionalDescrReference() {
		return( getToolSetBuff()->getOptionalDescrReference() );
	}

	void CFGenKbToolSetEditObj::setOptionalDescrNull() {
		if( ! getToolSetBuff()->isOptionalDescrNull() ) {
			getToolSetBuff()->setOptionalDescrNull();
		}
	}

	void CFGenKbToolSetEditObj::setOptionalDescrValue( const std::string& value ) {
		if( getToolSetBuff()->isOptionalDescrNull() ) {
			getToolSetBuff()->setOptionalDescrValue( value );
		}
		else if( getToolSetBuff()->getOptionalDescrValue() != value ) {
			getToolSetBuff()->setOptionalDescrValue( value );
		}
	}

	bool CFGenKbToolSetEditObj::isOptionalRevisionStringNull() {
		return( getToolSetBuff()->isOptionalRevisionStringNull() );
	}

	const std::string& CFGenKbToolSetEditObj::getOptionalRevisionStringValue() {
		return( getToolSetBuff()->getOptionalRevisionStringValue() );
	}

	const std::string* CFGenKbToolSetEditObj::getOptionalRevisionStringReference() {
		return( getToolSetBuff()->getOptionalRevisionStringReference() );
	}

	void CFGenKbToolSetEditObj::setOptionalRevisionStringNull() {
		if( ! getToolSetBuff()->isOptionalRevisionStringNull() ) {
			getToolSetBuff()->setOptionalRevisionStringNull();
		}
	}

	void CFGenKbToolSetEditObj::setOptionalRevisionStringValue( const std::string& value ) {
		if( getToolSetBuff()->isOptionalRevisionStringNull() ) {
			getToolSetBuff()->setOptionalRevisionStringValue( value );
		}
		else if( getToolSetBuff()->getOptionalRevisionStringValue() != value ) {
			getToolSetBuff()->setOptionalRevisionStringValue( value );
		}
	}

	const bool CFGenKbToolSetEditObj::getRequiredIsSupported() {
		return( getToolSetBuff()->getRequiredIsSupported() );
	}

	const bool* CFGenKbToolSetEditObj::getRequiredIsSupportedReference() {
		return( getToolSetBuff()->getRequiredIsSupportedReference() );
	}

	void CFGenKbToolSetEditObj::setRequiredIsSupported( const bool value ) {
		if( getToolSetBuff()->getRequiredIsSupported() != value ) {
			getToolSetBuff()->setRequiredIsSupported( value );
		}
	}

	const bool CFGenKbToolSetEditObj::getRequiredGenerate() {
		return( getToolSetBuff()->getRequiredGenerate() );
	}

	const bool* CFGenKbToolSetEditObj::getRequiredGenerateReference() {
		return( getToolSetBuff()->getRequiredGenerateReference() );
	}

	void CFGenKbToolSetEditObj::setRequiredGenerate( const bool value ) {
		if( getToolSetBuff()->getRequiredGenerate() != value ) {
			getToolSetBuff()->setRequiredGenerate( value );
		}
	}

	const int16_t CFGenKbToolSetEditObj::getRequiredToolId0() {
		return( getToolSetBuff()->getRequiredToolId0() );
	}

	const int16_t* CFGenKbToolSetEditObj::getRequiredToolId0Reference() {
		return( getToolSetBuff()->getRequiredToolId0Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId1Null() {
		return( getToolSetBuff()->isOptionalToolId1Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId1Value() {
		return( getToolSetBuff()->getOptionalToolId1Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId1Reference() {
		return( getToolSetBuff()->getOptionalToolId1Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId2Null() {
		return( getToolSetBuff()->isOptionalToolId2Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId2Value() {
		return( getToolSetBuff()->getOptionalToolId2Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId2Reference() {
		return( getToolSetBuff()->getOptionalToolId2Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId3Null() {
		return( getToolSetBuff()->isOptionalToolId3Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId3Value() {
		return( getToolSetBuff()->getOptionalToolId3Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId3Reference() {
		return( getToolSetBuff()->getOptionalToolId3Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId4Null() {
		return( getToolSetBuff()->isOptionalToolId4Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId4Value() {
		return( getToolSetBuff()->getOptionalToolId4Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId4Reference() {
		return( getToolSetBuff()->getOptionalToolId4Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId5Null() {
		return( getToolSetBuff()->isOptionalToolId5Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId5Value() {
		return( getToolSetBuff()->getOptionalToolId5Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId5Reference() {
		return( getToolSetBuff()->getOptionalToolId5Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId6Null() {
		return( getToolSetBuff()->isOptionalToolId6Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId6Value() {
		return( getToolSetBuff()->getOptionalToolId6Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId6Reference() {
		return( getToolSetBuff()->getOptionalToolId6Reference() );
	}

	bool CFGenKbToolSetEditObj::isOptionalToolId7Null() {
		return( getToolSetBuff()->isOptionalToolId7Null() );
	}

	const int16_t CFGenKbToolSetEditObj::getOptionalToolId7Value() {
		return( getToolSetBuff()->getOptionalToolId7Value() );
	}

	const int16_t* CFGenKbToolSetEditObj::getOptionalToolId7Reference() {
		return( getToolSetBuff()->getOptionalToolId7Reference() );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getRequiredLookupTool0( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getRequiredToolId0() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setRequiredLookupTool0( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setRequiredToolId0( value->getRequiredId() );
			}
			else {
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool1( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId1Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId1Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool1( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId1Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId1Null();
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool2( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId2Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId2Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool2( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId2Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId2Null();
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool3( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId3Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId3Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool3( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId3Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId3Null();
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool4( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId4Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId4Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool4( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId4Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId4Null();
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool5( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId5Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId5Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool5( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId5Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId5Null();
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool6( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId6Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId6Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool6( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId6Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId6Null();
			}
		}

	cfcore::ICFGenKbToolObj* CFGenKbToolSetEditObj::getOptionalLookupTool7( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolSetBuff()->isOptionalToolId7Null() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsToolSet()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolSetBuff()->getOptionalToolId7Value() );
		}
		return( retobj );
	}

	void CFGenKbToolSetEditObj::setOptionalLookupTool7( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolSetBuff()->setOptionalToolId7Value( value->getRequiredId() );
			}
			else {
				getToolSetBuff()->setOptionalToolId7Null();
			}
		}

	void CFGenKbToolSetEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbToolSetPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolSetBuff* tableBuff = getToolSetBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbToolSetEditObj::copyBuffToPKey() {
		cfcore::CFGenKbToolSetPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolSetBuff* tableBuff = getToolSetBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbToolSetEditObj::copyBuffToOrig() {
		cfcore::CFGenKbToolSetBuff* origBuff = getOrigAsToolSet()->getToolSetBuff();
		cfcore::CFGenKbToolSetBuff* myBuff = getToolSetBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbToolSetEditObj::copyOrigToBuff() {
		cfcore::CFGenKbToolSetBuff* origBuff = getOrigAsToolSet()->getToolSetBuff();
		cfcore::CFGenKbToolSetBuff* myBuff = getToolSetBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
