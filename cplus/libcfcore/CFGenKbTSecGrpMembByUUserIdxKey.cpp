// Description: C++18 implementation for a TSecGrpMemb by UUserIdx index key object.

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

#include <cfgenkb/CFGenKbTSecGrpMembByUUserIdxKey.hpp>
#include <cfgenkb/CFGenKbTSecGrpMembBuff.hpp>

namespace cfcore {
	const std::string CFGenKbTSecGrpMembByUUserIdxKey::CLASS_NAME( "CFGenKbTSecGrpMembByUUserIdxKey" );
	const std::string CFGenKbTSecGrpMembByUUserIdxKey::S_VALUE( "value" );
	const std::string CFGenKbTSecGrpMembByUUserIdxKey::S_VALUE_LENGTH( "value.length()" );


	CFGenKbTSecGrpMembByUUserIdxKey::CFGenKbTSecGrpMembByUUserIdxKey() {
		requiredTenantId = cfcore::CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE;
		requiredTSecGroupId = cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_INIT_VALUE;
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
	}

	CFGenKbTSecGrpMembByUUserIdxKey::CFGenKbTSecGrpMembByUUserIdxKey( const CFGenKbTSecGrpMembByUUserIdxKey& src ) {
		requiredTenantId = cfcore::CFGenKbTSecGrpMembBuff::TENANTID_INIT_VALUE;
		requiredTSecGroupId = cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_INIT_VALUE;
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
	}

	CFGenKbTSecGrpMembByUUserIdxKey::~CFGenKbTSecGrpMembByUUserIdxKey() {
		for( int i = 0; i < 16; i ++ ) {
			requiredSecUserId[i] = 0;
		}
	}

	const int64_t CFGenKbTSecGrpMembByUUserIdxKey::getRequiredTenantId() const {
		return( requiredTenantId );
	}

	const int64_t* CFGenKbTSecGrpMembByUUserIdxKey::getRequiredTenantIdReference() const {
		return( &requiredTenantId );
	}

	void CFGenKbTSecGrpMembByUUserIdxKey::setRequiredTenantId( const int64_t value ) {
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

	const int32_t CFGenKbTSecGrpMembByUUserIdxKey::getRequiredTSecGroupId() const {
		return( requiredTSecGroupId );
	}

	const int32_t* CFGenKbTSecGrpMembByUUserIdxKey::getRequiredTSecGroupIdReference() const {
		return( &requiredTSecGroupId );
	}

	void CFGenKbTSecGrpMembByUUserIdxKey::setRequiredTSecGroupId( const int32_t value ) {
		static const std::string S_ProcName( "setRequiredTSecGroupId" );
		if( value < cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_MIN_VALUE ) {
			throw cflib::CFLibArgumentUnderflowException( CLASS_NAME,
				S_ProcName,
				1,
				S_VALUE,
				value,
				cfcore::CFGenKbTSecGrpMembBuff::TSECGROUPID_MIN_VALUE );
		}
		requiredTSecGroupId = value;
	}

	const uuid_ptr_t CFGenKbTSecGrpMembByUUserIdxKey::getRequiredSecUserId() const {
		return( requiredSecUserId );
	}

	const uuid_ptr_t CFGenKbTSecGrpMembByUUserIdxKey::getRequiredSecUserIdReference() const {
		return( requiredSecUserId );
	}

	void CFGenKbTSecGrpMembByUUserIdxKey::setRequiredSecUserId( const uuid_ptr_t value ) {
		static const std::string S_ProcName( "setRequiredSecUserId" );
		uuid_copy( requiredSecUserId, value );
	}

	void CFGenKbTSecGrpMembByUUserIdxKey::generateRequiredSecUserId() {
		uuid_generate_random( requiredSecUserId );
	}

	size_t CFGenKbTSecGrpMembByUUserIdxKey::hashCode() const {
		size_t hashCode = 0;
		hashCode = hashCode + (int)( getRequiredTenantId() );
		hashCode = hashCode + getRequiredTSecGroupId();
		hashCode = hashCode + cflib::CFLib::hash( getRequiredSecUserId() );
		return( hashCode );
	}

	std::string CFGenKbTSecGrpMembByUUserIdxKey::toString() {
		static const std::string S_Space( " " );
		static const std::string S_Preamble( "<CFGenKbTSecGrpMembByUUserIdxKey" );
		static const std::string S_Postamble( "/>" );
		static const std::string S_TenantId( "TenantId" );
		static const std::string S_TSecGroupId( "TSecGroupId" );
		static const std::string S_SecUserId( "SecUserId" );
		std::string ret( S_Preamble );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt64( &S_Space, S_TenantId, getRequiredTenantId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredInt32( &S_Space, S_TSecGroupId, getRequiredTSecGroupId() ) );
		ret.append( cflib::CFLibXmlUtil::formatRequiredUuid( &S_Space, S_SecUserId, getRequiredSecUserId() ) );
		ret.append( S_Postamble );
		return( ret );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator <( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator <( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator <=( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator <=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator ==( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator ==( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator !=( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator !=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator >=( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator >=( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator >( const CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool CFGenKbTSecGrpMembByUUserIdxKey::operator >( const CFGenKbTSecGrpMembBuff& rhs ) {
		if( getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}
	CFGenKbTSecGrpMembByUUserIdxKey CFGenKbTSecGrpMembByUUserIdxKey::operator =( cfcore::CFGenKbTSecGrpMembByUUserIdxKey& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
		return( *this );
	}

	CFGenKbTSecGrpMembByUUserIdxKey CFGenKbTSecGrpMembByUUserIdxKey::operator =( cfcore::CFGenKbTSecGrpMembBuff& src ) {
		setRequiredTenantId( src.getRequiredTenantId() );
		setRequiredTSecGroupId( src.getRequiredTSecGroupId() );
		setRequiredSecUserId( src.getRequiredSecUserId() );
		return( *this );
	}

}

namespace std {

	bool operator <(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator <=(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator ==(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( false );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		return( true );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator !=(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() != rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() != rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 != uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >=(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( true );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembByUUserIdxKey& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}

	bool operator >(const  cfcore::CFGenKbTSecGrpMembByUUserIdxKey& lhs, const cfcore::CFGenKbTSecGrpMembBuff& rhs ) {
		if( lhs.getRequiredTenantId() < rhs.getRequiredTenantId() ) {
			return( false );
		}
		else if( lhs.getRequiredTenantId() > rhs.getRequiredTenantId() ) {
			return( true );
		}
		if( lhs.getRequiredTSecGroupId() < rhs.getRequiredTSecGroupId() ) {
			return( false );
		}
		else if( lhs.getRequiredTSecGroupId() > rhs.getRequiredTSecGroupId() ) {
			return( true );
		}
		if( 0 < uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( false );
		}
		else if( 0 > uuid_compare( lhs.getRequiredSecUserId(), rhs.getRequiredSecUserId() ) ) {
			return( true );
		}
		return( false );
	}
}

