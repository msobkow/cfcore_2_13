// Description: C++18 implementation for a Tenant by ClusterIdx index key object.

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

#include <cfgenkb/CFGenKbTenantByClusterIdxKey.hpp>
#include <cfgenkb/CFGenKbTenantBuff.hpp>

namespace cfcore {
	const std::string CFGenKbTenantByClusterIdxKey::CLASS_NAME( "CFGenKbTenantByClusterIdxKey" );
	const std::string CFGenKbTenantByClusterIdxKey::S_VALUE( "value" );
	const std::string CFGenKbTenantByClusterIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbTenantByClusterIdxKey::CFGenKbTenantByClusterIdxKey() {
		requiredClusterId = cfcore::CFGenKbTenantBuff::CLUSTERID_INIT_VALUE;
	}

	CFGenKbTenantByClusterIdxKey::CFGenKbTenantByClusterIdxKey( const CFGenKbTenantByClusterIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbTenantBuff::CLUSTERID_INIT_VALUE;
		setRequiredClusterId( src.getRequiredClusterId() );
	}

	CFGenKbTenantByClusterIdxKey::~CFGenKbTenantByClusterIdxKey() {
	}

	const int64_t CFGenKbTenantByClusterIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbTenantByClusterIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbTenantByClusterIdxKey::setRequiredClusterId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredClusterId" );
		if( value < cfcore::CFGenKbTenantBuff::CLUSTERID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTenantBuff::CLUSTERID_MIN_VALUE );
		}
		requiredClusterId = value;
	}

	size_t CFGenKbTenantByClusterIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		return( hashCode );
	}

	std::string CFGenKbTenantByClusterIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTenantByClusterIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbTenantByClusterIdxKey::operator <( const CFGenKbTenantByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByClusterIdxKey::operator <( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByClusterIdxKey::operator <=( const CFGenKbTenantByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByClusterIdxKey::operator <=( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByClusterIdxKey::operator ==( const CFGenKbTenantByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTenantByClusterIdxKey::operator ==( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTenantByClusterIdxKey::operator !=( const CFGenKbTenantByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByClusterIdxKey::operator !=( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByClusterIdxKey::operator >=( const CFGenKbTenantByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByClusterIdxKey::operator >=( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByClusterIdxKey::operator >( const CFGenKbTenantByClusterIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByClusterIdxKey::operator >( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbTenantByClusterIdxKey CFGenKbTenantByClusterIdxKey::operator =( cfcore::CFGenKbTenantByClusterIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

	CFGenKbTenantByClusterIdxKey CFGenKbTenantByClusterIdxKey::operator =( cfcore::CFGenKbTenantBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantByClusterIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTenantByClusterIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		return( false );
	}
}

