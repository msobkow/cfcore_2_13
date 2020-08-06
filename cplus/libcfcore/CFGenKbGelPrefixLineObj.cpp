// Description: C++18 base object instance implementation for CFGenKb GelPrefixLine.

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
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGelPrefixLineObj.hpp>

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

	const std::string CFGenKbGelPrefixLineObj::CLASS_NAME( "CFGenKbGelPrefixLineObj" );
	const classcode_t CFGenKbGelPrefixLineObj::CLASS_CODE = 0xa91aL;

	const std::string& CFGenKbGelPrefixLineObj::getRequiredPrefixName() {
		return( getGelPrefixLineBuff()->getRequiredPrefixName() );
	}

	const std::string* CFGenKbGelPrefixLineObj::getRequiredPrefixNameReference() {
		return( getGelPrefixLineBuff()->getRequiredPrefixNameReference() );
	}

	bool CFGenKbGelPrefixLineObj::isOptionalRemainderTenantIdNull() {
		return( getGelPrefixLineBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelPrefixLineObj::getOptionalRemainderTenantIdValue() {
		return( getGelPrefixLineBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelPrefixLineObj::getOptionalRemainderTenantIdReference() {
		return( getGelPrefixLineBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelPrefixLineObj::getRequiredRemainderGelCacheId() {
		return( getGelPrefixLineBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelPrefixLineObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelPrefixLineBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelPrefixLineObj::isOptionalRemainderInstIdNull() {
		return( getGelPrefixLineBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelPrefixLineObj::getOptionalRemainderInstIdValue() {
		return( getGelPrefixLineBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelPrefixLineObj::getOptionalRemainderInstIdReference() {
		return( getGelPrefixLineBuff()->getOptionalRemainderInstIdReference() );
	}


	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelPrefixLineObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;
			if( getGelPrefixLineBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelPrefixLineBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelPrefixLineBuff()->getOptionalRemainderTenantIdValue(),
					getGelPrefixLineBuff()->getRequiredRemainderGelCacheId(),
					getGelPrefixLineBuff()->getOptionalRemainderInstIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelPrefixLineObj::CFGenKbGelPrefixLineObj()
	: ICFGenKbGelPrefixLineObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelPrefixLineObj::CFGenKbGelPrefixLineObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelPrefixLineObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelPrefixLineObj::~CFGenKbGelPrefixLineObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelPrefixLineObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelPrefixLineBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelPrefixLine()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelPrefixLineObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelPrefixLineObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelPrefixLineObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelPrefixLineObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelPrefixLineBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelPrefixLineObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelPrefixLineObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_PrefixName( "PrefixName" );
		static const std::string S_RemainderTenantId( "RemainderTenantId" );
		static const std::string S_RemainderGelCacheId( "RemainderGelCacheId" );
		static const std::string S_RemainderInstId( "RemainderInstId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PrefixName, CFGenKbGelPrefixLineObj::getRequiredPrefixName() ) );
		if( ! CFGenKbGelPrefixLineObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelPrefixLineObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelPrefixLineObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelPrefixLineObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelPrefixLineObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelPrefixLineObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelPrefixLineObj::getGenDefName() {
		return( cfcore::CFGenKbGelPrefixLineBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelPrefixLineObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelPrefixLineObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelPrefixLineObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelPrefixLineObj::getObjQualifiedName() {
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

	std::string CFGenKbGelPrefixLineObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelPrefixLineObj::realize() {
		cfcore::ICFGenKbGelPrefixLineObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelPrefixLineTableObj()->realizeGelPrefixLine(
			(cfcore::ICFGenKbGelPrefixLineObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelPrefixLineObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelPrefixLineObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelPrefixLineTableObj()->readGelPrefixLineByPIdx( getGelPrefixLineBuff()->getRequiredTenantId(),
		getGelPrefixLineBuff()->getRequiredGelCacheId(),
		getGelPrefixLineBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelPrefixLineObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelPrefixLineObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelPrefixLineTableObj()->lockGelPrefixLine( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelPrefixLineTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelPrefixLineEditObj* CFGenKbGelPrefixLineObj::getGelPrefixLineEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelPrefixLineEditObj*>( edit ) );
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

	std::string CFGenKbGelPrefixLineObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_PrefixName( "PrefixName" );
		static const std::string S_Dollar( "$" );
		static const std::string S_DQuote( "\"" );
		static const std::string S_DQuoteCommaSpaceDQuote( "\", \"" );
		static const std::string S_CouldNotResolvePrefix( "Could not resolve prefix \"" );
		static const std::string S_ExpectedPrefixItemClass( "Expected prefix item to be one of MssCFGenFileObj, MssCFGenRuleObj, MssCFGenTruncObj, MssCFGenBindObj, MssCFGenReferenceObj, or MssCFGenIterator, not " );
		static const std::string S_RemainderNotProperlyCompiled( "Remainder of macro was not properly compiled" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string prefixName = getRequiredPrefixName();
		if( prefixName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_PrefixName );
		}

		std::string emptyString;
		std::string prefixStrValue;
		ICFGenKbGenItemObj* prefixItem = genContext->getGenEngine()->findContextItem( genContext, prefixName );
		if( prefixItem == NULL ) {
			std::string S_Msg( S_CouldNotResolvePrefix + prefixName + S_DQuoteCommaSpaceDQuote + getRequiredSourceText() + S_DQuote );
			genContext->getGenEngine()->getLog()->message( S_Msg );
			genContext->setExpansionIsNull();
			return( emptyString );
		}

		MssCFGenFileObj* genFileItem = dynamic_cast<MssCFGenFileObj*>( prefixItem );
		if( genFileItem != NULL ) {
			prefixStrValue = genFileItem->expandBody( genContext );
		}
		else {
			MssCFGenRuleObj* genRuleItem = dynamic_cast<MssCFGenRuleObj*>( prefixItem );
			if( genRuleItem != NULL ) {
				prefixStrValue = genRuleItem->expandBody( genContext );
			}
			else {
				MssCFGenTruncObj* genTruncItem = dynamic_cast<MssCFGenTruncObj*>( prefixItem );
				if( genTruncItem != NULL ) {
					prefixStrValue = genTruncItem->expandBody( genContext );
				}
				else {
					MssCFGenBindObj* genBindItem = dynamic_cast<MssCFGenBindObj*>( prefixItem );
					if( genBindItem != NULL ) {
						prefixStrValue = genBindItem->expandBody( genContext );
					}
					else {
						MssCFGenReferenceObj* genReferenceItem = dynamic_cast<MssCFGenReferenceObj*>( prefixItem );
						if( genReferenceItem != NULL ) {
							prefixStrValue = genReferenceItem->expandBody( genContext );
						}
						else {
							MssCFGenIteratorObj* genIteratorItem = dynamic_cast<MssCFGenIteratorObj*>( prefixItem );
							if( genIteratorItem != NULL ) {
								prefixStrValue = genIteratorItem->expandBody( genContext );
							}
							else {
								std::string S_Msg( S_ExpectedPrefixItemClass + prefixItem->getClassName() );
								throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
							}
						}
					}
				}
			}
		}

		if( genContext->isExpansionNull() ) {
			prefixStrValue = S_DQuote + S_Dollar + prefixName + S_Dollar + S_DQuote;
		}

		ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
		if( remainder == NULL ) {
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_RemainderNotProperlyCompiled );
		}

		std::string body = remainder->expand( genContext );
		if( genContext->isExpansionNull() ) {
			body = S_Dollar + prefixName + S_Dollar;
		}

		// Note this is a string replacement, not a character replacement

		static const std::string S_Newline( "\n" );
		std::string::size_type lenNewline = S_Newline.length();

		const std::string prefixStrWithNewline( S_Newline + prefixStrValue );
		std::string::size_type lenReplacement = prefixStrWithNewline.length();

		std::string::size_type offset = 0;
		std::string::size_type foundNewlineAt = body.find( S_Newline, offset );
		while( foundNewlineAt != std::string::npos ) {
			body = body.replace( foundNewlineAt, lenNewline, prefixStrWithNewline );
			offset = foundNewlineAt + lenReplacement;
			foundNewlineAt = body.find( S_Newline, offset );
		}

		return( body );
	}

}
