// Description: C++18 edit object instance implementation for CFGenKb GelSpread.

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
#include <cfgenkbobj/CFGenKbGelSpreadObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSpreadEditObj.hpp>

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

	const std::string CFGenKbGelSpreadEditObj::CLASS_NAME( "CFGenKbGelSpreadEditObj" );

	CFGenKbGelSpreadEditObj::CFGenKbGelSpreadEditObj( cfcore::ICFGenKbGelSpreadObj* argOrig )
	: ICFGenKbGelSpreadEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelSpreadEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelSpreadEditObj::~CFGenKbGelSpreadEditObj() {
	}

	const std::string& CFGenKbGelSpreadEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSpreadEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelSpreadBuff::CLASS_CODE );
	}

	bool CFGenKbGelSpreadEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSpreadBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelSpreadEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadEditObj" );
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
		static const std::string S_ExpandBetween( "ExpandBetween" );
		static const std::string S_ExpandBefore( "ExpandBefore" );
		static const std::string S_ExpandFirst( "ExpandFirst" );
		static const std::string S_ExpandEach( "ExpandEach" );
		static const std::string S_ExpandLast( "ExpandLast" );
		static const std::string S_ExpandLone( "ExpandLone" );
		static const std::string S_ExpandEmpty( "ExpandEmpty" );
		static const std::string S_ExpandAfter( "ExpandAfter" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IteratorName, CFGenKbGelSpreadEditObj::getRequiredIteratorName() ) );
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandBetweenNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBetween, CFGenKbGelSpreadEditObj::getOptionalExpandBetweenValue() ) );
		}
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandBeforeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBefore, CFGenKbGelSpreadEditObj::getOptionalExpandBeforeValue() ) );
		}
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandFirstNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandFirst, CFGenKbGelSpreadEditObj::getOptionalExpandFirstValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEach, CFGenKbGelSpreadEditObj::getRequiredExpandEach() ) );
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandLastNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLast, CFGenKbGelSpreadEditObj::getOptionalExpandLastValue() ) );
		}
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandLoneNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLone, CFGenKbGelSpreadEditObj::getOptionalExpandLoneValue() ) );
		}
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandEmptyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEmpty, CFGenKbGelSpreadEditObj::getOptionalExpandEmptyValue() ) );
		}
		if( ! CFGenKbGelSpreadEditObj::isOptionalExpandAfterNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandAfter, CFGenKbGelSpreadEditObj::getOptionalExpandAfterValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelSpreadEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelSpreadBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSpreadEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSpreadEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSpreadEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSpreadEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSpreadEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSpreadEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelSpreadObj* retobj = getSchema()->getGelSpreadTableObj()->realizeGelSpread( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSpreadEditObj::create() {
		cfcore::ICFGenKbGelSpreadObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSpread()->getSchema() )->getGelSpreadTableObj()->createGelSpread( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSpreadEditObj::update() {
		getSchema()->getGelSpreadTableObj()->updateGelSpread( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSpreadEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelSpreadTableObj()->deleteGelSpread( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelSpreadTableObj* CFGenKbGelSpreadEditObj::getGelSpreadTable() {
		return( orig->getSchema()->getGelSpreadTableObj() );
	}

	cfcore::ICFGenKbGelSpreadEditObj* CFGenKbGelSpreadEditObj::getGelSpreadEdit() {
		return( (cfcore::ICFGenKbGelSpreadEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSpreadEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelSpreadObj* CFGenKbGelSpreadEditObj::getOrigAsGelSpread() {
		return( dynamic_cast<cfcore::ICFGenKbGelSpreadObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelSpreadEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelSpreadEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGelSpreadEditObj::getRequiredIteratorName() {
		return( getGelSpreadBuff()->getRequiredIteratorName() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getRequiredIteratorNameReference() {
		return( getGelSpreadBuff()->getRequiredIteratorNameReference() );
	}

	void CFGenKbGelSpreadEditObj::setRequiredIteratorName( const std::string& value ) {
		if( getGelSpreadBuff()->getRequiredIteratorName() != value ) {
			getGelSpreadBuff()->setRequiredIteratorName( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandBetweenNull() {
		return( getGelSpreadBuff()->isOptionalExpandBetweenNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandBetweenValue() {
		return( getGelSpreadBuff()->getOptionalExpandBetweenValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandBetweenReference() {
		return( getGelSpreadBuff()->getOptionalExpandBetweenReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandBetweenNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandBetweenNull() ) {
			getGelSpreadBuff()->setOptionalExpandBetweenNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandBetweenValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandBetweenNull() ) {
			getGelSpreadBuff()->setOptionalExpandBetweenValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandBetweenValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandBetweenValue( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandBeforeNull() {
		return( getGelSpreadBuff()->isOptionalExpandBeforeNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandBeforeValue() {
		return( getGelSpreadBuff()->getOptionalExpandBeforeValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandBeforeReference() {
		return( getGelSpreadBuff()->getOptionalExpandBeforeReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandBeforeNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandBeforeNull() ) {
			getGelSpreadBuff()->setOptionalExpandBeforeNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandBeforeValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandBeforeNull() ) {
			getGelSpreadBuff()->setOptionalExpandBeforeValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandBeforeValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandBeforeValue( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandFirstNull() {
		return( getGelSpreadBuff()->isOptionalExpandFirstNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandFirstValue() {
		return( getGelSpreadBuff()->getOptionalExpandFirstValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandFirstReference() {
		return( getGelSpreadBuff()->getOptionalExpandFirstReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandFirstNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandFirstNull() ) {
			getGelSpreadBuff()->setOptionalExpandFirstNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandFirstValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandFirstNull() ) {
			getGelSpreadBuff()->setOptionalExpandFirstValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandFirstValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandFirstValue( value );
		}
	}

	const std::string& CFGenKbGelSpreadEditObj::getRequiredExpandEach() {
		return( getGelSpreadBuff()->getRequiredExpandEach() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getRequiredExpandEachReference() {
		return( getGelSpreadBuff()->getRequiredExpandEachReference() );
	}

	void CFGenKbGelSpreadEditObj::setRequiredExpandEach( const std::string& value ) {
		if( getGelSpreadBuff()->getRequiredExpandEach() != value ) {
			getGelSpreadBuff()->setRequiredExpandEach( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandLastNull() {
		return( getGelSpreadBuff()->isOptionalExpandLastNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandLastValue() {
		return( getGelSpreadBuff()->getOptionalExpandLastValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandLastReference() {
		return( getGelSpreadBuff()->getOptionalExpandLastReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandLastNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandLastNull() ) {
			getGelSpreadBuff()->setOptionalExpandLastNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandLastValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandLastNull() ) {
			getGelSpreadBuff()->setOptionalExpandLastValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandLastValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandLastValue( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandLoneNull() {
		return( getGelSpreadBuff()->isOptionalExpandLoneNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandLoneValue() {
		return( getGelSpreadBuff()->getOptionalExpandLoneValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandLoneReference() {
		return( getGelSpreadBuff()->getOptionalExpandLoneReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandLoneNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandLoneNull() ) {
			getGelSpreadBuff()->setOptionalExpandLoneNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandLoneValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandLoneNull() ) {
			getGelSpreadBuff()->setOptionalExpandLoneValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandLoneValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandLoneValue( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandEmptyNull() {
		return( getGelSpreadBuff()->isOptionalExpandEmptyNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandEmptyValue() {
		return( getGelSpreadBuff()->getOptionalExpandEmptyValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandEmptyReference() {
		return( getGelSpreadBuff()->getOptionalExpandEmptyReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandEmptyNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandEmptyNull() ) {
			getGelSpreadBuff()->setOptionalExpandEmptyNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandEmptyValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandEmptyNull() ) {
			getGelSpreadBuff()->setOptionalExpandEmptyValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandEmptyValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandEmptyValue( value );
		}
	}

	bool CFGenKbGelSpreadEditObj::isOptionalExpandAfterNull() {
		return( getGelSpreadBuff()->isOptionalExpandAfterNull() );
	}

	const std::string& CFGenKbGelSpreadEditObj::getOptionalExpandAfterValue() {
		return( getGelSpreadBuff()->getOptionalExpandAfterValue() );
	}

	const std::string* CFGenKbGelSpreadEditObj::getOptionalExpandAfterReference() {
		return( getGelSpreadBuff()->getOptionalExpandAfterReference() );
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandAfterNull() {
		if( ! getGelSpreadBuff()->isOptionalExpandAfterNull() ) {
			getGelSpreadBuff()->setOptionalExpandAfterNull();
		}
	}

	void CFGenKbGelSpreadEditObj::setOptionalExpandAfterValue( const std::string& value ) {
		if( getGelSpreadBuff()->isOptionalExpandAfterNull() ) {
			getGelSpreadBuff()->setOptionalExpandAfterValue( value );
		}
		else if( getGelSpreadBuff()->getOptionalExpandAfterValue() != value ) {
			getGelSpreadBuff()->setOptionalExpandAfterValue( value );
		}
	}

	void CFGenKbGelSpreadEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelSpreadBuff* origBuff = getOrigAsGelSpread()->getGelSpreadBuff();
		cfcore::CFGenKbGelSpreadBuff* myBuff = getGelSpreadBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelSpreadEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelSpreadBuff* origBuff = getOrigAsGelSpread()->getGelSpreadBuff();
		cfcore::CFGenKbGelSpreadBuff* myBuff = getGelSpreadBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelSpreadEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
