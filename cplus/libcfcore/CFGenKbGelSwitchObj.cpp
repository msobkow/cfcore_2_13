// Description: C++18 base object instance implementation for CFGenKb GelSwitch.

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
#include <cfgenkbobj/CFGenKbGelSwitchObj.hpp>

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

	const std::string CFGenKbGelSwitchObj::CLASS_NAME( "CFGenKbGelSwitchObj" );
	const classcode_t CFGenKbGelSwitchObj::CLASS_CODE = 0xa91eL;

	const std::string& CFGenKbGelSwitchObj::getRequiredValueExpansion() {
		return( getGelSwitchBuff()->getRequiredValueExpansion() );
	}

	const std::string* CFGenKbGelSwitchObj::getRequiredValueExpansionReference() {
		return( getGelSwitchBuff()->getRequiredValueExpansionReference() );
	}

	bool CFGenKbGelSwitchObj::isOptionalNilExpansionNull() {
		return( getGelSwitchBuff()->isOptionalNilExpansionNull() );
	}

	const std::string& CFGenKbGelSwitchObj::getOptionalNilExpansionValue() {
		return( getGelSwitchBuff()->getOptionalNilExpansionValue() );
	}

	const std::string* CFGenKbGelSwitchObj::getOptionalNilExpansionReference() {
		return( getGelSwitchBuff()->getOptionalNilExpansionReference() );
	}

	bool CFGenKbGelSwitchObj::isOptionalEmptyExpansionNull() {
		return( getGelSwitchBuff()->isOptionalEmptyExpansionNull() );
	}

	const std::string& CFGenKbGelSwitchObj::getOptionalEmptyExpansionValue() {
		return( getGelSwitchBuff()->getOptionalEmptyExpansionValue() );
	}

	const std::string* CFGenKbGelSwitchObj::getOptionalEmptyExpansionReference() {
		return( getGelSwitchBuff()->getOptionalEmptyExpansionReference() );
	}

	const std::string& CFGenKbGelSwitchObj::getRequiredDefaultExpansion() {
		return( getGelSwitchBuff()->getRequiredDefaultExpansion() );
	}

	const std::string* CFGenKbGelSwitchObj::getRequiredDefaultExpansionReference() {
		return( getGelSwitchBuff()->getRequiredDefaultExpansionReference() );
	}


	std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> CFGenKbGelSwitchObj::getOptionalChildrenSwitchLimb( bool forceRead ) {
		std::vector<cfcore::ICFGenKbGelSwitchLimbObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchLimbTableObj()->readGelSwitchLimbBySwitchIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredGelCacheId(),
					getPKey()->getRequiredGelInstId(),
			forceRead );
		return( retval );
	}

	CFGenKbGelSwitchObj::CFGenKbGelSwitchObj()
	: ICFGenKbGelSwitchObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelSwitchObj::CFGenKbGelSwitchObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelSwitchObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelSwitchObj::~CFGenKbGelSwitchObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelSwitchObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelSwitchBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSwitch()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelSwitchObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelSwitchObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSwitchObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSwitchObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSwitchBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelSwitchObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchObj" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ValueExpansion, CFGenKbGelSwitchObj::getRequiredValueExpansion() ) );
		if( ! CFGenKbGelSwitchObj::isOptionalNilExpansionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_NilExpansion, CFGenKbGelSwitchObj::getOptionalNilExpansionValue() ) );
		}
		if( ! CFGenKbGelSwitchObj::isOptionalEmptyExpansionNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EmptyExpansion, CFGenKbGelSwitchObj::getOptionalEmptyExpansionValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DefaultExpansion, CFGenKbGelSwitchObj::getRequiredDefaultExpansion() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelSwitchObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelSwitchObj::getGenDefName() {
		return( cfcore::CFGenKbGelSwitchBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSwitchObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSwitchObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSwitchObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSwitchObj::realize() {
		cfcore::ICFGenKbGelSwitchObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchTableObj()->realizeGelSwitch(
			(cfcore::ICFGenKbGelSwitchObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSwitchObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelSwitchObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchTableObj()->readGelSwitchByPIdx( getGelSwitchBuff()->getRequiredTenantId(),
		getGelSwitchBuff()->getRequiredGelCacheId(),
		getGelSwitchBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSwitchObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelSwitchObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchTableObj()->lockGelSwitch( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSwitchTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelSwitchEditObj* CFGenKbGelSwitchObj::getGelSwitchEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchEditObj*>( edit ) );
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

	std::string CFGenKbGelSwitchObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_ValueExpansion( "ValueExpansion" );
		static const std::string S_CouldNotResolveValueExpansion( "Could not resolve value expansion \"" );
		static const std::string S_CouldNotResolveEffectiveExpansion( "Could not resolve effective expansion \"" );
		static const std::string S_DQuote( "\"" );
		static const std::string S_ExpectedValueItemClass( "Expected value item to be one of MssCFGenFileObj, MssCFGenRuleObj, MssCFGenTruncObj, MssCFGenBindObj, MssCFGenReferenceObj, or MssCFGenIterator, not " );
		static const std::string S_ExpectedGenItemClass( "Expected generation item to be one of MssCFGenFileObj, MssCFGenRuleObj, MssCFGenTruncObj, MssCFGenBindObj, MssCFGenReferenceObj, or MssCFGenIterator, not " );
		static const std::string S_NeitherEmptyNorDefaultCompiledProperly( "Neither EmptyExpansion nor DefaultExpansion were compiled properly" );
		static const std::string S_SwitchLimbFor( "Switch limb for " );
		static const std::string S_HasAnEmptyLimbExpansion( " has an empty LimbExpansion" );
		static const std::string S_HasAnEmptyDefaultExpansion( " has an empty DefaultExpansion" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string valueExpansion = getRequiredValueExpansion();
		if( valueExpansion.length() <= 0 ) {
			throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, S_ValueExpansion );
		}

		ICFGenKbGenItemObj* valueItem = genContext->getGenEngine()->findContextItem( genContext, valueExpansion );
		if( valueItem == NULL ) {
			std::string S_Msg( S_CouldNotResolveValueExpansion + valueExpansion + S_DQuote );
			throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
		}

		// Evaluate the value item's expansion

		std::string valueStrValue;

		MssCFGenFileObj* genFileItem = dynamic_cast<MssCFGenFileObj*>( valueItem );
		if( genFileItem != NULL ) {
			valueStrValue = genFileItem->expandBody( genContext );
		}
		else {
			MssCFGenRuleObj* genRuleItem = dynamic_cast<MssCFGenRuleObj*>( valueItem );
			if( genRuleItem != NULL ) {
				valueStrValue = genRuleItem->expandBody( genContext );
			}
			else {
				MssCFGenTruncObj* genTruncItem = dynamic_cast<MssCFGenTruncObj*>( valueItem );
				if( genTruncItem != NULL ) {
					valueStrValue = genTruncItem->expandBody( genContext );
				}
				else {
					MssCFGenBindObj* genBindItem = dynamic_cast<MssCFGenBindObj*>( valueItem );
					if( genBindItem != NULL ) {
						valueStrValue = genBindItem->expandBody( genContext );
					}
					else {
						MssCFGenReferenceObj* genReferenceItem = dynamic_cast<MssCFGenReferenceObj*>( valueItem );
						if( genReferenceItem != NULL ) {
							valueStrValue = genReferenceItem->expandBody( genContext );
						}
						else {
							MssCFGenIteratorObj* genIteratorItem = dynamic_cast<MssCFGenIteratorObj*>( valueItem );
							if( genIteratorItem != NULL ) {
								valueStrValue = genIteratorItem->expandBody( genContext );
							}
							else {
								std::string S_Msg( S_ExpectedValueItemClass + valueItem->getClassName() );
								throw cflib::CFLibUnsupportedClassException( CLASS_NAME, S_ProcName, S_Msg );
							}
						}
					}
				}
			}
		}

		std::string expansion;

		// IF null was evaluated 
		// THEN

		if( genContext->isExpansionNull() ) {

			// Determine the effective expansion

			const std::string* effectiveExpansion = getOptionalNilExpansionReference();
			if( ( effectiveExpansion == NULL ) || ( effectiveExpansion->length() == 0 ) ) {
				effectiveExpansion = &getRequiredDefaultExpansion();
				if( ( effectiveExpansion == NULL ) || ( effectiveExpansion->length() == 0 ) ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_NeitherEmptyNorDefaultCompiledProperly  );
				}
			}

			// Find the generation item corresponding to the effective expansion

			ICFGenKbGenItemObj* genItem = genContext->getGenEngine()->findContextItem( genContext, *effectiveExpansion );
			if( genItem == NULL ) {
				std::string S_Msg( S_CouldNotResolveEffectiveExpansion + *effectiveExpansion + S_DQuote );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
			}

			// Expand the generation item

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
								expansion = genReferenceItem->expandBody( genContext );
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

		// ELSE IF value string value is empty
		// THEN

		}
		else if( valueStrValue.length() == 0 ) {

			// Determine the effective expansion

			const std::string* effectiveExpansion = getOptionalEmptyExpansionReference();
			if( ( effectiveExpansion == NULL ) || ( effectiveExpansion->length() == 0 ) ) {
				effectiveExpansion = &getRequiredDefaultExpansion();
				if( ( effectiveExpansion == NULL ) || ( effectiveExpansion->length() == 0 ) ) {
					throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_NeitherEmptyNorDefaultCompiledProperly  );
				}
			}

			// Find the generation item corresponding to the effective expansion

			ICFGenKbGenItemObj* genItem = genContext->getGenEngine()->findContextItem( genContext, *effectiveExpansion );
			if( genItem == NULL ) {
				std::string S_Msg( S_CouldNotResolveEffectiveExpansion + *effectiveExpansion + S_DQuote );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
			}

			// Expand the generation item

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
								expansion = genReferenceItem->expandBody( genContext );
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

		// ELSE

			std::string effectiveExpansion;

			// Determine the effective expansion

			ICFGenKbGelSwitchLimbObj* switchLimb = genContext->getGenEngine()->getGelSwitchLimbTableObj()->readGelSwitchLimbByPIdx( getRequiredTenantId(),
				getRequiredGelCacheId(),
				getRequiredGelInstId(),
				valueStrValue );
			if( switchLimb != NULL ) {
				effectiveExpansion = switchLimb->getRequiredLimbExpansion();
				if( effectiveExpansion.length() <= 0 ) {
					std::string S_Msg( S_SwitchLimbFor + valueStrValue + S_HasAnEmptyLimbExpansion );
					throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, S_Msg );
				}
			}
			else {
				effectiveExpansion = getRequiredDefaultExpansion();
				if( effectiveExpansion.length() <= 0 ) {
					std::string S_Msg( S_SwitchLimbFor + valueStrValue + S_HasAnEmptyDefaultExpansion );
					throw cflib::CFLibEmptyArgumentException( CLASS_NAME, S_ProcName, S_Msg );
				}
			}

			// Find the generation item corresponding to the effective expansion

			ICFGenKbGenItemObj* genItem = genContext->getGenEngine()->findContextItem(genContext, effectiveExpansion );
			if( genItem == NULL ) {
				std::string S_Msg( S_CouldNotResolveEffectiveExpansion + effectiveExpansion + S_DQuote );
				throw cflib::CFLibRuntimeException( CLASS_NAME, S_ProcName, S_Msg );
			}

			// Expand the generation item

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
								expansion = genReferenceItem->expandBody( genContext );
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

		return( expansion );
	}

}
