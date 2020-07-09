// Description: C++18 implementation for a GenItem by TenantIdx index key object.

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

#include <cfgenkb/CFGenKbGenItemByTenantIdxKey.hpp>
#include <cfgenkb/CFGenKbGenItemBuff.hpp>

namespace cfcore {
	const std::string CFGenKbGenItemByTenantIdxKey::CLASS_NAME( "CFGenKbGenItemByTenantIdxKey" );
	const std::string CFGenKbGenItemByTenantIdxKey::S_VALUE( "value" );
	const std::string CFGenKbGenItemByTenantIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbGenItemByTenantIdxKey::CFGenKbGenItemByTenantIdxKey() {
		requiredTenantId = cfcore::CFGenKbGenItemBuff::TENANTID_INIT_VALUE;
	}

	CFGenKbGenItemByTenantIdxKey::CFGenKbGenItemByTenantIdxKey( const CFGenKbGenItemByTenantIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbGenItemBuff::TENANTID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
	}

	CFGenKbGenItemByTenantIdxKey::~CFGenKbGenItemByTenantIdxKey() {
	}

	const int64_t CFGenKbGenItemByTenantIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbGenItemByTenantIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbGenItemByTenantIdxKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbGenItemBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbGenItemBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	size_t CFGenKbGenItemByTenantIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		return( hashCode );
	}

	std::string CFGenKbGenItemByTenantIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbGenItemByTenantIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator <( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator <( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator <=( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator <=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator ==( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator ==( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator !=( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator !=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator >=( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator >=( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator >( const CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbGenItemByTenantIdxKey::operator >( const CFGenKbGenItemBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbGenItemByTenantIdxKey CFGenKbGenItemByTenantIdxKey::operator =( cfcore::CFGenKbGenItemByTenantIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		return( *this );
	}

	CFGenKbGenItemByTenantIdxKey CFGenKbGenItemByTenantIdxKey::operator =( cfcore::CFGenKbGenItemBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemByTenantIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbGenItemByTenantIdxKey& lhs, const cfcore::CFGenKbGenItemBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		return( false );
	}
}

