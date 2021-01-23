// Description: C++18 implementation for a ToolSet by Tool5Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool5IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool5IdxKey::CLASS_NAME( "CFGenKbToolSetByTool5IdxKey" );
	const std::string CFGenKbToolSetByTool5IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool5IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool5IdxKey::CFGenKbToolSetByTool5IdxKey() {
		optionalToolId5.setNull();
	}

	CFGenKbToolSetByTool5IdxKey::CFGenKbToolSetByTool5IdxKey( const CFGenKbToolSetByTool5IdxKey& src ) {
		optionalToolId5.setNull();
		if( src.isOptionalToolId5Null() ) {
			setOptionalToolId5Null();
		}
		else {
			setOptionalToolId5Value( src.getOptionalToolId5Value() );
		}
	}

	CFGenKbToolSetByTool5IdxKey::~CFGenKbToolSetByTool5IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool5IdxKey::getOptionalToolId5Value() const {
		return( optionalToolId5.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool5IdxKey::getOptionalToolId5Reference() const {
		return( optionalToolId5.getReference() );
	}

	const bool CFGenKbToolSetByTool5IdxKey::isOptionalToolId5Null() const {
		return( optionalToolId5.isNull() );
	}

	void CFGenKbToolSetByTool5IdxKey::setOptionalToolId5Null() {
		optionalToolId5.setNull();
	}

	void CFGenKbToolSetByTool5IdxKey::setOptionalToolId5Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId5Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID5_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID5_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID5_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID5_MAX_VALUE );
		}
		optionalToolId5.setValue( value );
	}

	size_t CFGenKbToolSetByTool5IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId5Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId5Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool5IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool5IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId5( "ToolId5" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId5Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId5, getOptionalToolId5Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator <( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator <=( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator ==( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator !=( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator >=( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator >( const CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool5IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool5IdxKey CFGenKbToolSetByTool5IdxKey::operator =( cfcore::CFGenKbToolSetByTool5IdxKey& src ) {
		if( src.isOptionalToolId5Null() ) {
			setOptionalToolId5Null();
		}
		else {
			setOptionalToolId5Value( src.getOptionalToolId5Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool5IdxKey CFGenKbToolSetByTool5IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId5Null() ) {
			setOptionalToolId5Null();
		}
		else {
			setOptionalToolId5Value( src.getOptionalToolId5Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( ! rhs.isOptionalToolId5Null() ) {
				if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() != rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetByTool5IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool5IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId5Null() ) {
			if( rhs.isOptionalToolId5Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId5Value() < rhs.getOptionalToolId5Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId5Value() > rhs.getOptionalToolId5Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId5Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

