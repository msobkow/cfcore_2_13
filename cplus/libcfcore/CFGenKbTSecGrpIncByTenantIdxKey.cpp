// Description: C++18 implementation for a TSecGrpInc by TenantIdx index key object.

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

#include <cfgenkb/CFGenKbTSecGrpIncByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpIncBuff.hpp>

namespace cfcore {
	const std::string CFGenKbTSecGrpIncByTenantIdxKey::CLASS_NAME( "CFGenKbTSecGrpIncByTenantIdxKey" );
	const std::string CFGenKbTSecGrpIncByTenantIdxKey::S_VALUE( "value" );
	const std::string CFGenKbTSecGrpIncByTenantIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbTSecGrpIncByTenantIdxKey::CFGenKbTSecGrpIncByTenantIdxKey() {
		requiredTenantId = cfcore::CFGenKbTSecGrpIncBuff::TENANTID_INIT_VALUE;
	}

	CFGenKbTSecGrpIncByTenantIdxKey::CFGenKbTSecGrpIncByTenantIdxKey( const CFGenKbTSecGrpIncByTenantIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbTSecGrpIncBuff::TENANTID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
	}

	CFGenKbTSecGrpIncByTenantIdxKey::~CFGenKbTSecGrpIncByTenantIdxKey() {
	}

	const int64_t CFGenKbTSecGrpIncByTenantIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbTSecGrpIncByTenantIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbTSecGrpIncByTenantIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbTSecGrpIncBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpIncBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	size_t CFGenKbTSecGrpIncByTenantIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		return( hashCode );
	}

	std::string CFGenKbTSecGrpIncByTenantIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpIncByTenantIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator <( const CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator <( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator <=( const CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator <=( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator ==( const CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator ==( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator !=( const CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator !=( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator >=( const CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator >=( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator >( const CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpIncByTenantIdxKey::operator >( const CFGenKbTSecGrpIncBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbTSecGrpIncByTenantIdxKey CFGenKbTSecGrpIncByTenantIdxKey::operator =( cfcore::CFGenKbTSecGrpIncByTenantIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		return( *this );
	}

	CFGenKbTSecGrpIncByTenantIdxKey CFGenKbTSecGrpIncByTenantIdxKey::operator =( cfcore::CFGenKbTSecGrpIncBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpIncByTenantIdxKey& lhs, const cfcore::CFGenKbTSecGrpIncBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}
}

