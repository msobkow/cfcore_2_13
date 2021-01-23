// Description: C++18 implementation for a SecGrpMemb by ClusterIdx index key object.

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

#include <cfgenkb/CFGenKbSecGrpMembByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbSecGrpMembBuff.hpp>

namespace cfcore {
	const std::string CFGenKbSecGrpMembByClusterIdxKey::CLASS_NAME( "CFGenKbSecGrpMembByClusterIdxKey" );
	const std::string CFGenKbSecGrpMembByClusterIdxKey::S_VALUE( "value" );
	const std::string CFGenKbSecGrpMembByClusterIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbSecGrpMembByClusterIdxKey::CFGenKbSecGrpMembByClusterIdxKey() {
		requiredClusterId = cfcore::CFGenKbSecGrpMembBuff::CLUSTERID_INIT_VALUE;
	}

	CFGenKbSecGrpMembByClusterIdxKey::CFGenKbSecGrpMembByClusterIdxKey( const CFGenKbSecGrpMembByClusterIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbSecGrpMembBuff::CLUSTERID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
	}

	CFGenKbSecGrpMembByClusterIdxKey::~CFGenKbSecGrpMembByClusterIdxKey() {
	}

	const int64_t CFGenKbSecGrpMembByClusterIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbSecGrpMembByClusterIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbSecGrpMembByClusterIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbSecGrpMembBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbSecGrpMembBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	size_t CFGenKbSecGrpMembByClusterIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		return( hashCode );
	}

	std::string CFGenKbSecGrpMembByClusterIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbSecGrpMembByClusterIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator <( const CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator <( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator <=( const CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator <=( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator ==( const CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator ==( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator !=( const CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator !=( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator >=( const CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator >=( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator >( const CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbSecGrpMembByClusterIdxKey::operator >( const CFGenKbSecGrpMembBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbSecGrpMembByClusterIdxKey CFGenKbSecGrpMembByClusterIdxKey::operator =( cfcore::CFGenKbSecGrpMembByClusterIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

	CFGenKbSecGrpMembByClusterIdxKey CFGenKbSecGrpMembByClusterIdxKey::operator =( cfcore::CFGenKbSecGrpMembBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbSecGrpMembByClusterIdxKey& lhs, const cfcore::CFGenKbSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
}

