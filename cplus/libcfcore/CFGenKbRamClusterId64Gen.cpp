// Description: C++18 Implementation of a Cluster 64-bit in-memory RAM Id Generator object.

/*
 *	org.msscf.msscf.CFCore
 *
 *	Copyright (c) 2020 Mark Stephen Sobkow
 *	
 *	MSS Code Factory CFCore 2.13 Generation Knowledgebase
 *	
 *	Copyright 2020 Mark Stephen Sobkow
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
 *	Please contact Mark Stephen Sobkow at msobkow@sasktel.net for commercial licensing.
 *
 *	Manufactured by MSS Code Factory 2.12
 */
#include <cflib/ICFLibPublic.hpp>
#include <cfgenkb/ICFGenKbPublic.hpp>
#include <cfgenkbram/CFGenKbRamClusterId64Gen.hpp>

using namespace std;

namespace cfcore {

	const std::string CFGenKbRamClusterId64Gen::CLASS_NAME( "CFGenKbRamClusterId64Gen" );
	const std::string CFGenKbRamClusterId64Gen::S_VALUE( "value" );

	CFGenKbRamClusterId64Gen::CFGenKbRamClusterId64Gen() {
		requiredId = cfcore::CFGenKbClusterBuff::ID_INIT_VALUE;
		sliceId = 0;
		nextId = 1L;
	}

	CFGenKbRamClusterId64Gen::~CFGenKbRamClusterId64Gen() {
	}

	int64_t CFGenKbRamClusterId64Gen::getNextId() {
		int64_t retNext = nextId ++;
		return( retNext );
	}

	const int64_t CFGenKbRamClusterId64Gen::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFGenKbRamClusterId64Gen::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbRamClusterId64Gen::setRequiredId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredId" );
		if( value < cfcore::CFGenKbClusterBuff::ID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbClusterBuff::ID_MIN_VALUE );
		}
		requiredId = value;
	}

	int16_t CFGenKbRamClusterId64Gen::getRequiredSliceId() const {
		return( sliceId );
	}

	void CFGenKbRamClusterId64Gen::setRequiredSliceId( int16_t value ) {
		sliceId = value;
	}

	size_t CFGenKbRamClusterId64Gen::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredId() );
		return( hashCode );
	}

	bool CFGenKbRamClusterId64Gen::operator <( const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRamClusterId64Gen::operator <=( const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRamClusterId64Gen::operator ==( const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbRamClusterId64Gen::operator !=( const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbRamClusterId64Gen::operator >=( const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbRamClusterId64Gen::operator >( const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbRamClusterId64Gen CFGenKbRamClusterId64Gen::operator =( CFGenKbRamClusterId64Gen& src ) {
		setRequiredId( src.getRequiredId() );
		// Don't bother copying the id generation value; only the map keys make copies of id generators, so they never use them
		return( *this );
	}

}

namespace std {

	bool operator <(const cfcore::CFGenKbRamClusterId64Gen& lhs, const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const cfcore::CFGenKbRamClusterId64Gen& lhs, const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const cfcore::CFGenKbRamClusterId64Gen& lhs, const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const cfcore::CFGenKbRamClusterId64Gen& lhs, const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const cfcore::CFGenKbRamClusterId64Gen& lhs, const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const cfcore::CFGenKbRamClusterId64Gen& lhs, const cfcore::CFGenKbRamClusterId64Gen& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}


}
