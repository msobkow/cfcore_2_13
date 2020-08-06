// Description: C++18 implementation for a TSecGrpMemb buffer object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfgenkb/ICFGenKbPublic.hpp>

#include <cfgenkb/CFGenKbTSecGrpMembByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByUserIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembByUUserIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbTSecGrpMembBuff::S_VALUE( "value" );
	const std::string CFGenKbTSecGrpMembBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbTSecGrpMembBuff::GENDEFNAME( "TSecGrpMemb" );
	const classcode_t CFGenKbTSecGrpMembBuff::CLASS_CODE = 0xa913L;
	const std::string CFGenKbTSecGrpMembBuff::CLASS_NAME( "CFGenKbTSecGrpMembBuff" );
		const std::string CFGenKbTSecGrpMembBuff::COLNAME_TENANTID( "TenantId" );
		const std::string CFGenKbTSecGrpMembBuff::COLNAME_TSECGRPMEMBID( "TSecGrpMembId" );
		const std::string CFGenKbTSecGrpMembBuff::COLNAME_TSECGROUPID( "TSecGroupId" );
		const std::string CFGenKbTSecGrpMembBuff::COLNAME_SECUSERID( "SecUserId" );
	const char* CFGenKbTSecGrpMembBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbTSecGrpMembBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE = 0LL;
	const int64_t CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_INIT_VALUE = 0LL;
	const int CFGenKbTSecGrpMembBuff::TSECGROUPID_INIT_VALUE = 0L;
	const int64_t CFGenKbTSecGrpMembBuff::TENANTID_MIN_VALUE = 0LL;
	const int64_t CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_MIN_VALUE = 0LL;
	const int CFGenKbTSecGrpMembBuff::TSECGROUPID_MIN_VALUE = 0L;

	CFGenKbTSecGrpMembBuff::CFGenKbTSecGrpMembBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		createdAt = cflib::CFLib::getUTCTimestampInstance();
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
		updatedAt = cflib::CFLib::getUTCTimestampInstance();
		requiredTenantId = cfcore::CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE;
		requiredTSecGrpMembId = cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_INIT_VALUE;
		requiredTSecGroupId = cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_INIT_VALUE;
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
	}

	CFGenKbTSecGrpMembBuff::CFGenKbTSecGrpMembBuff( const CFGenKbTSecGrpMembBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		createdAt = cflib::CFLib::getUTCTimestampInstance();
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
		updatedAt = cflib::CFLib::getUTCTimestampInstance();
		requiredTenantId = cfcore::CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE;
		requiredTSecGrpMembId = cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_INIT_VALUE;
		requiredTSecGroupId = cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_INIT_VALUE;
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpMembId( src.getRequiredTSecGrpMembId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
	}

	CFGenKbTSecGrpMembBuff::~CFGenKbTSecGrpMembBuff() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbTSecGrpMembBuff::clone() {
		CFGenKbTSecGrpMembBuff* copy = new CFGenKbTSecGrpMembBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbTSecGrpMembBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbTSecGrpMembBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbTSecGrpMembBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbTSecGrpMembBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbTSecGrpMembBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpMembBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbTSecGrpMembBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbTSecGrpMembBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbTSecGrpMembBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbTSecGrpMembBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbTSecGrpMembBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbTSecGrpMembBuff::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbTSecGrpMembBuff::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbTSecGrpMembBuff::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbTSecGrpMembBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpMembBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbTSecGrpMembBuff::getRequiredTSecGrpMembId() const {
		return( requiredTSecGrpMembId );
	}

	const int64_t* CFGenKbTSecGrpMembBuff::getRequiredTSecGrpMembIdReference() const {
		return( &requiredTSecGrpMembId );
	}

	void CFGenKbTSecGrpMembBuff::setRequiredTSecGrpMembId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTSecGrpMembId" );
		if( value < cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_MIN_VALUE );
		}
		requiredTSecGrpMembId = value;
	}

	const int32_t CFGenKbTSecGrpMembBuff::getRequiredTSecGroupId() const {
		return( requiredTSecGroupId );
	}

	const int32_t* CFGenKbTSecGrpMembBuff::getRequiredTSecGroupIdReference() const {
		return( &requiredTSecGroupId );
	}

	void CFGenKbTSecGrpMembBuff::setRequiredTSecGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredTSecGroupId" );
		if( value < cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_MIN_VALUE );
		}
		requiredTSecGroupId = value;
	}

	const uuid_ptr_t CFGenKbTSecGrpMembBuff::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbTSecGrpMembBuff::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbTSecGrpMembBuff::setRequiredSecUserId( const uuid_ptr_t value ) {
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbTSecGrpMembBuff::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	int32_t CFGenKbTSecGrpMembBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbTSecGrpMembBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbTSecGrpMembBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredTSecGrpMembId() );
		hashCode = hashCode + getRequiredTSecGroupId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		return( hashCode );
	}

	CFGenKbTSecGrpMembBuff CFGenKbTSecGrpMembBuff::operator =( cfcore::CFGenKbTSecGrpMembBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpMembId( src.getRequiredTSecGrpMembId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
		return( *this );
	}

	bool CFGenKbTSecGrpMembBuff::operator <( const CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator <( const CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator <( const CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator <( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator <( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator <( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator <=( const CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator <=( const CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator <=( const CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator <=( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator <=( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator <=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator ==( const CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator ==( const CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator ==( const CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator ==( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator ==( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator ==( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator !=( const CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator !=( const CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator !=( const CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator !=( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator !=( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator !=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator >=( const CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator >=( const CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator >=( const CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator >=( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator >=( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator >=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembBuff::operator >( const CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator >( const CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator >( const CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator >( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator >( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembBuff::operator >( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbTSecGrpMembBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpMembBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpMembId( "TSecGrpMembId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpMembId, getRequiredTSecGrpMembId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByGroupIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembBuff& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}
}

