// Description: C++18 base object instance implementation for CFGenKb GelConstrain.

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
#include <cfgenkbobj/CFGenKbGelConstrainObj.hpp>

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

	const std::string CFGenKbGelConstrainObj::CLASS_NAME( "CFGenKbGelConstrainObj" );
	const classcode_t CFGenKbGelConstrainObj::CLASS_CODE = 0xa92cL;

	bool CFGenKbGelConstrainObj::isOptionalHardConstraintNull() {
		return( getGelConstrainBuff()->isOptionalHardConstraintNull() );
	}

	const int64_t CFGenKbGelConstrainObj::getOptionalHardConstraintValue() {
		return( getGelConstrainBuff()->getOptionalHardConstraintValue() );
	}

	const int64_t* CFGenKbGelConstrainObj::getOptionalHardConstraintReference() {
		return( getGelConstrainBuff()->getOptionalHardConstraintReference() );
	}

	bool CFGenKbGelConstrainObj::isOptionalConstrainingNameNull() {
		return( getGelConstrainBuff()->isOptionalConstrainingNameNull() );
	}

	const std::string& CFGenKbGelConstrainObj::getOptionalConstrainingNameValue() {
		return( getGelConstrainBuff()->getOptionalConstrainingNameValue() );
	}

	const std::string* CFGenKbGelConstrainObj::getOptionalConstrainingNameReference() {
		return( getGelConstrainBuff()->getOptionalConstrainingNameReference() );
	}

	bool CFGenKbGelConstrainObj::isOptionalRemainderTenantIdNull() {
		return( getGelConstrainBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelConstrainObj::getOptionalRemainderTenantIdValue() {
		return( getGelConstrainBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelConstrainObj::getOptionalRemainderTenantIdReference() {
		return( getGelConstrainBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelConstrainObj::getRequiredRemainderGelCacheId() {
		return( getGelConstrainBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelConstrainObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelConstrainBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelConstrainObj::isOptionalRemainderInstIdNull() {
		return( getGelConstrainBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelConstrainObj::getOptionalRemainderInstIdValue() {
		return( getGelConstrainBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelConstrainObj::getOptionalRemainderInstIdReference() {
		return( getGelConstrainBuff()->getOptionalRemainderInstIdReference() );
	}


	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelConstrainObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;
			if( getGelConstrainBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelConstrainBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}
		if( ! anyMissing ) {
			retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelConstrainBuff()->getOptionalRemainderTenantIdValue(),
					getGelConstrainBuff()->getRequiredRemainderGelCacheId(),
					getGelConstrainBuff()->getOptionalRemainderInstIdValue(), forceRead );
		}
		return( retobj );
	}

	CFGenKbGelConstrainObj::CFGenKbGelConstrainObj()
	: ICFGenKbGelConstrainObj(),
	  CFGenKbGelInstructionObj()
	{
	}

	CFGenKbGelConstrainObj::CFGenKbGelConstrainObj( cfcore::ICFGenKbSchemaObj* argSchema )
	: ICFGenKbGelConstrainObj(),
	  CFGenKbGelInstructionObj( argSchema )
	{
	}

	CFGenKbGelConstrainObj::~CFGenKbGelConstrainObj() {
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelConstrainObj::getBuff() {
		if( buff == NULL ) {
			if( isNew ) {
				buff = new cfcore::CFGenKbGelConstrainBuff();
				copyBuffToPKey();
			}
			else {
				// Read the data buff via the backing store
				buff = dynamic_cast<ICFGenKbSchema*>( schema->getBackingStore() )->getTableGelConstrain()->readDerivedByPIdx( dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getAuthorization(),
						getPKey()->getRequiredTenantId(),
						getPKey()->getRequiredGelCacheId(),
						getPKey()->getRequiredGelInstId() );
			}
		}
		return( buff );
	}

	void CFGenKbGelConstrainObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( ( buff != NULL ) && ( buff != value ) ) {
			delete buff;
			buff = NULL;
		}
		buff = value;
		if( buff != NULL ) {
			copyBuffToPKey();
		}
	}

	const std::string& CFGenKbGelConstrainObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelConstrainObj::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelConstrainObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelConstrainObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelConstrainObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_ChainInstTenantId( "ChainInstTenantId" );
		static const std::string S_ChainInstGelCacheId( "ChainInstGelCacheId" );
		static const std::string S_ChainInstGelInstId( "ChainInstGelInstId" );
		static const std::string S_SourceText( "SourceText" );
		static const std::string S_HardConstraint( "HardConstraint" );
		static const std::string S_ConstrainingName( "ConstrainingName" );
		static const std::string S_RemainderTenantId( "RemainderTenantId" );
		static const std::string S_RemainderGelCacheId( "RemainderGelCacheId" );
		static const std::string S_RemainderInstId( "RemainderInstId" );
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
		if( ! CFGenKbGelConstrainObj::isOptionalHardConstraintNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HardConstraint, CFGenKbGelConstrainObj::getOptionalHardConstraintValue() ) );
		}
		if( ! CFGenKbGelConstrainObj::isOptionalConstrainingNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ConstrainingName, CFGenKbGelConstrainObj::getOptionalConstrainingNameValue() ) );
		}
		if( ! CFGenKbGelConstrainObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelConstrainObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelConstrainObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelConstrainObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelConstrainObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	std::string CFGenKbGelConstrainObj::getObjName() {
		std::string objName( CLASS_NAME );
		int64_t val = getRequiredGelInstId();
		objName = cflib::CFLibXmlUtil::formatInt64( val );
		return( objName );
	}

	const std::string CFGenKbGelConstrainObj::getGenDefName() {
		return( cfcore::CFGenKbGelConstrainBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelConstrainObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelConstrainObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelConstrainObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelConstrainObj::getObjQualifiedName() {
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

	std::string CFGenKbGelConstrainObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelConstrainObj::realize() {
		cfcore::ICFGenKbGelConstrainObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelConstrainTableObj()->realizeGelConstrain(
			(cfcore::ICFGenKbGelConstrainObj*)this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelConstrainObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelConstrainObj* retobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelConstrainTableObj()->readGelConstrainByPIdx( getGelConstrainBuff()->getRequiredTenantId(),
		getGelConstrainBuff()->getRequiredGelCacheId(),
		getGelConstrainBuff()->getRequiredGelInstId(), forceRead );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionObj*>( retobj ) );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelConstrainObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_EditAlreadyOpen( "An edit is already open" );
		if( edit != NULL ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_EditAlreadyOpen );
		}
		if( ! getIsNew() ) {
			cfcore::ICFGenKbGelConstrainObj* lockobj = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelConstrainTableObj()->lockGelConstrain( getPKey() );
			lockobj->realize();
		}
		edit = dynamic_cast<ICFGenKbSchemaObj*>( getSchema() )->getGelConstrainTableObj()->newEditInstance( this );
		return( dynamic_cast<cfcore::ICFGenKbGelInstructionEditObj*>( edit ) );
	}

	cfcore::ICFGenKbGelConstrainEditObj* CFGenKbGelConstrainObj::getGelConstrainEdit() {
		return( dynamic_cast<cfcore::ICFGenKbGelConstrainEditObj*>( edit ) );
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
	std::string CFGenKbGelConstrainObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );
		static const std::string S_Msg( "Implementation must be overridden by Constrain specialization" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		throw cflib::CFLibMustOverrideException( CLASS_NAME, S_ProcName, S_Msg );
	}

}
