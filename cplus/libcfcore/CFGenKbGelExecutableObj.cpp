// Description: C++18 base object instance implementation for CFGenKb GelExecutable.

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
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelSequenceObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGelExecutableObj.hpp>

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

	const std::string CFGenKbGelExecutableObj::CLASS_NAME( "CFGenKbGelExecutableObj" );
	const classcode_t CFGenKbGelExecutableObj::CLASS_CODE = 0xa92eL;

	const int64_t CFGenKbGelExecutableObj::getRequiredGenItemId() {
		return( getGelExecutableBuff()->getRequiredGenItemId() );
	}

	const int64_t* CFGenKbGelExecutableObj::getRequiredGenItemIdReference() {
		return( getGelExecutableBuff()->getRequiredGenItemIdReference() );
	}


	CFGenKbGelExecutableObj::CFGenKbGelExecutableObj()
	: ICFGenKbGelExecutableObj(),
	  CFGenKbGelSequenceObj()
	{
	}

	CFGenKbGelExecutableObj::CFGenKbGelExecutableObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelExecutableObj(),
	  CFGenKbGelSequenceObj( argSchema )
	{
	}

	CFGenKbGelExecutableObj::~CFGenKbGelExecutableObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelExecutableObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelExecutableBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelExecutable()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelExecutableObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelExecutableObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelExecutableObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelExecutableObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelExecutableBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelSequenceObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelExecutableObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelExecutableObj" );
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
		static const std::string S_GenItemId( "GenItemId" );
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
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GenItemId, CFGenKbGelExecutableObj::getRequiredGenItemId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelExecutableObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelExecutableObj::getGenDefName() {
		return( cfcore::CFGenKbGelExecutableBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelExecutableObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelExecutableObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelExecutableObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelExecutableObj::getObjQualifiedName() {
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

	std::string CFGenKbGelExecutableObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelExecutableObj::realize() {
		cfcore::ICFGenKbGelExecutableObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->realizeGelExecutable(
			(cfcore::ICFGenKbGelExecutableObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelExecutableObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelExecutableObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->readGelExecutableByPIdx( getGelExecutableBuff()->getRequiredTenantId(),
		getGelExecutableBuff()->getRequiredGelCacheId(),
		getGelExecutableBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelExecutableObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelExecutableObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->lockGelExecutable( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelExecutableTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelExecutableEditObj* CFGenKbGelExecutableObj::getGelExecutableEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelExecutableEditObj*>( edit ) );
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
	std::string CFGenKbGelExecutableObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		// Preload the instructions to avoid a read storm
		int64_t tentid = getRequiredTenantId();
		int64_t cacheid = getRequiredGelCacheId();
		int64_t instid = getRequiredGelInstId();
		std::vector<ICFGenKbGelCallObj*> calls = genContext->getGenEngine()->getGelCallTableObj()->readGelCallBySeqIdx( &tentid,
			&cacheid,
			&instid );

		std::string expansion;
		std::string subExpansion;

		ICFGenKbGelCallObj* nextCall = getOptionalLookupFirstInst();
		while( nextCall != NULL ) {
			ICFGenKbGelInstructionObj* callInst = nextCall->getOptionalLookupCallInst();
			if( callInst != NULL ) {
				subExpansion = callInst->expand( genContext );
				if( genContext->isExpansionNull() ) {
					expansion.append( "$" + callInst->getRequiredSourceText() + "$" );
				}
				else  {
					expansion.append( subExpansion );
				}
				genContext->clearExpansionIsNull();
			}
			nextCall = nextCall->getOptionalLookupNextInst();
		}

		genContext->clearExpansionIsNull();

		return( expansion );
	}

}
