// Description: C++18 edit object instance implementation for CFGenKb RuleType.

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
#include <cfgenkbobj/CFGenKbRuleTypeEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbRuleTypeEditObj::CLASS_NAME( "CFGenKbRuleTypeEditObj" );

	CFGenKbRuleTypeEditObj::CFGenKbRuleTypeEditObj( cfcore::ICFGenKbRuleTypeObj* argOrig )
	: ICFGenKbRuleTypeEditObj()
	{
		static const std::string S_ProcName( "CFGenKbRuleTypeEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbRuleTypeBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbRuleTypeBuff*>( origBuff->clone() );
	}

	CFGenKbRuleTypeEditObj::~CFGenKbRuleTypeEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbRuleTypeEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbRuleTypeEditObj::getClassCode() const {
		return( cfcore::CFGenKbRuleTypeBuff::CLASS_CODE );
	}

	bool CFGenKbRuleTypeEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbRuleTypeBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbRuleTypeEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleTypeEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbRuleTypeEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, CFGenKbRuleTypeEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbRuleTypeEditObj::getRequiredName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbRuleTypeEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbRuleTypeEditObj::setRequiredRevision( int32_t value ) {
		getRuleTypeBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbRuleTypeEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbRuleTypeEditObj::getGenDefName() {
		return( cfcore::CFGenKbRuleTypeBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbRuleTypeEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleTypeEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbRuleTypeEditObj::getObjQualifiedName() {
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

	std::string CFGenKbRuleTypeEditObj::getObjFullName() {
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

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbRuleTypeObj* retobj = getSchema()->getRuleTypeTableObj()->realizeRuleType( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbRuleTypeObj* retval = getOrigAsRuleType()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeEditObj::create() {
		cfcore::ICFGenKbRuleTypeObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsRuleType()->getSchema() )->getRuleTypeTableObj()->createRuleType( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeEditObj::update() {
		getSchema()->getRuleTypeTableObj()->updateRuleType( this );
		return( NULL );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getRuleTypeTableObj()->deleteRuleType( this );
		return( NULL );
	}

	cfcore::ICFGenKbRuleTypeTableObj* CFGenKbRuleTypeEditObj::getRuleTypeTable() {
		return( orig->getSchema()->getRuleTypeTableObj() );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeEditObj::getRuleTypeEdit() {
		return( (cfcore::ICFGenKbRuleTypeEditObj*)this );
	}

	cfcore::ICFGenKbRuleTypeEditObj* CFGenKbRuleTypeEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbRuleTypeEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbRuleTypeObj* CFGenKbRuleTypeEditObj::getOrigAsRuleType() {
		return( dynamic_cast<cfcore::ICFGenKbRuleTypeObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbRuleTypeEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbRuleTypeBuff* CFGenKbRuleTypeEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbRuleTypeEditObj::setBuff( cfcore::CFGenKbRuleTypeBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbRuleTypePKey* CFGenKbRuleTypeEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbRuleTypeEditObj::setPKey( cfcore::CFGenKbRuleTypePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbRuleTypeEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbRuleTypeEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int16_t CFGenKbRuleTypeEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int16_t* CFGenKbRuleTypeEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbRuleTypeEditObj::getRequiredName() {
		return( getRuleTypeBuff()->getRequiredName() );
	}

	const std::string* CFGenKbRuleTypeEditObj::getRequiredNameReference() {
		return( getRuleTypeBuff()->getRequiredNameReference() );
	}

	void CFGenKbRuleTypeEditObj::setRequiredName( const std::string& value ) {
		if( getRuleTypeBuff()->getRequiredName() != value ) {
			getRuleTypeBuff()->setRequiredName( value );
		}
	}

	void CFGenKbRuleTypeEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbRuleTypePKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleTypeBuff* tableBuff = getRuleTypeBuff();
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbRuleTypeEditObj::copyBuffToPKey() {
		cfcore::CFGenKbRuleTypePKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleTypeBuff* tableBuff = getRuleTypeBuff();
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbRuleTypeEditObj::copyBuffToOrig() {
		cfcore::CFGenKbRuleTypeBuff* origBuff = getOrigAsRuleType()->getRuleTypeBuff();
		cfcore::CFGenKbRuleTypeBuff* myBuff = getRuleTypeBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbRuleTypeEditObj::copyOrigToBuff() {
		cfcore::CFGenKbRuleTypeBuff* origBuff = getOrigAsRuleType()->getRuleTypeBuff();
		cfcore::CFGenKbRuleTypeBuff* myBuff = getRuleTypeBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
