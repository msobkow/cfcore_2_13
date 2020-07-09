// Description: C++18 implementation for a GelIterator by LoneIdx index key object.

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

#include <cfgenkb/CFGenKbGelIteratorByLoneIdxKey.hpp>
#include <cfgenkb/CFGenKbGelIteratorBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelIteratorByLoneIdxKey::CLASS_NAME( "CFGenKbGelIteratorByLoneIdxKey" );
	const std::string CFGenKbGelIteratorByLoneIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelIteratorByLoneIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelIteratorByLoneIdxKey::CFGenKbGelIteratorByLoneIdxKey() {
		optionalExpandLone = NULL;
	}

	CFGenKbGelIteratorByLoneIdxKey::CFGenKbGelIteratorByLoneIdxKey( const CFGenKbGelIteratorByLoneIdxKey& src ) {
		optionalExpandLone = NULL;
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
	}

	CFGenKbGelIteratorByLoneIdxKey::~CFGenKbGelIteratorByLoneIdxKey() {
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
	}

	const std::string& CFGenKbGelIteratorByLoneIdxKey::getOptionalExpandLoneValue() const {
		static const std::string S_ProcName( "getOptionalExpandLoneValue" );
		if( optionalExpandLone == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLone );
	}

	const std::string* CFGenKbGelIteratorByLoneIdxKey::getOptionalExpandLoneReference() const {
		return( optionalExpandLone );
	}

	const bool CFGenKbGelIteratorByLoneIdxKey::isOptionalExpandLoneNull() const {
		return( optionalExpandLone == NULL );
	}

	void CFGenKbGelIteratorByLoneIdxKey::setOptionalExpandLoneNull() {
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
	}

	void CFGenKbGelIteratorByLoneIdxKey::setOptionalExpandLoneValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLoneValue" );
		if( value.length() > CFGenKbGelIteratorBuff::EXPANDLONE_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelIteratorBuff::EXPANDLONE_MAX_LEN );
		}
		if( optionalExpandLone != NULL ) {
			delete optionalExpandLone;
			optionalExpandLone = NULL;
		}
		optionalExpandLone = new std::string( value );
	}

	size_t CFGenKbGelIteratorByLoneIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandLoneNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandLoneValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelIteratorByLoneIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelIteratorByLoneIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandLone( "ExpandLone" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandLoneNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLone, getOptionalExpandLoneValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator <( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator <( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator <=( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator <=( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator ==( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator ==( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator !=( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator !=( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator >=( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator >=( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator >( const CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelIteratorByLoneIdxKey::operator >( const CFGenKbGelIteratorBuff& rhs ) {
		if( ! isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelIteratorByLoneIdxKey CFGenKbGelIteratorByLoneIdxKey::operator =( cfcore::CFGenKbGelIteratorByLoneIdxKey& src ) {
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
		return( *this );
	}

	CFGenKbGelIteratorByLoneIdxKey CFGenKbGelIteratorByLoneIdxKey::operator =( cfcore::CFGenKbGelIteratorBuff& src ) {
		if( src.isOptionalExpandLoneNull() ) {
			setOptionalExpandLoneNull();
		}
		else {
			setOptionalExpandLoneValue( src.getOptionalExpandLoneValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() != rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorByLoneIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelIteratorByLoneIdxKey& lhs, const cfcore::CFGenKbGelIteratorBuff& rhs ) {
		if( ! lhs.isOptionalExpandLoneNull() ) {
			if( rhs.isOptionalExpandLoneNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLoneValue() < rhs.getOptionalExpandLoneValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLoneValue() > rhs.getOptionalExpandLoneValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLoneNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

