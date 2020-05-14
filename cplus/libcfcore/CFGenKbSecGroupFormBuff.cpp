// Description: C++18 implementation for a SecGroupForm buffer object.

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

#include <cfgenkb/CFGenKbSecGroupFormByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByAppIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByFormIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupFormByUFormIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecGroupFormBuff::S_VALUE( "value" );
	const std::string CFGenKbSecGroupFormBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecGroupFormBuff::GENDEFNAME( "SecGroupForm" );
	const classcode_t CFGenKbSecGroupFormBuff::CLASS_CODE = 0xa90aL;
	const std::string CFGenKbSecGroupFormBuff::CLASS_NAME( "CFGenKbSecGroupFormBuff" );
		const std::string CFGenKbSecGroupFormBuff::COLNAME_CLUSTERID( "ClusterId" );
		const std::string CFGenKbSecGroupFormBuff::COLNAME_SECGROUPFORMID( "SecGroupFormId" );
		const std::string CFGenKbSecGroupFormBuff::COLNAME_SECGROUPID( "SecGroupId" );
		const std::string CFGenKbSecGroupFormBuff::COLNAME_SECAPPID( "SecAppId" );
		const std::string CFGenKbSecGroupFormBuff::COLNAME_SECFORMID( "SecFormId" );
	const char* CFGenKbSecGroupFormBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbSecGroupFormBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE = 0LL;
	const int64_t CFGenKbSecGroupFormBuff::SECGROUPFORMID_INIT_VALUE = 0LL;
	const int CFGenKbSecGroupFormBuff::SECGROUPID_INIT_VALUE = 0L;
	const int CFGenKbSecGroupFormBuff::SECAPPID_INIT_VALUE = 0L;
	const int CFGenKbSecGroupFormBuff::SECFORMID_INIT_VALUE = 0L;
	const int64_t CFGenKbSecGroupFormBuff::CLUSTERID_MIN_VALUE = 0LL;
	const int64_t CFGenKbSecGroupFormBuff::SECGROUPFORMID_MIN_VALUE = 0LL;
	const int CFGenKbSecGroupFormBuff::SECGROUPID_MIN_VALUE = 0L;
	const int CFGenKbSecGroupFormBuff::SECAPPID_MIN_VALUE = 0L;
	const int CFGenKbSecGroupFormBuff::SECFORMID_MIN_VALUE = 0L;

	CFGenKbSecGroupFormBuff::CFGenKbSecGroupFormBuff()
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
		requiredClusterId = cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupFormId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecGroupFormBuff::SECAPPID_INIT_VALUE;
		requiredSecFormId = cfcore::CFGenKbSecGroupFormBuff::SECFORMID_INIT_VALUE;
	}

	CFGenKbSecGroupFormBuff::CFGenKbSecGroupFormBuff( const CFGenKbSecGroupFormBuff& src )
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
		requiredClusterId = cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_INIT_VALUE;
		requiredSecGroupFormId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecGroupFormBuff::SECAPPID_INIT_VALUE;
		requiredSecFormId = cfcore::CFGenKbSecGroupFormBuff::SECFORMID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupFormId( src.getRequiredSecGroupFormId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
	}

	CFGenKbSecGroupFormBuff::~CFGenKbSecGroupFormBuff() {
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecGroupFormBuff::clone() {
		CFGenKbSecGroupFormBuff* copy = new CFGenKbSecGroupFormBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecGroupFormBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecGroupFormBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecGroupFormBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecGroupFormBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbSecGroupFormBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupFormBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbSecGroupFormBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbSecGroupFormBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbSecGroupFormBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGroupFormBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbSecGroupFormBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbSecGroupFormBuff::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGroupFormBuff::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGroupFormBuff::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int64_t CFGenKbSecGroupFormBuff::getRequiredSecGroupFormId() const {
		return( requiredSecGroupFormId );
	}

	const int64_t* CFGenKbSecGroupFormBuff::getRequiredSecGroupFormIdReference() const {
		return( &requiredSecGroupFormId );
	}

	void CFGenKbSecGroupFormBuff::setRequiredSecGroupFormId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSecGroupFormId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECGROUPFORMID_MIN_VALUE );
		}
		requiredSecGroupFormId = value;
	}

	const int32_t CFGenKbSecGroupFormBuff::getRequiredSecGroupId() const {
		return( requiredSecGroupId );
	}

	const int32_t* CFGenKbSecGroupFormBuff::getRequiredSecGroupIdReference() const {
		return( &requiredSecGroupId );
	}

	void CFGenKbSecGroupFormBuff::setRequiredSecGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecGroupId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECGROUPID_MIN_VALUE );
		}
		requiredSecGroupId = value;
	}

	const int32_t CFGenKbSecGroupFormBuff::getRequiredSecAppId() const {
		return( requiredSecAppId );
	}

	const int32_t* CFGenKbSecGroupFormBuff::getRequiredSecAppIdReference() const {
		return( &requiredSecAppId );
	}

	void CFGenKbSecGroupFormBuff::setRequiredSecAppId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecAppId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECAPPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECAPPID_MIN_VALUE );
		}
		requiredSecAppId = value;
	}

	const int32_t CFGenKbSecGroupFormBuff::getRequiredSecFormId() const {
		return( requiredSecFormId );
	}

	const int32_t* CFGenKbSecGroupFormBuff::getRequiredSecFormIdReference() const {
		return( &requiredSecFormId );
	}

	void CFGenKbSecGroupFormBuff::setRequiredSecFormId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecFormId" );
		if( value < cfcore::CFGenKbSecGroupFormBuff::SECFORMID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupFormBuff::SECFORMID_MIN_VALUE );
		}
		requiredSecFormId = value;
	}

	int32_t CFGenKbSecGroupFormBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecGroupFormBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecGroupFormBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredSecGroupFormId() );
		hashCode = hashCode + getRequiredSecGroupId();
		hashCode = hashCode + getRequiredSecAppId();
		hashCode = hashCode + getRequiredSecFormId();
		return( hashCode );
	}

	CFGenKbSecGroupFormBuff CFGenKbSecGroupFormBuff::operator =( cfcore::CFGenKbSecGroupFormBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGroupFormId( src.getRequiredSecGroupFormId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setRequiredSecFormId( src.getRequiredSecFormId() );
		return( *this );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator <=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator ==( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator !=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >=( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupFormBuff::operator >( const CFGenKbSecGroupFormBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbSecGroupFormBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupFormBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGroupFormId( "SecGroupFormId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_SecFormId( "SecFormId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGroupFormId, getRequiredSecGroupFormId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecFormId, getRequiredSecFormId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() != rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() != rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByAppIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormByUFormIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupFormBuff& lhs, const cfcore::CFGenKbSecGroupFormBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupFormId() < rhs.getRequiredSecGroupFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupFormId() > rhs.getRequiredSecGroupFormId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() < rhs.getRequiredSecAppId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecAppId() > rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredSecFormId() < rhs.getRequiredSecFormId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecFormId() > rhs.getRequiredSecFormId() ) {
			return( true );
		}
		return( false );
	}
}

