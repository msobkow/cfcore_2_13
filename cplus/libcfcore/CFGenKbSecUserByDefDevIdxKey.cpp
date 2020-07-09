// Description: C++18 implementation for a SecUser by DefDevIdx index key object.

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

#include <cfgenkb/CFGenKbSecUserByDefDevIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecUserByDefDevIdxKey::CLASS_NAME( "CFGenKbSecUserByDefDevIdxKey" );
	const std::string CFGenKbSecUserByDefDevIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecUserByDefDevIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecUserByDefDevIdxKey::CFGenKbSecUserByDefDevIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
		optionalDfltDevName = NULL;
	}

	CFGenKbSecUserByDefDevIdxKey::CFGenKbSecUserByDefDevIdxKey( const CFGenKbSecUserByDefDevIdxKey& src ) {
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
		optionalDfltDevName = NULL;
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
	}

	CFGenKbSecUserByDefDevIdxKey::~CFGenKbSecUserByDefDevIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
		if( optionalDfltDevName != NULL ) {
			delete optionalDfltDevName;
			optionalDfltDevName = NULL;
		}
	}

	const uuid_ptr_t CFGenKbSecUserByDefDevIdxKey::getOptionalDfltDevUserIdValue() const {
		static const std::string S_ProcName( "getOptionalDfltDevUserIdValue" );
		if( isOptionalDfltDevUserIdNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalDfltDevUserId );
	}

	const uuid_ptr_t CFGenKbSecUserByDefDevIdxKey::getOptionalDfltDevUserIdReference() const {
		if( isOptionalDfltDevUserIdNull() ) {
			return( NULL );
		}
		else {
			return( optionalDfltDevUserId );
		}
	}

	const bool CFGenKbSecUserByDefDevIdxKey::isOptionalDfltDevUserIdNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalDfltDevUserId[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	void CFGenKbSecUserByDefDevIdxKey::setOptionalDfltDevUserIdNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalDfltDevUserId[i] = 0;
		}
	}

	void CFGenKbSecUserByDefDevIdxKey::setOptionalDfltDevUserIdValue( const uuid_ptr_t value ) {
		uuid_copy( optionalDfltDevUserId, value );
	}

	void CFGenKbSecUserByDefDevIdxKey::generateOptionalDfltDevUserId() {
		uuid_generate_random( optionalDfltDevUserId );
	}

	const std::string& CFGenKbSecUserByDefDevIdxKey::getOptionalDfltDevNameValue() const {
		static const std::string S_ProcName( "getOptionalDfltDevNameValue" );
		if( optionalDfltDevName == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalDfltDevName );
	}

	const std::string* CFGenKbSecUserByDefDevIdxKey::getOptionalDfltDevNameReference() const {
		return( optionalDfltDevName );
	}

	const bool CFGenKbSecUserByDefDevIdxKey::isOptionalDfltDevNameNull() const {
		return( optionalDfltDevName == NULL );
	}

	void CFGenKbSecUserByDefDevIdxKey::setOptionalDfltDevNameNull() {
		if( optionalDfltDevName != NULL ) {
			delete optionalDfltDevName;
			optionalDfltDevName = NULL;
		}
	}

	void CFGenKbSecUserByDefDevIdxKey::setOptionalDfltDevNameValue( const std::string& value ) {
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

	size_t CFGenKbSecUserByDefDevIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalDfltDevUserIdNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDfltDevUserIdValue() );
		}
		if( ! isOptionalDfltDevNameNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalDfltDevNameValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbSecUserByDefDevIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserByDefDevIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_DfltDevUserId( "DfltDevUserId" );
		static const std::string S_DfltDevName( "DfltDevName" );
		std::string ret( S_Preamble );
		if( ! isOptionalDfltDevUserIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_DfltDevUserId, getOptionalDfltDevUserIdValue() ) );
		}
		if( ! isOptionalDfltDevNameNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_DfltDevName, getOptionalDfltDevNameValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecUserByDefDevIdxKey::operator <( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator <( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator <=( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator <=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator ==( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator ==( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator !=( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator !=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator >=( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator >=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator >( const CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool CFGenKbSecUserByDefDevIdxKey::operator >( const CFGenKbSecUserBuff& rhs ) {
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
	CFGenKbSecUserByDefDevIdxKey CFGenKbSecUserByDefDevIdxKey::operator =( cfcore::CFGenKbSecUserByDefDevIdxKey& src ) {
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
		return( *this );
	}

	CFGenKbSecUserByDefDevIdxKey CFGenKbSecUserByDefDevIdxKey::operator =( cfcore::CFGenKbSecUserBuff& src ) {
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
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserByDefDevIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecUserByDefDevIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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
}

