// Description: C++18 base object instance implementation for CFGenKb GelCache.

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
#include <cfgenkbobj/CFGenKbGelCacheObj.hpp>

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

	const std::string CFGenKbGelCacheObj::CLASS_NAME( "CFGenKbGelCacheObj" );
	const classcode_t CFGenKbGelCacheObj::CLASS_CODE = 0xa915L;

	int32_t CFGenKbGelCacheObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	const int64_t CFGenKbGelCacheObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGelCacheObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGelCacheObj::getRequiredGelCacheId() {
		return( getPKey()->getRequiredGelCacheId() );
	}

	const int64_t* CFGenKbGelCacheObj::getRequiredGelCacheIdReference() {
		return( getPKey()->getRequiredGelCacheIdReference() );
	}

	const std::string& CFGenKbGelCacheObj::getRequiredCacheName() {
		return( getGelCacheBuff()->getRequiredCacheName() );
	}

	const std::string* CFGenKbGelCacheObj::getRequiredCacheNameReference() {
		return( getGelCacheBuff()->getRequiredCacheNameReference() );
	}


	cfcore::ICFGenKbTenantObj* CFGenKbGelCacheObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelCacheObj::CFGenKbGelCacheObj()
	: ICFGenKbGelCacheObj()
	{
		schema = NULL;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGelCacheObj::CFGenKbGelCacheObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelCacheObj()
	{
		schema = argSchema;
		pKey = NULL;
		buff = NULL;
		isNew = true;
		edit = NULL;
	}

	CFGenKbGelCacheObj::~CFGenKbGelCacheObj() {
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

	cfcore::CFGenKbGelCacheBuff* CFGenKbGelCacheObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelCacheBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCache()->readDerivedByIdIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelCacheObj::setBuff( cfcore::CFGenKbGelCacheBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelCacheObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelCacheObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelCacheObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelCacheBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGelCacheObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCacheObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_CacheName( "CacheName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGelCacheObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGelCacheObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, CFGenKbGelCacheObj::getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_CacheName, CFGenKbGelCacheObj::getRequiredCacheName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelCacheObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelCacheId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelCacheObj::getGenDefName() {
		return( cfcore::CFGenKbGelCacheBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelCacheObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCacheObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelCacheObj::getObjQualifiedName() {
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

	std::string CFGenKbGelCacheObj::getObjFullName() {
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

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheObj::realize() {
		cfcore::ICFGenKbGelCacheObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCacheTableObj()->realizeGelCache(
			(cfcore::ICFGenKbGelCacheObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelCacheObj* CFGenKbGelCacheObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelCacheObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCacheTableObj()->readGelCacheByIdIdx( getGelCacheBuff()->getRequiredTenantId(),
		getGelCacheBuff()->getRequiredGelCacheId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelCacheObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelCacheTableObj* CFGenKbGelCacheObj::getGelCacheTable() {
		return( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCacheTableObj() );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelCacheObj::getSchema() {
		return( schema );
	}

	void CFGenKbGelCacheObj::setSchema( cfcore::ICFGenKbSchemaObj* value ) {
		schema = value;
	}

	cfcore::CFGenKbGelCachePKey* CFGenKbGelCacheObj::getPKey() {
		if( pKey == NULL ) {
			pKey = new cfcore::CFGenKbGelCachePKey();
		}
		return( pKey );
	}

	void CFGenKbGelCacheObj::setPKey( cfcore::CFGenKbGelCachePKey* value ) {
		if( ( pKey != NULL ) && ( pKey != value ) ) {
			delete pKey;
			pKey = NULL;
		}
		if( value != NULL ) {
			pKey = new cfcore::CFGenKbGelCachePKey();
			*pKey = *value;
			copyPKeyToBuff();
		}
	}

	bool CFGenKbGelCacheObj::getIsNew() {
		return( isNew );
	}

	void CFGenKbGelCacheObj::setIsNew( bool value ) {
		isNew = value;
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelCacheObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCacheTableObj()->lockGelCache( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCacheTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelCacheEditObj*>( edit ) );
	}

	void CFGenKbGelCacheObj::endEdit() {
		if( edit != NULL ) {
			delete edit;
			edit = NULL;
		}
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheObj::getEdit() {
		return( edit );
	}

	cfcore::ICFGenKbGelCacheEditObj* CFGenKbGelCacheObj::getGelCacheEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelCacheEditObj*>( edit ) );
	}

	void CFGenKbGelCacheObj::copyPKeyToBuff() {
		cfcore::CFGenKbGelCachePKey* tablePKey = getPKey();
		cfcore::CFGenKbGelCacheBuff* tableBuff = getGelCacheBuff();
		if( tableBuff != NULL ) {
			tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
			tableBuff->setRequiredGelCacheId( tablePKey->getRequiredGelCacheId() );
		}
		if( edit != NULL ) {
			edit->copyPKeyToBuff();
		}
	}

	void CFGenKbGelCacheObj::copyBuffToPKey() {
		cfcore::CFGenKbGelCachePKey* tablePKey = getPKey();
		cfcore::CFGenKbGelCacheBuff* tableBuff = getGelCacheBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredGelCacheId( tableBuff->getRequiredGelCacheId() );
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

	CFGenKbGelCacheObj::CFGenKbGelCacheObj( ICFGenKbTenantObj* tenant ) {
		if( tenant != NULL ) {
			schema = tenant->getSchema();
			pKey = NULL;
			buff = NULL;
			isNew = true;
			edit = NULL;
			getBuff()->setRequiredTenantId( tenant->getRequiredId() );
		}
		else {
			schema = NULL;
			pKey = NULL;
			buff = NULL;
			isNew = true;
			edit = NULL;
		}
	}

	ICFGenKbGelInstructionObj* CFGenKbGelCacheObj::lookupMacro( const std::string& macroBody ) {
		cfcore::ICFGenKbGelInstructionObj* gel = NULL;
		auto searchMacro = mapMacro.find( macroBody );
		if( searchMacro != mapMacro.end() ) {
			gel = searchMacro->second;
		}
		return( gel );
	}

	ICFGenKbGelInstructionObj* CFGenKbGelCacheObj::rememberMacro( const std::string& macroBody, ICFGenKbGelInstructionObj* gel ) {
		ICFGenKbGelInstructionObj* found;
		auto searchMacro = mapMacro.find( macroBody );
		if( searchMacro != mapMacro.end() ) {
			found = searchMacro->second;
		}
		else {
			mapMacro.insert( std::map< std::string, ICFGenKbGelInstructionObj* >::value_type( macroBody, gel ) );
			found = gel;
		}
		return( found );
	}

	ICFGenKbGelExecutableObj* CFGenKbGelCacheObj::lookupExecutable( const std::string& execName ) {
		cfcore::ICFGenKbGelExecutableObj* gel = NULL;
		auto searchExecutable = mapExecutable.find( execName );
		if( searchExecutable != mapExecutable.end() ) {
			gel = searchExecutable->second;
		}
		return( gel );
	}

	ICFGenKbGelExecutableObj* CFGenKbGelCacheObj::rememberExecutable( const std::string& execName, ICFGenKbGelExecutableObj* gel ) {
		ICFGenKbGelExecutableObj* found;
		auto searchExecutable = mapExecutable.find( execName );
		if( searchExecutable != mapExecutable.end() ) {
			found = searchExecutable->second;
		}
		else {
			mapExecutable.insert( std::map< std::string, ICFGenKbGelExecutableObj* >::value_type( execName, gel ) );
			found = gel;
		}
		return( found );
	}

}
