// Description: C++18 base object instance implementation for CFGenKb GelExpansion.

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
#include <cfgenkbobj/CFGenKbGelExpansionObj.hpp>

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

	const std::string CFGenKbGelExpansionObj::CLASS_NAME( "CFGenKbGelExpansionObj" );
	const classcode_t CFGenKbGelExpansionObj::CLASS_CODE = 0xa92fL;

	const std::string& CFGenKbGelExpansionObj::getRequiredMacroName() {
		return( getGelExpansionBuff()->getRequiredMacroName() );
	}

	const std::string* CFGenKbGelExpansionObj::getRequiredMacroNameReference() {
		return( getGelExpansionBuff()->getRequiredMacroNameReference() );
	}


	CFGenKbGelExpansionObj::CFGenKbGelExpansionObj()
	: ICFGenKbGelExpansionObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelExpansionObj::CFGenKbGelExpansionObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelExpansionObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelExpansionObj::~CFGenKbGelExpansionObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelExpansionObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelExpansionBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExpansion()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelExpansionObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelExpansionObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelExpansionObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelExpansionObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelExpansionBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelExpansionObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelExpansionObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_MacroName, CFGenKbGelExpansionObj::getRequiredMacroName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelExpansionObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelExpansionObj::getGenDefName() {
		return( cfcore::CFGenKbGelExpansionBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelExpansionObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelExpansionObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelExpansionObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelExpansionObj::getObjQualifiedName() {
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

	std::string CFGenKbGelExpansionObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelExpansionObj::realize() {
		cfcore::ICFGenKbGelExpansionObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExpansionTableObj()->realizeGelExpansion(
			(cfcore::ICFGenKbGelExpansionObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelExpansionObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelExpansionObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExpansionTableObj()->readGelExpansionByPIdx( getGelExpansionBuff()->getRequiredTenantId(),
		getGelExpansionBuff()->getRequiredGelCacheId(),
		getGelExpansionBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelExpansionObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelExpansionObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExpansionTableObj()->lockGelExpansion( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExpansionTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelExpansionEditObj* CFGenKbGelExpansionObj::getGelExpansionEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelExpansionEditObj*>( edit ) );
	}

}

#include <msscf/MssCFEngine.hpp>
#include <msscf/MssCFGenContext.hpp>
#include <msscf/MssCFGenContextFactory.hpp>
#include <msscf/MssCFGenFileObj.hpp>
#include <msscf/MssCFGenRuleObj.hpp>
#include <msscf/MssCFGenTruncObj.hpp>
#include <msscf/MssCFGenBindObj.hpp>
#include <msscf/MssCFGenReferenceObj.hpp>
#include <msscf/MssCFGenIteratorObj.hpp>

namespace cfcore {

	std::string CFGenKbGelExpansionObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_Dollar( "$" );
		static const std::string S_ExpectedGenItemClass( "Expected generation item to be one of MssCFGenFileObj, MssCFGenRuleObj, MssCFGenTruncObj, MssCFGenBindObj, MssCFGenReferenceObj, or MssCFGenIterator, not " );
		static const std::string S_CannotExpandReference( "Cannot expand reference \"" );
		static const std::string S_Directly( "\" directly" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string expansion;

		ICFGenKbGenItemObj* genItem = genContext->getGenEngine()->findContextItem( genContext, getRequiredMacroName() );
		if( genItem != NULL ) {

			MssCFGenFileObj* genFileItem = dynamic_cast<MssCFGenFileObj*>( genItem );
			if( genFileItem != NULL ) {
				expansion = genFileItem->expandBody( genContext );
			}
			else {
				MssCFGenRuleObj* genRuleItem = dynamic_cast<MssCFGenRuleObj*>( genItem );
				if( genRuleItem != NULL ) {
					expansion = genRuleItem->expandBody( genContext );
				}
				else {
					MssCFGenTruncObj* genTruncItem = dynamic_cast<MssCFGenTruncObj*>( genItem );
					if( genTruncItem != NULL ) {
						expansion = genTruncItem->expandBody( genContext );
					}
					else {
						MssCFGenBindObj* genBindItem = dynamic_cast<MssCFGenBindObj*>( genItem );
						if( genBindItem != NULL ) {
							expansion = genBindItem->expandBody( genContext );
						}
						else {
							MssCFGenReferenceObj* genReferenceItem = dynamic_cast<MssCFGenReferenceObj*>( genItem );
							if( genReferenceItem != NULL ) {
								std::string S_Msg( S_CannotExpandReference + genItem->getRequiredName() + S_Directly );
								throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
							}
							else {
								MssCFGenIteratorObj* genIteratorItem = dynamic_cast<MssCFGenIteratorObj*>( genItem );
								if( genIteratorItem != NULL ) {
									expansion = genIteratorItem->expandBody( genContext );
								}
								else {
									std::string S_Msg( S_ExpectedGenItemClass + genItem->getClassName() );
									throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
								}
							}
						}
					}
				}
			}
		}
		else {
			expansion.append( S_Dollar + getRequiredMacroName() + S_Dollar );
		}

		genContext->clearExpansionIsNull();

		return( expansion );
	}

}
