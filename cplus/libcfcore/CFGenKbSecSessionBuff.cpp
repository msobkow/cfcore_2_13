// Description: C++18 implementation for a SecSession buffer object.

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

#include <cfgenkb/CFGenKbSecSessionBySecUserIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBySecDevIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionByStartIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionByFinishIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBySecProxyIdxKey.hpp>
#include <cfgenkb/CFGenKbSchema.hpp>

namespace cfcore {

	const std::string CFGenKbSecSessionBuff::S_VALUE( "value" );
	const std::string CFGenKbSecSessionBuff::S_VALUE_LENGTH( "value.length()" );

	const std::string CFGenKbSecSessionBuff::GENDEFNAME( "SecSession" );
	const classcode_t CFGenKbSecSessionBuff::CLASS_CODE = 0xa90dL;
	const std::string CFGenKbSecSessionBuff::CLASS_NAME( "CFGenKbSecSessionBuff" );
		const std::string CFGenKbSecSessionBuff::COLNAME_SECSESSIONID( "SecSessionId" );
		const std::string CFGenKbSecSessionBuff::COLNAME_SECUSERID( "SecUserId" );
		const std::string CFGenKbSecSessionBuff::COLNAME_SECDEVNAME( "SecDevName" );
		const std::string CFGenKbSecSessionBuff::COLNAME_START( "Start" );
		const std::string CFGenKbSecSessionBuff::COLNAME_FINISH( "Finish" );
		const std::string CFGenKbSecSessionBuff::COLNAME_SECPROXYID( "SecProxyId" );
	const std::string CFGenKbSecSessionBuff::SECDEVNAME_INIT_VALUE( "" );
	std::chrono::system_clock::time_point CFGenKbSecSessionBuff::START_INIT_VALUE = cflib::CFLib::getUTCGregorianCalendarInstance( 2020, 0, 1, 0, 0, 0 );
	const std::string::size_type CFGenKbSecSessionBuff::SECDEVNAME_MAX_LEN = 127;

	CFGenKbSecSessionBuff::CFGenKbSecSessionBuff()
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		for( int i = 0; i < 16; i ++ ) {
			requiredSecSessionId[i] = 0;
		}
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		optionalSecDevName = NULL;
		requiredStart = cflib::CFLib::getUTCGregorianCalendarInstance( 2020, 0, 1, 0, 0, 0 );
		optionalFinish = NULL;
		for( int i = 0; i < 16; i ++ ) {
			optionalSecProxyId[i] = 0;
		}
	}

	CFGenKbSecSessionBuff::CFGenKbSecSessionBuff( const CFGenKbSecSessionBuff& src )
	: cflib::ICFLibCloneableObj()
	{
		requiredRevision = 1;
		for( int i = 0; i < 16; i ++ ) {
			requiredSecSessionId[i] = 0;
		}
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		optionalSecDevName = NULL;
		requiredStart = cflib::CFLib::getUTCGregorianCalendarInstance( 2020, 0, 1, 0, 0, 0 );
		optionalFinish = NULL;
		for( int i = 0; i < 16; i ++ ) {
			optionalSecProxyId[i] = 0;
		}
		setRequiredSecSessionId( src.getRequiredSecSessionId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
		if( src.isOptionalSecDevNameNull() ) {
			setOptionalSecDevNameNull();
		}
		else {
			setOptionalSecDevNameValue( src.getOptionalSecDevNameValue() );
		}
		setRequiredStart( src.getRequiredStart() );
		if( src.isOptionalFinishNull() ) {
			setOptionalFinishNull();
		}
		else {
			setOptionalFinishValue( src.getOptionalFinishValue() );
		}
		if( src.isOptionalSecProxyIdNull() ) {
			setOptionalSecProxyIdNull();
		}
		else {
			setOptionalSecProxyIdValue( src.getOptionalSecProxyIdValue() );
		}
	}

	CFGenKbSecSessionBuff::~CFGenKbSecSessionBuff() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecSessionId[i] = 0;
		}
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		if( optionalSecDevName != NULL ) {
			delete optionalSecDevName;
			optionalSecDevName = NULL;
		}
		if( optionalFinish != NULL ) {
			delete optionalFinish;
			optionalFinish = NULL;
		}
		for( int i = 0; i < 16; i ++ ) {
			optionalSecProxyId[i] = 0;
		}
	}

	cflib::ICFLibCloneableObj* CFGenKbSecSessionBuff::clone() {
		CFGenKbSecSessionBuff* copy = new CFGenKbSecSessionBuff();
		*copy = *this;
		cflib::ICFLibCloneableObj* retval = dynamic_cast<cflib::ICFLibCloneableObj*>( copy );
		return( retval );
	}

	const std::string& CFGenKbSecSessionBuff::getClassName() const {
		return( CLASS_NAME );
	}

	const classcode_t CFGenKbSecSessionBuff::getClassCode() const {
		return( CLASS_CODE );
	}

	bool CFGenKbSecSessionBuff::implementsClassCode( const classcode_t argClassCode ) {
		if( argClassCode == CLASS_CODE ) {
			return( true );
		}
		else {
			return( false );
		}
	}

	const uuid_ptr_t CFGenKbSecSessionBuff::getRequiredSecSessionId() const {
		return( requiredSecSessionId );
	}

	const uuid_ptr_t CFGenKbSecSessionBuff::getRequiredSecSessionIdReference() const {
		return( requiredSecSessionId );
	}

	void CFGenKbSecSessionBuff::setRequiredSecSessionId( const uuid_ptr_t value ) {
		uuid_copy( requiredSecSessionId, value );
	}

	void CFGenKbSecSessionBuff::generateRequiredSecSessionId() {
		uuid_generate_random( requiredSecSessionId );
	}

	const uuid_ptr_t CFGenKbSecSessionBuff::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbSecSessionBuff::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbSecSessionBuff::setRequiredSecUserId( const uuid_ptr_t value ) {
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbSecSessionBuff::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	const bool CFGenKbSecSessionBuff::isOptionalSecDevNameNull() const {
		return( optionalSecDevName == NULL );
	}

	const std::string& CFGenKbSecSessionBuff::getOptionalSecDevNameValue() const {
		static const std::string S_ProcName( "getOptionalSecDevNameValue" );
		if( optionalSecDevName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalSecDevName );
	}

	const std::string* CFGenKbSecSessionBuff::getOptionalSecDevNameReference() const {
		return( optionalSecDevName );
	}

	void CFGenKbSecSessionBuff::setOptionalSecDevNameNull() {
		if( optionalSecDevName != NULL ) {
			delete optionalSecDevName;
			optionalSecDevName = NULL;
		}
	}

	void CFGenKbSecSessionBuff::setOptionalSecDevNameValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalSecDevNameValue" );
		if( value.length() > CFGenKbSecSessionBuff::SECDEVNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbSecSessionBuff::SECDEVNAME_MAX_LEN );
		}
		if( optionalSecDevName != NULL ) {
			delete optionalSecDevName;
			optionalSecDevName = NULL;
		}
		optionalSecDevName = new std::string( value );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecSessionBuff::getRequiredStart() const {
		return( requiredStart );
	}

	const std::chrono::system_clock::time_point* CFGenKbSecSessionBuff::getRequiredStartReference() const {
		return( &requiredStart );
	}

	void CFGenKbSecSessionBuff::setRequiredStart( const std::chrono::system_clock::time_point& value ) {
		static const std::string S_ProcName( "setRequiredStart" );
		requiredStart = value;
	}

	const bool CFGenKbSecSessionBuff::isOptionalFinishNull() const {
		return( optionalFinish == NULL );
	}

	const std::chrono::system_clock::time_point& CFGenKbSecSessionBuff::getOptionalFinishValue() const {
		static const std::string S_ProcName( "getOptionalFinishValue" );
		if( optionalFinish == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalFinish );
	}

	const std::chrono::system_clock::time_point* CFGenKbSecSessionBuff::getOptionalFinishReference() const {
		return( optionalFinish );
	}

	void CFGenKbSecSessionBuff::setOptionalFinishNull() {
		if( optionalFinish != NULL ) {
			delete optionalFinish;
			optionalFinish = NULL;
		}
	}

	void CFGenKbSecSessionBuff::setOptionalFinishValue( const std::chrono::system_clock::time_point& value ) {
		static const std::string S_ProcName( "setOptionalFinishValue" );
		static const std::string S_ColumnName( ".Finish" );
		if( optionalFinish != NULL ) {
			delete optionalFinish;
			optionalFinish = NULL;
		}
		optionalFinish = new std::chrono::system_clock::time_point( value );
	}

	const bool CFGenKbSecSessionBuff::isOptionalSecProxyIdNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalSecProxyId[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	const uuid_ptr_t CFGenKbSecSessionBuff::getOptionalSecProxyIdValue() const {
		static const std::string S_ProcName( "getOptionalSecProxyIdValue" );
		if( isOptionalSecProxyIdNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalSecProxyId );
	}

	const uuid_ptr_t CFGenKbSecSessionBuff::getOptionalSecProxyIdReference() const {
		if( isOptionalSecProxyIdNull() ) {
			return( NULL );
		}
		else {
			return( optionalSecProxyId );
		}
	}

	void CFGenKbSecSessionBuff::setOptionalSecProxyIdNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalSecProxyId[i] = 0;
		}
	}

	void CFGenKbSecSessionBuff::setOptionalSecProxyIdValue( const uuid_ptr_t value ) {
		uuid_copy( optionalSecProxyId, value );
	}

	void CFGenKbSecSessionBuff::generateOptionalSecProxyId() {
		uuid_generate_random( optionalSecProxyId );
	}

	int32_t CFGenKbSecSessionBuff::getRequiredRevision() const {
		return( requiredRevision );
	}

	void CFGenKbSecSessionBuff::setRequiredRevision( int32_t value ) {
		requiredRevision = value;
	}

	size_t CFGenKbSecSessionBuff::hashCode() const {
		size_t hashCode = 0L;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecSessionId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		if( ! isOptionalSecDevNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSecDevNameValue() );
		}
		hashCode = hashCode + cflib::CFLib::hash( getRequiredStart() );
		if( ! isOptionalFinishNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalFinishValue() );
		}
		if( ! isOptionalSecProxyIdNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalSecProxyIdValue() );
		}
		return( hashCode );
	}

	CFGenKbSecSessionBuff CFGenKbSecSessionBuff::operator =( cfcore::CFGenKbSecSessionBuff& src ) {
		setRequiredSecSessionId( src.getRequiredSecSessionId() );
		setRequiredRevision( src.getRequiredRevision() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
		if( src.isOptionalSecDevNameNull() ) {
			setOptionalSecDevNameNull();
		}
		else {
			setOptionalSecDevNameValue( src.getOptionalSecDevNameValue() );
		}
		setRequiredStart( src.getRequiredStart() );
		if( src.isOptionalFinishNull() ) {
			setOptionalFinishNull();
		}
		else {
			setOptionalFinishValue( src.getOptionalFinishValue() );
		}
		if( src.isOptionalSecProxyIdNull() ) {
			setOptionalSecProxyIdNull();
		}
		else {
			setOptionalSecProxyIdValue( src.getOptionalSecProxyIdValue() );
		}
		return( *this );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator <=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( getRequiredStart() != rhs.getRequiredStart() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! isOptionalFinishNull() ) {
			if( ! rhs.isOptionalFinishNull() ) {
				if( getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! isOptionalSecProxyIdNull() ) {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				if( 0 != uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator ==( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		if( getRequiredStart() != rhs.getRequiredStart() ) {
			return( false );
		}
		if( ! isOptionalFinishNull() ) {
			if( ! rhs.isOptionalFinishNull() ) {
				if( getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSecProxyIdNull() ) {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				if( 0 != uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredStart() != rhs.getRequiredStart() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator !=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		if( getRequiredStart() != rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBuff::operator >( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		if( ! isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	std::string CFGenKbSecSessionBuff::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecSessionBuff" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Revision( "Revision" );
		static const std::string S_SecSessionId( "SecSessionId" );
		static const std::string S_SecUserId( "SecUserId" );
		static const std::string S_SecDevName( "SecDevName" );
		static const std::string S_Start( "Start" );
		static const std::string S_Finish( "Finish" );
		static const std::string S_SecProxyId( "SecProxyId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecSessionId, getRequiredSecSessionId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_Revision, getRequiredRevision() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		if( ! isOptionalSecDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_SecDevName, getOptionalSecDevNameValue() ) );
		}
		ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Start, getRequiredStart() ) );
		if( ! isOptionalFinishNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredTimestamp( &S_Space, S_Finish, getOptionalFinishValue() ) );
		}
		if( ! isOptionalSecProxyIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecProxyId, getOptionalSecProxyIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
			if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( false );
			}
			if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
			if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( lhs.getRequiredStart() != rhs.getRequiredStart() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( ! rhs.isOptionalFinishNull() ) {
				if( lhs.getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
					return( false );
				}
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredStart() != rhs.getRequiredStart() ) {
			return( false );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( ! rhs.isOptionalFinishNull() ) {
				if( lhs.getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
					return( false );
				}
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				if( 0 != uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredStart() != rhs.getRequiredStart() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( lhs.getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() != rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
		}
		if( lhs.getRequiredStart() != rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( lhs.getOptionalFinishValue() != rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( true );
			}
		}
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 != uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecDevIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByStartIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionByFinishIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBySecProxyIdxKey& rhs ) {
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBuff& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		if( ! lhs.isOptionalSecDevNameNull() ) {
			if( rhs.isOptionalSecDevNameNull() ) {
				return( true );
			}
			if( lhs.getOptionalSecDevNameValue() < rhs.getOptionalSecDevNameValue() ) {
				return( false );
			}
			else if( lhs.getOptionalSecDevNameValue() > rhs.getOptionalSecDevNameValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecDevNameNull() ) {
				return( false );
			}
		}
		if( lhs.getRequiredStart() < rhs.getRequiredStart() ) {
			return( false );
		}
		else if( lhs.getRequiredStart() > rhs.getRequiredStart() ) {
			return( true );
		}
		if( ! lhs.isOptionalFinishNull() ) {
			if( rhs.isOptionalFinishNull() ) {
				return( true );
			}
			if( lhs.getOptionalFinishValue() < rhs.getOptionalFinishValue() ) {
				return( false );
			}
			else if( lhs.getOptionalFinishValue() > rhs.getOptionalFinishValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalFinishNull() ) {
				return( false );
			}
		}
		if( ! lhs.isOptionalSecProxyIdNull() ) {
			if( rhs.isOptionalSecProxyIdNull() ) {
				return( true );
			}
			if( 0 > uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( false );
			}
			else if( 0 < uuid_compare( lhs.getOptionalSecProxyIdValue(), rhs.getOptionalSecProxyIdValue() ) ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalSecProxyIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

