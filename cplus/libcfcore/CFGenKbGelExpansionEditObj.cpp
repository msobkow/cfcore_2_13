// Description: C++18 edit object instance implementation for CFGenKb GelExpansion.

/*
 *	com.github.msobkow.CFCore
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
#include <cfgenkbobj/CFGenKbGelExpansionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelExpansionEditObj.hpp>

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

	const std::string CFGenKbGelExpansionEditObj::CLASS_NAME( "CFGenKbGelExpansionEditObj" );

	CFGenKbGelExpansionEditObj::CFGenKbGelExpansionEditObj( cfcore::ICFGenKbGelExpansionObj* argOrig )
	: ICFGenKbGelExpansionEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelExpansionEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelExpansionEditObj::~CFGenKbGelExpansionEditObj() {
	}

	const std::string& CFGenKbGelExpansionEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelExpansionEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelExpansionBuff::CLASS_CODE );
	}

	bool CFGenKbGelExpansionEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelExpansionEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelExpansionEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_MacroName( "MacroName" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_MacroName, CFGenKbGelExpansionEditObj::getRequiredMacroName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelExpansionEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelExpansionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelExpansionEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelExpansionEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelExpansionEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelExpansionEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelExpansionEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelExpansionEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelExpansionObj* retobj = getSchema()->getGelExpansionTableObj()->realizeGelExpansion( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelExpansionEditObj::create() {
		cfcore::ICFGenKbGelExpansionObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelExpansion()->getSchema() )->getGelExpansionTableObj()->createGelExpansion( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelExpansionEditObj::update() {
		getSchema()->getGelExpansionTableObj()->updateGelExpansion( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelExpansionEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelExpansionTableObj()->deleteGelExpansion( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelExpansionTableObj* CFGenKbGelExpansionEditObj::getGelExpansionTable() {
		return( orig->getSchema()->getGelExpansionTableObj() );
	}

	cfcore::ICFGenKbGelExpansionEditObj* CFGenKbGelExpansionEditObj::getGelExpansionEdit() {
		return( (cfcore::ICFGenKbGelExpansionEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelExpansionEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelExpansionObj* CFGenKbGelExpansionEditObj::getOrigAsGelExpansion() {
		return( dynamic_cast<cfcore::ICFGenKbGelExpansionObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelExpansionEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelExpansionEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGelExpansionEditObj::getRequiredMacroName() {
		return( getGelExpansionBuff()->getRequiredMacroName() );
	}

	const std::string* CFGenKbGelExpansionEditObj::getRequiredMacroNameReference() {
		return( getGelExpansionBuff()->getRequiredMacroNameReference() );
	}

	void CFGenKbGelExpansionEditObj::setRequiredMacroName( const std::string& value ) {
		if( getGelExpansionBuff()->getRequiredMacroName() != value ) {
			getGelExpansionBuff()->setRequiredMacroName( value );
		}
	}

	void CFGenKbGelExpansionEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelExpansionBuff* origBuff = getOrigAsGelExpansion()->getGelExpansionBuff();
		cfcore::CFGenKbGelExpansionBuff* myBuff = getGelExpansionBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelExpansionEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelExpansionBuff* origBuff = getOrigAsGelExpansion()->getGelExpansionBuff();
		cfcore::CFGenKbGelExpansionBuff* myBuff = getGelExpansionBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelExpansionEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
