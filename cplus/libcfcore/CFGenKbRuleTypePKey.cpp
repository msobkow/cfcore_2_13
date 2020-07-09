// Description: C++18 implementation of a RuleType primary key object.

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

#include <cfgenkb/CFGenKbRuleTypePKey.hpp>
#include <cfgenkb/CFGenKbRuleTypeBuff.hpp>

namespace cfcore {

	const std::string CFGenKbRuleTypePKey::CLASS_NAME( "CFGenKbRuleTypePKey" );
	const std::string CFGenKbRuleTypePKey::S_VALUE( "value" );
	const std::string CFGenKbRuleTypePKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbRuleTypePKey::CFGenKbRuleTypePKey() {
		requiredId = cfcore::CFGenKbRuleTypeBuff::ID_INIT_VALUE;
	}

	CFGenKbRuleTypePKey::CFGenKbRuleTypePKey( const CFGenKbRuleTypePKey& src ) {
		requiredId = cfcore::CFGenKbRuleTypeBuff::ID_INIT_VALUE;
		setRequiredId( src.getRequiredId() );
	}

	CFGenKbRuleTypePKey::~CFGenKbRuleTypePKey() {
	}

	const int16_t CFGenKbRuleTypePKey::getRequiredId() const {
		return( requiredId );
	}

	const int16_t* CFGenKbRuleTypePKey::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbRuleTypePKey::setRequiredId( const int16_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbRuleTypeBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbRuleTypeBuff::ID_MIN_VALUE );
		}
		if( value > cfcore::CFGenKbRuleTypeBuff::ID_MAX_VALUE ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbRuleTypeBuff::ID_MAX_VALUE );
		}
		requiredId = value;
	}

	bool CFGenKbRuleTypePKey::operator <( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypePKey::operator <( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypePKey::operator <=( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypePKey::operator <=( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypePKey::operator ==( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleTypePKey::operator ==( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRuleTypePKey::operator !=( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypePKey::operator !=( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypePKey::operator >=( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypePKey::operator >=( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRuleTypePKey::operator >( const CFGenKbRuleTypePKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRuleTypePKey::operator >( const CFGenKbRuleTypeBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbRuleTypePKey CFGenKbRuleTypePKey::operator =( cfcore::CFGenKbRuleTypePKey& src ) {
		setRequiredId( src.getRequiredId() );
		return( *this );
	}

	CFGenKbRuleTypePKey CFGenKbRuleTypePKey::operator =( cfcore::CFGenKbRuleTypeBuff& src ) {
		setRequiredId( src.getRequiredId() );
		return( *this );
	}

	size_t CFGenKbRuleTypePKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = ( hashCode * 0x10000 ) + getRequiredId();
		return( hashCode );
	}

	std::string CFGenKbRuleTypePKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbRuleTypePKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Id( "Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt16( &S_Space, S_Id, getRequiredId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypePKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbRuleTypePKey& lhs, const cfcore::CFGenKbRuleTypeBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}
}

