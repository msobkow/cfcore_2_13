// Description: C++18 edit object instance implementation for CFGenKb GelInstruction.

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
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>

namespace cfcore {
	class MssCFEngine;
	class MssCFGenContext;
	class MssCFGelCompiler;
	class MssCFGenFileObj;
	class MssCFGenRuleObj;
	class MssCFGenTruncObj;
	class MssCFGenBindObj;
	class MssCFGenReferenceObj;
	class MssCFGenIteratorObj;
}



namespace cfcore {

	const std::string CFGenKbGelInstructionEditObj::CLASS_NAME( "CFGenKbGelInstructionEditObj" );

	CFGenKbGelInstructionEditObj::CFGenKbGelInstructionEditObj( cfcore::ICFGenKbGelInstructionObj* argOrig )
	: ICFGenKbGelInstructionEditObj()
	{
		static const std::string S_ProcName( "CFGenKbGelInstructionEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbGelInstructionBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbGelInstructionBuff*>( origBuff->clone() );
	}

	CFGenKbGelInstructionEditObj::~CFGenKbGelInstructionEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbGelInstructionEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelInstructionEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelInstructionBuff::CLASS_CODE );
	}

	bool CFGenKbGelInstructionEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelInstructionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGelInstructionEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelInstructionEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGelInstructionEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGelInstructionEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, CFGenKbGelInstructionEditObj::getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, CFGenKbGelInstructionEditObj::getRequiredGelInstId() ) );
		if( ! CFGenKbGelInstructionEditObj::isOptionalChainInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstTenantId, CFGenKbGelInstructionEditObj::getOptionalChainInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelInstructionEditObj::isOptionalChainInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelCacheId, CFGenKbGelInstructionEditObj::getOptionalChainInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelInstructionEditObj::isOptionalChainInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ChainInstGelInstId, CFGenKbGelInstructionEditObj::getOptionalChainInstGelInstIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SourceText, CFGenKbGelInstructionEditObj::getRequiredSourceText() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbGelInstructionEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbGelInstructionEditObj::setRequiredRevision( int32_t value ) {
		getGelInstructionBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbGelInstructionEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelInstructionEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelInstructionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionEditObj::getScope() {
		cfcore::ICFGenKbGelCacheObj* scope = getRequiredContainerGelCache();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionEditObj::getObjScope() {
		cfcore::ICFGenKbGelCacheObj* scope = getRequiredContainerGelCache();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelInstructionEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelInstructionEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelInstructionEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelInstructionEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelInstructionObj* retobj = getSchema()->getGelInstructionTableObj()->realizeGelInstruction( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retval = getOrigAsGelInstruction()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionEditObj::create() {
		cfcore::ICFGenKbGelInstructionObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelInstruction()->getSchema() )->getGelInstructionTableObj()->createGelInstruction( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionEditObj::update() {
		getSchema()->getGelInstructionTableObj()->updateGelInstruction( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelInstructionTableObj()->deleteGelInstruction( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionTableObj* CFGenKbGelInstructionEditObj::getGelInstructionTable() {
		return( orig->getSchema()->getGelInstructionTableObj() );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionEditObj::getGelInstructionEdit() {
		return( (cfcore::ICFGenKbGelInstructionEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelInstructionEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbGelInstructionEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionEditObj::getOrigAsGelInstruction() {
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelInstructionEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelInstructionEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelInstructionEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbGelInstructionPKey* CFGenKbGelInstructionEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbGelInstructionEditObj::setPKey( cfcore::CFGenKbGelInstructionPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbGelInstructionEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbGelInstructionEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbGelInstructionEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGelInstructionEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGelInstructionEditObj::getRequiredGelCacheId() {
		return( getPKey()->getRequiredGelCacheId() );
	}

	const int64_t* CFGenKbGelInstructionEditObj::getRequiredGelCacheIdReference() {
		return( getPKey()->getRequiredGelCacheIdReference() );
	}

	const int64_t CFGenKbGelInstructionEditObj::getRequiredGelInstId() {
		return( getPKey()->getRequiredGelInstId() );
	}

	const int64_t* CFGenKbGelInstructionEditObj::getRequiredGelInstIdReference() {
		return( getPKey()->getRequiredGelInstIdReference() );
	}

	bool CFGenKbGelInstructionEditObj::isOptionalChainInstTenantIdNull() {
		return( getGelInstructionBuff()->isOptionalChainInstTenantIdNull() );
	}

	const int64_t CFGenKbGelInstructionEditObj::getOptionalChainInstTenantIdValue() {
		return( getGelInstructionBuff()->getOptionalChainInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelInstructionEditObj::getOptionalChainInstTenantIdReference() {
		return( getGelInstructionBuff()->getOptionalChainInstTenantIdReference() );
	}

	bool CFGenKbGelInstructionEditObj::isOptionalChainInstGelCacheIdNull() {
		return( getGelInstructionBuff()->isOptionalChainInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelInstructionEditObj::getOptionalChainInstGelCacheIdValue() {
		return( getGelInstructionBuff()->getOptionalChainInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelInstructionEditObj::getOptionalChainInstGelCacheIdReference() {
		return( getGelInstructionBuff()->getOptionalChainInstGelCacheIdReference() );
	}

	bool CFGenKbGelInstructionEditObj::isOptionalChainInstGelInstIdNull() {
		return( getGelInstructionBuff()->isOptionalChainInstGelInstIdNull() );
	}

	const int64_t CFGenKbGelInstructionEditObj::getOptionalChainInstGelInstIdValue() {
		return( getGelInstructionBuff()->getOptionalChainInstGelInstIdValue() );
	}

	const int64_t* CFGenKbGelInstructionEditObj::getOptionalChainInstGelInstIdReference() {
		return( getGelInstructionBuff()->getOptionalChainInstGelInstIdReference() );
	}

	const std::string& CFGenKbGelInstructionEditObj::getRequiredSourceText() {
		return( getGelInstructionBuff()->getRequiredSourceText() );
	}

	const std::string* CFGenKbGelInstructionEditObj::getRequiredSourceTextReference() {
		return( getGelInstructionBuff()->getRequiredSourceTextReference() );
	}

	void CFGenKbGelInstructionEditObj::setRequiredSourceText( const std::string& value ) {
		if( getGelInstructionBuff()->getRequiredSourceText() != value ) {
			getGelInstructionBuff()->setRequiredSourceText( value );
		}
	}

	cfcore::ICFGenKbTenantObj* CFGenKbGelInstructionEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelInstruction()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbGelInstructionEditObj::setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getGelInstructionBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelInstructionEditObj::getRequiredContainerGelCache( bool forceRead ) {
		cfcore::ICFGenKbGelCacheObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelInstruction()->getSchema() )->getGelCacheTableObj()->readGelCacheByIdIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredGelCacheId() );
		}
		return( retobj );
	}

	void CFGenKbGelInstructionEditObj::setRequiredContainerGelCache( cfcore::ICFGenKbGelCacheObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getGelInstructionBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getPKey()->setRequiredGelCacheId
( value->getRequiredGelCacheId() );
				getGelInstructionBuff()->setRequiredGelCacheId( value->getRequiredGelCacheId() );
			}
		}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelInstructionEditObj::getOptionalLookupChainInst( bool forceRead ) {
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
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelInstruction()->getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelInstructionBuff()->getOptionalChainInstTenantIdValue(),
					getGelInstructionBuff()->getOptionalChainInstGelCacheIdValue(),
					getGelInstructionBuff()->getOptionalChainInstGelInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelInstructionEditObj::setOptionalLookupChainInst( cfcore::ICFGenKbGelInstructionObj* value ) {
			
			if( value != NULL ) {
				getGelInstructionBuff()->setOptionalChainInstTenantIdValue( value->getRequiredTenantId() );
				getGelInstructionBuff()->setOptionalChainInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelInstructionBuff()->setOptionalChainInstGelInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelInstructionBuff()->setOptionalChainInstTenantIdNull();
				getGelInstructionBuff()->setOptionalChainInstGelCacheIdNull();
				getGelInstructionBuff()->setOptionalChainInstGelInstIdNull();
			}
		}

	void CFGenKbGelInstructionEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbGelInstructionPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelInstructionBuff* tableBuff = getGelInstructionBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredGelCacheId( tablePKey->getRequiredGelCacheId() );
		tableBuff->setRequiredGelInstId( tablePKey->getRequiredGelInstId() );
	}

	void CFGenKbGelInstructionEditObj::copyBuffToPKey() {
		cfcore::CFGenKbGelInstructionPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelInstructionBuff* tableBuff = getGelInstructionBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredGelCacheId( tableBuff->getRequiredGelCacheId() );
		tablePKey->setRequiredGelInstId( tableBuff->getRequiredGelInstId() );
	}

	void CFGenKbGelInstructionEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelInstructionBuff* origBuff = getOrigAsGelInstruction()->getGelInstructionBuff();
		cfcore::CFGenKbGelInstructionBuff* myBuff = getGelInstructionBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelInstructionEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelInstructionBuff* origBuff = getOrigAsGelInstruction()->getGelInstructionBuff();
		cfcore::CFGenKbGelInstructionBuff* myBuff = getGelInstructionBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	void CFGenKbGelInstructionEditObj::linkChainInstruction( ICFGenKbGelInstructionObj* calledInstruction ) {
		static const std::string S_ProcName( "linkChainInstruction" );
		static const std::string S_UsageMsg( "You are not allowed to link chain instructions while this object is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

	void CFGenKbGelInstructionEditObj::addCalledInstruction( ICFGenKbGelCacheObj* gelCache, ICFGenKbGelInstructionObj* calledInstruction ) {
		static const std::string S_ProcName( "addCalledInstruction" );
		static const std::string S_UsageMsg( "You are not allowed to add called instructions while this object is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

	std::string CFGenKbGelInstructionEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
