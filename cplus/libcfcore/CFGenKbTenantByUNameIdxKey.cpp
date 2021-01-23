// Description: C++18 implementation for a Tenant by UNameIdx index key object.

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

#include <cfgenkb/CFGenKbTenantByUNameIdxKey.hpp>
#include <cfgenkb/CFGenKbTenantBuff.hpp>

namespace cfcore {
	const std::string CFGenKbTenantByUNameIdxKey::CLASS_NAME( "CFGenKbTenantByUNameIdxKey" );
	const std::string CFGenKbTenantByUNameIdxKey::S_VALUE( "value" );
	const std::string CFGenKbTenantByUNameIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbTenantByUNameIdxKey::CFGenKbTenantByUNameIdxKey() {
		requiredClusterId = cfcore::CFGenKbTenantBuff::CLUSTERID_INIT_VALUE;
		requiredTenantName = new std::string( cfcore::CFGenKbTenantBuff::TENANTNAME_INIT_VALUE );
	}

	CFGenKbTenantByUNameIdxKey::CFGenKbTenantByUNameIdxKey( const CFGenKbTenantByUNameIdxKey& src ) {
		requiredClusterId = cfcore::CFGenKbTenantBuff::CLUSTERID_INIT_VALUE;
		requiredTenantName = new std::string( cfcore::CFGenKbTenantBuff::TENANTNAME_INIT_VALUE );
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredTenantName( src.getRequiredTenantName() );
	}

	CFGenKbTenantByUNameIdxKey::~CFGenKbTenantByUNameIdxKey() {
		if( requiredTenantName != NULL ) {
			delete requiredTenantName;
			requiredTenantName = NULL;
		}
	}

	const int64_t CFGenKbTenantByUNameIdxKey::getRequiredClusterId() const {
		return( requiredClusterId );
	}

	const int64_t* CFGenKbTenantByUNameIdxKey::getRequiredClusterIdReference() const {
		return( &requiredClusterId );
	}

	void CFGenKbTenantByUNameIdxKey::setRequiredClusterId( const int64_t value ) {
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

	const std::string& CFGenKbTenantByUNameIdxKey::getRequiredTenantName() const {
		return( *requiredTenantName );
	}

	const std::string* CFGenKbTenantByUNameIdxKey::getRequiredTenantNameReference() const {
		return( requiredTenantName );
	}

	void CFGenKbTenantByUNameIdxKey::setRequiredTenantName( const std::string& value ) {
		static const std::string S_ProcName( "setRequiredTenantName" );
		if( value.length() > CFGenKbTenantBuff::TENANTNAME_MAX_LEN ) {
			throw cflib::CFLibArgumentOverflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE_LENGTH,
				value.length(),
				CFGenKbTenantBuff::TENANTNAME_MAX_LEN );
		}
		if( requiredTenantName != NULL ) {
			delete requiredTenantName;
			requiredTenantName = NULL;
		}
		requiredTenantName = new std::string( value );
	}

	size_t CFGenKbTenantByUNameIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredClusterId() );
		hashCode = hashCode + cflib::CFLib::hash( getRequiredTenantName() );
		return( hashCode );
	}

	std::string CFGenKbTenantByUNameIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTenantByUNameIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_ClusterId( "ClusterId" );
		static const std::string S_TenantName( "TenantName" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_ClusterId, getRequiredClusterId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredXmlString( &S_Space, S_TenantName, getRequiredTenantName() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbTenantByUNameIdxKey::operator <( const CFGenKbTenantByUNameIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByUNameIdxKey::operator <( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByUNameIdxKey::operator <=( const CFGenKbTenantByUNameIdxKey& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByUNameIdxKey::operator <=( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByUNameIdxKey::operator ==( const CFGenKbTenantByUNameIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTenantByUNameIdxKey::operator ==( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTenantByUNameIdxKey::operator !=( const CFGenKbTenantByUNameIdxKey& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByUNameIdxKey::operator !=( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByUNameIdxKey::operator >=( const CFGenKbTenantByUNameIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByUNameIdxKey::operator >=( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTenantByUNameIdxKey::operator >( const CFGenKbTenantByUNameIdxKey& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTenantByUNameIdxKey::operator >( const CFGenKbTenantBuff& rhs ) {
		if( getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}
	CFGenKbTenantByUNameIdxKey CFGenKbTenantByUNameIdxKey::operator =( cfcore::CFGenKbTenantByUNameIdxKey& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredTenantName( src.getRequiredTenantName() );
		return( *this );
	}

	CFGenKbTenantByUNameIdxKey CFGenKbTenantByUNameIdxKey::operator =( cfcore::CFGenKbTenantBuff& src ) {
		setRequiredClusterId( src.getRequiredClusterId() );
		setRequiredTenantName( src.getRequiredTenantName() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( false );
		}
		if( lhs.getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() != rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() != rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantByUNameIdxKey& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTenantByUNameIdxKey& lhs, const cfcore::CFGenKbTenantBuff& rhs ) {
		if( lhs.getRequiredClusterId() < rhs.getRequiredClusterId() ) {
			return( false );
		}
		else if( lhs.getRequiredClusterId() > rhs.getRequiredClusterId() ) {
			return( true );
		}
		if( lhs.getRequiredTenantName() < rhs.getRequiredTenantName() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantName() > rhs.getRequiredTenantName() ) {
			return( true );
		}
		return( false );
	}
}

