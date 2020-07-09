// Description: C++18 implementation for a SecSession by SecUserIdx index key object.

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

#include <cfgenkb/CFGenKbSecSessionBySecUserIdxKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecSessionBySecUserIdxKey::CLASS_NAME( "CFGenKbSecSessionBySecUserIdxKey" );
	const std::string CFGenKbSecSessionBySecUserIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecSessionBySecUserIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecSessionBySecUserIdxKey::CFGenKbSecSessionBySecUserIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
	}

	CFGenKbSecSessionBySecUserIdxKey::CFGenKbSecSessionBySecUserIdxKey( const CFGenKbSecSessionBySecUserIdxKey& src ) {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		setRequiredSecUserId( src.getRequiredSecUserId() );
	}

	CFGenKbSecSessionBySecUserIdxKey::~CFGenKbSecSessionBySecUserIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
	}

	const uuid_ptr_t CFGenKbSecSessionBySecUserIdxKey::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbSecSessionBySecUserIdxKey::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbSecSessionBySecUserIdxKey::setRequiredSecUserId( const uuid_ptr_t value ) {
		static const std::string S_ProcName( "setRequiredSecUserId" );
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbSecSessionBySecUserIdxKey::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	size_t CFGenKbSecSessionBySecUserIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		return( hashCode );
	}

	std::string CFGenKbSecSessionBySecUserIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecSessionBySecUserIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator <( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator <( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator <=( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator <=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator ==( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator ==( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator !=( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator !=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator >=( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator >=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator >( const CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionBySecUserIdxKey::operator >( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecSessionBySecUserIdxKey CFGenKbSecSessionBySecUserIdxKey::operator =( cfcore::CFGenKbSecSessionBySecUserIdxKey& src ) {
		setRequiredSecUserId( src.getRequiredSecUserId() );
		return( *this );
	}

	CFGenKbSecSessionBySecUserIdxKey CFGenKbSecSessionBySecUserIdxKey::operator =( cfcore::CFGenKbSecSessionBuff& src ) {
		setRequiredSecUserId( src.getRequiredSecUserId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBySecUserIdxKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionBySecUserIdxKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}
}

