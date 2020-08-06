// Description: C++18 implementation for a SecUser buffer object.

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

#include <cfgenkb/CFGenKbSecUserByULoginIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserByEMConfIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserByPwdResetIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserByDefDevIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecUserBuff::S_VALUE( "value" );
	const std::string CFGenKbSecUserBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecUserBuff::GENDEFNAME( "SecUser" );
	const classcode_t CFGenKbSecUserBuff::CLASS_CODE = 0xa90eL;
	const std::string CFGenKbSecUserBuff::CLASS_NAME( "CFGenKbSecUserBuff" );
		const std::string CFGenKbSecUserBuff::COLNAME_SECUSERID( "SecUserId" );
		const std::string CFGenKbSecUserBuff::COLNAME_LOGINID( "LoginId" );
		const std::string CFGenKbSecUserBuff::COLNAME_EMAILADDRESS( "EMailAddress" );
		const std::string CFGenKbSecUserBuff::COLNAME_EMAILCONFIRMUUID( "EMailConfirmUuid" );
		const std::string CFGenKbSecUserBuff::COLNAME_DFLTDEVUSERID( "DfltDevUserId" );
		const std::string CFGenKbSecUserBuff::COLNAME_DFLTDEVNAME( "DfltDevName" );
		const std::string CFGenKbSecUserBuff::COLNAME_PASSWORDHASH( "PasswordHash" );
		const std::string CFGenKbSecUserBuff::COLNAME_PASSWORDRESETUUID( "PasswordResetUuid" );
	const char* CFGenKbSecUserBuff::S_INIT_CREATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const char* CFGenKbSecUserBuff::S_INIT_UPDATEDBY = "654dbba0-eda7-11e1-aff1-0800200c9a66";
	const std::string CFGenKbSecUserBuff::LOGINID_INIT_VALUE( "" );
	const std::string CFGenKbSecUserBuff::EMAILADDRESS_INIT_VALUE( "" );
	const std::string CFGenKbSecUserBuff::DFLTDEVNAME_INIT_VALUE( "" );
	const std::string CFGenKbSecUserBuff::PASSWORDHASH_INIT_VALUE( "" );
	const std::string::size_type CFGenKbSecUserBuff::LOGINID_MAX_LEN = 32;
	const std::string::size_type CFGenKbSecUserBuff::EMAILADDRESS_MAX_LEN = 192;
	const std::string::size_type CFGenKbSecUserBuff::DFLTDEVNAME_MAX_LEN = 127;
	const std::string::size_type CFGenKbSecUserBuff::PASSWORDHASH_MAX_LEN = 256;

	CFGenKbSecUserBuff::CFGenKbSecUserBuff()
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
		requiredLoginId = new std::string( cfcore::CFGenKbSecUserBuff::LOGINID_INIT_VALUE );
		requiredEMailAddress = new std::string( cfcore::CFGenKbSecUserBuff::EMAILADDRESS_INIT_VALUE );
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
		optionalDfltDevName = NULL;
		requiredPasswordHash = new std::string( cfcore::CFGenKbSecUserBuff::PASSWORDHASH_INIT_VALUE );
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
	}

	CFGenKbSecUserBuff::CFGenKbSecUserBuff( const CFGenKbSecUserBuff& src )
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
		requiredLoginId = new std::string( cfcore::CFGenKbSecUserBuff::LOGINID_INIT_VALUE );
		requiredEMailAddress = new std::string( cfcore::CFGenKbSecUserBuff::EMAILADDRESS_INIT_VALUE );
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
		optionalDfltDevName = NULL;
		requiredPasswordHash = new std::string( cfcore::CFGenKbSecUserBuff::PASSWORDHASH_INIT_VALUE );
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
		setRequiredSecUserId( src.getRequiredSecUserId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredLoginId( src.getRequiredLoginId() );
		setRequiredEMailAddress( src.getRequiredEMailAddress() );
		if( src.isOptionalEMailConfirmUuidNull() ) {
			setOptionalEMailConfirmUuidNull();
		}
		else {
			setOptionalEMailConfirmUuidValue( src.getOptionalEMailConfirmUuidValue() );
		}
		if( src.isOptionalDfltDevUserIdNull() ) {
			setOptionalDfltDevUserIdNull();
		}
		else {
			setOptionalDfltDevUserIdValue( src.getOptionalDfltDevUserIdValue() );
		}
		if( src.isOptionalDfltDevNameNull() ) {
			setOptionalDfltDevNameNull();
		}
		else {
			setOptionalDfltDevNameValue( src.getOptionalDfltDevNameValue() );
		}
		setRequiredPasswordHash( src.getRequiredPasswordHash() );
		if( src.isOptionalPasswordResetUuidNull() ) {
			setOptionalPasswordResetUuidNull();
		}
		else {
			setOptionalPasswordResetUuidValue( src.getOptionalPasswordResetUuidValue() );
		}
	}

	CFGenKbSecUserBuff::~CFGenKbSecUserBuff() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		if( requiredLoginId != NULL ) {
			delete requiredLoginId;
			requiredLoginId = NULL;
		}
		if( requiredEMailAddress != NULL ) {
			delete requiredEMailAddress;
			requiredEMailAddress = NULL;
		}
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
		if( optionalDfltDevName != NULL ) {
			delete optionalDfltDevName;
			optionalDfltDevName = NULL;
		}
		if( requiredPasswordHash != NULL ) {
			delete requiredPasswordHash;
			requiredPasswordHash = NULL;
		}
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			createdByUserId[i] = 0;
		}
		for( int i = 0; i < 16; i++ ) {
			updatedByUserId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecUserBuff::clone() {
		CFGenKbSecUserBuff* copy = new CFGenKbSecUserBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecUserBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecUserBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecUserBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getCreatedByUserId() const {
		return( createdByUserId );
	}

	void CFGenKbSecUserBuff::setCreatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( createdByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecUserBuff::getCreatedAt() const {
		return( createdAt );
	}

	void CFGenKbSecUserBuff::setCreatedAt( const std::chrono::system_clock::time_point& value ) {
		createdAt = value;
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getUpdatedByUserId() const {
		return( updatedByUserId );
	}

	void CFGenKbSecUserBuff::setUpdatedByUserId( const uuid_ptr_t value ) {
		uuid_copy( updatedByUserId, value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecUserBuff::getUpdatedAt() const {
		return( updatedAt );
	}

	void CFGenKbSecUserBuff::setUpdatedAt( const std::chrono::system_clock::time_point& value ) {
		updatedAt = value;
	}
	const uuid_ptr_t CFGenKbSecUserBuff::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbSecUserBuff::setRequiredSecUserId( const uuid_ptr_t value ) {
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbSecUserBuff::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	const std::string& CFGenKbSecUserBuff::getRequiredLoginId() const {
		return( *requiredLoginId );
	}

	const std::string* CFGenKbSecUserBuff::getRequiredLoginIdReference() const {
		return( requiredLoginId );
	}

	void CFGenKbSecUserBuff::setRequiredLoginId( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredLoginId" );
		if( value.length() > CFGenKbSecUserBuff::LOGINID_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecUserBuff::LOGINID_MAX_LEN );
		}
		if( requiredLoginId != NULL ) {
			delete requiredLoginId;
			requiredLoginId = NULL;
		}
		requiredLoginId = new std::string( value );
	}

	const std::string& CFGenKbSecUserBuff::getRequiredEMailAddress() const {
		return( *requiredEMailAddress );
	}

	const std::string* CFGenKbSecUserBuff::getRequiredEMailAddressReference() const {
		return( requiredEMailAddress );
	}

	void CFGenKbSecUserBuff::setRequiredEMailAddress( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredEMailAddress" );
		if( value.length() > CFGenKbSecUserBuff::EMAILADDRESS_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecUserBuff::EMAILADDRESS_MAX_LEN );
		}
		if( requiredEMailAddress != NULL ) {
			delete requiredEMailAddress;
			requiredEMailAddress = NULL;
		}
		requiredEMailAddress = new std::string( value );
	}

	const bool CFGenKbSecUserBuff::isOptionalEMailConfirmUuidNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalEMailConfirmUuid[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getOptionalEMailConfirmUuidValue() const {
		static const std::string S_ProcName( "getOptionalEMailConfirmUuidValue" );
		if( isOptionalEMailConfirmUuidNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalEMailConfirmUuid );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getOptionalEMailConfirmUuidReference() const {
		if( isOptionalEMailConfirmUuidNull() ) {
			return( NULL );
		}
		else {
			return( optionalEMailConfirmUuid );
		}
	}

	void CFGenKbSecUserBuff::setOptionalEMailConfirmUuidNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
	}

	void CFGenKbSecUserBuff::setOptionalEMailConfirmUuidValue( const uuid_ptr_t value ) {
		uuid_copy( optionalEMailConfirmUuid, value );
	}

	void CFGenKbSecUserBuff::generateOptionalEMailConfirmUuid() {
		uuid_generate_random( optionalEMailConfirmUuid );
	}

	const bool CFGenKbSecUserBuff::isOptionalDfltDevUserIdNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalDfltDevUserId[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getOptionalDfltDevUserIdValue() const {
		static const std::string S_ProcName( "getOptionalDfltDevUserIdValue" );
		if( isOptionalDfltDevUserIdNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalDfltDevUserId );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getOptionalDfltDevUserIdReference() const {
		if( isOptionalDfltDevUserIdNull() ) {
			return( NULL );
		}
		else {
			return( optionalDfltDevUserId );
		}
	}

	void CFGenKbSecUserBuff::setOptionalDfltDevUserIdNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
	}

	void CFGenKbSecUserBuff::setOptionalDfltDevUserIdValue( const uuid_ptr_t value ) {
		uuid_copy( optionalDfltDevUserId, value );
	}

	void CFGenKbSecUserBuff::generateOptionalDfltDevUserId() {
		uuid_generate_random( optionalDfltDevUserId );
	}

	const bool CFGenKbSecUserBuff::isOptionalDfltDevNameNull() const {
		return( optionalDfltDevName == NULL );
	}

	const std::string& CFGenKbSecUserBuff::getOptionalDfltDevNameValue() const {
		static const std::string S_ProcName( "getOptionalDfltDevNameValue" );
		if( optionalDfltDevName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDfltDevName );
	}

	const std::string* CFGenKbSecUserBuff::getOptionalDfltDevNameReference() const {
		return( optionalDfltDevName );
	}

	void CFGenKbSecUserBuff::setOptionalDfltDevNameNull() {
		if( optionalDfltDevName != NULL ) {
			delete optionalDfltDevName;
			optionalDfltDevName = NULL;
		}
	}

	void CFGenKbSecUserBuff::setOptionalDfltDevNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalDfltDevNameValue" );
		if( value.length() > CFGenKbSecUserBuff::DFLTDEVNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecUserBuff::DFLTDEVNAME_MAX_LEN );
		}
		if( optionalDfltDevName != NULL ) {
			delete optionalDfltDevName;
			optionalDfltDevName = NULL;
		}
		optionalDfltDevName = new std::string( value );
	}

	const std::string& CFGenKbSecUserBuff::getRequiredPasswordHash() const {
		return( *requiredPasswordHash );
	}

	const std::string* CFGenKbSecUserBuff::getRequiredPasswordHashReference() const {
		return( requiredPasswordHash );
	}

	void CFGenKbSecUserBuff::setRequiredPasswordHash( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredPasswordHash" );
		if( value.length() > CFGenKbSecUserBuff::PASSWORDHASH_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecUserBuff::PASSWORDHASH_MAX_LEN );
		}
		if( requiredPasswordHash != NULL ) {
			delete requiredPasswordHash;
			requiredPasswordHash = NULL;
		}
		requiredPasswordHash = new std::string( value );
	}

	const bool CFGenKbSecUserBuff::isOptionalPasswordResetUuidNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalPasswordResetUuid[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getOptionalPasswordResetUuidValue() const {
		static const std::string S_ProcName( "getOptionalPasswordResetUuidValue" );
		if( isOptionalPasswordResetUuidNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalPasswordResetUuid );
	}

	const uuid_ptr_t CFGenKbSecUserBuff::getOptionalPasswordResetUuidReference() const {
		if( isOptionalPasswordResetUuidNull() ) {
			return( NULL );
		}
		else {
			return( optionalPasswordResetUuid );
		}
	}

	void CFGenKbSecUserBuff::setOptionalPasswordResetUuidNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
	}

	void CFGenKbSecUserBuff::setOptionalPasswordResetUuidValue( const uuid_ptr_t value ) {
		uuid_copy( optionalPasswordResetUuid, value );
	}

	void CFGenKbSecUserBuff::generateOptionalPasswordResetUuid() {
		uuid_generate_random( optionalPasswordResetUuid );
	}

	int32_t CFGenKbSecUserBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecUserBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecUserBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredLoginId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredEMailAddress() );
		if( ! isOptionalEMailConfirmUuidNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalEMailConfirmUuidValue() );
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDfltDevUserIdValue() );
		}
		if( ! isOptionalDfltDevNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDfltDevNameValue() );
		}
		hashCode = hashCode + cflib::CFLib::hash( getRequiredPasswordHash() );
		if( ! isOptionalPasswordResetUuidNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalPasswordResetUuidValue() );
		}
		return( hashCode );
	}

	CFGenKbSecUserBuff CFGenKbSecUserBuff::operator =( cfcore::CFGenKbSecUserBuff& src ) {
		setRequiredSecUserId( src.getRequiredSecUserId() );
		setCreatedByUserId( src.getCreatedByUserId() );
		setCreatedAt( src.getCreatedAt() );
		setUpdatedByUserId( src.getUpdatedByUserId() );
		setUpdatedAt( src.getUpdatedAt() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredLoginId( src.getRequiredLoginId() );
		setRequiredEMailAddress( src.getRequiredEMailAddress() );
		if( src.isOptionalEMailConfirmUuidNull() ) {
			setOptionalEMailConfirmUuidNull();
		}
		else {
			setOptionalEMailConfirmUuidValue( src.getOptionalEMailConfirmUuidValue() );
		}
		if( src.isOptionalDfltDevUserIdNull() ) {
			setOptionalDfltDevUserIdNull();
		}
		else {
			setOptionalDfltDevUserIdValue( src.getOptionalDfltDevUserIdValue() );
		}
		if( src.isOptionalDfltDevNameNull() ) {
			setOptionalDfltDevNameNull();
		}
		else {
			setOptionalDfltDevNameValue( src.getOptionalDfltDevNameValue() );
		}
		setRequiredPasswordHash( src.getRequiredPasswordHash() );
		if( src.isOptionalPasswordResetUuidNull() ) {
			setOptionalPasswordResetUuidNull();
		}
		else {
			setOptionalPasswordResetUuidValue( src.getOptionalPasswordResetUuidValue() );
		}
		return( *this );
	}

	bool CFGenKbSecUserBuff::operator <( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator <( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator <( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator <( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator <( const CFGenKbSecUserPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator <( const CFGenKbSecUserBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		if( getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator <=( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator <=( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator <=( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator <=( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator <=( const CFGenKbSecUserPKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator <=( const CFGenKbSecUserBuff& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		if( getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator ==( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator ==( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				if( 0 != uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator ==( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				if( 0 != uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator ==( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				if( 0 != uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				if( getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator ==( const CFGenKbSecUserPKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator ==( const CFGenKbSecUserBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		if( getRequiredEMailAddress() != rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				if( 0 != uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				if( 0 != uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				if( getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		if( getRequiredPasswordHash() != rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				if( 0 != uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator !=( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator !=( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator !=( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator !=( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator !=( const CFGenKbSecUserPKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator !=( const CFGenKbSecUserBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( getRequiredEMailAddress() != rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		if( getRequiredPasswordHash() != rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator >=( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator >=( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator >=( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator >=( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator >=( const CFGenKbSecUserPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator >=( const CFGenKbSecUserBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		if( getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecUserBuff::operator >( const CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator >( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator >( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator >( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator >( const CFGenKbSecUserPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecUserBuff::operator >( const CFGenKbSecUserBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbSecUserBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_CreatedBy( "CreatedBy" );
		static const std::string S_CreatedAt( "CreatedAt" );
		static const std::string S_UpdatedBy( "UpdatedBy" );
		static const std::string S_UpdatedAt( "UpdatedAt" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_LoginId( "LoginId" );
		static const std::string S_EMailAddress( "EMailAddress" );
		static const std::string S_EMailConfirmUuid( "EMailConfirmUuid" );
		static const std::string S_DfltDevUserId( "DfltDevUserId" );
		static const std::string S_DfltDevName( "DfltDevName" );
		static const std::string S_PasswordHash( "PasswordHash" );
		static const std::string S_PasswordResetUuid( "PasswordResetUuid" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_CreatedBy, getCreatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_CreatedAt, getCreatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_UpdatedBy, getUpdatedByUserId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredTZTimestamp( &S_Space, S_UpdatedAt, getUpdatedAt() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_LoginId, getRequiredLoginId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_EMailAddress, getRequiredEMailAddress() ) );
		if( ! isOptionalEMailConfirmUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_EMailConfirmUuid, getOptionalEMailConfirmUuidValue() ) );
		}
		if( ! isOptionalDfltDevUserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_DfltDevUserId, getOptionalDfltDevUserIdValue() ) );
		}
		if( ! isOptionalDfltDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DfltDevName, getOptionalDfltDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_PasswordHash, getRequiredPasswordHash() ) );
		if( ! isOptionalPasswordResetUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_PasswordResetUuid, getOptionalPasswordResetUuidValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( lhs.getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( lhs.getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( lhs.getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( lhs.getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( lhs.getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( lhs.getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				if( lhs.getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( false );
		}
		if( lhs.getRequiredEMailAddress() != rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				if( lhs.getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredPasswordHash() != rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredLoginId() != rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( lhs.getRequiredEMailAddress() != rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDfltDevNameValue() != rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredPasswordHash() != rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( lhs.getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( lhs.getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( lhs.getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByULoginIdxKey& rhs ) {
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecUserBuff& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredLoginId() < rhs.getRequiredLoginId() ) {
			return( false );
		}
		else if( lhs.getRequiredLoginId() > rhs.getRequiredLoginId() ) {
			return( true );
		}
		if( lhs.getRequiredEMailAddress() < rhs.getRequiredEMailAddress() ) {
			return( false );
		}
		else if( lhs.getRequiredEMailAddress() > rhs.getRequiredEMailAddress() ) {
			return( true );
		}
		if( ! lhs.isOptionalEMailConfirmUuidNull() ) {
			if( rhs.isOptionalEMailConfirmUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalEMailConfirmUuidValue(), rhs.getOptionalEMailConfirmUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalEMailConfirmUuidNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevUserIdNull() ) {
			if( rhs.isOptionalDfltDevUserIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalDfltDevUserIdValue(), rhs.getOptionalDfltDevUserIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevUserIdNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalDfltDevNameNull() ) {
			if( rhs.isOptionalDfltDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalDfltDevNameValue() < rhs.getOptionalDfltDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalDfltDevNameValue() > rhs.getOptionalDfltDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalDfltDevNameNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredPasswordHash() < rhs.getRequiredPasswordHash() ) {
			return( false );
		}
		else if( lhs.getRequiredPasswordHash() > rhs.getRequiredPasswordHash() ) {
			return( true );
		}
		if( ! lhs.isOptionalPasswordResetUuidNull() ) {
			if( rhs.isOptionalPasswordResetUuidNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalPasswordResetUuidValue(), rhs.getOptionalPasswordResetUuidValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalPasswordResetUuidNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

