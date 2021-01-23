// Description: C++18 implementation for a ToolSet by Tool7Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool7IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool7IdxKey::CLASS_NAME( "CFGenKbToolSetByTool7IdxKey" );
	const std::string CFGenKbToolSetByTool7IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool7IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool7IdxKey::CFGenKbToolSetByTool7IdxKey() {
		optionalToolId7.setNull();
	}

	CFGenKbToolSetByTool7IdxKey::CFGenKbToolSetByTool7IdxKey( const CFGenKbToolSetByTool7IdxKey& src ) {
		optionalToolId7.setNull();
		if( src.isOptionalToolId7Null() ) {
			setOptionalToolId7Null();
		}
		else {
			setOptionalToolId7Value( src.getOptionalToolId7Value() );
		}
	}

	CFGenKbToolSetByTool7IdxKey::~CFGenKbToolSetByTool7IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool7IdxKey::getOptionalToolId7Value() const {
		return( optionalToolId7.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool7IdxKey::getOptionalToolId7Reference() const {
		return( optionalToolId7.getReference() );
	}

	const bool CFGenKbToolSetByTool7IdxKey::isOptionalToolId7Null() const {
		return( optionalToolId7.isNull() );
	}

	void CFGenKbToolSetByTool7IdxKey::setOptionalToolId7Null() {
		optionalToolId7.setNull();
	}

	void CFGenKbToolSetByTool7IdxKey::setOptionalToolId7Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId7Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID7_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID7_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID7_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID7_MAX_VALUE );
		}
		optionalToolId7.setValue( value );
	}

	size_t CFGenKbToolSetByTool7IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId7Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId7Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool7IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool7IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId7( "ToolId7" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId7Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId7, getOptionalToolId7Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator <( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator <=( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator ==( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator !=( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator >=( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator >( const CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool7IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool7IdxKey CFGenKbToolSetByTool7IdxKey::operator =( cfcore::CFGenKbToolSetByTool7IdxKey& src ) {
		if( src.isOptionalToolId7Null() ) {
			setOptionalToolId7Null();
		}
		else {
			setOptionalToolId7Value( src.getOptionalToolId7Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool7IdxKey CFGenKbToolSetByTool7IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId7Null() ) {
			setOptionalToolId7Null();
		}
		else {
			setOptionalToolId7Value( src.getOptionalToolId7Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( ! rhs.isOptionalToolId7Null() ) {
				if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() != rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetByTool7IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool7IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId7Null() ) {
			if( rhs.isOptionalToolId7Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId7Value() < rhs.getOptionalToolId7Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId7Value() > rhs.getOptionalToolId7Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId7Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

