// Description: C++18 implementation for a GelSwitchLimb by TenantIdx index key object.

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

#include <cfgenkb/CFGenKbGelSwitchLimbByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGelSwitchLimbBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGelSwitchLimbByTenantIdxKey::CLASS_NAME( "CFGenKbGelSwitchLimbByTenantIdxKey" );
	const std::string CFGenKbGelSwitchLimbByTenantIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGelSwitchLimbByTenantIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGelSwitchLimbByTenantIdxKey::CFGenKbGelSwitchLimbByTenantIdxKey() {
		requiredTenantId = cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE;
	}

	CFGenKbGelSwitchLimbByTenantIdxKey::CFGenKbGelSwitchLimbByTenantIdxKey( const CFGenKbGelSwitchLimbByTenantIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
	}

	CFGenKbGelSwitchLimbByTenantIdxKey::~CFGenKbGelSwitchLimbByTenantIdxKey() {
	}

	const int64_t CFGenKbGelSwitchLimbByTenantIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGelSwitchLimbByTenantIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGelSwitchLimbByTenantIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGelSwitchLimbBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	size_t CFGenKbGelSwitchLimbByTenantIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		return( hashCode );
	}

	std::string CFGenKbGelSwitchLimbByTenantIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGelSwitchLimbByTenantIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator <( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator <( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator <=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator <=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator ==( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator ==( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator !=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator !=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator >=( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator >=( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator >( const CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGelSwitchLimbByTenantIdxKey::operator >( const CFGenKbGelSwitchLimbBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGelSwitchLimbByTenantIdxKey CFGenKbGelSwitchLimbByTenantIdxKey::operator =( cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		return( *this );
	}

	CFGenKbGelSwitchLimbByTenantIdxKey CFGenKbGelSwitchLimbByTenantIdxKey::operator =( cfcore::CFGenKbGelSwitchLimbBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGelSwitchLimbByTenantIdxKey& lhs, const cfcore::CFGenKbGelSwitchLimbBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}
}

