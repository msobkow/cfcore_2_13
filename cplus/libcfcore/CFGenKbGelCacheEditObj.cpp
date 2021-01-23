// Description: C++18 edit object instance implementation for CFGenKb GelCache.

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
#include <cfgenkbobj/CFGenKbGelCacheObj.hpp>
#include <cfgenkbobj/CFGenKbGelCacheEditObj.hpp>

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

	const std::string CFGenKbGelCacheEditObj::CLASS_NAME( "CFGenKbGelCacheEditObj" );

	CFGenKbGelCacheEditObj::CFGenKbGelCacheEditObj( cfcore::ICFGenKbGelCacheObj* argOrig )
	: ICFGenKbGelCacheEditObj()
	{
		static const std::string S_ProcName( "CFGenKbGelCacheEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbGelCacheBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbGelCacheBuff*>( origBuff->clone() );
	}

	CFGenKbGelCacheEditObj::~CFGenKbGelCacheEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbGelCacheEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelCacheEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelCacheBuff::CLASS_CODE );
	}

	bool CFGenKbGelCacheEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGelCacheEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCacheEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_CacheName( "CacheName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGelCacheEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGelCacheEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, CFGenKbGelCacheEditObj::getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CacheName, CFGenKbGelCacheEditObj::getRequiredCacheName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbGelCacheEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbGelCacheEditObj::setRequiredRevision( int32_t value ) {
		getGelCacheBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbGelCacheEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int64_t val = getRequiredGelCacheId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelCacheEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelCacheBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelCacheEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelCacheEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelCacheEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelCacheObj* retobj = getSchema()->getGelCacheTableObj()->realizeGelCache( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelCacheObj* retval = getOrigAsGelCache()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheEditObj::create() {
		cfcore::ICFGenKbGelCacheObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCache()->getSchema() )->getGelCacheTableObj()->createGelCache( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheEditObj::update() {
		getSchema()->getGelCacheTableObj()->updateGelCache( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelCacheTableObj()->deleteGelCache( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelCacheTableObj* CFGenKbGelCacheEditObj::getGelCacheTable() {
		return( orig->getSchema()->getGelCacheTableObj() );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheEditObj::getGelCacheEdit() {
		return( (cfcore::ICFGenKbGelCacheEditObj*)this );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbGelCacheEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheEditObj::getOrigAsGelCache() {
		return( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelCacheEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbGelCacheBuff* CFGenKbGelCacheEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelCacheEditObj::setBuff( cfcore::CFGenKbGelCacheBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbGelCachePKey* CFGenKbGelCacheEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbGelCacheEditObj::setPKey( cfcore::CFGenKbGelCachePKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbGelCacheEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbGelCacheEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbGelCacheEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGelCacheEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGelCacheEditObj::getRequiredGelCacheId() {
		return( getPKey()->getRequiredGelCacheId() );
	}

	const int64_t* CFGenKbGelCacheEditObj::getRequiredGelCacheIdReference() {
		return( getPKey()->getRequiredGelCacheIdReference() );
	}

	const std::string& CFGenKbGelCacheEditObj::getRequiredCacheName() {
		return( getGelCacheBuff()->getRequiredCacheName() );
	}

	const std::string* CFGenKbGelCacheEditObj::getRequiredCacheNameReference() {
		return( getGelCacheBuff()->getRequiredCacheNameReference() );
	}

	void CFGenKbGelCacheEditObj::setRequiredCacheName( const std::string& value ) {
		if( getGelCacheBuff()->getRequiredCacheName() != value ) {
			getGelCacheBuff()->setRequiredCacheName( value );
		}
	}

	cfcore::ICFGenKbTenantObj* CFGenKbGelCacheEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCache()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbGelCacheEditObj::setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getGelCacheBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	void CFGenKbGelCacheEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbGelCachePKey* tablePKey = getPKey();
		cfcore::CFGenKbGelCacheBuff* tableBuff = getGelCacheBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredGelCacheId( tablePKey->getRequiredGelCacheId() );
	}

	void CFGenKbGelCacheEditObj::copyBuffToPKey() {
		cfcore::CFGenKbGelCachePKey* tablePKey = getPKey();
		cfcore::CFGenKbGelCacheBuff* tableBuff = getGelCacheBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredGelCacheId( tableBuff->getRequiredGelCacheId() );
	}

	void CFGenKbGelCacheEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelCacheBuff* origBuff = getOrigAsGelCache()->getGelCacheBuff();
		cfcore::CFGenKbGelCacheBuff* myBuff = getGelCacheBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelCacheEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelCacheBuff* origBuff = getOrigAsGelCache()->getGelCacheBuff();
		cfcore::CFGenKbGelCacheBuff* myBuff = getGelCacheBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	ICFGenKbGelInstructionObj* CFGenKbGelCacheEditObj::lookupMacro( const std::string& macroBody ) {
		static const std::string S_ProcName( "lookupMacro" );
		static const std::string S_UsageMsg( "You are not allowed to manipulate macros while the cache is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

	ICFGenKbGelInstructionObj* CFGenKbGelCacheEditObj::rememberMacro( const std::string& macroBody, ICFGenKbGelInstructionObj* gel ) {
		static const std::string S_ProcName( "rememberMacro" );
		static const std::string S_UsageMsg( "You are not allowed to manipulate macros while the cache is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

	ICFGenKbGelExecutableObj* CFGenKbGelCacheEditObj::lookupExecutable( const std::string& execName ) {
		static const std::string S_ProcName( "lookupExecutable" );
		static const std::string S_UsageMsg( "You are not allowed to manipulate macros while the cache is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

	ICFGenKbGelExecutableObj* CFGenKbGelCacheEditObj::rememberExecutable( const std::string& execName, ICFGenKbGelExecutableObj* gel ) {
		static const std::string S_ProcName( "rememberExecutable" );
		static const std::string S_UsageMsg( "You are not allowed to manipulate macros while the cache is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
