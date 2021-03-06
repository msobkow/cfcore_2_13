// Description: C++18 base object instance implementation for CFGenKb GelSequence.

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
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceObj.hpp>

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

	const std::string CFGenKbGelSequenceObj::CLASS_NAME( "CFGenKbGelSequenceObj" );
	const classcode_t CFGenKbGelSequenceObj::CLASS_CODE = 0xa91dL;

	bool CFGenKbGelSequenceObj::isOptionalFirstInstTenantIdNull() {
		return( getGelSequenceBuff()->isOptionalFirstInstTenantIdNull() );
	}

	const int64_t CFGenKbGelSequenceObj::getOptionalFirstInstTenantIdValue() {
		return( getGelSequenceBuff()->getOptionalFirstInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelSequenceObj::getOptionalFirstInstTenantIdReference() {
		return( getGelSequenceBuff()->getOptionalFirstInstTenantIdReference() );
	}

	bool CFGenKbGelSequenceObj::isOptionalFirstInstGelCacheIdNull() {
		return( getGelSequenceBuff()->isOptionalFirstInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelSequenceObj::getOptionalFirstInstGelCacheIdValue() {
		return( getGelSequenceBuff()->getOptionalFirstInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelSequenceObj::getOptionalFirstInstGelCacheIdReference() {
		return( getGelSequenceBuff()->getOptionalFirstInstGelCacheIdReference() );
	}

	bool CFGenKbGelSequenceObj::isOptionalFirstInstIdNull() {
		return( getGelSequenceBuff()->isOptionalFirstInstIdNull() );
	}

	const int64_t CFGenKbGelSequenceObj::getOptionalFirstInstIdValue() {
		return( getGelSequenceBuff()->getOptionalFirstInstIdValue() );
	}

	const int64_t* CFGenKbGelSequenceObj::getOptionalFirstInstIdReference() {
		return( getGelSequenceBuff()->getOptionalFirstInstIdReference() );
	}

	bool CFGenKbGelSequenceObj::isOptionalLastInstTenantIdNull() {
		return( getGelSequenceBuff()->isOptionalLastInstTenantIdNull() );
	}

	const int64_t CFGenKbGelSequenceObj::getOptionalLastInstTenantIdValue() {
		return( getGelSequenceBuff()->getOptionalLastInstTenantIdValue() );
	}

	const int64_t* CFGenKbGelSequenceObj::getOptionalLastInstTenantIdReference() {
		return( getGelSequenceBuff()->getOptionalLastInstTenantIdReference() );
	}

	bool CFGenKbGelSequenceObj::isOptionalLastInstGelCacheIdNull() {
		return( getGelSequenceBuff()->isOptionalLastInstGelCacheIdNull() );
	}

	const int64_t CFGenKbGelSequenceObj::getOptionalLastInstGelCacheIdValue() {
		return( getGelSequenceBuff()->getOptionalLastInstGelCacheIdValue() );
	}

	const int64_t* CFGenKbGelSequenceObj::getOptionalLastInstGelCacheIdReference() {
		return( getGelSequenceBuff()->getOptionalLastInstGelCacheIdReference() );
	}

	bool CFGenKbGelSequenceObj::isOptionalLastInstIdNull() {
		return( getGelSequenceBuff()->isOptionalLastInstIdNull() );
	}

	const int64_t CFGenKbGelSequenceObj::getOptionalLastInstIdValue() {
		return( getGelSequenceBuff()->getOptionalLastInstIdValue() );
	}

	const int64_t* CFGenKbGelSequenceObj::getOptionalLastInstIdReference() {
		return( getGelSequenceBuff()->getOptionalLastInstIdReference() );
	}


	std::vector<cfcore::ICFGenKbGelCallObj*> CFGenKbGelSequenceObj::getOptionalChildrenCalls( bool forceRead ) {
		std::vector<cfcore::ICFGenKbGelCallObj*> retval;
		retval = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->readGelCallBySeqIdx( getPKey()->getRequiredTenantIdReference(),
					getPKey()->getRequiredGelCacheIdReference(),
					getPKey()->getRequiredGelInstIdReference(),
			forceRead );
		return( retval );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelSequenceObj::getOptionalLookupFirstInst( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelSequenceBuff()->getOptionalFirstInstTenantIdValue(),
					getGelSequenceBuff()->getOptionalFirstInstGelCacheIdValue(),
					getGelSequenceBuff()->getOptionalFirstInstIdValue(), forceRead );
		}
		return( retobj );
	}

	cfcore::ICFGenKbGelCallObj* CFGenKbGelSequenceObj::getOptionalLookupLastInst( bool forceRead ) {
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
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelCallTableObj()->readGelCallByPIdx( getGelSequenceBuff()->getOptionalLastInstTenantIdValue(),
					getGelSequenceBuff()->getOptionalLastInstGelCacheIdValue(),
					getGelSequenceBuff()->getOptionalLastInstIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelSequenceObj::CFGenKbGelSequenceObj()
	: ICFGenKbGelSequenceObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelSequenceObj::CFGenKbGelSequenceObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelSequenceObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelSequenceObj::~CFGenKbGelSequenceObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelSequenceObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelSequenceBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelSequence()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelSequenceObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelSequenceObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSequenceObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSequenceObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSequenceBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelSequenceObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSequenceObj" );
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
		if( ! CFGenKbGelSequenceObj::isOptionalFirstInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstTenantId, CFGenKbGelSequenceObj::getOptionalFirstInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelSequenceObj::isOptionalFirstInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstGelCacheId, CFGenKbGelSequenceObj::getOptionalFirstInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelSequenceObj::isOptionalFirstInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_FirstInstId, CFGenKbGelSequenceObj::getOptionalFirstInstIdValue() ) );
		}
		if( ! CFGenKbGelSequenceObj::isOptionalLastInstTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstTenantId, CFGenKbGelSequenceObj::getOptionalLastInstTenantIdValue() ) );
		}
		if( ! CFGenKbGelSequenceObj::isOptionalLastInstGelCacheIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstGelCacheId, CFGenKbGelSequenceObj::getOptionalLastInstGelCacheIdValue() ) );
		}
		if( ! CFGenKbGelSequenceObj::isOptionalLastInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_LastInstId, CFGenKbGelSequenceObj::getOptionalLastInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelSequenceObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelSequenceObj::getGenDefName() {
		return( cfcore::CFGenKbGelSequenceBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSequenceObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSequenceObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSequenceObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSequenceObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSequenceObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSequenceObj::realize() {
		cfcore::ICFGenKbGelSequenceObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSequenceTableObj()->realizeGelSequence(
			(cfcore::ICFGenKbGelSequenceObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelSequenceObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelSequenceObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSequenceTableObj()->readGelSequenceByPIdx( getGelSequenceBuff()->getRequiredTenantId(),
		getGelSequenceBuff()->getRequiredGelCacheId(),
		getGelSequenceBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelSequenceObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelSequenceObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSequenceTableObj()->lockGelSequence( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelSequenceTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelSequenceEditObj* CFGenKbGelSequenceObj::getGelSequenceEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelSequenceEditObj*>( edit ) );
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

	void CFGenKbGelSequenceObj::addCalledInstruction( ICFGenKbGelCacheObj* gelCache, ICFGenKbGelInstructionObj* calledInstruction ) {
		ICFGenKbGelCallObj* newCallObj = schema->getGelCallTableObj()->newInstance();
		ICFGenKbGelCallEditObj* editNewCall = dynamic_cast<ICFGenKbGelCallEditObj*>( newCallObj->beginEdit() );
		editNewCall->setRequiredOwnerTenant( getRequiredOwnerTenant() );
		editNewCall->setRequiredContainerGelCache( getRequiredContainerGelCache() );
		editNewCall->setOptionalParentSeqInst( this );
		editNewCall->setOptionalLookupCallInst( calledInstruction );
		editNewCall->setOptionalLookupNextInst( NULL );
		ICFGenKbGelSequenceEditObj* editMe = dynamic_cast<ICFGenKbGelSequenceEditObj*>( beginEdit() );
		ICFGenKbGelCallObj* lastObj = getOptionalLookupLastInst();
		editNewCall->setOptionalLookupPrevInst( lastObj );
		newCallObj = dynamic_cast<ICFGenKbGelCallObj*>( editNewCall->create() );
		if( lastObj != NULL ) {
			ICFGenKbGelCallEditObj* editLast = dynamic_cast<ICFGenKbGelCallEditObj*>( lastObj->beginEdit() );
			editLast->setOptionalLookupNextInst( newCallObj );
			editLast->update();
			editLast = NULL;
		}
		else {
			editMe->setOptionalLookupFirstInst( newCallObj );
		}
		editMe->setOptionalLookupLastInst( newCallObj );
		editMe->update();
		editMe = NULL;
	}

	std::string CFGenKbGelSequenceObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string emptyString;
		std::string expansion;
		std::string subExpansion;

		// Preload the instructions to avoid a read storm
		int64_t tentid = getRequiredTenantId();
		int64_t cacheid = getRequiredGelCacheId();
		int64_t instid = getRequiredGelInstId();
		std::vector<ICFGenKbGelCallObj*> calls = genContext->getGenEngine()->getGelCallTableObj()->readGelCallBySeqIdx( &tentid,
			&cacheid,
			&instid );

		ICFGenKbGelInstructionObj* nextCalled;
		ICFGenKbGelCallObj* nextCall = getOptionalLookupFirstInst();
		while( nextCall != NULL ) {
			nextCalled = nextCall->getOptionalLookupCallInst();
			if( nextCalled != NULL ) {
				subExpansion = nextCalled->expand( genContext );
				if( genContext->isExpansionNull() ) {
					subExpansion = "$" + nextCalled->getRequiredSourceText() + "$";
					genContext->clearExpansionIsNull();
				}
				expansion.append( subExpansion );
			}
			nextCall = nextCall->getOptionalLookupNextInst();
		}

		return( expansion );
	}

}
