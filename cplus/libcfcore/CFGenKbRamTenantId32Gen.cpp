// Description: C++18 Implementation of a Tenant 32-bit in-memory RAM Id Generator object.

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
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbram/CFGenKbRamTenantId32Gen.hpp>

using namespace std;

namespace cfcore {

	const std::string CFGenKbRamTenantId32Gen::CLASS_NAME( "CFGenKbRamTenantId32Gen" );
	const std::string CFGenKbRamTenantId32Gen::S_VALUE( "value" );

	CFGenKbRamTenantId32Gen::CFGenKbRamTenantId32Gen() {
		requiredId = cfcore::CFGenKbTenantBuff::ID_INIT_VALUE;
		sliceId = 0;
		nextId = 1;
	}

	CFGenKbRamTenantId32Gen::~CFGenKbRamTenantId32Gen() {
	}

	int32_t CFGenKbRamTenantId32Gen::getNextId() {
		int32_t retNext = nextId ++;
		return( retNext );
	}

	const int64_t CFGenKbRamTenantId32Gen::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFGenKbRamTenantId32Gen::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbRamTenantId32Gen::setRequiredId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbTenantBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTenantBuff::ID_MIN_VALUE );
		}
		requiredId = value;
	}

	int16_t CFGenKbRamTenantId32Gen::getRequiredSliceId() const {
		return( sliceId );
	}

	void CFGenKbRamTenantId32Gen::setRequiredSliceId( int16_t value ) {
		sliceId = value;
	}

	size_t CFGenKbRamTenantId32Gen::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredId() );
		return( hashCode );
	}

	bool CFGenKbRamTenantId32Gen::operator <( const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRamTenantId32Gen::operator <=( const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRamTenantId32Gen::operator ==( const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRamTenantId32Gen::operator !=( const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRamTenantId32Gen::operator >=( const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRamTenantId32Gen::operator >( const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbRamTenantId32Gen CFGenKbRamTenantId32Gen::operator =( CFGenKbRamTenantId32Gen& src ) {
		setRequiredId( src.getRequiredId() );
		// Don't bother copying the id generation value; only the map keys make copies of id generators, so they never use them
		return( *this );
	}

}

namespace std {

	bool operator <(const cfcore::CFGenKbRamTenantId32Gen& lhs, const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const cfcore::CFGenKbRamTenantId32Gen& lhs, const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const cfcore::CFGenKbRamTenantId32Gen& lhs, const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const cfcore::CFGenKbRamTenantId32Gen& lhs, const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const cfcore::CFGenKbRamTenantId32Gen& lhs, const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const cfcore::CFGenKbRamTenantId32Gen& lhs, const cfcore::CFGenKbRamTenantId32Gen& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}


}
