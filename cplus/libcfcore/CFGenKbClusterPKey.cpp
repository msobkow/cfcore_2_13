// Description: C++18 implementation of a Cluster primary key object.

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

#include <cfgenkb/CFGenKbClusterPKey.hpp>
#include <cfgenkb/CFGenKbClusterBuff.hpp>

namespace cfcore {

	const std::string CFGenKbClusterPKey::CLASS_NAME( "CFGenKbClusterPKey" );
	const std::string CFGenKbClusterPKey::S_VALUE( "value" );
	const std::string CFGenKbClusterPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbClusterPKey::CFGenKbClusterPKey() {
		requiredId = cfcore::CFGenKbClusterBuff::ID_INIT_VALUE;
	}

	CFGenKbClusterPKey::CFGenKbClusterPKey( const CFGenKbClusterPKey& src ) {
		requiredId = cfcore::CFGenKbClusterBuff::ID_INIT_VALUE;
		setRequiredId( src.getRequiredId() );
	}

	CFGenKbClusterPKey::~CFGenKbClusterPKey() {
	}

	const int64_t CFGenKbClusterPKey::getRequiredId() const {
		return( requiredId );
	}

	const int64_t* CFGenKbClusterPKey::getRequiredIdReference() const {
		return( &requiredId );
	}

	void CFGenKbClusterPKey::setRequiredId( const int64_t value ) {
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

	bool CFGenKbClusterPKey::operator <( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterPKey::operator <( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterPKey::operator <=( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterPKey::operator <=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterPKey::operator ==( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterPKey::operator ==( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbClusterPKey::operator !=( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterPKey::operator !=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterPKey::operator >=( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterPKey::operator >=( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbClusterPKey::operator >( const CFGenKbClusterPKey& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbClusterPKey::operator >( const CFGenKbClusterBuff& rhs ) {
		if( getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbClusterPKey CFGenKbClusterPKey::operator =( cfcore::CFGenKbClusterPKey& src ) {
		setRequiredId( src.getRequiredId() );
		return( *this );
	}

	CFGenKbClusterPKey CFGenKbClusterPKey::operator =( cfcore::CFGenKbClusterBuff& src ) {
		setRequiredId( src.getRequiredId() );
		return( *this );
	}

	size_t CFGenKbClusterPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredId() );
		return( hashCode );
	}

	std::string CFGenKbClusterPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbClusterPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_Id( "Id" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_Id, getRequiredId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() != rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterPKey& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbClusterPKey& lhs, const cfcore::CFGenKbClusterBuff& rhs ) {
		if( lhs.getRequiredId() < rhs.getRequiredId() ) {
			return( false );
		}
		else if( lhs.getRequiredId() > rhs.getRequiredId() ) {
			return( true );
		}
		return( false );
	}
}

