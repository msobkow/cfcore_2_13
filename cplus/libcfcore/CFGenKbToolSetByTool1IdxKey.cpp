// Description: C++18 implementation for a ToolSet by Tool1Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool1IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool1IdxKey::CLASS_NAME( "CFGenKbToolSetByTool1IdxKey" );
	const std::string CFGenKbToolSetByTool1IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool1IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool1IdxKey::CFGenKbToolSetByTool1IdxKey() {
		optionalToolId1.setNull();
	}

	CFGenKbToolSetByTool1IdxKey::CFGenKbToolSetByTool1IdxKey( const CFGenKbToolSetByTool1IdxKey& src ) {
		optionalToolId1.setNull();
		if( src.isOptionalToolId1Null() ) {
			setOptionalToolId1Null();
		}
		else {
			setOptionalToolId1Value( src.getOptionalToolId1Value() );
		}
	}

	CFGenKbToolSetByTool1IdxKey::~CFGenKbToolSetByTool1IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool1IdxKey::getOptionalToolId1Value() const {
		return( optionalToolId1.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool1IdxKey::getOptionalToolId1Reference() const {
		return( optionalToolId1.getReference() );
	}

	const bool CFGenKbToolSetByTool1IdxKey::isOptionalToolId1Null() const {
		return( optionalToolId1.isNull() );
	}

	void CFGenKbToolSetByTool1IdxKey::setOptionalToolId1Null() {
		optionalToolId1.setNull();
	}

	void CFGenKbToolSetByTool1IdxKey::setOptionalToolId1Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId1Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID1_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID1_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID1_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID1_MAX_VALUE );
		}
		optionalToolId1.setValue( value );
	}

	size_t CFGenKbToolSetByTool1IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId1Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId1Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool1IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool1IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId1( "ToolId1" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId1Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId1, getOptionalToolId1Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator <( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator <=( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator ==( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator !=( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator >=( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator >( const CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool1IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool1IdxKey CFGenKbToolSetByTool1IdxKey::operator =( cfcore::CFGenKbToolSetByTool1IdxKey& src ) {
		if( src.isOptionalToolId1Null() ) {
			setOptionalToolId1Null();
		}
		else {
			setOptionalToolId1Value( src.getOptionalToolId1Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool1IdxKey CFGenKbToolSetByTool1IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId1Null() ) {
			setOptionalToolId1Null();
		}
		else {
			setOptionalToolId1Value( src.getOptionalToolId1Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( ! rhs.isOptionalToolId1Null() ) {
				if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() != rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetByTool1IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool1IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId1Null() ) {
			if( rhs.isOptionalToolId1Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId1Value() < rhs.getOptionalToolId1Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId1Value() > rhs.getOptionalToolId1Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId1Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

