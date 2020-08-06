// Description: C++18 edit object instance implementation for CFGenKb GelIterator.

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
#include <cfgenkbobj/CFGenKbGelIteratorObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelIteratorEditObj.hpp>

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

	const std::string CFGenKbGelIteratorEditObj::CLASS_NAME( "CFGenKbGelIteratorEditObj" );

	CFGenKbGelIteratorEditObj::CFGenKbGelIteratorEditObj( cfcore::ICFGenKbGelIteratorObj* argOrig )
	: ICFGenKbGelIteratorEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelIteratorEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelIteratorEditObj::~CFGenKbGelIteratorEditObj() {
	}

	const std::string& CFGenKbGelIteratorEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelIteratorEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelIteratorBuff::CLASS_CODE );
	}

	bool CFGenKbGelIteratorEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelIteratorBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelIteratorEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorEditObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_IteratorName, CFGenKbGelIteratorEditObj::getRequiredIteratorName() ) );
		if( ! CFGenKbGelIteratorEditObj::isOptionalExpandBeforeNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandBefore, CFGenKbGelIteratorEditObj::getOptionalExpandBeforeValue() ) );
		}
		if( ! CFGenKbGelIteratorEditObj::isOptionalExpandFirstNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandFirst, CFGenKbGelIteratorEditObj::getOptionalExpandFirstValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEach, CFGenKbGelIteratorEditObj::getRequiredExpandEach() ) );
		if( ! CFGenKbGelIteratorEditObj::isOptionalExpandLastNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLast, CFGenKbGelIteratorEditObj::getOptionalExpandLastValue() ) );
		}
		if( ! CFGenKbGelIteratorEditObj::isOptionalExpandLoneNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLone, CFGenKbGelIteratorEditObj::getOptionalExpandLoneValue() ) );
		}
		if( ! CFGenKbGelIteratorEditObj::isOptionalExpandEmptyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEmpty, CFGenKbGelIteratorEditObj::getOptionalExpandEmptyValue() ) );
		}
		if( ! CFGenKbGelIteratorEditObj::isOptionalExpandAfterNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandAfter, CFGenKbGelIteratorEditObj::getOptionalExpandAfterValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelIteratorEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelIteratorBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelIteratorEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelIteratorEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelIteratorEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelIteratorEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelIteratorEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelIteratorEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelIteratorObj* retobj = getSchema()->getGelIteratorTableObj()->realizeGelIterator( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelIteratorEditObj::create() {
		cfcore::ICFGenKbGelIteratorObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelIterator()->getSchema() )->getGelIteratorTableObj()->createGelIterator( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelIteratorEditObj::update() {
		getSchema()->getGelIteratorTableObj()->updateGelIterator( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelIteratorEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelIteratorTableObj()->deleteGelIterator( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelIteratorTableObj* CFGenKbGelIteratorEditObj::getGelIteratorTable() {
		return( orig->getSchema()->getGelIteratorTableObj() );
	}

	cfcore::ICFGenKbGelIteratorEditObj* CFGenKbGelIteratorEditObj::getGelIteratorEdit() {
		return( (cfcore::ICFGenKbGelIteratorEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelIteratorEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelIteratorObj* CFGenKbGelIteratorEditObj::getOrigAsGelIterator() {
		return( dynamic_cast<cfcore::ICFGenKbGelIteratorObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelIteratorEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelIteratorEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGelIteratorEditObj::getRequiredIteratorName() {
		return( getGelIteratorBuff()->getRequiredIteratorName() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getRequiredIteratorNameReference() {
		return( getGelIteratorBuff()->getRequiredIteratorNameReference() );
	}

	void CFGenKbGelIteratorEditObj::setRequiredIteratorName( const std::string& value ) {
		if( getGelIteratorBuff()->getRequiredIteratorName() != value ) {
			getGelIteratorBuff()->setRequiredIteratorName( value );
		}
	}

	bool CFGenKbGelIteratorEditObj::isOptionalExpandBeforeNull() {
		return( getGelIteratorBuff()->isOptionalExpandBeforeNull() );
	}

	const std::string& CFGenKbGelIteratorEditObj::getOptionalExpandBeforeValue() {
		return( getGelIteratorBuff()->getOptionalExpandBeforeValue() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getOptionalExpandBeforeReference() {
		return( getGelIteratorBuff()->getOptionalExpandBeforeReference() );
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandBeforeNull() {
		if( ! getGelIteratorBuff()->isOptionalExpandBeforeNull() ) {
			getGelIteratorBuff()->setOptionalExpandBeforeNull();
		}
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandBeforeValue( const std::string& value ) {
		if( getGelIteratorBuff()->isOptionalExpandBeforeNull() ) {
			getGelIteratorBuff()->setOptionalExpandBeforeValue( value );
		}
		else if( getGelIteratorBuff()->getOptionalExpandBeforeValue() != value ) {
			getGelIteratorBuff()->setOptionalExpandBeforeValue( value );
		}
	}

	bool CFGenKbGelIteratorEditObj::isOptionalExpandFirstNull() {
		return( getGelIteratorBuff()->isOptionalExpandFirstNull() );
	}

	const std::string& CFGenKbGelIteratorEditObj::getOptionalExpandFirstValue() {
		return( getGelIteratorBuff()->getOptionalExpandFirstValue() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getOptionalExpandFirstReference() {
		return( getGelIteratorBuff()->getOptionalExpandFirstReference() );
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandFirstNull() {
		if( ! getGelIteratorBuff()->isOptionalExpandFirstNull() ) {
			getGelIteratorBuff()->setOptionalExpandFirstNull();
		}
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandFirstValue( const std::string& value ) {
		if( getGelIteratorBuff()->isOptionalExpandFirstNull() ) {
			getGelIteratorBuff()->setOptionalExpandFirstValue( value );
		}
		else if( getGelIteratorBuff()->getOptionalExpandFirstValue() != value ) {
			getGelIteratorBuff()->setOptionalExpandFirstValue( value );
		}
	}

	const std::string& CFGenKbGelIteratorEditObj::getRequiredExpandEach() {
		return( getGelIteratorBuff()->getRequiredExpandEach() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getRequiredExpandEachReference() {
		return( getGelIteratorBuff()->getRequiredExpandEachReference() );
	}

	void CFGenKbGelIteratorEditObj::setRequiredExpandEach( const std::string& value ) {
		if( getGelIteratorBuff()->getRequiredExpandEach() != value ) {
			getGelIteratorBuff()->setRequiredExpandEach( value );
		}
	}

	bool CFGenKbGelIteratorEditObj::isOptionalExpandLastNull() {
		return( getGelIteratorBuff()->isOptionalExpandLastNull() );
	}

	const std::string& CFGenKbGelIteratorEditObj::getOptionalExpandLastValue() {
		return( getGelIteratorBuff()->getOptionalExpandLastValue() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getOptionalExpandLastReference() {
		return( getGelIteratorBuff()->getOptionalExpandLastReference() );
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandLastNull() {
		if( ! getGelIteratorBuff()->isOptionalExpandLastNull() ) {
			getGelIteratorBuff()->setOptionalExpandLastNull();
		}
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandLastValue( const std::string& value ) {
		if( getGelIteratorBuff()->isOptionalExpandLastNull() ) {
			getGelIteratorBuff()->setOptionalExpandLastValue( value );
		}
		else if( getGelIteratorBuff()->getOptionalExpandLastValue() != value ) {
			getGelIteratorBuff()->setOptionalExpandLastValue( value );
		}
	}

	bool CFGenKbGelIteratorEditObj::isOptionalExpandLoneNull() {
		return( getGelIteratorBuff()->isOptionalExpandLoneNull() );
	}

	const std::string& CFGenKbGelIteratorEditObj::getOptionalExpandLoneValue() {
		return( getGelIteratorBuff()->getOptionalExpandLoneValue() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getOptionalExpandLoneReference() {
		return( getGelIteratorBuff()->getOptionalExpandLoneReference() );
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandLoneNull() {
		if( ! getGelIteratorBuff()->isOptionalExpandLoneNull() ) {
			getGelIteratorBuff()->setOptionalExpandLoneNull();
		}
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandLoneValue( const std::string& value ) {
		if( getGelIteratorBuff()->isOptionalExpandLoneNull() ) {
			getGelIteratorBuff()->setOptionalExpandLoneValue( value );
		}
		else if( getGelIteratorBuff()->getOptionalExpandLoneValue() != value ) {
			getGelIteratorBuff()->setOptionalExpandLoneValue( value );
		}
	}

	bool CFGenKbGelIteratorEditObj::isOptionalExpandEmptyNull() {
		return( getGelIteratorBuff()->isOptionalExpandEmptyNull() );
	}

	const std::string& CFGenKbGelIteratorEditObj::getOptionalExpandEmptyValue() {
		return( getGelIteratorBuff()->getOptionalExpandEmptyValue() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getOptionalExpandEmptyReference() {
		return( getGelIteratorBuff()->getOptionalExpandEmptyReference() );
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandEmptyNull() {
		if( ! getGelIteratorBuff()->isOptionalExpandEmptyNull() ) {
			getGelIteratorBuff()->setOptionalExpandEmptyNull();
		}
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandEmptyValue( const std::string& value ) {
		if( getGelIteratorBuff()->isOptionalExpandEmptyNull() ) {
			getGelIteratorBuff()->setOptionalExpandEmptyValue( value );
		}
		else if( getGelIteratorBuff()->getOptionalExpandEmptyValue() != value ) {
			getGelIteratorBuff()->setOptionalExpandEmptyValue( value );
		}
	}

	bool CFGenKbGelIteratorEditObj::isOptionalExpandAfterNull() {
		return( getGelIteratorBuff()->isOptionalExpandAfterNull() );
	}

	const std::string& CFGenKbGelIteratorEditObj::getOptionalExpandAfterValue() {
		return( getGelIteratorBuff()->getOptionalExpandAfterValue() );
	}

	const std::string* CFGenKbGelIteratorEditObj::getOptionalExpandAfterReference() {
		return( getGelIteratorBuff()->getOptionalExpandAfterReference() );
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandAfterNull() {
		if( ! getGelIteratorBuff()->isOptionalExpandAfterNull() ) {
			getGelIteratorBuff()->setOptionalExpandAfterNull();
		}
	}

	void CFGenKbGelIteratorEditObj::setOptionalExpandAfterValue( const std::string& value ) {
		if( getGelIteratorBuff()->isOptionalExpandAfterNull() ) {
			getGelIteratorBuff()->setOptionalExpandAfterValue( value );
		}
		else if( getGelIteratorBuff()->getOptionalExpandAfterValue() != value ) {
			getGelIteratorBuff()->setOptionalExpandAfterValue( value );
		}
	}

	void CFGenKbGelIteratorEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelIteratorBuff* origBuff = getOrigAsGelIterator()->getGelIteratorBuff();
		cfcore::CFGenKbGelIteratorBuff* myBuff = getGelIteratorBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelIteratorEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelIteratorBuff* origBuff = getOrigAsGelIterator()->getGelIteratorBuff();
		cfcore::CFGenKbGelIteratorBuff* myBuff = getGelIteratorBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelIteratorEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
