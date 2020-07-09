// Description: C++18 base object instance implementation for CFGenKb GelReference.

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
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGelReferenceObj.hpp>

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

	const std::string CFGenKbGelReferenceObj::CLASS_NAME( "CFGenKbGelReferenceObj" );
	const classcode_t CFGenKbGelReferenceObj::CLASS_CODE = 0xa91bL;

	const std::string& CFGenKbGelReferenceObj::getRequiredReferenceName() {
		return( getGelReferenceBuff()->getRequiredReferenceName() );
	}

	const std::string* CFGenKbGelReferenceObj::getRequiredReferenceNameReference() {
		return( getGelReferenceBuff()->getRequiredReferenceNameReference() );
	}

	bool CFGenKbGelReferenceObj::isOptionalRemainderTenantIdNull() {
		return( getGelReferenceBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelReferenceObj::getOptionalRemainderTenantIdValue() {
		return( getGelReferenceBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelReferenceObj::getOptionalRemainderTenantIdReference() {
		return( getGelReferenceBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelReferenceObj::getRequiredRemainderGelCacheId() {
		return( getGelReferenceBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelReferenceObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelReferenceBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelReferenceObj::isOptionalRemainderInstIdNull() {
		return( getGelReferenceBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelReferenceObj::getOptionalRemainderInstIdValue() {
		return( getGelReferenceBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelReferenceObj::getOptionalRemainderInstIdReference() {
		return( getGelReferenceBuff()->getOptionalRemainderInstIdReference() );
	}


	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelReferenceObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;
			if( getGelReferenceBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelReferenceBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelReferenceBuff()->getOptionalRemainderTenantIdValue(),
					getGelReferenceBuff()->getRequiredRemainderGelCacheId(),
					getGelReferenceBuff()->getOptionalRemainderInstIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelReferenceObj::CFGenKbGelReferenceObj()
	: ICFGenKbGelReferenceObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelReferenceObj::CFGenKbGelReferenceObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelReferenceObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelReferenceObj::~CFGenKbGelReferenceObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelReferenceObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelReferenceBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelReference()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelReferenceObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelReferenceObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelReferenceObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelReferenceObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelReferenceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelReferenceObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelReferenceObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ReferenceName, CFGenKbGelReferenceObj::getRequiredReferenceName() ) );
		if( ! CFGenKbGelReferenceObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelReferenceObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelReferenceObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelReferenceObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelReferenceObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelReferenceObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelReferenceObj::getGenDefName() {
		return( cfcore::CFGenKbGelReferenceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelReferenceObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelReferenceObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelReferenceObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelReferenceObj::getObjQualifiedName() {
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

	std::string CFGenKbGelReferenceObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelReferenceObj::realize() {
		cfcore::ICFGenKbGelReferenceObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelReferenceTableObj()->realizeGelReference(
			(cfcore::ICFGenKbGelReferenceObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelReferenceObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelReferenceObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelReferenceTableObj()->readGelReferenceByPIdx( getGelReferenceBuff()->getRequiredTenantId(),
		getGelReferenceBuff()->getRequiredGelCacheId(),
		getGelReferenceBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelReferenceObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelReferenceObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelReferenceTableObj()->lockGelReference( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelReferenceTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelReferenceEditObj* CFGenKbGelReferenceObj::getGelReferenceEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelReferenceEditObj*>( edit ) );
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

	std::string CFGenKbGelReferenceObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_ReferenceName( "ReferenceName" );
		static const std::string S_Dollar( "$" );
		static const std::string S_DQuote( "\"" );
		static const std::string S_DQuoteCommaSpaceDQuote( "\", \"" );
		static const std::string S_CouldNotResolveReference( "Could not resolve reference \"" );
		static const std::string S_ExpectedReferenceItemClass( "Expected reference item to be MssCFGenReferenceObj, not " );
		static const std::string S_DereferenceFailed( "Resolution of reference \"" );
		static const std::string S_RemainderNotProperlyCompiled( "Remainder of macro was not properly compiled" );
		static const std::string S_BuildRefContextFailed( "buildRefContext() failed" );
		static const std::string S_ReturnedNULL( " returned NULL, \"" );
		static const std::string S_IsInvalid( "\" is invalid" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string referenceName = getRequiredReferenceName();
		if( referenceName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_ReferenceName );
		}

		std::string emptyString;
		ICFGenKbGenItemObj* referenceItem = genContext->getGenEngine()->findContextItem( genContext, referenceName );
		if( referenceItem == NULL ) {
			std::string S_Msg( S_CouldNotResolveReference + referenceName + S_DQuoteCommaSpaceDQuote + getRequiredSourceText() + S_DQuote );
			genContext->getGenEngine()->getLog()->message( S_Msg );
			genContext->setExpansionIsNull();
			return( emptyString );
		}

		std::string expansion;

		MssCFGenReferenceObj* genReferenceItem = dynamic_cast<MssCFGenReferenceObj*>( referenceItem );
		if( genReferenceItem != NULL ) {
			cflib::ICFLibAnyObj* refDef = genReferenceItem->dereference( genContext );
			if( refDef == NULL ) {
				std::string S_Msg( S_DereferenceFailed + referenceName + S_ReturnedNULL + getRequiredSourceText() + S_IsInvalid );
				genContext->getGenEngine()->getLog()->message( S_Msg );
				genContext->setExpansionIsNull();
				return( emptyString );
			}

			MssCFGenContext* refContext = genContext->buildRefContext( refDef );
			if( refContext == NULL ) {
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_BuildRefContextFailed );
			}

			ICFGenKbGelInstructionObj* remainder = getOptionalLookupRemainder();
			if( remainder != NULL ) {
				expansion = remainder->expand( refContext );
				genContext->setExpansionIsNull( refContext->isExpansionNull() );
			}

			while( ( refContext != NULL ) && ( refContext != genContext ) ) {
				refContext = refContext->release();
			}
		}
		else {
			std::string S_Msg( S_ExpectedReferenceItemClass + referenceItem->getClassName() );
			genContext->getGenEngine()->getLog()->message( S_Msg );
			genContext->setExpansionIsNull();
			return( emptyString );
		}

		return( expansion );
	}

}
