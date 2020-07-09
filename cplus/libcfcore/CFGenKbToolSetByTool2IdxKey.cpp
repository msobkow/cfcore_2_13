// Description: C++18 implementation for a ToolSet by Tool2Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool2IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool2IdxKey::CLASS_NAME( "CFGenKbToolSetByTool2IdxKey" );
	const std::string CFGenKbToolSetByTool2IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool2IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool2IdxKey::CFGenKbToolSetByTool2IdxKey() {
		optionalToolId2.setNull();
	}

	CFGenKbToolSetByTool2IdxKey::CFGenKbToolSetByTool2IdxKey( const CFGenKbToolSetByTool2IdxKey& src ) {
		optionalToolId2.setNull();
		if( src.isOptionalToolId2Null() ) {
			setOptionalToolId2Null();
		}
		else {
			setOptionalToolId2Value( src.getOptionalToolId2Value() );
		}
	}

	CFGenKbToolSetByTool2IdxKey::~CFGenKbToolSetByTool2IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool2IdxKey::getOptionalToolId2Value() const {
		return( optionalToolId2.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool2IdxKey::getOptionalToolId2Reference() const {
		return( optionalToolId2.getReference() );
	}

	const bool CFGenKbToolSetByTool2IdxKey::isOptionalToolId2Null() const {
		return( optionalToolId2.isNull() );
	}

	void CFGenKbToolSetByTool2IdxKey::setOptionalToolId2Null() {
		optionalToolId2.setNull();
	}

	void CFGenKbToolSetByTool2IdxKey::setOptionalToolId2Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId2Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID2_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID2_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID2_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID2_MAX_VALUE );
		}
		optionalToolId2.setValue( value );
	}

	size_t CFGenKbToolSetByTool2IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId2Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId2Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool2IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool2IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId2( "ToolId2" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId2Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId2, getOptionalToolId2Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator <( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator <=( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator ==( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator !=( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator >=( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator >( const CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool2IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool2IdxKey CFGenKbToolSetByTool2IdxKey::operator =( cfcore::CFGenKbToolSetByTool2IdxKey& src ) {
		if( src.isOptionalToolId2Null() ) {
			setOptionalToolId2Null();
		}
		else {
			setOptionalToolId2Value( src.getOptionalToolId2Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool2IdxKey CFGenKbToolSetByTool2IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId2Null() ) {
			setOptionalToolId2Null();
		}
		else {
			setOptionalToolId2Value( src.getOptionalToolId2Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( ! rhs.isOptionalToolId2Null() ) {
				if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() != rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetByTool2IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool2IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId2Null() ) {
			if( rhs.isOptionalToolId2Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId2Value() < rhs.getOptionalToolId2Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId2Value() > rhs.getOptionalToolId2Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId2Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

