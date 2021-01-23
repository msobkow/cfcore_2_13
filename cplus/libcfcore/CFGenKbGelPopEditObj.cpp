// Description: C++18 edit object instance implementation for CFGenKb GelPop.

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
#include <cfgenkbobj/CFGenKbGelPopObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelPopEditObj.hpp>

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

	const std::string CFGenKbGelPopEditObj::CLASS_NAME( "CFGenKbGelPopEditObj" );

	CFGenKbGelPopEditObj::CFGenKbGelPopEditObj( cfcore::ICFGenKbGelPopObj* argOrig )
	: ICFGenKbGelPopEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelPopEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelPopEditObj::~CFGenKbGelPopEditObj() {
	}

	const std::string& CFGenKbGelPopEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelPopEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelPopBuff::CLASS_CODE );
	}

	bool CFGenKbGelPopEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelPopBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelPopEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelPopEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_GoalTypeName( "GoalTypeName" );
		static const std::string S_RemainderTenantId( "RemainderTenantId" );
		static const std::string S_RemainderGelCacheId( "RemainderGelCacheId" );
		static const std::string S_RemainderInstId( "RemainderInstId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_GoalTypeName, CFGenKbGelPopEditObj::getRequiredGoalTypeName() ) );
		if( ! CFGenKbGelPopEditObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelPopEditObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelPopEditObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelPopEditObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelPopEditObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelPopEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelPopBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelPopEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelPopEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelPopEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelPopEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelPopEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelPopEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelPopObj* retobj = getSchema()->getGelPopTableObj()->realizeGelPop( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelPopEditObj::create() {
		cfcore::ICFGenKbGelPopObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelPop()->getSchema() )->getGelPopTableObj()->createGelPop( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelPopEditObj::update() {
		getSchema()->getGelPopTableObj()->updateGelPop( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelPopEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelPopTableObj()->deleteGelPop( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelPopTableObj* CFGenKbGelPopEditObj::getGelPopTable() {
		return( orig->getSchema()->getGelPopTableObj() );
	}

	cfcore::ICFGenKbGelPopEditObj* CFGenKbGelPopEditObj::getGelPopEdit() {
		return( (cfcore::ICFGenKbGelPopEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelPopEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelPopObj* CFGenKbGelPopEditObj::getOrigAsGelPop() {
		return( dynamic_cast<cfcore::ICFGenKbGelPopObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelPopEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelPopEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	const std::string& CFGenKbGelPopEditObj::getRequiredGoalTypeName() {
		return( getGelPopBuff()->getRequiredGoalTypeName() );
	}

	const std::string* CFGenKbGelPopEditObj::getRequiredGoalTypeNameReference() {
		return( getGelPopBuff()->getRequiredGoalTypeNameReference() );
	}

	void CFGenKbGelPopEditObj::setRequiredGoalTypeName( const std::string& value ) {
		if( getGelPopBuff()->getRequiredGoalTypeName() != value ) {
			getGelPopBuff()->setRequiredGoalTypeName( value );
		}
	}

	bool CFGenKbGelPopEditObj::isOptionalRemainderTenantIdNull() {
		return( getGelPopBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelPopEditObj::getOptionalRemainderTenantIdValue() {
		return( getGelPopBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelPopEditObj::getOptionalRemainderTenantIdReference() {
		return( getGelPopBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelPopEditObj::getRequiredRemainderGelCacheId() {
		return( getGelPopBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelPopEditObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelPopBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelPopEditObj::isOptionalRemainderInstIdNull() {
		return( getGelPopBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelPopEditObj::getOptionalRemainderInstIdValue() {
		return( getGelPopBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelPopEditObj::getOptionalRemainderInstIdReference() {
		return( getGelPopBuff()->getOptionalRemainderInstIdReference() );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelPopEditObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelPopBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelPopBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelPop()->getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelPopBuff()->getOptionalRemainderTenantIdValue(),
					getGelPopBuff()->getRequiredRemainderGelCacheId(),
					getGelPopBuff()->getOptionalRemainderInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelPopEditObj::setOptionalLookupRemainder( cfcore::ICFGenKbGelInstructionObj* value ) {
			
			if( value != NULL ) {
				getGelPopBuff()->setOptionalRemainderTenantIdValue( value->getRequiredTenantId() );
				getGelPopBuff()->setRequiredRemainderGelCacheId( value->getRequiredGelCacheId() );
				getGelPopBuff()->setOptionalRemainderInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelPopBuff()->setOptionalRemainderTenantIdNull();
				getGelPopBuff()->setOptionalRemainderInstIdNull();
			}
		}

	void CFGenKbGelPopEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelPopBuff* origBuff = getOrigAsGelPop()->getGelPopBuff();
		cfcore::CFGenKbGelPopBuff* myBuff = getGelPopBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelPopEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelPopBuff* origBuff = getOrigAsGelPop()->getGelPopBuff();
		cfcore::CFGenKbGelPopBuff* myBuff = getGelPopBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelPopEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
