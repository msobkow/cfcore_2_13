// Description: C++18 implementation for a SecUser by EMConfIdx index key object.

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

#include <cfgenkb/CFGenKbSecUserByEMConfIdxKey.hpp>
#include <cfgenkb/CFGenKbSecUserBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecUserByEMConfIdxKey::CLASS_NAME( "CFGenKbSecUserByEMConfIdxKey" );
	const std::string CFGenKbSecUserByEMConfIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecUserByEMConfIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecUserByEMConfIdxKey::CFGenKbSecUserByEMConfIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
	}

	CFGenKbSecUserByEMConfIdxKey::CFGenKbSecUserByEMConfIdxKey( const CFGenKbSecUserByEMConfIdxKey& src ) {
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
		if( src.isOptionalEMailConfirmUuidNull() ) {
			setOptionalEMailConfirmUuidNull();
		}
		else {
			setOptionalEMailConfirmUuidValue( src.getOptionalEMailConfirmUuidValue() );
		}
	}

	CFGenKbSecUserByEMConfIdxKey::~CFGenKbSecUserByEMConfIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
	}

	const uuid_ptr_t CFGenKbSecUserByEMConfIdxKey::getOptionalEMailConfirmUuidValue() const {
		static const std::string S_ProcName( "getOptionalEMailConfirmUuidValue" );
		if( isOptionalEMailConfirmUuidNull() ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( optionalEMailConfirmUuid );
	}

	const uuid_ptr_t CFGenKbSecUserByEMConfIdxKey::getOptionalEMailConfirmUuidReference() const {
		if( isOptionalEMailConfirmUuidNull() ) {
			return( NULL );
		}
		else {
			return( optionalEMailConfirmUuid );
		}
	}

	const bool CFGenKbSecUserByEMConfIdxKey::isOptionalEMailConfirmUuidNull() const {
		for( int i = 0; i < 16; i ++ ) {
			if( optionalEMailConfirmUuid[ i ] != 0 ) {
				return( false );
			}
		}
		return( true );
	}

	void CFGenKbSecUserByEMConfIdxKey::setOptionalEMailConfirmUuidNull() {
		for( int i = 0; i < 16; i ++ ) {
			optionalEMailConfirmUuid[i] = 0;
		}
	}

	void CFGenKbSecUserByEMConfIdxKey::setOptionalEMailConfirmUuidValue( const uuid_ptr_t value ) {
		uuid_copy( optionalEMailConfirmUuid, value );
	}

	void CFGenKbSecUserByEMConfIdxKey::generateOptionalEMailConfirmUuid() {
		uuid_generate_random( optionalEMailConfirmUuid );
	}

	size_t CFGenKbSecUserByEMConfIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalEMailConfirmUuidNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalEMailConfirmUuidValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbSecUserByEMConfIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecUserByEMConfIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_EMailConfirmUuid( "EMailConfirmUuid" );
		std::string ret( S_Preamble );
		if( ! isOptionalEMailConfirmUuidNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_EMailConfirmUuid, getOptionalEMailConfirmUuidValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecUserByEMConfIdxKey::operator <( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator <( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator <=( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator <=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator ==( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator ==( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator !=( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator !=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator >=( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator >=( const CFGenKbSecUserBuff& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator >( const CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool CFGenKbSecUserByEMConfIdxKey::operator >( const CFGenKbSecUserBuff& rhs ) {
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
	CFGenKbSecUserByEMConfIdxKey CFGenKbSecUserByEMConfIdxKey::operator =( cfcore::CFGenKbSecUserByEMConfIdxKey& src ) {
		if( src.isOptionalEMailConfirmUuidNull() ) {
			setOptionalEMailConfirmUuidNull();
		}
		else {
			setOptionalEMailConfirmUuidValue( src.getOptionalEMailConfirmUuidValue() );
		}
		return( *this );
	}

	CFGenKbSecUserByEMConfIdxKey CFGenKbSecUserByEMConfIdxKey::operator =( cfcore::CFGenKbSecUserBuff& src ) {
		if( src.isOptionalEMailConfirmUuidNull() ) {
			setOptionalEMailConfirmUuidNull();
		}
		else {
			setOptionalEMailConfirmUuidValue( src.getOptionalEMailConfirmUuidValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
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
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserByEMConfIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbSecUserByEMConfIdxKey& lhs, const cfcore::CFGenKbSecUserBuff& rhs ) {
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
}

