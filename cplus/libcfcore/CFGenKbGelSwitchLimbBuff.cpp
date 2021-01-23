// Description: C++18 implementation for a GelSwitchLimb buffer object.

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

#include <cfgenkb/CFGenKbGelSwitchLimbByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbBySwitchIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbGelSwitchLimbBuff::S_VALUE( "value" );
	const std::string CFGenKbGelSwitchLimbBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbGelSwitchLimbBuff::GENDEFNAME( "GelSwitchLimb" );
	const classcode_t CFGenKbGelSwitchLimbBuff::CLASS_CODE = 0xa91fL;
	const std::string CFGenKbGelSwitchLimbBuff::CLASS_NAME( "CFGenKbGelSwitchLimbBuff" );
		const std::string CFGenKbGelSwitchLimbBuff::COLNAME_TENANTID( "TenantId" );
		const std::string CFGenKbGelSwitchLimbBuff::COLNAME_GELCACHEID( "GelCacheId" );
		const std::string CFGenKbGelSwitchLimbBuff::COLNAME_GELINSTID( "GelInstId" );
		const std::string CFGenKbGelSwitchLimbBuff::COLNAME_LIMBNAME( "LimbName" );
		const std::string CFGenKbGelSwitchLimbBuff::COLNAME_LIMBEXPANSION( "LimbExpansion" );
	const int64_t CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchLimbBuff::GELCACHEID_INIT_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchLimbBuff::GELINSTID_INIT_VALUE = 0LL;
	const std::string CFGenKbGelSwitchLimbBuff::LIMBNAME_INIT_VALUE( "" );
	const std::string CFGenKbGelSwitchLimbBuff::LIMBEXPANSION_INIT_VALUE( "" );
	const int64_t CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchLimbBuff::GELCACHEID_MIN_VALUE = 0LL;
	const int64_t CFGenKbGelSwitchLimbBuff::GELINSTID_MIN_VALUE = 0LL;
	const std::string::size_type CFGenKbGelSwitchLimbBuff::LIMBNAME_MAX_LEN = 127;
	const std::string::size_type CFGenKbGelSwitchLimbBuff::LIMBEXPANSION_MAX_LEN = 127;

	CFGenKbGelSwitchLimbBuff::CFGenKbGelSwitchLimbBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_INIT_VALUE;
		requiredGelInstId = cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_INIT_VALUE;
		requiredLimbName = new std::string( cfcore::CFGenKbGelSwitchLimbBuff::LIMBNAME_INIT_VALUE );
		requiredLimbExpansion = new std::string( cfcore::CFGenKbGelSwitchLimbBuff::LIMBEXPANSION_INIT_VALUE );
	}

	CFGenKbGelSwitchLimbBuff::CFGenKbGelSwitchLimbBuff( const CFGenKbGelSwitchLimbBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		requiredTenantId = cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE;
		requiredGelCacheId = cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_INIT_VALUE;
		requiredGelInstId = cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_INIT_VALUE;
		requiredLimbName = new std::string( cfcore::CFGenKbGelSwitchLimbBuff::LIMBNAME_INIT_VALUE );
		requiredLimbExpansion = new std::string( cfcore::CFGenKbGelSwitchLimbBuff::LIMBEXPANSION_INIT_VALUE );
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredLimbName( src.getRequiredLimbName() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredLimbExpansion( src.getRequiredLimbExpansion() );
	}

	CFGenKbGelSwitchLimbBuff::~CFGenKbGelSwitchLimbBuff() {
		if( requiredLimbName != NULL ) {
			delete requiredLimbName;
			requiredLimbName = NULL;
		}
		if( requiredLimbExpansion != NULL ) {
			delete requiredLimbExpansion;
			requiredLimbExpansion = NULL;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbGelSwitchLimbBuff::clone() {
		CFGenKbGelSwitchLimbBuff* copy = new CFGenKbGelSwitchLimbBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbGelSwitchLimbBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbGelSwitchLimbBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbGelSwitchLimbBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const int64_t CFGenKbGelSwitchLimbBuff::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGelSwitchLimbBuff::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGelSwitchLimbBuff::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbGelSwitchLimbBuff::getRequiredGelCacheId() const {
		return( requiredGelCacheId );
	}

	const int64_t* CFGenKbGelSwitchLimbBuff::getRequiredGelCacheIdReference() const {
		return( &requiredGelCacheId );
	}

	void CFGenKbGelSwitchLimbBuff::setRequiredGelCacheId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGelCacheId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::GELCACHEID_MIN_VALUE );
		}
		requiredGelCacheId = value;
	}

	const int64_t CFGenKbGelSwitchLimbBuff::getRequiredGelInstId() const {
		return( requiredGelInstId );
	}

	const int64_t* CFGenKbGelSwitchLimbBuff::getRequiredGelInstIdReference() const {
		return( &requiredGelInstId );
	}

	void CFGenKbGelSwitchLimbBuff::setRequiredGelInstId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredGelInstId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::GELINSTID_MIN_VALUE );
		}
		requiredGelInstId = value;
	}

	const std::string& CFGenKbGelSwitchLimbBuff::getRequiredLimbName() const {
		return( *requiredLimbName );
	}

	const std::string* CFGenKbGelSwitchLimbBuff::getRequiredLimbNameReference() const {
		return( requiredLimbName );
	}

	void CFGenKbGelSwitchLimbBuff::setRequiredLimbName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredLimbName" );
		if( value.length() > CFGenKbGelSwitchLimbBuff::LIMBNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchLimbBuff::LIMBNAME_MAX_LEN );
		}
		if( requiredLimbName != NULL ) {
			delete requiredLimbName;
			requiredLimbName = NULL;
		}
		requiredLimbName = new std::string( value );
	}

	const std::string& CFGenKbGelSwitchLimbBuff::getRequiredLimbExpansion() const {
		return( *requiredLimbExpansion );
	}

	const std::string* CFGenKbGelSwitchLimbBuff::getRequiredLimbExpansionReference() const {
		return( requiredLimbExpansion );
	}

	void CFGenKbGelSwitchLimbBuff::setRequiredLimbExpansion( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredLimbExpansion" );
		if( value.length() > CFGenKbGelSwitchLimbBuff::LIMBEXPANSION_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSwitchLimbBuff::LIMBEXPANSION_MAX_LEN );
		}
		if( requiredLimbExpansion != NULL ) {
			delete requiredLimbExpansion;
			requiredLimbExpansion = NULL;
		}
		requiredLimbExpansion = new std::string( value );
	}

	int32_t CFGenKbGelSwitchLimbBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbGelSwitchLimbBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbGelSwitchLimbBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredGelCacheId() );
		hashCode = hashCode + (int)( getRequiredGelInstId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredLimbName() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredLimbExpansion() );
		return( hashCode );
	}

	CFGenKbGelSwitchLimbBuff CFGenKbGelSwitchLimbBuff::operator =( cfcore::CFGenKbGelSwitchLimbBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredGelCacheId( src.getRequiredGelCacheId() );
		setRequiredGelInstId( src.getRequiredGelInstId() );
		setRequiredLimbName( src.getRequiredLimbName() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredLimbExpansion( src.getRequiredLimbExpansion() );
		return( *this );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <=( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <=( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator <=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator ==( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator ==( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator ==( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator ==( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		if( getRequiredLimbExpansion() != rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator !=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator !=( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator !=( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator !=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( getRequiredLimbExpansion() != rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >=( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >=( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >( const CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >( const CFGenKbGelSwitchLimbPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbBuff::operator >( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbGelSwitchLimbBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchLimbBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_GelCacheId( "GelCacheId" );
		static const std::string S_GelInstId( "GelInstId" );
		static const std::string S_LimbName( "LimbName" );
		static const std::string S_LimbExpansion( "LimbExpansion" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelCacheId, getRequiredGelCacheId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_GelInstId, getRequiredGelInstId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbName, getRequiredLimbName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LimbExpansion, getRequiredLimbExpansion() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( lhs.getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( lhs.getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( false );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( false );
		}
		if( lhs.getRequiredLimbExpansion() != rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() != rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() != rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() != rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( lhs.getRequiredLimbExpansion() != rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( lhs.getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBySwitchIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbBuff& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredGelCacheId() < rhs.getRequiredGelCacheId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelCacheId() > rhs.getRequiredGelCacheId() ) {
			return( true );
		}
		if( lhs.getRequiredGelInstId() < rhs.getRequiredGelInstId() ) {
			return( false );
		}
		else if( lhs.getRequiredGelInstId() > rhs.getRequiredGelInstId() ) {
			return( true );
		}
		if( lhs.getRequiredLimbName() < rhs.getRequiredLimbName() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbName() > rhs.getRequiredLimbName() ) {
			return( true );
		}
		if( lhs.getRequiredLimbExpansion() < rhs.getRequiredLimbExpansion() ) {
			return( false );
		}
		else if( lhs.getRequiredLimbExpansion() > rhs.getRequiredLimbExpansion() ) {
			return( true );
		}
		return( false );
	}
}

