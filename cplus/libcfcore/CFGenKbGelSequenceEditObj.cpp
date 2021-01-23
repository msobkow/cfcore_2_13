// Description: C++18 edit object instance implementation for CFGenKb GelSequence.

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
#include <cfgenkbobj/CFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceEditObj.hpp>

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

	const std::string CFGenKbGelSequenceEditObj::CLASS_NAME( "CFGenKbGelSequenceEditObj" );

	CFGenKbGelSequenceEditObj::CFGenKbGelSequenceEditObj( cfcore::ICFGenKbGelSequenceObj* argOrig )
	: ICFGenKbGelSequenceEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelSequenceEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelSequenceEditObj::~CFGenKbGelSequenceEditObj() {
	}

	const std::string& CFGenKbGelSequenceEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSequenceEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelSequenceBuff::CLASS_CODE );
	}

	bool CFGenKbGelSequenceEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelSequenceEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSequenceEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_FirstInstTenantId( "FirstInstTenantId" );
		static const std::string S_FirstInstGelCacheId( "FirstInstGelCacheId" );
		static const std::string S_FirstInstId( "FirstInstId" );
		static const std::string S_LastInstTenantId( "LastInstTenantId" );
		static const std::string S_LastInstGelCacheId( "LastInstGelCacheId" );
		static const std::string S_LastInstId( "LastInstId" );
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
		if( ! CFGenKbGelSequenceEditObj::isOptionalFirstInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstTenantId, CFGenKbGelSequenceEditObj::getOptionalFirstInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelSequenceEditObj::isOptionalFirstInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstGelCacheId, CFGenKbGelSequenceEditObj::getOptionalFirstInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelSequenceEditObj::isOptionalFirstInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstId, CFGenKbGelSequenceEditObj::getOptionalFirstInstIdValue() ) );
		}
		if( ! CFGenKbGelSequenceEditObj::isOptionalLastInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstTenantId, CFGenKbGelSequenceEditObj::getOptionalLastInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelSequenceEditObj::isOptionalLastInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstGelCacheId, CFGenKbGelSequenceEditObj::getOptionalLastInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelSequenceEditObj::isOptionalLastInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstId, CFGenKbGelSequenceEditObj::getOptionalLastInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelSequenceEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelSequenceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSequenceEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSequenceEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSequenceEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSequenceEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSequenceEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSequenceEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelSequenceObj* retobj = getSchema()->getGelSequenceTableObj()->realizeGelSequence( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSequenceEditObj::create() {
		cfcore::ICFGenKbGelSequenceObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSequence()->getSchema() )->getGelSequenceTableObj()->createGelSequence( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSequenceEditObj::update() {
		getSchema()->getGelSequenceTableObj()->updateGelSequence( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSequenceEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelSequenceTableObj()->deleteGelSequence( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelSequenceTableObj* CFGenKbGelSequenceEditObj::getGelSequenceTable() {
		return( orig->getSchema()->getGelSequenceTableObj() );
	}

	cfcore::ICFGenKbGelSequenceEditObj* CFGenKbGelSequenceEditObj::getGelSequenceEdit() {
		return( (cfcore::ICFGenKbGelSequenceEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSequenceEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelSequenceObj* CFGenKbGelSequenceEditObj::getOrigAsGelSequence() {
		return( dynamic_cast<cfcore::ICFGenKbGelSequenceObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelSequenceEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelSequenceEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	bool CFGenKbGelSequenceEditObj::isOptionalFirstInstTenantIdNull() {
		return( getGelSequenceBuff()->isOptionalFirstInstTenantIdNull() );
	}

	const int64_t CFGenKbGelSequenceEditObj::getOptionalFirstInstTenantIdValue() {
		return( getGelSequenceBuff()->getOptionalFirstInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelSequenceEditObj::getOptionalFirstInstTenantIdReference() {
		return( getGelSequenceBuff()->getOptionalFirstInstTenantIdReference() );
	}

	bool CFGenKbGelSequenceEditObj::isOptionalFirstInstGelCacheIdNull() {
		return( getGelSequenceBuff()->isOptionalFirstInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelSequenceEditObj::getOptionalFirstInstGelCacheIdValue() {
		return( getGelSequenceBuff()->getOptionalFirstInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelSequenceEditObj::getOptionalFirstInstGelCacheIdReference() {
		return( getGelSequenceBuff()->getOptionalFirstInstGelCacheIdReference() );
	}

	bool CFGenKbGelSequenceEditObj::isOptionalFirstInstIdNull() {
		return( getGelSequenceBuff()->isOptionalFirstInstIdNull() );
	}

	const int64_t CFGenKbGelSequenceEditObj::getOptionalFirstInstIdValue() {
		return( getGelSequenceBuff()->getOptionalFirstInstIdValue() );
	}

	const int64_t* CFGenKbGelSequenceEditObj::getOptionalFirstInstIdReference() {
		return( getGelSequenceBuff()->getOptionalFirstInstIdReference() );
	}

	bool CFGenKbGelSequenceEditObj::isOptionalLastInstTenantIdNull() {
		return( getGelSequenceBuff()->isOptionalLastInstTenantIdNull() );
	}

	const int64_t CFGenKbGelSequenceEditObj::getOptionalLastInstTenantIdValue() {
		return( getGelSequenceBuff()->getOptionalLastInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelSequenceEditObj::getOptionalLastInstTenantIdReference() {
		return( getGelSequenceBuff()->getOptionalLastInstTenantIdReference() );
	}

	bool CFGenKbGelSequenceEditObj::isOptionalLastInstGelCacheIdNull() {
		return( getGelSequenceBuff()->isOptionalLastInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelSequenceEditObj::getOptionalLastInstGelCacheIdValue() {
		return( getGelSequenceBuff()->getOptionalLastInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelSequenceEditObj::getOptionalLastInstGelCacheIdReference() {
		return( getGelSequenceBuff()->getOptionalLastInstGelCacheIdReference() );
	}

	bool CFGenKbGelSequenceEditObj::isOptionalLastInstIdNull() {
		return( getGelSequenceBuff()->isOptionalLastInstIdNull() );
	}

	const int64_t CFGenKbGelSequenceEditObj::getOptionalLastInstIdValue() {
		return( getGelSequenceBuff()->getOptionalLastInstIdValue() );
	}

	const int64_t* CFGenKbGelSequenceEditObj::getOptionalLastInstIdReference() {
		return( getGelSequenceBuff()->getOptionalLastInstIdReference() );
	}

	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelSequenceEditObj::getOptionalChildrenCalls( bool forceRead ) {
		std::vector<cfcore::ICFGenKbGelCallObj*> retval;
		retval = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSequence()->getSchema() )->getGelCallTableObj()->readGelCallBySeqIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredGelCacheIdReference(),
					getPKey()->getRequiredGelInstIdReference(),
			forceRead );
		return( retval );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelSequenceEditObj::getOptionalLookupFirstInst( bool forceRead ) {
		cfcore::ICFGenKbGelCallObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelSequenceBuff()->isOptionalFirstInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelSequenceBuff()->isOptionalFirstInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelSequenceBuff()->isOptionalFirstInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSequence()->getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelSequenceBuff()->getOptionalFirstInstTenantIdValue(),
					getGelSequenceBuff()->getOptionalFirstInstGelCacheIdValue(),
					getGelSequenceBuff()->getOptionalFirstInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelSequenceEditObj::setOptionalLookupFirstInst( cfcore::ICFGenKbGelCallObj* value ) {
			
			if( value != NULL ) {
				getGelSequenceBuff()->setOptionalFirstInstTenantIdValue( value->getRequiredTenantId() );
				getGelSequenceBuff()->setOptionalFirstInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelSequenceBuff()->setOptionalFirstInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelSequenceBuff()->setOptionalFirstInstTenantIdNull();
				getGelSequenceBuff()->setOptionalFirstInstGelCacheIdNull();
				getGelSequenceBuff()->setOptionalFirstInstIdNull();
			}
		}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelSequenceEditObj::getOptionalLookupLastInst( bool forceRead ) {
		cfcore::ICFGenKbGelCallObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelSequenceBuff()->isOptionalLastInstTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelSequenceBuff()->isOptionalLastInstGelCacheIdNull() ) {
				anyMissing = true;
			}
			if( getGelSequenceBuff()->isOptionalLastInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSequence()->getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelSequenceBuff()->getOptionalLastInstTenantIdValue(),
					getGelSequenceBuff()->getOptionalLastInstGelCacheIdValue(),
					getGelSequenceBuff()->getOptionalLastInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelSequenceEditObj::setOptionalLookupLastInst( cfcore::ICFGenKbGelCallObj* value ) {
			
			if( value != NULL ) {
				getGelSequenceBuff()->setOptionalLastInstTenantIdValue( value->getRequiredTenantId() );
				getGelSequenceBuff()->setOptionalLastInstGelCacheIdValue( value->getRequiredGelCacheId() );
				getGelSequenceBuff()->setOptionalLastInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelSequenceBuff()->setOptionalLastInstTenantIdNull();
				getGelSequenceBuff()->setOptionalLastInstGelCacheIdNull();
				getGelSequenceBuff()->setOptionalLastInstIdNull();
			}
		}

	void CFGenKbGelSequenceEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelSequenceBuff* origBuff = getOrigAsGelSequence()->getGelSequenceBuff();
		cfcore::CFGenKbGelSequenceBuff* myBuff = getGelSequenceBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelSequenceEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelSequenceBuff* origBuff = getOrigAsGelSequence()->getGelSequenceBuff();
		cfcore::CFGenKbGelSequenceBuff* myBuff = getGelSequenceBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	void CFGenKbGelSequenceEditObj::addCalledInstruction( ICFGenKbGelCacheObj* gelCache, ICFGenKbGelInstructionObj* calledInstruction ) {
		static const std::string S_ProcName( "addCalledInstruction" );
		static const std::string S_UsageMsg( "You are not allowed to add a called instruction while a sequence is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

	std::string CFGenKbGelSequenceEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
