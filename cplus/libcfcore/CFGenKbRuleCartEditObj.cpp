// Description: C++18 edit object instance implementation for CFGenKb RuleCart.

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
#include <cfgenkbobj/CFGenKbRuleCartObj.hpp>
#include <cfgenkbobj/CFGenKbRuleCartEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbRuleCartEditObj::CLASS_NAME( "CFGenKbRuleCartEditObj" );

	CFGenKbRuleCartEditObj::CFGenKbRuleCartEditObj( cfcore::ICFGenKbRuleCartObj* argOrig )
	: ICFGenKbRuleCartEditObj()
	{
		static const std::string S_ProcName( "CFGenKbRuleCartEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbRuleCartBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbRuleCartBuff*>( origBuff->clone() );
	}

	CFGenKbRuleCartEditObj::~CFGenKbRuleCartEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbRuleCartEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbRuleCartEditObj::getClassCode() const {
		return( cfcore::CFGenKbRuleCartBuff::CLASS_CODE );
	}

	bool CFGenKbRuleCartEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbRuleCartBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbRuleCartEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleCartEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_RevisionString( "RevisionString" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbRuleCartEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbRuleCartEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFGenKbRuleCartEditObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbRuleCartEditObj::getRequiredName() ) );
		if( ! CFGenKbRuleCartEditObj::isOptionalDescrNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Descr, CFGenKbRuleCartEditObj::getOptionalDescrValue() ) );
		}
		if( ! CFGenKbRuleCartEditObj::isOptionalRevisionStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RevisionString, CFGenKbRuleCartEditObj::getOptionalRevisionStringValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbRuleCartEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbRuleCartEditObj::setRequiredRevision( int32_t value ) {
		getRuleCartBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbRuleCartEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbRuleCartEditObj::getGenDefName() {
		return( cfcore::CFGenKbRuleCartBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartEditObj::getScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartEditObj::getObjScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbRuleCartEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbRuleCartEditObj::getObjQualifiedName() {
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

	std::string CFGenKbRuleCartEditObj::getObjFullName() {
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

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbRuleCartObj* retobj = getSchema()->getRuleCartTableObj()->realizeRuleCart( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbRuleCartObj* retval = getOrigAsRuleCart()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartEditObj::create() {
		cfcore::ICFGenKbRuleCartObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsRuleCart()->getSchema() )->getRuleCartTableObj()->createRuleCart( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartEditObj::update() {
		getSchema()->getRuleCartTableObj()->updateRuleCart( this );
		return( NULL );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getRuleCartTableObj()->deleteRuleCart( this );
		return( NULL );
	}

	cfcore::ICFGenKbRuleCartTableObj* CFGenKbRuleCartEditObj::getRuleCartTable() {
		return( orig->getSchema()->getRuleCartTableObj() );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartEditObj::getRuleCartEdit() {
		return( (cfcore::ICFGenKbRuleCartEditObj*)this );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbRuleCartEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartEditObj::getOrigAsRuleCart() {
		return( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbRuleCartEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbRuleCartBuff* CFGenKbRuleCartEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbRuleCartEditObj::setBuff( cfcore::CFGenKbRuleCartBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbRuleCartPKey* CFGenKbRuleCartEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbRuleCartEditObj::setPKey( cfcore::CFGenKbRuleCartPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbRuleCartEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbRuleCartEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbRuleCartEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbRuleCartEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbRuleCartEditObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFGenKbRuleCartEditObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbRuleCartEditObj::getRequiredName() {
		return( getRuleCartBuff()->getRequiredName() );
	}

	const std::string* CFGenKbRuleCartEditObj::getRequiredNameReference() {
		return( getRuleCartBuff()->getRequiredNameReference() );
	}

	void CFGenKbRuleCartEditObj::setRequiredName( const std::string& value ) {
		if( getRuleCartBuff()->getRequiredName() != value ) {
			getRuleCartBuff()->setRequiredName( value );
		}
	}

	bool CFGenKbRuleCartEditObj::isOptionalDescrNull() {
		return( getRuleCartBuff()->isOptionalDescrNull() );
	}

	const std::string& CFGenKbRuleCartEditObj::getOptionalDescrValue() {
		return( getRuleCartBuff()->getOptionalDescrValue() );
	}

	const std::string* CFGenKbRuleCartEditObj::getOptionalDescrReference() {
		return( getRuleCartBuff()->getOptionalDescrReference() );
	}

	void CFGenKbRuleCartEditObj::setOptionalDescrNull() {
		if( ! getRuleCartBuff()->isOptionalDescrNull() ) {
			getRuleCartBuff()->setOptionalDescrNull();
		}
	}

	void CFGenKbRuleCartEditObj::setOptionalDescrValue( const std::string& value ) {
		if( getRuleCartBuff()->isOptionalDescrNull() ) {
			getRuleCartBuff()->setOptionalDescrValue( value );
		}
		else if( getRuleCartBuff()->getOptionalDescrValue() != value ) {
			getRuleCartBuff()->setOptionalDescrValue( value );
		}
	}

	bool CFGenKbRuleCartEditObj::isOptionalRevisionStringNull() {
		return( getRuleCartBuff()->isOptionalRevisionStringNull() );
	}

	const std::string& CFGenKbRuleCartEditObj::getOptionalRevisionStringValue() {
		return( getRuleCartBuff()->getOptionalRevisionStringValue() );
	}

	const std::string* CFGenKbRuleCartEditObj::getOptionalRevisionStringReference() {
		return( getRuleCartBuff()->getOptionalRevisionStringReference() );
	}

	void CFGenKbRuleCartEditObj::setOptionalRevisionStringNull() {
		if( ! getRuleCartBuff()->isOptionalRevisionStringNull() ) {
			getRuleCartBuff()->setOptionalRevisionStringNull();
		}
	}

	void CFGenKbRuleCartEditObj::setOptionalRevisionStringValue( const std::string& value ) {
		if( getRuleCartBuff()->isOptionalRevisionStringNull() ) {
			getRuleCartBuff()->setOptionalRevisionStringValue( value );
		}
		else if( getRuleCartBuff()->getOptionalRevisionStringValue() != value ) {
			getRuleCartBuff()->setOptionalRevisionStringValue( value );
		}
	}

	cfcore::ICFGenKbTenantObj* CFGenKbRuleCartEditObj::getRequiredContainerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsRuleCart()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbRuleCartEditObj::setRequiredContainerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getRuleCartBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbRuleCartEditObj::getOptionalComponentsRule( bool forceRead ) {
		std::vector<cfcore::ICFGenKbGenItemObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsRuleCart()->getSchema() )->getGenItemTableObj()->readGenItemByCartIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	void CFGenKbRuleCartEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbRuleCartPKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleCartBuff* tableBuff = getRuleCartBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredId( tablePKey->getRequiredId() );
	}

	void CFGenKbRuleCartEditObj::copyBuffToPKey() {
		cfcore::CFGenKbRuleCartPKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleCartBuff* tableBuff = getRuleCartBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

	void CFGenKbRuleCartEditObj::copyBuffToOrig() {
		cfcore::CFGenKbRuleCartBuff* origBuff = getOrigAsRuleCart()->getRuleCartBuff();
		cfcore::CFGenKbRuleCartBuff* myBuff = getRuleCartBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbRuleCartEditObj::copyOrigToBuff() {
		cfcore::CFGenKbRuleCartBuff* origBuff = getOrigAsRuleCart()->getRuleCartBuff();
		cfcore::CFGenKbRuleCartBuff* myBuff = getRuleCartBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
