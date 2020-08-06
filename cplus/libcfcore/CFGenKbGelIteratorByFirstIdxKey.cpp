// Description: C++18 implementation for a GelIterator by FirstIdx index key object.

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

#include <cfgenkb/CFGenKbGelIteratorByFirstIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelIteratorByFirstIdxKey::CLASS_NAME( "CFGenKbGelIteratorByFirstIdxKey" );
	const std::string CFGenKbGelIteratorByFirstIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelIteratorByFirstIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelIteratorByFirstIdxKey::CFGenKbGelIteratorByFirstIdxKey() {
		optionalExpandFirst = NULL;
	}

	CFGenKbGelIteratorByFirstIdxKey::CFGenKbGelIteratorByFirstIdxKey( const CFGenKbGelIteratorByFirstIdxKey& src ) {
		optionalExpandFirst = NULL;
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
	}

	CFGenKbGelIteratorByFirstIdxKey::~CFGenKbGelIteratorByFirstIdxKey() {
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
	}

	const std::string& CFGenKbGelIteratorByFirstIdxKey::getOptionalExpandFirstValue() const {
		static const std::string S_ProcName( "getOptionalExpandFirstValue" );
		if( optionalExpandFirst == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandFirst );
	}

	const std::string* CFGenKbGelIteratorByFirstIdxKey::getOptionalExpandFirstReference() const {
		return( optionalExpandFirst );
	}

	const bool CFGenKbGelIteratorByFirstIdxKey::isOptionalExpandFirstNull() const {
		return( optionalExpandFirst == NULL );
	}

	void CFGenKbGelIteratorByFirstIdxKey::setOptionalExpandFirstNull() {
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
	}

	void CFGenKbGelIteratorByFirstIdxKey::setOptionalExpandFirstValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandFirstValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDFIRST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDFIRST_MAX_LEN );
		}
		if( optionalExpandFirst != NULL ) {
			delete optionalExpandFirst;
			optionalExpandFirst = NULL;
		}
		optionalExpandFirst = new std::string( value );
	}

	size_t CFGenKbGelIteratorByFirstIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandFirstNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandFirstValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelIteratorByFirstIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorByFirstIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandFirst( "ExpandFirst" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandFirstNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandFirst, getOptionalExpandFirstValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelIteratorByFirstIdxKey::operator <( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator <( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator <=( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator <=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator ==( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator ==( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator !=( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator !=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator >=( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator >=( const CFGenKbGelIteratorBuff& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator >( const CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool CFGenKbGelIteratorByFirstIdxKey::operator >( const CFGenKbGelIteratorBuff& rhs ) {
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
	CFGenKbGelIteratorByFirstIdxKey CFGenKbGelIteratorByFirstIdxKey::operator =( cfcore::CFGenKbGelIteratorByFirstIdxKey& src ) {
		if( src.isOptionalExpandFirstNull() ) {
			setOptionalExpandFirstNull();
		}
		else {
			setOptionalExpandFirstValue( src.getOptionalExpandFirstValue() );
		}
		return( *this );
	}

	CFGenKbGelIteratorByFirstIdxKey CFGenKbGelIteratorByFirstIdxKey::operator =( cfcore::CFGenKbGelIteratorBuff& src ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator <(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator <=(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator ==(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator !=(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator >=(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorByFirstIdxKey& rhs ) {
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

	bool operator >(const  cfcore::CFGenKbGelIteratorByFirstIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
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

