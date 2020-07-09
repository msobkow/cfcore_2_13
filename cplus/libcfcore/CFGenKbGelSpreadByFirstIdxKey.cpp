// Description: C++18 implementation for a GelSpread by FirstIdx index key object.

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

#include <cfgenkb/CFGenKbGelSpreadByFirstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByFirstIdxKey::CLASS_NAME( "CFGenKbGelSpreadByFirstIdxKey" );
	const std::string CFGenKbGelSpreadByFirstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByFirstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByFirstIdxKey::CFGenKbGelSpreadByFirstIdxKey() {
		optionalExpandFirst = NULL;
	}

	CFGenKbGelSpreadByFirstIdxKey::CFGenKbGelSpreadByFirstIdxKey( const CFGenKbGelSpreadByFirstIdxKey& src ) {
		optionalExpandFirst = NULL;
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
	}

	CFGenKbGelSpreadByFirstIdxKey::~CFGenKbGelSpreadByFirstIdxKey() {
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByFirstIdxKey::getOptionalExpandFirstValue() const {
		static const std::string S_ProcName( "getOptionalExpandFirstValue" );
		if( optionalExpandFirst == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandFirst );
	}

	const std::string* CFGenKbGelSpreadByFirstIdxKey::getOptionalExpandFirstReference() const {
		return( optionalExpandFirst );
	}

	const bool CFGenKbGelSpreadByFirstIdxKey::isOptionalExpandFirstNull() const {
		return( optionalExpandFirst == NULL );
	}

	void CFGenKbGelSpreadByFirstIdxKey::setOptionalExpandFirstNull() {
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
	}

	void CFGenKbGelSpreadByFirstIdxKey::setOptionalExpandFirstValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandFirstValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDFIRST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDFIRST_MAX_LEN );
		}
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
		optionalExpandFirst = new std::string( value );
	}

	size_t CFGenKbGelSpreadByFirstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandFirstNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandFirstValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByFirstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByFirstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandFirst( "ExpandFirst" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandFirstNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandFirst, getOptionalExpandFirstValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator <( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator <=( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator ==( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator !=( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator >=( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator >( const CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByFirstIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSpreadByFirstIdxKey CFGenKbGelSpreadByFirstIdxKey::operator =( cfcore::CFGenKbGelSpreadByFirstIdxKey& src ) {
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
		return( *this );
	}

	CFGenKbGelSpreadByFirstIdxKey CFGenKbGelSpreadByFirstIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() != rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadByFirstIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByFirstIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandFirstNull() ) {
			if( rhs.isOptionalExpandFirstNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandFirstValue() < rhs.getOptionalExpandFirstValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandFirstValue() > rhs.getOptionalExpandFirstValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandFirstNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

