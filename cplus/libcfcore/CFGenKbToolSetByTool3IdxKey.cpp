// Description: C++18 implementation for a ToolSet by Tool3Idx index key object.

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

#include <cfgenkb/CFGenKbToolSetByTool3IdxKey.hpp>
#include <cfgenkb/CFGenKbToolSetBuff.hpp>

namespace cfcore {
	const std::string CFGenKbToolSetByTool3IdxKey::CLASS_NAME( "CFGenKbToolSetByTool3IdxKey" );
	const std::string CFGenKbToolSetByTool3IdxKey::S_VALUE( "value" );
	const std::string CFGenKbToolSetByTool3IdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbToolSetByTool3IdxKey::CFGenKbToolSetByTool3IdxKey() {
		optionalToolId3.setNull();
	}

	CFGenKbToolSetByTool3IdxKey::CFGenKbToolSetByTool3IdxKey( const CFGenKbToolSetByTool3IdxKey& src ) {
		optionalToolId3.setNull();
		if( src.isOptionalToolId3Null() ) {
			setOptionalToolId3Null();
		}
		else {
			setOptionalToolId3Value( src.getOptionalToolId3Value() );
		}
	}

	CFGenKbToolSetByTool3IdxKey::~CFGenKbToolSetByTool3IdxKey() {
	}

	const int16_t CFGenKbToolSetByTool3IdxKey::getOptionalToolId3Value() const {
		return( optionalToolId3.getValue() );
	}

	const int16_t* CFGenKbToolSetByTool3IdxKey::getOptionalToolId3Reference() const {
		return( optionalToolId3.getReference() );
	}

	const bool CFGenKbToolSetByTool3IdxKey::isOptionalToolId3Null() const {
		return( optionalToolId3.isNull() );
	}

	void CFGenKbToolSetByTool3IdxKey::setOptionalToolId3Null() {
		optionalToolId3.setNull();
	}

	void CFGenKbToolSetByTool3IdxKey::setOptionalToolId3Value( const int16_t value ) {
		static const std::string S_ProcName( "setOptionalToolId3Value" );
		if( value < cfcore::CFGenKbToolSetBuff::TOOLID3_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID3_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbToolSetBuff::TOOLID3_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbToolSetBuff::TOOLID3_MAX_VALUE );
		}
		optionalToolId3.setValue( value );
	}

	size_t CFGenKbToolSetByTool3IdxKey::hashCode() const {
		size_t hashCode = 0;
		if( ! isOptionalToolId3Null() ) {
			hashCode = ( hashCode * 0x10000 ) + getOptionalToolId3Value();
		}
		else {
			hashCode = (hashCode * 0x10000 );
		}
		return( hashCode );
	}

	std::string CFGenKbToolSetByTool3IdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbToolSetByTool3IdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ToolId3( "ToolId3" );
		std::string ret( S_Preamble );
		if( ! isOptionalToolId3Null() ) {
			ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_ToolId3, getOptionalToolId3Value() ) );
		}
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator <( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator <( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator <=( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator <=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator ==( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator ==( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator !=( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator !=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator >=( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator >=( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator >( const CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}

	bool CFGenKbToolSetByTool3IdxKey::operator >( const CFGenKbToolSetBuff& rhs ) {
		if( ! isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			return( false );
		}
		return( false );
	}
	CFGenKbToolSetByTool3IdxKey CFGenKbToolSetByTool3IdxKey::operator =( cfcore::CFGenKbToolSetByTool3IdxKey& src ) {
		if( src.isOptionalToolId3Null() ) {
			setOptionalToolId3Null();
		}
		else {
			setOptionalToolId3Value( src.getOptionalToolId3Value() );
		}
		return( *this );
	}

	CFGenKbToolSetByTool3IdxKey CFGenKbToolSetByTool3IdxKey::operator =( cfcore::CFGenKbToolSetBuff& src ) {
		if( src.isOptionalToolId3Null() ) {
			setOptionalToolId3Null();
		}
		else {
			setOptionalToolId3Value( src.getOptionalToolId3Value() );
		}
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( false );
			}
			if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( ! rhs.isOptionalToolId3Null() ) {
				if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
					return( false );
				}
			}
			else {
				return( false );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() != rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( true );
			}
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetByTool3IdxKey& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbToolSetByTool3IdxKey& lhs, const cfcore::CFGenKbToolSetBuff& rhs ) {
		if( ! lhs.isOptionalToolId3Null() ) {
			if( rhs.isOptionalToolId3Null() ) {
				return( true );
			}
			if( lhs.getOptionalToolId3Value() < rhs.getOptionalToolId3Value() ) {
				return( false );
			}
			else if( lhs.getOptionalToolId3Value() > rhs.getOptionalToolId3Value() ) {
				return( true );
			}
		}
		else {
			if( ! rhs.isOptionalToolId3Null() ) {
				return( false );
			}
		}
		return( false );
	}
}

