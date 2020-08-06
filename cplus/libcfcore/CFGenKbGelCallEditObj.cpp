// Description: C++18 edit object instance implementation for CFGenKb GelCall.

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
#include <cfgenkbobj/CFGenKbGelCallObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelCallEditObj.hpp>

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

	const std::string CFGenKbGelCallEditObj::CLASS_NAME( "CFGenKbGelCallEditObj" );

	CFGenKbGelCallEditObj::CFGenKbGelCallEditObj( cfcore::ICFGenKbGelCallObj* argOrig )
	: ICFGenKbGelCallEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelCallEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelCallEditObj::~CFGenKbGelCallEditObj() {
	}

	const std::string& CFGenKbGelCallEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelCallEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelCallBuff::CLASS_CODE );
	}

	bool CFGenKbGelCallEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelCallEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_SeqInstTenantId( "SeqInstTenantId" );
		static const std::string S_SeqInstGelCacheId( "SeqInstGelCacheId" );
		static const std::string S_SeqInstId( "SeqInstId" );
		static const std::string S_CallInstTenantId( "CallInstTenantId" );
		static const std::string S_CallInstGelCacheId( "CallInstGelCacheId" );
		static const std::string S_CallInstId( "CallInstId" );
		static const std::string S_PrevInstTenantId( "PrevInstTenantId" );
		static const std::string S_PrevInstGelCacheId( "PrevInstGelCacheId" );
		static const std::string S_PrevInstGelInstId( "PrevInstGelInstId" );
		static const std::string S_NextInstTenantId( "NextInstTenantId" );
		static const std::string S_NextInstGelCacheId( "NextInstGelCacheId" );
		static const std::string S_NextInstGelInstId( "NextInstGelInstId" );
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
		if( ! CFGenKbGelCallEditObj::isOptionalSeqInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstTenantId, CFGenKbGelCallEditObj::getOptionalSeqInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalSeqInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstGelCacheId, CFGenKbGelCallEditObj::getOptionalSeqInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalSeqInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstId, CFGenKbGelCallEditObj::getOptionalSeqInstIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalCallInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstTenantId, CFGenKbGelCallEditObj::getOptionalCallInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalCallInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstGelCacheId, CFGenKbGelCallEditObj::getOptionalCallInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalCallInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstId, CFGenKbGelCallEditObj::getOptionalCallInstIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalPrevInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstTenantId, CFGenKbGelCallEditObj::getOptionalPrevInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalPrevInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelCacheId, CFGenKbGelCallEditObj::getOptionalPrevInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalPrevInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelInstId, CFGenKbGelCallEditObj::getOptionalPrevInstGelInstIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalNextInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstTenantId, CFGenKbGelCallEditObj::getOptionalNextInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalNextInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelCacheId, CFGenKbGelCallEditObj::getOptionalNextInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallEditObj::isOptionalNextInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelInstId, CFGenKbGelCallEditObj::getOptionalNextInstGelInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelCallEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelCallBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCallEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelCallEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCallEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelCallEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelCallEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelCallEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelCallObj* retobj = getSchema()->getGelCallTableObj()->realizeGelCall( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelCallEditObj::create() {
		cfcore::ICFGenKbGelCallObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCall()->getSchema() )->getGelCallTableObj()->createGelCall( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelCallEditObj::update() {
		getSchema()->getGelCallTableObj()->updateGelCall( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelCallEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelCallTableObj()->deleteGelCall( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelCallTableObj* CFGenKbGelCallEditObj::getGelCallTable() {
		return( orig->getSchema()->getGelCallTableObj() );
	}

	cfcore::ICFGenKbGelCallEditObj* CFGenKbGelCallEditObj::getGelCallEdit() {
		return( (cfcore::ICFGenKbGelCallEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelCallEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallEditObj::getOrigAsGelCall() {
		return( dynamic_cast<cfcore::ICFGenKbGelCallObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelCallEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelCallEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	bool CFGenKbGelCallEditObj::isOptionalSeqInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalSeqInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalSeqInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalSeqInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalSeqInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalSeqInstTenantIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalSeqInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalSeqInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalSeqInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalSeqInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalSeqInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalSeqInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalSeqInstIdNull() {
		return( getGelCallBuff()->isOptionalSeqInstIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalSeqInstIdValue() {
		return( getGelCallBuff()->getOptionalSeqInstIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalSeqInstIdReference() {
		return( getGelCallBuff()->getOptionalSeqInstIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalCallInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalCallInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalCallInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalCallInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalCallInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalCallInstTenantIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalCallInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalCallInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalCallInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalCallInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalCallInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalCallInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalCallInstIdNull() {
		return( getGelCallBuff()->isOptionalCallInstIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalCallInstIdValue() {
		return( getGelCallBuff()->getOptionalCallInstIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalCallInstIdReference() {
		return( getGelCallBuff()->getOptionalCallInstIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalPrevInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalPrevInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalPrevInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalPrevInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalPrevInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalPrevInstTenantIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalPrevInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalPrevInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalPrevInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalPrevInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalPrevInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalPrevInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalPrevInstGelInstIdNull() {
		return( getGelCallBuff()->isOptionalPrevInstGelInstIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalPrevInstGelInstIdValue() {
		return( getGelCallBuff()->getOptionalPrevInstGelInstIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalPrevInstGelInstIdReference() {
		return( getGelCallBuff()->getOptionalPrevInstGelInstIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalNextInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalNextInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalNextInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalNextInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalNextInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalNextInstTenantIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalNextInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalNextInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalNextInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalNextInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalNextInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalNextInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallEditObj::isOptionalNextInstGelInstIdNull() {
		return( getGelCallBuff()->isOptionalNextInstGelInstIdNull() );
	}

	const int64_t CFGenKbGelCallEditObj::getOptionalNextInstGelInstIdValue() {
		return( getGelCallBuff()->getOptionalNextInstGelInstIdValue() );
	}

	const int64_t* CFGenKbGelCallEditObj::getOptionalNextInstGelInstIdReference() {
		return( getGelCallBuff()->getOptionalNextInstGelInstIdReference() );
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelCallEditObj::getOptionalParentSeqInst( bool forceRead ) {
		cfcore::ICFGenKbGelSequenceObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelCallBuff()->isOptionalSeqInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalSeqInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalSeqInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCall()->getSchema() )->getGelSequenceTableObj()->readGelSequenceByPIdx( getGelCallBuff()->getOptionalSeqInstTenantIdValue(),
					getGelCallBuff()->getOptionalSeqInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalSeqInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelCallEditObj::setOptionalParentSeqInst( cfcore::ICFGenKbGelSequenceObj* value ) {
			
			if( value != NULL ) {
				getGelCallBuff()->setOptionalSeqInstTenantIdValue( value->getRequiredTenantId() );
				getGelCallBuff()->setOptionalSeqInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelCallBuff()->setOptionalSeqInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelCallBuff()->setOptionalSeqInstTenantIdNull();
				getGelCallBuff()->setOptionalSeqInstGelCacheIdNull();
				getGelCallBuff()->setOptionalSeqInstIdNull();
			}
		}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelCallEditObj::getOptionalLookupCallInst( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelCallBuff()->isOptionalCallInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalCallInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalCallInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCall()->getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelCallBuff()->getOptionalCallInstTenantIdValue(),
					getGelCallBuff()->getOptionalCallInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalCallInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelCallEditObj::setOptionalLookupCallInst( cfcore::ICFGenKbGelInstructionObj* value ) {
			
			if( value != NULL ) {
				getGelCallBuff()->setOptionalCallInstTenantIdValue( value->getRequiredTenantId() );
				getGelCallBuff()->setOptionalCallInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelCallBuff()->setOptionalCallInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelCallBuff()->setOptionalCallInstTenantIdNull();
				getGelCallBuff()->setOptionalCallInstGelCacheIdNull();
				getGelCallBuff()->setOptionalCallInstIdNull();
			}
		}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallEditObj::getOptionalLookupPrevInst( bool forceRead ) {
		cfcore::ICFGenKbGelCallObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelCallBuff()->isOptionalPrevInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalPrevInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalPrevInstGelInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCall()->getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelCallBuff()->getOptionalPrevInstTenantIdValue(),
					getGelCallBuff()->getOptionalPrevInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalPrevInstGelInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelCallEditObj::setOptionalLookupPrevInst( cfcore::ICFGenKbGelCallObj* value ) {
			
			if( value != NULL ) {
				getGelCallBuff()->setOptionalPrevInstTenantIdValue( value->getRequiredTenantId() );
				getGelCallBuff()->setOptionalPrevInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelCallBuff()->setOptionalPrevInstGelInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelCallBuff()->setOptionalPrevInstTenantIdNull();
				getGelCallBuff()->setOptionalPrevInstGelCacheIdNull();
				getGelCallBuff()->setOptionalPrevInstGelInstIdNull();
			}
		}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallEditObj::getOptionalLookupNextInst( bool forceRead ) {
		cfcore::ICFGenKbGelCallObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelCallBuff()->isOptionalNextInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalNextInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelCallBuff()->isOptionalNextInstGelInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelCall()->getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelCallBuff()->getOptionalNextInstTenantIdValue(),
					getGelCallBuff()->getOptionalNextInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalNextInstGelInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelCallEditObj::setOptionalLookupNextInst( cfcore::ICFGenKbGelCallObj* value ) {
			
			if( value != NULL ) {
				getGelCallBuff()->setOptionalNextInstTenantIdValue( value->getRequiredTenantId() );
				getGelCallBuff()->setOptionalNextInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelCallBuff()->setOptionalNextInstGelInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelCallBuff()->setOptionalNextInstTenantIdNull();
				getGelCallBuff()->setOptionalNextInstGelCacheIdNull();
				getGelCallBuff()->setOptionalNextInstGelInstIdNull();
			}
		}

	void CFGenKbGelCallEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelCallBuff* origBuff = getOrigAsGelCall()->getGelCallBuff();
		cfcore::CFGenKbGelCallBuff* myBuff = getGelCallBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelCallEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelCallBuff* origBuff = getOrigAsGelCall()->getGelCallBuff();
		cfcore::CFGenKbGelCallBuff* myBuff = getGelCallBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelCallEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
