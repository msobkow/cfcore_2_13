// Description: C++18 implementation of a TSecGrpMemb primary key object.

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

#include <cfgenkb/CFGenKbTSecGrpMembPKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembBuff.hpp>

namespace cfcore {

	const std::string CFGenKbTSecGrpMembPKey::CLASS_NAME( "CFGenKbTSecGrpMembPKey" );
	const std::string CFGenKbTSecGrpMembPKey::S_VALUE( "value" );
	const std::string CFGenKbTSecGrpMembPKey::S_VALUE_LENGTH( "value.length()" );

	CFGenKbTSecGrpMembPKey::CFGenKbTSecGrpMembPKey() {
		requiredTenantId = cfcore::CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE;
		requiredTSecGrpMembId = cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_INIT_VALUE;
	}

	CFGenKbTSecGrpMembPKey::CFGenKbTSecGrpMembPKey( const CFGenKbTSecGrpMembPKey& src ) {
		requiredTenantId = cfcore::CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE;
		requiredTSecGrpMembId = cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_INIT_VALUE;
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpMembId( src.getRequiredTSecGrpMembId() );
	}

	CFGenKbTSecGrpMembPKey::~CFGenKbTSecGrpMembPKey() {
	}

	const int64_t CFGenKbTSecGrpMembPKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbTSecGrpMembPKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbTSecGrpMembPKey::setRequiredTenantId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTenantId" );
		if( value < cfcore::CFGenKbTSecGrpMembBuff::TENANTID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpMembBuff::TENANTID_MIN_VALUE );
		}
		requiredTenantId = value;
	}

	const int64_t CFGenKbTSecGrpMembPKey::getRequiredTSecGrpMembId() const {
		return( requiredTSecGrpMembId );
	}

	const int64_t* CFGenKbTSecGrpMembPKey::getRequiredTSecGrpMembIdReference() const {
		return( &requiredTSecGrpMembId );
	}

	void CFGenKbTSecGrpMembPKey::setRequiredTSecGrpMembId( const int64_t value ) {
		static const std::string S_ProcName( "setRequiredTSecGrpMembId" );
		if( value < cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpMembBuff::TSECGRPMEMBID_MIN_VALUE );
		}
		requiredTSecGrpMembId = value;
	}

	bool CFGenKbTSecGrpMembPKey::operator <( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembPKey::operator <( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembPKey::operator <=( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembPKey::operator <=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembPKey::operator ==( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembPKey::operator ==( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembPKey::operator !=( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembPKey::operator !=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembPKey::operator >=( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembPKey::operator >=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembPKey::operator >( const CFGenKbTSecGrpMembPKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembPKey::operator >( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	CFGenKbTSecGrpMembPKey CFGenKbTSecGrpMembPKey::operator =( cfcore::CFGenKbTSecGrpMembPKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpMembId( src.getRequiredTSecGrpMembId() );
		return( *this );
	}

	CFGenKbTSecGrpMembPKey CFGenKbTSecGrpMembPKey::operator =( cfcore::CFGenKbTSecGrpMembBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGrpMembId( src.getRequiredTSecGrpMembId() );
		return( *this );
	}

	size_t CFGenKbTSecGrpMembPKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + (int)( getRequiredTSecGrpMembId() );
		return( hashCode );
	}

	std::string CFGenKbTSecGrpMembPKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpMembPKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGrpMembId( "TSecGrpMembId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TSecGrpMembId, getRequiredTSecGrpMembId() ) );
		ret.append( S_Postamble );
		return( ret );
	}
}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() != rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembPKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembPKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGrpMembId() < rhs.getRequiredTSecGrpMembId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGrpMembId() > rhs.getRequiredTSecGrpMembId() ) {
			return( true );
		}
		return( false );
	}
}

