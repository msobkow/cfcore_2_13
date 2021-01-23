// Description: C++18 implementation for a GelIterator by EmptyIdx index key object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020-2021 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at mark.sobkow@gmail.com for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */

#include <cflib/ICFLibPublic.hpp>

using namespace std;

#include <cfgenkb/CFGenKbGelIteratorByEmptyIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelIteratorByEmptyIdxKey::CLASS_NAME( "CFGenKbGelIteratorByEmptyIdxKey" );
	const std::string CFGenKbGelIteratorByEmptyIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelIteratorByEmptyIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelIteratorByEmptyIdxKey::CFGenKbGelIteratorByEmptyIdxKey() {
		optionalExpandEmpty = NULL;
	}

	CFGenKbGelIteratorByEmptyIdxKey::CFGenKbGelIteratorByEmptyIdxKey( const CFGenKbGelIteratorByEmptyIdxKey& src ) {
		optionalExpandEmpty = NULL;
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
	}

	CFGenKbGelIteratorByEmptyIdxKey::~CFGenKbGelIteratorByEmptyIdxKey() {
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
	}

	const std::string& CFGenKbGelIteratorByEmptyIdxKey::getOptionalExpandEmptyValue() const {
		static const std::string S_ProcName( "getOptionalExpandEmptyValue" );
		if( optionalExpandEmpty == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandEmpty );
	}

	const std::string* CFGenKbGelIteratorByEmptyIdxKey::getOptionalExpandEmptyReference() const {
		return( optionalExpandEmpty );
	}

	const bool CFGenKbGelIteratorByEmptyIdxKey::isOptionalExpandEmptyNull() const {
		return( optionalExpandEmpty == NULL );
	}

	void CFGenKbGelIteratorByEmptyIdxKey::setOptionalExpandEmptyNull() {
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
	}

	void CFGenKbGelIteratorByEmptyIdxKey::setOptionalExpandEmptyValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandEmptyValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDEMPTY_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDEMPTY_MAX_LEN );
		}
		if( optionalExpandEmpty != NULL ) {
			delete optionalExpandEmpty;
			optionalExpandEmpty = NULL;
		}
		optionalExpandEmpty = new std::string( value );
	}

	size_t CFGenKbGelIteratorByEmptyIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandEmptyNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandEmptyValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelIteratorByEmptyIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorByEmptyIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandEmpty( "ExpandEmpty" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandEmptyNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandEmpty, getOptionalExpandEmptyValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelIteratorByEmptyIdxKey::operator <( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator <( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator <=( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator <=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator ==( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator ==( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator !=( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator !=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator >=( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator >=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator >( const CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByEmptyIdxKey::operator >( const CFGenKbGelIteratorBuff& rhs ) {
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
	CFGenKbGelIteratorByEmptyIdxKey CFGenKbGelIteratorByEmptyIdxKey::operator =( cfcore::CFGenKbGelIteratorByEmptyIdxKey& src ) {
		if( src.isOptionalExpandEmptyNull() ) {
			setOptionalExpandEmptyNull();
		}
		else {
			setOptionalExpandEmptyValue( src.getOptionalExpandEmptyValue() );
		}
		return( *this );
	}

	CFGenKbGelIteratorByEmptyIdxKey CFGenKbGelIteratorByEmptyIdxKey::operator =( cfcore::CFGenKbGelIteratorBuff& src ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorByEmptyIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorByEmptyIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

