// Description: C++18 implementation for a SecApp buffer object.

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

#include <cfgenkb/CFGenKbSecAppByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecAppByUJEEMountIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecAppBuff::S_VALUE( "value" );
	const std::string CFGenKbSecAppBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecAppBuff::GENDEFNAME( "SecApp" );
	const classcode_t CFGenKbSecAppBuff::CLASS_CODE = 0xa903L;
	const std::string CFGenKbSecAppBuff::CLASS_NAME( "CFGenKbSecAppBuff" );
		const std::string CFGenKbSecAppBuff::COLNAME_CLUSTERID( "ClusterId" );
		const std::string CFGenKbSecAppBuff::COLNAME_SECAPPID( "SecAppId" );
		const std::string CFGenKbSecAppBuff::COLNAME_JEEMOUNTNAME( "JEEMountName" );
	const char* CFGenKbSecAppBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbSecAppBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const int64_t CFGenKbSecAppBuff::CLUSTERID_INIT_VALUE = 0LL;
	const int CFGenKbSecAppBuff::SECAPPID_INIT_VALUE = 0L;
	const std::string CFGenKbSecAppBuff::JEEMOUNTNAME_INIT_VALUE( "" );
	const int64_t CFGenKbSecAppBuff::CLUSTERID_MIN_VALUE = 0LL;
	const int CFGenKbSecAppBuff::SECAPPID_MIN_VALUE = 0L;
	const std::string::size_type CFGenKbSecAppBuff::JEEMOUNTNAME_MAX_LEN = 192;

	CFGenKbSecAppBuff::CFGenKbSecAppBuff()
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
		requiredClusterId = cfcore::CFGenKbSecAppBuff::CLUSTERID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecAppBuff::SECAPPID_INIT_VALUE;
		requiredJEEMountName = new std::string( cfcore::CFGenKbSecAppBuff::JEEMOUNTNAME_INIT_VALUE );
	}

	CFGenKbSecAppBuff::CFGenKbSecAppBuff( const CFGenKbSecAppBuff& src )
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
		requiredClusterId = cfcore::CFGenKbSecAppBuff::CLUSTERID_INIT_VALUE;
		requiredSecAppId = cfcore::CFGenKbSecAppBuff::SECAPPID_INIT_VALUE;
		requiredJEEMountName = new std::string( cfcore::CFGenKbSecAppBuff::JEEMOUNTNAME_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredJEEMountName( src.getRequiredJEEMountName() );
	}

	CFGenKbSecAppBuff::~CFGenKbSecAppBuff() {
		if( requiredJEEMountName != NULL ) {
			delete requiredJEEMountName;
			requiredJEEMountName = NULL;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecAppBuff::clone() {
		CFGenKbSecAppBuff* copy = new CFGenKbSecAppBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecAppBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecAppBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecAppBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecAppBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbSecAppBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecAppBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbSecAppBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbSecAppBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbSecAppBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecAppBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbSecAppBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const int64_t CFGenKbSecAppBuff::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecAppBuff::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecAppBuff::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecAppBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecAppBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	const int32_t CFGenKbSecAppBuff::getRequiredSecAppId() const {
		return( requiredSecAppId );
	}

	const int32_t* CFGenKbSecAppBuff::getRequiredSecAppIdReference() const {
		return( &requiredSecAppId );
	}

	void CFGenKbSecAppBuff::setRequiredSecAppId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredSecAppId" );
		if( value < cfcore::CFGenKbSecAppBuff::SECAPPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecAppBuff::SECAPPID_MIN_VALUE );
		}
		requiredSecAppId = value;
	}

	const std::string& CFGenKbSecAppBuff::getRequiredJEEMountName() const {
		return( *requiredJEEMountName );
	}

	const std::string* CFGenKbSecAppBuff::getRequiredJEEMountNameReference() const {
		return( requiredJEEMountName );
	}

	void CFGenKbSecAppBuff::setRequiredJEEMountName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredJEEMountName" );
		if( value.length() > CFGenKbSecAppBuff::JEEMOUNTNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecAppBuff::JEEMOUNTNAME_MAX_LEN );
		}
		if( requiredJEEMountName != NULL ) {
			delete requiredJEEMountName;
			requiredJEEMountName = NULL;
		}
		requiredJEEMountName = new std::string( value );
	}

	int32_t CFGenKbSecAppBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecAppBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecAppBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + getRequiredSecAppId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredJEEMountName() );
		return( hashCode );
	}

	CFGenKbSecAppBuff CFGenKbSecAppBuff::operator =( cfcore::CFGenKbSecAppBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredSecAppId( src.getRequiredSecAppId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredJEEMountName( src.getRequiredJEEMountName() );
		return( *this );
	}

	bool CFGenKbSecAppBuff::operator <( const CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator <( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator <( const CFGenKbSecAppPKey& rhs ) {
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

	bool CFGenKbSecAppBuff::operator <( const CFGenKbSecAppBuff& rhs ) {
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
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator <=( const CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator <=( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator <=( const CFGenKbSecAppPKey& rhs ) {
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

	bool CFGenKbSecAppBuff::operator <=( const CFGenKbSecAppBuff& rhs ) {
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
		if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator ==( const CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator ==( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator ==( const CFGenKbSecAppPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator ==( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator !=( const CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator !=( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator !=( const CFGenKbSecAppPKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator !=( const CFGenKbSecAppBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator >=( const CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator >=( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator >=( const CFGenKbSecAppPKey& rhs ) {
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

	bool CFGenKbSecAppBuff::operator >=( const CFGenKbSecAppBuff& rhs ) {
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
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecAppBuff::operator >( const CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator >( const CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecAppBuff::operator >( const CFGenKbSecAppPKey& rhs ) {
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

	bool CFGenKbSecAppBuff::operator >( const CFGenKbSecAppBuff& rhs ) {
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
		if( getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	std::string CFGenKbSecAppBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecAppBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_SecAppId( "SecAppId" );
		static const std::string S_JEEMountName( "JEEMountName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_SecAppId, getRequiredSecAppId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_JEEMountName, getRequiredJEEMountName() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppPKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
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
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppPKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
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
		if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( false );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppPKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredSecAppId() != rhs.getRequiredSecAppId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() != rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppPKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
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
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppByUJEEMountIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppPKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecAppBuff& lhs, const cfcore::CFGenKbSecAppBuff& rhs ) {
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
		if( lhs.getRequiredJEEMountName() < rhs.getRequiredJEEMountName() ) {
			return( false );
		}
		else if( lhs.getRequiredJEEMountName() > rhs.getRequiredJEEMountName() ) {
			return( true );
		}
		return( false );
	}
}

