// Description: C++18 base object instance implementation for CFGenKb GelError.

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
#include <cfgenkbobj/ICFGenKbGelBoilerplateObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelBoilerplateObj.hpp>
#include <cfgenkbobj/ICFGenKbObjPublic.hpp>
#include <cfgenkbobj/CFGenKbGelErrorObj.hpp>

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

	const std::string CFGenKbGelErrorObj::CLASS_NAME( "CFGenKbGelErrorObj" );
	const classcode_t CFGenKbGelErrorObj::CLASS_CODE = 0xa92aL;


	CFGenKbGelErrorObj::CFGenKbGelErrorObj()
	: ICFGenKbGelErrorObj(),
	  CFGenKbGelBoilerplateObj()
	{
	}

	CFGenKbGelErrorObj::CFGenKbGelErrorObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelErrorObj(),
	  CFGenKbGelBoilerplateObj( argSchema )
	{
	}

	CFGenKbGelErrorObj::~CFGenKbGelErrorObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelErrorObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelErrorBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelError()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelErrorObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelErrorObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelErrorObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelErrorObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelErrorBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelBoilerplateObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelErrorObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelErrorObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
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
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelErrorObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelErrorObj::getGenDefName() {
		return( cfcore::CFGenKbGelErrorBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelErrorObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelErrorObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelErrorObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelErrorObj::getObjQualifiedName() {
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

	std::string CFGenKbGelErrorObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelErrorObj::realize() {
		cfcore::ICFGenKbGelErrorObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelErrorTableObj()->realizeGelError(
			(cfcore::ICFGenKbGelErrorObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelErrorObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelErrorObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelErrorTableObj()->readGelErrorByPIdx( getGelErrorBuff()->getRequiredTenantId(),
		getGelErrorBuff()->getRequiredGelCacheId(),
		getGelErrorBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelErrorObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelErrorObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelErrorTableObj()->lockGelError( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelErrorTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelErrorEditObj* CFGenKbGelErrorObj::getGelErrorEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelErrorEditObj*>( edit ) );
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

	std::string CFGenKbGelErrorObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		std::string expansion( getRequiredSourceText() );
		genContext->clearExpansionIsNull();
		return( expansion );
	}

}
