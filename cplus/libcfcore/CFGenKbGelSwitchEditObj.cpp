// Description: C++18 edit object instance implementation for CFGenKb GelSwitch.

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
#include <cfgenkbobj/CFGenKbGelSwitchObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchEditObj.hpp>

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

	const std::string CFGenKbGelSwitchEditObj::CLASS_NAME( "CFGenKbGelSwitchEditObj" );

	CFGenKbGelSwitchEditObj::CFGenKbGelSwitchEditObj( cfcore::ICFGenKbGelSwitchObj* argOrig )
	: ICFGenKbGelSwitchEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelSwitchEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelSwitchEditObj::~CFGenKbGelSwitchEditObj() {
	}

	const std::string& CFGenKbGelSwitchEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSwitchEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelSwitchBuff::CLASS_CODE );
	}

	bool CFGenKbGelSwitchEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelSwitchEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_ValueExpansion( "ValueExpansion" );
		static const std::string S_NilExpansion( "NilExpansion" );
		static const std::string S_EmptyExpansion( "EmptyExpansion" );
		static const std::string S_DefaultExpansion( "DefaultExpansion" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ValueExpansion, CFGenKbGelSwitchEditObj::getRequiredValueExpansion() ) );
		if( ! CFGenKbGelSwitchEditObj::isOptionalNilExpansionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_NilExpansion, CFGenKbGelSwitchEditObj::getOptionalNilExpansionValue() ) );
		}
		if( ! CFGenKbGelSwitchEditObj::isOptionalEmptyExpansionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EmptyExpansion, CFGenKbGelSwitchEditObj::getOptionalEmptyExpansionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefaultExpansion, CFGenKbGelSwitchEditObj::getRequiredDefaultExpansion() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelSwitchEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelSwitchBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSwitchEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSwitchEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSwitchEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSwitchEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelSwitchObj* retobj = getSchema()->getGelSwitchTableObj()->realizeGelSwitch( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSwitchEditObj::create() {
		cfcore::ICFGenKbGelSwitchObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSwitch()->getSchema() )->getGelSwitchTableObj()->createGelSwitch( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSwitchEditObj::update() {
		getSchema()->getGelSwitchTableObj()->updateGelSwitch( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSwitchEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelSwitchTableObj()->deleteGelSwitch( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelSwitchTableObj* CFGenKbGelSwitchEditObj::getGelSwitchTable() {
		return( orig->getSchema()->getGelSwitchTableObj() );
	}

	cfcore::ICFGenKbGelSwitchEditObj* CFGenKbGelSwitchEditObj::getGelSwitchEdit() {
		return( (cfcore::ICFGenKbGelSwitchEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSwitchEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelSwitchObj* CFGenKbGelSwitchEditObj::getOrigAsGelSwitch() {
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelSwitchEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelSwitchEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGelSwitchEditObj::getRequiredValueExpansion() {
		return( getGelSwitchBuff()->getRequiredValueExpansion() );
	}

	const std::string* CFGenKbGelSwitchEditObj::getRequiredValueExpansionReference() {
		return( getGelSwitchBuff()->getRequiredValueExpansionReference() );
	}

	void CFGenKbGelSwitchEditObj::setRequiredValueExpansion( const std::string& value ) {
		if( getGelSwitchBuff()->getRequiredValueExpansion() != value ) {
			getGelSwitchBuff()->setRequiredValueExpansion( value );
		}
	}

	bool CFGenKbGelSwitchEditObj::isOptionalNilExpansionNull() {
		return( getGelSwitchBuff()->isOptionalNilExpansionNull() );
	}

	const std::string& CFGenKbGelSwitchEditObj::getOptionalNilExpansionValue() {
		return( getGelSwitchBuff()->getOptionalNilExpansionValue() );
	}

	const std::string* CFGenKbGelSwitchEditObj::getOptionalNilExpansionReference() {
		return( getGelSwitchBuff()->getOptionalNilExpansionReference() );
	}

	void CFGenKbGelSwitchEditObj::setOptionalNilExpansionNull() {
		if( ! getGelSwitchBuff()->isOptionalNilExpansionNull() ) {
			getGelSwitchBuff()->setOptionalNilExpansionNull();
		}
	}

	void CFGenKbGelSwitchEditObj::setOptionalNilExpansionValue( const std::string& value ) {
		if( getGelSwitchBuff()->isOptionalNilExpansionNull() ) {
			getGelSwitchBuff()->setOptionalNilExpansionValue( value );
		}
		else if( getGelSwitchBuff()->getOptionalNilExpansionValue() != value ) {
			getGelSwitchBuff()->setOptionalNilExpansionValue( value );
		}
	}

	bool CFGenKbGelSwitchEditObj::isOptionalEmptyExpansionNull() {
		return( getGelSwitchBuff()->isOptionalEmptyExpansionNull() );
	}

	const std::string& CFGenKbGelSwitchEditObj::getOptionalEmptyExpansionValue() {
		return( getGelSwitchBuff()->getOptionalEmptyExpansionValue() );
	}

	const std::string* CFGenKbGelSwitchEditObj::getOptionalEmptyExpansionReference() {
		return( getGelSwitchBuff()->getOptionalEmptyExpansionReference() );
	}

	void CFGenKbGelSwitchEditObj::setOptionalEmptyExpansionNull() {
		if( ! getGelSwitchBuff()->isOptionalEmptyExpansionNull() ) {
			getGelSwitchBuff()->setOptionalEmptyExpansionNull();
		}
	}

	void CFGenKbGelSwitchEditObj::setOptionalEmptyExpansionValue( const std::string& value ) {
		if( getGelSwitchBuff()->isOptionalEmptyExpansionNull() ) {
			getGelSwitchBuff()->setOptionalEmptyExpansionValue( value );
		}
		else if( getGelSwitchBuff()->getOptionalEmptyExpansionValue() != value ) {
			getGelSwitchBuff()->setOptionalEmptyExpansionValue( value );
		}
	}

	const std::string& CFGenKbGelSwitchEditObj::getRequiredDefaultExpansion() {
		return( getGelSwitchBuff()->getRequiredDefaultExpansion() );
	}

	const std::string* CFGenKbGelSwitchEditObj::getRequiredDefaultExpansionReference() {
		return( getGelSwitchBuff()->getRequiredDefaultExpansionReference() );
	}

	void CFGenKbGelSwitchEditObj::setRequiredDefaultExpansion( const std::string& value ) {
		if( getGelSwitchBuff()->getRequiredDefaultExpansion() != value ) {
			getGelSwitchBuff()->setRequiredDefaultExpansion( value );
		}
	}

	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchEditObj::getOptionalChildrenSwitchLimb( bool forceRead ) {
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSwitch()->getSchema() )->getGelSwitchLimbTableObj()->readGelSwitchLimbBySwitchIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredGelCacheId(),
					getPKey()->getRequiredGelInstId(),
			forceRead );
		return( retval );
	}

	void CFGenKbGelSwitchEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelSwitchBuff* origBuff = getOrigAsGelSwitch()->getGelSwitchBuff();
		cfcore::CFGenKbGelSwitchBuff* myBuff = getGelSwitchBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelSwitchEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelSwitchBuff* origBuff = getOrigAsGelSwitch()->getGelSwitchBuff();
		cfcore::CFGenKbGelSwitchBuff* myBuff = getGelSwitchBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelSwitchEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
