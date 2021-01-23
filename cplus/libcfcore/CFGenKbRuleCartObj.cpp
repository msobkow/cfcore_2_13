// Description: C++18 base object instance implementation for CFGenKb RuleCart.

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
#include <cfgenkbobj/CFGenKbRuleCartObj.hpp>

namespace cfcore {

	const std::string CFGenKbRuleCartObj::CLASS_NAME( "CFGenKbRuleCartObj" );
	const classcode_t CFGenKbRuleCartObj::CLASS_CODE = 0xa925L;

	int32_t CFGenKbRuleCartObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbRuleCartObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbRuleCartObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbRuleCartObj::getRequiredId() {
		return( getPKey()->getRequiredId() );
	}

	const int64_t* CFGenKbRuleCartObj::getRequiredIdReference() {
		return( getPKey()->getRequiredIdReference() );
	}

	const std::string& CFGenKbRuleCartObj::getRequiredName() {
		return( getRuleCartBuff()->getRequiredName() );
	}

	const std::string* CFGenKbRuleCartObj::getRequiredNameReference() {
		return( getRuleCartBuff()->getRequiredNameReference() );
	}

	bool CFGenKbRuleCartObj::isOptionalDescrNull() {
		return( getRuleCartBuff()->isOptionalDescrNull() );
	}

	const std::string& CFGenKbRuleCartObj::getOptionalDescrValue() {
		return( getRuleCartBuff()->getOptionalDescrValue() );
	}

	const std::string* CFGenKbRuleCartObj::getOptionalDescrReference() {
		return( getRuleCartBuff()->getOptionalDescrReference() );
	}

	bool CFGenKbRuleCartObj::isOptionalRevisionStringNull() {
		return( getRuleCartBuff()->isOptionalRevisionStringNull() );
	}

	const std::string& CFGenKbRuleCartObj::getOptionalRevisionStringValue() {
		return( getRuleCartBuff()->getOptionalRevisionStringValue() );
	}

	const std::string* CFGenKbRuleCartObj::getOptionalRevisionStringReference() {
		return( getRuleCartBuff()->getOptionalRevisionStringReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbRuleCartObj::getRequiredContainerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	std::vector<cfcore::ICFGenKbGenItemObj*> CFGenKbRuleCartObj::getOptionalComponentsRule( bool forceRead ) {
		std::vector<cfcore::ICFGenKbGenItemObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGenItemTableObj()->readGenItemByCartIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredId(),
			forceRead );
		return( retval );
	}

	CFGenKbRuleCartObj::CFGenKbRuleCartObj()
	: ICFGenKbRuleCartObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbRuleCartObj::CFGenKbRuleCartObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbRuleCartObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbRuleCartObj::~CFGenKbRuleCartObj() {
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

	cfcore::CFGenKbRuleCartBuff* CFGenKbRuleCartObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbRuleCartBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableRuleCart()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredId() );
			}
		}
		return( buff );
	}

	void CFGenKbRuleCartObj::setBuff( cfcore::CFGenKbRuleCartBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbRuleCartObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbRuleCartObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbRuleCartObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbRuleCartBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbRuleCartObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleCartObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_Id( "Id" );
		static const std::string S_Name( "Name" );
		static const std::string S_Descr( "Descr" );
		static const std::string S_RevisionString( "RevisionString" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbRuleCartObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbRuleCartObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, CFGenKbRuleCartObj::getRequiredId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Name, CFGenKbRuleCartObj::getRequiredName() ) );
		if( ! CFGenKbRuleCartObj::isOptionalDescrNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_Descr, CFGenKbRuleCartObj::getOptionalDescrValue() ) );
		}
		if( ! CFGenKbRuleCartObj::isOptionalRevisionStringNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_RevisionString, CFGenKbRuleCartObj::getOptionalRevisionStringValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbRuleCartObj::getObjName() {
		std::string objName( CLASS_NAME );
		objName.clear();
		objName.append( getRequiredName() );
		return( objName );
	}

	const std::string CFGenKbRuleCartObj::getGenDefName() {
		return( cfcore::CFGenKbRuleCartBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartObj::getScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartObj::getObjScope() {
		cfcore::ICFGenKbTenantObj* scope = getRequiredContainerTenant();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbRuleCartObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbRuleCartObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbRuleCartObj::getObjQualifiedName() {
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

	std::string CFGenKbRuleCartObj::getObjFullName() {
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

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartObj::realize() {
		cfcore::ICFGenKbRuleCartObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj()->realizeRuleCart(
			(cfcore::ICFGenKbRuleCartObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( retobj ) );
	}

	cfcore::ICFGenKbRuleCartObj* CFGenKbRuleCartObj::read( bool forceRead ) {
		cfcore::ICFGenKbRuleCartObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj()->readRuleCartByIdIdx( getRuleCartBuff()->getRequiredTenantId(),
		getRuleCartBuff()->getRequiredId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbRuleCartObj*>( retobj ) );
	}

	cfcore::ICFGenKbRuleCartTableObj* CFGenKbRuleCartObj::getRuleCartTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbRuleCartObj::getSchema() {
		return( schema );
	}

	void CFGenKbRuleCartObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbRuleCartPKey* CFGenKbRuleCartObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbRuleCartPKey();
		}
		return( pKey );
	}

	void CFGenKbRuleCartObj::setPKey( cfcore::CFGenKbRuleCartPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbRuleCartPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbRuleCartObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbRuleCartObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbRuleCartObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj()->lockRuleCart( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getRuleCartTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbRuleCartEditObj*>( edit ) );
	}

	void CFGenKbRuleCartObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbRuleCartEditObj* CFGenKbRuleCartObj::getRuleCartEdit() {
		return( dynamic_cast<cfcore::ICFGenKbRuleCartEditObj*>( edit ) );
	}

	void CFGenKbRuleCartObj::copyPKeyToBuff() {
		cfcore::CFGenKbRuleCartPKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleCartBuff* tableBuff = getRuleCartBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredId( tablePKey->getRequiredId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbRuleCartObj::copyBuffToPKey() {
		cfcore::CFGenKbRuleCartPKey* tablePKey = getPKey();
		cfcore::CFGenKbRuleCartBuff* tableBuff = getRuleCartBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredId( tableBuff->getRequiredId() );
	}

}
