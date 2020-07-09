// Description: C++18 edit object instance implementation for CFGenKb GelReference.

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
#include <cfgenkbobj/CFGenKbGelReferenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelReferenceEditObj.hpp>

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

	const std::string CFGenKbGelReferenceEditObj::CLASS_NAME( "CFGenKbGelReferenceEditObj" );

	CFGenKbGelReferenceEditObj::CFGenKbGelReferenceEditObj( cfcore::ICFGenKbGelReferenceObj* argOrig )
	: ICFGenKbGelReferenceEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelReferenceEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelReferenceEditObj::~CFGenKbGelReferenceEditObj() {
	}

	const std::string& CFGenKbGelReferenceEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelReferenceEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelReferenceBuff::CLASS_CODE );
	}

	bool CFGenKbGelReferenceEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelReferenceEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelReferenceEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_ReferenceName( "ReferenceName" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ReferenceName, CFGenKbGelReferenceEditObj::getRequiredReferenceName() ) );
		if( ! CFGenKbGelReferenceEditObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelReferenceEditObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelReferenceEditObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelReferenceEditObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelReferenceEditObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelReferenceEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelReferenceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelReferenceEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelReferenceEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelReferenceEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelReferenceEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelReferenceEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelReferenceEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelReferenceObj* retobj = getSchema()->getGelReferenceTableObj()->realizeGelReference( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelReferenceEditObj::create() {
		cfcore::ICFGenKbGelReferenceObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelReference()->getSchema() )->getGelReferenceTableObj()->createGelReference( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelReferenceEditObj::update() {
		getSchema()->getGelReferenceTableObj()->updateGelReference( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelReferenceEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelReferenceTableObj()->deleteGelReference( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelReferenceTableObj* CFGenKbGelReferenceEditObj::getGelReferenceTable() {
		return( orig->getSchema()->getGelReferenceTableObj() );
	}

	cfcore::ICFGenKbGelReferenceEditObj* CFGenKbGelReferenceEditObj::getGelReferenceEdit() {
		return( (cfcore::ICFGenKbGelReferenceEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelReferenceEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelReferenceObj* CFGenKbGelReferenceEditObj::getOrigAsGelReference() {
		return( dynamic_cast<cfcore::ICFGenKbGelReferenceObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelReferenceEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelReferenceEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGelReferenceEditObj::getRequiredReferenceName() {
		return( getGelReferenceBuff()->getRequiredReferenceName() );
	}

	const std::string* CFGenKbGelReferenceEditObj::getRequiredReferenceNameReference() {
		return( getGelReferenceBuff()->getRequiredReferenceNameReference() );
	}

	void CFGenKbGelReferenceEditObj::setRequiredReferenceName( const std::string& value ) {
		if( getGelReferenceBuff()->getRequiredReferenceName() != value ) {
			getGelReferenceBuff()->setRequiredReferenceName( value );
		}
	}

	bool CFGenKbGelReferenceEditObj::isOptionalRemainderTenantIdNull() {
		return( getGelReferenceBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelReferenceEditObj::getOptionalRemainderTenantIdValue() {
		return( getGelReferenceBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelReferenceEditObj::getOptionalRemainderTenantIdReference() {
		return( getGelReferenceBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelReferenceEditObj::getRequiredRemainderGelCacheId() {
		return( getGelReferenceBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelReferenceEditObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelReferenceBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelReferenceEditObj::isOptionalRemainderInstIdNull() {
		return( getGelReferenceBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelReferenceEditObj::getOptionalRemainderInstIdValue() {
		return( getGelReferenceBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelReferenceEditObj::getOptionalRemainderInstIdReference() {
		return( getGelReferenceBuff()->getOptionalRemainderInstIdReference() );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelReferenceEditObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelReferenceBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelReferenceBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelReference()->getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelReferenceBuff()->getOptionalRemainderTenantIdValue(),
					getGelReferenceBuff()->getRequiredRemainderGelCacheId(),
					getGelReferenceBuff()->getOptionalRemainderInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelReferenceEditObj::setOptionalLookupRemainder( cfcore::ICFGenKbGelInstructionObj* value ) {
			
			if( value != NULL ) {
				getGelReferenceBuff()->setOptionalRemainderTenantIdValue( value->getRequiredTenantId() );
				getGelReferenceBuff()->setRequiredRemainderGelCacheId( value->getRequiredGelCacheId() );
				getGelReferenceBuff()->setOptionalRemainderInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelReferenceBuff()->setOptionalRemainderTenantIdNull();
				getGelReferenceBuff()->setOptionalRemainderInstIdNull();
			}
		}

	void CFGenKbGelReferenceEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelReferenceBuff* origBuff = getOrigAsGelReference()->getGelReferenceBuff();
		cfcore::CFGenKbGelReferenceBuff* myBuff = getGelReferenceBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelReferenceEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelReferenceBuff* origBuff = getOrigAsGelReference()->getGelReferenceBuff();
		cfcore::CFGenKbGelReferenceBuff* myBuff = getGelReferenceBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelReferenceEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
