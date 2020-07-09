// Description: C++18 implementation of a SecSession primary key object.

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

#include <cfgenkb/CFGenKbSecSessionPKey.hpp>
#include <cfgenkb/CFGenKbSecSessionBuff.hpp>

namespace cfcore {

	const std::string CFGenKbSecSessionPKey::CLASS_NAME( "CFGenKbSecSessionPKey" );
	const std::string CFGenKbSecSessionPKey::S_VALUE( "value" );
	const std::string CFGenKbSecSessionPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbSecSessionPKey::CFGenKbSecSessionPKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecSessionId[i] = 0;
		}
	}

	CFGenKbSecSessionPKey::CFGenKbSecSessionPKey( const CFGenKbSecSessionPKey& src ) {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecSessionId[i] = 0;
		}
		setRequiredSecSessionId( src.getRequiredSecSessionId() );
	}

	CFGenKbSecSessionPKey::~CFGenKbSecSessionPKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecSessionId[i] = 0;
		}
	}

	const uuid_ptr_t CFGenKbSecSessionPKey::getRequiredSecSessionId() const {
		return( requiredSecSessionId );
	}

	const uuid_ptr_t CFGenKbSecSessionPKey::getRequiredSecSessionIdReference() const {
		return( requiredSecSessionId );
	}

	void CFGenKbSecSessionPKey::setRequiredSecSessionId( const uuid_ptr_t value ) {
		uuid_copy( requiredSecSessionId, value );
	}

	void CFGenKbSecSessionPKey::generateRequiredSecSessionId() {
		uuid_generate_random( requiredSecSessionId );
	}

	bool CFGenKbSecSessionPKey::operator <( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionPKey::operator <( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionPKey::operator <=( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionPKey::operator <=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionPKey::operator ==( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionPKey::operator ==( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecSessionPKey::operator !=( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionPKey::operator !=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionPKey::operator >=( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionPKey::operator >=( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecSessionPKey::operator >( const CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecSessionPKey::operator >( const CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	CFGenKbSecSessionPKey CFGenKbSecSessionPKey::operator =( cfcore::CFGenKbSecSessionPKey& src ) {
		setRequiredSecSessionId( src.getRequiredSecSessionId() );
		return( *this );
	}

	CFGenKbSecSessionPKey CFGenKbSecSessionPKey::operator =( cfcore::CFGenKbSecSessionBuff& src ) {
		setRequiredSecSessionId( src.getRequiredSecSessionId() );
		return( *this );
	}

	size_t CFGenKbSecSessionPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecSessionId() );
		return( hashCode );
	}

	std::string CFGenKbSecSessionPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecSessionPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_SecSessionId( "SecSessionId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecSessionId, getRequiredSecSessionId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 != uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionPKey& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecSessionPKey& lhs, const cfcore::CFGenKbSecSessionBuff& rhs ) {
		if( 0 < uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecSessionId(), rhs.getRequiredSecSessionId() ) ) {
			return( true );
		}
		return( false );
	}
}

