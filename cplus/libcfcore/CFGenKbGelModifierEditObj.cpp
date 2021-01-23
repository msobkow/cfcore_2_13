// Description: C++18 edit object instance implementation for CFGenKb GelModifier.

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
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelModifierObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelModifierEditObj.hpp>

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

	const std::string CFGenKbGelModifierEditObj::CLASS_NAME( "CFGenKbGelModifierEditObj" );

	CFGenKbGelModifierEditObj::CFGenKbGelModifierEditObj( cfcore::ICFGenKbGelModifierObj* argOrig )
	: ICFGenKbGelModifierEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelModifierEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelModifierEditObj::~CFGenKbGelModifierEditObj() {
	}

	const std::string& CFGenKbGelModifierEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelModifierEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelModifierBuff::CLASS_CODE );
	}

	bool CFGenKbGelModifierEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelModifierBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelModifierEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelModifierEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_RemainderTenantId( "RemainderTenantId" );
		static const std::string S_RemainderGelCacheId( "RemainderGelCacheId" );
		static const std::string S_RemainderInstId( "RemainderInstId" );
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
		if( ! CFGenKbGelModifierEditObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelModifierEditObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelModifierEditObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelModifierEditObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelModifierEditObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelModifierEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelModifierBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelModifierEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelModifierEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelModifierEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelModifierEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelModifierEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelModifierEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelModifierObj* retobj = getSchema()->getGelModifierTableObj()->realizeGelModifier( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelModifierEditObj::create() {
		cfcore::ICFGenKbGelModifierObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelModifier()->getSchema() )->getGelModifierTableObj()->createGelModifier( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelModifierEditObj::update() {
		getSchema()->getGelModifierTableObj()->updateGelModifier( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelModifierEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelModifierTableObj()->deleteGelModifier( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelModifierTableObj* CFGenKbGelModifierEditObj::getGelModifierTable() {
		return( orig->getSchema()->getGelModifierTableObj() );
	}

	cfcore::ICFGenKbGelModifierEditObj* CFGenKbGelModifierEditObj::getGelModifierEdit() {
		return( (cfcore::ICFGenKbGelModifierEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelModifierEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelModifierObj* CFGenKbGelModifierEditObj::getOrigAsGelModifier() {
		return( dynamic_cast<cfcore::ICFGenKbGelModifierObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelModifierEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelModifierEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	bool CFGenKbGelModifierEditObj::isOptionalRemainderTenantIdNull() {
		return( getGelModifierBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelModifierEditObj::getOptionalRemainderTenantIdValue() {
		return( getGelModifierBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelModifierEditObj::getOptionalRemainderTenantIdReference() {
		return( getGelModifierBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelModifierEditObj::getRequiredRemainderGelCacheId() {
		return( getGelModifierBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelModifierEditObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelModifierBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelModifierEditObj::isOptionalRemainderInstIdNull() {
		return( getGelModifierBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelModifierEditObj::getOptionalRemainderInstIdValue() {
		return( getGelModifierBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelModifierEditObj::getOptionalRemainderInstIdReference() {
		return( getGelModifierBuff()->getOptionalRemainderInstIdReference() );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelModifierEditObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelModifierBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelModifierBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelModifier()->getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelModifierBuff()->getOptionalRemainderTenantIdValue(),
					getGelModifierBuff()->getRequiredRemainderGelCacheId(),
					getGelModifierBuff()->getOptionalRemainderInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelModifierEditObj::setOptionalLookupRemainder( cfcore::ICFGenKbGelInstructionObj* value ) {
			
			if( value != NULL ) {
				getGelModifierBuff()->setOptionalRemainderTenantIdValue( value->getRequiredTenantId() );
				getGelModifierBuff()->setRequiredRemainderGelCacheId( value->getRequiredGelCacheId() );
				getGelModifierBuff()->setOptionalRemainderInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelModifierBuff()->setOptionalRemainderTenantIdNull();
				getGelModifierBuff()->setOptionalRemainderInstIdNull();
			}
		}

	void CFGenKbGelModifierEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelModifierBuff* origBuff = getOrigAsGelModifier()->getGelModifierBuff();
		cfcore::CFGenKbGelModifierBuff* myBuff = getGelModifierBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelModifierEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelModifierBuff* origBuff = getOrigAsGelModifier()->getGelModifierBuff();
		cfcore::CFGenKbGelModifierBuff* myBuff = getGelModifierBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelModifierEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
