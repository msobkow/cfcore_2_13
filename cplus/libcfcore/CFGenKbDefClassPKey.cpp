// Description: C++18 implementation of a DefClass primary key object.

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

#include <cfgenkb/CFGenKbDefClassPKey.hpp>
#include <cfgenkb/CFGenKbDefClassBuff.hpp>

namespace cfcore {

	const std::string CFGenKbDefClassPKey::CLASS_NAME( "CFGenKbDefClassPKey" );
	const std::string CFGenKbDefClassPKey::S_VALUE( "value" );
	const std::string CFGenKbDefClassPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbDefClassPKey::CFGenKbDefClassPKey() {
		requiredId = cfcore::CFGenKbDefClassBuff::ID_INIT_VALUE;
	}

	CFGenKbDefClassPKey::CFGenKbDefClassPKey( const CFGenKbDefClassPKey& src ) {
		requiredId = cfcore::CFGenKbDefClassBuff::ID_INIT_VALUE;
		setRequiredId( src.getRequiredId() );
	}

	CFGenKbDefClassPKey::~CFGenKbDefClassPKey() {
	}

	const int16_t CFGenKbDefClassPKey::getRequiredId() const {
		return( requiredId );
	}

	const int16_t* CFGenKbDefClassPKey::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbDefClassPKey::setRequiredId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbDefClassBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::ID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbDefClassBuff::ID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbDefClassBuff::ID_MAX_VALUE );
		}
		requiredId = value;
	}

	bool CFGenKbDefClassPKey::operator <( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassPKey::operator <( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassPKey::operator <=( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassPKey::operator <=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassPKey::operator ==( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbDefClassPKey::operator ==( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbDefClassPKey::operator !=( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassPKey::operator !=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassPKey::operator >=( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassPKey::operator >=( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbDefClassPKey::operator >( const CFGenKbDefClassPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbDefClassPKey::operator >( const CFGenKbDefClassBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbDefClassPKey CFGenKbDefClassPKey::operator =( cfcore::CFGenKbDefClassPKey& src ) {
		setRequiredId( src.getRequiredId() );
		return( *this );
	}

	CFGenKbDefClassPKey CFGenKbDefClassPKey::operator =( cfcore::CFGenKbDefClassBuff& src ) {
		setRequiredId( src.getRequiredId() );
		return( *this );
	}

	size_t CFGenKbDefClassPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		return( hashCode );
	}

	std::string CFGenKbDefClassPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbDefClassPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Id( "Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, getRequiredId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbDefClassPKey& lhs, const cfcore::CFGenKbDefClassBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}
}

