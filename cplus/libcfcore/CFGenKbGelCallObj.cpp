// Description: C++18 base object instance implementation for CFGenKb GelCall.

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
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGelCallObj.hpp>

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

	const std::string CFGenKbGelCallObj::CLASS_NAME( "CFGenKbGelCallObj" );
	const classcode_t CFGenKbGelCallObj::CLASS_CODE = 0xa91cL;

	bool CFGenKbGelCallObj::isOptionalSeqInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalSeqInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalSeqInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalSeqInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalSeqInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalSeqInstTenantIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalSeqInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalSeqInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalSeqInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalSeqInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalSeqInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalSeqInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalSeqInstIdNull() {
		return( getGelCallBuff()->isOptionalSeqInstIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalSeqInstIdValue() {
		return( getGelCallBuff()->getOptionalSeqInstIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalSeqInstIdReference() {
		return( getGelCallBuff()->getOptionalSeqInstIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalCallInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalCallInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalCallInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalCallInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalCallInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalCallInstTenantIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalCallInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalCallInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalCallInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalCallInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalCallInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalCallInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalCallInstIdNull() {
		return( getGelCallBuff()->isOptionalCallInstIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalCallInstIdValue() {
		return( getGelCallBuff()->getOptionalCallInstIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalCallInstIdReference() {
		return( getGelCallBuff()->getOptionalCallInstIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalPrevInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalPrevInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalPrevInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalPrevInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalPrevInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalPrevInstTenantIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalPrevInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalPrevInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalPrevInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalPrevInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalPrevInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalPrevInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalPrevInstGelInstIdNull() {
		return( getGelCallBuff()->isOptionalPrevInstGelInstIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalPrevInstGelInstIdValue() {
		return( getGelCallBuff()->getOptionalPrevInstGelInstIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalPrevInstGelInstIdReference() {
		return( getGelCallBuff()->getOptionalPrevInstGelInstIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalNextInstTenantIdNull() {
		return( getGelCallBuff()->isOptionalNextInstTenantIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalNextInstTenantIdValue() {
		return( getGelCallBuff()->getOptionalNextInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalNextInstTenantIdReference() {
		return( getGelCallBuff()->getOptionalNextInstTenantIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalNextInstGelCacheIdNull() {
		return( getGelCallBuff()->isOptionalNextInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalNextInstGelCacheIdValue() {
		return( getGelCallBuff()->getOptionalNextInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalNextInstGelCacheIdReference() {
		return( getGelCallBuff()->getOptionalNextInstGelCacheIdReference() );
	}

	bool CFGenKbGelCallObj::isOptionalNextInstGelInstIdNull() {
		return( getGelCallBuff()->isOptionalNextInstGelInstIdNull() );
	}

	const int64_t CFGenKbGelCallObj::getOptionalNextInstGelInstIdValue() {
		return( getGelCallBuff()->getOptionalNextInstGelInstIdValue() );
	}

	const int64_t* CFGenKbGelCallObj::getOptionalNextInstGelInstIdReference() {
		return( getGelCallBuff()->getOptionalNextInstGelInstIdReference() );
	}


	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelCallObj::getOptionalParentSeqInst( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSequenceTableObj()->readGelSequenceByPIdx( getGelCallBuff()->getOptionalSeqInstTenantIdValue(),
					getGelCallBuff()->getOptionalSeqInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalSeqInstIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelCallObj::getOptionalLookupCallInst( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelCallBuff()->getOptionalCallInstTenantIdValue(),
					getGelCallBuff()->getOptionalCallInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalCallInstIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallObj::getOptionalLookupPrevInst( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelCallBuff()->getOptionalPrevInstTenantIdValue(),
					getGelCallBuff()->getOptionalPrevInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalPrevInstGelInstIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelCallObj::getOptionalLookupNextInst( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelCallBuff()->getOptionalNextInstTenantIdValue(),
					getGelCallBuff()->getOptionalNextInstGelCacheIdValue(),
					getGelCallBuff()->getOptionalNextInstGelInstIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelCallObj::CFGenKbGelCallObj()
	: ICFGenKbGelCallObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelCallObj::CFGenKbGelCallObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelCallObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelCallObj::~CFGenKbGelCallObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelCallObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelCallBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelCall()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelCallObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelCallObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelCallObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelCallObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelCallBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelCallObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelCallObj" );
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
		if( ! CFGenKbGelCallObj::isOptionalSeqInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstTenantId, CFGenKbGelCallObj::getOptionalSeqInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalSeqInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstGelCacheId, CFGenKbGelCallObj::getOptionalSeqInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalSeqInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SeqInstId, CFGenKbGelCallObj::getOptionalSeqInstIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalCallInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstTenantId, CFGenKbGelCallObj::getOptionalCallInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalCallInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstGelCacheId, CFGenKbGelCallObj::getOptionalCallInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalCallInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_CallInstId, CFGenKbGelCallObj::getOptionalCallInstIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalPrevInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstTenantId, CFGenKbGelCallObj::getOptionalPrevInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalPrevInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelCacheId, CFGenKbGelCallObj::getOptionalPrevInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalPrevInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_PrevInstGelInstId, CFGenKbGelCallObj::getOptionalPrevInstGelInstIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalNextInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstTenantId, CFGenKbGelCallObj::getOptionalNextInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalNextInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelCacheId, CFGenKbGelCallObj::getOptionalNextInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelCallObj::isOptionalNextInstGelInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_NextInstGelInstId, CFGenKbGelCallObj::getOptionalNextInstGelInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelCallObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelCallObj::getGenDefName() {
		return( cfcore::CFGenKbGelCallBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCallObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelCallObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelCallObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelCallObj::getObjQualifiedName() {
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

	std::string CFGenKbGelCallObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelCallObj::realize() {
		cfcore::ICFGenKbGelCallObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->realizeGelCall(
			(cfcore::ICFGenKbGelCallObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelCallObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelCallObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelCallBuff()->getRequiredTenantId(),
		getGelCallBuff()->getRequiredGelCacheId(),
		getGelCallBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelCallObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelCallObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->lockGelCall( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelCallEditObj* CFGenKbGelCallObj::getGelCallEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelCallEditObj*>( edit ) );
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

	std::string CFGenKbGelCallObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string emptyString;
		std::string expansion;
		std::string subExpansion;

		ICFGenKbGelInstructionObj* called = getOptionalLookupCallInst();
		if( called != NULL ) {
			subExpansion = called->expand( genContext );
			if( genContext->isExpansionNull() ) {
				subExpansion = "$" + called->getRequiredSourceText() + "$";
			}
		}
		else {
			subExpansion = "$" + getRequiredSourceText() + "$";
		}

		expansion.append( subExpansion );
		genContext->clearExpansionIsNull();

		return( expansion );
	}

}
