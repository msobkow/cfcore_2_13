// Description: C++18 edit object instance implementation for CFGenKb GelSwitchLimb.

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
#include <cfgenkbobj/CFGenKbGelSwitchLimbObj.hpp>
#include <cfgenkbobj/CFGenKbGelSwitchLimbEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbGelSwitchLimbEditObj::CLASS_NAME( "CFGenKbGelSwitchLimbEditObj" );

	CFGenKbGelSwitchLimbEditObj::CFGenKbGelSwitchLimbEditObj( cfcore::ICFGenKbGelSwitchLimbObj* argOrig )
	: ICFGenKbGelSwitchLimbEditObj()
	{
		static const std::string S_ProcName( "CFGenKbGelSwitchLimbEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbGelSwitchLimbBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbGelSwitchLimbBuff*>( origBuff->clone() );
	}

	CFGenKbGelSwitchLimbEditObj::~CFGenKbGelSwitchLimbEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbGelSwitchLimbEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSwitchLimbEditObj::getClassCode() const {
		return( cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE );
	}

	bool CFGenKbGelSwitchLimbEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbGelSwitchLimbBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbGelSwitchLimbEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchLimbEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_LimbName( "LimbName" );
		static const std::string S_LimbExpansion( "LimbExpansion" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbGelSwitchLimbEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, CFGenKbGelSwitchLimbEditObj::getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, CFGenKbGelSwitchLimbEditObj::getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, CFGenKbGelSwitchLimbEditObj::getRequiredGelInstId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbName, CFGenKbGelSwitchLimbEditObj::getRequiredLimbName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbExpansion, CFGenKbGelSwitchLimbEditObj::getRequiredLimbExpansion() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbGelSwitchLimbEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbGelSwitchLimbEditObj::setRequiredRevision( int32_t value ) {
		getGelSwitchLimbBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbGelSwitchLimbEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		objName.clear();
		objName.append( getRequiredLimbName() );
		return( objName );
	}

	const std::string CFGenKbGelSwitchLimbEditObj::getGenDefName() {
		return( cfcore::CFGenKbGelSwitchLimbBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbEditObj::getScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbEditObj::getObjScope() {
		return( NULL );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbGelSwitchLimbEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbGelSwitchLimbEditObj::getObjQualifiedName() {
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

	std::string CFGenKbGelSwitchLimbEditObj::getObjFullName() {
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

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbGelSwitchLimbObj* retobj = getSchema()->getGelSwitchLimbTableObj()->realizeGelSwitchLimb( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbGelSwitchLimbObj* retval = getOrigAsGelSwitchLimb()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbEditObj::create() {
		cfcore::ICFGenKbGelSwitchLimbObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSwitchLimb()->getSchema() )->getGelSwitchLimbTableObj()->createGelSwitchLimb( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbEditObj::update() {
		getSchema()->getGelSwitchLimbTableObj()->updateGelSwitchLimb( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getGelSwitchLimbTableObj()->deleteGelSwitchLimb( this );
		return( NULL );
	}

	cfcore::ICFGenKbGelSwitchLimbTableObj* CFGenKbGelSwitchLimbEditObj::getGelSwitchLimbTable() {
		return( orig->getSchema()->getGelSwitchLimbTableObj() );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbEditObj::getGelSwitchLimbEdit() {
		return( (cfcore::ICFGenKbGelSwitchLimbEditObj*)this );
	}

	cfcore::ICFGenKbGelSwitchLimbEditObj* CFGenKbGelSwitchLimbEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbGelSwitchLimbEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbGelSwitchLimbObj* CFGenKbGelSwitchLimbEditObj::getOrigAsGelSwitchLimb() {
		return( dynamic_cast<cfcore::ICFGenKbGelSwitchLimbObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbGelSwitchLimbEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbGelSwitchLimbBuff* CFGenKbGelSwitchLimbEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbGelSwitchLimbEditObj::setBuff( cfcore::CFGenKbGelSwitchLimbBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbGelSwitchLimbPKey* CFGenKbGelSwitchLimbEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbGelSwitchLimbEditObj::setPKey( cfcore::CFGenKbGelSwitchLimbPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbGelSwitchLimbEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbGelSwitchLimbEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int64_t CFGenKbGelSwitchLimbEditObj::getRequiredTenantId() {
		return( getPKey()->getRequiredTenantId() );
	}

	const int64_t* CFGenKbGelSwitchLimbEditObj::getRequiredTenantIdReference() {
		return( getPKey()->getRequiredTenantIdReference() );
	}

	const int64_t CFGenKbGelSwitchLimbEditObj::getRequiredGelCacheId() {
		return( getPKey()->getRequiredGelCacheId() );
	}

	const int64_t* CFGenKbGelSwitchLimbEditObj::getRequiredGelCacheIdReference() {
		return( getPKey()->getRequiredGelCacheIdReference() );
	}

	const int64_t CFGenKbGelSwitchLimbEditObj::getRequiredGelInstId() {
		return( getPKey()->getRequiredGelInstId() );
	}

	const int64_t* CFGenKbGelSwitchLimbEditObj::getRequiredGelInstIdReference() {
		return( getPKey()->getRequiredGelInstIdReference() );
	}

	const std::string& CFGenKbGelSwitchLimbEditObj::getRequiredLimbName() {
		return( getPKey()->getRequiredLimbName() );
	}

	const std::string* CFGenKbGelSwitchLimbEditObj::getRequiredLimbNameReference() {
		return( getPKey()->getRequiredLimbNameReference() );
	}

	void CFGenKbGelSwitchLimbEditObj::setRequiredLimbName( const std::string& value ) {
		if( getPKey()->getRequiredLimbName() != value ) {
			getPKey()->setRequiredLimbName( value );
		}
		if( getGelSwitchLimbBuff()->getRequiredLimbName() != value ) {
			getGelSwitchLimbBuff()->setRequiredLimbName( value );
		}
	}

	const std::string& CFGenKbGelSwitchLimbEditObj::getRequiredLimbExpansion() {
		return( getGelSwitchLimbBuff()->getRequiredLimbExpansion() );
	}

	const std::string* CFGenKbGelSwitchLimbEditObj::getRequiredLimbExpansionReference() {
		return( getGelSwitchLimbBuff()->getRequiredLimbExpansionReference() );
	}

	void CFGenKbGelSwitchLimbEditObj::setRequiredLimbExpansion( const std::string& value ) {
		if( getGelSwitchLimbBuff()->getRequiredLimbExpansion() != value ) {
			getGelSwitchLimbBuff()->setRequiredLimbExpansion( value );
		}
	}

	cfcore::ICFGenKbGelSwitchObj* CFGenKbGelSwitchLimbEditObj::getRequiredParentSwitch( bool forceRead ) {
		cfcore::ICFGenKbGelSwitchObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSwitchLimb()->getSchema() )->getGelSwitchTableObj()->readGelSwitchByPIdx( getPKey()->getRequiredTenantId(),
					getPKey()->getRequiredGelCacheId(),
					getPKey()->getRequiredGelInstId() );
		}
		return( retobj );
	}

	void CFGenKbGelSwitchLimbEditObj::setRequiredParentSwitch( cfcore::ICFGenKbGelSwitchObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredTenantId() );
				getGelSwitchLimbBuff()->setRequiredTenantId( value->getRequiredTenantId() );
				getPKey()->setRequiredGelCacheId
( value->getRequiredGelCacheId() );
				getGelSwitchLimbBuff()->setRequiredGelCacheId( value->getRequiredGelCacheId() );
				getPKey()->setRequiredGelInstId
( value->getRequiredGelInstId() );
				getGelSwitchLimbBuff()->setRequiredGelInstId( value->getRequiredGelInstId() );
			}
			else {
			}
		}

	cfcore::ICFGenKbTenantObj* CFGenKbGelSwitchLimbEditObj::getRequiredOwnerTenant( bool forceRead ) {
		cfcore::ICFGenKbTenantObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsGelSwitchLimb()->getSchema() )->getTenantTableObj()->readTenantByIdIdx( getPKey()->getRequiredTenantId() );
		}
		return( retobj );
	}

	void CFGenKbGelSwitchLimbEditObj::setRequiredOwnerTenant( cfcore::ICFGenKbTenantObj* value ) {
			
			if( value != NULL ) {
				getPKey()->setRequiredTenantId
( value->getRequiredId() );
				getGelSwitchLimbBuff()->setRequiredTenantId( value->getRequiredId() );
			}
		}

	void CFGenKbGelSwitchLimbEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbGelSwitchLimbPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelSwitchLimbBuff* tableBuff = getGelSwitchLimbBuff();
		tableBuff->setRequiredTenantId( tablePKey->getRequiredTenantId() );
		tableBuff->setRequiredGelCacheId( tablePKey->getRequiredGelCacheId() );
		tableBuff->setRequiredGelInstId( tablePKey->getRequiredGelInstId() );
		tableBuff->setRequiredLimbName( tablePKey->getRequiredLimbName() );
	}

	void CFGenKbGelSwitchLimbEditObj::copyBuffToPKey() {
		cfcore::CFGenKbGelSwitchLimbPKey* tablePKey = getPKey();
		cfcore::CFGenKbGelSwitchLimbBuff* tableBuff = getGelSwitchLimbBuff();
		tablePKey->setRequiredTenantId( tableBuff->getRequiredTenantId() );
		tablePKey->setRequiredGelCacheId( tableBuff->getRequiredGelCacheId() );
		tablePKey->setRequiredGelInstId( tableBuff->getRequiredGelInstId() );
		tablePKey->setRequiredLimbName( tableBuff->getRequiredLimbName() );
	}

	void CFGenKbGelSwitchLimbEditObj::copyBuffToOrig() {
		cfcore::CFGenKbGelSwitchLimbBuff* origBuff = getOrigAsGelSwitchLimb()->getGelSwitchLimbBuff();
		cfcore::CFGenKbGelSwitchLimbBuff* myBuff = getGelSwitchLimbBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbGelSwitchLimbEditObj::copyOrigToBuff() {
		cfcore::CFGenKbGelSwitchLimbBuff* origBuff = getOrigAsGelSwitchLimb()->getGelSwitchLimbBuff();
		cfcore::CFGenKbGelSwitchLimbBuff* myBuff = getGelSwitchLimbBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
