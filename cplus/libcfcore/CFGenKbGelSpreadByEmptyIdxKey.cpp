// Description: C++18 implementation for a GelSpread by EmptyIdx index key object.

/*
 *	com.github.msobkow.CFCore
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

#include <cfgenkb/CFGenKbGelSpreadByEmptyIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByEmptyIdxKey::CLASS_NAME( "CFGenKbGelSpreadByEmptyIdxKey" );
	const std::string CFGenKbGelSpreadByEmptyIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByEmptyIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByEmptyIdxKey::CFGenKbGelSpreadByEmptyIdxKey() {
		optionalExpandEmpty = NULL;
	}

	CFGenKbGelSpreadByEmptyIdxKey::CFGenKbGelSpreadByEmptyIdxKey( const CFGenKbGelSpreadByEmptyIdxKey& src ) {
		optionalExpandEmpty = NULL;
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
	}

	CFGenKbGelSpreadByEmptyIdxKey::~CFGenKbGelSpreadByEmptyIdxKey() {
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByEmptyIdxKey::getOptionalExpandEmptyValue() const {
		static const std::string S_ProcName( "getOptionalExpandEmptyValue" );
		if( optionalExpandEmpty == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandEmpty );
	}

	const std::string* CFGenKbGelSpreadByEmptyIdxKey::getOptionalExpandEmptyReference() const {
		return( optionalExpandEmpty );
	}

	const bool CFGenKbGelSpreadByEmptyIdxKey::isOptionalExpandEmptyNull() const {
		return( optionalExpandEmpty == NULL );
	}

	void CFGenKbGelSpreadByEmptyIdxKey::setOptionalExpandEmptyNull() {
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
	}

	void CFGenKbGelSpreadByEmptyIdxKey::setOptionalExpandEmptyValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandEmptyValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDEMPTY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDEMPTY_MAX_LEN );
		}
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
		optionalExpandEmpty = new std::string( value );
	}

	size_t CFGenKbGelSpreadByEmptyIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandEmptyNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandEmptyValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByEmptyIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByEmptyIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandEmpty( "ExpandEmpty" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandEmptyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEmpty, getOptionalExpandEmptyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator <( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator <=( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator ==( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator !=( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator >=( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator >( const CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByEmptyIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSpreadByEmptyIdxKey CFGenKbGelSpreadByEmptyIdxKey::operator =( cfcore::CFGenKbGelSpreadByEmptyIdxKey& src ) {
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
		return( *this );
	}

	CFGenKbGelSpreadByEmptyIdxKey CFGenKbGelSpreadByEmptyIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() != rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadByEmptyIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByEmptyIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandEmptyNull() ) {
			if( rhs.isOptionalExpandEmptyNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandEmptyValue() < rhs.getOptionalExpandEmptyValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandEmptyValue() > rhs.getOptionalExpandEmptyValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandEmptyNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

