// Description: C++18 implementation for a Tool by ReplacesIdx index key object.

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

#include <cfgenkb/CFGenKbToolByReplacesIdxKey.hpp>
#include <cfgenkb/CFGenKbToolBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolByReplacesIdxKey::CLASS_NAME( "CFGenKbToolByReplacesIdxKey" );
	const std::string CFGenKbToolByReplacesIdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolByReplacesIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolByReplacesIdxKey::CFGenKbToolByReplacesIdxKey() {
		optionalReplacesId.setNull();
	}

	CFGenKbToolByReplacesIdxKey::CFGenKbToolByReplacesIdxKey( const CFGenKbToolByReplacesIdxKey& src ) {
		optionalReplacesId.setNull();
		if( src.isOptionalReplacesIdNull() ) {
			setOptionalReplacesIdNull();
		}
		else {
			setOptionalReplacesIdValue( src.getOptionalReplacesIdValue() );
		}
	}

	CFGenKbToolByReplacesIdxKey::~CFGenKbToolByReplacesIdxKey() {
	}

	const int16_t CFGenKbToolByReplacesIdxKey::getOptionalReplacesIdValue() const {
		return( optionalReplacesId.getValue() );
	}

	const int16_t* CFGenKbToolByReplacesIdxKey::getOptionalReplacesIdReference() const {
		return( optionalReplacesId.getReference() );
	}

	const bool CFGenKbToolByReplacesIdxKey::isOptionalReplacesIdNull() const {
		return( optionalReplacesId.isNull() );
	}

	void CFGenKbToolByReplacesIdxKey::setOptionalReplacesIdNull() {
		optionalReplacesId.setNull();
	}

	void CFGenKbToolByReplacesIdxKey::setOptionalReplacesIdValue( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalReplacesIdValue" );
		if( value < cfcore::CFGenKbToolBuff::REPLACESID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolBuff::REPLACESID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolBuff::REPLACESID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolBuff::REPLACESID_MAX_VALUE );
		}
		optionalReplacesId.setValue( value );
	}

	size_t CFGenKbToolByReplacesIdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalReplacesIdNull() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalReplacesIdValue();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolByReplacesIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolByReplacesIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ReplacesId( "ReplacesId" );
		std::string ret( S_Preamble );
		if( ! isOptionalReplacesIdNull() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ReplacesId, getOptionalReplacesIdValue() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolByReplacesIdxKey::operator <( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolByReplacesIdxKey::operator <( const CFGenKbToolBuff& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolByReplacesIdxKey::operator <=( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolByReplacesIdxKey::operator <=( const CFGenKbToolBuff& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolByReplacesIdxKey::operator ==( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolByReplacesIdxKey::operator ==( const CFGenKbToolBuff& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolByReplacesIdxKey::operator !=( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolByReplacesIdxKey::operator !=( const CFGenKbToolBuff& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolByReplacesIdxKey::operator >=( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolByReplacesIdxKey::operator >=( const CFGenKbToolBuff& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolByReplacesIdxKey::operator >( const CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolByReplacesIdxKey::operator >( const CFGenKbToolBuff& rhs ) {
		if( ! isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolByReplacesIdxKey CFGenKbToolByReplacesIdxKey::operator =( cfcore::CFGenKbToolByReplacesIdxKey& src ) {
		if( src.isOptionalReplacesIdNull() ) {
			setOptionalReplacesIdNull();
		}
		else {
			setOptionalReplacesIdValue( src.getOptionalReplacesIdValue() );
		}
		return( *this );
	}

	CFGenKbToolByReplacesIdxKey CFGenKbToolByReplacesIdxKey::operator =( cfcore::CFGenKbToolBuff& src ) {
		if( src.isOptionalReplacesIdNull() ) {
			setOptionalReplacesIdNull();
		}
		else {
			setOptionalReplacesIdValue( src.getOptionalReplacesIdValue() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
			if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() != rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolByReplacesIdxKey& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolByReplacesIdxKey& lhs, const cfcore::CFGenKbToolBuff& rhs ) {
		if( ! lhs.isOptionalReplacesIdNull() ) {
			if( rhs.isOptionalReplacesIdNull() ) {
				return( true );
			}
			if( lhs.getOptionalReplacesIdValue() < rhs.getOptionalReplacesIdValue() ) {
				return( false );
			}
			else if( lhs.getOptionalReplacesIdValue() > rhs.getOptionalReplacesIdValue() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalReplacesIdNull() ) {
				return( false );
			}
		}
		return( false );
	}
}

