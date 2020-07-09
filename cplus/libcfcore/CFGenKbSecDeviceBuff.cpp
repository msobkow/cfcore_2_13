// Description: C++18 implementation for a SecDevice buffer object.

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

#include <cfgenkb/CFGenKbSecDeviceByNameIdxKey.hpp>
#include <cfgenkb/CFGenKbSecDeviceByUserIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecDeviceBuff::S_VALUE( "value" );
	const std::string CFGenKbSecDeviceBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecDeviceBuff::GENDEFNAME( "SecDevice" );
	const classcode_t CFGenKbSecDeviceBuff::CLASS_CODE = 0xa905L;
	const std::string CFGenKbSecDeviceBuff::CLASS_NAME( "CFGenKbSecDeviceBuff" );
		const std::string CFGenKbSecDeviceBuff::COLNAME_SECUSERID( "SecUserId" );
		const std::string CFGenKbSecDeviceBuff::COLNAME_DEVNAME( "DevName" );
		const std::string CFGenKbSecDeviceBuff::COLNAME_PUBKEY( "PubKey" );
	const char* CFGenKbSecDeviceBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbSecDeviceBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const std::string CFGenKbSecDeviceBuff::DEVNAME_INIT_VALUE( "" );
	const std::string::size_type CFGenKbSecDeviceBuff::DEVNAME_MAX_LEN = 127;
	const std::string::size_type CFGenKbSecDeviceBuff::PUBKEY_MAX_LEN = 10000;

	CFGenKbSecDeviceBuff::CFGenKbSecDeviceBuff()
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
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		requiredDevName = new std::string( cfcore::CFGenKbSecDeviceBuff::DEVNAME_INIT_VALUE );
		optionalPubKey = NULL;
	}

	CFGenKbSecDeviceBuff::CFGenKbSecDeviceBuff( const CFGenKbSecDeviceBuff& src )
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
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		requiredDevName = new std::string( cfcore::CFGenKbSecDeviceBuff::DEVNAME_INIT_VALUE );
		optionalPubKey = NULL;
		setRequiredSecUserId( src.getRequiredSecUserId() );
		setRequiredDevName( src.getRequiredDevName() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		if( src.isOptionalPubKeyNull() ) {
			setOptionalPubKeyNull();
		}
		else {
			setOptionalPubKeyValue( src.getOptionalPubKeyValue() );
		}
	}

	CFGenKbSecDeviceBuff::~CFGenKbSecDeviceBuff() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		if( requiredDevName != NULL ) {
			delete requiredDevName;
			requiredDevName = NULL;
		}
		if( optionalPubKey != NULL ) {
			delete optionalPubKey;
			optionalPubKey = NULL;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecDeviceBuff::clone() {
		CFGenKbSecDeviceBuff* copy = new CFGenKbSecDeviceBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecDeviceBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecDeviceBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecDeviceBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecDeviceBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbSecDeviceBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecDeviceBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbSecDeviceBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbSecDeviceBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbSecDeviceBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecDeviceBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbSecDeviceBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const uuid_ptr_t CFGenKbSecDeviceBuff::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbSecDeviceBuff::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbSecDeviceBuff::setRequiredSecUserId( const uuid_ptr_t value ) {
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbSecDeviceBuff::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	const std::string& CFGenKbSecDeviceBuff::getRequiredDevName() const {
		return( *requiredDevName );
	}

	const std::string* CFGenKbSecDeviceBuff::getRequiredDevNameReference() const {
		return( requiredDevName );
	}

	void CFGenKbSecDeviceBuff::setRequiredDevName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredDevName" );
		if( value.length() > CFGenKbSecDeviceBuff::DEVNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecDeviceBuff::DEVNAME_MAX_LEN );
		}
		if( requiredDevName != NULL ) {
			delete requiredDevName;
			requiredDevName = NULL;
		}
		requiredDevName = new std::string( value );
	}

	const bool CFGenKbSecDeviceBuff::isOptionalPubKeyNull() const {
		return( optionalPubKey == NULL );
	}

	const std::string& CFGenKbSecDeviceBuff::getOptionalPubKeyValue() const {
		static const std::string S_ProcName( "getOptionalPubKeyValue" );
		if( optionalPubKey == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalPubKey );
	}

	const std::string* CFGenKbSecDeviceBuff::getOptionalPubKeyReference() const {
		return( optionalPubKey );
	}

	void CFGenKbSecDeviceBuff::setOptionalPubKeyNull() {
		if( optionalPubKey != NULL ) {
			delete optionalPubKey;
			optionalPubKey = NULL;
		}
	}

	void CFGenKbSecDeviceBuff::setOptionalPubKeyValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalPubKeyValue" );
		if( value.length() > CFGenKbSecDeviceBuff::PUBKEY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecDeviceBuff::PUBKEY_MAX_LEN );
		}
		if( optionalPubKey != NULL ) {
			delete optionalPubKey;
			optionalPubKey = NULL;
		}
		optionalPubKey = new std::string( value );
	}

	int32_t CFGenKbSecDeviceBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecDeviceBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecDeviceBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredDevName() );
		if( ! isOptionalPubKeyNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalPubKeyValue() );
		}
		return( hashCode );
	}

	CFGenKbSecDeviceBuff CFGenKbSecDeviceBuff::operator =( cfcore::CFGenKbSecDeviceBuff& src ) {
		setRequiredSecUserId( src.getRequiredSecUserId() );
		setRequiredDevName( src.getRequiredDevName() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		if( src.isOptionalPubKeyNull() ) {
			setOptionalPubKeyNull();
		}
		else {
			setOptionalPubKeyValue( src.getOptionalPubKeyValue() );
		}
		return( *this );
	}

	bool CFGenKbSecDeviceBuff::operator <( const CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator <( const CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator <( const CFGenKbSecDevicePKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator <( const CFGenKbSecDeviceBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
			if( getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator <=( const CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator <=( const CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator <=( const CFGenKbSecDevicePKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator <=( const CFGenKbSecDeviceBuff& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
			if( getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator ==( const CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator ==( const CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator ==( const CFGenKbSecDevicePKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator ==( const CFGenKbSecDeviceBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( false );
		}
		if( ! isOptionalPubKeyNull() ) {
			if( ! rhs.isOptionalPubKeyNull() ) {
				if( getOptionalPubKeyValue() != rhs.getOptionalPubKeyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator !=( const CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator !=( const CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator !=( const CFGenKbSecDevicePKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator !=( const CFGenKbSecDeviceBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
			if( getOptionalPubKeyValue() != rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator >=( const CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator >=( const CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator >=( const CFGenKbSecDevicePKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator >=( const CFGenKbSecDeviceBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
			if( getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecDeviceBuff::operator >( const CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator >( const CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator >( const CFGenKbSecDevicePKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecDeviceBuff::operator >( const CFGenKbSecDeviceBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
			if( getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbSecDeviceBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecDeviceBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_DevName( "DevName" );
		static const std::string S_PubKey( "PubKey" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DevName, getRequiredDevName() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		if( ! isOptionalPubKeyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PubKey, getOptionalPubKeyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDevicePKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! lhs.isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
			if( lhs.getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDevicePKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! lhs.isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
			if( lhs.getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( lhs.getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDevicePKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( lhs.getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( lhs.getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( false );
		}
		if( ! lhs.isOptionalPubKeyNull() ) {
			if( ! rhs.isOptionalPubKeyNull() ) {
				if( lhs.getOptionalPubKeyValue() != rhs.getOptionalPubKeyValue() ) {
					return( false );
				}
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDevicePKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() != rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! lhs.isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
			if( lhs.getOptionalPubKeyValue() != rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDevicePKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceBuff& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! lhs.isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
			if( lhs.getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByNameIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceByUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDevicePKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecDeviceBuff& lhs, const cfcore::CFGenKbSecDeviceBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredDevName() < rhs.getRequiredDevName() ) {
			return( false );
		}
		else if( lhs.getRequiredDevName() > rhs.getRequiredDevName() ) {
			return( true );
		}
		if( ! lhs.isOptionalPubKeyNull() ) {
			if( rhs.isOptionalPubKeyNull() ) {
				return( true );
			}
			if( lhs.getOptionalPubKeyValue() < rhs.getOptionalPubKeyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalPubKeyValue() > rhs.getOptionalPubKeyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPubKeyNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

