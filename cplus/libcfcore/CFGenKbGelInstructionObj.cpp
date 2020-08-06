// Description: C++18 base object instance implementation for CFGenKb GelInstruction.

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
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>

namespace cfcore {
	class MssCFEngine;
	class MssCFGenContext;
	class MssCFGelCompilert;
	class MssCFGenFileObjt;
	class MssCFGenRuleObjt;
	class MssCFGenTruncObjt;
	class MssCFGenBindObj;
	class MssCFGenReferenceObj;
	class MssCFGenIteratorObj;
}


namespace cfcore {

	const std::string CFGenKbGelInstructionObj::CLASS_NAME( "CFGenKbGelInstructionObj" );
	const classcode_t CFGenKbGelInstructionObj::CLASS_CODE = 0xa916L;

	int32_t CFGenKbGelInstructionObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbGelInstructionObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGelInstructionObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGelInstructionObj::getRequiredGelCacheId() {
		return( getPKey()->getRequiredGelCacheId() );
	}

	const int64_t* CFGenKbGelInstructionObj::getRequiredGelCacheIdReference() {
		return( getPKey()->getRequiredGelCacheIdReference() );
	}

	const int64_t CFGenKbGelInstructionObj::getRequiredGelInstId() {
		return( getPKey()->getRequiredGelInstId() );
	}

	const int64_t* CFGenKbGelInstructionObj::getRequiredGelInstIdReference() {
		return( getPKey()->getRequiredGelInstIdReference() );
	}

	bool CFGenKbGelInstructionObj::isOptionalChainInstTenantIdNull() {
		return( getGelInstructionBuff()->isOptionalChainInstTenantIdNull() );
	}

	const int64_t CFGenKbGelInstructionObj::getOptionalChainInstTenantIdValue() {
		return( getGelInstructionBuff()->getOptionalChainInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelInstructionObj::getOptionalChainInstTenantIdReference() {
		return( getGelInstructionBuff()->getOptionalChainInstTenantIdReference() );
	}

	bool CFGenKbGelInstructionObj::isOptionalChainInstGelCacheIdNull() {
		return( getGelInstructionBuff()->isOptionalChainInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelInstructionObj::getOptionalChainInstGelCacheIdValue() {
		return( getGelInstructionBuff()->getOptionalChainInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelInstructionObj::getOptionalChainInstGelCacheIdReference() {
		return( getGelInstructionBuff()->getOptionalChainInstGelCacheIdReference() );
	}

	bool CFGenKbGelInstructionObj::isOptionalChainInstGelInstIdNull() {
		return( getGelInstructionBuff()->isOptionalChainInstGelInstIdNull() );
	}

	const int64_t CFGenKbGelInstructionObj::getOptionalChainInstGelInstIdValue() {
		return( getGelInstructionBuff()->getOptionalChainInstGelInstIdValue() );
	}

	const int64_t* CFGenKbGelInstructionObj::getOptionalChainInstGelInstIdReference() {
		return( getGelInstructionBuff()->getOptionalChainInstGelInstIdReference() );
	}

	const std::string& CFGenKbGelInstructionObj::getRequiredSourceText() {
		return( getGelInstructionBuff()->getRequiredSourceText() );
	}

	const std::string* CFGenKbGelInstructionObj::getRequiredSourceTextReference() {
		return( getGelInstructionBuff()->getRequiredSourceTextReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbGelInstructionObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelInstructionObj::getRequiredContainerGelCache( bool forceRead ) {
		cfcore::ICFGenKbGelCacheObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCacheTableObj()->readGelCacheByIdIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredGelCacheId(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionObj::getOptionalLookupChainInst( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;
			if( getGelInstructionBuff()->isOptionalChainInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelInstructionBuff()->isOptionalChainInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelInstructionBuff()->isOptionalChainInstGelInstIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelInstructionBuff()->getOptionalChainInstTenantIdValue(),
					getGelInstructionBuff()->getOptionalChainInstGelCacheIdValue(),
					getGelInstructionBuff()->getOptionalChainInstGelInstIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelInstructionObj::CFGenKbGelInstructionObj()
	: ICFGenKbGelInstructionObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGelInstructionObj::CFGenKbGelInstructionObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelInstructionObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGelInstructionObj::~CFGenKbGelInstructionObj() {
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

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelInstructionObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelInstructionBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelInstruction()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelInstructionObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelInstructionObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelInstructionObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelInstructionObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGelInstructionObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelInstructionObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGelInstructionObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGelInstructionObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, CFGenKbGelInstructionObj::getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, CFGenKbGelInstructionObj::getRequiredGelInstId() ) );
		if( ! CFGenKbGelInstructionObj::isOptionalChainInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstTenantId, CFGenKbGelInstructionObj::getOptionalChainInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelInstructionObj::isOptionalChainInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelCacheId, CFGenKbGelInstructionObj::getOptionalChainInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelInstructionObj::isOptionalChainInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelInstId, CFGenKbGelInstructionObj::getOptionalChainInstGelInstIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceText, CFGenKbGelInstructionObj::getRequiredSourceText() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelInstructionObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelInstructionObj::getGenDefName() {
		return( cfcore::CFGenKbGelInstructionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionObj::getScope() {
		cfcore::ICFGenKbGelCacheObj* scope = getRequiredContainerGelCache();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionObj::getObjScope() {
		cfcore::ICFGenKbGelCacheObj* scope = getRequiredContainerGelCache();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelInstructionObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelInstructionObj::getObjQualifiedName() {
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

	std::string CFGenKbGelInstructionObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionObj::realize() {
		cfcore::ICFGenKbGelInstructionObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->realizeGelInstruction(
			(cfcore::ICFGenKbGelInstructionObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelInstructionBuff()->getRequiredTenantId(),
		getGelInstructionBuff()->getRequiredGelCacheId(),
		getGelInstructionBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionTableObj* CFGenKbGelInstructionObj::getGelInstructionTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelInstructionObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelInstructionObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbGelInstructionPKey* CFGenKbGelInstructionObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbGelInstructionPKey();
		}
		return( pKey );
	}

	void CFGenKbGelInstructionObj::setPKey( cfcore::CFGenKbGelInstructionPKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbGelInstructionPKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbGelInstructionObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbGelInstructionObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelInstructionObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->lockGelInstruction( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	void CFGenKbGelInstructionObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionObj::getGelInstructionEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	void CFGenKbGelInstructionObj::copyPKeyToBuff() {
		cfcore::CFGenKbGelInstructionPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelInstructionBuff* tableBuff = getGelInstructionBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredGelCacheId( tablePKey->getRequiredGelCacheId() );
			tableBuff->setRequiredGelInstId( tablePKey->getRequiredGelInstId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbGelInstructionObj::copyBuffToPKey() {
		cfcore::CFGenKbGelInstructionPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelInstructionBuff* tableBuff = getGelInstructionBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredGelCacheId( tableBuff->getRequiredGelCacheId() );
		tablePKey->setRequiredGelInstId( tableBuff->getRequiredGelInstId() );
	}

}

#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>
#include <msscf/MssCFGelCompiler.hpp>
#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFGenRuleObj.hpp>
#include <msscf/MssCFGenTruncObj.hpp>
#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>

namespace cfcore {

	void CFGenKbGelInstructionObj::linkChainInstruction( ICFGenKbGelInstructionObj* calledInstruction ) {
		static const std::string S_ProcName( "linkChainInstruction" );
		static const std::string S_ChainInstAlreadySet( "ChainInst lookup already set for instruction " );
		if( NULL != getOptionalLookupChainInst() ) {
			std::string msg( S_ChainInstAlreadySet );
			msg.append( getPKey()->toString() );
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, msg );
		}
		ICFGenKbGelInstructionEditObj* editSelf = dynamic_cast<ICFGenKbGelInstructionEditObj*>( beginEdit() );
		editSelf->setOptionalLookupChainInst( calledInstruction );
		editSelf->update();
		editSelf = NULL;
	}

	void CFGenKbGelInstructionObj::addCalledInstruction( ICFGenKbGelCacheObj* gelCache, ICFGenKbGelInstructionObj* calledInstruction ) {
		static const std::string S_ProcName( "addCalledInstruction" );
		static const std::string S_ChainInstAlreadySet( "ChainInst lookup already set for instruction " );
		if( NULL != getOptionalLookupChainInst() ) {
			std::string msg( S_ChainInstAlreadySet );
			msg.append( getPKey()->toString() );
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, msg );
		}
		ICFGenKbGelInstructionEditObj* editSelf = dynamic_cast<ICFGenKbGelInstructionEditObj*>( beginEdit() );
		editSelf->setOptionalLookupChainInst( calledInstruction );
		editSelf->update();
		editSelf = NULL;
	}

	std::string CFGenKbGelInstructionObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_Msg( "Implementation must be overridden by Instruction specialization" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName, S_Msg );
	}

}
