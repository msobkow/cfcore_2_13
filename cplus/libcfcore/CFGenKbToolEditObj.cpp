// Description: C++18 edit object instance implementation for CFGenKb Tool.

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
#include <cfgenkbobj/CFGenKbToolObj.hpp>
#include <cfgenkbobj/CFGenKbToolEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbToolEditObj::CLASS_NAME( "CFGenKbToolEditObj" );

	CFGenKbToolEditObj::CFGenKbToolEditObj( cfcore::ICFGenKbToolObj* argOrig )
	: ICFGenKbToolEditObj()
	{
		static const std::string S_ProcName( "CFGenKbToolEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbToolBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbToolBuff*>( origBuff->clone() );
	}

	CFGenKbToolEditObj::~CFGenKbToolEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbToolEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbToolEditObj::getClassCode() const {
		return( cfcore::CFGenKbToolBuff::CLASS_CODE );
	}

	bool CFGenKbToolEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbToolBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbToolEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_ReplacesId( "ReplacesId" );
		static const std::string S_IsSupported( "IsSupported" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbToolEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbToolEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbToolEditObj::getRequiredName() ) );
		if( ! CFGenKbToolEditObj::isOptionalReplacesIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ReplacesId, CFGenKbToolEditObj::getOptionalReplacesIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredBoolean( &S_Space, S_IsSupported, CFGenKbToolEditObj::getRequiredIsSupported() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbToolEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbToolEditObj::setRequiredRevision( int32_t value ) {
		getToolBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbToolEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbToolEditObj::getGenDefName() {
		return( cfcore::CFGenKbToolBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbToolEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbToolEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbToolEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbToolEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbToolEditObj::getObjQualifiedName() {
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

	std::string CFGenKbToolEditObj::getObjFullName() {
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

	cfcore::ICFGenKbToolObj* CFGenKbToolEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbToolObj* retobj = getSchema()->getToolTableObj()->realizeTool( dynamic_cast<cfcore::ICFGenKbToolObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retval = getOrigAsTool()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolEditObj::create() {
		cfcore::ICFGenKbToolObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTool()->getSchema() )->getToolTableObj()->createTool( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolEditObj::update() {
		getSchema()->getToolTableObj()->updateTool( this );
		return( NULL );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getToolTableObj()->deleteTool( this );
		return( NULL );
	}

	cfcore::ICFGenKbToolTableObj* CFGenKbToolEditObj::getToolTable() {
		return( orig->getSchema()->getToolTableObj() );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolEditObj::getToolEdit() {
		return( (cfcore::ICFGenKbToolEditObj*)this );
	}

	cfcore::ICFGenKbToolEditObj* CFGenKbToolEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbToolEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolEditObj::getOrigAsTool() {
		return( dynamic_cast<cfcore::ICFGenKbToolObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbToolEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbToolBuff* CFGenKbToolEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbToolEditObj::setBuff( cfcore::CFGenKbToolBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbToolPKey* CFGenKbToolEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbToolEditObj::setPKey( cfcore::CFGenKbToolPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbToolEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbToolEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFGenKbToolEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbToolEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbToolEditObj::getRequiredName() {
		return( getToolBuff()->getRequiredName() );
	}

	const std::string* CFGenKbToolEditObj::getRequiredNameReference() {
		return( getToolBuff()->getRequiredNameReference() );
	}

	void CFGenKbToolEditObj::setRequiredName( const std::string& value ) {
		if( getToolBuff()->getRequiredName() != value ) {
			getToolBuff()->setRequiredName( value );
		}
	}

	bool CFGenKbToolEditObj::isOptionalReplacesIdNull() {
		return( getToolBuff()->isOptionalReplacesIdNull() );
	}

	const int16_t CFGenKbToolEditObj::getOptionalReplacesIdValue() {
		return( getToolBuff()->getOptionalReplacesIdValue() );
	}

	const int16_t* CFGenKbToolEditObj::getOptionalReplacesIdReference() {
		return( getToolBuff()->getOptionalReplacesIdReference() );
	}

	const bool CFGenKbToolEditObj::getRequiredIsSupported() {
		return( getToolBuff()->getRequiredIsSupported() );
	}

	const bool* CFGenKbToolEditObj::getRequiredIsSupportedReference() {
		return( getToolBuff()->getRequiredIsSupportedReference() );
	}

	void CFGenKbToolEditObj::setRequiredIsSupported( const bool value ) {
		if( getToolBuff()->getRequiredIsSupported() != value ) {
			getToolBuff()->setRequiredIsSupported( value );
		}
	}

	cfcore::ICFGenKbToolObj* CFGenKbToolEditObj::getOptionalLookupReplaces( bool forceRead ) {
		cfcore::ICFGenKbToolObj* retobj = NULL;
		bool anyMissing = false;

			if( getToolBuff()->isOptionalReplacesIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsTool()->getSchema() )->getToolTableObj()->readToolByIdIdx( getToolBuff()->getOptionalReplacesIdValue() );
		}
		return( retobj );
	}

	void CFGenKbToolEditObj::setOptionalLookupReplaces( cfcore::ICFGenKbToolObj* value ) {
			
			if( value != NULL ) {
				getToolBuff()->setOptionalReplacesIdValue( value->getRequiredId() );
			}
			else {
				getToolBuff()->setOptionalReplacesIdNull();
			}
		}

	void CFGenKbToolEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbToolPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolBuff* tableBuff = getToolBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbToolEditObj::copyBuffToPKey() {
		cfcore::CFGenKbToolPKey* tablePKey = getPKey();
		cfcore::CFGenKbToolBuff* tableBuff = getToolBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbToolEditObj::copyBuffToOrig() {
		cfcore::CFGenKbToolBuff* origBuff = getOrigAsTool()->getToolBuff();
		cfcore::CFGenKbToolBuff* myBuff = getToolBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbToolEditObj::copyOrigToBuff() {
		cfcore::CFGenKbToolBuff* origBuff = getOrigAsTool()->getToolBuff();
		cfcore::CFGenKbToolBuff* myBuff = getToolBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
