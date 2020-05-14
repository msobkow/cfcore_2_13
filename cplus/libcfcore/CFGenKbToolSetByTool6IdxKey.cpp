// Description: C++18 implementation for a ToolSet by Tool6Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool6IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool6IdxKey::CLASS_NAME( "CFGenKbToolSetByTool6IdxKey" );
	const std::string CFGenKbToolSetByTool6IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool6IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool6IdxKey::CFGenKbToolSetByTool6IdxKey() {
		optionalToolId6.setNull();
	}

	CFGenKbToolSetByTool6IdxKey::CFGenKbToolSetByTool6IdxKey( const CFGenKbToolSetByTool6IdxKey& src ) {
		optionalToolId6.setNull();
		if( src.isOptionalToolId6Null() ) {
			setOptionalToolId6Null();
		}
		else {
			setOptionalToolId6Value( src.getOptionalToolId6Value() );
		}
	}

	CFGenKbToolSetByTool6IdxKey::~CFGenKbToolSetByTool6IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool6IdxKey::getOptionalToolId6Value() const {
		return( optionalToolId6.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool6IdxKey::getOptionalToolId6Reference() const {
		return( optionalToolId6.getReference() );
	}

	const bool CFGenKbToolSetByTool6IdxKey::isOptionalToolId6Null() const {
		return( optionalToolId6.isNull() );
	}

	void CFGenKbToolSetByTool6IdxKey::setOptionalToolId6Null() {
		optionalToolId6.setNull();
	}

	void CFGenKbToolSetByTool6IdxKey::setOptionalToolId6Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId6Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID6_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID6_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID6_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID6_MAX_VALUE );
		}
		optionalToolId6.setValue( value );
	}

	size_t CFGenKbToolSetByTool6IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId6Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId6Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool6IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool6IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId6( "ToolId6" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId6Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId6, getOptionalToolId6Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator <( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator <=( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator ==( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator !=( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator >=( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator >( const CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool6IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool6IdxKey CFGenKbToolSetByTool6IdxKey::operator =( cfcore::CFGenKbToolSetByTool6IdxKey& src ) {
		if( src.isOptionalToolId6Null() ) {
			setOptionalToolId6Null();
		}
		else {
			setOptionalToolId6Value( src.getOptionalToolId6Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool6IdxKey CFGenKbToolSetByTool6IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId6Null() ) {
			setOptionalToolId6Null();
		}
		else {
			setOptionalToolId6Value( src.getOptionalToolId6Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( ! rhs.isOptionalToolId6Null() ) {
				if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() != rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetByTool6IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool6IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId6Null() ) {
			if( rhs.isOptionalToolId6Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId6Value() < rhs.getOptionalToolId6Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId6Value() > rhs.getOptionalToolId6Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId6Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

