// Description: C++18 edit object instance implementation for CFGenKb GelConstrain.

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
#include <cfgenkbobj/CFGenKbGelConstrainObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/ICFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionObj.hpp>
#include <cfgenkbobj/CFGenKbGelInstructionEditObj.hpp>
#include <cfgenkbobj/CFGenKbGelConstrainEditObj.hpp>

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

	const std::string CFGenKbGelConstrainEditObj::CLASS_NAME( "CFGenKbGelConstrainEditObj" );

	CFGenKbGelConstrainEditObj::CFGenKbGelConstrainEditObj( cfcore::ICFGenKbGelConstrainObj* argOrig )
	: ICFGenKbGelConstrainEditObj(),
	  CFGenKbGelInstructionEditObj( argOrig )
	{
		static const std::string S_ProcName( "CFGenKbGelConstrainEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
	}

	CFGenKbGelConstrainEditObj::~CFGenKbGelConstrainEditObj() {
	}

	const std::string& CFGenKbGelConstrainEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelConstrainEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelConstrainBuff::CLASS_CODE );
	}

	bool CFGenKbGelConstrainEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelConstrainBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( CFGenKbGelInstructionEditObj::implementsClassCode( value ) );
		}
	}

	std::string CFGenKbGelConstrainEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelConstrainEditObj" );
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
		if( ! CFGenKbGelConstrainEditObj::isOptionalHardConstraintNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_HardConstraint, CFGenKbGelConstrainEditObj::getOptionalHardConstraintValue() ) );
		}
		if( ! CFGenKbGelConstrainEditObj::isOptionalConstrainingNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ConstrainingName, CFGenKbGelConstrainEditObj::getOptionalConstrainingNameValue() ) );
		}
		if( ! CFGenKbGelConstrainEditObj::isOptionalRemainderTenantIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderTenantId, CFGenKbGelConstrainEditObj::getOptionalRemainderTenantIdValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderGelCacheId, CFGenKbGelConstrainEditObj::getRequiredRemainderGelCacheId() ) );
		if( ! CFGenKbGelConstrainEditObj::isOptionalRemainderInstIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_RemainderInstId, CFGenKbGelConstrainEditObj::getOptionalRemainderInstIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	const std::string CFGenKbGelConstrainEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelConstrainBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelConstrainEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelConstrainEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelConstrainEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelConstrainEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelConstrainEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelConstrainEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelConstrainObj* retobj = getSchema()->getGelConstrainTableObj()->realizeGelConstrain( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelConstrainEditObj::create() {
		cfcore::ICFGenKbGelConstrainObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelConstrain()->getSchema() )->getGelConstrainTableObj()->createGelConstrain( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelConstrainEditObj::update() {
		getSchema()->getGelConstrainTableObj()->updateGelConstrain( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelConstrainEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelConstrainTableObj()->deleteGelConstrain( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelConstrainTableObj* CFGenKbGelConstrainEditObj::getGelConstrainTable() {
		return( orig->getSchema()->getGelConstrainTableObj() );
	}

	cfcore::ICFGenKbGelConstrainEditObj* CFGenKbGelConstrainEditObj::getGelConstrainEdit() {
		return( (cfcore::ICFGenKbGelConstrainEditObj*)this );
	}

	cfcore::ICFGenKbGelInstructionEditObj* CFGenKbGelConstrainEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	cfcore::ICFGenKbGelConstrainObj* CFGenKbGelConstrainEditObj::getOrigAsGelConstrain() {
		return( dynamic_cast<cfcore::ICFGenKbGelConstrainObj*>( orig ) );
	}

	cfcore::CFGenKbGelInstructionBuff* CFGenKbGelConstrainEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelConstrainEditObj::setBuff( cfcore::CFGenKbGelInstructionBuff* value ) {
		if( buff != value ) {
			CFGenKbGelInstructionEditObj::setBuff( value );
		}
	}

	bool CFGenKbGelConstrainEditObj::isOptionalHardConstraintNull() {
		return( getGelConstrainBuff()->isOptionalHardConstraintNull() );
	}

	const int64_t CFGenKbGelConstrainEditObj::getOptionalHardConstraintValue() {
		return( getGelConstrainBuff()->getOptionalHardConstraintValue() );
	}

	const int64_t* CFGenKbGelConstrainEditObj::getOptionalHardConstraintReference() {
		return( getGelConstrainBuff()->getOptionalHardConstraintReference() );
	}

	void CFGenKbGelConstrainEditObj::setOptionalHardConstraintNull() {
		if( ! getGelConstrainBuff()->isOptionalHardConstraintNull() ) {
			getGelConstrainBuff()->setOptionalHardConstraintNull();
		}
	}

	void CFGenKbGelConstrainEditObj::setOptionalHardConstraintValue( const int64_t value ) {
		if( getGelConstrainBuff()->isOptionalHardConstraintNull() ) {
			getGelConstrainBuff()->setOptionalHardConstraintValue( value );
		}
		else if( getGelConstrainBuff()->getOptionalHardConstraintValue() != value ) {
			getGelConstrainBuff()->setOptionalHardConstraintValue( value );
		}
	}

	bool CFGenKbGelConstrainEditObj::isOptionalConstrainingNameNull() {
		return( getGelConstrainBuff()->isOptionalConstrainingNameNull() );
	}

	const std::string& CFGenKbGelConstrainEditObj::getOptionalConstrainingNameValue() {
		return( getGelConstrainBuff()->getOptionalConstrainingNameValue() );
	}

	const std::string* CFGenKbGelConstrainEditObj::getOptionalConstrainingNameReference() {
		return( getGelConstrainBuff()->getOptionalConstrainingNameReference() );
	}

	void CFGenKbGelConstrainEditObj::setOptionalConstrainingNameNull() {
		if( ! getGelConstrainBuff()->isOptionalConstrainingNameNull() ) {
			getGelConstrainBuff()->setOptionalConstrainingNameNull();
		}
	}

	void CFGenKbGelConstrainEditObj::setOptionalConstrainingNameValue( const std::string& value ) {
		if( getGelConstrainBuff()->isOptionalConstrainingNameNull() ) {
			getGelConstrainBuff()->setOptionalConstrainingNameValue( value );
		}
		else if( getGelConstrainBuff()->getOptionalConstrainingNameValue() != value ) {
			getGelConstrainBuff()->setOptionalConstrainingNameValue( value );
		}
	}

	bool CFGenKbGelConstrainEditObj::isOptionalRemainderTenantIdNull() {
		return( getGelConstrainBuff()->isOptionalRemainderTenantIdNull() );
	}

	const int64_t CFGenKbGelConstrainEditObj::getOptionalRemainderTenantIdValue() {
		return( getGelConstrainBuff()->getOptionalRemainderTenantIdValue() );
	}

	const int64_t* CFGenKbGelConstrainEditObj::getOptionalRemainderTenantIdReference() {
		return( getGelConstrainBuff()->getOptionalRemainderTenantIdReference() );
	}

	const int64_t CFGenKbGelConstrainEditObj::getRequiredRemainderGelCacheId() {
		return( getGelConstrainBuff()->getRequiredRemainderGelCacheId() );
	}

	const int64_t* CFGenKbGelConstrainEditObj::getRequiredRemainderGelCacheIdReference() {
		return( getGelConstrainBuff()->getRequiredRemainderGelCacheIdReference() );
	}

	bool CFGenKbGelConstrainEditObj::isOptionalRemainderInstIdNull() {
		return( getGelConstrainBuff()->isOptionalRemainderInstIdNull() );
	}

	const int64_t CFGenKbGelConstrainEditObj::getOptionalRemainderInstIdValue() {
		return( getGelConstrainBuff()->getOptionalRemainderInstIdValue() );
	}

	const int64_t* CFGenKbGelConstrainEditObj::getOptionalRemainderInstIdReference() {
		return( getGelConstrainBuff()->getOptionalRemainderInstIdReference() );
	}

	cfcore::ICFGenKbGelInstructionObj* CFGenKbGelConstrainEditObj::getOptionalLookupRemainder( bool forceRead ) {
		cfcore::ICFGenKbGelInstructionObj* retobj = NULL;
		bool anyMissing = false;

			if( getGelConstrainBuff()->isOptionalRemainderTenantIdNull() ) {
				anyMissing = true;
			}
			if( getGelConstrainBuff()->isOptionalRemainderInstIdNull() ) {
				anyMissing = true;
			}		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelConstrain()->getSchema() )->getGelInstructionTableObj()->readGelInstructionByPIdx( getGelConstrainBuff()->getOptionalRemainderTenantIdValue(),
					getGelConstrainBuff()->getRequiredRemainderGelCacheId(),
					getGelConstrainBuff()->getOptionalRemainderInstIdValue() );
		}
		return( retobj );
	}

	void CFGenKbGelConstrainEditObj::setOptionalLookupRemainder( cfcore::ICFGenKbGelInstructionObj* value ) {
			
			if( value != NULL ) {
				getGelConstrainBuff()->setOptionalRemainderTenantIdValue( value->getRequiredTenantId() );
				getGelConstrainBuff()->setRequiredRemainderGelCacheId( value->getRequiredGelCacheId() );
				getGelConstrainBuff()->setOptionalRemainderInstIdValue( value->getRequiredGelInstId() );
			}
			else {
				getGelConstrainBuff()->setOptionalRemainderTenantIdNull();
				getGelConstrainBuff()->setOptionalRemainderInstIdNull();
			}
		}

	void CFGenKbGelConstrainEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelConstrainBuff* origBuff = getOrigAsGelConstrain()->getGelConstrainBuff();
		cfcore::CFGenKbGelConstrainBuff* myBuff = getGelConstrainBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelConstrainEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelConstrainBuff* origBuff = getOrigAsGelConstrain()->getGelConstrainBuff();
		cfcore::CFGenKbGelConstrainBuff* myBuff = getGelConstrainBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

	std::string CFGenKbGelConstrainEditObj::expand( MssCFGenContext* genContext ) {
		static const std::string S_ProcName( "expand" );
		static const std::string S_GenContext( "genContext" );

		if( genContext == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME, S_ProcName, 1, S_GenContext );
		}

		static const std::string S_UsageMsg( "You are not allowed to expand an object while it is being edited" );
		throw cflib::CFLibUsageException( CLASS_NAME, S_ProcName, S_UsageMsg );
	}

}
