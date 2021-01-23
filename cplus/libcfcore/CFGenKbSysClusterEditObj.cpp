// Description: C++18 edit object instance implementation for CFGenKb SysCluster.

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
#include <cfgenkbobj/CFGenKbSysClusterObj.hpp>
#include <cfgenkbobj/CFGenKbSysClusterEditObj.hpp>


namespace cfcore {

	const std::string CFGenKbSysClusterEditObj::CLASS_NAME( "CFGenKbSysClusterEditObj" );

	CFGenKbSysClusterEditObj::CFGenKbSysClusterEditObj( cfcore::ICFGenKbSysClusterObj* argOrig )
	: ICFGenKbSysClusterEditObj()
	{
		static const std::string S_ProcName( "CFGenKbSysClusterEditObj-construct" );
		static const std::string S_OrigBuff( "origBuff" );
		orig = argOrig;
		cfcore::CFGenKbSysClusterBuff* origBuff = orig->getBuff();
		if( origBuff == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_OrigBuff );
		}
		buff = dynamic_cast<cfcore::CFGenKbSysClusterBuff*>( origBuff->clone() );
	}

	CFGenKbSysClusterEditObj::~CFGenKbSysClusterEditObj() {
		orig = NULL;
		if( buff != NULL ) {
			delete buff;
			buff = NULL;
		}

	}

	const std::string& CFGenKbSysClusterEditObj::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSysClusterEditObj::getClassCode() const {
		return( cfcore::CFGenKbSysClusterBuff::CLASS_CODE );
	}

	bool CFGenKbSysClusterEditObj::implementsClassCode( const classcode_t value ) const {
		if( value == cfcore::CFGenKbSysClusterBuff::CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	std::string CFGenKbSysClusterEditObj::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSysClusterEditObj" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SingletonId( "SingletonId" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, CFGenKbSysClusterEditObj::getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SingletonId, CFGenKbSysClusterEditObj::getRequiredSingletonId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, CFGenKbSysClusterEditObj::getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	int32_t CFGenKbSysClusterEditObj::getRequiredRevision() const {
		return( buff->getRequiredRevision() );
	}

	void CFGenKbSysClusterEditObj::setRequiredRevision( int32_t value ) {
		getSysClusterBuff()->setRequiredRevision( value );
	}

	std::string CFGenKbSysClusterEditObj::getObjName() {
		std::string objName( CLASS_NAME ); objName;
		int32_t val = getRequiredSingletonId();
		objName = cflib::CFLibXmlUtil::formatInt32( val );
		return( objName );
	}

	const std::string CFGenKbSysClusterEditObj::getGenDefName() {
		return( cfcore::CFGenKbSysClusterBuff::GENDEFNAME );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterEditObj::getScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterEditObj::getObjScope() {
		cfcore::ICFGenKbClusterObj* scope = getRequiredContainerCluster();
		return( scope );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterEditObj::getObjQualifier( const classcode_t* qualifyingClass ) {
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

	cflib::ICFLibAnyObj* CFGenKbSysClusterEditObj::getNamedObject( const classcode_t* qualifyingClass, const std::string& objName ) {
		cflib::ICFLibAnyObj* topContainer = getObjQualifier( qualifyingClass );
		if( topContainer == NULL ) {
			return( NULL );
		}
		cflib::ICFLibAnyObj* namedObject = topContainer->getNamedObject( objName );
		return( namedObject );
	}

	cflib::ICFLibAnyObj* CFGenKbSysClusterEditObj::getNamedObject( const std::string& objName ) {
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

	std::string CFGenKbSysClusterEditObj::getObjQualifiedName() {
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

	std::string CFGenKbSysClusterEditObj::getObjFullName() {
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

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterEditObj::realize() {
		// We realize this so that it's buffer will get copied to orig during realization
		cfcore::ICFGenKbSysClusterObj* retobj = getSchema()->getSysClusterTableObj()->realizeSysCluster( dynamic_cast<cfcore::ICFGenKbSysClusterObj*>( this ) );
		return( retobj );
	}

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterEditObj::read( bool forceRead ) {
		cfcore::ICFGenKbSysClusterObj* retval = getOrigAsSysCluster()->read( forceRead );
		if( retval != orig ) {
			throw cflib::CFLibUsageException( CLASS_NAME,
				"read",
				"retval != orig" );
		}
		copyOrigToBuff();
		return( retval );
	}

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterEditObj::create() {
		cfcore::ICFGenKbSysClusterObj* retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSysCluster()->getSchema() )->getSysClusterTableObj()->createSysCluster( this );
		// Note that this instance is usually discarded during the creation process,
		// and retobj now references the cached instance of the created object.
		return( retobj );
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterEditObj::update() {
		getSchema()->getSysClusterTableObj()->updateSysCluster( this );
		return( NULL );
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterEditObj::deleteInstance() {
		static const std::string S_MethodName( "deleteInstance" );
		static const std::string S_CannotDeleteNewInstance( "Cannot delete a new instance" );
		if( getIsNew() ) {
			throw cflib::CFLibUsageException( CLASS_NAME, S_MethodName, S_CannotDeleteNewInstance );
		}
		getSchema()->getSysClusterTableObj()->deleteSysCluster( this );
		return( NULL );
	}

	cfcore::ICFGenKbSysClusterTableObj* CFGenKbSysClusterEditObj::getSysClusterTable() {
		return( orig->getSchema()->getSysClusterTableObj() );
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterEditObj::getEdit() {
		return( this );
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterEditObj::getSysClusterEdit() {
		return( (cfcore::ICFGenKbSysClusterEditObj*)this );
	}

	cfcore::ICFGenKbSysClusterEditObj* CFGenKbSysClusterEditObj::beginEdit() {
		static const std::string S_ProcName( "beginEdit" );
		static const std::string S_Message( "Cannot edit an edition" );
		throw cflib::CFLibUsageException( CLASS_NAME,
			S_ProcName,
			S_Message );
	}

	void CFGenKbSysClusterEditObj::endEdit() {
		orig->endEdit();
	}

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterEditObj::getOrig() {
		return( orig );
	}

	cfcore::ICFGenKbSysClusterObj* CFGenKbSysClusterEditObj::getOrigAsSysCluster() {
		return( dynamic_cast<cfcore::ICFGenKbSysClusterObj*>( orig ) );
	}

	cfcore::ICFGenKbSchemaObj* CFGenKbSysClusterEditObj::getSchema() {
		return( orig->getSchema() );
	}

	cfcore::CFGenKbSysClusterBuff* CFGenKbSysClusterEditObj::getBuff() {
		return( buff );
	}

	void CFGenKbSysClusterEditObj::setBuff( cfcore::CFGenKbSysClusterBuff* value ) {
		if( buff != value ) {
			if( ( buff != NULL ) && ( buff != value ) ) {
				delete buff;
				buff = NULL;
			}
			buff = value;
		}
	}

	cfcore::CFGenKbSysClusterPKey* CFGenKbSysClusterEditObj::getPKey() {
		return( orig->getPKey() );
	}

	void CFGenKbSysClusterEditObj::setPKey( cfcore::CFGenKbSysClusterPKey* value ) {
		if( orig->getPKey() != value ) {
			orig->setPKey( value );
		}
		copyPKeyToBuff();
	}

	bool CFGenKbSysClusterEditObj::getIsNew() {
		return( orig->getIsNew() );
	}

	void CFGenKbSysClusterEditObj::setIsNew( bool value ) {
		orig->setIsNew( value );
	}

	const int32_t CFGenKbSysClusterEditObj::getRequiredSingletonId() {
		return( getPKey()->getRequiredSingletonId() );
	}

	const int32_t* CFGenKbSysClusterEditObj::getRequiredSingletonIdReference() {
		return( getPKey()->getRequiredSingletonIdReference() );
	}

	void CFGenKbSysClusterEditObj::setRequiredSingletonId( const int32_t value ) {
		if( getPKey()->getRequiredSingletonId() != value ) {
			getPKey()->setRequiredSingletonId( value );
		}
		if( getSysClusterBuff()->getRequiredSingletonId() != value ) {
			getSysClusterBuff()->setRequiredSingletonId( value );
		}
	}

	const int64_t CFGenKbSysClusterEditObj::getRequiredClusterId() {
		return( getSysClusterBuff()->getRequiredClusterId() );
	}

	const int64_t* CFGenKbSysClusterEditObj::getRequiredClusterIdReference() {
		return( getSysClusterBuff()->getRequiredClusterIdReference() );
	}

	cfcore::ICFGenKbClusterObj* CFGenKbSysClusterEditObj::getRequiredContainerCluster( bool forceRead ) {
		cfcore::ICFGenKbClusterObj* retobj = NULL;
		bool anyMissing = false;
		if( ! anyMissing ) {
			retobj = dynamic_cast<cfcore::ICFGenKbSchemaObj*>( getOrigAsSysCluster()->getSchema() )->getClusterTableObj()->readClusterByIdIdx( getSysClusterBuff()->getRequiredClusterId() );
		}
		return( retobj );
	}

	void CFGenKbSysClusterEditObj::setRequiredContainerCluster( cfcore::ICFGenKbClusterObj* value ) {
			
			if( value != NULL ) {
				getSysClusterBuff()->setRequiredClusterId( value->getRequiredId() );
			}
		}

	void CFGenKbSysClusterEditObj::copyPKeyToBuff() {
		cfcore::CFGenKbSysClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbSysClusterBuff* tableBuff = getSysClusterBuff();
		tableBuff->setRequiredSingletonId( tablePKey->getRequiredSingletonId() );
	}

	void CFGenKbSysClusterEditObj::copyBuffToPKey() {
		cfcore::CFGenKbSysClusterPKey* tablePKey = getPKey();
		cfcore::CFGenKbSysClusterBuff* tableBuff = getSysClusterBuff();
		tablePKey->setRequiredSingletonId( tableBuff->getRequiredSingletonId() );
	}

	void CFGenKbSysClusterEditObj::copyBuffToOrig() {
		cfcore::CFGenKbSysClusterBuff* origBuff = getOrigAsSysCluster()->getSysClusterBuff();
		cfcore::CFGenKbSysClusterBuff* myBuff = getSysClusterBuff();
		if( origBuff != myBuff ) {
			*origBuff = *myBuff;
		}
	}

	void CFGenKbSysClusterEditObj::copyOrigToBuff() {
		cfcore::CFGenKbSysClusterBuff* origBuff = getOrigAsSysCluster()->getSysClusterBuff();
		cfcore::CFGenKbSysClusterBuff* myBuff = getSysClusterBuff();
		if( origBuff != myBuff ) {
			*myBuff = *origBuff;
		}
	}

}
