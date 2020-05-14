// Description: C++18 implementation for a GelSpread by LastIdx index key object.

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

#include <cfgenkb/CFGenKbGelSpreadByLastIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSpreadBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSpreadByLastIdxKey::CLASS_NAME( "CFGenKbGelSpreadByLastIdxKey" );
	const std::string CFGenKbGelSpreadByLastIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSpreadByLastIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSpreadByLastIdxKey::CFGenKbGelSpreadByLastIdxKey() {
		optionalExpandLast = NULL;
	}

	CFGenKbGelSpreadByLastIdxKey::CFGenKbGelSpreadByLastIdxKey( const CFGenKbGelSpreadByLastIdxKey& src ) {
		optionalExpandLast = NULL;
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
	}

	CFGenKbGelSpreadByLastIdxKey::~CFGenKbGelSpreadByLastIdxKey() {
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
	}

	const std::string& CFGenKbGelSpreadByLastIdxKey::getOptionalExpandLastValue() const {
		static const std::string S_ProcName( "getOptionalExpandLastValue" );
		if( optionalExpandLast == NULL ) {
			throw cflib::CFLibNullArgumentException( CLASS_NAME,
				S_ProcName,
				0,
				S_VALUE );
		}
		return( *optionalExpandLast );
	}

	const std::string* CFGenKbGelSpreadByLastIdxKey::getOptionalExpandLastReference() const {
		return( optionalExpandLast );
	}

	const bool CFGenKbGelSpreadByLastIdxKey::isOptionalExpandLastNull() const {
		return( optionalExpandLast == NULL );
	}

	void CFGenKbGelSpreadByLastIdxKey::setOptionalExpandLastNull() {
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
	}

	void CFGenKbGelSpreadByLastIdxKey::setOptionalExpandLastValue( const std::string& value ) {
		static const std::string S_ProcName( "setOptionalExpandLastValue" );
		if( value.length() > CFGenKbGelSpreadBuff::EXPANDLAST_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbGelSpreadBuff::EXPANDLAST_MAX_LEN );
		}
		if( optionalExpandLast != NULL ) {
			delete optionalExpandLast;
			optionalExpandLast = NULL;
		}
		optionalExpandLast = new std::string( value );
	}

	size_t CFGenKbGelSpreadByLastIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalExpandLastNull() ) {
			hashCode = hashCode + cflib::CFLib::hash( getOptionalExpandLastValue() );
		}
		return( hashCode );
	}

	std::string CFGenKbGelSpreadByLastIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSpreadByLastIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ExpandLast( "ExpandLast" );
		std::string ret( S_Preamble );
		if( ! isOptionalExpandLastNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_ExpandLast, getOptionalExpandLastValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator <( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator <( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator <=( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator <=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator ==( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator ==( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator !=( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator !=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator >=( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator >=( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator >( const CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbGelSpreadByLastIdxKey::operator >( const CFGenKbGelSpreadBuff& rhs ) {
		if( ! isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbGelSpreadByLastIdxKey CFGenKbGelSpreadByLastIdxKey::operator =( cfcore::CFGenKbGelSpreadByLastIdxKey& src ) {
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
		return( *this );
	}

	CFGenKbGelSpreadByLastIdxKey CFGenKbGelSpreadByLastIdxKey::operator =( cfcore::CFGenKbGelSpreadBuff& src ) {
		if( src.isOptionalExpandLastNull() ) {
			setOptionalExpandLastNull();
		}
		else {
			setOptionalExpandLastValue( src.getOptionalExpandLastValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
			if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( ! rhs.isOptionalExpandLastNull() ) {
				if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() != rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadByLastIdxKey& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSpreadByLastIdxKey& lhs, const cfcore::CFGenKbGelSpreadBuff& rhs ) {
		if( ! lhs.isOptionalExpandLastNull() ) {
			if( rhs.isOptionalExpandLastNull() ) {
				return( true );
			}
			if( lhs.getOptionalExpandLastValue() < rhs.getOptionalExpandLastValue() ) {
				return( false );
			}
			else if( lhs.getOptionalExpandLastValue() > rhs.getOptionalExpandLastValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalExpandLastNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

