// Description: C++18 implementation for a ToolSet by Tool4Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool4IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool4IdxKey::CLASS_NAME( "CFGenKbToolSetByTool4IdxKey" );
	const std::string CFGenKbToolSetByTool4IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool4IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool4IdxKey::CFGenKbToolSetByTool4IdxKey() {
		optionalToolId4.setNull();
	}

	CFGenKbToolSetByTool4IdxKey::CFGenKbToolSetByTool4IdxKey( const CFGenKbToolSetByTool4IdxKey& src ) {
		optionalToolId4.setNull();
		if( src.isOptionalToolId4Null() ) {
			setOptionalToolId4Null();
		}
		else {
			setOptionalToolId4Value( src.getOptionalToolId4Value() );
		}
	}

	CFGenKbToolSetByTool4IdxKey::~CFGenKbToolSetByTool4IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool4IdxKey::getOptionalToolId4Value() const {
		return( optionalToolId4.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool4IdxKey::getOptionalToolId4Reference() const {
		return( optionalToolId4.getReference() );
	}

	const bool CFGenKbToolSetByTool4IdxKey::isOptionalToolId4Null() const {
		return( optionalToolId4.isNull() );
	}

	void CFGenKbToolSetByTool4IdxKey::setOptionalToolId4Null() {
		optionalToolId4.setNull();
	}

	void CFGenKbToolSetByTool4IdxKey::setOptionalToolId4Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId4Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID4_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID4_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID4_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID4_MAX_VALUE );
		}
		optionalToolId4.setValue( value );
	}

	size_t CFGenKbToolSetByTool4IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId4Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId4Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool4IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool4IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId4( "ToolId4" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId4Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId4, getOptionalToolId4Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator <( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator <=( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator ==( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator !=( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator >=( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator >( const CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool4IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool4IdxKey CFGenKbToolSetByTool4IdxKey::operator =( cfcore::CFGenKbToolSetByTool4IdxKey& src ) {
		if( src.isOptionalToolId4Null() ) {
			setOptionalToolId4Null();
		}
		else {
			setOptionalToolId4Value( src.getOptionalToolId4Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool4IdxKey CFGenKbToolSetByTool4IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId4Null() ) {
			setOptionalToolId4Null();
		}
		else {
			setOptionalToolId4Value( src.getOptionalToolId4Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( ! rhs.isOptionalToolId4Null() ) {
				if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() != rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetByTool4IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool4IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId4Null() ) {
			if( rhs.isOptionalToolId4Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId4Value() < rhs.getOptionalToolId4Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId4Value() > rhs.getOptionalToolId4Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId4Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

