// Description: C++18 implementation for a DefClass by BaseIdx index key object.

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

#include <cfgenkb/CFGenKbDefClassByBaseIdxKey.hpp>
#include <cfgenkb/CFGenKbDefClassBuff.hpp>

namespace cfcore {
	const std::string CFGenKbDefClassByBaseIdxKey::CLASS_NAME( "CFGenKbDefClassByBaseIdxKey" );
	const std::string CFGenKbDefClassByBaseIdxKey::S_VALUE( "value" );
	const std::string CFGenKbDefClassByBaseIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbDefClassByBaseIdxKey::CFGenKbDefClassByBaseIdxKey() {
		optionalBaseId.setNull();
	}

	CFGenKbDefClassByBaseIdxKey::CFGenKbDefClassByBaseIdxKey( const CFGenKbDefClassByBaseIdxKey& src ) {
		optionalBaseId.setNull();
		if( src.isOptionalBaseIdNull() ) {
			setOptionalBaseIdNull();
		}
		else {
			setOptionalBaseIdValue( src.getOptionalBaseIdValue() );
		}
	}

	CFGenKbDefClassByBaseIdxKey::~CFGenKbDefClassByBaseIdxKey() {
	}

	const int16_t CFGenKbDefClassByBaseIdxKey::getOptionalBaseIdValue() const {
		return( optionalBaseId.getValue() );
	}

	const int16_t* CFGenKbDefClassByBaseIdxKey::getOptionalBaseIdReference() const {
		return( optionalBaseId.getReference() );
	}

	const bool CFGenKbDefClassByBaseIdxKey::isOptionalBaseIdNull() const {
		return( optionalBaseId.isNull() );
	}

	void CFGenKbDefClassByBaseIdxKey::setOptionalBaseIdNull() {
		optionalBaseId.setNull();
	}

	void CFGenKbDefClassByBaseIdxKey::setOptionalBaseIdValue( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalBaseIdValue" );
		if( value < cfcore::CFGenKbDefClassBuff::BASEID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::BASEID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbDefClassBuff::BASEID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::BASEID_MAX_VALUE );
		}
		optionalBaseId.setValue( value );
	}

	size_t CFGenKbDefClassByBaseIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalBaseIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalBaseIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbDefClassByBaseIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbDefClassByBaseIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_BaseId( "BaseId" );
		std::string ret( S_Preamble );
		if( ! isOptionalBaseIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_BaseId, getOptionalBaseIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator <( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator <( const CFGenKbDefClassBuff& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator <=( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator <=( const CFGenKbDefClassBuff& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator ==( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator ==( const CFGenKbDefClassBuff& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator !=( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator !=( const CFGenKbDefClassBuff& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator >=( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator >=( const CFGenKbDefClassBuff& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator >( const CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbDefClassByBaseIdxKey::operator >( const CFGenKbDefClassBuff& rhs ) {
		if( ! isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbDefClassByBaseIdxKey CFGenKbDefClassByBaseIdxKey::operator =( cfcore::CFGenKbDefClassByBaseIdxKey& src ) {
		if( src.isOptionalBaseIdNull() ) {
			setOptionalBaseIdNull();
		}
		else {
			setOptionalBaseIdValue( src.getOptionalBaseIdValue() );
		}
		return( *this );
	}

	CFGenKbDefClassByBaseIdxKey CFGenKbDefClassByBaseIdxKey::operator =( cfcore::CFGenKbDefClassBuff& src ) {
		if( src.isOptionalBaseIdNull() ) {
			setOptionalBaseIdNull();
		}
		else {
			setOptionalBaseIdValue( src.getOptionalBaseIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( ! rhs.isOptionalBaseIdNull() ) {
				if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() != rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassByBaseIdxKey& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbDefClassByBaseIdxKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( ! lhs.isOptionalBaseIdNull() ) {
			if( rhs.isOptionalBaseIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalBaseIdValue() < rhs.getOptionalBaseIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalBaseIdValue() > rhs.getOptionalBaseIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalBaseIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

