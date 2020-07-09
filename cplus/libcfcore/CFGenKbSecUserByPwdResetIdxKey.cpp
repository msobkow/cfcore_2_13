// Description: C++18 implementation for a SecUser by PwdResetIdx index key object.

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

#include <cfgenkb/CFGenKbSecUserByPwdResetIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecUserByPwdResetIdxKey::CLASS_NAME( "CFGenKbSecUserByPwdResetIdxKey" );
	const std::string CFGenKbSecUserByPwdResetIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecUserByPwdResetIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecUserByPwdResetIdxKey::CFGenKbSecUserByPwdResetIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
	}

	CFGenKbSecUserByPwdResetIdxKey::CFGenKbSecUserByPwdResetIdxKey( const CFGenKbSecUserByPwdResetIdxKey& src ) {
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
		if( src.isOptionalPasswordResetUuidNull() ) {
			setOptionalPasswordResetUuidNull();
		}
		else {
			setOptionalPasswordResetUuidValue( src.getOptionalPasswordResetUuidValue() );
		}
	}

	CFGenKbSecUserByPwdResetIdxKey::~CFGenKbSecUserByPwdResetIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
	}

	const uuid_ptr_t CFGenKbSecUserByPwdResetIdxKey::getOptionalPasswordResetUuidValue() const {
		static const std::string S_ProcName( "getOptionalPasswordResetUuidValue" );
		if( isOptionalPasswordResetUuidNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalPasswordResetUuid );
	}

	const uuid_ptr_t CFGenKbSecUserByPwdResetIdxKey::getOptionalPasswordResetUuidReference() const {
		if( isOptionalPasswordResetUuidNull() ) {
			return( NULL );
		}
		else {
			return( optionalPasswordResetUuid );
		}
	}

	const bool CFGenKbSecUserByPwdResetIdxKey::isOptionalPasswordResetUuidNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalPasswordResetUuid[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	void CFGenKbSecUserByPwdResetIdxKey::setOptionalPasswordResetUuidNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalPasswordResetUuid[i] = 0;
		}
	}

	void CFGenKbSecUserByPwdResetIdxKey::setOptionalPasswordResetUuidValue( const uuid_ptr_t value ) {
		uuid_copy( optionalPasswordResetUuid, value );
	}

	void CFGenKbSecUserByPwdResetIdxKey::generateOptionalPasswordResetUuid() {
		uuid_generate_random( optionalPasswordResetUuid );
	}

	size_t CFGenKbSecUserByPwdResetIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalPasswordResetUuidNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalPasswordResetUuidValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbSecUserByPwdResetIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserByPwdResetIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_PasswordResetUuid( "PasswordResetUuid" );
		std::string ret( S_Preamble );
		if( ! isOptionalPasswordResetUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_PasswordResetUuid, getOptionalPasswordResetUuidValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecUserByPwdResetIdxKey::operator <( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator <( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator <=( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator <=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator ==( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator ==( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator !=( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator !=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator >=( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator >=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator >( const CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool CFGenKbSecUserByPwdResetIdxKey::operator >( const CFGenKbSecUserBuff& rhs ) {
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
	CFGenKbSecUserByPwdResetIdxKey CFGenKbSecUserByPwdResetIdxKey::operator =( cfcore::CFGenKbSecUserByPwdResetIdxKey& src ) {
		if( src.isOptionalPasswordResetUuidNull() ) {
			setOptionalPasswordResetUuidNull();
		}
		else {
			setOptionalPasswordResetUuidValue( src.getOptionalPasswordResetUuidValue() );
		}
		return( *this );
	}

	CFGenKbSecUserByPwdResetIdxKey CFGenKbSecUserByPwdResetIdxKey::operator =( cfcore::CFGenKbSecUserBuff& src ) {
		if( src.isOptionalPasswordResetUuidNull() ) {
			setOptionalPasswordResetUuidNull();
		}
		else {
			setOptionalPasswordResetUuidValue( src.getOptionalPasswordResetUuidValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserByPwdResetIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecUserByPwdResetIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

