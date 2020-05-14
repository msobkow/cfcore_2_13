// Description: C++18 implementation for a SecGroup by ClusterIdx index key object.

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

#include <cfgenkb/CFGenKbSecGroupByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGroupBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecGroupByClusterIdxKey::CLASS_NAME( "CFGenKbSecGroupByClusterIdxKey" );
	const std::string CFGenKbSecGroupByClusterIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecGroupByClusterIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecGroupByClusterIdxKey::CFGenKbSecGroupByClusterIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecGroupBuff::CLUSTERID_INIT_VALUE;
	}

	CFGenKbSecGroupByClusterIdxKey::CFGenKbSecGroupByClusterIdxKey( const CFGenKbSecGroupByClusterIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGroupBuff::CLUSTERID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
	}

	CFGenKbSecGroupByClusterIdxKey::~CFGenKbSecGroupByClusterIdxKey() {
	}

	const int64_t CFGenKbSecGroupByClusterIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGroupByClusterIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGroupByClusterIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGroupBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGroupBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	size_t CFGenKbSecGroupByClusterIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		return( hashCode );
	}

	std::string CFGenKbSecGroupByClusterIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGroupByClusterIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator <( const CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator <( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator <=( const CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator <=( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator ==( const CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator ==( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator !=( const CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator !=( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator >=( const CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator >=( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator >( const CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGroupByClusterIdxKey::operator >( const CFGenKbSecGroupBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecGroupByClusterIdxKey CFGenKbSecGroupByClusterIdxKey::operator =( cfcore::CFGenKbSecGroupByClusterIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

	CFGenKbSecGroupByClusterIdxKey CFGenKbSecGroupByClusterIdxKey::operator =( cfcore::CFGenKbSecGroupBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGroupByClusterIdxKey& lhs, const cfcore::CFGenKbSecGroupBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
}

