// Description: C++18 implementation for a SecGrpInc buffer object.

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

#include <cfgenkb/CFGenKbSecGrpIncByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByGroupIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByIncludeIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpIncByUIncludeIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecGrpIncBuff::S_VALUE( "value" );
	const std::string CFGenKbSecGrpIncBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecGrpIncBuff::GENDEFNAME( "SecGrpInc" );
	const classcode_t CFGenKbSecGrpIncBuff::CLASS_CODE = 0xa90bL;
	const std::string CFGenKbSecGrpIncBuff::CLASS_NAME( "CFGenKbSecGrpIncBuff" );
		const std::string CFGenKbSecGrpIncBuff::COLNAME_CLUSTERID( "ClusterId" );
		const std::string CFGenKbSecGrpIncBuff::COLNAME_SECGRPINCID( "SecGrpIncId" );
		const std::string CFGenKbSecGrpIncBuff::COLNAME_SECGROUPID( "SecGroupId" );
		const std::string CFGenKbSecGrpIncBuff::COLNAME_INCLUDEGROUPID( "IncludeGroupId" );
	const char* CFGenKbSecGrpIncBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbSecGrpIncBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE = 0LL;
	const int64_t CFGenKbSecGrpIncBuff::SECGRPINCID_INIT_VALUE = 0LL;
	const int CFGenKbSecGrpIncBuff::SECGROUPID_INIT_VALUE = 0L;
	const int CFGenKbSecGrpIncBuff::INCLUDEGROUPID_INIT_VALUE = 0L;
	const int64_t CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE = 0LL;
	const int64_t CFGenKbSecGrpIncBuff::SECGRPINCID_MIN_VALUE = 0LL;
	const int CFGenKbSecGrpIncBuff::SECGROUPID_MIN_VALUE = 0L;
	const int CFGenKbSecGrpIncBuff::INCLUDEGROUPID_MIN_VALUE = 0L;

	CFGenKbSecGrpIncBuff::CFGenKbSecGrpIncBuff()
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
		requiredClusterId = cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE;
		requiredSecGrpIncId = cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_INIT_VALUE;
		requiredIncludeGroupId = cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_INIT_VALUE;
	}

	CFGenKbSecGrpIncBuff::CFGenKbSecGrpIncBuff( const CFGenKbSecGrpIncBuff& src )
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
		requiredClusterId = cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_INIT_VALUE;
		requiredSecGrpIncId = cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_INIT_VALUE;
		requiredSecGroupId = cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_INIT_VALUE;
		requiredIncludeGroupId = cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpIncId( src.getRequiredSecGrpIncId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredIncludeGroupId( src.getRequiredIncludeGroupId() );
	}

	CFGenKbSecGrpIncBuff::~CFGenKbSecGrpIncBuff() {
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecGrpIncBuff::clone() {
		CFGenKbSecGrpIncBuff* copy = new CFGenKbSecGrpIncBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecGrpIncBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecGrpIncBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecGrpIncBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecGrpIncBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbSecGrpIncBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGrpIncBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbSecGrpIncBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbSecGrpIncBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbSecGrpIncBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecGrpIncBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbSecGrpIncBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbSecGrpIncBuff::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGrpIncBuff::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGrpIncBuff::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int64_t CFGenKbSecGrpIncBuff::getRequiredSecGrpIncId() const {
		return( requiredSecGrpIncId );
	}

	const int64_t* CFGenKbSecGrpIncBuff::getRequiredSecGrpIncIdReference() const {
		return( &requiredSecGrpIncId );
	}

	void CFGenKbSecGrpIncBuff::setRequiredSecGrpIncId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredSecGrpIncId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::SECGRPINCID_MIN_VALUE );
		}
		requiredSecGrpIncId = value;
	}

	const int32_t CFGenKbSecGrpIncBuff::getRequiredSecGroupId() const {
		return( requiredSecGroupId );
	}

	const int32_t* CFGenKbSecGrpIncBuff::getRequiredSecGroupIdReference() const {
		return( &requiredSecGroupId );
	}

	void CFGenKbSecGrpIncBuff::setRequiredSecGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecGroupId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::SECGROUPID_MIN_VALUE );
		}
		requiredSecGroupId = value;
	}

	const int32_t CFGenKbSecGrpIncBuff::getRequiredIncludeGroupId() const {
		return( requiredIncludeGroupId );
	}

	const int32_t* CFGenKbSecGrpIncBuff::getRequiredIncludeGroupIdReference() const {
		return( &requiredIncludeGroupId );
	}

	void CFGenKbSecGrpIncBuff::setRequiredIncludeGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredIncludeGroupId" );
		if( value < cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpIncBuff::INCLUDEGROUPID_MIN_VALUE );
		}
		requiredIncludeGroupId = value;
	}

	int32_t CFGenKbSecGrpIncBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecGrpIncBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecGrpIncBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + (int)( getRequiredSecGrpIncId() );
		hashCode = hashCode + getRequiredSecGroupId();
		hashCode = hashCode + getRequiredIncludeGroupId();
		return( hashCode );
	}

	CFGenKbSecGrpIncBuff CFGenKbSecGrpIncBuff::operator =( cfcore::CFGenKbSecGrpIncBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecGrpIncId( src.getRequiredSecGrpIncId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecGroupId( src.getRequiredSecGroupId() );
		setRequiredIncludeGroupId( src.getRequiredIncludeGroupId() );
		return( *this );
	}

	bool CFGenKbSecGrpIncBuff::operator <( const CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator <( const CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool CFGenKbSecGrpIncBuff::operator <( const CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator <( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator <( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator <( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator <=( const CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator <=( const CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool CFGenKbSecGrpIncBuff::operator <=( const CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator <=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator <=( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator <=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator ==( const CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator ==( const CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator ==( const CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator ==( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator ==( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator ==( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator !=( const CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator !=( const CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator !=( const CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator !=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator !=( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator !=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator >=( const CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator >=( const CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool CFGenKbSecGrpIncBuff::operator >=( const CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator >=( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator >=( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator >=( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpIncBuff::operator >( const CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator >( const CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool CFGenKbSecGrpIncBuff::operator >( const CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator >( const CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator >( const CFGenKbSecGrpIncPKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpIncBuff::operator >( const CFGenKbSecGrpIncBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbSecGrpIncBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpIncBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecGrpIncId( "SecGrpIncId" );
		static const std::string S_SecGroupId( "SecGroupId" );
		static const std::string S_IncludeGroupId( "IncludeGroupId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_SecGrpIncId, getRequiredSecGrpIncId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecGroupId, getRequiredSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_IncludeGroupId, getRequiredIncludeGroupId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() != rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() != rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() != rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByGroupIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByIncludeIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncByUIncludeIdxKey& rhs ) {
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
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncPKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpIncBuff& lhs, const cfcore::CFGenKbSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGrpIncId() < rhs.getRequiredSecGrpIncId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGrpIncId() > rhs.getRequiredSecGrpIncId() ) {
			return( true );
		}
		if( lhs.getRequiredSecGroupId() < rhs.getRequiredSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredSecGroupId() > rhs.getRequiredSecGroupId() ) {
			return( true );
		}
		if( lhs.getRequiredIncludeGroupId() < rhs.getRequiredIncludeGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredIncludeGroupId() > rhs.getRequiredIncludeGroupId() ) {
			return( true );
		}
		return( false );
	}
}

