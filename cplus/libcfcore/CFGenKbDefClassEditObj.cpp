// Description: C++18 edit object instance implementation for CFGenKb DefClass.

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
#include <cfgenkbobj/CFGenKbDefClassObj.hpp>
#include <cfgenkbobj/CFGenKbDefClassEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbDefClassEditObj::CLASS_NAME( "CFGenKbDefClassEditObj" );

	CFGenKbDefClassEditObj::CFGenKbDefClassEditObj( cfcore::ICFGenKbDefClassObj* argOrig )
	: ICFGenKbDefClassEditObj()
	{
		static const std::string S_ProcName( "CFGenKbDefClassEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbDefClassBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbDefClassBuff*>( origBuff->clone() );
	}

	CFGenKbDefClassEditObj::~CFGenKbDefClassEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbDefClassEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbDefClassEditObj::getClassCode() const {
		return( cfcore::CFGenKbDefClassBuff::CLASS_CODE );
	}

	bool CFGenKbDefClassEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbDefClassBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbDefClassEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbDefClassEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_BaseId( "BaseId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbDefClassEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbDefClassEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbDefClassEditObj::getRequiredName() ) );
		if( ! CFGenKbDefClassEditObj::isOptionalBaseIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_BaseId, CFGenKbDefClassEditObj::getOptionalBaseIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbDefClassEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbDefClassEditObj::setRequiredRevision( int32_t value ) {
		getDefClassBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbDefClassEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbDefClassEditObj::getGenDefName() {
		return( cfcore::CFGenKbDefClassBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbDefClassEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbDefClassEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbDefClassEditObj::getObjQualifiedName() {
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

	std::string CFGenKbDefClassEditObj::getObjFullName() {
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

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbDefClassObj* retobj = getSchema()->getDefClassTableObj()->realizeDefClass( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retval = getOrigAsDefClass()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassEditObj::create() {
		cfcore::ICFGenKbDefClassObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsDefClass()->getSchema() )->getDefClassTableObj()->createDefClass( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassEditObj::update() {
		getSchema()->getDefClassTableObj()->updateDefClass( this );
		return( NULL );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getDefClassTableObj()->deleteDefClass( this );
		return( NULL );
	}

	cfcore::ICFGenKbDefClassTableObj* CFGenKbDefClassEditObj::getDefClassTable() {
		return( orig->getSchema()->getDefClassTableObj() );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassEditObj::getDefClassEdit() {
		return( (cfcore::ICFGenKbDefClassEditObj*)this );
	}

	cfcore::ICFGenKbDefClassEditObj* CFGenKbDefClassEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbDefClassEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassEditObj::getOrigAsDefClass() {
		return( dynamic_cast<cfcore::ICFGenKbDefClassObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbDefClassEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbDefClassBuff* CFGenKbDefClassEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbDefClassEditObj::setBuff( cfcore::CFGenKbDefClassBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbDefClassPKey* CFGenKbDefClassEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbDefClassEditObj::setPKey( cfcore::CFGenKbDefClassPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbDefClassEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbDefClassEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFGenKbDefClassEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbDefClassEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbDefClassEditObj::getRequiredName() {
		return( getDefClassBuff()->getRequiredName() );
	}

	const std::string* CFGenKbDefClassEditObj::getRequiredNameReference() {
		return( getDefClassBuff()->getRequiredNameReference() );
	}

	void CFGenKbDefClassEditObj::setRequiredName( const std::string& value ) {
		if( getDefClassBuff()->getRequiredName() != value ) {
			getDefClassBuff()->setRequiredName( value );
		}
	}

	bool CFGenKbDefClassEditObj::isOptionalBaseIdNull() {
		return( getDefClassBuff()->isOptionalBaseIdNull() );
	}

	const int16_t CFGenKbDefClassEditObj::getOptionalBaseIdValue() {
		return( getDefClassBuff()->getOptionalBaseIdValue() );
	}

	const int16_t* CFGenKbDefClassEditObj::getOptionalBaseIdReference() {
		return( getDefClassBuff()->getOptionalBaseIdReference() );
	}

	cfcore::ICFGenKbDefClassObj* CFGenKbDefClassEditObj::getOptionalParentBaseDefClass( bool forceRead ) {
		cfcore::ICFGenKbDefClassObj* retobj = NULL;
		bool anyMissing = false;

			if( getDefClassBuff()->isOptionalBaseIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsDefClass()->getSchema() )->getDefClassTableObj()->readDefClassByIdIdx( getDefClassBuff()->getOptionalBaseIdValue() );
		}
		return( retobj );
	}

	void CFGenKbDefClassEditObj::setOptionalParentBaseDefClass( cfcore::ICFGenKbDefClassObj* value ) {
			
			if( value != NULL ) {
				getDefClassBuff()->setOptionalBaseIdValue( value->getRequiredId() );
			}
			else {
				getDefClassBuff()->setOptionalBaseIdNull();
			}
		}

	void CFGenKbDefClassEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbDefClassPKey* tablePKey = getPKey();
		cfcore::CFGenKbDefClassBuff* tableBuff = getDefClassBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbDefClassEditObj::copyBuffToPKey() {
		cfcore::CFGenKbDefClassPKey* tablePKey = getPKey();
		cfcore::CFGenKbDefClassBuff* tableBuff = getDefClassBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbDefClassEditObj::copyBuffToOrig() {
		cfcore::CFGenKbDefClassBuff* origBuff = getOrigAsDefClass()->getDefClassBuff();
		cfcore::CFGenKbDefClassBuff* myBuff = getDefClassBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbDefClassEditObj::copyOrigToBuff() {
		cfcore::CFGenKbDefClassBuff* origBuff = getOrigAsDefClass()->getDefClassBuff();
		cfcore::CFGenKbDefClassBuff* myBuff = getDefClassBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
