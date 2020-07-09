// Description: C++18 base object instance implementation for CFGenKb GelIterator.

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
#include <cfgenkbobj/CFGenKbGelIteratorObj.hpp>

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

	const std::string CFGenKbGelIteratorObj::CLASS_NAME( "CFGenKbGelIteratorObj" );
	const classcode_t CFGenKbGelIteratorObj::CLASS_CODE = 0xa917L;

	const std::string& CFGenKbGelIteratorObj::getRequiredIteratorName() {
		return( getGelIteratorBuff()->getRequiredIteratorName() );
	}

	const std::string* CFGenKbGelIteratorObj::getRequiredIteratorNameReference() {
		return( getGelIteratorBuff()->getRequiredIteratorNameReference() );
	}

	bool CFGenKbGelIteratorObj::isOptionalExpandBeforeNull() {
		return( getGelIteratorBuff()->isOptionalExpandBeforeNull() );
	}

	const std::string& CFGenKbGelIteratorObj::getOptionalExpandBeforeValue() {
		return( getGelIteratorBuff()->getOptionalExpandBeforeValue() );
	}

	const std::string* CFGenKbGelIteratorObj::getOptionalExpandBeforeReference() {
		return( getGelIteratorBuff()->getOptionalExpandBeforeReference() );
	}

	bool CFGenKbGelIteratorObj::isOptionalExpandFirstNull() {
		return( getGelIteratorBuff()->isOptionalExpandFirstNull() );
	}

	const std::string& CFGenKbGelIteratorObj::getOptionalExpandFirstValue() {
		return( getGelIteratorBuff()->getOptionalExpandFirstValue() );
	}

	const std::string* CFGenKbGelIteratorObj::getOptionalExpandFirstReference() {
		return( getGelIteratorBuff()->getOptionalExpandFirstReference() );
	}

	const std::string& CFGenKbGelIteratorObj::getRequiredExpandEach() {
		return( getGelIteratorBuff()->getRequiredExpandEach() );
	}

	const std::string* CFGenKbGelIteratorObj::getRequiredExpandEachReference() {
		return( getGelIteratorBuff()->getRequiredExpandEachReference() );
	}

	bool CFGenKbGelIteratorObj::isOptionalExpandLastNull() {
		return( getGelIteratorBuff()->isOptionalExpandLastNull() );
	}

	const std::string& CFGenKbGelIteratorObj::getOptionalExpandLastValue() {
		return( getGelIteratorBuff()->getOptionalExpandLastValue() );
	}

	const std::string* CFGenKbGelIteratorObj::getOptionalExpandLastReference() {
		return( getGelIteratorBuff()->getOptionalExpandLastReference() );
	}

	bool CFGenKbGelIteratorObj::isOptionalExpandLoneNull() {
		return( getGelIteratorBuff()->isOptionalExpandLoneNull() );
	}

	const std::string& CFGenKbGelIteratorObj::getOptionalExpandLoneValue() {
		return( getGelIteratorBuff()->getOptionalExpandLoneValue() );
	}

	const std::string* CFGenKbGelIteratorObj::getOptionalExpandLoneReference() {
		return( getGelIteratorBuff()->getOptionalExpandLoneReference() );
	}

	bool CFGenKbGelIteratorObj::isOptionalExpandEmptyNull() {
		return( getGelIteratorBuff()->isOptionalExpandEmptyNull() );
	}

	const std::string& CFGenKbGelIteratorObj::getOptionalExpandEmptyValue() {
		return( getGelIteratorBuff()->getOptionalExpandEmptyValue() );
	}

	const std::string* CFGenKbGelIteratorObj::getOptionalExpandEmptyReference() {
		return( getGelIteratorBuff()->getOptionalExpandEmptyReference() );
	}

	bool CFGenKbGelIteratorObj::isOptionalExpandAfterNull() {
		return( getGelIteratorBuff()->isOptionalExpandAfterNull() );
	}

	const std::string& CFGenKbGelIteratorObj::getOptionalExpandAfterValue() {
		return( getGelIteratorBuff()->getOptionalExpandAfterValue() );
	}

	const std::string* CFGenKbGelIteratorObj::getOptionalExpandAfterReference() {
		return( getGelIteratorBuff()->getOptionalExpandAfterReference() );
	}


	CFGenKbGelIteratorObj::CFGenKbGelIteratorObj()
	: ICFGenKbGelIteratorObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelIteratorObj::CFGenKbGelIteratorObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelIteratorObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelIteratorObj::~CFGenKbGelIteratorObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelIteratorObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelIteratorBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelIterator()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelIteratorObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelIteratorObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelIteratorObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelIteratorObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelIteratorObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_IteratorName( "IteratorName" );
		static const std::string S_ExpandBefore( "ExpandBefore" );
		static const std::string S_ExpandFirst( "ExpandFirst" );
		static const std::string S_ExpandEach( "ExpandEach" );
		static const std::string S_ExpandLast( "ExpandLast" );
		static const std::string S_ExpandLone( "ExpandLone" );
		static const std::string S_ExpandEmpty( "ExpandEmpty" );
		static const std::string S_ExpandAfter( "ExpandAfter" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IteratorName, CFGenKbGelIteratorObj::getRequiredIteratorName() ) );
		if( ! CFGenKbGelIteratorObj::isOptionalExpandBeforeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBefore, CFGenKbGelIteratorObj::getOptionalExpandBeforeValue() ) );
		}
		if( ! CFGenKbGelIteratorObj::isOptionalExpandFirstNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandFirst, CFGenKbGelIteratorObj::getOptionalExpandFirstValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEach, CFGenKbGelIteratorObj::getRequiredExpandEach() ) );
		if( ! CFGenKbGelIteratorObj::isOptionalExpandLastNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLast, CFGenKbGelIteratorObj::getOptionalExpandLastValue() ) );
		}
		if( ! CFGenKbGelIteratorObj::isOptionalExpandLoneNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLone, CFGenKbGelIteratorObj::getOptionalExpandLoneValue() ) );
		}
		if( ! CFGenKbGelIteratorObj::isOptionalExpandEmptyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEmpty, CFGenKbGelIteratorObj::getOptionalExpandEmptyValue() ) );
		}
		if( ! CFGenKbGelIteratorObj::isOptionalExpandAfterNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandAfter, CFGenKbGelIteratorObj::getOptionalExpandAfterValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelIteratorObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelIteratorObj::getGenDefName() {
		return( cfcore::CFGenKbGelIteratorBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelIteratorObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelIteratorObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelIteratorObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelIteratorObj::getObjQualifiedName() {
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

	std::string CFGenKbGelIteratorObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelIteratorObj::realize() {
		cfcore::ICFGenKbGelIteratorObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelIteratorTableObj()->realizeGelIterator(
			(cfcore::ICFGenKbGelIteratorObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelIteratorObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelIteratorObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelIteratorTableObj()->readGelIteratorByPIdx( getGelIteratorBuff()->getRequiredTenantId(),
		getGelIteratorBuff()->getRequiredGelCacheId(),
		getGelIteratorBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelIteratorObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelIteratorObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelIteratorTableObj()->lockGelIterator( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelIteratorTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelIteratorEditObj* CFGenKbGelIteratorObj::getGelIteratorEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelIteratorEditObj*>( edit ) );
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
	std::string CFGenKbGelIteratorObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "GelIterator.expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_IteratorName( "IteratorName" );
		static const std::string S_DetailClassName( "DetailClassName" );
		static const std::string S_BodyEach( "BodyEach" );
		static const std::string S_Dollar( "$" );
		static const std::string S_DQuote( "\"" );
		static const std::string S_CouldNotFindExpansionItem( "Could not find expansion item for iterator \"" );
		static const std::string S_QuoteSpace( "\" " );
		static const std::string S_SpaceQuote( " \"" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string iteratorName = getRequiredIteratorName();
		if( iteratorName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_IteratorName );
		}

		std::string bodyEach = getRequiredExpandEach();
		if( bodyEach.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_BodyEach );
		}

		std::string emptyString;
		std::string itemExpansion;
		cflib::ICFLibAnyObj* detailDef = NULL;
		MssCFGenContext* detailContext = NULL;
		int idx;
		int numItems = 0;

		ICFGenKbGenItemObj* itemBefore = NULL;
		ICFGenKbGenItemObj* itemAfter = NULL;
		ICFGenKbGenItemObj* itemEmpty = NULL;

		ICFGenKbGenItemObj* itemRule = NULL;

		std::string* failedBefore = NULL;
		std::string* failedFirst = NULL;
		std::string* failedEach = NULL;
		std::string* failedLast = NULL;
		std::string* failedAfter = NULL;
		std::string* failedLone = NULL;
		std::string* failedEmpty = NULL;

		const std::string* bodyBefore = getOptionalExpandBeforeReference();
		const std::string* bodyFirst = getOptionalExpandFirstReference();
		const std::string* bodyLast = getOptionalExpandLastReference();
		const std::string* bodyAfter = getOptionalExpandAfterReference();
		const std::string* bodyLone = getOptionalExpandLoneReference();
		const std::string* bodyEmpty = getOptionalExpandEmptyReference();

		std::string generatingBuild = genContext->getGeneratingBuild();

		MssCFEngine* genEngine = genContext->getGenEngine();

	//	The genItem should be an MssCFGenIterator

		ICFGenKbGenItemObj* genItem = genEngine->findContextItem( genContext, iteratorName );
		if( genItem == NULL ) {
			static const std::string S_CouldNotFindIterator( "Could not find iterator \"" );
			static const std::string S_Attempting( "\" attempting to expand \"" );
			std::string S_Msg( S_CouldNotFindIterator + iteratorName + S_Attempting + getRequiredSourceText() + S_DQuote );
			genEngine->getLog()->message( S_Msg );
			genContext->setExpansionIsNull();
			if( failedBefore != NULL ) {
				delete failedBefore;
				failedBefore = NULL;
			}
			if( failedFirst != NULL ) {
				delete failedFirst;
				failedFirst = NULL;
			}
			if( failedEach != NULL ) {
				delete failedEach;
				failedEach = NULL;
			}
			if( failedLast != NULL ) {
				delete failedLast;
				failedLast = NULL;
			}
			if( failedAfter != NULL ) {
				delete failedAfter;
				failedAfter = NULL;
			}
			if( failedLone != NULL ) {
				delete failedLone;
				failedLone = NULL;
			}
			if( failedEmpty != NULL ) {
				delete failedEmpty;
				failedEmpty = NULL;
			}
			return( emptyString );
		}

		MssCFGenIteratorObj* iterator = dynamic_cast<MssCFGenIteratorObj*>( genItem );
		if( iterator == NULL ) {
			static const std::string S_ContextItem( "Context item \"" );
			static const std::string S_MustBe( "\" must be an MssCFGenIteratorObj, not a \"" );
			static const std::string S_PeriodSpace( ". \"" );
			std::string S_Msg( S_ContextItem + iteratorName + S_MustBe + genItem->getClassName() + S_PeriodSpace + getRequiredSourceText() + S_DQuote );
			genEngine->getLog()->message( S_Msg );
			genContext->setExpansionIsNull();
			if( failedBefore != NULL ) {
				delete failedBefore;
				failedBefore = NULL;
			}
			if( failedFirst != NULL ) {
				delete failedFirst;
				failedFirst = NULL;
			}
			if( failedEach != NULL ) {
				delete failedEach;
				failedEach = NULL;
			}
			if( failedLast != NULL ) {
				delete failedLast;
				failedLast = NULL;
			}
			if( failedAfter != NULL ) {
				delete failedAfter;
				failedAfter = NULL;
			}
			if( failedLone != NULL ) {
				delete failedLone;
				failedLone = NULL;
			}
			if( failedEmpty != NULL ) {
				delete failedEmpty;
				failedEmpty = NULL;
			}
			return( emptyString );
		}

	//	Get the detailClassName

		std::string detailClassName;
		if( iterator->getDetailClass() != NULL ) {
			detailClassName = iterator->getDetailClass()->getRequiredName();
		}
		else {
			detailClassName = genEngine->getAnyClassName();
		}

		if( detailClassName.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, 0, S_DetailClassName );
		}

	//	Resolve the optional expansions

		if( bodyBefore != NULL ) {
			failedBefore = new std::string( S_Dollar + *bodyBefore + S_Dollar );
			itemBefore = genEngine->findContextItem( genContext, *bodyBefore );
			if( itemBefore == NULL ) {
				std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_BEFORE + S_SpaceQuote + *bodyBefore + S_DQuote );
				genEngine->getLog()->message( S_Msg );
			}
		}

		if( bodyAfter != NULL ) {
			failedAfter = new std::string( S_Dollar + *bodyAfter + S_Dollar );
			itemAfter = genEngine->findContextItem( genContext, *bodyAfter );
			if( itemAfter == NULL ) {
				std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_AFTER + S_SpaceQuote + *bodyAfter + S_DQuote );
				genEngine->getLog()->message( S_Msg );
			}
		}

		if( bodyEmpty != NULL ) {
			failedEmpty = new std::string( S_Dollar + *bodyEmpty + S_Dollar );
			if( *bodyEmpty != MssCFGelCompiler::_ITERATOR_EMPTY ) {
				itemEmpty = genEngine->findContextItem( genContext, *bodyEmpty );
				if( itemEmpty == NULL ) {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_EMPTY + S_SpaceQuote + *bodyEmpty + S_DQuote );
					genEngine->getLog()->message( S_Msg );
				}
			}
		}

		if( bodyFirst != NULL ) {
			failedFirst = new std::string( S_Dollar + *bodyFirst + S_Dollar );
		}

		failedEach = new std::string( S_Dollar + bodyEach + S_Dollar );

		if( bodyLast != NULL ) {
			failedLast = new std::string( S_Dollar + *bodyLast + S_Dollar );
		}

		if( bodyLone != NULL ) {
			failedLone = new std::string( S_Dollar + *bodyLone + S_Dollar );
		}

	//	Prepare to perform the expansions

		std::string expansion;

	//	Get the detailList

		std::vector<cflib::ICFLibAnyObj*>* detailList = iterator->getDetailList( genContext );
		if( detailList == NULL ) {
			static const std::string S_CouldNotGet( "Could not get " );
			static const std::string S_DetailIteration( " detail object iteration.  \"$" );
			static const std::string S_IsInvalid( "$\" is invalid" );
			std::string S_Msg( S_CouldNotGet + iteratorName + S_DetailIteration + getRequiredSourceText() + S_IsInvalid );
			genEngine->getLog()->message( S_Msg );
			genContext->setExpansionIsNull();
			if( failedBefore != NULL ) {
				delete failedBefore;
				failedBefore = NULL;
			}
			if( failedFirst != NULL ) {
				delete failedFirst;
				failedFirst = NULL;
			}
			if( failedEach != NULL ) {
				delete failedEach;
				failedEach = NULL;
			}
			if( failedLast != NULL ) {
				delete failedLast;
				failedLast = NULL;
			}
			if( failedAfter != NULL ) {
				delete failedAfter;
				failedAfter = NULL;
			}
			if( failedLone != NULL ) {
				delete failedLone;
				failedLone = NULL;
			}
			if( failedEmpty != NULL ) {
				delete failedEmpty;
				failedEmpty = NULL;
			}
			return( emptyString );
		}

	//	If a BEFORE item is provided, we always expand it using the CURRENT
	//	context, not a sub-context.

		if( bodyBefore != NULL ) {
			if( itemBefore != NULL ) {
				itemExpansion = genContext->expandItemBody( itemBefore );
				if( ! genContext->isExpansionNull() ) {
					expansion.append( itemExpansion );
				}
				else {
					expansion.append( *failedBefore );
				}
			}
			else {
				expansion.append( *failedBefore );
			}
			genContext->clearExpansionIsNull();
		}

	//	How we perform the expansion depends on what iterator limbs
	//	have been specified and on the number of items to process.

		numItems = detailList->size();

		//	If the detail set is empty, expand EMPTY if it's provided

		if( numItems == 0 ) {
			if( bodyEmpty != NULL ) {
				if( itemEmpty != NULL ) {
					itemExpansion = genContext->expandItemBody( itemEmpty );
					expansion.append( itemExpansion );
				}
				else if( *bodyEmpty != MssCFGelCompiler::_ITERATOR_EMPTY ) {
					expansion.append( *failedEmpty );
				}
			}
			else {
				static const std::string S_ExpansionOfIterator( "Expansion of iterator \"" );
				static const std::string S_ReturnedAnEmptySet( "\" returned an empty set" );
				std::string S_Msg( S_ExpansionOfIterator + iteratorName + S_ReturnedAnEmptySet );
				genEngine->getLog()->message( S_Msg );
			}
		}

	//	If the detail set has one item, preferentially expand one of
	//	LONE, LAST, FIRST, or EACH limb

		else if( numItems == 1 ) {

			detailDef = detailList->front();
			detailContext = genEngine->getGenContextFactory()->newGenContext( generatingBuild,
				genContext,
				detailDef->getGenDefName(),
				detailDef );
			detailContext->setPrevContext( genContext );

			if( bodyLone != NULL ) {
				itemRule = genEngine->findContextItem( detailContext, *bodyLone );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedLone );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_LONE + S_SpaceQuote + *bodyLone + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedLone );
				}
				detailContext->clearExpansionIsNull();
			}
			else if( bodyFirst != NULL ) {
				itemRule = genEngine->findContextItem( detailContext, *bodyFirst );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedFirst );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_FIRST + S_SpaceQuote + *bodyFirst + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedFirst );
				}
				detailContext->clearExpansionIsNull();
			}
			else if( bodyLast != NULL ) {
				itemRule = genEngine->findContextItem( detailContext, *bodyLast );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedLast );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_LAST + S_SpaceQuote + *bodyLast + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedLast );
				}
				detailContext->clearExpansionIsNull();
			}
			else {
				itemRule = genEngine->findContextItem( detailContext, bodyEach );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedEach );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_EACH + S_SpaceQuote + bodyEach + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedEach );
				}
				detailContext->clearExpansionIsNull();
			}

			while( ( detailContext != NULL ) && ( detailContext != genContext ) ) {
				detailContext = detailContext->release();
			}
			detailContext = NULL;
		}
		else {

	//	If the detail set has n items:

	//		The first item is expanded by FIRST or EACH

			detailDef = detailList->front();
			detailContext = genEngine->getGenContextFactory()->newGenContext( generatingBuild,
				genContext,
				detailDef->getGenDefName(),
				detailDef );
			detailContext->setPrevContext( genContext );

			if( bodyFirst != NULL ) {
				itemRule = genEngine->findContextItem( detailContext, *bodyFirst );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedFirst );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_FIRST + S_SpaceQuote + *bodyFirst + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedFirst );
				}
				detailContext->clearExpansionIsNull();
			}
			else {
				itemRule = genEngine->findContextItem( detailContext, bodyEach );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedEach );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_EACH + S_SpaceQuote + bodyEach + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedEach );
				}
				detailContext->clearExpansionIsNull();
			}
			while( ( detailContext != NULL ) && ( detailContext != genContext ) ) {
				detailContext = detailContext->release();
			}
			detailContext = NULL;

	//		The middle items are always expanded by EACH

			auto iterItems = detailList->begin();
			iterItems ++;
			for( idx = 1; idx < numItems - 1; idx ++ ) {

				detailDef = *iterItems;
				iterItems ++;

				detailContext = genEngine->getGenContextFactory()->newGenContext( generatingBuild,
					genContext,
					detailDef->getGenDefName(),
					detailDef );
				detailContext->setPrevContext( genContext );

				itemRule = genEngine->findContextItem( detailContext, bodyEach );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedEach );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_EACH + S_SpaceQuote + bodyEach + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedEach );
				}
				detailContext->clearExpansionIsNull();
				while( ( detailContext != NULL ) && ( detailContext != genContext ) ) {
					detailContext = detailContext->release();
				}
				detailContext = NULL;
			}

	//		The last item is expanded by LAST or EACH

			detailDef = detailList->back();
			detailContext = genEngine->getGenContextFactory()->newGenContext( generatingBuild,
				genContext,
				detailDef->getGenDefName(),
				detailDef );
			detailContext->setPrevContext( genContext );

			if( bodyLast != NULL ) {
				itemRule = genEngine->findContextItem( detailContext, *bodyLast );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedLast );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_LAST + S_SpaceQuote + *bodyBefore + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedLast );
				}
				detailContext->clearExpansionIsNull();
			}
			else {
				itemRule = genEngine->findContextItem( detailContext, bodyEach );
				if( itemRule != NULL ) {
					itemExpansion = detailContext->expandItemBody( itemRule );
					if( ! detailContext->isExpansionNull() ) {
						expansion.append( itemExpansion );
					}
					else {
						expansion.append( *failedEach );
					}
				}
				else {
					std::string S_Msg( S_CouldNotFindExpansionItem + iteratorName + S_QuoteSpace + MssCFGelCompiler::_ITERATOR_EACH + S_SpaceQuote + bodyEach + S_DQuote );
					genEngine->getLog()->message( S_Msg );
					expansion.append( *failedEach );
				}
				detailContext->clearExpansionIsNull();
			}
			while( ( detailContext != NULL ) && ( detailContext != genContext ) ) {
				detailContext = detailContext->release();
			}
			detailContext = NULL;
		}

	//	If an AFTER item is provided, we always expand it using the CURRENT
	//	context, not a sub-context.

		if( bodyAfter != NULL ) {
			if( itemAfter != NULL ) {
				itemExpansion = genContext->expandItemBody( itemAfter );
				if( ! genContext->isExpansionNull() ) {
					expansion.append( itemExpansion );
				}
				else {
					expansion.append( *failedAfter );
				}
			}
			else {
				expansion.append( *failedAfter );
			}
			genContext->clearExpansionIsNull();
		}

	//	Release the detail context

		while( ( detailContext != NULL ) && ( detailContext != genContext ) ) {
			detailContext = detailContext->release();
		}

	//	Delete the detail list

		if( detailList != NULL ) {
			delete detailList;
			detailList = NULL;
		}

	//	Release local allocations

		if( failedBefore != NULL ) {
			delete failedBefore;
			failedBefore = NULL;
		}
		if( failedFirst != NULL ) {
			delete failedFirst;
			failedFirst = NULL;
		}
		if( failedEach != NULL ) {
			delete failedEach;
			failedEach = NULL;
		}
		if( failedLast != NULL ) {
			delete failedLast;
			failedLast = NULL;
		}
		if( failedAfter != NULL ) {
			delete failedAfter;
			failedAfter = NULL;
		}
		if( failedLone != NULL ) {
			delete failedLone;
			failedLone = NULL;
		}
		if( failedEmpty != NULL ) {
			delete failedEmpty;
			failedEmpty = NULL;
		}

	//	Return the cumulative results of the expansion

		genContext->clearExpansionIsNull();
		return( expansion );
	}

}
